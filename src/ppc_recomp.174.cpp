#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82973A1C"))) PPC_WEAK_FUNC(sub_82973A1C);
PPC_FUNC_IMPL(__imp__sub_82973A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82973A20"))) PPC_WEAK_FUNC(sub_82973A20);
PPC_FUNC_IMPL(__imp__sub_82973A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82973A28;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r27,r10,16389
	ctx.r27.u64 = ctx.r10.u64 | 16389;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82973a5c
	if (ctx.cr6.eq) goto loc_82973A5C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,20732
	ctx.r4.s64 = ctx.r11.s64 + 20732;
	// bl 0x8296f530
	ctx.lr = 0x82973A58;
	sub_8296F530(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82973A5C:
	// lwz r26,120(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82973ec4
	if (ctx.cr6.eq) goto loc_82973EC4;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// lis r31,-32253
	ctx.r31.s64 = -2113732608;
	// lis r30,-32253
	ctx.r30.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r9,r9,18368
	ctx.r9.s64 = ctx.r9.s64 + 18368;
	// addi r10,r10,18360
	ctx.r10.s64 = ctx.r10.s64 + 18360;
	// addi r20,r5,20696
	ctx.r20.s64 = ctx.r5.s64 + 20696;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r24,r4,20640
	ctx.r24.s64 = ctx.r4.s64 + 20640;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r15,r3,20600
	ctx.r15.s64 = ctx.r3.s64 + 20600;
	// addi r23,r31,20568
	ctx.r23.s64 = ctx.r31.s64 + 20568;
	// addi r19,r30,20528
	ctx.r19.s64 = ctx.r30.s64 + 20528;
	// addi r14,r6,20468
	ctx.r14.s64 = ctx.r6.s64 + 20468;
	// addi r18,r7,20436
	ctx.r18.s64 = ctx.r7.s64 + 20436;
	// addi r22,r8,20396
	ctx.r22.s64 = ctx.r8.s64 + 20396;
	// addi r17,r11,-19096
	ctx.r17.s64 = ctx.r11.s64 + -19096;
	// b 0x82973ad0
	goto loc_82973AD0;
loc_82973ACC:
	// lwz r26,116(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82973AD0:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r26,r11,16
	ctx.r26.s64 = ctx.r11.s64 + 16;
	// lwz r21,24(r9)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// bne cr6,0x82973af8
	if (!ctx.cr6.eq) goto loc_82973AF8;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82973AF8:
	// li r25,0
	ctx.r25.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// addi r30,r17,16
	ctx.r30.s64 = ctx.r17.s64 + 16;
loc_82973B04:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82973e9c
	if (!ctx.cr0.eq) goto loc_82973E9C;
	// lwz r5,-16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82973B18:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82973b3c
	if (ctx.cr0.eq) goto loc_82973B3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82973b18
	if (ctx.cr6.eq) goto loc_82973B18;
loc_82973B3C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82973e8c
	if (!ctx.cr0.eq) goto loc_82973E8C;
	// lwz r10,76(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82973b5c
	if (ctx.cr6.eq) goto loc_82973B5C;
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// b 0x82973b60
	goto loc_82973B60;
loc_82973B5C:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
loc_82973B60:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82973b88
	if (!ctx.cr6.eq) goto loc_82973B88;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82973b78
	if (!ctx.cr6.eq) goto loc_82973B78;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_82973B78:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8296f530
	ctx.lr = 0x82973B84;
	sub_8296F530(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82973B88:
	// lbz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,304(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	// slw r31,r10,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 & ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82973bb4
	if (ctx.cr0.eq) goto loc_82973BB4;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r5,-16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8296f530
	ctx.lr = 0x82973BB0;
	sub_8296F530(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82973BB4:
	// lwz r11,304(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	// lwz r10,308(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 308);
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,304(r29)
	PPC_STORE_U32(ctx.r29.u32 + 304, ctx.r11.u32);
	// bne cr6,0x82973bdc
	if (!ctx.cr6.eq) goto loc_82973BDC;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8296f530
	ctx.lr = 0x82973BD8;
	sub_8296F530(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82973BDC:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// blt cr6,0x82973e8c
	if (ctx.cr6.lt) goto loc_82973E8C;
	// lbz r11,-3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -3);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82973c64
	if (ctx.cr6.lt) goto loc_82973C64;
	// beq cr6,0x82973c38
	if (ctx.cr6.eq) goto loc_82973C38;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82973cf8
	if (!ctx.cr6.lt) goto loc_82973CF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8296df78
	ctx.lr = 0x82973C18;
	sub_8296DF78(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x82973d04
	if (!ctx.cr0.lt) goto loc_82973D04;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82973C24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,-16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x8296f530
	ctx.lr = 0x82973C30;
	sub_8296F530(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x82973e8c
	goto loc_82973E8C;
loc_82973C38:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8296e060
	ctx.lr = 0x82973C44;
	sub_8296E060(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x82973d04
	if (!ctx.cr0.lt) goto loc_82973D04;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r5,-16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8296f530
	ctx.lr = 0x82973C5C;
	sub_8296F530(ctx, base);
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x82973cf8
	goto loc_82973CF8;
loc_82973C64:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82973ce4
	if (ctx.cr6.eq) goto loc_82973CE4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82973ce4
	if (!ctx.cr6.eq) goto loc_82973CE4;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82973cd4
	if (ctx.cr6.eq) goto loc_82973CD4;
loc_82973C8C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82973C94:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// beq 0x82973cb8
	if (ctx.cr0.eq) goto loc_82973CB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82973c94
	if (ctx.cr6.eq) goto loc_82973C94;
loc_82973CB8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82973ccc
	if (ctx.cr0.eq) goto loc_82973CCC;
	// lwzu r9,8(r7)
	ea = 8 + ctx.r7.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82973c8c
	if (!ctx.cr6.eq) goto loc_82973C8C;
loc_82973CCC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82973cdc
	if (!ctx.cr6.eq) goto loc_82973CDC;
loc_82973CD4:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x82973c24
	goto loc_82973C24;
loc_82973CDC:
	// lbz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r7.u32 + 4);
	// b 0x82973cf8
	goto loc_82973CF8;
loc_82973CE4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r5,-16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8296f530
	ctx.lr = 0x82973CF4;
	sub_8296F530(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82973CF8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82973e8c
	if (ctx.cr6.lt) goto loc_82973E8C;
	// b 0x82973d08
	goto loc_82973D08;
loc_82973D04:
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82973D08:
	// lbz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -4);
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgt cr6,0x82973e8c
	if (ctx.cr6.gt) goto loc_82973E8C;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,13800
	ctx.r12.s64 = ctx.r12.s64 + 13800;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32105
	ctx.r12.s64 = -2104033280;
	// nop 
	// addi r12,r12,15676
	ctx.r12.s64 = ctx.r12.s64 + 15676;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82973D3C;
	case 1:
		goto loc_82973D4C;
	case 2:
		goto loc_82973D5C;
	case 3:
		goto loc_82973D68;
	case 4:
		goto loc_82973D74;
	case 5:
		goto loc_82973D80;
	case 6:
		goto loc_82973D8C;
	case 7:
		goto loc_82973D98;
	case 8:
		goto loc_82973DA4;
	case 9:
		goto loc_82973DB0;
	case 10:
		goto loc_82973DBC;
	case 11:
		goto loc_82973DC8;
	case 12:
		goto loc_82973DD8;
	case 13:
		goto loc_82973DE4;
	case 14:
		goto loc_82973DF0;
	case 15:
		goto loc_82973DFC;
	case 16:
		goto loc_82973E08;
	case 17:
		goto loc_82973E14;
	case 18:
		goto loc_82973E28;
	case 19:
		goto loc_82973E50;
	case 20:
		goto loc_82973E64;
	case 21:
		goto loc_82973E3C;
	default:
		__builtin_unreachable();
	}
loc_82973D3C:
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// rlwimi r31,r11,0,0,25
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFC0) | (ctx.r31.u64 & 0xFFFFFFFF0000003F);
	// stw r31,296(r29)
	PPC_STORE_U32(ctx.r29.u32 + 296, ctx.r31.u32);
	// b 0x82973e8c
	goto loc_82973E8C;
loc_82973D4C:
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// rlwimi r11,r31,8,18,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
loc_82973D54:
	// stw r11,296(r29)
	PPC_STORE_U32(ctx.r29.u32 + 296, ctx.r11.u32);
	// b 0x82973e8c
	goto loc_82973E8C;
loc_82973D5C:
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// rlwimi r11,r31,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// b 0x82973d54
	goto loc_82973D54;
loc_82973D68:
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// rlwimi r11,r31,17,14,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 17) & 0x20000) | (ctx.r11.u64 & 0xFFFFFFFFFFFDFFFF);
	// b 0x82973d54
	goto loc_82973D54;
loc_82973D74:
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// rlwimi r11,r31,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// b 0x82973d54
	goto loc_82973D54;
loc_82973D80:
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// rlwimi r11,r31,19,12,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 19) & 0x80000) | (ctx.r11.u64 & 0xFFFFFFFFFFF7FFFF);
	// b 0x82973d54
	goto loc_82973D54;
loc_82973D8C:
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// rlwimi r11,r31,20,8,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 20) & 0xF00000) | (ctx.r11.u64 & 0xFFFFFFFFFF0FFFFF);
	// b 0x82973d54
	goto loc_82973D54;
loc_82973D98:
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// rlwimi r11,r31,24,5,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 24) & 0x7000000) | (ctx.r11.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x82973d54
	goto loc_82973D54;
loc_82973DA4:
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// rlwimi r11,r31,27,4,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 27) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// b 0x82973d54
	goto loc_82973D54;
loc_82973DB0:
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// rlwimi r11,r31,28,1,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 28) & 0x70000000) | (ctx.r11.u64 & 0xFFFFFFFF8FFFFFFF);
	// b 0x82973d54
	goto loc_82973D54;
loc_82973DBC:
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// rlwimi r11,r31,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// b 0x82973d54
	goto loc_82973D54;
loc_82973DC8:
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// rlwimi r11,r31,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
loc_82973DD0:
	// stw r11,300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 300, ctx.r11.u32);
	// b 0x82973e8c
	goto loc_82973E8C;
loc_82973DD8:
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// rlwimi r11,r31,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// b 0x82973dd0
	goto loc_82973DD0;
loc_82973DE4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stb r11,302(r29)
	PPC_STORE_U8(ctx.r29.u32 + 302, ctx.r11.u8);
	// b 0x82973e8c
	goto loc_82973E8C;
loc_82973DF0:
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// rlwimi r11,r31,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// b 0x82973dd0
	goto loc_82973DD0;
loc_82973DFC:
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// rlwimi r11,r31,17,14,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 17) & 0x20000) | (ctx.r11.u64 & 0xFFFFFFFFFFFDFFFF);
	// b 0x82973dd0
	goto loc_82973DD0;
loc_82973E08:
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// rlwimi r11,r31,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// b 0x82973dd0
	goto loc_82973DD0;
loc_82973E14:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82973e8c
	if (ctx.cr6.eq) goto loc_82973E8C;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x82973e88
	goto loc_82973E88;
loc_82973E28:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82973e8c
	if (!ctx.cr6.eq) goto loc_82973E8C;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// b 0x82973e88
	goto loc_82973E88;
loc_82973E3C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82973e8c
	if (!ctx.cr6.eq) goto loc_82973E8C;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// b 0x82973e88
	goto loc_82973E88;
loc_82973E50:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82973e8c
	if (!ctx.cr6.eq) goto loc_82973E8C;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// b 0x82973e88
	goto loc_82973E88;
loc_82973E64:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82972ce0
	ctx.lr = 0x82973E70;
	sub_82972CE0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82973e8c
	if (ctx.cr0.lt) goto loc_82973E8C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82973e8c
	if (ctx.cr6.eq) goto loc_82973E8C;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_82973E88:
	// stw r11,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r11.u32);
loc_82973E8C:
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplwi cr6,r16,14
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 14, ctx.xer);
	// blt cr6,0x82973b04
	if (ctx.cr6.lt) goto loc_82973B04;
loc_82973E9C:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82973eb8
	if (!ctx.cr0.eq) goto loc_82973EB8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8296f530
	ctx.lr = 0x82973EB4;
	sub_8296F530(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82973EB8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82973acc
	if (!ctx.cr6.eq) goto loc_82973ACC;
loc_82973EC4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82973ED0"))) PPC_WEAK_FUNC(sub_82973ED0);
PPC_FUNC_IMPL(__imp__sub_82973ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82973ED8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82973f08
	if (!ctx.cr6.eq) goto loc_82973F08;
	// stw r30,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r30.u32);
	// bl 0x829736a0
	ctx.lr = 0x82973EFC;
	sub_829736A0(ctx, base);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// bl 0x8266cc60
	ctx.lr = 0x82973F08;
	sub_8266CC60(ctx, base);
loc_82973F08:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82973f78
	if (ctx.cr6.eq) goto loc_82973F78;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82973f50
	if (ctx.cr6.eq) goto loc_82973F50;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82973f78
	if (!ctx.cr6.eq) goto loc_82973F78;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// rlwimi r4,r30,0,29,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0xFFFFFFFFFFFFFF07) | (ctx.r4.u64 & 0xF8);
	// bl 0x8266cc68
	ctx.lr = 0x82973F3C;
	sub_8266CC68(ctx, base);
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82973f78
	if (ctx.cr6.eq) goto loc_82973F78;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82973f74
	goto loc_82973F74;
loc_82973F50:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// rlwinm r4,r11,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF8;
	// bl 0x8266cc68
	ctx.lr = 0x82973F64;
	sub_8266CC68(ctx, base);
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82973f78
	if (ctx.cr6.eq) goto loc_82973F78;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82973F74:
	// bl 0x82c38898
	ctx.lr = 0x82973F78;
	sub_82C38898(ctx, base);
loc_82973F78:
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82973F84"))) PPC_WEAK_FUNC(sub_82973F84);
PPC_FUNC_IMPL(__imp__sub_82973F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82973F88"))) PPC_WEAK_FUNC(sub_82973F88);
PPC_FUNC_IMPL(__imp__sub_82973F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82973F90;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r28.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// cmplwi cr6,r11,245
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 245, ctx.xer);
	// beq cr6,0x8297456c
	if (ctx.cr6.eq) goto loc_8297456C;
	// cmplwi cr6,r11,246
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 246, ctx.xer);
	// beq cr6,0x829743ec
	if (ctx.cr6.eq) goto loc_829743EC;
	// cmplwi cr6,r11,247
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 247, ctx.xer);
	// beq cr6,0x82974334
	if (ctx.cr6.eq) goto loc_82974334;
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// bne cr6,0x82974684
	if (!ctx.cr6.eq) goto loc_82974684;
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82973fe0
	if (ctx.cr6.eq) goto loc_82973FE0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,22196
	ctx.r4.s64 = ctx.r11.s64 + 22196;
	// bl 0x8296f530
	ctx.lr = 0x82973FE0;
	sub_8296F530(ctx, base);
loc_82973FE0:
	// lwz r27,92(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm. r9,r11,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,16(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rlwinm r24,r11,10,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// clrlwi r23,r10,28
	ctx.r23.u64 = ctx.r10.u32 & 0xF;
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r29,r10,16,28,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// rlwinm r22,r11,27,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq 0x82974010
	if (ctx.cr0.eq) goto loc_82974010;
	// li r24,2
	ctx.r24.s64 = 2;
loc_82974010:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r26,32(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r25,r11,22176
	ctx.r25.s64 = ctx.r11.s64 + 22176;
loc_82974020:
	// srw r11,r26,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r30.u8 & 0x3F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82974088
	if (ctx.cr6.eq) goto loc_82974088;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82974080
	if (ctx.cr6.eq) goto loc_82974080;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82974078
	if (ctx.cr6.eq) goto loc_82974078;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82974070
	if (ctx.cr6.eq) goto loc_82974070;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x829740dc
	if (ctx.cr6.eq) goto loc_829740DC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x829740d0
	if (ctx.cr6.eq) goto loc_829740D0;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x8297408c
	if (!ctx.cr6.eq) goto loc_8297408C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8296f530
	ctx.lr = 0x8297406C;
	sub_8296F530(ctx, base);
	// b 0x8297408c
	goto loc_8297408C;
loc_82974070:
	// ori r28,r28,8
	ctx.r28.u64 = ctx.r28.u64 | 8;
	// b 0x8297408c
	goto loc_8297408C;
loc_82974078:
	// ori r28,r28,4
	ctx.r28.u64 = ctx.r28.u64 | 4;
	// b 0x8297408c
	goto loc_8297408C;
loc_82974080:
	// ori r28,r28,2
	ctx.r28.u64 = ctx.r28.u64 | 2;
	// b 0x8297408c
	goto loc_8297408C;
loc_82974088:
	// ori r28,r28,1
	ctx.r28.u64 = ctx.r28.u64 | 1;
loc_8297408C:
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// blt cr6,0x82974020
	if (ctx.cr6.lt) goto loc_82974020;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829741f4
	if (!ctx.cr6.eq) goto loc_829741F4;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829741f4
	if (ctx.cr0.eq) goto loc_829741F4;
	// cmplwi cr6,r23,9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 9, ctx.xer);
	// beq cr6,0x829740f8
	if (ctx.cr6.eq) goto loc_829740F8;
	// cmplwi cr6,r23,13
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 13, ctx.xer);
	// ble cr6,0x829740c4
	if (!ctx.cr6.gt) goto loc_829740C4;
	// cmplwi cr6,r23,15
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 15, ctx.xer);
	// ble cr6,0x829740f8
	if (!ctx.cr6.gt) goto loc_829740F8;
loc_829740C4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,22072
	ctx.r4.s64 = ctx.r11.s64 + 22072;
	// b 0x829740e4
	goto loc_829740E4;
loc_829740D0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,22052
	ctx.r4.s64 = ctx.r11.s64 + 22052;
	// b 0x829740e4
	goto loc_829740E4;
loc_829740DC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,22032
	ctx.r4.s64 = ctx.r11.s64 + 22032;
loc_829740E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8296f530
	ctx.lr = 0x829740EC;
	sub_8296F530(ctx, base);
loc_829740EC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82974688
	goto loc_82974688;
loc_829740F8:
	// rlwinm r11,r23,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r8,r10,47
	ctx.r8.s64 = ctx.r10.s64 + 47;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297416c
	if (ctx.cr0.eq) goto loc_8297416C;
	// cmplwi cr6,r23,9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 9, ctx.xer);
	// bne cr6,0x82974138
	if (!ctx.cr6.eq) goto loc_82974138;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,15384
	ctx.r5.s64 = ctx.r11.s64 + 15384;
	// b 0x82974154
	goto loc_82974154;
loc_82974138:
	// cmplwi cr6,r23,14
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 14, ctx.xer);
	// bne cr6,0x8297414c
	if (!ctx.cr6.eq) goto loc_8297414C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,15392
	ctx.r5.s64 = ctx.r11.s64 + 15392;
	// b 0x82974154
	goto loc_82974154;
loc_8297414C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,15404
	ctx.r5.s64 = ctx.r11.s64 + 15404;
loc_82974154:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,21992
	ctx.r4.s64 = ctx.r11.s64 + 21992;
loc_82974160:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82974164:
	// bl 0x8296f530
	ctx.lr = 0x82974168;
	sub_8296F530(ctx, base);
	// b 0x829740ec
	goto loc_829740EC;
loc_8297416C:
	// addi r11,r31,188
	ctx.r11.s64 = ctx.r31.s64 + 188;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r30,24(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x82974198
	if (ctx.cr6.lt) goto loc_82974198;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,21920
	ctx.r4.s64 = ctx.r11.s64 + 21920;
	// b 0x829740e4
	goto loc_829740E4;
loc_82974198:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 220);
	// and. r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x829741cc
	if (ctx.cr0.eq) goto loc_829741CC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r9,21848
	ctx.r4.s64 = ctx.r9.s64 + 21848;
loc_829741B8:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r11,r11,-18728
	ctx.r11.s64 = ctx.r11.s64 + -18728;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82974164
	goto loc_82974164;
loc_829741CC:
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,220(r11)
	PPC_STORE_U8(ctx.r11.u32 + 220, ctx.r10.u8);
	// bl 0x82973ed0
	ctx.lr = 0x829741DC;
	sub_82973ED0(ctx, base);
	// rlwimi r29,r23,4,24,27
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r23.u32, 4) & 0xF0) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFF0F);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// bl 0x8266cfe8
	ctx.lr = 0x829741F0;
	sub_8266CFE8(ctx, base);
	// b 0x82974684
	goto loc_82974684;
loc_829741F4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r11,r24,4,26,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 4) & 0x30) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFCF);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// rlwimi r29,r11,4,0,27
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xFFFFFFF0) | (ctx.r29.u64 & 0xFFFFFFFF0000000F);
	// rlwinm r10,r29,27,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7;
	// clrlwi r11,r29,27
	ctx.r11.u64 = ctx.r29.u32 & 0x1F;
	// addi r8,r10,35
	ctx.r8.s64 = ctx.r10.s64 + 35;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82974234
	if (ctx.cr0.eq) goto loc_82974234;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,21784
	ctx.r4.s64 = ctx.r11.s64 + 21784;
	// b 0x829740e4
	goto loc_829740E4;
loc_82974234:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,140
	ctx.r11.s64 = ctx.r31.s64 + 140;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r30,24(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r10,r10,111
	ctx.r10.s64 = ctx.r10.s64 + 111;
	// ble cr6,0x8297427c
	if (!ctx.cr6.gt) goto loc_8297427C;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r11,21740
	ctx.r4.s64 = ctx.r11.s64 + 21740;
	// b 0x82974160
	goto loc_82974160;
loc_8297427C:
	// cmplwi cr6,r23,9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 9, ctx.xer);
	// bne cr6,0x82974290
	if (!ctx.cr6.eq) goto loc_82974290;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,21664
	ctx.r4.s64 = ctx.r11.s64 + 21664;
	// b 0x829740e4
	goto loc_829740E4;
loc_82974290:
	// cmplwi cr6,r23,14
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 14, ctx.xer);
	// bne cr6,0x829742a4
	if (!ctx.cr6.eq) goto loc_829742A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,21576
	ctx.r4.s64 = ctx.r11.s64 + 21576;
	// b 0x829740e4
	goto loc_829740E4;
loc_829742A4:
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r8,16(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r7,6
	ctx.r7.s64 = 6;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x829742ec
	if (ctx.cr6.eq) goto loc_829742EC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829742d4
	if (ctx.cr6.eq) goto loc_829742D4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,18360
	ctx.r5.s64 = ctx.r11.s64 + 18360;
	// b 0x829742dc
	goto loc_829742DC;
loc_829742D4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,18368
	ctx.r5.s64 = ctx.r11.s64 + 18368;
loc_829742DC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// addi r4,r11,21520
	ctx.r4.s64 = ctx.r11.s64 + 21520;
	// b 0x82974160
	goto loc_82974160;
loc_829742EC:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 172);
	// and. r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82974310
	if (ctx.cr0.eq) goto loc_82974310;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r9,21456
	ctx.r4.s64 = ctx.r9.s64 + 21456;
	// b 0x829741b8
	goto loc_829741B8;
loc_82974310:
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,172(r11)
	PPC_STORE_U8(ctx.r11.u32 + 172, ctx.r10.u8);
	// bl 0x82973ed0
	ctx.lr = 0x82974320;
	sub_82973ED0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8266cf50
	ctx.lr = 0x82974330;
	sub_8266CF50(ctx, base);
	// b 0x82974684
	goto loc_82974684;
loc_82974334:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82974350
	if (ctx.cr6.eq) goto loc_82974350;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21416
	ctx.r4.s64 = ctx.r11.s64 + 21416;
	// bl 0x8296f530
	ctx.lr = 0x82974350;
	sub_8296F530(ctx, base);
loc_82974350:
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bne cr6,0x829743e0
	if (!ctx.cr6.eq) goto loc_829743E0;
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,104(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// rlwinm r10,r29,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// addi r7,r10,65
	ctx.r7.s64 = ctx.r10.s64 + 65;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r30,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829743b0
	if (ctx.cr0.eq) goto loc_829743B0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,21368
	ctx.r4.s64 = ctx.r11.s64 + 21368;
loc_829743A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8296f530
	ctx.lr = 0x829743AC;
	sub_8296F530(ctx, base);
	// b 0x82974684
	goto loc_82974684;
loc_829743B0:
	// addi r11,r31,260
	ctx.r11.s64 = ctx.r31.s64 + 260;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82973ed0
	ctx.lr = 0x829743D0;
	sub_82973ED0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8266cd60
	ctx.lr = 0x829743DC;
	sub_8266CD60(ctx, base);
	// b 0x82974684
	goto loc_82974684;
loc_829743E0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,21332
	ctx.r4.s64 = ctx.r11.s64 + 21332;
	// b 0x8297467c
	goto loc_8297467C;
loc_829743EC:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82974408
	if (ctx.cr6.eq) goto loc_82974408;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21292
	ctx.r4.s64 = ctx.r11.s64 + 21292;
	// bl 0x8296f530
	ctx.lr = 0x82974408;
	sub_8296F530(ctx, base);
loc_82974408:
	// lwz r29,92(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82974560
	if (!ctx.cr6.eq) goto loc_82974560;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8297442C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82974444
	if (ctx.cr6.eq) goto loc_82974444;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8297444c
	if (!ctx.cr6.eq) goto loc_8297444C;
loc_82974444:
	// lwz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_8297444C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8297442c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8297442C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8297446c
	if (ctx.cr6.lt) goto loc_8297446C;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82974480
	if (!ctx.cr6.gt) goto loc_82974480;
loc_8297446C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21224
	ctx.r4.s64 = ctx.r11.s64 + 21224;
	// bl 0x8296f530
	ctx.lr = 0x8297447C;
	sub_8296F530(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_82974480:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82974494
	if (ctx.cr6.lt) goto loc_82974494;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x829744a8
	if (!ctx.cr6.gt) goto loc_829744A8;
loc_82974494:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21152
	ctx.r4.s64 = ctx.r11.s64 + 21152;
	// bl 0x8296f530
	ctx.lr = 0x829744A4;
	sub_8296F530(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_829744A8:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// blt cr6,0x829744bc
	if (ctx.cr6.lt) goto loc_829744BC;
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// ble cr6,0x829744d0
	if (!ctx.cr6.gt) goto loc_829744D0;
loc_829744BC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21080
	ctx.r4.s64 = ctx.r11.s64 + 21080;
	// bl 0x8296f530
	ctx.lr = 0x829744CC;
	sub_8296F530(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_829744D0:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829744f0
	if (ctx.cr6.eq) goto loc_829744F0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21020
	ctx.r4.s64 = ctx.r11.s64 + 21020;
	// bl 0x8296f530
	ctx.lr = 0x829744EC;
	sub_8296F530(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_829744F0:
	// lwz r30,24(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r30,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82974528
	if (ctx.cr0.eq) goto loc_82974528;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,20972
	ctx.r4.s64 = ctx.r11.s64 + 20972;
	// b 0x829743a4
	goto loc_829743A4;
loc_82974528:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82974684
	if (!ctx.cr6.eq) goto loc_82974684;
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82973ed0
	ctx.lr = 0x82974550;
	sub_82973ED0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8266cde0
	ctx.lr = 0x8297455C;
	sub_8266CDE0(ctx, base);
	// b 0x82974684
	goto loc_82974684;
loc_82974560:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,20932
	ctx.r4.s64 = ctx.r11.s64 + 20932;
	// b 0x8297467c
	goto loc_8297467C;
loc_8297456C:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82974588
	if (ctx.cr6.eq) goto loc_82974588;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,20892
	ctx.r4.s64 = ctx.r11.s64 + 20892;
	// bl 0x8296f530
	ctx.lr = 0x82974588;
	sub_8296F530(ctx, base);
loc_82974588:
	// lwz r26,92(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82974674
	if (!ctx.cr6.eq) goto loc_82974674;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// addi r30,r30,104
	ctx.r30.s64 = ctx.r30.s64 + 104;
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r27,r11,20856
	ctx.r27.s64 = ctx.r11.s64 + 20856;
loc_829745AC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82974628
	if (ctx.cr6.eq) goto loc_82974628;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82974628
	if (ctx.cr6.eq) goto loc_82974628;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x8297462c
	if (!ctx.cr6.gt) goto loc_8297462C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x8297462c
	if (ctx.cr6.gt) goto loc_8297462C;
loc_829745D4:
	// lfd f0,24(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_829745E0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x829745ac
	if (!ctx.cr0.eq) goto loc_829745AC;
	// lwz r30,24(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r30,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// addi r8,r10,56
	ctx.r8.s64 = ctx.r10.s64 + 56;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82974644
	if (ctx.cr0.eq) goto loc_82974644;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,20808
	ctx.r4.s64 = ctx.r11.s64 + 20808;
	// b 0x829743a4
	goto loc_829743A4;
loc_82974628:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8297462C:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x829745d4
	if (ctx.cr6.eq) goto loc_829745D4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8296f530
	ctx.lr = 0x82974640;
	sub_8296F530(ctx, base);
	// b 0x829745e0
	goto loc_829745E0;
loc_82974644:
	// addi r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 + 224;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82973ed0
	ctx.lr = 0x82974664;
	sub_82973ED0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8266ce60
	ctx.lr = 0x82974670;
	sub_8266CE60(ctx, base);
	// b 0x82974684
	goto loc_82974684;
loc_82974674:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,20772
	ctx.r4.s64 = ctx.r11.s64 + 20772;
loc_8297467C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8296f530
	ctx.lr = 0x82974684;
	sub_8296F530(ctx, base);
loc_82974684:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82974688:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82974690"))) PPC_WEAK_FUNC(sub_82974690);
PPC_FUNC_IMPL(__imp__sub_82974690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82974698;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r24,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r24.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r24,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r24.u64);
	// stw r24,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r24.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// oris r8,r10,57344
	ctx.r8.u64 = ctx.r10.u64 | 3758096384;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// beq cr6,0x82974704
	if (ctx.cr6.eq) goto loc_82974704;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// beq cr6,0x829746e8
	if (ctx.cr6.eq) goto loc_829746E8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_829746E8:
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// oris r10,r9,4096
	ctx.r10.u64 = ctx.r9.u64 | 268435456;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwimi r10,r11,27,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_82974704:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r26,r11,-18816
	ctx.r26.s64 = ctx.r11.s64 + -18816;
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r22,r10,27,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r23,r9,27,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8297473c
	if (ctx.cr6.eq) goto loc_8297473C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x829747d8
	if (!ctx.cr6.eq) goto loc_829747D8;
loc_8297473C:
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// cmplwi cr6,r11,240
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 240, ctx.xer);
	// beq cr6,0x82974774
	if (ctx.cr6.eq) goto loc_82974774;
	// cmplwi cr6,r11,242
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 242, ctx.xer);
	// beq cr6,0x82974764
	if (ctx.cr6.eq) goto loc_82974764;
	// cmplwi cr6,r11,244
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 244, ctx.xer);
	// bne cr6,0x82974778
	if (!ctx.cr6.eq) goto loc_82974778;
	// li r10,29
	ctx.r10.s64 = 29;
	// stw r10,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r10.u32);
	// b 0x82974768
	goto loc_82974768;
loc_82974764:
	// stw r28,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r28.u32);
loc_82974768:
	// lwz r11,104(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// stw r11,108(r27)
	PPC_STORE_U32(ctx.r27.u32 + 108, ctx.r11.u32);
	// b 0x82974778
	goto loc_82974778;
loc_82974774:
	// li r22,1
	ctx.r22.s64 = 1;
loc_82974778:
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829747d8
	if (!ctx.cr0.eq) goto loc_829747D8;
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// addi r10,r26,52
	ctx.r10.s64 = ctx.r26.s64 + 52;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// rlwimi r8,r11,24,3,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x1F000000) | (ctx.r8.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm r11,r8,8,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0x1F;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lbzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x829747d8
	if (ctx.cr0.eq) goto loc_829747D8;
	// addi r29,r27,104
	ctx.r29.s64 = ctx.r27.s64 + 104;
loc_829747A8:
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x829747c4
	if (ctx.cr6.eq) goto loc_829747C4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82972d28
	ctx.lr = 0x829747C4;
	sub_82972D28(ctx, base);
loc_829747C4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x829747a8
	if (ctx.cr6.lt) goto loc_829747A8;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_829747D8:
	// lwz r9,56(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x829747ec
	if (ctx.cr6.eq) goto loc_829747EC;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x82974a5c
	if (!ctx.cr6.eq) goto loc_82974A5C;
loc_829747EC:
	// addi r10,r9,-3
	ctx.r10.s64 = ctx.r9.s64 + -3;
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r11,241
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 241, ctx.xer);
	// and r29,r7,r28
	ctx.r29.u64 = ctx.r7.u64 & ctx.r28.u64;
	// addi r7,r29,26
	ctx.r7.s64 = ctx.r29.s64 + 26;
	// rlwinm r25,r7,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r25,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// beq cr6,0x8297484c
	if (ctx.cr6.eq) goto loc_8297484C;
	// cmplwi cr6,r11,243
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 243, ctx.xer);
	// beq cr6,0x82974840
	if (ctx.cr6.eq) goto loc_82974840;
	// cmplwi cr6,r11,252
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 252, ctx.xer);
	// beq cr6,0x82974838
	if (ctx.cr6.eq) goto loc_82974838;
	// cmplwi cr6,r11,253
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 253, ctx.xer);
	// bne cr6,0x82974850
	if (!ctx.cr6.eq) goto loc_82974850;
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82974844
	goto loc_82974844;
loc_82974838:
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x82974844
	goto loc_82974844;
loc_82974840:
	// li r11,5
	ctx.r11.s64 = 5;
loc_82974844:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82974850
	goto loc_82974850;
loc_8297484C:
	// li r23,1
	ctx.r23.s64 = 1;
loc_82974850:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82974888
	if (ctx.cr0.eq) goto loc_82974888;
	// lwz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// clrlwi r7,r10,30
	ctx.r7.u64 = ctx.r10.u32 & 0x3;
	// mulli r7,r7,85
	ctx.r7.s64 = ctx.r7.s64 * 85;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82974888
	if (ctx.cr6.eq) goto loc_82974888;
loc_8297486C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,23144
	ctx.r4.s64 = ctx.r11.s64 + 23144;
loc_82974874:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8296f530
	ctx.lr = 0x8297487C;
	sub_8296F530(ctx, base);
loc_8297487C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82974ca0
	goto loc_82974CA0;
loc_82974888:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi. r7,r23,24
	ctx.r7.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwimi r10,r11,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bne 0x82974a60
	if (!ctx.cr0.eq) goto loc_82974A60;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x829748b8
	if (ctx.cr6.eq) goto loc_829748B8;
	// lwz r9,60(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// addi r7,r26,52
	ctx.r7.s64 = ctx.r26.s64 + 52;
	// lbzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x82974a60
	if (!ctx.cr6.lt) goto loc_82974A60;
loc_829748B8:
	// lbzx r31,r11,r26
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82974a60
	if (ctx.cr0.eq) goto loc_82974A60;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// addi r30,r28,36
	ctx.r30.s64 = ctx.r28.s64 + 36;
	// bne cr6,0x829748f4
	if (!ctx.cr6.eq) goto loc_829748F4;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r10,85
	ctx.r10.s64 = ctx.r10.s64 * 85;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82974970
	if (!ctx.cr6.eq) goto loc_82974970;
	// b 0x8297486c
	goto loc_8297486C;
loc_829748F4:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// beq cr6,0x8297494c
	if (ctx.cr6.eq) goto loc_8297494C;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bne cr6,0x82974960
	if (!ctx.cr6.eq) goto loc_82974960;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r10,85
	ctx.r10.s64 = ctx.r10.s64 * 85;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82974940
	if (!ctx.cr6.eq) goto loc_82974940;
	// addi r11,r29,27
	ctx.r11.s64 = ctx.r29.s64 + 27;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r10,85
	ctx.r10.s64 = ctx.r10.s64 * 85;
loc_8297492C:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82974960
	if (!ctx.cr6.eq) goto loc_82974960;
loc_82974940:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,23040
	ctx.r4.s64 = ctx.r11.s64 + 23040;
	// b 0x82974874
	goto loc_82974874;
loc_8297494C:
	// rlwinm r10,r11,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 * 84;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x8297492c
	goto loc_8297492C;
loc_82974960:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8296dd18
	ctx.lr = 0x8297496C;
	sub_8296DD18(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82974970:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82972d28
	ctx.lr = 0x82974984;
	sub_82972D28(ctx, base);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bne cr6,0x82974a58
	if (!ctx.cr6.eq) goto loc_82974A58;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x829749a4
	if (ctx.cr6.eq) goto loc_829749A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,22952
	ctx.r4.s64 = ctx.r11.s64 + 22952;
	// b 0x82974874
	goto loc_82974874;
loc_829749A4:
	// addi r11,r29,27
	ctx.r11.s64 = ctx.r29.s64 + 27;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82974a4c
	if (ctx.cr6.eq) goto loc_82974A4C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82974a4c
	if (!ctx.cr6.eq) goto loc_82974A4C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r9,26,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x829749fc
	if (!ctx.cr6.eq) goto loc_829749FC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r11,22944
	ctx.r11.s64 = ctx.r11.s64 + 22944;
	// addi r4,r9,22832
	ctx.r4.s64 = ctx.r9.s64 + 22832;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8296f530
	ctx.lr = 0x829749F8;
	sub_8296F530(ctx, base);
	// b 0x8297487c
	goto loc_8297487C;
loc_829749FC:
	// lwzx r10,r25,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82974a1c
	if (ctx.cr6.eq) goto loc_82974A1C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,22720
	ctx.r4.s64 = ctx.r11.s64 + 22720;
	// b 0x82974874
	goto loc_82974874;
loc_82974A1C:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r7,r9,0,30,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFFFFFFC3) | (ctx.r7.u64 & 0x3C);
	// rlwimi r8,r11,28,2,2
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0x20000000) | (ctx.r8.u64 & 0xFFFFFFFFDFFFFFFF);
	// rlwimi r10,r11,26,5,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 26) & 0x4000000) | (ctx.r10.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// b 0x82974a60
	goto loc_82974A60;
loc_82974A4C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,22632
	ctx.r4.s64 = ctx.r11.s64 + 22632;
	// b 0x82974874
	goto loc_82974874;
loc_82974A58:
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82974A5C:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82974A60:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82974a74
	if (ctx.cr0.eq) goto loc_82974A74;
	// clrlwi r11,r10,6
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// oris r11,r11,51200
	ctx.r11.u64 = ctx.r11.u64 | 3355443200;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82974A74:
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82974a88
	if (ctx.cr0.eq) goto loc_82974A88;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r8,r11,25,3,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 25) & 0x1F000000) | (ctx.r8.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
loc_82974A88:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82972ea0
	ctx.lr = 0x82974A98;
	sub_82972EA0(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r5,56(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// std r24,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r24.u64);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// stw r24,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r24.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
loc_82974AC8:
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bne cr6,0x82974ae0
	if (!ctx.cr6.eq) goto loc_82974AE0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82974b5c
	if (!ctx.cr6.eq) goto loc_82974B5C;
	// lwz r11,104(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// b 0x82974aec
	goto loc_82974AEC;
loc_82974AE0:
	// addi r11,r9,26
	ctx.r11.s64 = ctx.r9.s64 + 26;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
loc_82974AEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82974b5c
	if (ctx.cr6.eq) goto loc_82974B5C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82974b5c
	if (!ctx.cr6.eq) goto loc_82974B5C;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r4,2816
	ctx.r4.s64 = 184549376;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82974b24
	if (ctx.cr6.eq) goto loc_82974B24;
	// lis r4,3072
	ctx.r4.s64 = 201326592;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82974b24
	if (ctx.cr6.eq) goto loc_82974B24;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x82974b28
	goto loc_82974B28;
loc_82974B24:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_82974B28:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82974b54
	if (ctx.cr6.eq) goto loc_82974B54;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x82974b4c
	if (!ctx.cr6.eq) goto loc_82974B4C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82974b50
	goto loc_82974B50;
loc_82974B4C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82974B50:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82974B54:
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82974B5C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x82974ac8
	if (ctx.cr6.lt) goto loc_82974AC8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82974b98
	if (ctx.cr6.eq) goto loc_82974B98;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82974b8c
	if (ctx.cr6.eq) goto loc_82974B8C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,22496
	ctx.r4.s64 = ctx.r11.s64 + 22496;
	// bl 0x8296f530
	ctx.lr = 0x82974B88;
	sub_8296F530(ctx, base);
	// b 0x82974b98
	goto loc_82974B98;
loc_82974B8C:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82974B98:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82974bb8
	if (ctx.cr6.eq) goto loc_82974BB8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82974bb8
	if (ctx.cr6.eq) goto loc_82974BB8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,22376
	ctx.r4.s64 = ctx.r11.s64 + 22376;
	// bl 0x8296f530
	ctx.lr = 0x82974BB8;
	sub_8296F530(ctx, base);
loc_82974BB8:
	// lwz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bne cr6,0x82974bf0
	if (!ctx.cr6.eq) goto loc_82974BF0;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82974bf0
	if (ctx.cr6.eq) goto loc_82974BF0;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82974bf0
	if (ctx.cr6.eq) goto loc_82974BF0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82974bf0
	if (ctx.cr6.eq) goto loc_82974BF0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,22240
	ctx.r4.s64 = ctx.r11.s64 + 22240;
	// bl 0x8296f530
	ctx.lr = 0x82974BF0;
	sub_8296F530(ctx, base);
loc_82974BF0:
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addic r9,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r9.s64 = ctx.r28.s64 + -1;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r9,r9,r28
	temp.u8 = (~ctx.r9.u32 + ctx.r28.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwimi r9,r10,29,29,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0x4) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// rlwimi r11,r9,29,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 29) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r11,r9,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// beq cr6,0x82974c24
	if (ctx.cr6.eq) goto loc_82974C24;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82974c30
	goto loc_82974C30;
loc_82974C24:
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82974C30:
	// rlwimi r11,r10,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82973ed0
	ctx.lr = 0x82974C44;
	sub_82973ED0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8266d118
	ctx.lr = 0x82974C50;
	sub_8266D118(ctx, base);
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82974c70
	if (ctx.cr6.eq) goto loc_82974C70;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266d200
	ctx.lr = 0x82974C70;
	sub_8266D200(ctx, base);
loc_82974C70:
	// lwz r11,332(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82974c9c
	if (ctx.cr6.eq) goto loc_82974C9C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,40(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,324(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 324);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82afe480
	ctx.lr = 0x82974C9C;
	sub_82AFE480(ctx, base);
loc_82974C9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82974CA0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82974CA8"))) PPC_WEAK_FUNC(sub_82974CA8);
PPC_FUNC_IMPL(__imp__sub_82974CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82974CB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32105
	ctx.r10.s64 = -2104033280;
	// stw r11,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r8,r10,-2768
	ctx.r8.s64 = ctx.r10.s64 + -2768;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8296e140
	ctx.lr = 0x82974CEC;
	sub_8296E140(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r30,60(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82973440
	ctx.lr = 0x82974D04;
	sub_82973440(ctx, base);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bne cr6,0x82974d64
	if (!ctx.cr6.eq) goto loc_82974D64;
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1003
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1003, ctx.xer);
	// beq cr6,0x82974d38
	if (ctx.cr6.eq) goto loc_82974D38;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23300
	ctx.r4.s64 = ctx.r11.s64 + 23300;
	// bl 0x8296f530
	ctx.lr = 0x82974D2C;
	sub_8296F530(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82974e28
	goto loc_82974E28;
loc_82974D38:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subfic r11,r11,95
	ctx.xer.ca = ctx.r11.u32 <= 95;
	ctx.r11.s64 = 95 - ctx.r11.s64;
	// divwu r8,r11,r10
	ctx.r8.u32 = ctx.r11.u32 / ctx.r10.u32;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 * 3;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwimi r10,r11,5,25,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x60) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF9F);
	// rlwimi r9,r10,20,5,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x7F00000) | (ctx.r9.u64 & 0xFFFFFFFFF80FFFFF);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
loc_82974D64:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82973ed0
	ctx.lr = 0x82974D70;
	sub_82973ED0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82974dc8
	if (!ctx.cr6.eq) goto loc_82974DC8;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82974d94
	if (!ctx.cr6.eq) goto loc_82974D94;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,14440
	ctx.r4.s64 = ctx.r11.s64 + 14440;
	// b 0x82974da8
	goto loc_82974DA8;
loc_82974D94:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82974db4
	if (!ctx.cr6.eq) goto loc_82974DB4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,23244
	ctx.r4.s64 = ctx.r11.s64 + 23244;
loc_82974DA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8296f530
	ctx.lr = 0x82974DB0;
	sub_8296F530(ctx, base);
	// b 0x82974e24
	goto loc_82974E24;
loc_82974DB4:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8266d100
	ctx.lr = 0x82974DC4;
	sub_8266D100(ctx, base);
	// b 0x82974dd8
	goto loc_82974DD8;
loc_82974DC8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8266d0a0
	ctx.lr = 0x82974DD8;
	sub_8266D0A0(ctx, base);
loc_82974DD8:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82974df8
	if (ctx.cr6.eq) goto loc_82974DF8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8266d200
	ctx.lr = 0x82974DF8;
	sub_8266D200(ctx, base);
loc_82974DF8:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82974e24
	if (ctx.cr6.eq) goto loc_82974E24;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,40(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82afe480
	ctx.lr = 0x82974E24;
	sub_82AFE480(ctx, base);
loc_82974E24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82974E28:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82974E30"))) PPC_WEAK_FUNC(sub_82974E30);
PPC_FUNC_IMPL(__imp__sub_82974E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82974E38;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32105
	ctx.r10.s64 = -2104033280;
	// stw r11,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r6,r10,-2768
	ctx.r6.s64 = ctx.r10.s64 + -2768;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x8296e640
	ctx.lr = 0x82974E6C;
	sub_8296E640(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82973440
	ctx.lr = 0x82974E80;
	sub_82973440(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bgt cr6,0x82974ec8
	if (ctx.cr6.gt) goto loc_82974EC8;
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,-1002
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1002, ctx.xer);
	// beq cr6,0x82974ebc
	if (ctx.cr6.eq) goto loc_82974EBC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23356
	ctx.r4.s64 = ctx.r11.s64 + 23356;
	// bl 0x8296f530
	ctx.lr = 0x82974EB0;
	sub_8296F530(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82974f30
	goto loc_82974F30;
loc_82974EBC:
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r11,r10,20,7,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x1F00000) | (ctx.r11.u64 & 0xFFFFFFFFFE0FFFFF);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82974EC8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82973ed0
	ctx.lr = 0x82974ED4;
	sub_82973ED0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8266d048
	ctx.lr = 0x82974EE0;
	sub_8266D048(ctx, base);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82974f00
	if (ctx.cr6.eq) goto loc_82974F00;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8266d200
	ctx.lr = 0x82974F00;
	sub_8266D200(ctx, base);
loc_82974F00:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82974f2c
	if (ctx.cr6.eq) goto loc_82974F2C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82afe480
	ctx.lr = 0x82974F2C;
	sub_82AFE480(ctx, base);
loc_82974F2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82974F30:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82974F38"))) PPC_WEAK_FUNC(sub_82974F38);
PPC_FUNC_IMPL(__imp__sub_82974F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82974F40;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,26
	ctx.r11.s64 = ctx.r5.s64 + 26;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// beq cr6,0x82974f70
	if (ctx.cr6.eq) goto loc_82974F70;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,23420
	ctx.r4.s64 = ctx.r11.s64 + 23420;
	// bl 0x8296f530
	ctx.lr = 0x82974F6C;
	sub_8296F530(ctx, base);
	// b 0x82975010
	goto loc_82975010;
loc_82974F70:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,24(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82973ed0
	ctx.lr = 0x82974F7C;
	sub_82973ED0(ctx, base);
	// bl 0x8266d218
	ctx.lr = 0x82974F80;
	sub_8266D218(ctx, base);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82974f9c
	goto loc_82974F9C;
loc_82974F8C:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82974fa4
	if (ctx.cr6.eq) goto loc_82974FA4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82974F9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82974f8c
	if (!ctx.cr6.eq) goto loc_82974F8C;
loc_82974FA4:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82974fc8
	if (!ctx.cr6.eq) goto loc_82974FC8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8296ecc0
	ctx.lr = 0x82974FC4;
	sub_8296ECC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82974FC8:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82967f50
	ctx.lr = 0x82974FD0;
	sub_82967F50(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82974ffc
	if (ctx.cr0.eq) goto loc_82974FFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82967f90
	ctx.lr = 0x82974FE0;
	sub_82967F90(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,14288
	ctx.r10.s64 = ctx.r10.s64 + 14288;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82975000
	goto loc_82975000;
loc_82974FFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82975000:
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_82975010:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82975018"))) PPC_WEAK_FUNC(sub_82975018);
PPC_FUNC_IMPL(__imp__sub_82975018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82975020;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,336(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82973ed0
	ctx.lr = 0x82975034;
	sub_82973ED0(ctx, base);
	// bl 0x8266d218
	ctx.lr = 0x82975038;
	sub_8266D218(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829750d4
	if (ctx.cr6.eq) goto loc_829750D4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r27,r11,23496
	ctx.r27.s64 = ctx.r11.s64 + 23496;
	// addi r26,r10,23456
	ctx.r26.s64 = ctx.r10.s64 + 23456;
loc_82975054:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82975068
	if (!ctx.cr6.eq) goto loc_82975068;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x82975074
	goto loc_82975074;
loc_82975068:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82975084
	if (ctx.cr6.lt) goto loc_82975084;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82975074:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8296f530
	ctx.lr = 0x82975080;
	sub_8296F530(ctx, base);
	// b 0x829750c8
	goto loc_829750C8;
loc_82975084:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829750c8
	if (ctx.cr6.eq) goto loc_829750C8;
	// clrlwi r28,r11,19
	ctx.r28.u64 = ctx.r11.u32 & 0x1FFF;
loc_82975094:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r24,16(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82973ed0
	ctx.lr = 0x829750A4;
	sub_82973ED0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8266d348
	ctx.lr = 0x829750AC;
	sub_8266D348(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82975094
	if (!ctx.cr6.eq) goto loc_82975094;
loc_829750C8:
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82975054
	if (!ctx.cr6.eq) goto loc_82975054;
loc_829750D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,336(r29)
	PPC_STORE_U32(ctx.r29.u32 + 336, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829750E4"))) PPC_WEAK_FUNC(sub_829750E4);
PPC_FUNC_IMPL(__imp__sub_829750E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829750E8"))) PPC_WEAK_FUNC(sub_829750E8);
PPC_FUNC_IMPL(__imp__sub_829750E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x829750F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82973ed0
	ctx.lr = 0x82975100;
	sub_82973ED0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8266d318
	ctx.lr = 0x82975108;
	sub_8266D318(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x829751c4
	if (ctx.cr0.eq) goto loc_829751C4;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82975124:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8266d378
	ctx.lr = 0x82975134;
	sub_8266D378(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829751e0
	if (ctx.cr0.eq) goto loc_829751E0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829751ac
	if (!ctx.cr6.eq) goto loc_829751AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x829751ac
	if (ctx.cr0.eq) goto loc_829751AC;
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82975184
	if (!ctx.cr6.eq) goto loc_82975184;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8297518c
	if (ctx.cr6.lt) goto loc_8297518C;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x829751ac
	if (!ctx.cr6.eq) goto loc_829751AC;
	// lwz r11,296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,296(r28)
	PPC_STORE_U32(ctx.r28.u32 + 296, ctx.r11.u32);
	// b 0x829751ac
	goto loc_829751AC;
loc_82975184:
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x829751ac
	if (ctx.cr6.gt) goto loc_829751AC;
loc_8297518C:
	// slw r10,r24,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// and. r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 & ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829751ac
	if (!ctx.cr0.eq) goto loc_829751AC;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// or r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 | ctx.r31.u64;
	// bge cr6,0x829751ac
	if (!ctx.cr6.lt) goto loc_829751AC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_829751AC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82975124
	if (ctx.cr6.lt) goto loc_82975124;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// bne cr6,0x829751c8
	if (!ctx.cr6.eq) goto loc_829751C8;
loc_829751C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829751C8:
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x829751f4
	if (!ctx.cr6.eq) goto loc_829751F4;
	// lwz r10,296(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// rlwimi r10,r11,28,1,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0x70000000) | (ctx.r10.u64 & 0xFFFFFFFF8FFFFFFF);
	// b 0x82975218
	goto loc_82975218;
loc_829751E0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,23564
	ctx.r4.s64 = ctx.r11.s64 + 23564;
	// bl 0x8296f530
	ctx.lr = 0x829751F0;
	sub_8296F530(ctx, base);
	// b 0x8297521c
	goto loc_8297521C;
loc_829751F4:
	// lwz r10,104(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82975204
	if (!ctx.cr0.eq) goto loc_82975204;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82975204:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82975210
	if (ctx.cr6.eq) goto loc_82975210;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82975210:
	// lwz r10,296(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// rlwimi r10,r11,20,8,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xF00000) | (ctx.r10.u64 & 0xFFFFFFFFFF0FFFFF);
loc_82975218:
	// stw r10,296(r28)
	PPC_STORE_U32(ctx.r28.u32 + 296, ctx.r10.u32);
loc_8297521C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82975224"))) PPC_WEAK_FUNC(sub_82975224);
PPC_FUNC_IMPL(__imp__sub_82975224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82975228"))) PPC_WEAK_FUNC(sub_82975228);
PPC_FUNC_IMPL(__imp__sub_82975228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82975230;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r24,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r24.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,88(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r24,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// beq cr6,0x82975268
	if (ctx.cr6.eq) goto loc_82975268;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,23932
	ctx.r4.s64 = ctx.r11.s64 + 23932;
	// bl 0x8296f530
	ctx.lr = 0x82975268;
	sub_8296F530(ctx, base);
loc_82975268:
	// lwz r28,100(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lis r23,3328
	ctx.r23.s64 = 218103808;
	// lwz r31,60(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8297528c
	if (ctx.cr6.eq) goto loc_8297528C;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82975290
	if (!ctx.cr6.eq) goto loc_82975290;
loc_8297528C:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_82975290:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x829752d0
	if (ctx.cr6.eq) goto loc_829752D0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829752c0
	if (ctx.cr6.eq) goto loc_829752C0;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// ble cr6,0x829752d0
	if (!ctx.cr6.gt) goto loc_829752D0;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// beq cr6,0x829752d0
	if (ctx.cr6.eq) goto loc_829752D0;
	// cmplwi cr6,r31,249
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 249, ctx.xer);
	// ble cr6,0x829752c0
	if (!ctx.cr6.gt) goto loc_829752C0;
	// cmplwi cr6,r31,251
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 251, ctx.xer);
	// ble cr6,0x829752d0
	if (!ctx.cr6.gt) goto loc_829752D0;
loc_829752C0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,23892
	ctx.r4.s64 = ctx.r11.s64 + 23892;
	// bl 0x8296f530
	ctx.lr = 0x829752D0;
	sub_8296F530(ctx, base);
loc_829752D0:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r11,r31,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x82973ed0
	ctx.lr = 0x829752E8;
	sub_82973ED0(ctx, base);
	// bl 0x8266d318
	ctx.lr = 0x829752EC;
	sub_8266D318(ctx, base);
	// slw r11,r26,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r31.u8 & 0x3F));
	// andi. r11,r11,16404
	ctx.r11.u64 = ctx.r11.u64 & 16404;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82975304
	if (ctx.cr0.eq) goto loc_82975304;
	// stw r26,312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 312, ctx.r26.u32);
loc_82975304:
	// cmplwi cr6,r31,30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 30, ctx.xer);
	// bgt cr6,0x829756bc
	if (ctx.cr6.gt) goto loc_829756BC;
	// beq cr6,0x82975610
	if (ctx.cr6.eq) goto loc_82975610;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x829757b8
	if (ctx.cr6.gt) goto loc_829757B8;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,13824
	ctx.r12.s64 = ctx.r12.s64 + 13824;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32105
	ctx.r12.s64 = -2104033280;
	// addi r12,r12,21316
	ctx.r12.s64 = ctx.r12.s64 + 21316;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82975344;
	case 1:
		goto loc_8297538C;
	case 2:
		goto loc_829753C0;
	case 3:
		goto loc_829753C0;
	case 4:
		goto loc_829757B8;
	case 5:
		goto loc_829757B8;
	case 6:
		goto loc_8297542C;
	case 7:
		goto loc_829754C4;
	case 8:
		goto loc_82975590;
	case 9:
		goto loc_829757B8;
	case 10:
		goto loc_82975538;
	case 11:
		goto loc_829755F8;
	case 12:
		goto loc_829753C0;
	case 13:
		goto loc_829753C0;
	default:
		__builtin_unreachable();
	}
loc_82975344:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82972c80
	ctx.lr = 0x82975350;
	sub_82972C80(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwimi r11,r3,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// rlwimi r11,r29,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq cr6,0x829757b8
	if (ctx.cr6.eq) goto loc_829757B8;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// li r10,20480
	ctx.r10.s64 = 20480;
	// ori r12,r12,23551
	ctx.r12.u64 = ctx.r12.u64 | 23551;
loc_82975374:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwimi r10,r25,10,21,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r25.u32, 10) & 0x400) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFBFF);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82975384:
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x829757b8
	goto loc_829757B8;
loc_8297538C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82972c80
	ctx.lr = 0x82975398;
	sub_82972C80(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwimi r11,r3,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// rlwimi r11,r29,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq cr6,0x829757b8
	if (ctx.cr6.eq) goto loc_829757B8;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// li r10,24576
	ctx.r10.s64 = 24576;
	// ori r12,r12,27647
	ctx.r12.u64 = ctx.r12.u64 | 27647;
	// b 0x82975374
	goto loc_82975374;
loc_829753C0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82972c80
	ctx.lr = 0x829753CC;
	sub_82972C80(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,104(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// rlwimi r10,r3,15,16,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 15) & 0x8000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF7FFF);
	// rlwimi r10,r29,0,20,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF000);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bne cr6,0x82975418
	if (!ctx.cr6.eq) goto loc_82975418;
	// lbz r10,27(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r9,r9,0,30,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFC03;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x829757b8
	if (ctx.cr6.eq) goto loc_829757B8;
	// ori r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 1024;
	// b 0x82975384
	goto loc_82975384;
loc_82975418:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,23852
	ctx.r4.s64 = ctx.r11.s64 + 23852;
loc_82975420:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8296f530
	ctx.lr = 0x82975428;
	sub_8296F530(ctx, base);
	// b 0x829757b8
	goto loc_829757B8;
loc_8297542C:
	// lwz r11,104(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x82975450
	if (ctx.cr6.eq) goto loc_82975450;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,23808
	ctx.r4.s64 = ctx.r11.s64 + 23808;
	// bl 0x8296f530
	ctx.lr = 0x8297544C;
	sub_8296F530(ctx, base);
	// b 0x82975460
	goto loc_82975460;
loc_82975450:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r10,r11,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_82975460:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82974f38
	ctx.lr = 0x82975470;
	sub_82974F38(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,23800
	ctx.r5.s64 = ctx.r11.s64 + 23800;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82972b78
	ctx.lr = 0x82975488;
	sub_82972B78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829757b8
	if (ctx.cr0.eq) goto loc_829757B8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// bl 0x8296e060
	ctx.lr = 0x8297549C;
	sub_8296E060(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829754b8
	if (ctx.cr0.lt) goto loc_829754B8;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r10,13,18,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0x2000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x829757b8
	goto loc_829757B8;
loc_829754B8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,23756
	ctx.r4.s64 = ctx.r11.s64 + 23756;
	// b 0x82975420
	goto loc_82975420;
loc_829754C4:
	// lwz r11,104(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x829754e8
	if (ctx.cr6.eq) goto loc_829754E8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,23808
	ctx.r4.s64 = ctx.r11.s64 + 23808;
	// bl 0x8296f530
	ctx.lr = 0x829754E4;
	sub_8296F530(ctx, base);
	// b 0x829754f8
	goto loc_829754F8;
loc_829754E8:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r10,r11,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_829754F8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82974f38
	ctx.lr = 0x82975508;
	sub_82974F38(ctx, base);
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829757b8
	if (ctx.cr6.eq) goto loc_829757B8;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// oris r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 2097152;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x829757b8
	if (ctx.cr6.eq) goto loc_829757B8;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// b 0x82975384
	goto loc_82975384;
loc_82975538:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,23744
	ctx.r5.s64 = ctx.r11.s64 + 23744;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82972b78
	ctx.lr = 0x82975550;
	sub_82972B78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82975590
	if (ctx.cr0.eq) goto loc_82975590;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// bl 0x8296e060
	ctx.lr = 0x82975564;
	sub_8296E060(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82975580
	if (ctx.cr0.lt) goto loc_82975580;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x82975594
	goto loc_82975594;
loc_82975580:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,23692
	ctx.r4.s64 = ctx.r11.s64 + 23692;
	// bl 0x8296f530
	ctx.lr = 0x82975590;
	sub_8296F530(ctx, base);
loc_82975590:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_82975594:
	// lwz r10,104(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// bne cr6,0x829755d4
	if (!ctx.cr6.eq) goto loc_829755D4;
	// lbz r9,27(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 27);
	// rlwinm r11,r11,0,30,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFC03;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// subf r10,r10,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r10.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r11,r10,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x829755e4
	goto loc_829755E4;
loc_829755D4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,23648
	ctx.r4.s64 = ctx.r11.s64 + 23648;
	// bl 0x8296f530
	ctx.lr = 0x829755E4;
	sub_8296F530(ctx, base);
loc_829755E4:
	// li r5,1
	ctx.r5.s64 = 1;
loc_829755E8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82974f38
	ctx.lr = 0x829755F4;
	sub_82974F38(ctx, base);
	// b 0x829757b8
	goto loc_829757B8;
loc_829755F8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82972700
	ctx.lr = 0x82975608;
	sub_82972700(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x829757b0
	goto loc_829757B0;
loc_82975610:
	// lwz r11,104(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// beq cr6,0x82975638
	if (ctx.cr6.eq) goto loc_82975638;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,23600
	ctx.r4.s64 = ctx.r11.s64 + 23600;
	// bl 0x8296f530
	ctx.lr = 0x82975634;
	sub_8296F530(ctx, base);
	// b 0x82975698
	goto loc_82975698;
loc_82975638:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82973ed0
	ctx.lr = 0x82975644;
	sub_82973ED0(ctx, base);
	// bl 0x8266d218
	ctx.lr = 0x82975648;
	sub_8266D218(ctx, base);
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829756ac
	if (ctx.cr6.eq) goto loc_829756AC;
loc_82975658:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82975670
	if (ctx.cr6.eq) goto loc_82975670;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82975658
	if (!ctx.cr6.eq) goto loc_82975658;
loc_82975670:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829756ac
	if (ctx.cr6.eq) goto loc_829756AC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x829756a4
	if (ctx.cr6.eq) goto loc_829756A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,23580
	ctx.r4.s64 = ctx.r11.s64 + 23580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8296f530
	ctx.lr = 0x82975698;
	sub_8296F530(ctx, base);
loc_82975698:
	// lis r24,-32768
	ctx.r24.s64 = -2147483648;
	// ori r24,r24,16389
	ctx.r24.u64 = ctx.r24.u64 | 16389;
	// b 0x82975800
	goto loc_82975800;
loc_829756A4:
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// b 0x829757b8
	goto loc_829757B8;
loc_829756AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8296ecc0
	ctx.lr = 0x829756B8;
	sub_8296ECC0(ctx, base);
	// b 0x829757b8
	goto loc_829757B8;
loc_829756BC:
	// cmplwi cr6,r31,250
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 250, ctx.xer);
	// beq cr6,0x82975710
	if (ctx.cr6.eq) goto loc_82975710;
	// cmplwi cr6,r31,251
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 251, ctx.xer);
	// bne cr6,0x829757b8
	if (!ctx.cr6.eq) goto loc_829757B8;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,19,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
	// ori r11,r11,36864
	ctx.r11.u64 = ctx.r11.u64 | 36864;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq cr6,0x829756fc
	if (ctx.cr6.eq) goto loc_829756FC;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r11,r25,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// b 0x82975708
	goto loc_82975708;
loc_829756FC:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82975708:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x829755e8
	goto loc_829755E8;
loc_82975710:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// ori r11,r11,45056
	ctx.r11.u64 = ctx.r11.u64 | 45056;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq cr6,0x82975740
	if (ctx.cr6.eq) goto loc_82975740;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r11,r25,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// b 0x8297574c
	goto loc_8297574C;
loc_82975740:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_8297574C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82974f38
	ctx.lr = 0x8297575C;
	sub_82974F38(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,23744
	ctx.r5.s64 = ctx.r11.s64 + 23744;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82972b78
	ctx.lr = 0x82975774;
	sub_82972B78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829757b8
	if (ctx.cr0.eq) goto loc_829757B8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// bl 0x8296e060
	ctx.lr = 0x82975788;
	sub_8296E060(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829757a0
	if (ctx.cr0.lt) goto loc_829757A0;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// b 0x82975384
	goto loc_82975384;
loc_829757A0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,23692
	ctx.r4.s64 = ctx.r11.s64 + 23692;
	// bl 0x8296f530
	ctx.lr = 0x829757B0;
	sub_8296F530(ctx, base);
loc_829757B0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82975800
	if (ctx.cr6.lt) goto loc_82975800;
loc_829757B8:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82975800
	if (ctx.cr0.eq) goto loc_82975800;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82973ed0
	ctx.lr = 0x829757CC;
	sub_82973ED0(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x8266d130
	ctx.lr = 0x829757D4;
	sub_8266D130(ctx, base);
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82975800
	if (ctx.cr6.eq) goto loc_82975800;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,40(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,324(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// bl 0x82afe480
	ctx.lr = 0x82975800;
	sub_82AFE480(ctx, base);
loc_82975800:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297580C"))) PPC_WEAK_FUNC(sub_8297580C);
PPC_FUNC_IMPL(__imp__sub_8297580C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82975810"))) PPC_WEAK_FUNC(sub_82975810);
PPC_FUNC_IMPL(__imp__sub_82975810) {
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
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8297583c
	if (!ctx.cr6.eq) goto loc_8297583C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82975944
	goto loc_82975944;
loc_8297583C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829750e8
	ctx.lr = 0x82975844;
	sub_829750E8(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829758a4
	if (!ctx.cr0.eq) goto loc_829758A4;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297586c
	if (ctx.cr0.eq) goto loc_8297586C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24264
	ctx.r4.s64 = ctx.r11.s64 + 24264;
	// bl 0x8296f530
	ctx.lr = 0x8297586C;
	sub_8296F530(ctx, base);
loc_8297586C:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82975888
	if (ctx.cr0.eq) goto loc_82975888;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24192
	ctx.r4.s64 = ctx.r11.s64 + 24192;
	// bl 0x8296f530
	ctx.lr = 0x82975888;
	sub_8296F530(ctx, base);
loc_82975888:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829758a4
	if (ctx.cr0.eq) goto loc_829758A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24120
	ctx.r4.s64 = ctx.r11.s64 + 24120;
	// bl 0x8296f530
	ctx.lr = 0x829758A4;
	sub_8296F530(ctx, base);
loc_829758A4:
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm. r11,r10,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829758bc
	if (ctx.cr0.eq) goto loc_829758BC;
	// lwz r9,296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// oris r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 262144;
	// stw r9,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r9.u32);
loc_829758BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82975910
	if (!ctx.cr6.eq) goto loc_82975910;
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829758e8
	if (ctx.cr0.eq) goto loc_829758E8;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829758e8
	if (ctx.cr0.eq) goto loc_829758E8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24052
	ctx.r4.s64 = ctx.r11.s64 + 24052;
	// bl 0x8296f530
	ctx.lr = 0x829758E8;
	sub_8296F530(ctx, base);
loc_829758E8:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82975910
	if (ctx.cr0.eq) goto loc_82975910;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82975910
	if (ctx.cr0.eq) goto loc_82975910;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23984
	ctx.r4.s64 = ctx.r11.s64 + 23984;
	// bl 0x8296f530
	ctx.lr = 0x82975910;
	sub_8296F530(ctx, base);
loc_82975910:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82975928
	if (ctx.cr6.eq) goto loc_82975928;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82975944
	goto loc_82975944;
loc_82975928:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82973ed0
	ctx.lr = 0x82975934;
	sub_82973ED0(ctx, base);
	// lwz r5,300(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x8266cca0
	ctx.lr = 0x82975940;
	sub_8266CCA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82975944:
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

__attribute__((alias("__imp__sub_82975958"))) PPC_WEAK_FUNC(sub_82975958);
PPC_FUNC_IMPL(__imp__sub_82975958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82975960;
	__savegprlr_25(ctx, base);
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82975810
	ctx.lr = 0x82975974;
	sub_82975810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82975d8c
	if (ctx.cr0.lt) goto loc_82975D8C;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829759bc
	if (ctx.cr0.eq) goto loc_829759BC;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829759b0
	if (!ctx.cr6.eq) goto loc_829759B0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,24512
	ctx.r4.s64 = ctx.r11.s64 + 24512;
	// bl 0x8296f530
	ctx.lr = 0x829759A4;
	sub_8296F530(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82975d8c
	goto loc_82975D8C;
loc_829759B0:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82973ed0
	ctx.lr = 0x829759B8;
	sub_82973ED0(ctx, base);
	// bl 0x8266cc88
	ctx.lr = 0x829759BC;
	sub_8266CC88(ctx, base);
loc_829759BC:
	// lwz r29,324(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x829759e8
	if (ctx.cr6.eq) goto loc_829759E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828b2440
	ctx.lr = 0x829759D0;
	sub_828B2440(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82973ed0
	ctx.lr = 0x829759E0;
	sub_82973ED0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8266cce8
	ctx.lr = 0x829759E8;
	sub_8266CCE8(ctx, base);
loc_829759E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82973ed0
	ctx.lr = 0x829759F4;
	sub_82973ED0(ctx, base);
	// bl 0x8266d408
	ctx.lr = 0x829759F8;
	sub_8266D408(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82975a24
	if (ctx.cr6.eq) goto loc_82975A24;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82973ed0
	ctx.lr = 0x82975A10;
	sub_82973ED0(ctx, base);
	// bl 0x8266d218
	ctx.lr = 0x82975A14;
	sub_8266D218(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x82af8ec0
	ctx.lr = 0x82975A24;
	sub_82AF8EC0(ctx, base);
loc_82975A24:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82975a90
	if (ctx.cr6.eq) goto loc_82975A90;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82975a70
	if (ctx.cr6.eq) goto loc_82975A70;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,260
	ctx.r8.s64 = 260;
	// addi r7,r1,672
	ctx.r7.s64 = ctx.r1.s64 + 672;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82a77b90
	ctx.lr = 0x82975A58;
	sub_82A77B90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82973ed0
	ctx.lr = 0x82975A64;
	sub_82973ED0(ctx, base);
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8266d138
	ctx.lr = 0x82975A70;
	sub_8266D138(ctx, base);
loc_82975A70:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// bl 0x82afda40
	ctx.lr = 0x82975A7C;
	sub_82AFDA40(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82973ed0
	ctx.lr = 0x82975A88;
	sub_82973ED0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8266ccc0
	ctx.lr = 0x82975A90;
	sub_8266CCC0(ctx, base);
loc_82975A90:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82973ed0
	ctx.lr = 0x82975A9C;
	sub_82973ED0(ctx, base);
	// bl 0x8266d460
	ctx.lr = 0x82975AA0;
	sub_8266D460(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82931510
	ctx.lr = 0x82975AA8;
	sub_82931510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82975d8c
	if (ctx.cr0.lt) goto loc_82975D8C;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82973ed0
	ctx.lr = 0x82975AC4;
	sub_82973ED0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82975AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82975AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8266d4f0
	ctx.lr = 0x82975B10;
	sub_8266D4F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82975ba0
	if (ctx.cr0.lt) goto loc_82975BA0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82975b44
	if (ctx.cr6.eq) goto loc_82975B44;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82975B34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-9552
	ctx.r5.s64 = ctx.r11.s64 + -9552;
	// bl 0x8266e2b8
	ctx.lr = 0x82975B44;
	sub_8266E2B8(ctx, base);
loc_82975B44:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82975ba0
	if (ctx.cr6.eq) goto loc_82975BA0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82975ba0
	if (ctx.cr0.eq) goto loc_82975BA0;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r8,r11,-8752
	ctx.r8.s64 = ctx.r11.s64 + -8752;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x82b06110
	ctx.lr = 0x82975B7C;
	sub_82B06110(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82975ba0
	if (!ctx.cr0.eq) goto loc_82975BA0;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82975B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82975d8c
	goto loc_82975D8C;
loc_82975BA0:
	// lis r11,-30602
	ctx.r11.s64 = -2005532672;
	// ori r11,r11,2945
	ctx.r11.u64 = ctx.r11.u64 | 2945;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82975bc8
	if (!ctx.cr6.eq) goto loc_82975BC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24432
	ctx.r4.s64 = ctx.r11.s64 + 24432;
	// bl 0x8296f530
	ctx.lr = 0x82975BC0;
	sub_8296F530(ctx, base);
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_82975BC8:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// blt cr6,0x82975d88
	if (ctx.cr6.lt) goto loc_82975D88;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82975d88
	if (!ctx.cr0.eq) goto loc_82975D88;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82975bfc
	if (ctx.cr6.eq) goto loc_82975BFC;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r29,r10,10,15,21
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1FC00;
loc_82975BFC:
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82975c08
	if (ctx.cr0.eq) goto loc_82975C08;
	// oris r29,r29,4
	ctx.r29.u64 = ctx.r29.u64 | 262144;
loc_82975C08:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82975C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82975C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-3592
	ctx.r7.s64 = ctx.r11.s64 + -3592;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// bl 0x822d6f30
	ctx.lr = 0x82975C50;
	sub_822D6F30(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82975c64
	if (ctx.cr0.lt) goto loc_82975C64;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82975d88
	if (ctx.cr6.eq) goto loc_82975D88;
loc_82975C64:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// rlwinm r11,r30,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// sth r27,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, ctx.r27.u16);
	// stw r4,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// bge cr6,0x82975c9c
	if (!ctx.cr6.lt) goto loc_82975C9C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r7,r11,24384
	ctx.r7.s64 = ctx.r11.s64 + 24384;
	// b 0x82975ca8
	goto loc_82975CA8;
loc_82975C9C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r7,r11,24332
	ctx.r7.s64 = ctx.r11.s64 + 24332;
loc_82975CA8:
	// addi r6,r10,-24420
	ctx.r6.s64 = ctx.r10.s64 + -24420;
	// beq cr6,0x82975cbc
	if (ctx.cr6.eq) goto loc_82975CBC;
	// li r5,7101
	ctx.r5.s64 = 7101;
	// bl 0x82932c80
	ctx.lr = 0x82975CB8;
	sub_82932C80(ctx, base);
	// b 0x82975cc4
	goto loc_82975CC4;
loc_82975CBC:
	// li r5,7102
	ctx.r5.s64 = 7102;
	// bl 0x82932e48
	ctx.lr = 0x82975CC4;
	sub_82932E48(ctx, base);
loc_82975CC4:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82975CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82975CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-8336
	ctx.r7.s64 = ctx.r11.s64 + -8336;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// bl 0x822d6f30
	ctx.lr = 0x82975D10;
	sub_822D6F30(ctx, base);
	// lhz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82975d24
	if (ctx.cr0.eq) goto loc_82975D24;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8296de88
	ctx.lr = 0x82975D24;
	sub_8296DE88(ctx, base);
loc_82975D24:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82975D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82975D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// addi r6,r11,-8336
	ctx.r6.s64 = ctx.r11.s64 + -8336;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x82b041f0
	ctx.lr = 0x82975D74;
	sub_82B041F0(ctx, base);
	// lhz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82975d88
	if (ctx.cr0.eq) goto loc_82975D88;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8296de88
	ctx.lr = 0x82975D88;
	sub_8296DE88(ctx, base);
loc_82975D88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82975D8C:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82975D94"))) PPC_WEAK_FUNC(sub_82975D94);
PPC_FUNC_IMPL(__imp__sub_82975D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82975D98"))) PPC_WEAK_FUNC(sub_82975D98);
PPC_FUNC_IMPL(__imp__sub_82975D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82975DA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r30,r10,16389
	ctx.r30.u64 = ctx.r10.u64 | 16389;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82975dd0
	if (ctx.cr6.eq) goto loc_82975DD0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,24784
	ctx.r4.s64 = ctx.r11.s64 + 24784;
	// bl 0x8296f530
	ctx.lr = 0x82975DCC;
	sub_8296F530(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82975DD0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82975df0
	if (!ctx.cr0.eq) goto loc_82975DF0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24712
	ctx.r4.s64 = ctx.r11.s64 + 24712;
	// bl 0x8296f530
	ctx.lr = 0x82975DEC;
	sub_8296F530(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82975DF0:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82975e10
	if (ctx.cr6.eq) goto loc_82975E10;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24660
	ctx.r4.s64 = ctx.r11.s64 + 24660;
	// bl 0x8296f530
	ctx.lr = 0x82975E0C;
	sub_8296F530(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82975E10:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82975e30
	if (ctx.cr6.eq) goto loc_82975E30;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24592
	ctx.r4.s64 = ctx.r11.s64 + 24592;
	// bl 0x8296f530
	ctx.lr = 0x82975E2C;
	sub_8296F530(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82975E30:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82975ea0
	if (ctx.cr6.lt) goto loc_82975EA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82975018
	ctx.lr = 0x82975E40;
	sub_82975018(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// bl 0x82975810
	ctx.lr = 0x82975E50;
	sub_82975810(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82973ed0
	ctx.lr = 0x82975E5C;
	sub_82973ED0(ctx, base);
	// bl 0x8266cc88
	ctx.lr = 0x82975E60;
	sub_8266CC88(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82973ed0
	ctx.lr = 0x82975E6C;
	sub_82973ED0(ctx, base);
	// bl 0x8266d218
	ctx.lr = 0x82975E70;
	sub_8266D218(ctx, base);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r4,r10,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// beq cr6,0x82975e8c
	if (ctx.cr6.eq) goto loc_82975E8C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82547c10
	ctx.lr = 0x82975E8C;
	sub_82547C10(ctx, base);
loc_82975E8C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8296ec10
	ctx.lr = 0x82975EA0;
	sub_8296EC10(ctx, base);
loc_82975EA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82975EAC"))) PPC_WEAK_FUNC(sub_82975EAC);
PPC_FUNC_IMPL(__imp__sub_82975EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82975EB0"))) PPC_WEAK_FUNC(sub_82975EB0);
PPC_FUNC_IMPL(__imp__sub_82975EB0) {
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
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// beq cr6,0x82975f30
	if (ctx.cr6.eq) goto loc_82975F30;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x82975f18
	if (ctx.cr6.eq) goto loc_82975F18;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x82975ef4
	if (ctx.cr6.eq) goto loc_82975EF4;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82975f9c
	if (!ctx.cr6.eq) goto loc_82975F9C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,24984
	ctx.r4.s64 = ctx.r11.s64 + 24984;
	// b 0x82975f20
	goto loc_82975F20;
loc_82975EF4:
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// beq cr6,0x82975f0c
	if (ctx.cr6.eq) goto loc_82975F0C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,24932
	ctx.r4.s64 = ctx.r11.s64 + 24932;
	// b 0x82975f20
	goto loc_82975F20;
loc_82975F0C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,24880
	ctx.r4.s64 = ctx.r11.s64 + 24880;
	// b 0x82975f20
	goto loc_82975F20;
loc_82975F18:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,24824
	ctx.r4.s64 = ctx.r11.s64 + 24824;
loc_82975F20:
	// bl 0x8296f530
	ctx.lr = 0x82975F24;
	sub_8296F530(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x82975f9c
	goto loc_82975F9C;
loc_82975F30:
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x82975f9c
	if (ctx.cr6.gt) goto loc_82975F9C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82975f8c
	if (ctx.cr6.eq) goto loc_82975F8C;
	// bdz 0x82975f84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82975F84;
	// bdz 0x82975f64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82975F64;
	// bdz 0x82975f64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82975F64;
	// bdz 0x82975f64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82975F64;
	// bdz 0x82975f6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82975F6C;
	// bdz 0x82975f7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82975F7C;
	// bdz 0x82975f94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82975F94;
	// b 0x82975f74
	goto loc_82975F74;
loc_82975F64:
	// bl 0x82974690
	ctx.lr = 0x82975F68;
	sub_82974690(ctx, base);
	// b 0x82975f98
	goto loc_82975F98;
loc_82975F6C:
	// bl 0x82975228
	ctx.lr = 0x82975F70;
	sub_82975228(ctx, base);
	// b 0x82975f98
	goto loc_82975F98;
loc_82975F74:
	// bl 0x82975d98
	ctx.lr = 0x82975F78;
	sub_82975D98(ctx, base);
	// b 0x82975f98
	goto loc_82975F98;
loc_82975F7C:
	// bl 0x82973a20
	ctx.lr = 0x82975F80;
	sub_82973A20(ctx, base);
	// b 0x82975f98
	goto loc_82975F98;
loc_82975F84:
	// bl 0x82974ca8
	ctx.lr = 0x82975F88;
	sub_82974CA8(ctx, base);
	// b 0x82975f98
	goto loc_82975F98;
loc_82975F8C:
	// bl 0x82974e30
	ctx.lr = 0x82975F90;
	sub_82974E30(ctx, base);
	// b 0x82975f98
	goto loc_82975F98;
loc_82975F94:
	// bl 0x82973f88
	ctx.lr = 0x82975F98;
	sub_82973F88(ctx, base);
loc_82975F98:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82975F9C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82975FB0"))) PPC_WEAK_FUNC(sub_82975FB0);
PPC_FUNC_IMPL(__imp__sub_82975FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82975FB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829768c0
	if (!ctx.cr6.eq) goto loc_829768C0;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82976024
	if (ctx.cr6.eq) goto loc_82976024;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82975FF0:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82976058
	if (ctx.cr6.eq) goto loc_82976058;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r8.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// bne cr6,0x82975ff0
	if (!ctx.cr6.eq) goto loc_82975FF0;
loc_82976024:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r4,98
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 98, ctx.xer);
	// bgt cr6,0x82976858
	if (ctx.cr6.gt) goto loc_82976858;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// rlwinm r0,r4,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,13856
	ctx.r12.s64 = ctx.r12.s64 + 13856;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32105
	ctx.r12.s64 = -2104033280;
	// addi r12,r12,24664
	ctx.r12.s64 = ctx.r12.s64 + 24664;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_8297616C;
	case 1:
		goto loc_8297607C;
	case 2:
		goto loc_8297607C;
	case 3:
		goto loc_82976084;
	case 4:
		goto loc_8297607C;
	case 5:
		goto loc_8297607C;
	case 6:
		goto loc_82976098;
	case 7:
		goto loc_8297616C;
	case 8:
		goto loc_82976154;
	case 9:
		goto loc_82976174;
	case 10:
		goto loc_82976188;
	case 11:
		goto loc_8297607C;
	case 12:
		goto loc_82976194;
	case 13:
		goto loc_8297607C;
	case 14:
		goto loc_829761A8;
	case 15:
		goto loc_829761B8;
	case 16:
		goto loc_829761B8;
	case 17:
		goto loc_829761B8;
	case 18:
		goto loc_829761B8;
	case 19:
		goto loc_829761B8;
	case 20:
		goto loc_829761B8;
	case 21:
		goto loc_829761B8;
	case 22:
		goto loc_829761B8;
	case 23:
		goto loc_829761B8;
	case 24:
		goto loc_82976204;
	case 25:
		goto loc_82976204;
	case 26:
		goto loc_82976238;
	case 27:
		goto loc_82976248;
	case 28:
		goto loc_82976258;
	case 29:
		goto loc_82976268;
	case 30:
		goto loc_82976280;
	case 31:
		goto loc_829761B8;
	case 32:
		goto loc_829762B0;
	case 33:
		goto loc_829761B8;
	case 34:
		goto loc_829762B0;
	case 35:
		goto loc_829761B8;
	case 36:
		goto loc_82976238;
	case 37:
		goto loc_82976258;
	case 38:
		goto loc_82976280;
	case 39:
		goto loc_82976204;
	case 40:
		goto loc_82976290;
	case 41:
		goto loc_8297631C;
	case 42:
		goto loc_82976348;
	case 43:
		goto loc_82976370;
	case 44:
		goto loc_8297638C;
	case 45:
		goto loc_82976414;
	case 46:
		goto loc_8297607C;
	case 47:
		goto loc_82976438;
	case 48:
		goto loc_8297607C;
	case 49:
		goto loc_8297607C;
	case 50:
		goto loc_8297607C;
	case 51:
		goto loc_82976480;
	case 52:
		goto loc_8297607C;
	case 53:
		goto loc_829764D0;
	case 54:
		goto loc_829764FC;
	case 55:
		goto loc_82976528;
	case 56:
		goto loc_8297607C;
	case 57:
		goto loc_82976570;
	case 58:
		goto loc_82976858;
	case 59:
		goto loc_82976858;
	case 60:
		goto loc_829765C0;
	case 61:
		goto loc_829765D8;
	case 62:
		goto loc_8297607C;
	case 63:
		goto loc_829765E0;
	case 64:
		goto loc_82976640;
	case 65:
		goto loc_82976670;
	case 66:
		goto loc_82976690;
	case 67:
		goto loc_829766D0;
	case 68:
		goto loc_8297607C;
	case 69:
		goto loc_8297607C;
	case 70:
		goto loc_82976708;
	case 71:
		goto loc_8297671C;
	case 72:
		goto loc_8297671C;
	case 73:
		goto loc_82976744;
	case 74:
		goto loc_8297607C;
	case 75:
		goto loc_8297607C;
	case 76:
		goto loc_8297676C;
	case 77:
		goto loc_829767F8;
	case 78:
		goto loc_829767F8;
	case 79:
		goto loc_829767F8;
	case 80:
		goto loc_829767F8;
	case 81:
		goto loc_829767F8;
	case 82:
		goto loc_829767F8;
	case 83:
		goto loc_829767F8;
	case 84:
		goto loc_829767F8;
	case 85:
		goto loc_829767F8;
	case 86:
		goto loc_829767F8;
	case 87:
		goto loc_829767F8;
	case 88:
		goto loc_829767F8;
	case 89:
		goto loc_829767F8;
	case 90:
		goto loc_82976858;
	case 91:
		goto loc_829767F8;
	case 92:
		goto loc_829767F8;
	case 93:
		goto loc_829767F8;
	case 94:
		goto loc_829767F8;
	case 95:
		goto loc_829767F8;
	case 96:
		goto loc_82976828;
	case 97:
		goto loc_82976828;
	case 98:
		goto loc_82976828;
	default:
		__builtin_unreachable();
	}
loc_82976058:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-19044
	ctx.r6.s64 = ctx.r11.s64 + -19044;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82932c80
	ctx.lr = 0x82976070;
	sub_82932C80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// b 0x829768c0
	goto loc_829768C0;
loc_8297607C:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x82976858
	goto loc_82976858;
loc_82976084:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x829680b0
	ctx.lr = 0x82976090;
	sub_829680B0(ctx, base);
loc_82976090:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82976858
	goto loc_82976858;
loc_82976098:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82976858
	if (ctx.cr6.eq) goto loc_82976858;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829760c8
	if (ctx.cr6.eq) goto loc_829760C8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,25056
	ctx.r4.s64 = ctx.r11.s64 + 25056;
	// bl 0x8296f530
	ctx.lr = 0x829760C4;
	sub_8296F530(ctx, base);
	// b 0x82976130
	goto loc_82976130;
loc_829760C8:
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829760ec
	if (!ctx.cr6.eq) goto loc_829760EC;
	// stw r27,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829736a0
	ctx.lr = 0x829760E0;
	sub_829736A0(ctx, base);
	// lwz r4,104(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r3,320(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// bl 0x8266cc60
	ctx.lr = 0x829760EC;
	sub_8266CC60(ctx, base);
loc_829760EC:
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lwz r30,320(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82976104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82976120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8266cef8
	ctx.lr = 0x82976130;
	sub_8266CEF8(ctx, base);
loc_82976130:
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82976858
	if (ctx.cr6.eq) goto loc_82976858;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297614C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r28.u32);
	// b 0x82976858
	goto loc_82976858;
loc_82976154:
	// lwz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8297616c
	if (!ctx.cr6.eq) goto loc_8297616C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,292(r29)
	PPC_STORE_U32(ctx.r29.u32 + 292, ctx.r11.u32);
loc_8297616C:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x82976858
	goto loc_82976858;
loc_82976174:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82976178:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82975eb0
	ctx.lr = 0x82976184;
	sub_82975EB0(ctx, base);
	// b 0x82976858
	goto loc_82976858;
loc_82976188:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r27,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r27.u32);
	// b 0x82976178
	goto loc_82976178;
loc_82976194:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82972278
	ctx.lr = 0x829761A4;
	sub_82972278(ctx, base);
	// b 0x82976090
	goto loc_82976090;
loc_829761A8:
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x82976858
	goto loc_82976858;
loc_829761B8:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// ble cr6,0x829761d8
	if (!ctx.cr6.gt) goto loc_829761D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x829eae68
	ctx.lr = 0x829761D4;
	sub_829EAE68(ctx, base);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
loc_829761D8:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// ble cr6,0x82976858
	if (!ctx.cr6.gt) goto loc_82976858;
	// addi r9,r30,-2
	ctx.r9.s64 = ctx.r30.s64 + -2;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_829761F0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x829761f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829761F0;
	// b 0x82976858
	goto loc_82976858;
loc_82976204:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// ble cr6,0x82976858
	if (!ctx.cr6.gt) goto loc_82976858;
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82976224:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82976224
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82976224;
	// b 0x82976858
	goto loc_82976858;
loc_82976238:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// b 0x82976858
	goto loc_82976858;
loc_82976248:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// b 0x82976858
	goto loc_82976858;
loc_82976258:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x82976858
	goto loc_82976858;
loc_82976268:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_82976274:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_82976278:
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// b 0x82976858
	goto loc_82976858;
loc_82976280:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x82976274
	goto loc_82976274;
loc_82976290:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// b 0x82976858
	goto loc_82976858;
loc_829762B0:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// ble cr6,0x829762d0
	if (!ctx.cr6.gt) goto loc_829762D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x829eae68
	ctx.lr = 0x829762CC;
	sub_829EAE68(ctx, base);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
loc_829762D0:
	// addi r8,r30,-1
	ctx.r8.s64 = ctx.r30.s64 + -1;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// ble cr6,0x82976300
	if (!ctx.cr6.gt) goto loc_82976300;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
loc_829762E8:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x829762e8
	if (ctx.cr6.lt) goto loc_829762E8;
loc_82976300:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// b 0x82976278
	goto loc_82976278;
loc_8297631C:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82976858
	if (ctx.cr6.eq) goto loc_82976858;
loc_8297632C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8297632c
	if (!ctx.cr6.eq) goto loc_8297632C;
	// b 0x82976858
	goto loc_82976858;
loc_82976348:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82967f50
	ctx.lr = 0x82976350;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297616c
	if (ctx.cr0.eq) goto loc_8297616C;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r5,0
	ctx.r5.s64 = 0;
loc_82976360:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r11,25048
	ctx.r6.s64 = ctx.r11.s64 + 25048;
loc_82976368:
	// bl 0x82968118
	ctx.lr = 0x8297636C;
	sub_82968118(ctx, base);
	// b 0x82976090
	goto loc_82976090;
loc_82976370:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82967f50
	ctx.lr = 0x82976378;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297616c
	if (ctx.cr0.eq) goto loc_8297616C;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x82976360
	goto loc_82976360;
loc_8297638C:
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq cr6,0x829763f0
	if (ctx.cr6.eq) goto loc_829763F0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x829763f0
	if (!ctx.cr6.eq) goto loc_829763F0;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8296d308
	ctx.lr = 0x829763C0;
	sub_8296D308(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x829763f0
	if (!ctx.cr0.eq) goto loc_829763F0;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829763E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x829763f0
	if (!ctx.cr0.eq) goto loc_829763F0;
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_829763F0:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82967f50
	ctx.lr = 0x829763F8;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297616c
	if (ctx.cr0.eq) goto loc_8297616C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,25040
	ctx.r6.s64 = ctx.r11.s64 + 25040;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82976368
	goto loc_82976368;
loc_82976414:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82967f50
	ctx.lr = 0x8297641C;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297616c
	if (ctx.cr0.eq) goto loc_8297616C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r6,r11,25040
	ctx.r6.s64 = ctx.r11.s64 + 25040;
	// b 0x82976368
	goto loc_82976368;
loc_82976438:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82976858
	if (ctx.cr6.eq) goto loc_82976858;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82976858
	if (!ctx.cr6.eq) goto loc_82976858;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82976470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82976858
	if (!ctx.cr0.eq) goto loc_82976858;
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x82976858
	goto loc_82976858;
loc_82976480:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829764b8
	if (ctx.cr6.eq) goto loc_829764B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,2022
	ctx.r5.s64 = 2022;
	// addi r6,r11,-4600
	ctx.r6.s64 = ctx.r11.s64 + -4600;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82932c80
	ctx.lr = 0x829764A8;
	sub_82932C80(ctx, base);
	// li r11,2257
	ctx.r11.s64 = 2257;
	// stw r27,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r27.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x82976858
	goto loc_82976858;
loc_829764B8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x8296da10
	ctx.lr = 0x829764C8;
	sub_8296DA10(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// b 0x82976858
	goto loc_82976858;
loc_829764D0:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829764f0
	if (ctx.cr6.eq) goto loc_829764F0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,2018
	ctx.r5.s64 = 2018;
	// addi r6,r11,-4640
	ctx.r6.s64 = ctx.r11.s64 + -4640;
	// b 0x8297662c
	goto loc_8297662C;
loc_829764F0:
	// lis r11,3328
	ctx.r11.s64 = 218103808;
loc_829764F4:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82976858
	goto loc_82976858;
loc_829764FC:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82976520
	if (ctx.cr6.eq) goto loc_82976520;
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82976858
	if (!ctx.cr6.eq) goto loc_82976858;
	// lis r11,3072
	ctx.r11.s64 = 201326592;
	// b 0x829764f4
	goto loc_829764F4;
loc_82976520:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// b 0x829764f4
	goto loc_829764F4;
loc_82976528:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8297654c
	if (ctx.cr6.eq) goto loc_8297654C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,2010
	ctx.r5.s64 = 2010;
	// addi r6,r11,-4720
	ctx.r6.s64 = ctx.r11.s64 + -4720;
	// b 0x8297662c
	goto loc_8297662C;
loc_8297654C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82976568
	if (ctx.cr6.eq) goto loc_82976568;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,2012
	ctx.r5.s64 = 2012;
	// addi r6,r11,-4768
	ctx.r6.s64 = ctx.r11.s64 + -4768;
	// b 0x8297662c
	goto loc_8297662C;
loc_82976568:
	// lis r11,1536
	ctx.r11.s64 = 100663296;
	// b 0x829764f4
	goto loc_829764F4;
loc_82976570:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829765a8
	if (ctx.cr6.eq) goto loc_829765A8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,2022
	ctx.r5.s64 = 2022;
	// addi r6,r11,-4856
	ctx.r6.s64 = ctx.r11.s64 + -4856;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82932c80
	ctx.lr = 0x82976598;
	sub_82932C80(ctx, base);
	// li r11,228
	ctx.r11.s64 = 228;
	// stw r27,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r27.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x82976858
	goto loc_82976858;
loc_829765A8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x8296dc08
	ctx.lr = 0x829765B8;
	sub_8296DC08(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// b 0x82976858
	goto loc_82976858;
loc_829765C0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_829765C4:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82971c78
	ctx.lr = 0x829765D4;
	sub_82971C78(ctx, base);
	// b 0x82976840
	goto loc_82976840;
loc_829765D8:
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x829765c4
	goto loc_829765C4;
loc_829765E0:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bne cr6,0x82976614
	if (!ctx.cr6.eq) goto loc_82976614;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r28,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// b 0x82976858
	goto loc_82976858;
loc_82976614:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82976858
	if (ctx.cr6.eq) goto loc_82976858;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,2009
	ctx.r5.s64 = 2009;
	// addi r6,r11,-4936
	ctx.r6.s64 = ctx.r11.s64 + -4936;
loc_8297662C:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82932c80
	ctx.lr = 0x82976638;
	sub_82932C80(ctx, base);
	// stw r27,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r27.u32);
	// b 0x82976858
	goto loc_82976858;
loc_82976640:
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82967f50
	ctx.lr = 0x82976648;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82976848
	if (ctx.cr0.eq) goto loc_82976848;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,0
	ctx.r7.s64 = 0;
loc_82976658:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x829eb080
	ctx.lr = 0x8297666C;
	sub_829EB080(ctx, base);
	// b 0x82976840
	goto loc_82976840;
loc_82976670:
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82967f50
	ctx.lr = 0x82976678;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82976848
	if (ctx.cr0.eq) goto loc_82976848;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82976658
	goto loc_82976658;
loc_82976690:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82967f50
	ctx.lr = 0x82976698;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829766b0
	if (ctx.cr0.eq) goto loc_829766B0;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82968578
	ctx.lr = 0x829766A8;
	sub_82968578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829766b4
	goto loc_829766B4;
loc_829766B0:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_829766B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8296d788
	ctx.lr = 0x829766C0;
	sub_8296D788(ctx, base);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
loc_829766C4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x82976858
	goto loc_82976858;
loc_829766D0:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82967f50
	ctx.lr = 0x829766D8;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829766f0
	if (ctx.cr0.eq) goto loc_829766F0;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82968578
	ctx.lr = 0x829766E8;
	sub_82968578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829766f4
	goto loc_829766F4;
loc_829766F0:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_829766F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8296d788
	ctx.lr = 0x82976700;
	sub_8296D788(ctx, base);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// b 0x829766c4
	goto loc_829766C4;
loc_82976708:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82976858
	goto loc_82976858;
loc_8297671C:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r11,7
	ctx.r11.s64 = 7;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
loc_8297673C:
	// stfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.f0.u64);
	// b 0x82976858
	goto loc_82976858;
loc_82976744:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r11,7
	ctx.r11.s64 = 7;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8297673c
	goto loc_8297673C;
loc_8297676C:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82976790
	if (!ctx.cr6.eq) goto loc_82976790;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// b 0x829767e8
	goto loc_829767E8;
loc_82976790:
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829767a4
	if (!ctx.cr6.eq) goto loc_829767A4;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// b 0x829767ec
	goto loc_829767EC;
loc_829767A4:
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829767e4
	if (!ctx.cr6.eq) goto loc_829767E4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829767c4
	if (!ctx.cr6.eq) goto loc_829767C4;
	// lis r11,-128
	ctx.r11.s64 = -8388608;
	// b 0x829767e8
	goto loc_829767E8;
loc_829767C4:
	// lis r9,-128
	ctx.r9.s64 = -8388608;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x829767dc
	if (ctx.cr6.eq) goto loc_829767DC;
	// lis r10,-64
	ctx.r10.s64 = -4194304;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829767e4
	if (!ctx.cr6.eq) goto loc_829767E4;
loc_829767DC:
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// b 0x829767ec
	goto loc_829767EC;
loc_829767E4:
	// xoris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 ^ 2147483648;
loc_829767E8:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_829767EC:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfd f0,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.f0.u64);
	// b 0x82976858
	goto loc_82976858;
loc_829767F8:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82967f50
	ctx.lr = 0x82976800;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82976848
	if (ctx.cr0.eq) goto loc_82976848;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// lwz r9,128(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r8,124(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// lwz r7,120(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// lwz r6,116(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// lwz r5,112(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// bl 0x829ead88
	ctx.lr = 0x82976824;
	sub_829EAD88(ctx, base);
	// b 0x82976840
	goto loc_82976840;
loc_82976828:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82967f50
	ctx.lr = 0x82976830;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82976848
	if (ctx.cr0.eq) goto loc_82976848;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82968578
	ctx.lr = 0x82976840;
	sub_82968578(ctx, base);
loc_82976840:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8297684c
	goto loc_8297684C;
loc_82976848:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8297684C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8296d788
	ctx.lr = 0x82976858;
	sub_8296D788(ctx, base);
loc_82976858:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829768c0
	if (!ctx.cr6.eq) goto loc_829768C0;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82967f50
	ctx.lr = 0x8297686C;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8297688c
	if (ctx.cr0.eq) goto loc_8297688C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,56(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,-19096
	ctx.r6.s64 = ctx.r11.s64 + -19096;
	// bl 0x82968118
	ctx.lr = 0x82976888;
	sub_82968118(ctx, base);
	// b 0x82976890
	goto loc_82976890;
loc_8297688C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82976890:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829768bc
	if (!ctx.cr6.eq) goto loc_829768BC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-19128
	ctx.r6.s64 = ctx.r11.s64 + -19128;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82932c80
	ctx.lr = 0x829768B0;
	sub_82932C80(ctx, base);
	// stw r27,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r27.u32);
	// stw r27,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r27.u32);
	// b 0x829768c0
	goto loc_829768C0;
loc_829768BC:
	// stw r3,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r3.u32);
loc_829768C0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829768C8"))) PPC_WEAK_FUNC(sub_829768C8);
PPC_FUNC_IMPL(__imp__sub_829768C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x829768D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,1032
	ctx.r11.s64 = ctx.r3.s64 + 1032;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// addi r24,r3,32
	ctx.r24.s64 = ctx.r3.s64 + 32;
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// stw r24,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r24.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// sth r25,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r25.u16);
	// addi r27,r11,5752
	ctx.r27.s64 = ctx.r11.s64 + 5752;
	// addi r23,r10,-19472
	ctx.r23.s64 = ctx.r10.s64 + -19472;
loc_82976914:
	// addi r11,r27,400
	ctx.r11.s64 = ctx.r27.s64 + 400;
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82976a18
	if (!ctx.cr0.eq) goto loc_82976A18;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8297694c
	if (!ctx.cr6.lt) goto loc_8297694C;
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x82973788
	ctx.lr = 0x8297693C;
	sub_82973788(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8297694c
	if (!ctx.cr0.lt) goto loc_8297694C;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_8297694C:
	// addi r11,r27,880
	ctx.r11.s64 = ctx.r27.s64 + 880;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829769d8
	if (ctx.cr0.eq) goto loc_829769D8;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x829769d8
	if (ctx.cr0.lt) goto loc_829769D8;
	// cmpwi cr6,r11,917
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 917, ctx.xer);
	// bgt cr6,0x829769d8
	if (ctx.cr6.gt) goto loc_829769D8;
	// addi r8,r27,3584
	ctx.r8.s64 = ctx.r27.s64 + 3584;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r10,r8
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x829769d8
	if (!ctx.cr6.eq) goto loc_829769D8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r31,1030
	ctx.r9.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82977084
	if (!ctx.cr6.lt) goto loc_82977084;
	// addi r9,r27,1744
	ctx.r9.s64 = ctx.r27.s64 + 1744;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhax r30,r10,r9
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// ble cr6,0x82976914
	if (!ctx.cr6.gt) goto loc_82976914;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82976914
	goto loc_82976914;
loc_829769D8:
	// addi r11,r27,1264
	ctx.r11.s64 = ctx.r27.s64 + 1264;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82976fb0
	if (ctx.cr0.eq) goto loc_82976FB0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82976fb0
	if (ctx.cr0.lt) goto loc_82976FB0;
	// cmpwi cr6,r11,917
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 917, ctx.xer);
	// bgt cr6,0x82976fb0
	if (ctx.cr6.gt) goto loc_82976FB0;
	// addi r9,r27,3584
	ctx.r9.s64 = ctx.r27.s64 + 3584;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r11,r9
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82976fb0
	if (!ctx.cr6.eq) goto loc_82976FB0;
	// addi r10,r27,1744
	ctx.r10.s64 = ctx.r27.s64 + 1744;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
loc_82976A18:
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r27,200
	ctx.r9.s64 = ctx.r27.s64 + 200;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// lhax r29,r30,r9
	ctx.r29.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + ctx.r9.u32));
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bgt cr6,0x82976e98
	if (ctx.cr6.gt) goto loc_82976E98;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,14056
	ctx.r12.s64 = ctx.r12.s64 + 14056;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32105
	ctx.r12.s64 = -2104033280;
	// addi r12,r12,27244
	ctx.r12.s64 = ctx.r12.s64 + 27244;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82976A6C;
	case 1:
		goto loc_82976A74;
	case 2:
		goto loc_82976A80;
	case 3:
		goto loc_82976A8C;
	case 4:
		goto loc_82976A98;
	case 5:
		goto loc_82976AA4;
	case 6:
		goto loc_82976AB0;
	case 7:
		goto loc_82976ABC;
	case 8:
		goto loc_82976AC4;
	case 9:
		goto loc_82976AD0;
	case 10:
		goto loc_82976ADC;
	case 11:
		goto loc_82976AE8;
	case 12:
		goto loc_82976AF4;
	case 13:
		goto loc_82976B00;
	case 14:
		goto loc_82976B0C;
	case 15:
		goto loc_82976B18;
	case 16:
		goto loc_82976B24;
	case 17:
		goto loc_82976B30;
	case 18:
		goto loc_82976B3C;
	case 19:
		goto loc_82976B48;
	case 20:
		goto loc_82976B54;
	case 21:
		goto loc_82976B60;
	case 22:
		goto loc_82976B6C;
	case 23:
		goto loc_82976B78;
	case 24:
		goto loc_82976B84;
	case 25:
		goto loc_82976B90;
	case 26:
		goto loc_82976B9C;
	case 27:
		goto loc_82976BA8;
	case 28:
		goto loc_82976BB4;
	case 29:
		goto loc_82976BC0;
	case 30:
		goto loc_82976BCC;
	case 31:
		goto loc_82976BD8;
	case 32:
		goto loc_82976BE4;
	case 33:
		goto loc_82976BF0;
	case 34:
		goto loc_82976BFC;
	case 35:
		goto loc_82976C08;
	case 36:
		goto loc_82976C14;
	case 37:
		goto loc_82976C20;
	case 38:
		goto loc_82976C2C;
	case 39:
		goto loc_82976C38;
	case 40:
		goto loc_82976C44;
	case 41:
		goto loc_82976C50;
	case 42:
		goto loc_82976C5C;
	case 43:
		goto loc_82976C68;
	case 44:
		goto loc_82976C74;
	case 45:
		goto loc_82976C80;
	case 46:
		goto loc_82976C8C;
	case 47:
		goto loc_82976C98;
	case 48:
		goto loc_82976CA4;
	case 49:
		goto loc_82976CB0;
	case 50:
		goto loc_82976CBC;
	case 51:
		goto loc_82976CC8;
	case 52:
		goto loc_82976CD4;
	case 53:
		goto loc_82976CE0;
	case 54:
		goto loc_82976CEC;
	case 55:
		goto loc_82976CF8;
	case 56:
		goto loc_82976D04;
	case 57:
		goto loc_82976D10;
	case 58:
		goto loc_82976D1C;
	case 59:
		goto loc_82976D28;
	case 60:
		goto loc_82976D34;
	case 61:
		goto loc_82976D40;
	case 62:
		goto loc_82976D4C;
	case 63:
		goto loc_82976D58;
	case 64:
		goto loc_82976D64;
	case 65:
		goto loc_82976D6C;
	case 66:
		goto loc_82976D74;
	case 67:
		goto loc_82976D80;
	case 68:
		goto loc_82976D8C;
	case 69:
		goto loc_82976D98;
	case 70:
		goto loc_82976DA4;
	case 71:
		goto loc_82976DB0;
	case 72:
		goto loc_82976DBC;
	case 73:
		goto loc_82976DC8;
	case 74:
		goto loc_82976DD4;
	case 75:
		goto loc_82976DE0;
	case 76:
		goto loc_82976DE8;
	case 77:
		goto loc_82976DF0;
	case 78:
		goto loc_82976DF8;
	case 79:
		goto loc_82976E00;
	case 80:
		goto loc_82976E08;
	case 81:
		goto loc_82976E10;
	case 82:
		goto loc_82976E18;
	case 83:
		goto loc_82976E20;
	case 84:
		goto loc_82976E28;
	case 85:
		goto loc_82976E30;
	case 86:
		goto loc_82976E38;
	case 87:
		goto loc_82976E40;
	case 88:
		goto loc_82976E48;
	case 89:
		goto loc_82976E48;
	case 90:
		goto loc_82976E50;
	case 91:
		goto loc_82976E58;
	case 92:
		goto loc_82976E60;
	case 93:
		goto loc_82976E68;
	case 94:
		goto loc_82976E70;
	case 95:
		goto loc_82976E78;
	case 96:
		goto loc_82976E80;
	case 97:
		goto loc_82976E88;
	default:
		__builtin_unreachable();
	}
loc_82976A6C:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976A74:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976A80:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976A8C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976A98:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976AA4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976AB0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976ABC:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976AC4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976AD0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976ADC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976AE8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976AF4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976B00:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976B0C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976B18:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976B24:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976B30:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,17
	ctx.r4.s64 = 17;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976B3C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976B48:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976B54:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976B60:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976B6C:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976B78:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976B84:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976B90:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976B9C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,26
	ctx.r4.s64 = 26;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976BA8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,27
	ctx.r4.s64 = 27;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976BB4:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,29
	ctx.r4.s64 = 29;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976BC0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,28
	ctx.r4.s64 = 28;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976BCC:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976BD8:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976BE4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976BF0:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,33
	ctx.r4.s64 = 33;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976BFC:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,34
	ctx.r4.s64 = 34;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976C08:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,35
	ctx.r4.s64 = 35;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976C14:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,36
	ctx.r4.s64 = 36;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976C20:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,37
	ctx.r4.s64 = 37;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976C2C:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976C38:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,39
	ctx.r4.s64 = 39;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976C44:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976C50:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,41
	ctx.r4.s64 = 41;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976C5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,42
	ctx.r4.s64 = 42;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976C68:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976C74:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976C80:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,45
	ctx.r4.s64 = 45;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976C8C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,46
	ctx.r4.s64 = 46;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976C98:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,47
	ctx.r4.s64 = 47;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976CA4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976CB0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,49
	ctx.r4.s64 = 49;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976CBC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,50
	ctx.r4.s64 = 50;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976CC8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,51
	ctx.r4.s64 = 51;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976CD4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,52
	ctx.r4.s64 = 52;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976CE0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,53
	ctx.r4.s64 = 53;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976CEC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,54
	ctx.r4.s64 = 54;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976CF8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,55
	ctx.r4.s64 = 55;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976D04:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,56
	ctx.r4.s64 = 56;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976D10:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,57
	ctx.r4.s64 = 57;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976D1C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,60
	ctx.r4.s64 = 60;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976D28:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,61
	ctx.r4.s64 = 61;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976D34:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,62
	ctx.r4.s64 = 62;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976D40:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,63
	ctx.r4.s64 = 63;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976D4C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976D58:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,65
	ctx.r4.s64 = 65;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976D64:
	// li r4,66
	ctx.r4.s64 = 66;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976D6C:
	// li r4,67
	ctx.r4.s64 = 67;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976D74:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,68
	ctx.r4.s64 = 68;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976D80:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,69
	ctx.r4.s64 = 69;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976D8C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,70
	ctx.r4.s64 = 70;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976D98:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,71
	ctx.r4.s64 = 71;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976DA4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,72
	ctx.r4.s64 = 72;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976DB0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,73
	ctx.r4.s64 = 73;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976DBC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,74
	ctx.r4.s64 = 74;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976DC8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,75
	ctx.r4.s64 = 75;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976DD4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,76
	ctx.r4.s64 = 76;
	// b 0x82976e90
	goto loc_82976E90;
loc_82976DE0:
	// li r4,77
	ctx.r4.s64 = 77;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976DE8:
	// li r4,78
	ctx.r4.s64 = 78;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976DF0:
	// li r4,79
	ctx.r4.s64 = 79;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976DF8:
	// li r4,80
	ctx.r4.s64 = 80;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E00:
	// li r4,81
	ctx.r4.s64 = 81;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E08:
	// li r4,82
	ctx.r4.s64 = 82;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E10:
	// li r4,83
	ctx.r4.s64 = 83;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E18:
	// li r4,84
	ctx.r4.s64 = 84;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E20:
	// li r4,85
	ctx.r4.s64 = 85;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E28:
	// li r4,87
	ctx.r4.s64 = 87;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E30:
	// li r4,89
	ctx.r4.s64 = 89;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E38:
	// li r4,91
	ctx.r4.s64 = 91;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E40:
	// li r4,86
	ctx.r4.s64 = 86;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E48:
	// li r4,88
	ctx.r4.s64 = 88;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E50:
	// li r4,92
	ctx.r4.s64 = 92;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E58:
	// li r4,93
	ctx.r4.s64 = 93;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E60:
	// li r4,94
	ctx.r4.s64 = 94;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E68:
	// li r4,95
	ctx.r4.s64 = 95;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E70:
	// li r4,96
	ctx.r4.s64 = 96;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E78:
	// li r4,97
	ctx.r4.s64 = 97;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E80:
	// li r4,98
	ctx.r4.s64 = 98;
	// b 0x82976e8c
	goto loc_82976E8C;
loc_82976E88:
	// li r4,99
	ctx.r4.s64 = 99;
loc_82976E8C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82976E90:
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x82975fb0
	ctx.lr = 0x82976E98;
	sub_82975FB0(ctx, base);
loc_82976E98:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r28,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r28.s64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lhax r10,r30,r27
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + ctx.r27.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82976f30
	if (!ctx.cr0.eq) goto loc_82976F30;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82976f30
	if (!ctx.cr6.eq) goto loc_82976F30;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,25
	ctx.r10.s64 = 25;
	// li r30,25
	ctx.r30.s64 = 25;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82976f1c
	if (!ctx.cr6.lt) goto loc_82976F1C;
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x82973788
	ctx.lr = 0x82976F0C;
	sub_82973788(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82976f1c
	if (!ctx.cr0.lt) goto loc_82976F1C;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_82976F1C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82976914
	if (!ctx.cr6.eq) goto loc_82976914;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82977098
	goto loc_82977098;
loc_82976F30:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r27,1648
	ctx.r10.s64 = ctx.r27.s64 + 1648;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82976f74
	if (ctx.cr0.eq) goto loc_82976F74;
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82976f74
	if (ctx.cr0.lt) goto loc_82976F74;
	// cmpwi cr6,r10,917
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 917, ctx.xer);
	// bgt cr6,0x82976f74
	if (ctx.cr6.gt) goto loc_82976F74;
	// addi r8,r27,3584
	ctx.r8.s64 = ctx.r27.s64 + 3584;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r10,r8
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82976f74
	if (!ctx.cr6.eq) goto loc_82976F74;
	// addi r11,r27,1744
	ctx.r11.s64 = ctx.r27.s64 + 1744;
	// lhax r30,r10,r11
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// b 0x82976f7c
	goto loc_82976F7C;
loc_82976F74:
	// addi r11,r27,784
	ctx.r11.s64 = ctx.r27.s64 + 784;
	// lhax r30,r9,r11
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32));
loc_82976F7C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r31,1030
	ctx.r10.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82977084
	if (!ctx.cr6.lt) goto loc_82977084;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82976F9C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82976914
	goto loc_82976914;
loc_82976FB0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82976fd4
	if (!ctx.cr6.eq) goto loc_82976FD4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8296f4e0
	ctx.lr = 0x82976FC8;
	sub_8296F4E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82976FD4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82977070
	if (!ctx.cr6.lt) goto loc_82977070;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82976FE8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r27,880
	ctx.r10.s64 = ctx.r27.s64 + 880;
	// lha r9,0(r11)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82977028
	if (ctx.cr0.eq) goto loc_82977028;
	// addic. r10,r10,256
	ctx.xer.ca = ctx.r10.u32 > 4294967039;
	ctx.r10.s64 = ctx.r10.s64 + 256;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82977028
	if (ctx.cr0.lt) goto loc_82977028;
	// cmpwi cr6,r10,917
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 917, ctx.xer);
	// bgt cr6,0x82977028
	if (ctx.cr6.gt) goto loc_82977028;
	// addi r9,r27,3584
	ctx.r9.s64 = ctx.r27.s64 + 3584;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// beq cr6,0x82977048
	if (ctx.cr6.eq) goto loc_82977048;
loc_82977028:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x82977094
	if (!ctx.cr6.gt) goto loc_82977094;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x82976fe8
	goto loc_82976FE8;
loc_82977048:
	// addi r9,r31,1030
	ctx.r9.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82977084
	if (!ctx.cr6.lt) goto loc_82977084;
	// addi r9,r27,1744
	ctx.r9.s64 = ctx.r27.s64 + 1744;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhax r30,r10,r9
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x82976f9c
	goto loc_82976F9C;
loc_82977070:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82977094
	if (ctx.cr6.eq) goto loc_82977094;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// b 0x82976914
	goto loc_82976914;
loc_82977084:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19012
	ctx.r4.s64 = ctx.r11.s64 + -19012;
	// bl 0x8296f4e0
	ctx.lr = 0x82977094;
	sub_8296F4E0(ctx, base);
loc_82977094:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82977098:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829770A0"))) PPC_WEAK_FUNC(sub_829770A0);
PPC_FUNC_IMPL(__imp__sub_829770A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x829770A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-3232(r1)
	ea = -3232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x8292c6d8
	ctx.lr = 0x829770D4;
	sub_8292C6D8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x829770e0
	if (!ctx.cr6.eq) goto loc_829770E0;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
loc_829770E0:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r26,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r26.u32);
	// bl 0x8296ec10
	ctx.lr = 0x82977120;
	sub_8296EC10(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// beq 0x8297713c
	if (ctx.cr0.eq) goto loc_8297713C;
	// stw r26,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r26.u32);
	// stw r26,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r26.u32);
	// b 0x82977144
	goto loc_82977144;
loc_8297713C:
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_82977144:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82977154
	if (ctx.cr0.eq) goto loc_82977154;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// b 0x82977158
	goto loc_82977158;
loc_82977154:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_82977158:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82977180
	if (!ctx.cr6.eq) goto loc_82977180;
	// bl 0x8266d988
	ctx.lr = 0x82977168;
	sub_8266D988(ctx, base);
	// stw r3,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82977180
	if (!ctx.cr0.eq) goto loc_82977180;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82977294
	goto loc_82977294;
loc_82977180:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// beq cr6,0x829771a0
	if (ctx.cr6.eq) goto loc_829771A0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_829771A0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x829771b8
	if (ctx.cr6.eq) goto loc_829771B8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne 0x829771bc
	if (!ctx.cr0.eq) goto loc_829771BC;
loc_829771B8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_829771BC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// beq cr6,0x8297721c
	if (ctx.cr6.eq) goto loc_8297721C;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8297721c
	if (!ctx.cr6.eq) goto loc_8297721C;
	// lwz r3,20(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
	// bne cr6,0x829771f0
	if (!ctx.cr6.eq) goto loc_829771F0;
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// b 0x8297721c
	goto loc_8297721C;
loc_829771F0:
	// bl 0x82c156e0
	ctx.lr = 0x829771F4;
	sub_82C156E0(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r26,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r26.u32);
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8297720c
	if (ctx.cr6.eq) goto loc_8297720C;
	// lis r5,-2
	ctx.r5.s64 = -131072;
loc_8297720C:
	// ori r5,r5,1021
	ctx.r5.u64 = ctx.r5.u64 | 1021;
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82afe478
	ctx.lr = 0x8297721C;
	sub_82AFE478(ctx, base);
loc_8297721C:
	// li r5,3036
	ctx.r5.s64 = 3036;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82fa7cf0
	ctx.lr = 0x8297722C;
	sub_82FA7CF0(ctx, base);
	// stw r31,3160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3160, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829768c8
	ctx.lr = 0x82977238;
	sub_829768C8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e87788
	ctx.lr = 0x82977240;
	sub_82E87788(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82977270
	if (!ctx.cr0.eq) goto loc_82977270;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82977270
	if (!ctx.cr6.eq) goto loc_82977270;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82977270
	if (!ctx.cr6.eq) goto loc_82977270;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,25112
	ctx.r4.s64 = ctx.r11.s64 + 25112;
	// bl 0x8296f530
	ctx.lr = 0x82977270;
	sub_8296F530(ctx, base);
loc_82977270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82975018
	ctx.lr = 0x82977278;
	sub_82975018(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e87788
	ctx.lr = 0x82977280;
	sub_82E87788(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lis r10,-30602
	ctx.r10.s64 = -2005532672;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,2905
	ctx.r10.u64 = ctx.r10.u64 | 2905;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82977294:
	// addi r1,r1,3232
	ctx.r1.s64 = ctx.r1.s64 + 3232;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297729C"))) PPC_WEAK_FUNC(sub_8297729C);
PPC_FUNC_IMPL(__imp__sub_8297729C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829772A0"))) PPC_WEAK_FUNC(sub_829772A0);
PPC_FUNC_IMPL(__imp__sub_829772A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x829772A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,-2668
	ctx.r9.s64 = ctx.r11.s64 + -2668;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_829772D8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x829772fc
	if (ctx.cr0.eq) goto loc_829772FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x829772d8
	if (ctx.cr6.eq) goto loc_829772D8;
loc_829772FC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-2676
	ctx.r11.s64 = ctx.r11.s64 + -2676;
loc_82977304:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82977328
	if (ctx.cr0.eq) goto loc_82977328;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82977304
	if (ctx.cr6.eq) goto loc_82977304;
loc_82977328:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x82977344
	if (!ctx.cr6.eq) goto loc_82977344;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8297736c
	if (ctx.cr6.eq) goto loc_8297736C;
loc_82977344:
	// clrlwi. r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8297736c
	if (!ctx.cr0.eq) goto loc_8297736C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,2001
	ctx.r5.s64 = 2001;
	// addi r6,r11,25176
	ctx.r6.s64 = ctx.r11.s64 + 25176;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82932c80
	ctx.lr = 0x82977360;
	sub_82932C80(ctx, base);
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2905
	ctx.r31.u64 = ctx.r31.u64 | 2905;
	// b 0x82977420
	goto loc_82977420;
loc_8297736C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82977378
	if (ctx.cr0.eq) goto loc_82977378;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82977378:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,344
	ctx.r3.s64 = 344;
	// bl 0x82691410
	ctx.lr = 0x82977384;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829773bc
	if (ctx.cr0.eq) goto loc_829773BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r31.u32);
	// stw r31,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r31.u32);
	// stw r31,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r31.u32);
	// stw r31,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r31.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r31,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r31.u32);
	// stw r31,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r31.u32);
	// b 0x829773c0
	goto loc_829773C0;
loc_829773BC:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_829773C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x829773d4
	if (!ctx.cr6.eq) goto loc_829773D4;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82977420
	goto loc_82977420;
loc_829773D4:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829770a0
	ctx.lr = 0x829773F0;
	sub_829770A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8297740c
	if (ctx.cr0.lt) goto loc_8297740C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82975958
	ctx.lr = 0x82977408;
	sub_82975958(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8297740C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8296ed30
	ctx.lr = 0x82977414;
	sub_8296ED30(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691460
	ctx.lr = 0x82977420;
	sub_82691460(ctx, base);
loc_82977420:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297742C"))) PPC_WEAK_FUNC(sub_8297742C);
PPC_FUNC_IMPL(__imp__sub_8297742C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82977430"))) PPC_WEAK_FUNC(sub_82977430);
PPC_FUNC_IMPL(__imp__sub_82977430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82977438;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,344
	ctx.r3.s64 = 344;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82691410
	ctx.lr = 0x8297745C;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82977498
	if (ctx.cr0.eq) goto loc_82977498;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// b 0x8297749c
	goto loc_8297749C;
loc_82977498:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8297749C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x829774b0
	if (!ctx.cr6.eq) goto loc_829774B0;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82977520
	goto loc_82977520;
loc_829774B0:
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8292ccb0
	ctx.lr = 0x829774C4;
	sub_8292CCB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8297750c
	if (ctx.cr0.lt) goto loc_8297750C;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829770a0
	ctx.lr = 0x829774E8;
	sub_829770A0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82977500
	if (ctx.cr0.lt) goto loc_82977500;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8296de08
	ctx.lr = 0x829774FC;
	sub_8296DE08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82977500:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82930928
	ctx.lr = 0x8297750C;
	sub_82930928(ctx, base);
loc_8297750C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8296ed30
	ctx.lr = 0x82977514;
	sub_8296ED30(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x82977520;
	sub_82691460(ctx, base);
loc_82977520:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297752C"))) PPC_WEAK_FUNC(sub_8297752C);
PPC_FUNC_IMPL(__imp__sub_8297752C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82977530"))) PPC_WEAK_FUNC(sub_82977530);
PPC_FUNC_IMPL(__imp__sub_82977530) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82977538;
	__savegprlr_29(ctx, base);
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r5,200(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// li r7,1279
	ctx.r7.s64 = 1279;
	// lwz r6,112(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// rlwinm r4,r10,0,10,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// li r11,16
	ctx.r11.s64 = 16;
	// rlwinm r4,r4,0,4,2
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// rlwimi r6,r7,18,6,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 18) & 0x3FC0000) | (ctx.r6.u64 & 0xFFFFFFFFFC03FFFF);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// li r3,256
	ctx.r3.s64 = 256;
	// stw r5,268(r8)
	PPC_STORE_U32(ctx.r8.u32 + 268, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r31,64
	ctx.r31.s64 = 64;
	// stw r3,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r3.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r9,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r9.u32);
	// li r30,24
	ctx.r30.s64 = 24;
	// stw r10,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r10.u32);
	// li r29,4
	ctx.r29.s64 = 4;
	// stw r31,96(r8)
	PPC_STORE_U32(ctx.r8.u32 + 96, ctx.r31.u32);
	// ori r4,r4,513
	ctx.r4.u64 = ctx.r4.u64 | 513;
	// stw r9,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r9.u32);
	// rlwimi r6,r7,18,2,4
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 18) & 0x38000000) | (ctx.r6.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r5,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r5.u32);
	// stw r10,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,88(r8)
	PPC_STORE_U32(ctx.r8.u32 + 88, ctx.r30.u32);
	// stw r29,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r29.u32);
	// stw r4,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r4.u32);
	// stw r6,112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 112, ctx.r6.u32);
	// stw r11,68(r8)
	PPC_STORE_U32(ctx.r8.u32 + 68, ctx.r11.u32);
	// stw r9,468(r8)
	PPC_STORE_U32(ctx.r8.u32 + 468, ctx.r9.u32);
	// stw r10,344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 344, ctx.r10.u32);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829775D0"))) PPC_WEAK_FUNC(sub_829775D0);
PPC_FUNC_IMPL(__imp__sub_829775D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x829775D8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82977620
	if (!ctx.cr6.gt) goto loc_82977620;
	// li r29,0
	ctx.r29.s64 = 0;
loc_829775F4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// bl 0x82983a58
	ctx.lr = 0x8297760C;
	sub_82983A58(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829775f4
	if (ctx.cr6.lt) goto loc_829775F4;
loc_82977620:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82977d84
	if (!ctx.cr6.gt) goto loc_82977D84;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r29,24816
	ctx.r29.s64 = 1626341376;
	// lis r14,4336
	ctx.r14.s64 = 284164096;
	// lis r15,4176
	ctx.r15.s64 = 273678336;
	// lis r30,1
	ctx.r30.s64 = 65536;
	// ori r27,r11,16385
	ctx.r27.u64 = ctx.r11.u64 | 16385;
	// lis r16,8208
	ctx.r16.s64 = 537919488;
	// lis r17,24640
	ctx.r17.s64 = 1614807040;
	// lis r18,20528
	ctx.r18.s64 = 1345323008;
	// lis r28,15
	ctx.r28.s64 = 983040;
	// lis r19,24736
	ctx.r19.s64 = 1621098496;
	// lis r20,29504
	ctx.r20.s64 = 1933574144;
	// lis r21,28768
	ctx.r21.s64 = 1885339648;
	// lis r22,28688
	ctx.r22.s64 = 1880096768;
	// lis r23,28880
	ctx.r23.s64 = 1892679680;
	// lis r24,29680
	ctx.r24.s64 = 1945108480;
	// lis r25,29600
	ctx.r25.s64 = 1939865600;
	// lis r26,29776
	ctx.r26.s64 = 1951399936;
loc_8297767C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829776b4
	if (ctx.cr6.eq) goto loc_829776B4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x829776b4
	if (!ctx.cr6.eq) goto loc_829776B4;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
loc_829776B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e0ac8
	ctx.lr = 0x829776BC;
	sub_829E0AC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82977d88
	if (ctx.cr0.lt) goto loc_82977D88;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r10,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82977aa0
	if (ctx.cr6.gt) goto loc_82977AA0;
	// beq cr6,0x82977a88
	if (ctx.cr6.eq) goto loc_82977A88;
	// lis r9,8304
	ctx.r9.s64 = 544210944;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x829778f4
	if (ctx.cr6.gt) goto loc_829778F4;
	// beq cr6,0x829778e8
	if (ctx.cr6.eq) goto loc_829778E8;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bgt cr6,0x8297781c
	if (ctx.cr6.gt) goto loc_8297781C;
	// beq cr6,0x82977cdc
	if (ctx.cr6.eq) goto loc_82977CDC;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// bgt cr6,0x82977794
	if (ctx.cr6.gt) goto loc_82977794;
	// beq cr6,0x82977784
	if (ctx.cr6.eq) goto loc_82977784;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82977778
	if (ctx.cr6.eq) goto loc_82977778;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8297776c
	if (ctx.cr6.eq) goto loc_8297776C;
	// lis r10,4112
	ctx.r10.s64 = 269484032;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977760
	if (ctx.cr6.eq) goto loc_82977760;
	// lis r10,4144
	ctx.r10.s64 = 271581184;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977750
	if (ctx.cr6.eq) goto loc_82977750;
	// lis r10,4160
	ctx.r10.s64 = 272629760;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82977df4
	if (!ctx.cr6.eq) goto loc_82977DF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977750:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r30.u32);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977760:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x82977d58
	goto loc_82977D58;
loc_8297776C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977778:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977784:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r30.u32);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977794:
	// lis r10,4192
	ctx.r10.s64 = 274726912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8297780c
	if (ctx.cr6.eq) goto loc_8297780C;
	// lis r10,4208
	ctx.r10.s64 = 275775488;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829777fc
	if (ctx.cr6.eq) goto loc_829777FC;
	// lis r10,4304
	ctx.r10.s64 = 282066944;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829777dc
	if (ctx.cr6.eq) goto loc_829777DC;
	// lis r10,4320
	ctx.r10.s64 = 283115520;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82977df4
	if (!ctx.cr6.eq) goto loc_82977DF4;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829777f4
	if (ctx.cr0.eq) goto loc_829777F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// b 0x82977d58
	goto loc_82977D58;
loc_829777DC:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829777f4
	if (ctx.cr0.eq) goto loc_829777F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// b 0x82977d58
	goto loc_82977D58;
loc_829777F4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82977d64
	goto loc_82977D64;
loc_829777FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r30.u32);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// b 0x82977d58
	goto loc_82977D58;
loc_8297780C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r30.u32);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// b 0x82977d58
	goto loc_82977D58;
loc_8297781C:
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bgt cr6,0x82977888
	if (ctx.cr6.gt) goto loc_82977888;
	// beq cr6,0x82977bd8
	if (ctx.cr6.eq) goto loc_82977BD8;
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977870
	if (ctx.cr6.eq) goto loc_82977870;
	// lis r10,4384
	ctx.r10.s64 = 287309824;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8297776c
	if (ctx.cr6.eq) goto loc_8297776C;
	// lis r10,4400
	ctx.r10.s64 = 288358400;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977d6c
	if (ctx.cr6.eq) goto loc_82977D6C;
	// lis r10,4432
	ctx.r10.s64 = 290455552;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8297776c
	if (ctx.cr6.eq) goto loc_8297776C;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82977df4
	if (!ctx.cr6.eq) goto loc_82977DF4;
loc_82977864:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977870:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82977df4
	if (!ctx.cr0.eq) goto loc_82977DF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977888:
	// lis r10,8224
	ctx.r10.s64 = 538968064;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829778dc
	if (ctx.cr6.eq) goto loc_829778DC;
	// lis r10,8240
	ctx.r10.s64 = 540016640;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829778d0
	if (ctx.cr6.eq) goto loc_829778D0;
	// lis r10,8256
	ctx.r10.s64 = 541065216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829778c4
	if (ctx.cr6.eq) goto loc_829778C4;
	// lis r10,8272
	ctx.r10.s64 = 542113792;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82977df4
	if (!ctx.cr6.eq) goto loc_82977DF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x82977d58
	goto loc_82977D58;
loc_829778C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// b 0x82977d58
	goto loc_82977D58;
loc_829778D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// b 0x82977d58
	goto loc_82977D58;
loc_829778DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// b 0x82977d58
	goto loc_82977D58;
loc_829778E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// b 0x82977d58
	goto loc_82977D58;
loc_829778F4:
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bgt cr6,0x829779fc
	if (ctx.cr6.gt) goto loc_829779FC;
	// beq cr6,0x82977a44
	if (ctx.cr6.eq) goto loc_82977A44;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// bgt cr6,0x829779b4
	if (ctx.cr6.gt) goto loc_829779B4;
	// beq cr6,0x829779a4
	if (ctx.cr6.eq) goto loc_829779A4;
	// lis r9,8320
	ctx.r9.s64 = 545259520;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82977d6c
	if (ctx.cr6.eq) goto loc_82977D6C;
	// lis r9,8336
	ctx.r9.s64 = 546308096;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8297776c
	if (ctx.cr6.eq) goto loc_8297776C;
	// lis r9,12288
	ctx.r9.s64 = 805306368;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8297798c
	if (ctx.cr6.eq) goto loc_8297798C;
	// lis r9,20480
	ctx.r9.s64 = 1342177280;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82977954
	if (ctx.cr6.eq) goto loc_82977954;
	// lis r10,20496
	ctx.r10.s64 = 1343225856;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82977df4
	if (!ctx.cr6.eq) goto loc_82977DF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977954:
	// clrlwi r11,r10,12
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82977978
	if (ctx.cr6.eq) goto loc_82977978;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82977df0
	if (!ctx.cr6.eq) goto loc_82977DF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r28.u32);
	// lwz r11,584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977978:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,7
	ctx.r11.s64 = 458752;
	// stw r11,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r11.u32);
	// lwz r11,580(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 580);
	// b 0x82977d58
	goto loc_82977D58;
loc_8297798C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82977df4
	if (!ctx.cr0.eq) goto loc_82977DF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// b 0x82977d58
	goto loc_82977D58;
loc_829779A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r28.u32);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// b 0x82977d58
	goto loc_82977D58;
loc_829779B4:
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977a88
	if (ctx.cr6.eq) goto loc_82977A88;
	// lis r10,24592
	ctx.r10.s64 = 1611661312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977b24
	if (ctx.cr6.eq) goto loc_82977B24;
	// lis r10,24608
	ctx.r10.s64 = 1612709888;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977b0c
	if (ctx.cr6.eq) goto loc_82977B0C;
	// lis r10,24624
	ctx.r10.s64 = 1613758464;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82977df4
	if (!ctx.cr6.eq) goto loc_82977DF4;
loc_829779E4:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82977df4
	if (!ctx.cr0.eq) goto loc_82977DF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// b 0x82977d58
	goto loc_82977D58;
loc_829779FC:
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bgt cr6,0x82977a5c
	if (ctx.cr6.gt) goto loc_82977A5C;
	// beq cr6,0x82977a88
	if (ctx.cr6.eq) goto loc_82977A88;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977a88
	if (ctx.cr6.eq) goto loc_82977A88;
	// lis r10,24672
	ctx.r10.s64 = 1616904192;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977b24
	if (ctx.cr6.eq) goto loc_82977B24;
	// lis r10,24688
	ctx.r10.s64 = 1617952768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977b0c
	if (ctx.cr6.eq) goto loc_82977B0C;
	// lis r10,24704
	ctx.r10.s64 = 1619001344;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829779e4
	if (ctx.cr6.eq) goto loc_829779E4;
	// lis r10,24720
	ctx.r10.s64 = 1620049920;
loc_82977A3C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82977df4
	if (!ctx.cr6.eq) goto loc_82977DF4;
loc_82977A44:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82977df4
	if (ctx.cr0.eq) goto loc_82977DF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977A5C:
	// lis r10,24752
	ctx.r10.s64 = 1622147072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977b24
	if (ctx.cr6.eq) goto loc_82977B24;
	// lis r10,24768
	ctx.r10.s64 = 1623195648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977b0c
	if (ctx.cr6.eq) goto loc_82977B0C;
	// lis r10,24784
	ctx.r10.s64 = 1624244224;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829779e4
	if (ctx.cr6.eq) goto loc_829779E4;
	// lis r10,24800
	ctx.r10.s64 = 1625292800;
	// b 0x82977a3c
	goto loc_82977A3C;
loc_82977A88:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82977df4
	if (!ctx.cr0.eq) goto loc_82977DF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977AA0:
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bgt cr6,0x82977c7c
	if (ctx.cr6.gt) goto loc_82977C7C;
	// beq cr6,0x82977c70
	if (ctx.cr6.eq) goto loc_82977C70;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bgt cr6,0x82977b90
	if (ctx.cr6.gt) goto loc_82977B90;
	// beq cr6,0x82977b6c
	if (ctx.cr6.eq) goto loc_82977B6C;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x82977b3c
	if (ctx.cr6.gt) goto loc_82977B3C;
	// beq cr6,0x82977b30
	if (ctx.cr6.eq) goto loc_82977B30;
	// lis r10,24832
	ctx.r10.s64 = 1627389952;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977b24
	if (ctx.cr6.eq) goto loc_82977B24;
	// lis r10,24848
	ctx.r10.s64 = 1628438528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977b0c
	if (ctx.cr6.eq) goto loc_82977B0C;
	// lis r10,24864
	ctx.r10.s64 = 1629487104;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829779e4
	if (ctx.cr6.eq) goto loc_829779E4;
	// lis r10,24880
	ctx.r10.s64 = 1630535680;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977a44
	if (ctx.cr6.eq) goto loc_82977A44;
	// lis r10,28672
	ctx.r10.s64 = 1879048192;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82977df4
	if (!ctx.cr6.eq) goto loc_82977DF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977B0C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82977df4
	if (!ctx.cr0.eq) goto loc_82977DF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977B24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977B30:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977B3C:
	// lis r10,28704
	ctx.r10.s64 = 1881145344;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977b84
	if (ctx.cr6.eq) goto loc_82977B84;
	// lis r10,28720
	ctx.r10.s64 = 1882193920;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977b78
	if (ctx.cr6.eq) goto loc_82977B78;
	// lis r10,28736
	ctx.r10.s64 = 1883242496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977b78
	if (ctx.cr6.eq) goto loc_82977B78;
	// lis r10,28752
	ctx.r10.s64 = 1884291072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82977df4
	if (!ctx.cr6.eq) goto loc_82977DF4;
loc_82977B6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977B78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977B84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977B90:
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x82977c10
	if (ctx.cr6.gt) goto loc_82977C10;
	// beq cr6,0x82977c04
	if (ctx.cr6.eq) goto loc_82977C04;
	// lis r10,28784
	ctx.r10.s64 = 1886388224;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977b6c
	if (ctx.cr6.eq) goto loc_82977B6C;
	// lis r10,28800
	ctx.r10.s64 = 1887436800;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977bf0
	if (ctx.cr6.eq) goto loc_82977BF0;
	// lis r10,28816
	ctx.r10.s64 = 1888485376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977be4
	if (ctx.cr6.eq) goto loc_82977BE4;
	// lis r10,28848
	ctx.r10.s64 = 1890582528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977864
	if (ctx.cr6.eq) goto loc_82977864;
	// lis r10,28864
	ctx.r10.s64 = 1891631104;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82977df4
	if (!ctx.cr6.eq) goto loc_82977DF4;
loc_82977BD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977BE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977BF0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// stw r11,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r11.u32);
	// lwz r11,284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977C04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977C10:
	// lis r10,29440
	ctx.r10.s64 = 1929379840;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977c54
	if (ctx.cr6.eq) goto loc_82977C54;
	// lis r10,29456
	ctx.r10.s64 = 1930428416;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977c40
	if (ctx.cr6.eq) goto loc_82977C40;
	// lis r10,29472
	ctx.r10.s64 = 1931476992;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977c4c
	if (ctx.cr6.eq) goto loc_82977C4C;
	// lis r10,29488
	ctx.r10.s64 = 1932525568;
loc_82977C38:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82977df4
	if (!ctx.cr6.eq) goto loc_82977DF4;
loc_82977C40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977C4C:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82977c58
	goto loc_82977C58;
loc_82977C54:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82977C58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82977C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82977d64
	goto loc_82977D64;
loc_82977C70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977C7C:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x82977d14
	if (ctx.cr6.gt) goto loc_82977D14;
	// beq cr6,0x82977c40
	if (ctx.cr6.eq) goto loc_82977C40;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x82977ce8
	if (ctx.cr6.gt) goto loc_82977CE8;
	// beq cr6,0x82977cd0
	if (ctx.cr6.eq) goto loc_82977CD0;
	// lis r10,29520
	ctx.r10.s64 = 1934622720;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977cdc
	if (ctx.cr6.eq) goto loc_82977CDC;
	// lis r10,29536
	ctx.r10.s64 = 1935671296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977cdc
	if (ctx.cr6.eq) goto loc_82977CDC;
	// lis r10,29552
	ctx.r10.s64 = 1936719872;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977cdc
	if (ctx.cr6.eq) goto loc_82977CDC;
	// lis r10,29568
	ctx.r10.s64 = 1937768448;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977cdc
	if (ctx.cr6.eq) goto loc_82977CDC;
	// lis r10,29584
	ctx.r10.s64 = 1938817024;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82977df4
	if (!ctx.cr6.eq) goto loc_82977DF4;
loc_82977CD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977CDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977CE8:
	// lis r10,29616
	ctx.r10.s64 = 1940914176;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977cd0
	if (ctx.cr6.eq) goto loc_82977CD0;
	// lis r10,29632
	ctx.r10.s64 = 1941962752;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977cd0
	if (ctx.cr6.eq) goto loc_82977CD0;
	// lis r10,29648
	ctx.r10.s64 = 1943011328;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977c40
	if (ctx.cr6.eq) goto loc_82977C40;
	// lis r10,29664
	ctx.r10.s64 = 1944059904;
	// b 0x82977c38
	goto loc_82977C38;
loc_82977D14:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82977da8
	if (ctx.cr6.gt) goto loc_82977DA8;
	// beq cr6,0x82977d50
	if (ctx.cr6.eq) goto loc_82977D50;
	// lis r10,29696
	ctx.r10.s64 = 1946157056;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977c40
	if (ctx.cr6.eq) goto loc_82977C40;
	// lis r10,29712
	ctx.r10.s64 = 1947205632;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977d9c
	if (ctx.cr6.eq) goto loc_82977D9C;
	// lis r10,29728
	ctx.r10.s64 = 1948254208;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977d90
	if (ctx.cr6.eq) goto loc_82977D90;
	// lis r10,29760
	ctx.r10.s64 = 1950351360;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82977df4
	if (!ctx.cr6.eq) goto loc_82977DF4;
loc_82977D50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
loc_82977D58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82977D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82977D64:
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82977df4
	if (ctx.cr6.eq) goto loc_82977DF4;
loc_82977D6C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8297767c
	if (ctx.cr6.lt) goto loc_8297767C;
loc_82977D84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82977D88:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82977D90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977D9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977DA8:
	// lis r10,29792
	ctx.r10.s64 = 1952448512;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977d50
	if (ctx.cr6.eq) goto loc_82977D50;
	// lis r10,29808
	ctx.r10.s64 = 1953497088;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977d50
	if (ctx.cr6.eq) goto loc_82977D50;
	// lis r10,29856
	ctx.r10.s64 = 1956642816;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82977de4
	if (ctx.cr6.eq) goto loc_82977DE4;
	// lis r10,29872
	ctx.r10.s64 = 1957691392;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82977df4
	if (!ctx.cr6.eq) goto loc_82977DF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977DE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// b 0x82977d58
	goto loc_82977D58;
loc_82977DF0:
	// twi 31,r0,22
	if (ctx.r0.s32 < 22 || ctx.r0.s32 > 22 || ctx.r0.u32 == 22 || ctx.r0.u32 < 22 || ctx.r0.u32 > 22) __builtin_debugtrap();
loc_82977DF4:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r5,4532
	ctx.r5.s64 = 4532;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// beq 0x82977e1c
	if (ctx.cr0.eq) goto loc_82977E1C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r6,r10,25520
	ctx.r6.s64 = ctx.r10.s64 + 25520;
	// b 0x82977e24
	goto loc_82977E24;
loc_82977E1C:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r6,r10,25464
	ctx.r6.s64 = ctx.r10.s64 + 25464;
loc_82977E24:
	// bl 0x829ad460
	ctx.lr = 0x82977E28;
	sub_829AD460(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82977d88
	goto loc_82977D88;
}

__attribute__((alias("__imp__sub_82977E30"))) PPC_WEAK_FUNC(sub_82977E30);
PPC_FUNC_IMPL(__imp__sub_82977E30) {
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
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82977e60
	if (ctx.cr6.eq) goto loc_82977E60;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82977f28
	goto loc_82977F28;
loc_82977E60:
	// lis r4,512
	ctx.r4.s64 = 33554432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,31
	ctx.r4.u64 = ctx.r4.u64 | 31;
	// bl 0x82994a78
	ctx.lr = 0x82977E70;
	sub_82994A78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82977f28
	if (ctx.cr0.lt) goto loc_82977F28;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82977ee0
	if (!ctx.cr6.eq) goto loc_82977EE0;
	// lis r4,-28672
	ctx.r4.s64 = -1879048192;
loc_82977E8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82977E90:
	// bl 0x82991cf8
	ctx.lr = 0x82977E94;
	sub_82991CF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82977f28
	if (ctx.cr0.lt) goto loc_82977F28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,16389
	ctx.r10.s64 = 16389;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,15
	ctx.r5.s64 = 983040;
	// rlwimi r4,r10,29,0,20
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0xFFFFF800) | (ctx.r4.u64 & 0xFFFFFFFF000007FF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82977EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82977f28
	if (ctx.cr0.lt) goto loc_82977F28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8298c290
	ctx.lr = 0x82977ED4;
	sub_8298C290(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// b 0x82977f28
	goto loc_82977F28;
loc_82977EE0:
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82977ef4
	if (!ctx.cr6.eq) goto loc_82977EF4;
	// lis r4,-24576
	ctx.r4.s64 = -1610612736;
	// b 0x82977e8c
	goto loc_82977E8C;
loc_82977EF4:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82977f0c
	if (!ctx.cr6.eq) goto loc_82977F0C;
	// lis r4,-26624
	ctx.r4.s64 = -1744830464;
	// b 0x82977e90
	goto loc_82977E90;
loc_82977F0C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,4814
	ctx.r5.s64 = 4814;
	// addi r6,r11,25576
	ctx.r6.s64 = ctx.r11.s64 + 25576;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829ad460
	ctx.lr = 0x82977F20;
	sub_829AD460(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82977F28:
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

__attribute__((alias("__imp__sub_82977F40"))) PPC_WEAK_FUNC(sub_82977F40);
PPC_FUNC_IMPL(__imp__sub_82977F40) {
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
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82977f9c
	if (ctx.cr6.eq) goto loc_82977F9C;
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
loc_82977F68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82991cf8
	ctx.lr = 0x82977F70;
	sub_82991CF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82977f88
	if (ctx.cr0.lt) goto loc_82977F88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8298c290
	ctx.lr = 0x82977F80;
	sub_8298C290(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82977F88:
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
loc_82977F9C:
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// b 0x82977f68
	goto loc_82977F68;
}

__attribute__((alias("__imp__sub_82977FA4"))) PPC_WEAK_FUNC(sub_82977FA4);
PPC_FUNC_IMPL(__imp__sub_82977FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82977FA8"))) PPC_WEAK_FUNC(sub_82977FA8);
PPC_FUNC_IMPL(__imp__sub_82977FA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82977FB8"))) PPC_WEAK_FUNC(sub_82977FB8);
PPC_FUNC_IMPL(__imp__sub_82977FB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82977FC8"))) PPC_WEAK_FUNC(sub_82977FC8);
PPC_FUNC_IMPL(__imp__sub_82977FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82977FD0;
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
	// bl 0x8299a5b8
	ctx.lr = 0x82977FE4;
	sub_8299A5B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297800c
	if (ctx.cr0.lt) goto loc_8297800C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297800C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8297800C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82978014"))) PPC_WEAK_FUNC(sub_82978014);
PPC_FUNC_IMPL(__imp__sub_82978014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82978018"))) PPC_WEAK_FUNC(sub_82978018);
PPC_FUNC_IMPL(__imp__sub_82978018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82978020;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x8298b670
	ctx.lr = 0x82978034;
	sub_8298B670(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82978068
	if (ctx.cr0.lt) goto loc_82978068;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82978054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// bne cr6,0x82978064
	if (!ctx.cr6.eq) goto loc_82978064;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82978064:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82978068:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82978070"))) PPC_WEAK_FUNC(sub_82978070);
PPC_FUNC_IMPL(__imp__sub_82978070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82978078;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x829780a0
	if (ctx.cr6.eq) goto loc_829780A0;
	// lis r24,15
	ctx.r24.s64 = 983040;
	// b 0x82978154
	goto loc_82978154;
loc_829780A0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829780c0
	if (ctx.cr0.eq) goto loc_829780C0;
	// lis r24,16
	ctx.r24.s64 = 1048576;
loc_829780C0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82978154
	if (ctx.cr6.eq) goto loc_82978154;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r27,r11,25632
	ctx.r27.s64 = ctx.r11.s64 + 25632;
loc_829780D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82978120
	if (ctx.cr6.lt) goto loc_82978120;
	// beq cr6,0x82978118
	if (ctx.cr6.eq) goto loc_82978118;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82978110
	if (ctx.cr6.lt) goto loc_82978110;
	// bne cr6,0x82978124
	if (!ctx.cr6.eq) goto loc_82978124;
	// lis r31,8
	ctx.r31.s64 = 524288;
	// b 0x82978124
	goto loc_82978124;
loc_82978110:
	// lis r31,4
	ctx.r31.s64 = 262144;
	// b 0x82978124
	goto loc_82978124;
loc_82978118:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x82978124
	goto loc_82978124;
loc_82978120:
	// lis r31,1
	ctx.r31.s64 = 65536;
loc_82978124:
	// and. r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 & ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978144
	if (ctx.cr0.eq) goto loc_82978144;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,4821
	ctx.r5.s64 = 4821;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x829ad460
	ctx.lr = 0x82978144;
	sub_829AD460(ctx, base);
loc_82978144:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// or r24,r31,r24
	ctx.r24.u64 = ctx.r31.u64 | ctx.r24.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x829780d8
	if (!ctx.cr0.eq) goto loc_829780D8;
loc_82978154:
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829781e8
	if (!ctx.cr0.eq) goto loc_829781E8;
	// lwz r11,204(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829781e4
	if (!ctx.cr0.eq) goto loc_829781E4;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x829781dc
	if (ctx.cr6.eq) goto loc_829781DC;
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82978180:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r7,0,6,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x829781cc
	if (!ctx.cr0.eq) goto loc_829781CC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,16(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x829781dc
	if (ctx.cr0.eq) goto loc_829781DC;
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x829781dc
	if (ctx.cr6.eq) goto loc_829781DC;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x829781dc
	if (!ctx.cr6.eq) goto loc_829781DC;
loc_829781CC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82978180
	if (ctx.cr6.lt) goto loc_82978180;
loc_829781DC:
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x829781e8
	if (!ctx.cr6.eq) goto loc_829781E8;
loc_829781E4:
	// oris r24,r24,32
	ctx.r24.u64 = ctx.r24.u64 | 2097152;
loc_829781E8:
	// lwz r11,204(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297823c
	if (ctx.cr0.eq) goto loc_8297823C;
	// lwz r11,296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297823c
	if (ctx.cr6.eq) goto loc_8297823C;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8297823c
	if (ctx.cr6.eq) goto loc_8297823C;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
loc_82978214:
	// lwz r8,300(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 300);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mulli r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 * 6;
	// lwz r7,296(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// bdnz 0x82978214
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82978214;
loc_8297823C:
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297824C"))) PPC_WEAK_FUNC(sub_8297824C);
PPC_FUNC_IMPL(__imp__sub_8297824C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82978250"))) PPC_WEAK_FUNC(sub_82978250);
PPC_FUNC_IMPL(__imp__sub_82978250) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi r9,r11,12
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// beq cr6,0x8297828c
	if (ctx.cr6.eq) goto loc_8297828C;
loc_82978284:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8297828C:
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829782a0
	if (!ctx.cr6.eq) goto loc_829782A0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// b 0x82978308
	goto loc_82978308;
loc_829782A0:
	// lis r10,29568
	ctx.r10.s64 = 1937768448;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x829782dc
	if (ctx.cr6.gt) goto loc_829782DC;
	// beq cr6,0x8297830c
	if (ctx.cr6.eq) goto loc_8297830C;
	// lis r10,4336
	ctx.r10.s64 = 284164096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8297830c
	if (ctx.cr6.eq) goto loc_8297830C;
	// lis r10,29520
	ctx.r10.s64 = 1934622720;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8297830c
	if (ctx.cr6.eq) goto loc_8297830C;
	// lis r10,29536
	ctx.r10.s64 = 1935671296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8297830c
	if (ctx.cr6.eq) goto loc_8297830C;
	// lis r10,29552
	ctx.r10.s64 = 1936719872;
	// b 0x82978304
	goto loc_82978304;
loc_829782DC:
	// lis r10,29760
	ctx.r10.s64 = 1950351360;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8297830c
	if (ctx.cr6.eq) goto loc_8297830C;
	// lis r10,29776
	ctx.r10.s64 = 1951399936;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8297830c
	if (ctx.cr6.eq) goto loc_8297830C;
	// lis r10,29792
	ctx.r10.s64 = 1952448512;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8297830c
	if (ctx.cr6.eq) goto loc_8297830C;
	// lis r10,29808
	ctx.r10.s64 = 1953497088;
loc_82978304:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82978308:
	// bne cr6,0x82978284
	if (!ctx.cr6.eq) goto loc_82978284;
loc_8297830C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82978314"))) PPC_WEAK_FUNC(sub_82978314);
PPC_FUNC_IMPL(__imp__sub_82978314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82978318"))) PPC_WEAK_FUNC(sub_82978318);
PPC_FUNC_IMPL(__imp__sub_82978318) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r10,25712
	ctx.r6.s64 = ctx.r10.s64 + 25712;
	// addi r5,r9,25692
	ctx.r5.s64 = ctx.r9.s64 + 25692;
	// lwz r11,524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// addi r4,r8,25676
	ctx.r4.s64 = ctx.r8.s64 + 25676;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82978340"))) PPC_WEAK_FUNC(sub_82978340);
PPC_FUNC_IMPL(__imp__sub_82978340) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r10,25772
	ctx.r6.s64 = ctx.r10.s64 + 25772;
	// addi r5,r9,25748
	ctx.r5.s64 = ctx.r9.s64 + 25748;
	// lwz r11,532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// addi r4,r8,25740
	ctx.r4.s64 = ctx.r8.s64 + 25740;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82978368"))) PPC_WEAK_FUNC(sub_82978368);
PPC_FUNC_IMPL(__imp__sub_82978368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r10,25772
	ctx.r6.s64 = ctx.r10.s64 + 25772;
	// addi r5,r9,25748
	ctx.r5.s64 = ctx.r9.s64 + 25748;
	// lwz r11,536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// addi r4,r8,25740
	ctx.r4.s64 = ctx.r8.s64 + 25740;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82978390"))) PPC_WEAK_FUNC(sub_82978390);
PPC_FUNC_IMPL(__imp__sub_82978390) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r10,25836
	ctx.r6.s64 = ctx.r10.s64 + 25836;
	// addi r5,r9,25816
	ctx.r5.s64 = ctx.r9.s64 + 25816;
	// lwz r11,532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// addi r4,r8,25800
	ctx.r4.s64 = ctx.r8.s64 + 25800;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_829783B8"))) PPC_WEAK_FUNC(sub_829783B8);
PPC_FUNC_IMPL(__imp__sub_829783B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r10,25836
	ctx.r6.s64 = ctx.r10.s64 + 25836;
	// addi r5,r9,25816
	ctx.r5.s64 = ctx.r9.s64 + 25816;
	// lwz r11,536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// addi r4,r8,25800
	ctx.r4.s64 = ctx.r8.s64 + 25800;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_829783E0"))) PPC_WEAK_FUNC(sub_829783E0);
PPC_FUNC_IMPL(__imp__sub_829783E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x829783E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82978408
	if (!ctx.cr6.eq) goto loc_82978408;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82978558
	goto loc_82978558;
loc_82978408:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82978420
	if (!ctx.cr6.eq) goto loc_82978420;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82978558
	goto loc_82978558;
loc_82978420:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82978438:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8297849c
	if (!ctx.cr6.eq) goto loc_8297849C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8297849c
	if (!ctx.cr6.eq) goto loc_8297849C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8297849c
	if (!ctx.cr6.eq) goto loc_8297849C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82978544
	if (ctx.cr6.eq) goto loc_82978544;
loc_8297849C:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// oris r9,r10,45056
	ctx.r9.u64 = ctx.r10.u64 | 2952790016;
	// ori r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 4096;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82978500
	if (ctx.cr6.lt) goto loc_82978500;
	// beq cr6,0x829784f8
	if (ctx.cr6.eq) goto loc_829784F8;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x829784f0
	if (ctx.cr6.lt) goto loc_829784F0;
	// bne cr6,0x82978500
	if (!ctx.cr6.eq) goto loc_82978500;
	// oris r9,r9,255
	ctx.r9.u64 = ctx.r9.u64 | 16711680;
	// b 0x829784fc
	goto loc_829784FC;
loc_829784F0:
	// oris r9,r9,170
	ctx.r9.u64 = ctx.r9.u64 | 11141120;
	// b 0x829784fc
	goto loc_829784FC;
loc_829784F8:
	// oris r9,r9,85
	ctx.r9.u64 = ctx.r9.u64 | 5570560;
loc_829784FC:
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82978500:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82978514
	if (!ctx.cr6.eq) goto loc_82978514;
	// oris r11,r9,3328
	ctx.r11.u64 = ctx.r9.u64 | 218103808;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82978514:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mullw r4,r10,r29
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297853C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82978558
	if (ctx.cr0.lt) goto loc_82978558;
loc_82978544:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x82978438
	if (ctx.cr6.lt) goto loc_82978438;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829962e8
	ctx.lr = 0x82978558;
	sub_829962E8(ctx, base);
loc_82978558:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82978560"))) PPC_WEAK_FUNC(sub_82978560);
PPC_FUNC_IMPL(__imp__sub_82978560) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82978574"))) PPC_WEAK_FUNC(sub_82978574);
PPC_FUNC_IMPL(__imp__sub_82978574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82978578"))) PPC_WEAK_FUNC(sub_82978578);
PPC_FUNC_IMPL(__imp__sub_82978578) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8297858C"))) PPC_WEAK_FUNC(sub_8297858C);
PPC_FUNC_IMPL(__imp__sub_8297858C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82978590"))) PPC_WEAK_FUNC(sub_82978590);
PPC_FUNC_IMPL(__imp__sub_82978590) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_829785A4"))) PPC_WEAK_FUNC(sub_829785A4);
PPC_FUNC_IMPL(__imp__sub_829785A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829785A8"))) PPC_WEAK_FUNC(sub_829785A8);
PPC_FUNC_IMPL(__imp__sub_829785A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_829785BC"))) PPC_WEAK_FUNC(sub_829785BC);
PPC_FUNC_IMPL(__imp__sub_829785BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829785C0"))) PPC_WEAK_FUNC(sub_829785C0);
PPC_FUNC_IMPL(__imp__sub_829785C0) {
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
	// lwz r7,260(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82978628
	if (!ctx.cr6.eq) goto loc_82978628;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297860C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297879c
	if (ctx.cr0.lt) goto loc_8297879C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82997320
	ctx.lr = 0x82978624;
	sub_82997320(ctx, base);
	// b 0x8297879c
	goto loc_8297879C;
loc_82978628:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829786f8
	if (!ctx.cr0.eq) goto loc_829786F8;
	// lwz r5,12(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x829786e8
	if (ctx.cr6.eq) goto loc_829786E8;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
loc_8297864C:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r10,r4,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x829786e8
	if (!ctx.cr6.eq) goto loc_829786E8;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x829786e8
	if (!ctx.cr6.eq) goto loc_829786E8;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x829786e8
	if (!ctx.cr6.eq) goto loc_829786E8;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x829786e8
	if (!ctx.cr6.eq) goto loc_829786E8;
	// lwz r4,60(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829786e8
	if (!ctx.cr6.eq) goto loc_829786E8;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829786d8
	if (ctx.cr0.eq) goto loc_829786D8;
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829786e8
	if (!ctx.cr6.eq) goto loc_829786E8;
loc_829786D8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8297864c
	if (ctx.cr6.lt) goto loc_8297864C;
loc_829786E8:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x829786f8
	if (!ctx.cr6.eq) goto loc_829786F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8297879c
	goto loc_8297879C;
loc_829786F8:
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82978768
	if (!ctx.cr6.gt) goto loc_82978768;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8297870C:
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r5,r7,0,4,6
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82978750
	if (!ctx.cr0.eq) goto loc_82978750;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_82978750:
	// lwz r7,260(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8297870c
	if (ctx.cr6.lt) goto loc_8297870C;
loc_82978768:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r5,r10,12
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFFF;
	// lwz r11,572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297878C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297879c
	if (ctx.cr0.lt) goto loc_8297879C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82997920
	ctx.lr = 0x8297879C;
	sub_82997920(ctx, base);
loc_8297879C:
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

__attribute__((alias("__imp__sub_829787B0"))) PPC_WEAK_FUNC(sub_829787B0);
PPC_FUNC_IMPL(__imp__sub_829787B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x822d6f30
	sub_822D6F30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829787B4"))) PPC_WEAK_FUNC(sub_829787B4);
PPC_FUNC_IMPL(__imp__sub_829787B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829787B8"))) PPC_WEAK_FUNC(sub_829787B8);
PPC_FUNC_IMPL(__imp__sub_829787B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_829787D8"))) PPC_WEAK_FUNC(sub_829787D8);
PPC_FUNC_IMPL(__imp__sub_829787D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_829787F8"))) PPC_WEAK_FUNC(sub_829787F8);
PPC_FUNC_IMPL(__imp__sub_829787F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,600(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82978808"))) PPC_WEAK_FUNC(sub_82978808);
PPC_FUNC_IMPL(__imp__sub_82978808) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,632(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 632);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82978818"))) PPC_WEAK_FUNC(sub_82978818);
PPC_FUNC_IMPL(__imp__sub_82978818) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,620(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 620);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82978828"))) PPC_WEAK_FUNC(sub_82978828);
PPC_FUNC_IMPL(__imp__sub_82978828) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,636(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82978838"))) PPC_WEAK_FUNC(sub_82978838);
PPC_FUNC_IMPL(__imp__sub_82978838) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,608(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 608);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82978848"))) PPC_WEAK_FUNC(sub_82978848);
PPC_FUNC_IMPL(__imp__sub_82978848) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,624(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 624);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82978858"))) PPC_WEAK_FUNC(sub_82978858);
PPC_FUNC_IMPL(__imp__sub_82978858) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,640(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 640);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82978868"))) PPC_WEAK_FUNC(sub_82978868);
PPC_FUNC_IMPL(__imp__sub_82978868) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,612(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 612);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82978878"))) PPC_WEAK_FUNC(sub_82978878);
PPC_FUNC_IMPL(__imp__sub_82978878) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,628(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 628);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82978888"))) PPC_WEAK_FUNC(sub_82978888);
PPC_FUNC_IMPL(__imp__sub_82978888) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,644(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 644);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82978898"))) PPC_WEAK_FUNC(sub_82978898);
PPC_FUNC_IMPL(__imp__sub_82978898) {
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
	// lwz r3,1532(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1532);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,25864
	ctx.r11.s64 = ctx.r11.s64 + 25864;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x829788cc
	if (ctx.cr6.eq) goto loc_829788CC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82691460
	ctx.lr = 0x829788CC;
	sub_82691460(ctx, base);
loc_829788CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82997e28
	ctx.lr = 0x829788D4;
	sub_82997E28(ctx, base);
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

__attribute__((alias("__imp__sub_829788E8"))) PPC_WEAK_FUNC(sub_829788E8);
PPC_FUNC_IMPL(__imp__sub_829788E8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829788F4"))) PPC_WEAK_FUNC(sub_829788F4);
PPC_FUNC_IMPL(__imp__sub_829788F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829788F8"))) PPC_WEAK_FUNC(sub_829788F8);
PPC_FUNC_IMPL(__imp__sub_829788F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82978900;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1540(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1540);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bne cr6,0x8297891c
	if (!ctx.cr6.eq) goto loc_8297891C;
	// li r30,1024
	ctx.r30.s64 = 1024;
loc_8297891C:
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82978940
	if (!ctx.cr6.gt) goto loc_82978940;
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
loc_82978934:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82978934
	if (ctx.cr6.gt) goto loc_82978934;
loc_82978940:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8297898c
	if (ctx.cr6.eq) goto loc_8297898C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691410
	ctx.lr = 0x82978954;
	sub_82691410(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82978968
	if (!ctx.cr0.eq) goto loc_82978968;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82978990
	goto loc_82978990;
loc_82978968:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,1536(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// lwz r4,1532(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// bl 0x82fa77c0
	ctx.lr = 0x82978978;
	sub_82FA77C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,1532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// bl 0x82691460
	ctx.lr = 0x82978984;
	sub_82691460(ctx, base);
	// stw r29,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r29.u32);
	// stw r30,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
loc_8297898C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82978990:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82978998"))) PPC_WEAK_FUNC(sub_82978998);
PPC_FUNC_IMPL(__imp__sub_82978998) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82997db0
	ctx.lr = 0x829789B8;
	sub_82997DB0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,25864
	ctx.r10.s64 = ctx.r10.s64 + 25864;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,508
	ctx.r3.s64 = ctx.r31.s64 + 508;
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// stw r11,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r11.u32);
	// stw r9,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r9.u32);
	// stw r11,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r11.u32);
	// stw r11,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r11.u32);
	// bl 0x829321e0
	ctx.lr = 0x829789FC;
	sub_829321E0(ctx, base);
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

__attribute__((alias("__imp__sub_82978A18"))) PPC_WEAK_FUNC(sub_82978A18);
PPC_FUNC_IMPL(__imp__sub_82978A18) {
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
	// bl 0x82978898
	ctx.lr = 0x82978A38;
	sub_82978898(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82978a4c
	if (ctx.cr0.eq) goto loc_82978A4C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x82978A4C;
	sub_82691460(ctx, base);
loc_82978A4C:
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

__attribute__((alias("__imp__sub_82978A68"))) PPC_WEAK_FUNC(sub_82978A68);
PPC_FUNC_IMPL(__imp__sub_82978A68) {
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
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82927410
	ctx.lr = 0x82978ABC;
	sub_82927410(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r9,2143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2143, ctx.r9.u8);
loc_82978ACC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82978acc
	if (!ctx.cr6.eq) goto loc_82978ACC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829788f8
	ctx.lr = 0x82978AF4;
	sub_829788F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82978b24
	if (ctx.cr0.lt) goto loc_82978B24;
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,1536(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82978B14;
	sub_82FA77C0(ctx, base);
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
loc_82978B24:
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

__attribute__((alias("__imp__sub_82978B3C"))) PPC_WEAK_FUNC(sub_82978B3C);
PPC_FUNC_IMPL(__imp__sub_82978B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82978B40"))) PPC_WEAK_FUNC(sub_82978B40);
PPC_FUNC_IMPL(__imp__sub_82978B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82978B48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82978b8c
	if (!ctx.cr6.gt) goto loc_82978B8C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r29,r11,14760
	ctx.r29.s64 = ctx.r11.s64 + 14760;
loc_82978B68:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82978B74;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82978b90
	if (ctx.cr0.lt) goto loc_82978B90;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82978b68
	if (ctx.cr6.lt) goto loc_82978B68;
loc_82978B8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82978B90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82978B98"))) PPC_WEAK_FUNC(sub_82978B98);
PPC_FUNC_IMPL(__imp__sub_82978B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82978BA0;
	__savegprlr_22(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1816);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82978cd8
	if (!ctx.cr6.gt) goto loc_82978CD8;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r22,r9,26524
	ctx.r22.s64 = ctx.r9.s64 + 26524;
	// addi r29,r10,14172
	ctx.r29.s64 = ctx.r10.s64 + 14172;
	// addi r28,r11,26512
	ctx.r28.s64 = ctx.r11.s64 + 26512;
loc_82978BE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978b40
	ctx.lr = 0x82978BEC;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82978cdc
	if (ctx.cr0.lt) goto loc_82978CDC;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x82978C0C;
	sub_8292E140(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x82978C24;
	sub_8292E140(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978a68
	ctx.lr = 0x82978C3C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82978cdc
	if (ctx.cr0.lt) goto loc_82978CDC;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82978c7c
	if (ctx.cr6.eq) goto loc_82978C7C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x82978C64;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978a68
	ctx.lr = 0x82978C74;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82978cdc
	if (ctx.cr0.lt) goto loc_82978CDC;
loc_82978C7C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82978cb4
	if (ctx.cr6.eq) goto loc_82978CB4;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x82978C9C;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978a68
	ctx.lr = 0x82978CAC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82978cdc
	if (ctx.cr0.lt) goto loc_82978CDC;
loc_82978CB4:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978a68
	ctx.lr = 0x82978CC0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82978cdc
	if (ctx.cr0.lt) goto loc_82978CDC;
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82978be4
	if (ctx.cr6.lt) goto loc_82978BE4;
loc_82978CD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82978CDC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82978CE4"))) PPC_WEAK_FUNC(sub_82978CE4);
PPC_FUNC_IMPL(__imp__sub_82978CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82978CE8"))) PPC_WEAK_FUNC(sub_82978CE8);
PPC_FUNC_IMPL(__imp__sub_82978CE8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwimi r11,r10,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x82978d8c
	if (ctx.cr6.gt) goto loc_82978D8C;
	// beq cr6,0x82978d6c
	if (ctx.cr6.eq) goto loc_82978D6C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82978d2c
	if (!ctx.cr6.gt) goto loc_82978D2C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82978d4c
	if (ctx.cr6.eq) goto loc_82978D4C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x82978d9c
	if (!ctx.cr6.gt) goto loc_82978D9C;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82978d9c
	if (ctx.cr6.gt) goto loc_82978D9C;
loc_82978D2C:
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-16448
	ctx.r9.s64 = ctx.r9.s64 + -16448;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// clrlwi r7,r10,21
	ctx.r7.u64 = ctx.r10.u32 & 0x7FF;
	// addi r5,r8,26592
	ctx.r5.s64 = ctx.r8.s64 + 26592;
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x8292e140
	sub_8292E140(ctx, base);
	return;
loc_82978D4C:
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-16448
	ctx.r9.s64 = ctx.r9.s64 + -16448;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// clrlwi r7,r10,21
	ctx.r7.u64 = ctx.r10.u32 & 0x7FF;
	// addi r5,r8,26576
	ctx.r5.s64 = ctx.r8.s64 + 26576;
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x8292e140
	sub_8292E140(ctx, base);
	return;
loc_82978D6C:
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-16448
	ctx.r9.s64 = ctx.r9.s64 + -16448;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// clrlwi r7,r10,21
	ctx.r7.u64 = ctx.r10.u32 & 0x7FF;
	// addi r5,r8,26556
	ctx.r5.s64 = ctx.r8.s64 + 26556;
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x8292e140
	sub_8292E140(ctx, base);
	return;
loc_82978D8C:
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x82978d2c
	if (ctx.cr6.eq) goto loc_82978D2C;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x82978dc0
	if (ctx.cr6.eq) goto loc_82978DC0;
loc_82978D9C:
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-16448
	ctx.r9.s64 = ctx.r9.s64 + -16448;
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r10,26544
	ctx.r5.s64 = ctx.r10.s64 + 26544;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x8292e140
	sub_8292E140(ctx, base);
	return;
loc_82978DC0:
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-16448
	ctx.r10.s64 = ctx.r10.s64 + -16448;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r9,26532
	ctx.r5.s64 = ctx.r9.s64 + 26532;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x8292e140
	sub_8292E140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82978DDC"))) PPC_WEAK_FUNC(sub_82978DDC);
PPC_FUNC_IMPL(__imp__sub_82978DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82978DE0"))) PPC_WEAK_FUNC(sub_82978DE0);
PPC_FUNC_IMPL(__imp__sub_82978DE0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82978b40
	ctx.lr = 0x82978E00;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82978e6c
	if (ctx.cr0.lt) goto loc_82978E6C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26620
	ctx.r4.s64 = ctx.r11.s64 + 26620;
	// bl 0x82978a68
	ctx.lr = 0x82978E18;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82978e6c
	if (ctx.cr0.lt) goto loc_82978E6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// rlwinm r8,r30,13,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0x1;
	// addi r4,r10,26612
	ctx.r4.s64 = ctx.r10.s64 + 26612;
	// rlwinm r7,r30,14,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x1;
	// rlwinm r6,r30,15,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0x1;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// rlwinm r5,r30,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82978E4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82978e6c
	if (ctx.cr0.lt) goto loc_82978E6C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26608
	ctx.r4.s64 = ctx.r11.s64 + 26608;
	// bl 0x82978a68
	ctx.lr = 0x82978E64;
	sub_82978A68(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82978E6C:
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

__attribute__((alias("__imp__sub_82978E84"))) PPC_WEAK_FUNC(sub_82978E84);
PPC_FUNC_IMPL(__imp__sub_82978E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82978E88"))) PPC_WEAK_FUNC(sub_82978E88);
PPC_FUNC_IMPL(__imp__sub_82978E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82978E90;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1812);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82978f3c
	if (ctx.cr6.eq) goto loc_82978F3C;
	// lwz r11,1816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82978f3c
	if (!ctx.cr6.gt) goto loc_82978F3C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r9,26608
	ctx.r27.s64 = ctx.r9.s64 + 26608;
	// addi r29,r10,25676
	ctx.r29.s64 = ctx.r10.s64 + 25676;
	// addi r28,r11,26632
	ctx.r28.s64 = ctx.r11.s64 + 26632;
loc_82978ECC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82978ED4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82978f40
	if (ctx.cr0.lt) goto loc_82978F40;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82978EEC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82978f40
	if (ctx.cr0.lt) goto loc_82978F40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82978F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82978f40
	if (ctx.cr0.lt) goto loc_82978F40;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82978F24;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82978f40
	if (ctx.cr0.lt) goto loc_82978F40;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82978ecc
	if (ctx.cr6.lt) goto loc_82978ECC;
loc_82978F3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82978F40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82978F48"))) PPC_WEAK_FUNC(sub_82978F48);
PPC_FUNC_IMPL(__imp__sub_82978F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82978F50;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8297903c
	if (ctx.cr6.eq) goto loc_8297903C;
	// andis. r11,r4,85
	ctx.r11.u64 = ctx.r4.u64 & 5570560;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82978f74
	if (ctx.cr0.eq) goto loc_82978F74;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82978f84
	goto loc_82978F84;
loc_82978F74:
	// andis. r11,r4,170
	ctx.r11.u64 = ctx.r4.u64 & 11141120;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r26,r11,2
	ctx.r26.s64 = ctx.r11.s64 + 2;
loc_82978F84:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8297903c
	if (!ctx.cr6.gt) goto loc_8297903C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r9,26608
	ctx.r27.s64 = ctx.r9.s64 + 26608;
	// addi r29,r10,26632
	ctx.r29.s64 = ctx.r10.s64 + 26632;
	// addi r28,r11,26648
	ctx.r28.s64 = ctx.r11.s64 + 26648;
loc_82978FAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82978FB4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979040
	if (ctx.cr0.lt) goto loc_82979040;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8292e140
	ctx.lr = 0x82978FD0;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82978FE0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979040
	if (ctx.cr0.lt) goto loc_82979040;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979040
	if (ctx.cr0.lt) goto loc_82979040;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82979024;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979040
	if (ctx.cr0.lt) goto loc_82979040;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82978fac
	if (ctx.cr6.lt) goto loc_82978FAC;
loc_8297903C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82979040:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82979048"))) PPC_WEAK_FUNC(sub_82979048);
PPC_FUNC_IMPL(__imp__sub_82979048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82979050;
	__savegprlr_20(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x829791b8
	if (ctx.cr6.eq) goto loc_829791B8;
	// lwz r11,1816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x829791b8
	if (!ctx.cr6.gt) goto loc_829791B8;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r7,26608
	ctx.r27.s64 = ctx.r7.s64 + 26608;
	// addi r29,r8,26684
	ctx.r29.s64 = ctx.r8.s64 + 26684;
	// addi r26,r9,26648
	ctx.r26.s64 = ctx.r9.s64 + 26648;
	// addi r25,r10,26672
	ctx.r25.s64 = ctx.r10.s64 + 26672;
	// addi r28,r11,26660
	ctx.r28.s64 = ctx.r11.s64 + 26660;
loc_829790AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x829790B4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829791bc
	if (ctx.cr0.lt) goto loc_829791BC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x829790D0;
	sub_8292E140(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x829790E8;
	sub_8292E140(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bne cr6,0x82979104
	if (!ctx.cr6.eq) goto loc_82979104;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82979104:
	// bl 0x8292e140
	ctx.lr = 0x82979108;
	sub_8292E140(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bne cr6,0x82979120
	if (!ctx.cr6.eq) goto loc_82979120;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_82979120:
	// bl 0x82978a68
	ctx.lr = 0x82979124;
	sub_82978A68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829791bc
	if (ctx.cr6.lt) goto loc_829791BC;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x8297913c
	if (!ctx.cr6.eq) goto loc_8297913C;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// b 0x82979158
	goto loc_82979158;
loc_8297913C:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292e140
	ctx.lr = 0x82979154;
	sub_8292E140(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_82979158:
	// andis. r11,r23,3328
	ctx.r11.u64 = ctx.r23.u64 & 218103808;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x82979180
	if (ctx.cr0.eq) goto loc_82979180;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// b 0x82979188
	goto loc_82979188;
loc_82979180:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82979188:
	// bctrl 
	ctx.lr = 0x8297918C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829791bc
	if (ctx.cr0.lt) goto loc_829791BC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x829791A0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829791bc
	if (ctx.cr0.lt) goto loc_829791BC;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829790ac
	if (ctx.cr6.lt) goto loc_829790AC;
loc_829791B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829791BC:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829791C4"))) PPC_WEAK_FUNC(sub_829791C4);
PPC_FUNC_IMPL(__imp__sub_829791C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829791C8"))) PPC_WEAK_FUNC(sub_829791C8);
PPC_FUNC_IMPL(__imp__sub_829791C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x829791D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x829792f4
	if (ctx.cr6.eq) goto loc_829792F4;
	// lwz r11,1816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x829792f4
	if (!ctx.cr6.gt) goto loc_829792F4;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r26,r8,26608
	ctx.r26.s64 = ctx.r8.s64 + 26608;
	// addi r28,r9,26692
	ctx.r28.s64 = ctx.r9.s64 + 26692;
	// addi r29,r10,26684
	ctx.r29.s64 = ctx.r10.s64 + 26684;
	// addi r27,r11,26660
	ctx.r27.s64 = ctx.r11.s64 + 26660;
loc_82979220:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82979228;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829792f8
	if (ctx.cr0.lt) goto loc_829792F8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x82979244;
	sub_8292E140(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297925C;
	sub_8292E140(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x82979274
	if (!ctx.cr6.eq) goto loc_82979274;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_82979274:
	// bl 0x82978a68
	ctx.lr = 0x82979278;
	sub_82978A68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829792f8
	if (ctx.cr6.lt) goto loc_829792F8;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82979290
	if (!ctx.cr6.eq) goto loc_82979290;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// b 0x829792ac
	goto loc_829792AC;
loc_82979290:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x829792A8;
	sub_8292E140(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
loc_829792AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829792C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829792f8
	if (ctx.cr0.lt) goto loc_829792F8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x829792DC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829792f8
	if (ctx.cr0.lt) goto loc_829792F8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82979220
	if (ctx.cr6.lt) goto loc_82979220;
loc_829792F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829792F8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82979300"))) PPC_WEAK_FUNC(sub_82979300);
PPC_FUNC_IMPL(__imp__sub_82979300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82979308;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1812);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82979440
	if (ctx.cr6.eq) goto loc_82979440;
	// lwz r11,1816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82979440
	if (!ctx.cr6.gt) goto loc_82979440;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r26,r8,26608
	ctx.r26.s64 = ctx.r8.s64 + 26608;
	// addi r29,r9,26684
	ctx.r29.s64 = ctx.r9.s64 + 26684;
	// addi r28,r10,26672
	ctx.r28.s64 = ctx.r10.s64 + 26672;
	// addi r27,r11,26660
	ctx.r27.s64 = ctx.r11.s64 + 26660;
loc_82979358:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82979360;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979444
	if (ctx.cr0.lt) goto loc_82979444;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8292e140
	ctx.lr = 0x8297937C;
	sub_8292E140(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8292e140
	ctx.lr = 0x82979394;
	sub_8292E140(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8292e140
	ctx.lr = 0x829793A8;
	sub_8292E140(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x829793c0
	if (!ctx.cr6.eq) goto loc_829793C0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_829793C0:
	// bl 0x82978a68
	ctx.lr = 0x829793C4;
	sub_82978A68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82979444
	if (ctx.cr6.lt) goto loc_82979444;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x829793dc
	if (!ctx.cr6.eq) goto loc_829793DC;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// b 0x829793f8
	goto loc_829793F8;
loc_829793DC:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8292e140
	ctx.lr = 0x829793F4;
	sub_8292E140(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_829793F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979444
	if (ctx.cr0.lt) goto loc_82979444;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82979428;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979444
	if (ctx.cr0.lt) goto loc_82979444;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82979358
	if (ctx.cr6.lt) goto loc_82979358;
loc_82979440:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82979444:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297944C"))) PPC_WEAK_FUNC(sub_8297944C);
PPC_FUNC_IMPL(__imp__sub_8297944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82979450"))) PPC_WEAK_FUNC(sub_82979450);
PPC_FUNC_IMPL(__imp__sub_82979450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82979458;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82978b40
	ctx.lr = 0x82979470;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829794fc
	if (ctx.cr0.lt) goto loc_829794FC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r11,26712
	ctx.r5.s64 = ctx.r11.s64 + 26712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8292e140
	ctx.lr = 0x82979494;
	sub_8292E140(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829794B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829794fc
	if (ctx.cr0.lt) goto loc_829794FC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26608
	ctx.r4.s64 = ctx.r11.s64 + 26608;
	// bl 0x82978a68
	ctx.lr = 0x829794C8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829794fc
	if (ctx.cr0.lt) goto loc_829794FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x829794D8;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829794fc
	if (ctx.cr0.lt) goto loc_829794FC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,26700
	ctx.r4.s64 = ctx.r11.s64 + 26700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x829794F4;
	sub_82978A68(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_829794FC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82979504"))) PPC_WEAK_FUNC(sub_82979504);
PPC_FUNC_IMPL(__imp__sub_82979504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82979508"))) PPC_WEAK_FUNC(sub_82979508);
PPC_FUNC_IMPL(__imp__sub_82979508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82979510;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82978b40
	ctx.lr = 0x82979528;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829795cc
	if (ctx.cr0.lt) goto loc_829795CC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,26728
	ctx.r4.s64 = ctx.r11.s64 + 26728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82979544;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829795cc
	if (ctx.cr0.lt) goto loc_829795CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82979554;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829795cc
	if (ctx.cr0.lt) goto loc_829795CC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,26684
	ctx.r4.s64 = ctx.r11.s64 + 26684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82979570;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829795cc
	if (ctx.cr0.lt) goto loc_829795CC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,26712
	ctx.r5.s64 = ctx.r11.s64 + 26712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8292e140
	ctx.lr = 0x82979594;
	sub_8292E140(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829795AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829795cc
	if (ctx.cr0.lt) goto loc_829795CC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26720
	ctx.r4.s64 = ctx.r11.s64 + 26720;
	// bl 0x82978a68
	ctx.lr = 0x829795C4;
	sub_82978A68(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_829795CC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829795D4"))) PPC_WEAK_FUNC(sub_829795D4);
PPC_FUNC_IMPL(__imp__sub_829795D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829795D8"))) PPC_WEAK_FUNC(sub_829795D8);
PPC_FUNC_IMPL(__imp__sub_829795D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x829795E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82978b40
	ctx.lr = 0x829795F8;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979650
	if (ctx.cr0.lt) goto loc_82979650;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,26736
	ctx.r4.s64 = ctx.r11.s64 + 26736;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297961C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979650
	if (ctx.cr0.lt) goto loc_82979650;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297962C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979650
	if (ctx.cr0.lt) goto loc_82979650;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,26700
	ctx.r4.s64 = ctx.r11.s64 + 26700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82979648;
	sub_82978A68(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82979650:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82979658"))) PPC_WEAK_FUNC(sub_82979658);
PPC_FUNC_IMPL(__imp__sub_82979658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82979660;
	__savegprlr_28(ctx, base);
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82978b40
	ctx.lr = 0x82979678;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829796d0
	if (ctx.cr0.lt) goto loc_829796D0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,26728
	ctx.r4.s64 = ctx.r11.s64 + 26728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82979694;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829796d0
	if (ctx.cr0.lt) goto loc_829796D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x829796A4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829796d0
	if (ctx.cr0.lt) goto loc_829796D0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,26752
	ctx.r4.s64 = ctx.r11.s64 + 26752;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x829796C8;
	sub_82978A68(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_829796D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829796D8"))) PPC_WEAK_FUNC(sub_829796D8);
PPC_FUNC_IMPL(__imp__sub_829796D8) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r30,r11,25676
	ctx.r30.s64 = ctx.r11.s64 + 25676;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r9,25712
	ctx.r6.s64 = ctx.r9.s64 + 25712;
	// lwz r10,528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// addi r5,r11,25692
	ctx.r5.s64 = ctx.r11.s64 + 25692;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8297971C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829797b0
	if (ctx.cr0.lt) goto loc_829797B0;
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// addi r11,r11,419
	ctx.r11.s64 = ctx.r11.s64 + 419;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829797c8
	if (ctx.cr6.eq) goto loc_829797C8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x829797c8
	if (ctx.cr6.eq) goto loc_829797C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297974C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829797b0
	if (ctx.cr0.lt) goto loc_829797B0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26788
	ctx.r4.s64 = ctx.r11.s64 + 26788;
	// bl 0x82978a68
	ctx.lr = 0x82979764;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829797b0
	if (ctx.cr0.lt) goto loc_829797B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r10,26772
	ctx.r5.s64 = ctx.r10.s64 + 26772;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297978C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829797b0
	if (ctx.cr0.lt) goto loc_829797B0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,26720
	ctx.r4.s64 = ctx.r11.s64 + 26720;
loc_8297979C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x829797A4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829797b0
	if (ctx.cr0.lt) goto loc_829797B0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_829797B0:
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
loc_829797C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,26772
	ctx.r4.s64 = ctx.r10.s64 + 26772;
	// lwz r11,564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829797E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829797b0
	if (ctx.cr0.lt) goto loc_829797B0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,4436
	ctx.r4.s64 = ctx.r11.s64 + 4436;
	// b 0x8297979c
	goto loc_8297979C;
}

__attribute__((alias("__imp__sub_829797F8"))) PPC_WEAK_FUNC(sub_829797F8);
PPC_FUNC_IMPL(__imp__sub_829797F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82978b40
	ctx.lr = 0x82979818;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979870
	if (ctx.cr0.lt) goto loc_82979870;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,26684
	ctx.r4.s64 = ctx.r11.s64 + 26684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82979834;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979870
	if (ctx.cr0.lt) goto loc_82979870;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979870
	if (ctx.cr0.lt) goto loc_82979870;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26608
	ctx.r4.s64 = ctx.r11.s64 + 26608;
	// bl 0x82978a68
	ctx.lr = 0x82979868;
	sub_82978A68(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82979870:
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

__attribute__((alias("__imp__sub_82979888"))) PPC_WEAK_FUNC(sub_82979888);
PPC_FUNC_IMPL(__imp__sub_82979888) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829798B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829799d4
	if (ctx.cr0.lt) goto loc_829799D4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,25676
	ctx.r30.s64 = ctx.r11.s64 + 25676;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 568);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829798E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829799d4
	if (ctx.cr0.lt) goto loc_829799D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r10,26692
	ctx.r5.s64 = ctx.r10.s64 + 26692;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829799d4
	if (ctx.cr0.lt) goto loc_829799D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82979918;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829799d4
	if (ctx.cr0.lt) goto loc_829799D4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26816
	ctx.r4.s64 = ctx.r11.s64 + 26816;
	// bl 0x82978a68
	ctx.lr = 0x82979930;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829799d4
	if (ctx.cr0.lt) goto loc_829799D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297994C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829799d4
	if (ctx.cr0.lt) goto loc_829799D4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26812
	ctx.r4.s64 = ctx.r11.s64 + 26812;
	// bl 0x82978a68
	ctx.lr = 0x82979964;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829799d4
	if (ctx.cr0.lt) goto loc_829799D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82979974;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829799d4
	if (ctx.cr0.lt) goto loc_829799D4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26808
	ctx.r4.s64 = ctx.r11.s64 + 26808;
	// bl 0x82978a68
	ctx.lr = 0x8297998C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829799d4
	if (ctx.cr0.lt) goto loc_829799D4;
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,420
	ctx.r11.s64 = ctx.r11.s64 + 420;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r10.u32);
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// lwz r10,1808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r10.u32);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82996598
	ctx.lr = 0x829799D4;
	sub_82996598(ctx, base);
loc_829799D4:
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

__attribute__((alias("__imp__sub_829799EC"))) PPC_WEAK_FUNC(sub_829799EC);
PPC_FUNC_IMPL(__imp__sub_829799EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829799F0"))) PPC_WEAK_FUNC(sub_829799F0);
PPC_FUNC_IMPL(__imp__sub_829799F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x829799F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1808(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1808);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,419
	ctx.r11.s64 = ctx.r11.s64 + 419;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82979bb8
	if (ctx.cr6.lt) goto loc_82979BB8;
	// bne cr6,0x82979c48
	if (!ctx.cr6.eq) goto loc_82979C48;
	// lwz r11,1544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1544, ctx.r11.u32);
	// bl 0x82978b40
	ctx.lr = 0x82979A2C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26844
	ctx.r4.s64 = ctx.r11.s64 + 26844;
	// bl 0x82978a68
	ctx.lr = 0x82979A44;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82979A54;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26620
	ctx.r4.s64 = ctx.r11.s64 + 26620;
	// bl 0x82978a68
	ctx.lr = 0x82979A6C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r7,r11,25712
	ctx.r7.s64 = ctx.r11.s64 + 25712;
	// addi r6,r10,25692
	ctx.r6.s64 = ctx.r10.s64 + 25692;
	// addi r5,r9,26832
	ctx.r5.s64 = ctx.r9.s64 + 26832;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292e140
	ctx.lr = 0x82979A98;
	sub_8292E140(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,26608
	ctx.r28.s64 = ctx.r11.s64 + 26608;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82978a68
	ctx.lr = 0x82979ACC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82979ADC;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26788
	ctx.r4.s64 = ctx.r11.s64 + 26788;
	// bl 0x82978a68
	ctx.lr = 0x82979AF4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r30,r11,25676
	ctx.r30.s64 = ctx.r11.s64 + 25676;
	// addi r29,r10,26692
	ctx.r29.s64 = ctx.r10.s64 + 26692;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,460(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 460);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82979B3C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82979B70;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26816
	ctx.r4.s64 = ctx.r11.s64 + 26816;
	// bl 0x82978a68
	ctx.lr = 0x82979B88;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,26812
	ctx.r4.s64 = ctx.r11.s64 + 26812;
	// b 0x82979c04
	goto loc_82979C04;
loc_82979BB8:
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82978b40
	ctx.lr = 0x82979BCC;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26844
	ctx.r4.s64 = ctx.r11.s64 + 26844;
	// bl 0x82978a68
	ctx.lr = 0x82979BE4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82979BF4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,26824
	ctx.r4.s64 = ctx.r11.s64 + 26824;
loc_82979C04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82979C0C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82979C1C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26808
	ctx.r4.s64 = ctx.r11.s64 + 26808;
	// bl 0x82978a68
	ctx.lr = 0x82979C34;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979c50
	if (ctx.cr0.lt) goto loc_82979C50;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
loc_82979C48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82996888
	ctx.lr = 0x82979C50;
	sub_82996888(ctx, base);
loc_82979C50:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82979C58"))) PPC_WEAK_FUNC(sub_82979C58);
PPC_FUNC_IMPL(__imp__sub_82979C58) {
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
	// lwz r11,1808(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1808);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,419
	ctx.r11.s64 = ctx.r11.s64 + 419;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82979d08
	if (ctx.cr6.lt) goto loc_82979D08;
	// bne cr6,0x82979ce0
	if (!ctx.cr6.eq) goto loc_82979CE0;
	// lwz r11,1812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1812);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,1544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,1812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1812, ctx.r10.u32);
	// stw r11,1544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1544, ctx.r11.u32);
	// bl 0x82978b40
	ctx.lr = 0x82979CA4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979cf4
	if (ctx.cr0.lt) goto loc_82979CF4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26848
	ctx.r4.s64 = ctx.r11.s64 + 26848;
	// bl 0x82978a68
	ctx.lr = 0x82979CBC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979cf4
	if (ctx.cr0.lt) goto loc_82979CF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82979CD8:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979cf4
	if (ctx.cr0.lt) goto loc_82979CF4;
loc_82979CE0:
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r11.u32);
	// bl 0x829968f0
	ctx.lr = 0x82979CF4;
	sub_829968F0(ctx, base);
loc_82979CF4:
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
loc_82979D08:
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82978b40
	ctx.lr = 0x82979D1C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979cf4
	if (ctx.cr0.lt) goto loc_82979CF4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26848
	ctx.r4.s64 = ctx.r11.s64 + 26848;
	// bl 0x82978a68
	ctx.lr = 0x82979D34;
	sub_82978A68(ctx, base);
	// b 0x82979cd8
	goto loc_82979CD8;
}

__attribute__((alias("__imp__sub_82979D38"))) PPC_WEAK_FUNC(sub_82979D38);
PPC_FUNC_IMPL(__imp__sub_82979D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82979D40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1812);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r30,r11,26692
	ctx.r30.s64 = ctx.r11.s64 + 26692;
	// stw r10,1812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1812, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,564(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979e58
	if (ctx.cr0.lt) goto loc_82979E58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,25676
	ctx.r4.s64 = ctx.r10.s64 + 25676;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979e58
	if (ctx.cr0.lt) goto loc_82979E58;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82978b40
	ctx.lr = 0x82979DB8;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979e58
	if (ctx.cr0.lt) goto loc_82979E58;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26848
	ctx.r4.s64 = ctx.r11.s64 + 26848;
	// bl 0x82978a68
	ctx.lr = 0x82979DD0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979e58
	if (ctx.cr0.lt) goto loc_82979E58;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82979dfc
	if (ctx.cr6.eq) goto loc_82979DFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979e58
	if (ctx.cr0.lt) goto loc_82979E58;
loc_82979DFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979e58
	if (ctx.cr0.lt) goto loc_82979E58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979e58
	if (ctx.cr0.lt) goto loc_82979E58;
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r11.u32);
	// beq cr6,0x82979e54
	if (ctx.cr6.eq) goto loc_82979E54;
	// bl 0x829953f0
	ctx.lr = 0x82979E50;
	sub_829953F0(ctx, base);
	// b 0x82979e58
	goto loc_82979E58;
loc_82979E54:
	// bl 0x82995388
	ctx.lr = 0x82979E58;
	sub_82995388(ctx, base);
loc_82979E58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82979E60"))) PPC_WEAK_FUNC(sub_82979E60);
PPC_FUNC_IMPL(__imp__sub_82979E60) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,26772
	ctx.r30.s64 = ctx.r11.s64 + 26772;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 568);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979f14
	if (ctx.cr0.lt) goto loc_82979F14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82979EAC;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979f14
	if (ctx.cr0.lt) goto loc_82979F14;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26788
	ctx.r4.s64 = ctx.r11.s64 + 26788;
	// bl 0x82978a68
	ctx.lr = 0x82979EC4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979f14
	if (ctx.cr0.lt) goto loc_82979F14;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,25676
	ctx.r4.s64 = ctx.r10.s64 + 25676;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979EEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979f14
	if (ctx.cr0.lt) goto loc_82979F14;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26720
	ctx.r4.s64 = ctx.r11.s64 + 26720;
	// bl 0x82978a68
	ctx.lr = 0x82979F04;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82979f14
	if (ctx.cr0.lt) goto loc_82979F14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82995458
	ctx.lr = 0x82979F14;
	sub_82995458(ctx, base);
loc_82979F14:
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

__attribute__((alias("__imp__sub_82979F2C"))) PPC_WEAK_FUNC(sub_82979F2C);
PPC_FUNC_IMPL(__imp__sub_82979F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82979F30"))) PPC_WEAK_FUNC(sub_82979F30);
PPC_FUNC_IMPL(__imp__sub_82979F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82979F38;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lis r30,29600
	ctx.r30.s64 = 1939865600;
	// bne cr6,0x82979f5c
	if (!ctx.cr6.eq) goto loc_82979F5C;
	// lis r30,29584
	ctx.r30.s64 = 1938817024;
loc_82979F5C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r27,r11,26660
	ctx.r27.s64 = ctx.r11.s64 + 26660;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x829321e0
	ctx.lr = 0x82979F74;
	sub_829321E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a0dc
	if (ctx.cr0.lt) goto loc_8297A0DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82979FA8;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a0dc
	if (ctx.cr0.lt) goto loc_8297A0DC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26864
	ctx.r4.s64 = ctx.r11.s64 + 26864;
	// bl 0x82978a68
	ctx.lr = 0x82979FC0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a0dc
	if (ctx.cr0.lt) goto loc_8297A0DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r10,26612
	ctx.r4.s64 = ctx.r10.s64 + 26612;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82979FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a0dc
	if (ctx.cr0.lt) goto loc_8297A0DC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r11,26608
	ctx.r26.s64 = ctx.r11.s64 + 26608;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A010;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a0dc
	if (ctx.cr0.lt) goto loc_8297A0DC;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8297a0d8
	if (!ctx.cr6.gt) goto loc_8297A0D8;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r10,26856
	ctx.r28.s64 = ctx.r10.s64 + 26856;
	// addi r29,r11,26684
	ctx.r29.s64 = ctx.r11.s64 + 26684;
loc_8297A038:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297A040;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a0dc
	if (ctx.cr0.lt) goto loc_8297A0DC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297A060;
	sub_8292E140(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297A074;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A084;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a0dc
	if (ctx.cr0.lt) goto loc_8297A0DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297A0AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a0dc
	if (ctx.cr0.lt) goto loc_8297A0DC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A0C0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a0dc
	if (ctx.cr0.lt) goto loc_8297A0DC;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297a038
	if (ctx.cr6.lt) goto loc_8297A038;
loc_8297A0D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8297A0DC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297A0E4"))) PPC_WEAK_FUNC(sub_8297A0E4);
PPC_FUNC_IMPL(__imp__sub_8297A0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297A0E8"))) PPC_WEAK_FUNC(sub_8297A0E8);
PPC_FUNC_IMPL(__imp__sub_8297A0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x8297A0F0;
	__savegprlr_19(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297A108;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r24,r11,26864
	ctx.r24.s64 = ctx.r11.s64 + 26864;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A124;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r25,r11,26612
	ctx.r25.s64 = ctx.r11.s64 + 26612;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297A15C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r22,r11,26608
	ctx.r22.s64 = ctx.r11.s64 + 26608;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A178;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297A188;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r11,26904
	ctx.r26.s64 = ctx.r11.s64 + 26904;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A1A4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297A1D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A1E8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// lwz r7,1816(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r8,26856
	ctx.r28.s64 = ctx.r8.s64 + 26856;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r27,r9,26896
	ctx.r27.s64 = ctx.r9.s64 + 26896;
	// addi r29,r10,26684
	ctx.r29.s64 = ctx.r10.s64 + 26684;
	// addi r23,r11,26884
	ctx.r23.s64 = ctx.r11.s64 + 26884;
	// ble cr6,0x8297a2c0
	if (!ctx.cr6.gt) goto loc_8297A2C0;
loc_8297A220:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297A228;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297A248;
	sub_8292E140(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297A25C;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A26C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297A294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A2A8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297a220
	if (ctx.cr6.lt) goto loc_8297A220;
loc_8297A2C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297A2C8;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A2DC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297A30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A320;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297A330;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A344;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297A374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A388;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,26876
	ctx.r4.s64 = ctx.r11.s64 + 26876;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82fa4320
	ctx.lr = 0x8297A3A4;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// beq 0x8297a3c0
	if (ctx.cr0.eq) goto loc_8297A3C0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,26672
	ctx.r5.s64 = ctx.r11.s64 + 26672;
	// b 0x8297a3c8
	goto loc_8297A3C8;
loc_8297A3C0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,26660
	ctx.r5.s64 = ctx.r11.s64 + 26660;
loc_8297A3C8:
	// bl 0x829321e0
	ctx.lr = 0x8297A3CC;
	sub_829321E0(ctx, base);
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297a47c
	if (ctx.cr6.eq) goto loc_8297A47C;
loc_8297A3DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297A3E4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297A404;
	sub_8292E140(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297A418;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A428;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297A450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A464;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297a3dc
	if (ctx.cr6.lt) goto loc_8297A3DC;
loc_8297A47C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297a554
	if (ctx.cr6.eq) goto loc_8297A554;
loc_8297A488:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297A490;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8292e140
	ctx.lr = 0x8297A4B0;
	sub_8292E140(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297A4C8;
	sub_8292E140(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297A4DC;
	sub_8292E140(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297A4F0;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A500;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297A528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A53C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297a558
	if (ctx.cr0.lt) goto loc_8297A558;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297a488
	if (ctx.cr6.lt) goto loc_8297A488;
loc_8297A554:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8297A558:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297A560"))) PPC_WEAK_FUNC(sub_8297A560);
PPC_FUNC_IMPL(__imp__sub_8297A560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x8297A568;
	__savegprlr_18(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297A57C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r20,r11,26864
	ctx.r20.s64 = ctx.r11.s64 + 26864;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A598;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r19,r11,26612
	ctx.r19.s64 = ctx.r11.s64 + 26612;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297A5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r24,r11,26608
	ctx.r24.s64 = ctx.r11.s64 + 26608;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A5EC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r9,1816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r10,26684
	ctx.r25.s64 = ctx.r10.s64 + 26684;
	// addi r26,r11,26672
	ctx.r26.s64 = ctx.r11.s64 + 26672;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8297a6bc
	if (!ctx.cr6.gt) goto loc_8297A6BC;
loc_8297A614:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297A61C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297A63C;
	sub_8292E140(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297A650;
	sub_8292E140(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A660;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297A690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A6A4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297a614
	if (ctx.cr6.lt) goto loc_8297A614;
loc_8297A6BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297A6C4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A6D8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r21,r11,26856
	ctx.r21.s64 = ctx.r11.s64 + 26856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r11,412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297A704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A718;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r10,1816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r22,r11,26884
	ctx.r22.s64 = ctx.r11.s64 + 26884;
	// ble cr6,0x8297a7e0
	if (!ctx.cr6.gt) goto loc_8297A7E0;
loc_8297A738:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297A740;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297A760;
	sub_8292E140(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297A774;
	sub_8292E140(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A784;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297A7B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A7C8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297a738
	if (ctx.cr6.lt) goto loc_8297A738;
loc_8297A7E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297A7E8;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A7FC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297A820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A834;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297A844;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,26904
	ctx.r28.s64 = ctx.r11.s64 + 26904;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A860;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297A894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A8A8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8297a944
	if (!ctx.cr6.gt) goto loc_8297A944;
loc_8297A8C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297A8C8;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297A8E4;
	sub_8292E140(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A8F4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297A918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A92C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297a8c0
	if (ctx.cr6.lt) goto loc_8297A8C0;
loc_8297A944:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297A94C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A960;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r23,r11,26896
	ctx.r23.s64 = ctx.r11.s64 + 26896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r11,468(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 468);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297A98C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A9A0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297aa38
	if (ctx.cr6.eq) goto loc_8297AA38;
loc_8297A9B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297A9C0;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297A9DC;
	sub_8292E140(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297A9EC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297AA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297AA20;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297a9b8
	if (ctx.cr6.lt) goto loc_8297A9B8;
loc_8297AA38:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297aac8
	if (ctx.cr6.eq) goto loc_8297AAC8;
loc_8297AA44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297AA4C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297AA68;
	sub_8292E140(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297AA78;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297AA9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297AAB0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297aa44
	if (ctx.cr6.lt) goto loc_8297AA44;
loc_8297AAC8:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297ab6c
	if (ctx.cr6.eq) goto loc_8297AB6C;
loc_8297AAD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297AADC;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297AAF8;
	sub_8292E140(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297AB0C;
	sub_8292E140(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297AB1C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297AB40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297AB54;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297aad4
	if (ctx.cr6.lt) goto loc_8297AAD4;
loc_8297AB6C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297abf8
	if (ctx.cr6.eq) goto loc_8297ABF8;
loc_8297AB78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297AB80;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297AB9C;
	sub_8292E140(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297ABAC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297ABCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297ABE0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297ab78
	if (ctx.cr6.lt) goto loc_8297AB78;
loc_8297ABF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297AC00;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297AC14;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297AC30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297AC44;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8297ad04
	if (!ctx.cr6.gt) goto loc_8297AD04;
loc_8297AC5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297AC64;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297AC84;
	sub_8292E140(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297AC98;
	sub_8292E140(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297ACA8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297ACD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297ACEC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297ac5c
	if (ctx.cr6.lt) goto loc_8297AC5C;
loc_8297AD04:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829321e0
	ctx.lr = 0x8297AD14;
	sub_829321E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lis r4,29600
	ctx.r4.s64 = 1939865600;
	// lwz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297AD38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r10,26660
	ctx.r29.s64 = ctx.r10.s64 + 26660;
	// beq cr6,0x8297adf4
	if (ctx.cr6.eq) goto loc_8297ADF4;
loc_8297AD58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297AD60;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297AD80;
	sub_8292E140(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297AD94;
	sub_8292E140(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297ADA4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297ADC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297ADDC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297ad58
	if (ctx.cr6.lt) goto loc_8297AD58;
loc_8297ADF4:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297ae9c
	if (ctx.cr6.eq) goto loc_8297AE9C;
loc_8297AE00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297AE08;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297AE24;
	sub_8292E140(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297AE38;
	sub_8292E140(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297AE48;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297AE70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297AE84;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297ae00
	if (ctx.cr6.lt) goto loc_8297AE00;
loc_8297AE9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297AEA4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297AEB8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297AEE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297AEFC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297AF0C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26924
	ctx.r4.s64 = ctx.r11.s64 + 26924;
	// bl 0x82978a68
	ctx.lr = 0x8297AF24;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297AF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297AF68;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8297b024
	if (!ctx.cr6.gt) goto loc_8297B024;
loc_8297AF80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297AF88;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297AFA4;
	sub_8292E140(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297AFB8;
	sub_8292E140(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297AFC8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297AFF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B00C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297af80
	if (ctx.cr6.lt) goto loc_8297AF80;
loc_8297B024:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829321e0
	ctx.lr = 0x8297B034;
	sub_829321E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lis r4,29600
	ctx.r4.s64 = 1939865600;
	// lwz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297B058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297b10c
	if (ctx.cr6.eq) goto loc_8297B10C;
loc_8297B070:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297B078;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297B094;
	sub_8292E140(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297B0A8;
	sub_8292E140(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B0B8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297B0E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B0F4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297b070
	if (ctx.cr6.lt) goto loc_8297B070;
loc_8297B10C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297b1b4
	if (ctx.cr6.eq) goto loc_8297B1B4;
loc_8297B118:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297B120;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297B13C;
	sub_8292E140(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297B150;
	sub_8292E140(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B160;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297B188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B19C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297b118
	if (ctx.cr6.lt) goto loc_8297B118;
loc_8297B1B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297B1BC;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B1D0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297B200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B214;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297b2c8
	if (ctx.cr6.eq) goto loc_8297B2C8;
loc_8297B22C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297B234;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297B250;
	sub_8292E140(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297B264;
	sub_8292E140(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B274;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297B29C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B2B0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297b22c
	if (ctx.cr6.lt) goto loc_8297B22C;
loc_8297B2C8:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297b37c
	if (ctx.cr6.eq) goto loc_8297B37C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,26916
	ctx.r29.s64 = ctx.r11.s64 + 26916;
loc_8297B2DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297B2E4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292e140
	ctx.lr = 0x8297B304;
	sub_8292E140(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297B318;
	sub_8292E140(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B328;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297B350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B364;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b380
	if (ctx.cr0.lt) goto loc_8297B380;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297b2dc
	if (ctx.cr6.lt) goto loc_8297B2DC;
loc_8297B37C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8297B380:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297B388"))) PPC_WEAK_FUNC(sub_8297B388);
PPC_FUNC_IMPL(__imp__sub_8297B388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8297B390;
	__savegprlr_24(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r31,r11,26944
	ctx.r31.s64 = ctx.r11.s64 + 26944;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82fa4320
	ctx.lr = 0x8297B3C0;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8297b3ec
	if (ctx.cr0.eq) goto loc_8297B3EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa4320
	ctx.lr = 0x8297B3D8;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8297b3ec
	if (ctx.cr0.eq) goto loc_8297B3EC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,26884
	ctx.r5.s64 = ctx.r11.s64 + 26884;
	// b 0x8297b438
	goto loc_8297B438;
loc_8297B3EC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r31,r11,26876
	ctx.r31.s64 = ctx.r11.s64 + 26876;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fa4320
	ctx.lr = 0x8297B404;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8297b430
	if (ctx.cr0.eq) goto loc_8297B430;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa4320
	ctx.lr = 0x8297B41C;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8297b430
	if (ctx.cr0.eq) goto loc_8297B430;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,26672
	ctx.r5.s64 = ctx.r11.s64 + 26672;
	// b 0x8297b438
	goto loc_8297B438;
loc_8297B430:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,26660
	ctx.r5.s64 = ctx.r11.s64 + 26660;
loc_8297B438:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829321e0
	ctx.lr = 0x8297B444;
	sub_829321E0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r26,r11,26608
	ctx.r26.s64 = ctx.r11.s64 + 26608;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r10,26684
	ctx.r29.s64 = ctx.r10.s64 + 26684;
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297b518
	if (ctx.cr6.eq) goto loc_8297B518;
loc_8297B464:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297B46C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b5f8
	if (ctx.cr0.lt) goto loc_8297B5F8;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297B48C;
	sub_8292E140(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292e140
	ctx.lr = 0x8297B4A4;
	sub_8292E140(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297B4B8;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B4C8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b5f8
	if (ctx.cr0.lt) goto loc_8297B5F8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297B4EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b5f8
	if (ctx.cr0.lt) goto loc_8297B5F8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B500;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b5f8
	if (ctx.cr0.lt) goto loc_8297B5F8;
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297b464
	if (ctx.cr6.lt) goto loc_8297B464;
loc_8297B518:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297b5f4
	if (ctx.cr6.eq) goto loc_8297B5F4;
loc_8297B524:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297B52C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b5f8
	if (ctx.cr0.lt) goto loc_8297B5F8;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8292e140
	ctx.lr = 0x8297B54C;
	sub_8292E140(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297B564;
	sub_8292E140(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8292e140
	ctx.lr = 0x8297B57C;
	sub_8292E140(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297B590;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B5A0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b5f8
	if (ctx.cr0.lt) goto loc_8297B5F8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297B5C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b5f8
	if (ctx.cr0.lt) goto loc_8297B5F8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B5DC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b5f8
	if (ctx.cr0.lt) goto loc_8297B5F8;
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297b524
	if (ctx.cr6.lt) goto loc_8297B524;
loc_8297B5F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8297B5F8:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297B600"))) PPC_WEAK_FUNC(sub_8297B600);
PPC_FUNC_IMPL(__imp__sub_8297B600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8297B608;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,29,0,20
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 29) & 0xFFFFF800) | (ctx.r4.u64 & 0xFFFFFFFF000007FF);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82978ce8
	ctx.lr = 0x8297B630;
	sub_82978CE8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297B648;
	sub_8292E140(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r28,r11,26952
	ctx.r28.s64 = ctx.r11.s64 + 26952;
loc_8297B658:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297B660;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b6b0
	if (ctx.cr0.lt) goto loc_8297B6B0;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B688;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297b6b0
	if (ctx.cr0.lt) goto loc_8297B6B0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x8297b658
	if (ctx.cr6.lt) goto loc_8297B658;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82995078
	ctx.lr = 0x8297B6B0;
	sub_82995078(ctx, base);
loc_8297B6B0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297B6B8"))) PPC_WEAK_FUNC(sub_8297B6B8);
PPC_FUNC_IMPL(__imp__sub_8297B6B8) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8297b740
	if (!ctx.cr6.eq) goto loc_8297B740;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8297b740
	if (!ctx.cr6.eq) goto loc_8297B740;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8297b740
	if (!ctx.cr6.eq) goto loc_8297B740;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8297b72c
	if (ctx.cr6.lt) goto loc_8297B72C;
	// beq cr6,0x8297b720
	if (ctx.cr6.eq) goto loc_8297B720;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x8297b714
	if (ctx.cr6.lt) goto loc_8297B714;
	// beq cr6,0x8297b708
	if (ctx.cr6.eq) goto loc_8297B708;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8297b77c
	goto loc_8297B77C;
loc_8297B708:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,27040
	ctx.r4.s64 = ctx.r11.s64 + 27040;
	// b 0x8297b734
	goto loc_8297B734;
loc_8297B714:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,27024
	ctx.r4.s64 = ctx.r11.s64 + 27024;
	// b 0x8297b734
	goto loc_8297B734;
loc_8297B720:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,27008
	ctx.r4.s64 = ctx.r11.s64 + 27008;
	// b 0x8297b734
	goto loc_8297B734;
loc_8297B72C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,26992
	ctx.r4.s64 = ctx.r11.s64 + 26992;
loc_8297B734:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B73C;
	sub_82978A68(ctx, base);
	// b 0x8297b77c
	goto loc_8297B77C;
loc_8297B740:
	// or r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 | ctx.r6.u64;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r4,r5,26972
	ctx.r4.s64 = ctx.r5.s64 + 26972;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwinm r10,r9,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 | ctx.r8.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B77C;
	sub_82978A68(ctx, base);
loc_8297B77C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297B78C"))) PPC_WEAK_FUNC(sub_8297B78C);
PPC_FUNC_IMPL(__imp__sub_8297B78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297B790"))) PPC_WEAK_FUNC(sub_8297B790);
PPC_FUNC_IMPL(__imp__sub_8297B790) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,27056
	ctx.r4.s64 = ctx.r10.s64 + 27056;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B7B4;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297B7C4"))) PPC_WEAK_FUNC(sub_8297B7C4);
PPC_FUNC_IMPL(__imp__sub_8297B7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297B7C8"))) PPC_WEAK_FUNC(sub_8297B7C8);
PPC_FUNC_IMPL(__imp__sub_8297B7C8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,27072
	ctx.r4.s64 = ctx.r10.s64 + 27072;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B7EC;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297B7FC"))) PPC_WEAK_FUNC(sub_8297B7FC);
PPC_FUNC_IMPL(__imp__sub_8297B7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297B800"))) PPC_WEAK_FUNC(sub_8297B800);
PPC_FUNC_IMPL(__imp__sub_8297B800) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,27088
	ctx.r4.s64 = ctx.r10.s64 + 27088;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B824;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297B834"))) PPC_WEAK_FUNC(sub_8297B834);
PPC_FUNC_IMPL(__imp__sub_8297B834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297B838"))) PPC_WEAK_FUNC(sub_8297B838);
PPC_FUNC_IMPL(__imp__sub_8297B838) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,27104
	ctx.r4.s64 = ctx.r10.s64 + 27104;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B85C;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297B86C"))) PPC_WEAK_FUNC(sub_8297B86C);
PPC_FUNC_IMPL(__imp__sub_8297B86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297B870"))) PPC_WEAK_FUNC(sub_8297B870);
PPC_FUNC_IMPL(__imp__sub_8297B870) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,27120
	ctx.r4.s64 = ctx.r11.s64 + 27120;
	// bl 0x82978a68
	ctx.lr = 0x8297B888;
	sub_82978A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297B898"))) PPC_WEAK_FUNC(sub_8297B898);
PPC_FUNC_IMPL(__imp__sub_8297B898) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,27136
	ctx.r4.s64 = ctx.r11.s64 + 27136;
	// bl 0x82978a68
	ctx.lr = 0x8297B8B0;
	sub_82978A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297B8C0"))) PPC_WEAK_FUNC(sub_8297B8C0);
PPC_FUNC_IMPL(__imp__sub_8297B8C0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,27152
	ctx.r4.s64 = ctx.r10.s64 + 27152;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B8E8;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297B8F8"))) PPC_WEAK_FUNC(sub_8297B8F8);
PPC_FUNC_IMPL(__imp__sub_8297B8F8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,27172
	ctx.r4.s64 = ctx.r11.s64 + 27172;
	// bl 0x82978a68
	ctx.lr = 0x8297B914;
	sub_82978A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297B924"))) PPC_WEAK_FUNC(sub_8297B924);
PPC_FUNC_IMPL(__imp__sub_8297B924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297B928"))) PPC_WEAK_FUNC(sub_8297B928);
PPC_FUNC_IMPL(__imp__sub_8297B928) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,27184
	ctx.r4.s64 = ctx.r10.s64 + 27184;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B94C;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297B95C"))) PPC_WEAK_FUNC(sub_8297B95C);
PPC_FUNC_IMPL(__imp__sub_8297B95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297B960"))) PPC_WEAK_FUNC(sub_8297B960);
PPC_FUNC_IMPL(__imp__sub_8297B960) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,27200
	ctx.r4.s64 = ctx.r10.s64 + 27200;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B984;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297B994"))) PPC_WEAK_FUNC(sub_8297B994);
PPC_FUNC_IMPL(__imp__sub_8297B994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297B998"))) PPC_WEAK_FUNC(sub_8297B998);
PPC_FUNC_IMPL(__imp__sub_8297B998) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,27220
	ctx.r4.s64 = ctx.r10.s64 + 27220;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B9BC;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297B9CC"))) PPC_WEAK_FUNC(sub_8297B9CC);
PPC_FUNC_IMPL(__imp__sub_8297B9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297B9D0"))) PPC_WEAK_FUNC(sub_8297B9D0);
PPC_FUNC_IMPL(__imp__sub_8297B9D0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,27236
	ctx.r4.s64 = ctx.r10.s64 + 27236;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297B9F4;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297BA04"))) PPC_WEAK_FUNC(sub_8297BA04);
PPC_FUNC_IMPL(__imp__sub_8297BA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297BA08"))) PPC_WEAK_FUNC(sub_8297BA08);
PPC_FUNC_IMPL(__imp__sub_8297BA08) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,27276
	ctx.r4.s64 = ctx.r11.s64 + 27276;
	// bl 0x82978a68
	ctx.lr = 0x8297BA24;
	sub_82978A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297BA34"))) PPC_WEAK_FUNC(sub_8297BA34);
PPC_FUNC_IMPL(__imp__sub_8297BA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297BA38"))) PPC_WEAK_FUNC(sub_8297BA38);
PPC_FUNC_IMPL(__imp__sub_8297BA38) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,27292
	ctx.r4.s64 = ctx.r11.s64 + 27292;
	// bl 0x82978a68
	ctx.lr = 0x8297BA54;
	sub_82978A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297BA64"))) PPC_WEAK_FUNC(sub_8297BA64);
PPC_FUNC_IMPL(__imp__sub_8297BA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297BA68"))) PPC_WEAK_FUNC(sub_8297BA68);
PPC_FUNC_IMPL(__imp__sub_8297BA68) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,27328
	ctx.r4.s64 = ctx.r11.s64 + 27328;
	// bl 0x82978a68
	ctx.lr = 0x8297BA84;
	sub_82978A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297BA94"))) PPC_WEAK_FUNC(sub_8297BA94);
PPC_FUNC_IMPL(__imp__sub_8297BA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297BA98"))) PPC_WEAK_FUNC(sub_8297BA98);
PPC_FUNC_IMPL(__imp__sub_8297BA98) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,27344
	ctx.r4.s64 = ctx.r11.s64 + 27344;
	// bl 0x82978a68
	ctx.lr = 0x8297BAB4;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297BAC4"))) PPC_WEAK_FUNC(sub_8297BAC4);
PPC_FUNC_IMPL(__imp__sub_8297BAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297BAC8"))) PPC_WEAK_FUNC(sub_8297BAC8);
PPC_FUNC_IMPL(__imp__sub_8297BAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8297BAD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297BAE4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bb8c
	if (ctx.cr0.lt) goto loc_8297BB8C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,27476
	ctx.r4.s64 = ctx.r11.s64 + 27476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BB00;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bb8c
	if (ctx.cr0.lt) goto loc_8297BB8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297BB10;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bb8c
	if (ctx.cr0.lt) goto loc_8297BB8C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,27436
	ctx.r4.s64 = ctx.r11.s64 + 27436;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BB2C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bb8c
	if (ctx.cr0.lt) goto loc_8297BB8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297BB3C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bb8c
	if (ctx.cr0.lt) goto loc_8297BB8C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,27408
	ctx.r4.s64 = ctx.r11.s64 + 27408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BB58;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bb8c
	if (ctx.cr0.lt) goto loc_8297BB8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297BB68;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bb8c
	if (ctx.cr0.lt) goto loc_8297BB8C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,27364
	ctx.r4.s64 = ctx.r11.s64 + 27364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BB84;
	sub_82978A68(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_8297BB8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297BB94"))) PPC_WEAK_FUNC(sub_8297BB94);
PPC_FUNC_IMPL(__imp__sub_8297BB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297BB98"))) PPC_WEAK_FUNC(sub_8297BB98);
PPC_FUNC_IMPL(__imp__sub_8297BB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8297BBA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297BBB4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bcb8
	if (ctx.cr0.lt) goto loc_8297BCB8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,27688
	ctx.r4.s64 = ctx.r11.s64 + 27688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BBD0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bcb8
	if (ctx.cr0.lt) goto loc_8297BCB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297BBE0;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bcb8
	if (ctx.cr0.lt) goto loc_8297BCB8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,27648
	ctx.r4.s64 = ctx.r11.s64 + 27648;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BC00;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bcb8
	if (ctx.cr0.lt) goto loc_8297BCB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297BC10;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bcb8
	if (ctx.cr0.lt) goto loc_8297BCB8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,27612
	ctx.r4.s64 = ctx.r11.s64 + 27612;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BC2C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bcb8
	if (ctx.cr0.lt) goto loc_8297BCB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297BC3C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bcb8
	if (ctx.cr0.lt) goto loc_8297BCB8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,27576
	ctx.r4.s64 = ctx.r11.s64 + 27576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BC58;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bcb8
	if (ctx.cr0.lt) goto loc_8297BCB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297BC68;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bcb8
	if (ctx.cr0.lt) goto loc_8297BCB8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,27540
	ctx.r4.s64 = ctx.r11.s64 + 27540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BC84;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bcb8
	if (ctx.cr0.lt) goto loc_8297BCB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297BC94;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bcb8
	if (ctx.cr0.lt) goto loc_8297BCB8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,27504
	ctx.r4.s64 = ctx.r11.s64 + 27504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BCB0;
	sub_82978A68(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_8297BCB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297BCC0"))) PPC_WEAK_FUNC(sub_8297BCC0);
PPC_FUNC_IMPL(__imp__sub_8297BCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8297BCC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,27748
	ctx.r4.s64 = ctx.r11.s64 + 27748;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BCE8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bd20
	if (ctx.cr0.lt) goto loc_8297BD20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297BCF8;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297bd20
	if (ctx.cr0.lt) goto loc_8297BD20;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,27728
	ctx.r4.s64 = ctx.r11.s64 + 27728;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BD18;
	sub_82978A68(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_8297BD20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297BD28"))) PPC_WEAK_FUNC(sub_8297BD28);
PPC_FUNC_IMPL(__imp__sub_8297BD28) {
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
	// neg r10,r5
	ctx.r10.s64 = -ctx.r5.s64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r9,27772
	ctx.r4.s64 = ctx.r9.s64 + 27772;
	// rlwinm r7,r10,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BD54;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297BD64"))) PPC_WEAK_FUNC(sub_8297BD64);
PPC_FUNC_IMPL(__imp__sub_8297BD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297BD68"))) PPC_WEAK_FUNC(sub_8297BD68);
PPC_FUNC_IMPL(__imp__sub_8297BD68) {
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
	// neg r10,r5
	ctx.r10.s64 = -ctx.r5.s64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r9,27772
	ctx.r4.s64 = ctx.r9.s64 + 27772;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BD94;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297BDA4"))) PPC_WEAK_FUNC(sub_8297BDA4);
PPC_FUNC_IMPL(__imp__sub_8297BDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297BDA8"))) PPC_WEAK_FUNC(sub_8297BDA8);
PPC_FUNC_IMPL(__imp__sub_8297BDA8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,27796
	ctx.r4.s64 = ctx.r10.s64 + 27796;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BDCC;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297BDDC"))) PPC_WEAK_FUNC(sub_8297BDDC);
PPC_FUNC_IMPL(__imp__sub_8297BDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297BDE0"))) PPC_WEAK_FUNC(sub_8297BDE0);
PPC_FUNC_IMPL(__imp__sub_8297BDE0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,27816
	ctx.r4.s64 = ctx.r10.s64 + 27816;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BE04;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297BE14"))) PPC_WEAK_FUNC(sub_8297BE14);
PPC_FUNC_IMPL(__imp__sub_8297BE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297BE18"))) PPC_WEAK_FUNC(sub_8297BE18);
PPC_FUNC_IMPL(__imp__sub_8297BE18) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,27836
	ctx.r4.s64 = ctx.r11.s64 + 27836;
	// bl 0x82978a68
	ctx.lr = 0x8297BE34;
	sub_82978A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297BE44"))) PPC_WEAK_FUNC(sub_8297BE44);
PPC_FUNC_IMPL(__imp__sub_8297BE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297BE48"))) PPC_WEAK_FUNC(sub_8297BE48);
PPC_FUNC_IMPL(__imp__sub_8297BE48) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,27852
	ctx.r4.s64 = ctx.r11.s64 + 27852;
	// bl 0x82978a68
	ctx.lr = 0x8297BE64;
	sub_82978A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297BE74"))) PPC_WEAK_FUNC(sub_8297BE74);
PPC_FUNC_IMPL(__imp__sub_8297BE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297BE78"))) PPC_WEAK_FUNC(sub_8297BE78);
PPC_FUNC_IMPL(__imp__sub_8297BE78) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,27868
	ctx.r4.s64 = ctx.r10.s64 + 27868;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BE9C;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297BEAC"))) PPC_WEAK_FUNC(sub_8297BEAC);
PPC_FUNC_IMPL(__imp__sub_8297BEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297BEB0"))) PPC_WEAK_FUNC(sub_8297BEB0);
PPC_FUNC_IMPL(__imp__sub_8297BEB0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,27888
	ctx.r4.s64 = ctx.r10.s64 + 27888;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BED4;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297BEE4"))) PPC_WEAK_FUNC(sub_8297BEE4);
PPC_FUNC_IMPL(__imp__sub_8297BEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297BEE8"))) PPC_WEAK_FUNC(sub_8297BEE8);
PPC_FUNC_IMPL(__imp__sub_8297BEE8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,27908
	ctx.r4.s64 = ctx.r10.s64 + 27908;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BF10;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297BF20"))) PPC_WEAK_FUNC(sub_8297BF20);
PPC_FUNC_IMPL(__imp__sub_8297BF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x8297BF28;
	__savegprlr_19(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1816);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lis r20,29760
	ctx.r20.s64 = 1950351360;
	// lis r19,29616
	ctx.r19.s64 = 1940914176;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297c068
	if (ctx.cr6.eq) goto loc_8297C068;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r7,27992
	ctx.r28.s64 = ctx.r7.s64 + 27992;
	// addi r27,r8,27980
	ctx.r27.s64 = ctx.r8.s64 + 27980;
	// addi r26,r9,27968
	ctx.r26.s64 = ctx.r9.s64 + 27968;
	// addi r25,r10,27956
	ctx.r25.s64 = ctx.r10.s64 + 27956;
	// addi r24,r11,26684
	ctx.r24.s64 = ctx.r11.s64 + 26684;
loc_8297BF80:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297BF98;
	sub_8292E140(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297BFB0;
	sub_8292E140(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297BFC8;
	sub_8292E140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297BFD0;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c0e8
	if (ctx.cr0.lt) goto loc_8297C0E8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297BFE8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c0e8
	if (ctx.cr0.lt) goto loc_8297C0E8;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// bgt cr6,0x8297c0f0
	if (ctx.cr6.gt) goto loc_8297C0F0;
	// beq cr6,0x8297c028
	if (ctx.cr6.eq) goto loc_8297C028;
	// lis r11,29584
	ctx.r11.s64 = 1938817024;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8297c114
	if (ctx.cr6.eq) goto loc_8297C114;
	// lis r11,29600
	ctx.r11.s64 = 1939865600;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8297c11c
	if (ctx.cr6.eq) goto loc_8297C11C;
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x8297c028
	if (ctx.cr6.eq) goto loc_8297C028;
	// lis r11,29632
	ctx.r11.s64 = 1941962752;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8297c124
	if (!ctx.cr6.eq) goto loc_8297C124;
loc_8297C028:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8297C02C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297C034;
	sub_82978A68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8297c0e8
	if (ctx.cr6.lt) goto loc_8297C0E8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297C050;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c0e8
	if (ctx.cr0.lt) goto loc_8297C0E8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297bf80
	if (ctx.cr6.lt) goto loc_8297BF80;
loc_8297C068:
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x8297c078
	if (ctx.cr6.eq) goto loc_8297C078;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8297c0e4
	if (!ctx.cr6.eq) goto loc_8297C0E4;
loc_8297C078:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297c0e4
	if (ctx.cr6.eq) goto loc_8297C0E4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,27932
	ctx.r29.s64 = ctx.r11.s64 + 27932;
loc_8297C08C:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297C0A4;
	sub_8292E140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C0AC;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c0e8
	if (ctx.cr0.lt) goto loc_8297C0E8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297C0CC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c0e8
	if (ctx.cr0.lt) goto loc_8297C0E8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297c08c
	if (ctx.cr6.lt) goto loc_8297C08C;
loc_8297C0E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8297C0E8:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
loc_8297C0F0:
	// lis r11,29776
	ctx.r11.s64 = 1951399936;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8297c028
	if (ctx.cr6.eq) goto loc_8297C028;
	// lis r11,29792
	ctx.r11.s64 = 1952448512;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8297c11c
	if (ctx.cr6.eq) goto loc_8297C11C;
	// lis r11,29808
	ctx.r11.s64 = 1953497088;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8297c124
	if (!ctx.cr6.eq) goto loc_8297C124;
loc_8297C114:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x8297c02c
	goto loc_8297C02C;
loc_8297C11C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x8297c02c
	goto loc_8297C02C;
loc_8297C124:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8297c0e8
	goto loc_8297C0E8;
}

__attribute__((alias("__imp__sub_8297C130"))) PPC_WEAK_FUNC(sub_8297C130);
PPC_FUNC_IMPL(__imp__sub_8297C130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8297C138;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C14C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c16c
	if (ctx.cr0.lt) goto loc_8297C16C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,28004
	ctx.r4.s64 = ctx.r11.s64 + 28004;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297C16C;
	sub_82978A68(ctx, base);
loc_8297C16C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297C174"))) PPC_WEAK_FUNC(sub_8297C174);
PPC_FUNC_IMPL(__imp__sub_8297C174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297C178"))) PPC_WEAK_FUNC(sub_8297C178);
PPC_FUNC_IMPL(__imp__sub_8297C178) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,28044
	ctx.r4.s64 = ctx.r11.s64 + 28044;
	// bl 0x82978a68
	ctx.lr = 0x8297C190;
	sub_82978A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297C1A0"))) PPC_WEAK_FUNC(sub_8297C1A0);
PPC_FUNC_IMPL(__imp__sub_8297C1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8297C1A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C1BC;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c300
	if (ctx.cr0.lt) goto loc_8297C300;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26864
	ctx.r4.s64 = ctx.r11.s64 + 26864;
	// bl 0x82978a68
	ctx.lr = 0x8297C1D4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c300
	if (ctx.cr0.lt) goto loc_8297C300;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297C208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c300
	if (ctx.cr0.lt) goto loc_8297C300;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,26608
	ctx.r27.s64 = ctx.r11.s64 + 26608;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297C224;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c300
	if (ctx.cr0.lt) goto loc_8297C300;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8297c2fc
	if (!ctx.cr6.gt) goto loc_8297C2FC;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r10,26856
	ctx.r29.s64 = ctx.r10.s64 + 26856;
	// addi r28,r11,26684
	ctx.r28.s64 = ctx.r11.s64 + 26684;
loc_8297C24C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C254;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c300
	if (ctx.cr0.lt) goto loc_8297C300;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297C274;
	sub_8292E140(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297C28C;
	sub_8292E140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C294;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c300
	if (ctx.cr0.lt) goto loc_8297C300;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297C2AC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c300
	if (ctx.cr0.lt) goto loc_8297C300;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297C2D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c300
	if (ctx.cr0.lt) goto loc_8297C300;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297C2E4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c300
	if (ctx.cr0.lt) goto loc_8297C300;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297c24c
	if (ctx.cr6.lt) goto loc_8297C24C;
loc_8297C2FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8297C300:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297C308"))) PPC_WEAK_FUNC(sub_8297C308);
PPC_FUNC_IMPL(__imp__sub_8297C308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x8297C310;
	__savegprlr_22(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C324;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26864
	ctx.r4.s64 = ctx.r11.s64 + 26864;
	// bl 0x82978a68
	ctx.lr = 0x8297C33C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r10,26612
	ctx.r4.s64 = ctx.r10.s64 + 26612;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297C370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26608
	ctx.r4.s64 = ctx.r11.s64 + 26608;
	// bl 0x82978a68
	ctx.lr = 0x8297C388;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r23,r11,28200
	ctx.r23.s64 = ctx.r11.s64 + 28200;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r10,26672
	ctx.r25.s64 = ctx.r10.s64 + 26672;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297c418
	if (ctx.cr6.eq) goto loc_8297C418;
loc_8297C3B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C3B8;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297C3D8;
	sub_8292E140(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297C3EC;
	sub_8292E140(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297C400;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297c3b0
	if (ctx.cr6.lt) goto loc_8297C3B0;
loc_8297C418:
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r8,28168
	ctx.r29.s64 = ctx.r8.s64 + 28168;
	// addi r28,r9,26856
	ctx.r28.s64 = ctx.r9.s64 + 26856;
	// addi r26,r10,26884
	ctx.r26.s64 = ctx.r10.s64 + 26884;
	// beq cr6,0x8297c4c0
	if (ctx.cr6.eq) goto loc_8297C4C0;
loc_8297C43C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C444;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297C464;
	sub_8292E140(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297C478;
	sub_8292E140(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297C48C;
	sub_8292E140(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297C4A8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297c43c
	if (ctx.cr6.lt) goto loc_8297C43C;
loc_8297C4C0:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r27,r10,28136
	ctx.r27.s64 = ctx.r10.s64 + 28136;
	// beq cr6,0x8297c540
	if (ctx.cr6.eq) goto loc_8297C540;
loc_8297C4D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C4DC;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297C4F8;
	sub_8292E140(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297C50C;
	sub_8292E140(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297C528;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297c4d4
	if (ctx.cr6.lt) goto loc_8297C4D4;
loc_8297C540:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297c5d0
	if (ctx.cr6.eq) goto loc_8297C5D0;
loc_8297C54C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C554;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297C574;
	sub_8292E140(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297C588;
	sub_8292E140(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297C59C;
	sub_8292E140(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297C5B8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297c54c
	if (ctx.cr6.lt) goto loc_8297C54C;
loc_8297C5D0:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297c648
	if (ctx.cr6.eq) goto loc_8297C648;
loc_8297C5DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C5E4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297C600;
	sub_8292E140(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297C614;
	sub_8292E140(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297C630;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297c5dc
	if (ctx.cr6.lt) goto loc_8297C5DC;
loc_8297C648:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297c6c4
	if (ctx.cr6.eq) goto loc_8297C6C4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,28108
	ctx.r29.s64 = ctx.r11.s64 + 28108;
loc_8297C65C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C664;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297C680;
	sub_8292E140(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297C694;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297C6AC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297c65c
	if (ctx.cr6.lt) goto loc_8297C65C;
loc_8297C6C4:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r28,r10,26660
	ctx.r28.s64 = ctx.r10.s64 + 26660;
	// beq cr6,0x8297c740
	if (ctx.cr6.eq) goto loc_8297C740;
loc_8297C6D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C6E0;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297C700;
	sub_8292E140(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292e140
	ctx.lr = 0x8297C714;
	sub_8292E140(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297C728;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297c6d8
	if (ctx.cr6.lt) goto loc_8297C6D8;
loc_8297C740:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297c7ec
	if (ctx.cr6.eq) goto loc_8297C7EC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,28080
	ctx.r29.s64 = ctx.r11.s64 + 28080;
loc_8297C754:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C75C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8292e140
	ctx.lr = 0x8297C77C;
	sub_8292E140(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292e140
	ctx.lr = 0x8297C790;
	sub_8292E140(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297C7A4;
	sub_8292E140(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297C7B8;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297C7D4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c7f0
	if (ctx.cr0.lt) goto loc_8297C7F0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297c754
	if (ctx.cr6.lt) goto loc_8297C754;
loc_8297C7EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8297C7F0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297C7F8"))) PPC_WEAK_FUNC(sub_8297C7F8);
PPC_FUNC_IMPL(__imp__sub_8297C7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8297C800;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r27,r11,26672
	ctx.r27.s64 = ctx.r11.s64 + 26672;
	// lwz r11,1816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1816);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297c898
	if (ctx.cr6.eq) goto loc_8297C898;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,28248
	ctx.r29.s64 = ctx.r11.s64 + 28248;
loc_8297C830:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C838;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c934
	if (ctx.cr0.lt) goto loc_8297C934;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297C858;
	sub_8292E140(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297C86C;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297C880;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c934
	if (ctx.cr0.lt) goto loc_8297C934;
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297c830
	if (ctx.cr6.lt) goto loc_8297C830;
loc_8297C898:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297c930
	if (ctx.cr6.eq) goto loc_8297C930;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,28220
	ctx.r29.s64 = ctx.r11.s64 + 28220;
loc_8297C8AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C8B4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c934
	if (ctx.cr0.lt) goto loc_8297C934;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297C8D4;
	sub_8292E140(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297C8EC;
	sub_8292E140(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297C900;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297C918;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297c934
	if (ctx.cr0.lt) goto loc_8297C934;
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297c8ac
	if (ctx.cr6.lt) goto loc_8297C8AC;
loc_8297C930:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8297C934:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297C93C"))) PPC_WEAK_FUNC(sub_8297C93C);
PPC_FUNC_IMPL(__imp__sub_8297C93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297C940"))) PPC_WEAK_FUNC(sub_8297C940);
PPC_FUNC_IMPL(__imp__sub_8297C940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8297C948;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C95C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297cca4
	if (ctx.cr0.lt) goto loc_8297CCA4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,28320
	ctx.r4.s64 = ctx.r11.s64 + 28320;
	// bl 0x82978a68
	ctx.lr = 0x8297C974;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297cca4
	if (ctx.cr0.lt) goto loc_8297CCA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297C984;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297cca4
	if (ctx.cr0.lt) goto loc_8297CCA4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26864
	ctx.r4.s64 = ctx.r11.s64 + 26864;
	// bl 0x82978a68
	ctx.lr = 0x8297C99C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297cca4
	if (ctx.cr0.lt) goto loc_8297CCA4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r25,r11,26856
	ctx.r25.s64 = ctx.r11.s64 + 26856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297C9C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297cca4
	if (ctx.cr0.lt) goto loc_8297CCA4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26608
	ctx.r4.s64 = ctx.r11.s64 + 26608;
	// bl 0x82978a68
	ctx.lr = 0x8297C9E0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297cca4
	if (ctx.cr0.lt) goto loc_8297CCA4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r11,26672
	ctx.r26.s64 = ctx.r11.s64 + 26672;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297ca70
	if (ctx.cr6.eq) goto loc_8297CA70;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,28296
	ctx.r29.s64 = ctx.r11.s64 + 28296;
loc_8297CA08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297CA10;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297cca4
	if (ctx.cr0.lt) goto loc_8297CCA4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297CA30;
	sub_8292E140(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297CA44;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297CA58;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297cca4
	if (ctx.cr0.lt) goto loc_8297CCA4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297ca08
	if (ctx.cr6.lt) goto loc_8297CA08;
loc_8297CA70:
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r9,28268
	ctx.r29.s64 = ctx.r9.s64 + 28268;
	// addi r27,r10,26884
	ctx.r27.s64 = ctx.r10.s64 + 26884;
	// beq cr6,0x8297caf8
	if (ctx.cr6.eq) goto loc_8297CAF8;
loc_8297CA8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297CA94;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297cca4
	if (ctx.cr0.lt) goto loc_8297CCA4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297CAB4;
	sub_8292E140(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292e140
	ctx.lr = 0x8297CAC8;
	sub_8292E140(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297CAE0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297cca4
	if (ctx.cr0.lt) goto loc_8297CCA4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297ca8c
	if (ctx.cr6.lt) goto loc_8297CA8C;
loc_8297CAF8:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r28,r10,26660
	ctx.r28.s64 = ctx.r10.s64 + 26660;
	// beq cr6,0x8297cb74
	if (ctx.cr6.eq) goto loc_8297CB74;
loc_8297CB0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297CB14;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297cca4
	if (ctx.cr0.lt) goto loc_8297CCA4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297CB30;
	sub_8292E140(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297CB44;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297CB5C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297cca4
	if (ctx.cr0.lt) goto loc_8297CCA4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297cb0c
	if (ctx.cr6.lt) goto loc_8297CB0C;
loc_8297CB74:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297cc08
	if (ctx.cr6.eq) goto loc_8297CC08;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,28168
	ctx.r29.s64 = ctx.r11.s64 + 28168;
loc_8297CB88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297CB90;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297cca4
	if (ctx.cr0.lt) goto loc_8297CCA4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297CBAC;
	sub_8292E140(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297CBC0;
	sub_8292E140(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292e140
	ctx.lr = 0x8297CBD4;
	sub_8292E140(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297CBF0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297cca4
	if (ctx.cr0.lt) goto loc_8297CCA4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297cb88
	if (ctx.cr6.lt) goto loc_8297CB88;
loc_8297CC08:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297cca0
	if (ctx.cr6.eq) goto loc_8297CCA0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,28136
	ctx.r29.s64 = ctx.r11.s64 + 28136;
loc_8297CC1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297CC24;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297cca4
	if (ctx.cr0.lt) goto loc_8297CCA4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8292e140
	ctx.lr = 0x8297CC44;
	sub_8292E140(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297CC58;
	sub_8292E140(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297CC6C;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297CC88;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297cca4
	if (ctx.cr0.lt) goto loc_8297CCA4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297cc1c
	if (ctx.cr6.lt) goto loc_8297CC1C;
loc_8297CCA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8297CCA4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297CCAC"))) PPC_WEAK_FUNC(sub_8297CCAC);
PPC_FUNC_IMPL(__imp__sub_8297CCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297CCB0"))) PPC_WEAK_FUNC(sub_8297CCB0);
PPC_FUNC_IMPL(__imp__sub_8297CCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8297CCB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297CCCC;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ce10
	if (ctx.cr0.lt) goto loc_8297CE10;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26864
	ctx.r4.s64 = ctx.r11.s64 + 26864;
	// bl 0x82978a68
	ctx.lr = 0x8297CCE4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ce10
	if (ctx.cr0.lt) goto loc_8297CE10;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297CD18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ce10
	if (ctx.cr0.lt) goto loc_8297CE10;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,26608
	ctx.r27.s64 = ctx.r11.s64 + 26608;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297CD34;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ce10
	if (ctx.cr0.lt) goto loc_8297CE10;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8297ce0c
	if (!ctx.cr6.gt) goto loc_8297CE0C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r10,26856
	ctx.r29.s64 = ctx.r10.s64 + 26856;
	// addi r28,r11,26684
	ctx.r28.s64 = ctx.r11.s64 + 26684;
loc_8297CD5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297CD64;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ce10
	if (ctx.cr0.lt) goto loc_8297CE10;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297CD84;
	sub_8292E140(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297CD9C;
	sub_8292E140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297CDA4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ce10
	if (ctx.cr0.lt) goto loc_8297CE10;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297CDBC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ce10
	if (ctx.cr0.lt) goto loc_8297CE10;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297CDE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ce10
	if (ctx.cr0.lt) goto loc_8297CE10;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297CDF4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ce10
	if (ctx.cr0.lt) goto loc_8297CE10;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297cd5c
	if (ctx.cr6.lt) goto loc_8297CD5C;
loc_8297CE0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8297CE10:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297CE18"))) PPC_WEAK_FUNC(sub_8297CE18);
PPC_FUNC_IMPL(__imp__sub_8297CE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x8297CE20;
	__savegprlr_21(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297CE34;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,28320
	ctx.r4.s64 = ctx.r11.s64 + 28320;
	// bl 0x82978a68
	ctx.lr = 0x8297CE4C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lwz r9,1816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r11,28388
	ctx.r26.s64 = ctx.r11.s64 + 28388;
	// addi r25,r10,26672
	ctx.r25.s64 = ctx.r10.s64 + 26672;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8297cee0
	if (!ctx.cr6.gt) goto loc_8297CEE0;
loc_8297CE74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297CE7C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297CE9C;
	sub_8292E140(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297CEB0;
	sub_8292E140(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297CEC8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297ce74
	if (ctx.cr6.lt) goto loc_8297CE74;
loc_8297CEE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297CEE8;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26864
	ctx.r4.s64 = ctx.r11.s64 + 26864;
	// bl 0x82978a68
	ctx.lr = 0x8297CF00;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r23,r11,26856
	ctx.r23.s64 = ctx.r11.s64 + 26856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297CF2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26608
	ctx.r4.s64 = ctx.r11.s64 + 26608;
	// bl 0x82978a68
	ctx.lr = 0x8297CF44;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r24,r10,26884
	ctx.r24.s64 = ctx.r10.s64 + 26884;
	// beq cr6,0x8297cfd0
	if (ctx.cr6.eq) goto loc_8297CFD0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,28296
	ctx.r29.s64 = ctx.r11.s64 + 28296;
loc_8297CF6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297CF74;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297CF90;
	sub_8292E140(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297CFA4;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297CFB8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297cf6c
	if (ctx.cr6.lt) goto loc_8297CF6C;
loc_8297CFD0:
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r27,r9,28268
	ctx.r27.s64 = ctx.r9.s64 + 28268;
	// addi r28,r10,28376
	ctx.r28.s64 = ctx.r10.s64 + 28376;
	// beq cr6,0x8297d054
	if (ctx.cr6.eq) goto loc_8297D054;
loc_8297CFEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297CFF4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297D010;
	sub_8292E140(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292e140
	ctx.lr = 0x8297D024;
	sub_8292E140(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D03C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297cfec
	if (ctx.cr6.lt) goto loc_8297CFEC;
loc_8297D054:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297d0b4
	if (ctx.cr6.eq) goto loc_8297D0B4;
loc_8297D060:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297D068;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297D084;
	sub_8292E140(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D09C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297d060
	if (ctx.cr6.lt) goto loc_8297D060;
loc_8297D0B4:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297d134
	if (ctx.cr6.eq) goto loc_8297D134;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,28168
	ctx.r29.s64 = ctx.r11.s64 + 28168;
loc_8297D0C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297D0D0;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297D0EC;
	sub_8292E140(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292e140
	ctx.lr = 0x8297D100;
	sub_8292E140(ctx, base);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D11C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297d0c8
	if (ctx.cr6.lt) goto loc_8297D0C8;
loc_8297D134:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297d1ac
	if (ctx.cr6.eq) goto loc_8297D1AC;
loc_8297D140:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297D148;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297D168;
	sub_8292E140(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297D17C;
	sub_8292E140(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D194;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297d140
	if (ctx.cr6.lt) goto loc_8297D140;
loc_8297D1AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297D1B4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,28348
	ctx.r4.s64 = ctx.r11.s64 + 28348;
	// bl 0x82978a68
	ctx.lr = 0x8297D1CC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297d258
	if (ctx.cr6.eq) goto loc_8297D258;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,28136
	ctx.r29.s64 = ctx.r11.s64 + 28136;
loc_8297D1EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297D1F4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297D210;
	sub_8292E140(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292e140
	ctx.lr = 0x8297D224;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D240;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297d1ec
	if (ctx.cr6.lt) goto loc_8297D1EC;
loc_8297D258:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297d2d0
	if (ctx.cr6.eq) goto loc_8297D2D0;
loc_8297D264:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297D26C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297D28C;
	sub_8292E140(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297D2A0;
	sub_8292E140(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D2B8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297d264
	if (ctx.cr6.lt) goto loc_8297D264;
loc_8297D2D0:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r28,r10,26660
	ctx.r28.s64 = ctx.r10.s64 + 26660;
	// beq cr6,0x8297d354
	if (ctx.cr6.eq) goto loc_8297D354;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,28108
	ctx.r29.s64 = ctx.r11.s64 + 28108;
loc_8297D2EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297D2F4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8292e140
	ctx.lr = 0x8297D310;
	sub_8292E140(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297D324;
	sub_8292E140(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D33C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297d2ec
	if (ctx.cr6.lt) goto loc_8297D2EC;
loc_8297D354:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297d400
	if (ctx.cr6.eq) goto loc_8297D400;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,28080
	ctx.r29.s64 = ctx.r11.s64 + 28080;
loc_8297D368:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297D370;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8292e140
	ctx.lr = 0x8297D390;
	sub_8292E140(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8292e140
	ctx.lr = 0x8297D3A4;
	sub_8292E140(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297D3B8;
	sub_8292E140(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297D3CC;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D3E8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d404
	if (ctx.cr0.lt) goto loc_8297D404;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297d368
	if (ctx.cr6.lt) goto loc_8297D368;
loc_8297D400:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8297D404:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297D40C"))) PPC_WEAK_FUNC(sub_8297D40C);
PPC_FUNC_IMPL(__imp__sub_8297D40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D410"))) PPC_WEAK_FUNC(sub_8297D410);
PPC_FUNC_IMPL(__imp__sub_8297D410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8297D418;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297D42C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d4c8
	if (ctx.cr0.lt) goto loc_8297D4C8;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,29,0,20
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 29) & 0xFFFFF800) | (ctx.r4.u64 & 0xFFFFFFFF000007FF);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978ce8
	ctx.lr = 0x8297D454;
	sub_82978CE8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8292e140
	ctx.lr = 0x8297D46C;
	sub_8292E140(ctx, base);
	// lfs f4,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,28416
	ctx.r4.s64 = ctx.r11.s64 + 28416;
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D4B0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d4c8
	if (ctx.cr0.lt) goto loc_8297D4C8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82995078
	ctx.lr = 0x8297D4C8;
	sub_82995078(ctx, base);
loc_8297D4C8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297D4D0"))) PPC_WEAK_FUNC(sub_8297D4D0);
PPC_FUNC_IMPL(__imp__sub_8297D4D0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8297d558
	if (!ctx.cr6.eq) goto loc_8297D558;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8297d558
	if (!ctx.cr6.eq) goto loc_8297D558;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8297d558
	if (!ctx.cr6.eq) goto loc_8297D558;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8297d544
	if (ctx.cr6.lt) goto loc_8297D544;
	// beq cr6,0x8297d538
	if (ctx.cr6.eq) goto loc_8297D538;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x8297d52c
	if (ctx.cr6.lt) goto loc_8297D52C;
	// beq cr6,0x8297d520
	if (ctx.cr6.eq) goto loc_8297D520;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8297d574
	goto loc_8297D574;
loc_8297D520:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,28548
	ctx.r4.s64 = ctx.r10.s64 + 28548;
	// b 0x8297d54c
	goto loc_8297D54C;
loc_8297D52C:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,28528
	ctx.r4.s64 = ctx.r10.s64 + 28528;
	// b 0x8297d54c
	goto loc_8297D54C;
loc_8297D538:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,28508
	ctx.r4.s64 = ctx.r10.s64 + 28508;
	// b 0x8297d54c
	goto loc_8297D54C;
loc_8297D544:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,28488
	ctx.r4.s64 = ctx.r10.s64 + 28488;
loc_8297D54C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D554;
	sub_82978A68(ctx, base);
	// b 0x8297d574
	goto loc_8297D574;
loc_8297D558:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,28452
	ctx.r4.s64 = ctx.r10.s64 + 28452;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D574;
	sub_82978A68(ctx, base);
loc_8297D574:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D584"))) PPC_WEAK_FUNC(sub_8297D584);
PPC_FUNC_IMPL(__imp__sub_8297D584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D588"))) PPC_WEAK_FUNC(sub_8297D588);
PPC_FUNC_IMPL(__imp__sub_8297D588) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,28568
	ctx.r4.s64 = ctx.r10.s64 + 28568;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D5AC;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D5BC"))) PPC_WEAK_FUNC(sub_8297D5BC);
PPC_FUNC_IMPL(__imp__sub_8297D5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D5C0"))) PPC_WEAK_FUNC(sub_8297D5C0);
PPC_FUNC_IMPL(__imp__sub_8297D5C0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,28592
	ctx.r4.s64 = ctx.r10.s64 + 28592;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D5E4;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D5F4"))) PPC_WEAK_FUNC(sub_8297D5F4);
PPC_FUNC_IMPL(__imp__sub_8297D5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D5F8"))) PPC_WEAK_FUNC(sub_8297D5F8);
PPC_FUNC_IMPL(__imp__sub_8297D5F8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,28616
	ctx.r4.s64 = ctx.r10.s64 + 28616;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D61C;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D62C"))) PPC_WEAK_FUNC(sub_8297D62C);
PPC_FUNC_IMPL(__imp__sub_8297D62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D630"))) PPC_WEAK_FUNC(sub_8297D630);
PPC_FUNC_IMPL(__imp__sub_8297D630) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,28640
	ctx.r4.s64 = ctx.r10.s64 + 28640;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D654;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D664"))) PPC_WEAK_FUNC(sub_8297D664);
PPC_FUNC_IMPL(__imp__sub_8297D664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D668"))) PPC_WEAK_FUNC(sub_8297D668);
PPC_FUNC_IMPL(__imp__sub_8297D668) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,28664
	ctx.r4.s64 = ctx.r11.s64 + 28664;
	// bl 0x82978a68
	ctx.lr = 0x8297D680;
	sub_82978A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D690"))) PPC_WEAK_FUNC(sub_8297D690);
PPC_FUNC_IMPL(__imp__sub_8297D690) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,28680
	ctx.r4.s64 = ctx.r11.s64 + 28680;
	// bl 0x82978a68
	ctx.lr = 0x8297D6A8;
	sub_82978A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D6B8"))) PPC_WEAK_FUNC(sub_8297D6B8);
PPC_FUNC_IMPL(__imp__sub_8297D6B8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,28700
	ctx.r4.s64 = ctx.r10.s64 + 28700;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D6E0;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D6F0"))) PPC_WEAK_FUNC(sub_8297D6F0);
PPC_FUNC_IMPL(__imp__sub_8297D6F0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,28728
	ctx.r4.s64 = ctx.r11.s64 + 28728;
	// bl 0x82978a68
	ctx.lr = 0x8297D70C;
	sub_82978A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D71C"))) PPC_WEAK_FUNC(sub_8297D71C);
PPC_FUNC_IMPL(__imp__sub_8297D71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D720"))) PPC_WEAK_FUNC(sub_8297D720);
PPC_FUNC_IMPL(__imp__sub_8297D720) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,28748
	ctx.r4.s64 = ctx.r10.s64 + 28748;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D744;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D754"))) PPC_WEAK_FUNC(sub_8297D754);
PPC_FUNC_IMPL(__imp__sub_8297D754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D758"))) PPC_WEAK_FUNC(sub_8297D758);
PPC_FUNC_IMPL(__imp__sub_8297D758) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,28784
	ctx.r4.s64 = ctx.r10.s64 + 28784;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D77C;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D78C"))) PPC_WEAK_FUNC(sub_8297D78C);
PPC_FUNC_IMPL(__imp__sub_8297D78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D790"))) PPC_WEAK_FUNC(sub_8297D790);
PPC_FUNC_IMPL(__imp__sub_8297D790) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,28820
	ctx.r4.s64 = ctx.r10.s64 + 28820;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D7B4;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D7C4"))) PPC_WEAK_FUNC(sub_8297D7C4);
PPC_FUNC_IMPL(__imp__sub_8297D7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D7C8"))) PPC_WEAK_FUNC(sub_8297D7C8);
PPC_FUNC_IMPL(__imp__sub_8297D7C8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,28856
	ctx.r4.s64 = ctx.r10.s64 + 28856;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D7EC;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D7FC"))) PPC_WEAK_FUNC(sub_8297D7FC);
PPC_FUNC_IMPL(__imp__sub_8297D7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D800"))) PPC_WEAK_FUNC(sub_8297D800);
PPC_FUNC_IMPL(__imp__sub_8297D800) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,27256
	ctx.r4.s64 = ctx.r10.s64 + 27256;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D824;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D834"))) PPC_WEAK_FUNC(sub_8297D834);
PPC_FUNC_IMPL(__imp__sub_8297D834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D838"))) PPC_WEAK_FUNC(sub_8297D838);
PPC_FUNC_IMPL(__imp__sub_8297D838) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,27308
	ctx.r4.s64 = ctx.r10.s64 + 27308;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D85C;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D86C"))) PPC_WEAK_FUNC(sub_8297D86C);
PPC_FUNC_IMPL(__imp__sub_8297D86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D870"))) PPC_WEAK_FUNC(sub_8297D870);
PPC_FUNC_IMPL(__imp__sub_8297D870) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,28892
	ctx.r4.s64 = ctx.r10.s64 + 28892;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D894;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D8A4"))) PPC_WEAK_FUNC(sub_8297D8A4);
PPC_FUNC_IMPL(__imp__sub_8297D8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D8A8"))) PPC_WEAK_FUNC(sub_8297D8A8);
PPC_FUNC_IMPL(__imp__sub_8297D8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8297D8B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297D8C4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d8e4
	if (ctx.cr0.lt) goto loc_8297D8E4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,28932
	ctx.r4.s64 = ctx.r11.s64 + 28932;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D8E4;
	sub_82978A68(ctx, base);
loc_8297D8E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297D8EC"))) PPC_WEAK_FUNC(sub_8297D8EC);
PPC_FUNC_IMPL(__imp__sub_8297D8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D8F0"))) PPC_WEAK_FUNC(sub_8297D8F0);
PPC_FUNC_IMPL(__imp__sub_8297D8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8297D8F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297D90C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297d92c
	if (ctx.cr0.lt) goto loc_8297D92C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,28968
	ctx.r4.s64 = ctx.r11.s64 + 28968;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D92C;
	sub_82978A68(ctx, base);
loc_8297D92C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297D934"))) PPC_WEAK_FUNC(sub_8297D934);
PPC_FUNC_IMPL(__imp__sub_8297D934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D938"))) PPC_WEAK_FUNC(sub_8297D938);
PPC_FUNC_IMPL(__imp__sub_8297D938) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,29004
	ctx.r4.s64 = ctx.r10.s64 + 29004;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D95C;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D96C"))) PPC_WEAK_FUNC(sub_8297D96C);
PPC_FUNC_IMPL(__imp__sub_8297D96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D970"))) PPC_WEAK_FUNC(sub_8297D970);
PPC_FUNC_IMPL(__imp__sub_8297D970) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,29032
	ctx.r4.s64 = ctx.r10.s64 + 29032;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D994;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D9A4"))) PPC_WEAK_FUNC(sub_8297D9A4);
PPC_FUNC_IMPL(__imp__sub_8297D9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D9A8"))) PPC_WEAK_FUNC(sub_8297D9A8);
PPC_FUNC_IMPL(__imp__sub_8297D9A8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,29060
	ctx.r4.s64 = ctx.r10.s64 + 29060;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297D9CC;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297D9DC"))) PPC_WEAK_FUNC(sub_8297D9DC);
PPC_FUNC_IMPL(__imp__sub_8297D9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297D9E0"))) PPC_WEAK_FUNC(sub_8297D9E0);
PPC_FUNC_IMPL(__imp__sub_8297D9E0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,29088
	ctx.r4.s64 = ctx.r11.s64 + 29088;
	// bl 0x82978a68
	ctx.lr = 0x8297D9FC;
	sub_82978A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297DA0C"))) PPC_WEAK_FUNC(sub_8297DA0C);
PPC_FUNC_IMPL(__imp__sub_8297DA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297DA10"))) PPC_WEAK_FUNC(sub_8297DA10);
PPC_FUNC_IMPL(__imp__sub_8297DA10) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,29108
	ctx.r4.s64 = ctx.r11.s64 + 29108;
	// bl 0x82978a68
	ctx.lr = 0x8297DA2C;
	sub_82978A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297DA3C"))) PPC_WEAK_FUNC(sub_8297DA3C);
PPC_FUNC_IMPL(__imp__sub_8297DA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297DA40"))) PPC_WEAK_FUNC(sub_8297DA40);
PPC_FUNC_IMPL(__imp__sub_8297DA40) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,29128
	ctx.r4.s64 = ctx.r10.s64 + 29128;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297DA64;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297DA74"))) PPC_WEAK_FUNC(sub_8297DA74);
PPC_FUNC_IMPL(__imp__sub_8297DA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297DA78"))) PPC_WEAK_FUNC(sub_8297DA78);
PPC_FUNC_IMPL(__imp__sub_8297DA78) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,29156
	ctx.r4.s64 = ctx.r10.s64 + 29156;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297DA9C;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297DAAC"))) PPC_WEAK_FUNC(sub_8297DAAC);
PPC_FUNC_IMPL(__imp__sub_8297DAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297DAB0"))) PPC_WEAK_FUNC(sub_8297DAB0);
PPC_FUNC_IMPL(__imp__sub_8297DAB0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,29184
	ctx.r4.s64 = ctx.r10.s64 + 29184;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297DAD8;
	sub_82978A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297DAE8"))) PPC_WEAK_FUNC(sub_8297DAE8);
PPC_FUNC_IMPL(__imp__sub_8297DAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x8297DAF0;
	__savegprlr_19(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1816);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8297dc38
	if (!ctx.cr6.gt) goto loc_8297DC38;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r22,29760
	ctx.r22.s64 = 1950351360;
	// addi r29,r6,27992
	ctx.r29.s64 = ctx.r6.s64 + 27992;
	// addi r28,r7,29276
	ctx.r28.s64 = ctx.r7.s64 + 29276;
	// addi r27,r8,29256
	ctx.r27.s64 = ctx.r8.s64 + 29256;
	// addi r26,r9,29240
	ctx.r26.s64 = ctx.r9.s64 + 29240;
	// addi r25,r10,29216
	ctx.r25.s64 = ctx.r10.s64 + 29216;
	// addi r24,r11,26684
	ctx.r24.s64 = ctx.r11.s64 + 26684;
loc_8297DB4C:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297DB64;
	sub_8292E140(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297DB7C;
	sub_8292E140(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297DB94;
	sub_8292E140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297DB9C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297dc3c
	if (ctx.cr0.lt) goto loc_8297DC3C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297DBB4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297dc3c
	if (ctx.cr0.lt) goto loc_8297DC3C;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x8297dc4c
	if (ctx.cr6.gt) goto loc_8297DC4C;
	// beq cr6,0x8297dc44
	if (ctx.cr6.eq) goto loc_8297DC44;
	// lis r11,29584
	ctx.r11.s64 = 1938817024;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8297dc70
	if (ctx.cr6.eq) goto loc_8297DC70;
	// lis r11,29600
	ctx.r11.s64 = 1939865600;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8297dc78
	if (ctx.cr6.eq) goto loc_8297DC78;
	// lis r11,29616
	ctx.r11.s64 = 1940914176;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8297dc44
	if (ctx.cr6.eq) goto loc_8297DC44;
	// lis r11,29632
	ctx.r11.s64 = 1941962752;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8297dc80
	if (!ctx.cr6.eq) goto loc_8297DC80;
loc_8297DBF8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8297DBFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297DC04;
	sub_82978A68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8297dc3c
	if (ctx.cr6.lt) goto loc_8297DC3C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297DC20;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297dc3c
	if (ctx.cr0.lt) goto loc_8297DC3C;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297db4c
	if (ctx.cr6.lt) goto loc_8297DB4C;
loc_8297DC38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8297DC3C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
loc_8297DC44:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x8297dbfc
	goto loc_8297DBFC;
loc_8297DC4C:
	// lis r11,29776
	ctx.r11.s64 = 1951399936;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8297dbf8
	if (ctx.cr6.eq) goto loc_8297DBF8;
	// lis r11,29792
	ctx.r11.s64 = 1952448512;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8297dc78
	if (ctx.cr6.eq) goto loc_8297DC78;
	// lis r11,29808
	ctx.r11.s64 = 1953497088;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8297dc80
	if (!ctx.cr6.eq) goto loc_8297DC80;
loc_8297DC70:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x8297dbfc
	goto loc_8297DBFC;
loc_8297DC78:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x8297dbfc
	goto loc_8297DBFC;
loc_8297DC80:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8297dc3c
	goto loc_8297DC3C;
}

__attribute__((alias("__imp__sub_8297DC8C"))) PPC_WEAK_FUNC(sub_8297DC8C);
PPC_FUNC_IMPL(__imp__sub_8297DC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297DC90"))) PPC_WEAK_FUNC(sub_8297DC90);
PPC_FUNC_IMPL(__imp__sub_8297DC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8297DC98;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297DCAC;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297dccc
	if (ctx.cr0.lt) goto loc_8297DCCC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,29292
	ctx.r4.s64 = ctx.r11.s64 + 29292;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297DCCC;
	sub_82978A68(ctx, base);
loc_8297DCCC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297DCD4"))) PPC_WEAK_FUNC(sub_8297DCD4);
PPC_FUNC_IMPL(__imp__sub_8297DCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297DCD8"))) PPC_WEAK_FUNC(sub_8297DCD8);
PPC_FUNC_IMPL(__imp__sub_8297DCD8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,29340
	ctx.r4.s64 = ctx.r11.s64 + 29340;
	// bl 0x82978a68
	ctx.lr = 0x8297DCF0;
	sub_82978A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8297DD00"))) PPC_WEAK_FUNC(sub_8297DD00);
PPC_FUNC_IMPL(__imp__sub_8297DD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8297DD08;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r27,r11,26672
	ctx.r27.s64 = ctx.r11.s64 + 26672;
	// lwz r11,1816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1816);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297dda0
	if (ctx.cr6.eq) goto loc_8297DDA0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,29412
	ctx.r29.s64 = ctx.r11.s64 + 29412;
loc_8297DD38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297DD40;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297de3c
	if (ctx.cr0.lt) goto loc_8297DE3C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297DD60;
	sub_8292E140(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297DD74;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297DD88;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297de3c
	if (ctx.cr0.lt) goto loc_8297DE3C;
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297dd38
	if (ctx.cr6.lt) goto loc_8297DD38;
loc_8297DDA0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297de38
	if (ctx.cr6.eq) goto loc_8297DE38;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,29376
	ctx.r29.s64 = ctx.r11.s64 + 29376;
loc_8297DDB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297DDBC;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297de3c
	if (ctx.cr0.lt) goto loc_8297DE3C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292e140
	ctx.lr = 0x8297DDDC;
	sub_8292E140(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292e140
	ctx.lr = 0x8297DDF4;
	sub_8292E140(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297DE08;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297DE20;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297de3c
	if (ctx.cr0.lt) goto loc_8297DE3C;
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297ddb4
	if (ctx.cr6.lt) goto loc_8297DDB4;
loc_8297DE38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8297DE3C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297DE44"))) PPC_WEAK_FUNC(sub_8297DE44);
PPC_FUNC_IMPL(__imp__sub_8297DE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297DE48"))) PPC_WEAK_FUNC(sub_8297DE48);
PPC_FUNC_IMPL(__imp__sub_8297DE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8297DE50;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297DE60;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29624
	ctx.r4.s64 = ctx.r11.s64 + 29624;
	// bl 0x82978a68
	ctx.lr = 0x8297DE78;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297DE88;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29608
	ctx.r4.s64 = ctx.r11.s64 + 29608;
	// bl 0x82978a68
	ctx.lr = 0x8297DEA0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297DEB0;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29596
	ctx.r4.s64 = ctx.r11.s64 + 29596;
	// bl 0x82978a68
	ctx.lr = 0x8297DEC8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297DED8;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r31,508
	ctx.r5.s64 = ctx.r31.s64 + 508;
	// addi r4,r11,29552
	ctx.r4.s64 = ctx.r11.s64 + 29552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297DEF4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297DF04;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26808
	ctx.r4.s64 = ctx.r11.s64 + 26808;
	// bl 0x82978a68
	ctx.lr = 0x8297DF1C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82978b40
	ctx.lr = 0x8297DF38;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29532
	ctx.r4.s64 = ctx.r11.s64 + 29532;
	// bl 0x82978a68
	ctx.lr = 0x8297DF50;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297DF60;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29512
	ctx.r4.s64 = ctx.r11.s64 + 29512;
	// bl 0x82978a68
	ctx.lr = 0x8297DF78;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297DF88;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29488
	ctx.r4.s64 = ctx.r11.s64 + 29488;
	// bl 0x82978a68
	ctx.lr = 0x8297DFA0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297DFB0;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29468
	ctx.r4.s64 = ctx.r11.s64 + 29468;
	// bl 0x82978a68
	ctx.lr = 0x8297DFC8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297DFD8;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29440
	ctx.r4.s64 = ctx.r11.s64 + 29440;
	// bl 0x82978a68
	ctx.lr = 0x8297DFF0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82998610
	ctx.lr = 0x8297E004;
	sub_82998610(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297E020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,26844
	ctx.r4.s64 = ctx.r10.s64 + 26844;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82978a68
	ctx.lr = 0x8297E044;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e0b8
	if (ctx.cr0.lt) goto loc_8297E0B8;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8297e070
	if (ctx.cr6.eq) goto loc_8297E070;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297E068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_8297E070:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// lwz r3,1536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// bl 0x82931510
	ctx.lr = 0x8297E07C;
	sub_82931510(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8297e0b4
	if (ctx.cr0.lt) goto loc_8297E0B4;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r28,1536(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// lwz r31,1532(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297E0A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8297E0AC;
	sub_82FA77C0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8297E0B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8297E0B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297E0C0"))) PPC_WEAK_FUNC(sub_8297E0C0);
PPC_FUNC_IMPL(__imp__sub_8297E0C0) {
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
	// lwz r11,1544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1544, ctx.r11.u32);
	// bl 0x82978b40
	ctx.lr = 0x8297E0E4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e104
	if (ctx.cr0.lt) goto loc_8297E104;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26848
	ctx.r4.s64 = ctx.r11.s64 + 26848;
	// bl 0x82978a68
	ctx.lr = 0x8297E0FC;
	sub_82978A68(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_8297E104:
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

__attribute__((alias("__imp__sub_8297E118"))) PPC_WEAK_FUNC(sub_8297E118);
PPC_FUNC_IMPL(__imp__sub_8297E118) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,4436
	ctx.r4.s64 = ctx.r11.s64 + 4436;
	// bl 0x82978a68
	ctx.lr = 0x8297E138;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e1a4
	if (ctx.cr0.lt) goto loc_8297E1A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297E148;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e1a4
	if (ctx.cr0.lt) goto loc_8297E1A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,1816(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29648
	ctx.r4.s64 = ctx.r11.s64 + 29648;
	// bl 0x82978a68
	ctx.lr = 0x8297E164;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e1a4
	if (ctx.cr0.lt) goto loc_8297E1A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297E174;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e1a4
	if (ctx.cr0.lt) goto loc_8297E1A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26808
	ctx.r4.s64 = ctx.r11.s64 + 26808;
	// bl 0x82978a68
	ctx.lr = 0x8297E18C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e1a4
	if (ctx.cr0.lt) goto loc_8297E1A4;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
loc_8297E1A4:
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

__attribute__((alias("__imp__sub_8297E1B8"))) PPC_WEAK_FUNC(sub_8297E1B8);
PPC_FUNC_IMPL(__imp__sub_8297E1B8) {
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
	// bl 0x82978b40
	ctx.lr = 0x8297E1D0;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e22c
	if (ctx.cr0.lt) goto loc_8297E22C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,1816(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29720
	ctx.r4.s64 = ctx.r11.s64 + 29720;
	// bl 0x82978a68
	ctx.lr = 0x8297E1EC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e22c
	if (ctx.cr0.lt) goto loc_8297E22C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297E1FC;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e22c
	if (ctx.cr0.lt) goto loc_8297E22C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26808
	ctx.r4.s64 = ctx.r11.s64 + 26808;
	// bl 0x82978a68
	ctx.lr = 0x8297E214;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e22c
	if (ctx.cr0.lt) goto loc_8297E22C;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
loc_8297E22C:
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

__attribute__((alias("__imp__sub_8297E240"))) PPC_WEAK_FUNC(sub_8297E240);
PPC_FUNC_IMPL(__imp__sub_8297E240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8297E248;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8297e384
	if (ctx.cr6.eq) goto loc_8297E384;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
loc_8297E270:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297e374
	if (ctx.cr6.eq) goto loc_8297E374;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297E294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r4,108(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297E2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 18, ctx.xer);
	// bgt cr6,0x8297e494
	if (ctx.cr6.gt) goto loc_8297E494;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,25400
	ctx.r12.s64 = ctx.r12.s64 + 25400;
	// lbzx r0,r12,r30
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r30.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32104
	ctx.r12.s64 = -2103967744;
	// nop 
	// addi r12,r12,-7452
	ctx.r12.s64 = ctx.r12.s64 + -7452;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_8297E48C;
	case 1:
		goto loc_8297E2E4;
	case 2:
		goto loc_8297E2EC;
	case 3:
		goto loc_8297E2F4;
	case 4:
		goto loc_8297E2FC;
	case 5:
		goto loc_8297E304;
	case 6:
		goto loc_8297E30C;
	case 7:
		goto loc_8297E314;
	case 8:
		goto loc_8297E31C;
	case 9:
		goto loc_8297E324;
	case 10:
		goto loc_8297E32C;
	case 11:
		goto loc_8297E334;
	case 12:
		goto loc_8297E33C;
	case 13:
		goto loc_8297E344;
	case 14:
		goto loc_8297E34C;
	case 15:
		goto loc_8297E494;
	case 16:
		goto loc_8297E494;
	case 17:
		goto loc_8297E354;
	case 18:
		goto loc_8297E354;
	default:
		__builtin_unreachable();
	}
loc_8297E2E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8297e358
	goto loc_8297E358;
loc_8297E2EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8297e358
	goto loc_8297E358;
loc_8297E2F4:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8297e358
	goto loc_8297E358;
loc_8297E2FC:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8297e358
	goto loc_8297E358;
loc_8297E304:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8297e358
	goto loc_8297E358;
loc_8297E30C:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8297e358
	goto loc_8297E358;
loc_8297E314:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8297e358
	goto loc_8297E358;
loc_8297E31C:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8297e358
	goto loc_8297E358;
loc_8297E324:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8297e358
	goto loc_8297E358;
loc_8297E32C:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8297e358
	goto loc_8297E358;
loc_8297E334:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8297e358
	goto loc_8297E358;
loc_8297E33C:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8297e358
	goto loc_8297E358;
loc_8297E344:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8297e358
	goto loc_8297E358;
loc_8297E34C:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x8297e358
	goto loc_8297E358;
loc_8297E354:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
loc_8297E358:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8297e36c
	if (ctx.cr6.lt) goto loc_8297E36C;
	// bne cr6,0x8297e374
	if (!ctx.cr6.eq) goto loc_8297E374;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x8297e374
	if (!ctx.cr6.lt) goto loc_8297E374;
loc_8297E36C:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_8297E374:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8297e270
	if (ctx.cr6.lt) goto loc_8297E270;
loc_8297E384:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297E38C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e484
	if (ctx.cr0.lt) goto loc_8297E484;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,30076
	ctx.r5.s64 = ctx.r11.s64 + 30076;
	// addi r4,r10,30012
	ctx.r4.s64 = ctx.r10.s64 + 30012;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297E3AC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e484
	if (ctx.cr0.lt) goto loc_8297E484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297E3BC;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e484
	if (ctx.cr0.lt) goto loc_8297E484;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26808
	ctx.r4.s64 = ctx.r11.s64 + 26808;
	// bl 0x82978a68
	ctx.lr = 0x8297E3D4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e484
	if (ctx.cr0.lt) goto loc_8297E484;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82978b40
	ctx.lr = 0x8297E3F0;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e484
	if (ctx.cr0.lt) goto loc_8297E484;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29936
	ctx.r4.s64 = ctx.r11.s64 + 29936;
	// bl 0x82978a68
	ctx.lr = 0x8297E408;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e484
	if (ctx.cr0.lt) goto loc_8297E484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297E418;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e484
	if (ctx.cr0.lt) goto loc_8297E484;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,1816(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29816
	ctx.r4.s64 = ctx.r11.s64 + 29816;
	// bl 0x82978a68
	ctx.lr = 0x8297E434;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e484
	if (ctx.cr0.lt) goto loc_8297E484;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82978b40
	ctx.lr = 0x8297E450;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e484
	if (ctx.cr0.lt) goto loc_8297E484;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26848
	ctx.r4.s64 = ctx.r11.s64 + 26848;
	// bl 0x82978a68
	ctx.lr = 0x8297E468;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e484
	if (ctx.cr0.lt) goto loc_8297E484;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297E484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8297E484:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_8297E48C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8297e484
	goto loc_8297E484;
loc_8297E494:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8297e484
	goto loc_8297E484;
}

__attribute__((alias("__imp__sub_8297E4A0"))) PPC_WEAK_FUNC(sub_8297E4A0);
PPC_FUNC_IMPL(__imp__sub_8297E4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8297E4A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1676(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1676);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8297e4c4
	if (!ctx.cr6.eq) goto loc_8297E4C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8297e674
	goto loc_8297E674;
loc_8297E4C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297E4CC;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e674
	if (ctx.cr0.lt) goto loc_8297E674;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,30320
	ctx.r4.s64 = ctx.r11.s64 + 30320;
	// bl 0x82978a68
	ctx.lr = 0x8297E4E4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e674
	if (ctx.cr0.lt) goto loc_8297E674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297E4F4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e674
	if (ctx.cr0.lt) goto loc_8297E674;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,26808
	ctx.r30.s64 = ctx.r11.s64 + 26808;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297E510;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e674
	if (ctx.cr0.lt) goto loc_8297E674;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82978b40
	ctx.lr = 0x8297E52C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e674
	if (ctx.cr0.lt) goto loc_8297E674;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,30248
	ctx.r4.s64 = ctx.r11.s64 + 30248;
	// bl 0x82978a68
	ctx.lr = 0x8297E544;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e674
	if (ctx.cr0.lt) goto loc_8297E674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297E554;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e674
	if (ctx.cr0.lt) goto loc_8297E674;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297E568;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e674
	if (ctx.cr0.lt) goto loc_8297E674;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,1676(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// ble cr6,0x8297e60c
	if (!ctx.cr6.gt) goto loc_8297E60C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r30,r31,1548
	ctx.r30.s64 = ctx.r31.s64 + 1548;
	// addi r29,r11,30160
	ctx.r29.s64 = ctx.r11.s64 + 30160;
	// addi r28,r10,30096
	ctx.r28.s64 = ctx.r10.s64 + 30096;
loc_8297E5A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297E5A8;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e674
	if (ctx.cr0.lt) goto loc_8297E674;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82978a68
	ctx.lr = 0x8297E5C4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e674
	if (ctx.cr0.lt) goto loc_8297E674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297E5D4;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e674
	if (ctx.cr0.lt) goto loc_8297E674;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82978a68
	ctx.lr = 0x8297E5F0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e674
	if (ctx.cr0.lt) goto loc_8297E674;
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297e5a0
	if (ctx.cr6.lt) goto loc_8297E5A0;
loc_8297E60C:
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82978b40
	ctx.lr = 0x8297E620;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e674
	if (ctx.cr0.lt) goto loc_8297E674;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26844
	ctx.r4.s64 = ctx.r11.s64 + 26844;
	// bl 0x82978a68
	ctx.lr = 0x8297E638;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e674
	if (ctx.cr0.lt) goto loc_8297E674;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82978b40
	ctx.lr = 0x8297E654;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e674
	if (ctx.cr0.lt) goto loc_8297E674;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26848
	ctx.r4.s64 = ctx.r11.s64 + 26848;
	// bl 0x82978a68
	ctx.lr = 0x8297E66C;
	sub_82978A68(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_8297E674:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297E67C"))) PPC_WEAK_FUNC(sub_8297E67C);
PPC_FUNC_IMPL(__imp__sub_8297E67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8297E680"))) PPC_WEAK_FUNC(sub_8297E680);
PPC_FUNC_IMPL(__imp__sub_8297E680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8297E688;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,28,0,20
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0xFFFFF800) | (ctx.r4.u64 & 0xFFFFFFFF000007FF);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82978ce8
	ctx.lr = 0x8297E6B0;
	sub_82978CE8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297E6C8;
	sub_8292E140(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r28,r11,30348
	ctx.r28.s64 = ctx.r11.s64 + 30348;
loc_8297E6D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297E6E0;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e728
	if (ctx.cr0.lt) goto loc_8297E728;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297E700;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297e728
	if (ctx.cr0.lt) goto loc_8297E728;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x8297e6d8
	if (ctx.cr6.lt) goto loc_8297E6D8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82995218
	ctx.lr = 0x8297E728;
	sub_82995218(ctx, base);
loc_8297E728:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297E730"))) PPC_WEAK_FUNC(sub_8297E730);
PPC_FUNC_IMPL(__imp__sub_8297E730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8297E738;
	__savegprlr_25(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,108(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297E75C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297E778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8297ebfc
	if (!ctx.cr6.eq) goto loc_8297EBFC;
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 18, ctx.xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bgt cr6,0x8297ee04
	if (ctx.cr6.gt) goto loc_8297EE04;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// rlwinm r0,r30,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,25424
	ctx.r12.s64 = ctx.r12.s64 + 25424;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32104
	ctx.r12.s64 = -2103967744;
	// addi r12,r12,-6212
	ctx.r12.s64 = ctx.r12.s64 + -6212;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_8297EDFC;
	case 1:
		goto loc_8297E7BC;
	case 2:
		goto loc_8297E7C4;
	case 3:
		goto loc_8297E7CC;
	case 4:
		goto loc_8297E7D4;
	case 5:
		goto loc_8297E7DC;
	case 6:
		goto loc_8297E7E4;
	case 7:
		goto loc_8297E7EC;
	case 8:
		goto loc_8297E7F4;
	case 9:
		goto loc_8297E7FC;
	case 10:
		goto loc_8297E804;
	case 11:
		goto loc_8297E80C;
	case 12:
		goto loc_8297E814;
	case 13:
		goto loc_8297E81C;
	case 14:
		goto loc_8297E824;
	case 15:
		goto loc_8297EE04;
	case 16:
		goto loc_8297EE04;
	case 17:
		goto loc_8297E82C;
	case 18:
		goto loc_8297E834;
	default:
		__builtin_unreachable();
	}
loc_8297E7BC:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8297e838
	goto loc_8297E838;
loc_8297E7C4:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8297e838
	goto loc_8297E838;
loc_8297E7CC:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x8297e838
	goto loc_8297E838;
loc_8297E7D4:
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x8297e838
	goto loc_8297E838;
loc_8297E7DC:
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x8297e838
	goto loc_8297E838;
loc_8297E7E4:
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x8297e838
	goto loc_8297E838;
loc_8297E7EC:
	// li r30,6
	ctx.r30.s64 = 6;
	// b 0x8297e838
	goto loc_8297E838;
loc_8297E7F4:
	// li r30,7
	ctx.r30.s64 = 7;
	// b 0x8297e838
	goto loc_8297E838;
loc_8297E7FC:
	// li r30,8
	ctx.r30.s64 = 8;
	// b 0x8297e838
	goto loc_8297E838;
loc_8297E804:
	// li r30,9
	ctx.r30.s64 = 9;
	// b 0x8297e838
	goto loc_8297E838;
loc_8297E80C:
	// li r30,10
	ctx.r30.s64 = 10;
	// b 0x8297e838
	goto loc_8297E838;
loc_8297E814:
	// li r30,11
	ctx.r30.s64 = 11;
	// b 0x8297e838
	goto loc_8297E838;
loc_8297E81C:
	// li r30,12
	ctx.r30.s64 = 12;
	// b 0x8297e838
	goto loc_8297E838;
loc_8297E824:
	// li r30,13
	ctx.r30.s64 = 13;
	// b 0x8297e838
	goto loc_8297E838;
loc_8297E82C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_8297E834:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
loc_8297E838:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r27,r9,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8297e894
	if (ctx.cr0.eq) goto loc_8297E894;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// srawi r10,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 31;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r10,348(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8297E888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8297e8bc
	if (!ctx.cr0.lt) goto loc_8297E8BC;
	// b 0x8297ec00
	goto loc_8297EC00;
loc_8297E894:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297E8AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_8297E8BC:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
	// stw r28,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
	// ble cr6,0x8297e94c
	if (!ctx.cr6.gt) goto loc_8297E94C;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8297E8FC:
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8297e93c
	if (!ctx.cr6.eq) goto loc_8297E93C;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8297e93c
	if (!ctx.cr6.eq) goto loc_8297E93C;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8297e93c
	if (!ctx.cr6.eq) goto loc_8297E93C;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
loc_8297E93C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8297e8fc
	if (ctx.cr6.lt) goto loc_8297E8FC;
loc_8297E94C:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8297E95C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8297e970
	if (ctx.cr6.eq) goto loc_8297E970;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8297E970:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8297e95c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8297E95C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297E998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297E9BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r30,1
	ctx.r11.u64 = ctx.r30.u32 & 0x7FFFFFFF;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bne cr6,0x8297e9d0
	if (!ctx.cr6.eq) goto loc_8297E9D0;
	// oris r11,r11,15
	ctx.r11.u64 = ctx.r11.u64 | 983040;
loc_8297E9D0:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm. r10,r10,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bne 0x8297ea04
	if (!ctx.cr0.eq) goto loc_8297EA04;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8297e9fc
	if (!ctx.cr0.eq) goto loc_8297E9FC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8297ea04
	if (ctx.cr0.eq) goto loc_8297EA04;
loc_8297E9FC:
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_8297EA04:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// rlwimi r10,r11,20,9,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0x700000) | (ctx.r10.u64 & 0xFFFFFFFFFF8FFFFF);
	// rlwinm r8,r11,0,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// clrlwi r11,r7,21
	ctx.r11.u64 = ctx.r7.u32 & 0x7FF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// addi r9,r9,-16448
	ctx.r9.s64 = ctx.r9.s64 + -16448;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r5,r8,30692
	ctx.r5.s64 = ctx.r8.s64 + 30692;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r11,r10,26,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x7C;
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x8292e140
	ctx.lr = 0x8297EA54;
	sub_8292E140(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297ec08
	if (ctx.cr0.eq) goto loc_8297EC08;
	// beq cr6,0x8297ec0c
	if (ctx.cr6.eq) goto loc_8297EC0C;
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r26,1548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1548, ctx.r26.u32);
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// addi r11,r11,194
	ctx.r11.s64 = ctx.r11.s64 + 194;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r11.u32);
	// bl 0x82978b40
	ctx.lr = 0x8297EA9C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,30632
	ctx.r4.s64 = ctx.r11.s64 + 30632;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297EABC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297EACC;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,30544
	ctx.r4.s64 = ctx.r11.s64 + 30544;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297EAEC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r30,15
	ctx.r30.s64 = 983040;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8297eb1c
	if (!ctx.cr6.eq) goto loc_8297EB1C;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// bl 0x829321e0
	ctx.lr = 0x8297EB18;
	sub_829321E0(ctx, base);
	// b 0x8297eb3c
	goto loc_8297EB3C;
loc_8297EB1C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,30532
	ctx.r5.s64 = ctx.r11.s64 + 30532;
	// bl 0x829321e0
	ctx.lr = 0x8297EB28;
	sub_829321E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82978de0
	ctx.lr = 0x8297EB34;
	sub_82978DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
loc_8297EB3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r10,30516
	ctx.r4.s64 = ctx.r10.s64 + 30516;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297EB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4436
	ctx.r4.s64 = ctx.r11.s64 + 4436;
	// bl 0x82978a68
	ctx.lr = 0x8297EB74;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8297ebfc
	if (ctx.cr6.eq) goto loc_8297EBFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297EB94;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,26684
	ctx.r4.s64 = ctx.r11.s64 + 26684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297EBB0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r6,r10,26692
	ctx.r6.s64 = ctx.r10.s64 + 26692;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297EBDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,26608
	ctx.r4.s64 = ctx.r11.s64 + 26608;
loc_8297EBEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297EBF4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
loc_8297EBFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8297EC00:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_8297EC08:
	// bne cr6,0x8297ebfc
	if (!ctx.cr6.eq) goto loc_8297EBFC;
loc_8297EC0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297EC14;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,30456
	ctx.r4.s64 = ctx.r11.s64 + 30456;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297EC34;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297EC44;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,30368
	ctx.r4.s64 = ctx.r11.s64 + 30368;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297EC64;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// rlwinm r10,r9,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8297ed2c
	if (ctx.cr6.eq) goto loc_8297ED2C;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8297EC90:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8297ecbc
	goto loc_8297ECBC;
loc_8297ECA0:
	// rlwinm. r10,r9,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8297ecc4
	if (!ctx.cr0.eq) goto loc_8297ECC4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8297ECBC:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8297eca0
	if (ctx.cr6.lt) goto loc_8297ECA0;
loc_8297ECC4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8297ec90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8297EC90;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8297ECDC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x8297ecf0
	if (ctx.cr6.lt) goto loc_8297ECF0;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8297ECF0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8297ecdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8297ECDC;
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,140(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r27,136(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bne cr6,0x8297ed40
	if (!ctx.cr6.eq) goto loc_8297ED40;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x8297ed40
	if (!ctx.cr6.eq) goto loc_8297ED40;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// bne cr6,0x8297ed40
	if (!ctx.cr6.eq) goto loc_8297ED40;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bne cr6,0x8297ed40
	if (!ctx.cr6.eq) goto loc_8297ED40;
loc_8297ED2C:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x829321e0
	ctx.lr = 0x8297ED3C;
	sub_829321E0(ctx, base);
	// b 0x8297edc8
	goto loc_8297EDC8;
loc_8297ED40:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,30532
	ctx.r5.s64 = ctx.r11.s64 + 30532;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x829321e0
	ctx.lr = 0x8297ED54;
	sub_829321E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297ED5C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,26684
	ctx.r4.s64 = ctx.r11.s64 + 26684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297ED78;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297EDA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26608
	ctx.r4.s64 = ctx.r11.s64 + 26608;
	// bl 0x82978a68
	ctx.lr = 0x8297EDC0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
loc_8297EDC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r10,30516
	ctx.r4.s64 = ctx.r10.s64 + 30516;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297EDE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297ec00
	if (ctx.cr0.lt) goto loc_8297EC00;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,4436
	ctx.r4.s64 = ctx.r11.s64 + 4436;
	// b 0x8297ebec
	goto loc_8297EBEC;
loc_8297EDFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8297ec00
	goto loc_8297EC00;
loc_8297EE04:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8297ec00
	goto loc_8297EC00;
}

__attribute__((alias("__imp__sub_8297EE10"))) PPC_WEAK_FUNC(sub_8297EE10);
PPC_FUNC_IMPL(__imp__sub_8297EE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8297EE18;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// rlwinm. r11,r4,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297ef10
	if (ctx.cr0.eq) goto loc_8297EF10;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r30,r11,-16448
	ctx.r30.s64 = ctx.r11.s64 + -16448;
	// addi r5,r10,30776
	ctx.r5.s64 = ctx.r10.s64 + 30776;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8292e140
	ctx.lr = 0x8297EE5C;
	sub_8292E140(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x8297eed8
	if (!ctx.cr6.eq) goto loc_8297EED8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// rlwinm r31,r11,24,27,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// addi r5,r8,30756
	ctx.r5.s64 = ctx.r8.s64 + 30756;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r6,r10,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x8292e140
	ctx.lr = 0x8297EEA0;
	sub_8292E140(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// ble cr6,0x8297eec0
	if (!ctx.cr6.gt) goto loc_8297EEC0;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// ble cr6,0x8297ef28
	if (!ctx.cr6.gt) goto loc_8297EF28;
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// ble cr6,0x8297eec0
	if (!ctx.cr6.gt) goto loc_8297EEC0;
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 15, ctx.xer);
	// bne cr6,0x8297ef28
	if (!ctx.cr6.eq) goto loc_8297EF28;
loc_8297EEC0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,30748
	ctx.r5.s64 = ctx.r11.s64 + 30748;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82932b60
	ctx.lr = 0x8297EED4;
	sub_82932B60(ctx, base);
	// b 0x8297ef28
	goto loc_8297EF28;
loc_8297EED8:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// rlwimi r8,r31,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r5,r7,30716
	ctx.r5.s64 = ctx.r7.s64 + 30716;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r8,26,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x7C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r6,r10,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x8292e140
	ctx.lr = 0x8297EF0C;
	sub_8292E140(ctx, base);
	// b 0x8297ef28
	goto loc_8297EF28;
loc_8297EF10:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82978ce8
	ctx.lr = 0x8297EF28;
	sub_82978CE8(ctx, base);
loc_8297EF28:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297EF30"))) PPC_WEAK_FUNC(sub_8297EF30);
PPC_FUNC_IMPL(__imp__sub_8297EF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x8297EF38;
	__savegprlr_14(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r17,0
	ctx.r17.s64 = 0;
	// stw r4,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r4.u32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r8,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r8.u32);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// stw r9,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r9.u32);
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// stw r10,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r10.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// beq cr6,0x8297f010
	if (ctx.cr6.eq) goto loc_8297F010;
loc_8297EF78:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lwz r9,788(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzx r4,r30,r16
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r16.u32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// lwzx r5,r30,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r4,r4,0,8,3
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8297ee10
	ctx.lr = 0x8297EFB8;
	sub_8297EE10(ctx, base);
	// lwzx r11,r30,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r16.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bne cr6,0x8297f004
	if (!ctx.cr6.eq) goto loc_8297F004;
	// lwzx r11,r30,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r16.u32);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8297f004
	if (!ctx.cr0.eq) goto loc_8297F004;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8292e140
	ctx.lr = 0x8297EFF4;
	sub_8292E140(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829321e0
	ctx.lr = 0x8297F004;
	sub_829321E0(ctx, base);
loc_8297F004:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r15
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x8297ef78
	if (ctx.cr6.lt) goto loc_8297EF78;
loc_8297F010:
	// addi r11,r1,204
	ctx.r11.s64 = ctx.r1.s64 + 204;
	// stw r17,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r17.u32);
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r17,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r17.u32);
	// addi r22,r15,-1
	ctx.r22.s64 = ctx.r15.s64 + -1;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// stw r20,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r20.u32);
	// lis r19,228
	ctx.r19.s64 = 14942208;
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
loc_8297F034:
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8297f148
	if (ctx.cr6.eq) goto loc_8297F148;
	// addi r29,r1,200
	ctx.r29.s64 = ctx.r1.s64 + 200;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// lwzx r27,r31,r29
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// lwzx r26,r31,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// subf r28,r16,r21
	ctx.r28.s64 = ctx.r21.s64 - ctx.r16.s64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_8297F068:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8297f07c
	if (!ctx.cr6.eq) goto loc_8297F07C;
	// lwzx r11,r8,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x8297f090
	if (!ctx.cr6.eq) goto loc_8297F090;
loc_8297F07C:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x8297f120
	if (!ctx.cr6.eq) goto loc_8297F120;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297f120
	if (ctx.cr0.eq) goto loc_8297F120;
loc_8297F090:
	// cmplw cr6,r5,r15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x8297f120
	if (!ctx.cr6.lt) goto loc_8297F120;
	// subf r11,r5,r15
	ctx.r11.s64 = ctx.r15.s64 - ctx.r5.s64;
	// addi r3,r7,32
	ctx.r3.s64 = ctx.r7.s64 + 32;
	// addi r6,r8,4
	ctx.r6.s64 = ctx.r8.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8297F0A8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8297f0c0
	if (!ctx.cr6.eq) goto loc_8297F0C0;
	// lwzx r11,r4,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// lwzx r10,r28,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8297f0dc
	if (ctx.cr6.eq) goto loc_8297F0DC;
loc_8297F0C0:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x8297f114
	if (!ctx.cr6.eq) goto loc_8297F114;
	// lwzx r11,r4,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r16.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8297f114
	if (!ctx.cr0.eq) goto loc_8297F114;
loc_8297F0DC:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8297F0E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r18,0(r10)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r18,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r18.s64;
	// beq 0x8297f108
	if (ctx.cr0.eq) goto loc_8297F108;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8297f0e4
	if (ctx.cr6.eq) goto loc_8297F0E4;
loc_8297F108:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8297f114
	if (!ctx.cr0.eq) goto loc_8297F114;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_8297F114:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bdnz 0x8297f0a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8297F0A8;
loc_8297F120:
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8297f12c
	if (!ctx.cr6.gt) goto loc_8297F12C;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_8297F12C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// bne 0x8297f068
	if (!ctx.cr0.eq) goto loc_8297F068;
	// stwx r27,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r27.u32);
loc_8297F148:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x8297f034
	if (ctx.cr6.lt) goto loc_8297F034;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8297f16c
	if (!ctx.cr6.gt) goto loc_8297F16C;
	// stw r20,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r20.u32);
	// stw r17,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r17.u32);
loc_8297F16C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// addi r30,r11,26608
	ctx.r30.s64 = ctx.r11.s64 + 26608;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// beq cr6,0x8297f2b8
	if (ctx.cr6.eq) goto loc_8297F2B8;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// mtctr r15
	ctx.ctr.u64 = ctx.r15.u64;
loc_8297F188:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8297f1bc
	if (ctx.cr6.eq) goto loc_8297F1BC;
	// lis r9,3072
	ctx.r9.s64 = 201326592;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8297f1bc
	if (ctx.cr6.eq) goto loc_8297F1BC;
	// lis r9,2816
	ctx.r9.s64 = 184549376;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8297f1c0
	if (!ctx.cr6.eq) goto loc_8297F1C0;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// b 0x8297f1c0
	goto loc_8297F1C0;
loc_8297F1BC:
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_8297F1C0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8297f188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8297F188;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r31,r11,26936
	ctx.r31.s64 = ctx.r11.s64 + 26936;
	// beq cr6,0x8297f244
	if (ctx.cr6.eq) goto loc_8297F244;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297F1E0;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297f9b0
	if (ctx.cr0.lt) goto loc_8297F9B0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r4,r11,26864
	ctx.r4.s64 = ctx.r11.s64 + 26864;
	// bl 0x82978a68
	ctx.lr = 0x8297F1F8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297f9b0
	if (ctx.cr0.lt) goto loc_8297F9B0;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297F228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297f9b0
	if (ctx.cr0.lt) goto loc_8297F9B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297F23C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297f9b0
	if (ctx.cr0.lt) goto loc_8297F9B0;
loc_8297F244:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8297f2b8
	if (ctx.cr6.eq) goto loc_8297F2B8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297F254;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297f9b0
	if (ctx.cr0.lt) goto loc_8297F9B0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r4,r11,26904
	ctx.r4.s64 = ctx.r11.s64 + 26904;
	// bl 0x82978a68
	ctx.lr = 0x8297F26C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297f9b0
	if (ctx.cr0.lt) goto loc_8297F9B0;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297F29C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297f9b0
	if (ctx.cr0.lt) goto loc_8297F9B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297F2B0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297f9b0
	if (ctx.cr0.lt) goto loc_8297F9B0;
loc_8297F2B8:
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stw r17,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r17.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r17,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r17.u32);
	// addi r27,r1,192
	ctx.r27.s64 = ctx.r1.s64 + 192;
	// stw r20,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r20.u32);
	// stw r26,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r26.u32);
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// stw r17,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r17.u32);
loc_8297F2DC:
	// addi r11,r1,244
	ctx.r11.s64 = ctx.r1.s64 + 244;
	// stw r17,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r17.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// stw r17,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r17.u32);
	// beq cr6,0x8297f3f0
	if (ctx.cr6.eq) goto loc_8297F3F0;
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// subf r29,r16,r21
	ctx.r29.s64 = ctx.r21.s64 - ctx.r16.s64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_8297F310:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8297f324
	if (!ctx.cr6.eq) goto loc_8297F324;
	// lwzx r11,r7,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x8297f338
	if (!ctx.cr6.eq) goto loc_8297F338;
loc_8297F324:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8297f3d8
	if (!ctx.cr6.eq) goto loc_8297F3D8;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297f3d8
	if (ctx.cr0.eq) goto loc_8297F3D8;
loc_8297F338:
	// cmplw cr6,r4,r15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x8297f3d8
	if (!ctx.cr6.lt) goto loc_8297F3D8;
	// subf r11,r4,r15
	ctx.r11.s64 = ctx.r15.s64 - ctx.r4.s64;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r3,r6,32
	ctx.r3.s64 = ctx.r6.s64 + 32;
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// subf r31,r16,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r16.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8297F358:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8297f370
	if (!ctx.cr6.eq) goto loc_8297F370;
	// lwzx r11,r5,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// lwzx r10,r9,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8297f38c
	if (ctx.cr6.eq) goto loc_8297F38C;
loc_8297F370:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8297f3cc
	if (!ctx.cr6.eq) goto loc_8297F3CC;
	// lwzx r11,r5,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r16.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8297f3cc
	if (!ctx.cr0.eq) goto loc_8297F3CC;
loc_8297F38C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8297F394:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r25,0(r10)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r25,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r25.s64;
	// beq 0x8297f3b8
	if (ctx.cr0.eq) goto loc_8297F3B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8297f394
	if (ctx.cr6.eq) goto loc_8297F394;
loc_8297F3B8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8297f3cc
	if (!ctx.cr0.eq) goto loc_8297F3CC;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stwx r20,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r20.u32);
	// stwx r20,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r20.u32);
loc_8297F3CC:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8297f358
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8297F358;
loc_8297F3D8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// bne 0x8297f310
	if (!ctx.cr0.eq) goto loc_8297F310;
loc_8297F3F0:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8297f460
	if (ctx.cr6.eq) goto loc_8297F460;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// mtctr r15
	ctx.ctr.u64 = ctx.r15.u64;
	// subf r6,r16,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r16.s64;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// subf r8,r16,r21
	ctx.r8.s64 = ctx.r21.s64 - ctx.r16.s64;
	// subf r10,r16,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r16.s64;
loc_8297F418:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8297f42c
	if (!ctx.cr6.eq) goto loc_8297F42C;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x8297f440
	if (!ctx.cr6.eq) goto loc_8297F440;
loc_8297F42C:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8297f458
	if (!ctx.cr6.eq) goto loc_8297F458;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8297f458
	if (ctx.cr0.eq) goto loc_8297F458;
loc_8297F440:
	// lwzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8297f458
	if (!ctx.cr6.eq) goto loc_8297F458;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8297F458:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8297f418
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8297F418;
loc_8297F460:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x8297f2dc
	if (!ctx.cr0.eq) goto loc_8297F2DC;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8297f4e4
	if (ctx.cr6.eq) goto loc_8297F4E4;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8297F480:
	// cmplw cr6,r4,r15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x8297f4d4
	if (!ctx.cr6.lt) goto loc_8297F4D4;
	// subf r9,r4,r15
	ctx.r9.s64 = ctx.r15.s64 - ctx.r4.s64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8297F494:
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwzx r7,r11,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r8,r10,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8297f4cc
	if (!ctx.cr6.lt) goto loc_8297F4CC;
	// stwx r8,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stwx r7,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r7,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// stwx r6,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
loc_8297F4CC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8297f494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8297F494;
loc_8297F4D4:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8297f480
	if (!ctx.cr0.eq) goto loc_8297F480;
loc_8297F4E4:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8297f4fc
	if (ctx.cr6.eq) goto loc_8297F4FC;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r5,r15,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa7c48
	ctx.lr = 0x8297F4FC;
	sub_82FA7C48(ctx, base);
loc_8297F4FC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r18,r1,192
	ctx.r18.s64 = ctx.r1.s64 + 192;
	// addi r19,r11,26896
	ctx.r19.s64 = ctx.r11.s64 + 26896;
	// addi r22,r10,26856
	ctx.r22.s64 = ctx.r10.s64 + 26856;
	// addi r23,r9,26684
	ctx.r23.s64 = ctx.r9.s64 + 26684;
	// addi r21,r8,30796
	ctx.r21.s64 = ctx.r8.s64 + 30796;
	// addi r20,r7,30784
	ctx.r20.s64 = ctx.r7.s64 + 30784;
loc_8297F528:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8297f93c
	if (ctx.cr6.eq) goto loc_8297F93C;
	// lwz r24,0(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r26,r1,208
	ctx.r26.s64 = ctx.r1.s64 + 208;
loc_8297F53C:
	// lwz r29,732(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8297f560
	if (!ctx.cr6.eq) goto loc_8297F560;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8297f57c
	if (ctx.cr6.eq) goto loc_8297F57C;
loc_8297F560:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x8297f59c
	if (!ctx.cr6.eq) goto loc_8297F59C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r16
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r16.u32);
	// rlwinm. r10,r10,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8297f59c
	if (!ctx.cr0.eq) goto loc_8297F59C;
loc_8297F57C:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x829321e0
	ctx.lr = 0x8297F598;
	sub_829321E0(ctx, base);
	// b 0x8297f8e4
	goto loc_8297F8E4;
loc_8297F59C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8297f6ac
	if (ctx.cr6.eq) goto loc_8297F6AC;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
loc_8297F5AC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8297f5d4
	if (!ctx.cr6.eq) goto loc_8297F5D4;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwzx r8,r8,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8297f600
	if (ctx.cr6.eq) goto loc_8297F600;
loc_8297F5D4:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x8297f644
	if (!ctx.cr6.eq) goto loc_8297F644;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r16
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r16.u32);
	// lwzx r8,r8,r16
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r16.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// rlwinm. r9,r9,0,4,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8297f644
	if (!ctx.cr0.eq) goto loc_8297F644;
loc_8297F600:
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_8297F618:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// beq 0x8297f63c
	if (ctx.cr0.eq) goto loc_8297F63C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8297f618
	if (ctx.cr6.eq) goto loc_8297F618;
loc_8297F63C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8297f658
	if (ctx.cr0.eq) goto loc_8297F658;
loc_8297F644:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8297f5ac
	if (ctx.cr6.lt) goto loc_8297F5AC;
	// b 0x8297f6a4
	goto loc_8297F6A4;
loc_8297F658:
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x829321e0
	ctx.lr = 0x8297F680;
	sub_829321E0(ctx, base);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stwx r8,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8297F6A4:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8297f8e4
	if (ctx.cr6.lt) goto loc_8297F8E4;
loc_8297F6AC:
	// cmplwi cr6,r17,1
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 1, ctx.xer);
	// beq cr6,0x8297f788
	if (ctx.cr6.eq) goto loc_8297F788;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x8297f6d4
	if (!ctx.cr6.eq) goto loc_8297F6D4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8297f788
	if (ctx.cr6.eq) goto loc_8297F788;
loc_8297F6D4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8297f6f0
	if (!ctx.cr6.eq) goto loc_8297F6F0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297f788
	if (ctx.cr0.eq) goto loc_8297F788;
loc_8297F6F0:
	// li r27,0
	ctx.r27.s64 = 0;
loc_8297F6F4:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r16
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r9,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bne cr6,0x8297f724
	if (!ctx.cr6.eq) goto loc_8297F724;
	// lwzx r11,r11,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8297f728
	if (ctx.cr0.eq) goto loc_8297F728;
loc_8297F724:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_8297F728:
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// rlwinm r30,r31,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8292e140
	ctx.lr = 0x8297F744;
	sub_8292E140(ctx, base);
loc_8297F744:
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bne cr6,0x8297f7b8
	if (!ctx.cr6.eq) goto loc_8297F7B8;
	// lwzx r11,r28,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8297f7b8
	if (!ctx.cr0.eq) goto loc_8297F7B8;
	// lwz r11,700(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297f780
	if (ctx.cr6.eq) goto loc_8297F780;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8297f7b8
	if (!ctx.cr6.eq) goto loc_8297F7B8;
loc_8297F780:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x8297f7bc
	goto loc_8297F7BC;
loc_8297F788:
	// lwz r5,700(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8297f6f4
	if (ctx.cr6.eq) goto loc_8297F6F4;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r30,r31,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829321e0
	ctx.lr = 0x8297F7B4;
	sub_829321E0(ctx, base);
	// b 0x8297f744
	goto loc_8297F744;
loc_8297F7B8:
	// lwz r27,1816(r14)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r14.u32 + 1816);
loc_8297F7BC:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8297f8e4
	if (ctx.cr6.eq) goto loc_8297F8E4;
loc_8297F7C8:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297F7D0;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297f9b0
	if (ctx.cr0.lt) goto loc_8297F9B0;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8292e140
	ctx.lr = 0x8297F7F4;
	sub_8292E140(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8292e140
	ctx.lr = 0x8297F80C;
	sub_8292E140(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297F81C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297f9b0
	if (ctx.cr0.lt) goto loc_8297F9B0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8297f868
	if (!ctx.cr6.eq) goto loc_8297F868;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r10,732(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// lwzx r10,r28,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// rlwinm r8,r10,10,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3;
	// rlwinm r7,r10,12,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// rlwinm r6,r10,14,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r5,r10,16,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3;
	// bctrl 
	ctx.lr = 0x8297F85C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297f9b0
	if (ctx.cr0.lt) goto loc_8297F9B0;
	// b 0x8297f8c4
	goto loc_8297F8C4;
loc_8297F868:
	// lwzx r11,r28,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8297f888
	if (!ctx.cr6.eq) goto loc_8297F888;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r11,468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// b 0x8297f8a8
	goto loc_8297F8A8;
loc_8297F888:
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// bne cr6,0x8297f8a4
	if (!ctx.cr6.eq) goto loc_8297F8A4;
	// lwz r11,456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// b 0x8297f8ac
	goto loc_8297F8AC;
loc_8297F8A4:
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
loc_8297F8A8:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_8297F8AC:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bctrl 
	ctx.lr = 0x8297F8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8297f9b0
	if (ctx.cr6.lt) goto loc_8297F9B0;
loc_8297F8C4:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x82978a68
	ctx.lr = 0x8297F8D0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297f9b0
	if (ctx.cr0.lt) goto loc_8297F9B0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8297f7c8
	if (ctx.cr6.lt) goto loc_8297F7C8;
loc_8297F8E4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r25,r15
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x8297f53c
	if (ctx.cr6.lt) goto loc_8297F53C;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_8297F8FC:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x829321e0
	ctx.lr = 0x8297F924;
	sub_829321E0(ctx, base);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne 0x8297f8fc
	if (!ctx.cr0.eq) goto loc_8297F8FC;
loc_8297F93C:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// cmplwi cr6,r17,2
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 2, ctx.xer);
	// blt cr6,0x8297f528
	if (ctx.cr6.lt) goto loc_8297F528;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r4,748(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8297f96c
	if (ctx.cr6.gt) goto loc_8297F96C;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lwz r3,740(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// bl 0x829321e0
	ctx.lr = 0x8297F96C;
	sub_829321E0(ctx, base);
loc_8297F96C:
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 1, ctx.xer);
	// ble cr6,0x8297f98c
	if (!ctx.cr6.gt) goto loc_8297F98C;
	// lwz r4,764(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 764);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8297f98c
	if (ctx.cr6.gt) goto loc_8297F98C;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lwz r3,756(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// bl 0x829321e0
	ctx.lr = 0x8297F98C;
	sub_829321E0(ctx, base);
loc_8297F98C:
	// cmplwi cr6,r15,2
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 2, ctx.xer);
	// ble cr6,0x8297f9ac
	if (!ctx.cr6.gt) goto loc_8297F9AC;
	// lwz r4,780(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x8297f9ac
	if (ctx.cr6.gt) goto loc_8297F9AC;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// lwz r3,772(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// bl 0x829321e0
	ctx.lr = 0x8297F9AC;
	sub_829321E0(ctx, base);
loc_8297F9AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8297F9B0:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297F9B8"))) PPC_WEAK_FUNC(sub_8297F9B8);
PPC_FUNC_IMPL(__imp__sub_8297F9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x8297F9C0;
	__savegprlr_21(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297F9D8;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26620
	ctx.r4.s64 = ctx.r11.s64 + 26620;
	// bl 0x82978a68
	ctx.lr = 0x8297F9F0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,26612
	ctx.r4.s64 = ctx.r10.s64 + 26612;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297FA24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r24,r11,26608
	ctx.r24.s64 = ctx.r11.s64 + 26608;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297FA40;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// clrlwi r30,r11,12
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x8297FA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lis r6,15
	ctx.r6.s64 = 983040;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297FAB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,180
	ctx.r6.s64 = ctx.r1.s64 + 180;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x8297FAF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,196
	ctx.r7.s64 = ctx.r1.s64 + 196;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lis r6,15
	ctx.r6.s64 = 983040;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,332(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8297FB28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8297ef30
	ctx.lr = 0x8297FB74;
	sub_8297EF30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r25,r11,26660
	ctx.r25.s64 = ctx.r11.s64 + 26660;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x829321e0
	ctx.lr = 0x8297FB94;
	sub_829321E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r10,0,0,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// bctrl 
	ctx.lr = 0x8297FBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r28,r8,26692
	ctx.r28.s64 = ctx.r8.s64 + 26692;
	// addi r27,r9,26684
	ctx.r27.s64 = ctx.r9.s64 + 26684;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r10,26672
	ctx.r29.s64 = ctx.r10.s64 + 26672;
	// beq cr6,0x8297fc74
	if (ctx.cr6.eq) goto loc_8297FC74;
loc_8297FBF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297FBF8;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8292e140
	ctx.lr = 0x8297FC14;
	sub_8292E140(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297FC24;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297FC48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297FC5C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297fbf0
	if (ctx.cr6.lt) goto loc_8297FBF0;
loc_8297FC74:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8297fd28
	if (ctx.cr6.eq) goto loc_8297FD28;
loc_8297FC80:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297FC94;
	sub_8292E140(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8292e140
	ctx.lr = 0x8297FCA8;
	sub_8292E140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297FCB0;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297FCC8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8297fcf0
	if (ctx.cr6.eq) goto loc_8297FCF0;
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// b 0x8297fcf4
	goto loc_8297FCF4;
loc_8297FCF0:
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
loc_8297FCF4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297FCFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297FD10;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297fc80
	if (ctx.cr6.lt) goto loc_8297FC80;
loc_8297FD28:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8297fd50
	if (ctx.cr6.eq) goto loc_8297FD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297FD48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
loc_8297FD50:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8297fdf4
	if (!ctx.cr6.gt) goto loc_8297FDF4;
loc_8297FD60:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x8297FD74;
	sub_8292E140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x8297FD7C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297FD94;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8297fdbc
	if (ctx.cr6.eq) goto loc_8297FDBC;
	// lwz r11,456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// b 0x8297fdc0
	goto loc_8297FDC0;
loc_8297FDBC:
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
loc_8297FDC0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297FDC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x8297FDDC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8297fdf8
	if (ctx.cr0.lt) goto loc_8297FDF8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8297fd60
	if (ctx.cr6.lt) goto loc_8297FD60;
loc_8297FDF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8297FDF8:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8297FE00"))) PPC_WEAK_FUNC(sub_8297FE00);
PPC_FUNC_IMPL(__imp__sub_8297FE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8297FE08;
	__savegprlr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// clrlwi r29,r11,12
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x8297FE4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829801e0
	if (ctx.cr0.lt) goto loc_829801E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297FE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829801e0
	if (ctx.cr0.lt) goto loc_829801E0;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lis r26,4336
	ctx.r26.s64 = 284164096;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8297ffc4
	if (ctx.cr6.eq) goto loc_8297FFC4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x8297FED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829801e0
	if (ctx.cr0.lt) goto loc_829801E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8297FF00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829801e0
	if (ctx.cr0.lt) goto loc_829801E0;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x8297FF40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829801e0
	if (ctx.cr0.lt) goto loc_829801E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,332(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8297FF74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829801e0
	if (ctx.cr0.lt) goto loc_829801E0;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8297ef30
	ctx.lr = 0x8297FFBC;
	sub_8297EF30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829801e0
	if (ctx.cr0.lt) goto loc_829801E0;
loc_8297FFC4:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r30,15
	ctx.r30.s64 = 983040;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8297fff0
	if (ctx.cr6.eq) goto loc_8297FFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978de0
	ctx.lr = 0x8297FFDC;
	sub_82978DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829801e0
	if (ctx.cr0.lt) goto loc_829801E0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82980000
	if (!ctx.cr6.eq) goto loc_82980000;
loc_8297FFF0:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82980004
	if (!ctx.cr6.gt) goto loc_82980004;
loc_82980000:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82980004:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x829800e0
	if (!ctx.cr6.eq) goto loc_829800E0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8298014c
	if (!ctx.cr6.gt) goto loc_8298014C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r29,r11,26684
	ctx.r29.s64 = ctx.r11.s64 + 26684;
	// addi r28,r10,26660
	ctx.r28.s64 = ctx.r10.s64 + 26660;
loc_82980038:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82980040;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829801e0
	if (ctx.cr0.lt) goto loc_829801E0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82980068
	if (ctx.cr6.eq) goto loc_82980068;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8292e140
	ctx.lr = 0x82980064;
	sub_8292E140(ctx, base);
	// b 0x82980098
	goto loc_82980098;
loc_82980068:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978ce8
	ctx.lr = 0x82980080;
	sub_82978CE8(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8292e140
	ctx.lr = 0x82980098;
	sub_8292E140(ctx, base);
loc_82980098:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x829800A8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829801e0
	if (ctx.cr0.lt) goto loc_829801E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829800C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829801e0
	if (ctx.cr0.lt) goto loc_829801E0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82980038
	if (ctx.cr6.lt) goto loc_82980038;
	// b 0x8298014c
	goto loc_8298014C;
loc_829800E0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82980100
	if (ctx.cr6.eq) goto loc_82980100;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,26660
	ctx.r5.s64 = ctx.r11.s64 + 26660;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x829321e0
	ctx.lr = 0x829800FC;
	sub_829321E0(ctx, base);
	// b 0x82980118
	goto loc_82980118;
loc_82980100:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978ce8
	ctx.lr = 0x82980118;
	sub_82978CE8(ctx, base);
loc_82980118:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r10,0,0,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82980144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829801e0
	if (ctx.cr0.lt) goto loc_829801E0;
loc_8298014C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x829801c0
	if (ctx.cr6.eq) goto loc_829801C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978e88
	ctx.lr = 0x8298015C;
	sub_82978E88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829801e0
	if (ctx.cr0.lt) goto loc_829801E0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978ce8
	ctx.lr = 0x8298017C;
	sub_82978CE8(ctx, base);
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r6,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x829791c8
	ctx.lr = 0x8298019C;
	sub_829791C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829801e0
	if (ctx.cr0.lt) goto loc_829801E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82979300
	ctx.lr = 0x829801B8;
	sub_82979300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829801e0
	if (ctx.cr0.lt) goto loc_829801E0;
loc_829801C0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4436
	ctx.r4.s64 = ctx.r11.s64 + 4436;
	// bl 0x82978a68
	ctx.lr = 0x829801D0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829801e0
	if (ctx.cr0.lt) goto loc_829801E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82995fb8
	ctx.lr = 0x829801E0;
	sub_82995FB8(ctx, base);
loc_829801E0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829801E8"))) PPC_WEAK_FUNC(sub_829801E8);
PPC_FUNC_IMPL(__imp__sub_829801E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82978b40
	ctx.lr = 0x82980208;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82980318
	if (ctx.cr0.lt) goto loc_82980318;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82980244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82980318
	if (ctx.cr0.lt) goto loc_82980318;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,64
	ctx.r7.s64 = 64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8297ee10
	ctx.lr = 0x82980268;
	sub_8297EE10(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x82980280;
	sub_8292E140(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82980294
	if (ctx.cr6.eq) goto loc_82980294;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r11,30832
	ctx.r6.s64 = ctx.r11.s64 + 30832;
	// b 0x8298029c
	goto loc_8298029C;
loc_82980294:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r11,30828
	ctx.r6.s64 = ctx.r11.s64 + 30828;
loc_8298029C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,30812
	ctx.r4.s64 = ctx.r11.s64 + 30812;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x829802B0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82980318
	if (ctx.cr0.lt) goto loc_82980318;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x829802C0;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82980318
	if (ctx.cr0.lt) goto loc_82980318;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26808
	ctx.r4.s64 = ctx.r11.s64 + 26808;
	// bl 0x82978a68
	ctx.lr = 0x829802D8;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82980318
	if (ctx.cr0.lt) goto loc_82980318;
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,420
	ctx.r11.s64 = ctx.r11.s64 + 420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// lwz r10,1808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r10.u32);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82996798
	ctx.lr = 0x82980318;
	sub_82996798(ctx, base);
loc_82980318:
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

__attribute__((alias("__imp__sub_82980330"))) PPC_WEAK_FUNC(sub_82980330);
PPC_FUNC_IMPL(__imp__sub_82980330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82980338;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82980354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829805b8
	if (ctx.cr0.lt) goto loc_829805B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82980370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829805b8
	if (ctx.cr0.lt) goto loc_829805B8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8298039c
	if (ctx.cr6.eq) goto loc_8298039C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82980394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829805b8
	if (ctx.cr0.lt) goto loc_829805B8;
loc_8298039C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,26692
	ctx.r30.s64 = ctx.r11.s64 + 26692;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829803BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829805b8
	if (ctx.cr0.lt) goto loc_829805B8;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x829803F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829805b8
	if (ctx.cr0.lt) goto loc_829805B8;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,64
	ctx.r7.s64 = 64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8297ee10
	ctx.lr = 0x8298041C;
	sub_8297EE10(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292e140
	ctx.lr = 0x82980434;
	sub_8292E140(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,25676
	ctx.r4.s64 = ctx.r11.s64 + 25676;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82980454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829805b8
	if (ctx.cr0.lt) goto loc_829805B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82980464;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829805b8
	if (ctx.cr0.lt) goto loc_829805B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,30916
	ctx.r4.s64 = ctx.r11.s64 + 30916;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82980480;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829805b8
	if (ctx.cr0.lt) goto loc_829805B8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82980594
	if (ctx.cr6.eq) goto loc_82980594;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,30900
	ctx.r4.s64 = ctx.r11.s64 + 30900;
	// bl 0x82978a68
	ctx.lr = 0x829804A4;
	sub_82978A68(ctx, base);
loc_829804A4:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829805b8
	if (ctx.cr0.lt) goto loc_829805B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,30876
	ctx.r4.s64 = ctx.r11.s64 + 30876;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x829804C0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829805b8
	if (ctx.cr0.lt) goto loc_829805B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829804DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829805b8
	if (ctx.cr0.lt) goto loc_829805B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,30856
	ctx.r4.s64 = ctx.r11.s64 + 30856;
	// bl 0x82978a68
	ctx.lr = 0x829804F4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829805b8
	if (ctx.cr0.lt) goto loc_829805B8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x829805a4
	if (ctx.cr6.eq) goto loc_829805A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,30836
	ctx.r4.s64 = ctx.r11.s64 + 30836;
	// bl 0x82978a68
	ctx.lr = 0x82980518;
	sub_82978A68(ctx, base);
loc_82980518:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829805b8
	if (ctx.cr0.lt) goto loc_829805B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82980528;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829805b8
	if (ctx.cr0.lt) goto loc_829805B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26808
	ctx.r4.s64 = ctx.r11.s64 + 26808;
	// bl 0x82978a68
	ctx.lr = 0x82980540;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829805b8
	if (ctx.cr0.lt) goto loc_829805B8;
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r11,420
	ctx.r11.s64 = ctx.r11.s64 + 420;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r10,1544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r11.u32);
	// stw r10,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r10.u32);
	// beq cr6,0x829805b4
	if (ctx.cr6.eq) goto loc_829805B4;
	// bl 0x82997820
	ctx.lr = 0x82980590;
	sub_82997820(ctx, base);
	// b 0x829805b8
	goto loc_829805B8;
loc_82980594:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,24100
	ctx.r4.s64 = ctx.r11.s64 + 24100;
	// bl 0x82978a68
	ctx.lr = 0x829805A0;
	sub_82978A68(ctx, base);
	// b 0x829804a4
	goto loc_829804A4;
loc_829805A4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,26812
	ctx.r4.s64 = ctx.r11.s64 + 26812;
	// bl 0x82978a68
	ctx.lr = 0x829805B0;
	sub_82978A68(ctx, base);
	// b 0x82980518
	goto loc_82980518;
loc_829805B4:
	// bl 0x82997750
	ctx.lr = 0x829805B8;
	sub_82997750(ctx, base);
loc_829805B8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829805C0"))) PPC_WEAK_FUNC(sub_829805C0);
PPC_FUNC_IMPL(__imp__sub_829805C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x829805C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x829805ec
	if (ctx.cr6.eq) goto loc_829805EC;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// b 0x829805f0
	goto loc_829805F0;
loc_829805EC:
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
loc_829805F0:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82980624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829809dc
	if (ctx.cr0.lt) goto loc_829809DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82980654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829809dc
	if (ctx.cr0.lt) goto loc_829809DC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r25,15
	ctx.r25.s64 = 983040;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8298068c
	if (!ctx.cr6.eq) goto loc_8298068C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8298068c
	if (!ctx.cr6.eq) goto loc_8298068C;
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82980690
	if (!ctx.cr6.gt) goto loc_82980690;
loc_8298068C:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82980690:
	// rlwinm r10,r4,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r24,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r24.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x829806dc
	if (ctx.cr6.eq) goto loc_829806DC;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978de0
	ctx.lr = 0x829806B0;
	sub_82978DE0(ctx, base);
loc_829806B0:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829809dc
	if (ctx.cr0.lt) goto loc_829809DC;
loc_829806B8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82980708
	if (ctx.cr6.eq) goto loc_82980708;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,26660
	ctx.r5.s64 = ctx.r11.s64 + 26660;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x829321e0
	ctx.lr = 0x829806D4;
	sub_829321E0(ctx, base);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x82980724
	goto loc_82980724;
loc_829806DC:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x829806f4
	if (!ctx.cr6.gt) goto loc_829806F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978e88
	ctx.lr = 0x829806F0;
	sub_82978E88(ctx, base);
	// b 0x829806b0
	goto loc_829806B0;
loc_829806F4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x829806b8
	if (ctx.cr6.eq) goto loc_829806B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978f48
	ctx.lr = 0x82980704;
	sub_82978F48(ctx, base);
	// b 0x829806b0
	goto loc_829806B0;
loc_82980708:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978ce8
	ctx.lr = 0x82980720;
	sub_82978CE8(ctx, base);
	// addi r28,r1,224
	ctx.r28.s64 = ctx.r1.s64 + 224;
loc_82980724:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x8298075C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829809dc
	if (ctx.cr0.lt) goto loc_829809DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,140
	ctx.r7.s64 = ctx.r1.s64 + 140;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,332(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82980790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829809dc
	if (ctx.cr0.lt) goto loc_829809DC;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8297ef30
	ctx.lr = 0x829807D0;
	sub_8297EF30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829809dc
	if (ctx.cr0.lt) goto loc_829809DC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82980928
	if (ctx.cr6.eq) goto loc_82980928;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978ce8
	ctx.lr = 0x829807F8;
	sub_82978CE8(ctx, base);
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82980820
	if (!ctx.cr6.gt) goto loc_82980820;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8298086c
	if (ctx.cr6.eq) goto loc_8298086C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978e88
	ctx.lr = 0x82980818;
	sub_82978E88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829809dc
	if (ctx.cr0.lt) goto loc_829809DC;
loc_82980820:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8298086c
	if (ctx.cr6.eq) goto loc_8298086C;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82980848
	if (!ctx.cr6.eq) goto loc_82980848;
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8298084c
	if (!ctx.cr6.gt) goto loc_8298084C;
loc_82980848:
	// li r6,1
	ctx.r6.s64 = 1;
loc_8298084C:
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829791c8
	ctx.lr = 0x82980860;
	sub_829791C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829809dc
	if (ctx.cr0.lt) goto loc_829809DC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_8298086C:
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x829808a8
	if (!ctx.cr6.gt) goto loc_829808A8;
	// subf r11,r11,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r11.s64;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x82979300
	ctx.lr = 0x8298089C;
	sub_82979300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829809dc
	if (ctx.cr0.lt) goto loc_829809DC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_829808A8:
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x829809c4
	if (ctx.cr6.eq) goto loc_829809C4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x829808ec
	if (ctx.cr6.eq) goto loc_829808EC;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x829808d0
	if (!ctx.cr6.eq) goto loc_829808D0;
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x829808ec
	if (!ctx.cr6.gt) goto loc_829808EC;
loc_829808D0:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978f48
	ctx.lr = 0x829808DC;
	sub_82978F48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829809dc
	if (ctx.cr0.lt) goto loc_829809DC;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_829808EC:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82980908
	if (!ctx.cr6.eq) goto loc_82980908;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82980908
	if (!ctx.cr6.eq) goto loc_82980908;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
loc_82980908:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82979048
	ctx.lr = 0x8298091C;
	sub_82979048(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x829809c4
	if (!ctx.cr0.lt) goto loc_829809C4;
	// b 0x829809dc
	goto loc_829809DC;
loc_82980928:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829809c4
	if (!ctx.cr6.eq) goto loc_829809C4;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829809c4
	if (!ctx.cr0.eq) goto loc_829809C4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x829809c4
	if (!ctx.cr6.gt) goto loc_829809C4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,30944
	ctx.r29.s64 = ctx.r11.s64 + 30944;
loc_82980958:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82980960;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829809dc
	if (ctx.cr0.lt) goto loc_829809DC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8292e140
	ctx.lr = 0x82980980;
	sub_8292E140(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8292e140
	ctx.lr = 0x82980998;
	sub_8292E140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x829809AC;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829809dc
	if (ctx.cr0.lt) goto loc_829809DC;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82980958
	if (ctx.cr6.lt) goto loc_82980958;
loc_829809C4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4436
	ctx.r4.s64 = ctx.r11.s64 + 4436;
	// bl 0x82978a68
	ctx.lr = 0x829809D4;
	sub_82978A68(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_829809DC:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829809E4"))) PPC_WEAK_FUNC(sub_829809E4);
PPC_FUNC_IMPL(__imp__sub_829809E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829809E8"))) PPC_WEAK_FUNC(sub_829809E8);
PPC_FUNC_IMPL(__imp__sub_829809E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x829809F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// addi r7,r1,188
	ctx.r7.s64 = ctx.r1.s64 + 188;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82980A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82980A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r29,15
	ctx.r29.s64 = 983040;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82980a94
	if (!ctx.cr6.eq) goto loc_82980A94;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82980a94
	if (!ctx.cr6.eq) goto loc_82980A94;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82980a98
	if (!ctx.cr6.gt) goto loc_82980A98;
loc_82980A94:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82980A98:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978ce8
	ctx.lr = 0x82980AB0;
	sub_82978CE8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r23,38
	ctx.r23.s64 = 38;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r25,r11,26608
	ctx.r25.s64 = ctx.r11.s64 + 26608;
	// addi r26,r10,26684
	ctx.r26.s64 = ctx.r10.s64 + 26684;
	// addi r27,r9,26884
	ctx.r27.s64 = ctx.r9.s64 + 26884;
	// beq cr6,0x82980b80
	if (ctx.cr6.eq) goto loc_82980B80;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82980b80
	if (!ctx.cr6.gt) goto loc_82980B80;
loc_82980AE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82980AEC;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,209
	ctx.r3.s64 = ctx.r1.s64 + 209;
	// bl 0x8292e140
	ctx.lr = 0x82980B0C;
	sub_8292E140(ctx, base);
	// stb r23,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r23.u8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8292e140
	ctx.lr = 0x82980B24;
	sub_8292E140(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82980B34;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82980B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82980B68;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82980ae4
	if (ctx.cr6.lt) goto loc_82980AE4;
loc_82980B80:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82980BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r5,r9,12
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82980BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8297ef30
	ctx.lr = 0x82980C28;
	sub_8297EF30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82980c4c
	if (ctx.cr6.eq) goto loc_82980C4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978de0
	ctx.lr = 0x82980C44;
	sub_82978DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
loc_82980C4C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r29,r11,26660
	ctx.r29.s64 = ctx.r11.s64 + 26660;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82980cfc
	if (ctx.cr6.eq) goto loc_82980CFC;
loc_82980C64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82980C6C;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8292e140
	ctx.lr = 0x82980C8C;
	sub_8292E140(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8292e140
	ctx.lr = 0x82980CA0;
	sub_8292E140(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82980CB0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82980CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82980CE4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82980c64
	if (ctx.cr6.lt) goto loc_82980C64;
loc_82980CFC:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82980d8c
	if (ctx.cr6.eq) goto loc_82980D8C;
loc_82980D08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82980D10;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8292e140
	ctx.lr = 0x82980D2C;
	sub_8292E140(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82980D3C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82980D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82980D74;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82980d08
	if (ctx.cr6.lt) goto loc_82980D08;
loc_82980D8C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82980ee0
	if (ctx.cr6.eq) goto loc_82980EE0;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82980e30
	if (ctx.cr6.eq) goto loc_82980E30;
loc_82980DA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82980DA8;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8292e140
	ctx.lr = 0x82980DC4;
	sub_8292E140(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82980DD4;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82980df8
	if (!ctx.cr0.eq) goto loc_82980DF8;
	// lwz r11,428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// b 0x82980dfc
	goto loc_82980DFC;
loc_82980DF8:
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
loc_82980DFC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82980E04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8298100c
	if (ctx.cr6.lt) goto loc_8298100C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82980E18;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82980da0
	if (ctx.cr6.lt) goto loc_82980DA0;
loc_82980E30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978e88
	ctx.lr = 0x82980E38;
	sub_82978E88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x829321e0
	ctx.lr = 0x82980E50;
	sub_829321E0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829791c8
	ctx.lr = 0x82980E68;
	sub_829791C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82979300
	ctx.lr = 0x82980E84;
	sub_82979300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82980ee0
	if (ctx.cr6.eq) goto loc_82980EE0;
	// rlwinm r11,r5,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF0000;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82980ec0
	if (ctx.cr0.eq) goto loc_82980EC0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978f48
	ctx.lr = 0x82980EB4;
	sub_82978F48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82980EC0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82979048
	ctx.lr = 0x82980ED8;
	sub_82979048(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
loc_82980EE0:
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82980f74
	if (ctx.cr6.eq) goto loc_82980F74;
loc_82980EF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82980EF8;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8292e140
	ctx.lr = 0x82980F14;
	sub_8292E140(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82980F24;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82980F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82980F5C;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82980ef0
	if (ctx.cr6.lt) goto loc_82980EF0;
loc_82980F74:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82981008
	if (ctx.cr6.eq) goto loc_82981008;
loc_82980F80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978b40
	ctx.lr = 0x82980F88;
	sub_82978B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,209
	ctx.r3.s64 = ctx.r1.s64 + 209;
	// bl 0x8292e140
	ctx.lr = 0x82980FA8;
	sub_8292E140(ctx, base);
	// stb r23,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r23.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8292e140
	ctx.lr = 0x82980FC0;
	sub_8292E140(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82980FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978a68
	ctx.lr = 0x82980FF0;
	sub_82978A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298100c
	if (ctx.cr0.lt) goto loc_8298100C;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82980f80
	if (ctx.cr6.lt) goto loc_82980F80;
loc_82981008:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8298100C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82981014"))) PPC_WEAK_FUNC(sub_82981014);
PPC_FUNC_IMPL(__imp__sub_82981014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82981018"))) PPC_WEAK_FUNC(sub_82981018);
PPC_FUNC_IMPL(__imp__sub_82981018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82981020;
	__savegprlr_19(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// addi r7,r1,216
	ctx.r7.s64 = ctx.r1.s64 + 216;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bctrl 
	ctx.lr = 0x82981080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298146c
	if (ctx.cr0.lt) goto loc_8298146C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,196
	ctx.r6.s64 = ctx.r1.s64 + 196;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r7,216(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829810AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298146c
	if (ctx.cr0.lt) goto loc_8298146C;
	// lwz r24,652(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x829810d8
	if (ctx.cr6.eq) goto loc_829810D8;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x829810ec
	goto loc_829810EC;
loc_829810D8:
	// lwz r11,1820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1820);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bne cr6,0x829810ec
	if (!ctx.cr6.eq) goto loc_829810EC;
	// lwz r30,196(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
loc_829810EC:
	// lwz r29,612(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82981160
	if (ctx.cr6.eq) goto loc_82981160;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82981124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298146c
	if (ctx.cr0.lt) goto loc_8298146C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82981150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298146c
	if (ctx.cr0.lt) goto loc_8298146C;
	// addi r23,r1,384
	ctx.r23.s64 = ctx.r1.s64 + 384;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82981160:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x829811d0
	if (ctx.cr6.eq) goto loc_829811D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,244
	ctx.r6.s64 = ctx.r1.s64 + 244;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82981194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298146c
	if (ctx.cr0.lt) goto loc_8298146C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,228
	ctx.r7.s64 = ctx.r1.s64 + 228;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829811C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298146c
	if (ctx.cr0.lt) goto loc_8298146C;
	// addi r21,r1,352
	ctx.r21.s64 = ctx.r1.s64 + 352;
	// li r27,2
	ctx.r27.s64 = 2;
loc_829811D0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82981240
	if (ctx.cr6.eq) goto loc_82981240;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,248
	ctx.r6.s64 = ctx.r1.s64 + 248;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82981204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298146c
	if (ctx.cr0.lt) goto loc_8298146C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82981230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298146c
	if (ctx.cr0.lt) goto loc_8298146C;
	// addi r22,r1,320
	ctx.r22.s64 = ctx.r1.s64 + 320;
	// li r27,3
	ctx.r27.s64 = 3;
loc_82981240:
	// lwz r8,200(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r7,204(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r30,r1,352
	ctx.r30.s64 = ctx.r1.s64 + 352;
	// lwz r5,620(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r3,628(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// lwz r29,636(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// xor r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// xor r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r29.u64;
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// stw r6,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,200
	ctx.r6.s64 = ctx.r1.s64 + 200;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8297ef30
	ctx.lr = 0x829812B4;
	sub_8297EF30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298146c
	if (ctx.cr0.lt) goto loc_8298146C;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r30,15
	ctx.r30.s64 = 983040;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x829812e8
	if (ctx.cr6.eq) goto loc_829812E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978de0
	ctx.lr = 0x829812D4;
	sub_82978DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298146c
	if (ctx.cr0.lt) goto loc_8298146C;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82981344
	if (!ctx.cr6.eq) goto loc_82981344;
loc_829812E8:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82981344
	if (!ctx.cr6.eq) goto loc_82981344;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82981344
	if (ctx.cr6.gt) goto loc_82981344;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82978ce8
	ctx.lr = 0x8298131C;
	sub_82978CE8(ctx, base);
loc_8298131C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82981360
	if (!ctx.cr6.eq) goto loc_82981360;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82978b98
	ctx.lr = 0x82981340;
	sub_82978B98(ctx, base);
	// b 0x82981378
	goto loc_82981378;
loc_82981344:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,26660
	ctx.r5.s64 = ctx.r11.s64 + 26660;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x829321e0
	ctx.lr = 0x8298135C;
	sub_829321E0(ctx, base);
	// b 0x8298131c
	goto loc_8298131C;
loc_82981360:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bctrl 
	ctx.lr = 0x82981378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82981378:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82981454
	if (ctx.cr6.eq) goto loc_82981454;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978e88
	ctx.lr = 0x82981388;
	sub_82978E88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298146c
	if (ctx.cr0.lt) goto loc_8298146C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978ce8
	ctx.lr = 0x829813A8;
	sub_82978CE8(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829813c4
	if (!ctx.cr6.eq) goto loc_829813C4;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x829813c8
	if (!ctx.cr6.gt) goto loc_829813C8;
loc_829813C4:
	// li r6,1
	ctx.r6.s64 = 1;
loc_829813C8:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829791c8
	ctx.lr = 0x829813DC;
	sub_829791C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298146c
	if (ctx.cr0.lt) goto loc_8298146C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82979300
	ctx.lr = 0x829813F8;
	sub_82979300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298146c
	if (ctx.cr0.lt) goto loc_8298146C;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82981454
	if (ctx.cr6.eq) goto loc_82981454;
	// rlwinm r11,r5,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF0000;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82981434
	if (ctx.cr0.eq) goto loc_82981434;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978f48
	ctx.lr = 0x82981428;
	sub_82978F48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298146c
	if (ctx.cr0.lt) goto loc_8298146C;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_82981434:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82979048
	ctx.lr = 0x8298144C;
	sub_82979048(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8298146c
	if (ctx.cr0.lt) goto loc_8298146C;
loc_82981454:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4436
	ctx.r4.s64 = ctx.r11.s64 + 4436;
	// bl 0x82978a68
	ctx.lr = 0x82981464;
	sub_82978A68(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_8298146C:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

