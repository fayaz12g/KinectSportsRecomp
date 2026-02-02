#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8233D7B0"))) PPC_WEAK_FUNC(sub_8233D7B0);
PPC_FUNC_IMPL(__imp__sub_8233D7B0) {
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
	// lbz r11,1828(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1828);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8233d874
	if (!ctx.cr0.eq) goto loc_8233D874;
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233d7ec
	if (!ctx.cr6.eq) goto loc_8233D7EC;
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233d874
	if (ctx.cr6.eq) goto loc_8233D874;
loc_8233D7EC:
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233d80c
	if (ctx.cr6.eq) goto loc_8233D80C;
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8233d810
	if (!ctx.cr6.eq) goto loc_8233D810;
loc_8233D80C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8233D810:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8233d830
	if (!ctx.cr6.eq) goto loc_8233D830;
	// lwz r10,1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8233d830
	if (!ctx.cr6.eq) goto loc_8233D830;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x8233d834
	if (ctx.cr6.eq) goto loc_8233D834;
loc_8233D830:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8233D834:
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233d864
	if (!ctx.cr6.eq) goto loc_8233D864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233cd78
	ctx.lr = 0x8233D848;
	sub_8233CD78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8233d864
	if (!ctx.cr0.eq) goto loc_8233D864;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8233d864
	if (!ctx.cr6.eq) goto loc_8233D864;
	// lwz r11,1700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8233d874
	if (ctx.cr6.eq) goto loc_8233D874;
loc_8233D864:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233d878
	if (!ctx.cr6.eq) goto loc_8233D878;
loc_8233D874:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233D878:
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

__attribute__((alias("__imp__sub_8233D890"))) PPC_WEAK_FUNC(sub_8233D890);
PPC_FUNC_IMPL(__imp__sub_8233D890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8233D898;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,64
	ctx.r30.s64 = ctx.r3.s64 + 64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8233d95c
	if (ctx.cr6.eq) goto loc_8233D95C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8233d950
	if (ctx.cr6.eq) goto loc_8233D950;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8233d8fc
	if (ctx.cr6.eq) goto loc_8233D8FC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8233d8f0
	if (ctx.cr6.eq) goto loc_8233D8F0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8233d8e4
	if (ctx.cr6.eq) goto loc_8233D8E4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8233d964
	if (!ctx.cr6.eq) goto loc_8233D964;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233b738
	ctx.lr = 0x8233D8E0;
	sub_8233B738(ctx, base);
	// b 0x8233d964
	goto loc_8233D964;
loc_8233D8E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233b570
	ctx.lr = 0x8233D8EC;
	sub_8233B570(ctx, base);
	// b 0x8233d964
	goto loc_8233D964;
loc_8233D8F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233b2e8
	ctx.lr = 0x8233D8F8;
	sub_8233B2E8(ctx, base);
	// b 0x8233d964
	goto loc_8233D964;
loc_8233D8FC:
	// addi r5,r30,136
	ctx.r5.s64 = ctx.r30.s64 + 136;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// addi r6,r30,140
	ctx.r6.s64 = ctx.r30.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233b830
	ctx.lr = 0x8233D910;
	sub_8233B830(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8233d92c
	if (ctx.cr6.gt) goto loc_8233D92C;
	// bl 0x82547ee0
	ctx.lr = 0x8233D920;
	sub_82547EE0(ctx, base);
	// stfd f1,232(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r30.u32 + 232, ctx.f1.u64);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8233d948
	goto loc_8233D948;
loc_8233D92C:
	// bl 0x82547ee0
	ctx.lr = 0x8233D930;
	sub_82547EE0(ctx, base);
	// lfd f0,16(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// fsub f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 - ctx.f0.f64;
	// lfd f13,24(r30)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8233d964
	if (!ctx.cr6.gt) goto loc_8233D964;
	// li r11,14
	ctx.r11.s64 = 14;
loc_8233D948:
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// b 0x8233d964
	goto loc_8233D964;
loc_8233D950:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233b238
	ctx.lr = 0x8233D958;
	sub_8233B238(ctx, base);
	// b 0x8233d964
	goto loc_8233D964;
loc_8233D95C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233b180
	ctx.lr = 0x8233D964;
	sub_8233B180(ctx, base);
loc_8233D964:
	// lwz r27,196(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmpwi cr6,r27,9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 9, ctx.xer);
	// blt cr6,0x8233d9ec
	if (ctx.cr6.lt) goto loc_8233D9EC;
	// cmpwi cr6,r27,11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 11, ctx.xer);
	// bge cr6,0x8233d988
	if (!ctx.cr6.lt) goto loc_8233D988;
	// li r26,11
	ctx.r26.s64 = 11;
	// b 0x8233d9ec
	goto loc_8233D9EC;
loc_8233D988:
	// cmpwi cr6,r27,12
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 12, ctx.xer);
	// beq cr6,0x8233d9e8
	if (ctx.cr6.eq) goto loc_8233D9E8;
	// cmpwi cr6,r27,13
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 13, ctx.xer);
	// beq cr6,0x8233d9e0
	if (ctx.cr6.eq) goto loc_8233D9E0;
	// cmpwi cr6,r27,14
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 14, ctx.xer);
	// beq cr6,0x8233d9d8
	if (ctx.cr6.eq) goto loc_8233D9D8;
	// cmpwi cr6,r27,15
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 15, ctx.xer);
	// beq cr6,0x8233d9d0
	if (ctx.cr6.eq) goto loc_8233D9D0;
	// cmpwi cr6,r27,16
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 16, ctx.xer);
	// beq cr6,0x8233d9c8
	if (ctx.cr6.eq) goto loc_8233D9C8;
	// cmpwi cr6,r27,17
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 17, ctx.xer);
	// beq cr6,0x8233d9c0
	if (ctx.cr6.eq) goto loc_8233D9C0;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// b 0x8233d9ec
	goto loc_8233D9EC;
loc_8233D9C0:
	// li r26,7
	ctx.r26.s64 = 7;
	// b 0x8233db5c
	goto loc_8233DB5C;
loc_8233D9C8:
	// li r26,6
	ctx.r26.s64 = 6;
	// b 0x8233db5c
	goto loc_8233DB5C;
loc_8233D9D0:
	// li r26,5
	ctx.r26.s64 = 5;
	// b 0x8233db5c
	goto loc_8233DB5C;
loc_8233D9D8:
	// li r26,13
	ctx.r26.s64 = 13;
	// b 0x8233db5c
	goto loc_8233DB5C;
loc_8233D9E0:
	// li r26,4
	ctx.r26.s64 = 4;
	// b 0x8233da0c
	goto loc_8233DA0C;
loc_8233D9E8:
	// li r26,3
	ctx.r26.s64 = 3;
loc_8233D9EC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8233db08
	if (ctx.cr6.eq) goto loc_8233DB08;
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 8, ctx.xer);
	// beq cr6,0x8233dafc
	if (ctx.cr6.eq) goto loc_8233DAFC;
	// cmpwi cr6,r27,10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 10, ctx.xer);
	// beq cr6,0x8233da38
	if (ctx.cr6.eq) goto loc_8233DA38;
	// cmpwi cr6,r27,13
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 13, ctx.xer);
	// bne cr6,0x8233db54
	if (!ctx.cr6.eq) goto loc_8233DB54;
loc_8233DA0C:
	// bl 0x82547ee0
	ctx.lr = 0x8233DA10;
	sub_82547EE0(ctx, base);
	// stfd f1,1672(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 1672, ctx.f1.u64);
	// stw r29,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r29.u32);
	// stw r29,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r29.u32);
	// stw r29,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r29.u32);
	// bl 0x8233b110
	ctx.lr = 0x8233DA2C;
	sub_8233B110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e298
	ctx.lr = 0x8233DA34;
	sub_8233E298(ctx, base);
	// b 0x8233db5c
	goto loc_8233DB5C;
loc_8233DA38:
	// lwz r11,1688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8233da4c
	if (!ctx.cr6.eq) goto loc_8233DA4C;
	// lbz r11,1686(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1686);
	// b 0x8233da50
	goto loc_8233DA50;
loc_8233DA4C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8233DA50:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8233da94
	if (ctx.cr6.eq) goto loc_8233DA94;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8233da8c
	if (ctx.cr6.eq) goto loc_8233DA8C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8233da84
	if (ctx.cr6.eq) goto loc_8233DA84;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8233da7c
	if (ctx.cr6.eq) goto loc_8233DA7C;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x8233dbf4
	goto loc_8233DBF4;
loc_8233DA7C:
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x8233dbf4
	goto loc_8233DBF4;
loc_8233DA84:
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x8233dbf0
	goto loc_8233DBF0;
loc_8233DA8C:
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x8233dbf0
	goto loc_8233DBF0;
loc_8233DA94:
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// stw r26,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233dab0
	if (ctx.cr6.eq) goto loc_8233DAB0;
	// stw r29,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r29.u32);
	// stw r29,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r29.u32);
	// b 0x8233dae0
	goto loc_8233DAE0;
loc_8233DAB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233DAB8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,1392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,1820(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1820);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233DAD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233DAE0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8233DAE0:
	// stw r29,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r29.u32);
	// stw r29,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r29.u32);
	// stw r29,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r29.u32);
	// bl 0x8233b110
	ctx.lr = 0x8233DAF8;
	sub_8233B110(ctx, base);
	// b 0x8233dbf8
	goto loc_8233DBF8;
loc_8233DAFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d5f0
	ctx.lr = 0x8233DB04;
	sub_8233D5F0(ctx, base);
	// b 0x8233dbf8
	goto loc_8233DBF8;
loc_8233DB08:
	// addi r28,r31,1496
	ctx.r28.s64 = ctx.r31.s64 + 1496;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8224d3e0
	ctx.lr = 0x8233DB18;
	sub_8224D3E0(ctx, base);
	// addi r4,r28,28
	ctx.r4.s64 = ctx.r28.s64 + 28;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8224d3e0
	ctx.lr = 0x8233DB24;
	sub_8224D3E0(ctx, base);
	// lwz r11,1552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// addi r4,r28,60
	ctx.r4.s64 = ctx.r28.s64 + 60;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x8233DB3C;
	sub_82FA77C0(ctx, base);
	// lwz r11,1588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1696(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bl 0x8233af18
	ctx.lr = 0x8233DB54;
	sub_8233AF18(ctx, base);
loc_8233DB54:
	// cmpwi cr6,r27,11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 11, ctx.xer);
	// blt cr6,0x8233dbf8
	if (ctx.cr6.lt) goto loc_8233DBF8;
loc_8233DB5C:
	// lwz r11,1716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233dbec
	if (ctx.cr6.eq) goto loc_8233DBEC;
	// cmpwi cr6,r27,12
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 12, ctx.xer);
	// beq cr6,0x8233dbb4
	if (ctx.cr6.eq) goto loc_8233DBB4;
	// cmpwi cr6,r27,13
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 13, ctx.xer);
	// beq cr6,0x8233dbb4
	if (ctx.cr6.eq) goto loc_8233DBB4;
	// cmpwi cr6,r27,17
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 17, ctx.xer);
	// beq cr6,0x8233db98
	if (ctx.cr6.eq) goto loc_8233DB98;
	// cmpwi cr6,r27,14
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 14, ctx.xer);
	// beq cr6,0x8233db98
	if (ctx.cr6.eq) goto loc_8233DB98;
	// lwz r10,1708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// lwz r11,1704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8233dba8
	if (ctx.cr6.lt) goto loc_8233DBA8;
loc_8233DB98:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e228
	ctx.lr = 0x8233DBA4;
	sub_8233E228(ctx, base);
	// b 0x8233dbec
	goto loc_8233DBEC;
loc_8233DBA8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// b 0x8233dbec
	goto loc_8233DBEC;
loc_8233DBB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233DBBC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r29,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r29.u32);
	// stw r29,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r29.u32);
	// stw r29,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r29.u32);
	// stw r29,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r29.u32);
	// bl 0x8233b110
	ctx.lr = 0x8233DBD8;
	sub_8233B110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e298
	ctx.lr = 0x8233DBE0;
	sub_8233E298(ctx, base);
	// stw r29,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233DBEC;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8233DBEC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8233DBF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8233DBF4:
	// bl 0x8233d6e0
	ctx.lr = 0x8233DBF8;
	sub_8233D6E0(ctx, base);
loc_8233DBF8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233DC00"))) PPC_WEAK_FUNC(sub_8233DC00);
PPC_FUNC_IMPL(__imp__sub_8233DC00) {
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
	// lwz r11,1688(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1688);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// subfic r30,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r30.s64 = 5 - ctx.r11.s64;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8233dc2c
	if (ctx.cr6.lt) goto loc_8233DC2C;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_8233DC2C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8233dc7c
	if (!ctx.cr6.gt) goto loc_8233DC7C;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,1682
	ctx.r3.s64 = ctx.r11.s64 + 1682;
	// bl 0x82a75198
	ctx.lr = 0x8233DC48;
	sub_82A75198(ctx, base);
	// addi r11,r31,1682
	ctx.r11.s64 = ctx.r31.s64 + 1682;
	// addi r11,r31,1684
	ctx.r11.s64 = ctx.r31.s64 + 1684;
	// lwz r11,1688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r11.u32);
	// lbz r11,1682(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1682);
	// lbz r10,1683(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1683);
	// stb r10,1682(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1682, ctx.r10.u8);
	// stb r11,1683(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1683, ctx.r11.u8);
	// lbz r11,1684(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1684);
	// lbz r10,1685(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1685);
	// stb r10,1684(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1684, ctx.r10.u8);
	// stb r11,1685(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1685, ctx.r11.u8);
loc_8233DC7C:
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

__attribute__((alias("__imp__sub_8233DC94"))) PPC_WEAK_FUNC(sub_8233DC94);
PPC_FUNC_IMPL(__imp__sub_8233DC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233DC98"))) PPC_WEAK_FUNC(sub_8233DC98);
PPC_FUNC_IMPL(__imp__sub_8233DC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8233DCA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233dcf4
	if (!ctx.cr6.eq) goto loc_8233DCF4;
	// lwz r11,1488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1488);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,1396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1396, ctx.r10.u32);
	// beq cr6,0x8233dcdc
	if (ctx.cr6.eq) goto loc_8233DCDC;
	// lwz r5,1408(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r4,1492(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1492);
	// lwz r3,1476(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1476);
	// bctrl 
	ctx.lr = 0x8233DCDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233DCDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233DCE4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,1404(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1404, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x8233DCF4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8233DCF4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233DCFC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r28,r29,1384
	ctx.r28.s64 = ctx.r29.s64 + 1384;
	// li r27,2
	ctx.r27.s64 = 2;
loc_8233DD04:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233DD20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233dd98
	if (ctx.cr0.eq) goto loc_8233DD98;
loc_8233DD28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233DD40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8233dd78
	if (ctx.cr0.eq) goto loc_8233DD78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233DD60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233DD78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233DD78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233DD90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8233dd28
	if (ctx.cr6.lt) goto loc_8233DD28;
loc_8233DD98:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8233dd04
	if (!ctx.cr0.eq) goto loc_8233DD04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233DDAC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233DDB4"))) PPC_WEAK_FUNC(sub_8233DDB4);
PPC_FUNC_IMPL(__imp__sub_8233DDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233DDB8"))) PPC_WEAK_FUNC(sub_8233DDB8);
PPC_FUNC_IMPL(__imp__sub_8233DDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8233DDC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8233de70
	ctx.lr = 0x8233DDCC;
	sub_8233DE70(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r30,1736
	ctx.r29.s64 = ctx.r30.s64 + 1736;
	// ori r31,r11,32768
	ctx.r31.u64 = ctx.r11.u64 | 32768;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,4756
	ctx.r4.s64 = ctx.r11.s64 + 4756;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82599d70
	ctx.lr = 0x8233DDEC;
	sub_82599D70(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8233ddfc
	if (!ctx.cr6.lt) goto loc_8233DDFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8233de0c
	goto loc_8233DE0C;
loc_8233DDFC:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8233de0c
	if (!ctx.cr6.gt) goto loc_8233DE0C;
	// lis r3,256
	ctx.r3.s64 = 16777216;
loc_8233DE0C:
	// stw r3,1636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1636, ctx.r3.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,4788
	ctx.r4.s64 = ctx.r11.s64 + 4788;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82599d70
	ctx.lr = 0x8233DE24;
	sub_82599D70(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8233de34
	if (!ctx.cr6.lt) goto loc_8233DE34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8233de44
	goto loc_8233DE44;
loc_8233DE34:
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8233de44
	if (!ctx.cr6.gt) goto loc_8233DE44;
	// lis r3,32
	ctx.r3.s64 = 2097152;
loc_8233DE44:
	// stw r3,1640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1640, ctx.r3.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,4820
	ctx.r4.s64 = ctx.r11.s64 + 4820;
	// bl 0x82599df8
	ctx.lr = 0x8233DE58;
	sub_82599DF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1628(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1628, ctx.r11.u32);
	// bl 0x8233df88
	ctx.lr = 0x8233DE68;
	sub_8233DF88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233DE70"))) PPC_WEAK_FUNC(sub_8233DE70);
PPC_FUNC_IMPL(__imp__sub_8233DE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8233DE78;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822402c8
	ctx.lr = 0x8233DE90;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x8233DEA0;
	sub_822402C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// addi r30,r31,1736
	ctx.r30.s64 = ctx.r31.s64 + 1736;
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,4840
	ctx.r4.s64 = ctx.r10.s64 + 4840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82599d70
	ctx.lr = 0x8233DEC4;
	sub_82599D70(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// blt 0x8233dee0
	if (ctx.cr0.lt) goto loc_8233DEE0;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x8233dee0
	if (ctx.cr6.gt) goto loc_8233DEE0;
	// sth r3,1624(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1624, ctx.r3.u16);
loc_8233DEE0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,4864
	ctx.r4.s64 = ctx.r11.s64 + 4864;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82599d70
	ctx.lr = 0x8233DEF4;
	sub_82599D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8233df08
	if (ctx.cr0.lt) goto loc_8233DF08;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x8233df08
	if (ctx.cr6.gt) goto loc_8233DF08;
	// sth r3,1626(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1626, ctx.r3.u16);
loc_8233DF08:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lhz r5,1680(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1680);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,4888
	ctx.r4.s64 = ctx.r11.s64 + 4888;
	// bl 0x82599d70
	ctx.lr = 0x8233DF1C;
	sub_82599D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8233df30
	if (ctx.cr0.lt) goto loc_8233DF30;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x8233df30
	if (ctx.cr6.gt) goto loc_8233DF30;
	// sth r3,1680(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1680, ctx.r3.u16);
loc_8233DF30:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r5,1816(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,4900
	ctx.r4.s64 = ctx.r11.s64 + 4900;
	// bl 0x82599d70
	ctx.lr = 0x8233DF44;
	sub_82599D70(ctx, base);
	// stw r3,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8233df58
	if (ctx.cr0.lt) goto loc_8233DF58;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// ble cr6,0x8233df60
	if (!ctx.cr6.gt) goto loc_8233DF60;
loc_8233DF58:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r11.u32);
loc_8233DF60:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x8233DF70;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822402c8
	ctx.lr = 0x8233DF80;
	sub_822402C8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233DF88"))) PPC_WEAK_FUNC(sub_8233DF88);
PPC_FUNC_IMPL(__imp__sub_8233DF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8233DF90;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,1736
	ctx.r30.s64 = ctx.r3.s64 + 1736;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,4912
	ctx.r4.s64 = ctx.r11.s64 + 4912;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82599d70
	ctx.lr = 0x8233DFBC;
	sub_82599D70(ctx, base);
	// stw r3,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r3.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,4924
	ctx.r4.s64 = ctx.r11.s64 + 4924;
	// bl 0x82599c30
	ctx.lr = 0x8233DFD0;
	sub_82599C30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8233DFD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233dfd8
	if (!ctx.cr6.eq) goto loc_8233DFD8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,1596
	ctx.r3.s64 = ctx.r31.s64 + 1596;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82240328
	ctx.lr = 0x8233DFFC;
	sub_82240328(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,4940
	ctx.r4.s64 = ctx.r11.s64 + 4940;
	// bl 0x82599c30
	ctx.lr = 0x8233E00C;
	sub_82599C30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822400d8
	ctx.lr = 0x8233E018;
	sub_822400D8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,4968
	ctx.r4.s64 = ctx.r11.s64 + 4968;
	// bl 0x82599c30
	ctx.lr = 0x8233E028;
	sub_82599C30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822400d8
	ctx.lr = 0x8233E034;
	sub_822400D8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r11,4984
	ctx.r4.s64 = ctx.r11.s64 + 4984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82599d70
	ctx.lr = 0x8233E048;
	sub_82599D70(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,1496
	ctx.r3.s64 = ctx.r31.s64 + 1496;
	// bl 0x822401e0
	ctx.lr = 0x8233E064;
	sub_822401E0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,1524
	ctx.r3.s64 = ctx.r31.s64 + 1524;
	// bl 0x822401e0
	ctx.lr = 0x8233E078;
	sub_822401E0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r27,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r27.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stw r28,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r28.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,4992
	ctx.r4.s64 = ctx.r10.s64 + 4992;
	// lfs f29,7408(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7408);
	ctx.f29.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82599ea8
	ctx.lr = 0x8233E0A0;
	sub_82599EA8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// addi r29,r11,27984
	ctx.r29.s64 = ctx.r11.s64 + 27984;
	// lfd f31,112(r29)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r29.u32 + 112);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8233e0bc
	if (!ctx.cr6.lt) goto loc_8233E0BC;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_8233E0BC:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,5024
	ctx.r4.s64 = ctx.r10.s64 + 5024;
	// lfs f1,15164(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15164);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82599ea8
	ctx.lr = 0x8233E0D4;
	sub_82599EA8(ctx, base);
	// stfd f1,1664(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 1664, ctx.f1.u64);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8233e0e4
	if (!ctx.cr6.lt) goto loc_8233E0E4;
	// stfd f31,1664(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1664, ctx.f31.u64);
loc_8233E0E4:
	// bl 0x82547ee0
	ctx.lr = 0x8233E0E8;
	sub_82547EE0(ctx, base);
	// lfd f0,1664(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1664);
	// fsub f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 - ctx.f0.f64;
	// stfd f0,1672(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1672, ctx.f0.u64);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,5060
	ctx.r4.s64 = ctx.r11.s64 + 5060;
	// bl 0x82599ea8
	ctx.lr = 0x8233E108;
	sub_82599EA8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r11.u32);
	// bge cr6,0x8233e124
	if (!ctx.cr6.lt) goto loc_8233E124;
	// stw r28,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r28.u32);
loc_8233E124:
	// fctidz f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f30.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f30.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f30,1648(r29)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r29.u32 + 1648);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r10,-9216
	ctx.r11.s64 = ctx.r10.s64 + -9216;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.f0.u64);
	// stw r31,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r31.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,5092
	ctx.r4.s64 = ctx.r10.s64 + 5092;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82599f30
	ctx.lr = 0x8233E168;
	sub_82599F30(ctx, base);
	// stfd f1,1648(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 1648, ctx.f1.u64);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8233e178
	if (!ctx.cr6.lt) goto loc_8233E178;
	// stfd f30,1648(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1648, ctx.f30.u64);
loc_8233E178:
	// lfd f0,1648(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1648);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfd f0,1656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1656, ctx.f0.u64);
	// addi r4,r11,5128
	ctx.r4.s64 = ctx.r11.s64 + 5128;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82599f30
	ctx.lr = 0x8233E198;
	sub_82599F30(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8233e1a4
	if (!ctx.cr6.lt) goto loc_8233E1A4;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
loc_8233E1A4:
	// stfd f1,88(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.f1.u64);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfd f30,1528(r29)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r29.u32 + 1528);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,5156
	ctx.r4.s64 = ctx.r11.s64 + 5156;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82599f30
	ctx.lr = 0x8233E1C0;
	sub_82599F30(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8233e1cc
	if (!ctx.cr6.lt) goto loc_8233E1CC;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
loc_8233E1CC:
	// stfd f1,72(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.f1.u64);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,5184
	ctx.r4.s64 = ctx.r11.s64 + 5184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82599d70
	ctx.lr = 0x8233E1E4;
	sub_82599D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r3.u32);
	// bge 0x8233e1f4
	if (!ctx.cr0.lt) goto loc_8233E1F4;
	// stw r28,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r28.u32);
loc_8233E1F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x8233E204;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822402c8
	ctx.lr = 0x8233E214;
	sub_822402C8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233E228"))) PPC_WEAK_FUNC(sub_8233E228);
PPC_FUNC_IMPL(__imp__sub_8233E228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8233E230;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233E240;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r30,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// bl 0x8233b110
	ctx.lr = 0x8233E260;
	sub_8233B110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e298
	ctx.lr = 0x8233E268;
	sub_8233E298(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8233e280
	if (ctx.cr6.eq) goto loc_8233E280;
	// bl 0x82547ee0
	ctx.lr = 0x8233E274;
	sub_82547EE0(ctx, base);
	// lfd f0,1648(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1648);
	// fsub f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 - ctx.f0.f64;
	// stfd f0,1656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1656, ctx.f0.u64);
loc_8233E280:
	// stw r30,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233E28C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233E294"))) PPC_WEAK_FUNC(sub_8233E294);
PPC_FUNC_IMPL(__imp__sub_8233E294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233E298"))) PPC_WEAK_FUNC(sub_8233E298);
PPC_FUNC_IMPL(__imp__sub_8233E298) {
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
	// lwz r3,1696(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1696);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233e2d8
	if (ctx.cr6.eq) goto loc_8233E2D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233E2D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r30.u32);
loc_8233E2D8:
	// lwz r11,1716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233e330
	if (ctx.cr6.eq) goto loc_8233E330;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82691500
	ctx.lr = 0x8233E2EC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233e2fc
	if (ctx.cr0.eq) goto loc_8233E2FC;
	// bl 0x82e5fad8
	ctx.lr = 0x8233E2F8;
	sub_82E5FAD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8233E2FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1592(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// bl 0x82e5fac0
	ctx.lr = 0x8233E308;
	sub_82E5FAC0(ctx, base);
	// lwz r10,1616(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// addi r11,r31,1596
	ctx.r11.s64 = ctx.r31.s64 + 1596;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8233e31c
	if (ctx.cr6.lt) goto loc_8233E31C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8233E31C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e5fdb8
	ctx.lr = 0x8233E328;
	sub_82E5FDB8(ctx, base);
	// stw r30,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r30.u32);
	// b 0x8233e350
	goto loc_8233E350;
loc_8233E330:
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82691500
	ctx.lr = 0x8233E338;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233e348
	if (ctx.cr0.eq) goto loc_8233E348;
	// bl 0x82e5ff48
	ctx.lr = 0x8233E344;
	sub_82E5FF48(ctx, base);
	// b 0x8233e34c
	goto loc_8233E34C;
loc_8233E348:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8233E34C:
	// stw r3,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r3.u32);
loc_8233E350:
	// lwz r3,1696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// lwz r11,1552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233E36C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,1516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	// addi r11,r31,1496
	ctx.r11.s64 = ctx.r31.s64 + 1496;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8233e380
	if (ctx.cr6.lt) goto loc_8233E380;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8233E380:
	// lwz r3,1696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233E398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8233E3B0"))) PPC_WEAK_FUNC(sub_8233E3B0);
PPC_FUNC_IMPL(__imp__sub_8233E3B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233E3C8"))) PPC_WEAK_FUNC(sub_8233E3C8);
PPC_FUNC_IMPL(__imp__sub_8233E3C8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E3D0"))) PPC_WEAK_FUNC(sub_8233E3D0);
PPC_FUNC_IMPL(__imp__sub_8233E3D0) {
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
	// bl 0x8233e420
	ctx.lr = 0x8233E3F0;
	sub_8233E420(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233e400
	if (ctx.cr0.eq) goto loc_8233E400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8233E400;
	sub_82691540(ctx, base);
loc_8233E400:
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

__attribute__((alias("__imp__sub_8233E41C"))) PPC_WEAK_FUNC(sub_8233E41C);
PPC_FUNC_IMPL(__imp__sub_8233E41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233E420"))) PPC_WEAK_FUNC(sub_8233E420);
PPC_FUNC_IMPL(__imp__sub_8233E420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8233E428;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,5216
	ctx.r11.s64 = ctx.r11.s64 + 5216;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8233e49c
	if (ctx.cr6.eq) goto loc_8233E49C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8233e490
	if (!ctx.cr6.gt) goto loc_8233E490;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8233E460:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233e47c
	if (ctx.cr6.eq) goto loc_8233E47C;
	// bl 0x82691540
	ctx.lr = 0x8233E474;
	sub_82691540(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
loc_8233E47C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233e460
	if (ctx.cr6.lt) goto loc_8233E460;
loc_8233E490:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x826915c0
	ctx.lr = 0x8233E498;
	sub_826915C0(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_8233E49C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233E4A4"))) PPC_WEAK_FUNC(sub_8233E4A4);
PPC_FUNC_IMPL(__imp__sub_8233E4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233E4A8"))) PPC_WEAK_FUNC(sub_8233E4A8);
PPC_FUNC_IMPL(__imp__sub_8233E4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8233E4B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233e518
	if (ctx.cr6.eq) goto loc_8233E518;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8233e50c
	if (!ctx.cr6.gt) goto loc_8233E50C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8233E4DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233e4f8
	if (ctx.cr6.eq) goto loc_8233E4F8;
	// bl 0x82691540
	ctx.lr = 0x8233E4F0;
	sub_82691540(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r29,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r29.u32);
loc_8233E4F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233e4dc
	if (ctx.cr6.lt) goto loc_8233E4DC;
loc_8233E50C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x826915c0
	ctx.lr = 0x8233E514;
	sub_826915C0(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8233E518:
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8233e534
	if (!ctx.cr6.gt) goto loc_8233E534;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8233E534:
	// bl 0x82691580
	ctx.lr = 0x8233E538;
	sub_82691580(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82a75988
	ctx.lr = 0x8233E54C;
	sub_82A75988(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8233e580
	if (!ctx.cr6.gt) goto loc_8233E580;
loc_8233E55C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82691580
	ctx.lr = 0x8233E564;
	sub_82691580(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233e55c
	if (ctx.cr6.lt) goto loc_8233E55C;
loc_8233E580:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233E594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233E59C"))) PPC_WEAK_FUNC(sub_8233E59C);
PPC_FUNC_IMPL(__imp__sub_8233E59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233E5A0"))) PPC_WEAK_FUNC(sub_8233E5A0);
PPC_FUNC_IMPL(__imp__sub_8233E5A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233E5BC"))) PPC_WEAK_FUNC(sub_8233E5BC);
PPC_FUNC_IMPL(__imp__sub_8233E5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233E5C0"))) PPC_WEAK_FUNC(sub_8233E5C0);
PPC_FUNC_IMPL(__imp__sub_8233E5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x8233E5C8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8233e700
	if (ctx.cr6.eq) goto loc_8233E700;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8233E5F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bne cr6,0x8233e628
	if (!ctx.cr6.eq) goto loc_8233E628;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8233e634
	if (!ctx.cr6.gt) goto loc_8233E634;
	// b 0x8233e630
	goto loc_8233E630;
loc_8233E628:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8233e634
	if (!ctx.cr6.eq) goto loc_8233E634;
loc_8233E630:
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
loc_8233E634:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233e6a0
	if (ctx.cr6.eq) goto loc_8233E6A0;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8233e688
	if (ctx.cr6.eq) goto loc_8233E688;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8233E664:
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8233e688
	if (ctx.cr6.eq) goto loc_8233E688;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8233e664
	if (ctx.cr6.lt) goto loc_8233E664;
loc_8233E688:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8233e73c
	if (ctx.cr6.eq) goto loc_8233E73C;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_8233E6A0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r30,r10,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8233e6b8
	if (!ctx.cr6.lt) goto loc_8233E6B8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8233E6B8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a75198
	ctx.lr = 0x8233E6CC;
	sub_82A75198(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r28,r30,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r30.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8233e6f8
	if (ctx.cr6.eq) goto loc_8233E6F8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
loc_8233E6F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8233e5f0
	if (!ctx.cr6.eq) goto loc_8233E5F0;
loc_8233E700:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8233e730
	if (ctx.cr6.eq) goto loc_8233E730;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r24.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r23,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r23.u32);
loc_8233E730:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8233E734:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_8233E73C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8233e734
	goto loc_8233E734;
}

__attribute__((alias("__imp__sub_8233E744"))) PPC_WEAK_FUNC(sub_8233E744);
PPC_FUNC_IMPL(__imp__sub_8233E744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233E748"))) PPC_WEAK_FUNC(sub_8233E748);
PPC_FUNC_IMPL(__imp__sub_8233E748) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8233e760
	if (ctx.cr6.eq) goto loc_8233E760;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_8233E760:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8233e76c
	if (ctx.cr6.eq) goto loc_8233E76C;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_8233E76C:
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233e7c8
	if (ctx.cr6.eq) goto loc_8233E7C8;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_8233E788:
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8233e7b8
	if (ctx.cr6.eq) goto loc_8233E7B8;
	// lwz r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8233e7b8
	if (!ctx.cr6.eq) goto loc_8233E7B8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8233e7b8
	if (!ctx.cr6.gt) goto loc_8233E7B8;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_8233E7B8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8233e788
	if (ctx.cr6.lt) goto loc_8233E788;
loc_8233E7C8:
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8233e804
	if (!ctx.cr6.lt) goto loc_8233E804;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8233e7e8
	if (ctx.cr6.eq) goto loc_8233E7E8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8233E7E8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8233e804
	if (ctx.cr6.eq) goto loc_8233E804;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8233E804:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E814"))) PPC_WEAK_FUNC(sub_8233E814);
PPC_FUNC_IMPL(__imp__sub_8233E814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233E818"))) PPC_WEAK_FUNC(sub_8233E818);
PPC_FUNC_IMPL(__imp__sub_8233E818) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8233e85c
	if (ctx.cr6.eq) goto loc_8233E85C;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8233E830:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8233e84c
	if (ctx.cr6.eq) goto loc_8233E84C;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233e864
	if (ctx.cr6.eq) goto loc_8233E864;
loc_8233E84C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8233e830
	if (ctx.cr6.lt) goto loc_8233E830;
loc_8233E85C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8233E864:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E86C"))) PPC_WEAK_FUNC(sub_8233E86C);
PPC_FUNC_IMPL(__imp__sub_8233E86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233E870"))) PPC_WEAK_FUNC(sub_8233E870);
PPC_FUNC_IMPL(__imp__sub_8233E870) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233e884
	if (ctx.cr6.lt) goto loc_8233E884;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8233E884:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8233e938
	if (!ctx.cr6.gt) goto loc_8233E938;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8233E8E8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne cr6,0x8233e900
	if (!ctx.cr6.eq) goto loc_8233E900;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x8233e924
	goto loc_8233E924;
loc_8233E900:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233e924
	if (ctx.cr6.eq) goto loc_8233E924;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_8233E924:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233e8e8
	if (ctx.cr6.lt) goto loc_8233E8E8;
loc_8233E938:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E940"))) PPC_WEAK_FUNC(sub_8233E940);
PPC_FUNC_IMPL(__imp__sub_8233E940) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8233E958:
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r10.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8233e958
	if (ctx.cr6.lt) goto loc_8233E958;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233E9C4"))) PPC_WEAK_FUNC(sub_8233E9C4);
PPC_FUNC_IMPL(__imp__sub_8233E9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233E9C8"))) PPC_WEAK_FUNC(sub_8233E9C8);
PPC_FUNC_IMPL(__imp__sub_8233E9C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8233E9E8:
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8233e9fc
	if (ctx.cr6.eq) goto loc_8233E9FC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8233E9FC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8233e9e8
	if (ctx.cr6.lt) goto loc_8233E9E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233EA10"))) PPC_WEAK_FUNC(sub_8233EA10);
PPC_FUNC_IMPL(__imp__sub_8233EA10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233EA40"))) PPC_WEAK_FUNC(sub_8233EA40);
PPC_FUNC_IMPL(__imp__sub_8233EA40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233ea54
	if (ctx.cr6.lt) goto loc_8233EA54;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8233EA54:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233EA68"))) PPC_WEAK_FUNC(sub_8233EA68);
PPC_FUNC_IMPL(__imp__sub_8233EA68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233EA80"))) PPC_WEAK_FUNC(sub_8233EA80);
PPC_FUNC_IMPL(__imp__sub_8233EA80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8233EAC0"))) PPC_WEAK_FUNC(sub_8233EAC0);
PPC_FUNC_IMPL(__imp__sub_8233EAC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233EAC4"))) PPC_WEAK_FUNC(sub_8233EAC4);
PPC_FUNC_IMPL(__imp__sub_8233EAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233EAC8"))) PPC_WEAK_FUNC(sub_8233EAC8);
PPC_FUNC_IMPL(__imp__sub_8233EAC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233eb1c
	if (ctx.cr6.eq) goto loc_8233EB1C;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8233EAF8:
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8233eb1c
	if (ctx.cr6.eq) goto loc_8233EB1C;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8233eaf8
	if (ctx.cr6.lt) goto loc_8233EAF8;
loc_8233EB1C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233EB2C"))) PPC_WEAK_FUNC(sub_8233EB2C);
PPC_FUNC_IMPL(__imp__sub_8233EB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233EB30"))) PPC_WEAK_FUNC(sub_8233EB30);
PPC_FUNC_IMPL(__imp__sub_8233EB30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233EB48"))) PPC_WEAK_FUNC(sub_8233EB48);
PPC_FUNC_IMPL(__imp__sub_8233EB48) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,8796
	ctx.r11.s64 = ctx.r11.s64 + 8796;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8233eb98
	if (ctx.cr6.eq) goto loc_8233EB98;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233eb98
	if (!ctx.cr6.eq) goto loc_8233EB98;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233eb98
	if (!ctx.cr6.eq) goto loc_8233EB98;
	// bl 0x8233f3d0
	ctx.lr = 0x8233EB98;
	sub_8233F3D0(ctx, base);
loc_8233EB98:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233eba8
	if (ctx.cr0.eq) goto loc_8233EBA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8233EBA8;
	sub_82691540(ctx, base);
loc_8233EBA8:
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

__attribute__((alias("__imp__sub_8233EBC4"))) PPC_WEAK_FUNC(sub_8233EBC4);
PPC_FUNC_IMPL(__imp__sub_8233EBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233EBC8"))) PPC_WEAK_FUNC(sub_8233EBC8);
PPC_FUNC_IMPL(__imp__sub_8233EBC8) {
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
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82691500
	ctx.lr = 0x8233EBDC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233ec88
	if (ctx.cr0.eq) goto loc_8233EC88;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,8796
	ctx.r10.s64 = ctx.r10.s64 + 8796;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r9,r3,104
	ctx.r9.s64 = ctx.r3.s64 + 104;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
loc_8233EC54:
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// stw r11,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// stwu r8,28(r9)
	ea = 28 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8233ec54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233EC54;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// addi r9,r10,21768
	ctx.r9.s64 = ctx.r10.s64 + 21768;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// b 0x8233ec98
	goto loc_8233EC98;
loc_8233EC88:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,21768
	ctx.r9.s64 = ctx.r11.s64 + 21768;
	// stw r10,21768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21768, ctx.r10.u32);
loc_8233EC98:
	// addi r3,r10,228
	ctx.r3.s64 = ctx.r10.s64 + 228;
	// bl 0x831791c4
	ctx.lr = 0x8233ECA0;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233ECB0"))) PPC_WEAK_FUNC(sub_8233ECB0);
PPC_FUNC_IMPL(__imp__sub_8233ECB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8233ECB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// beq cr6,0x8233ece0
	if (ctx.cr6.eq) goto loc_8233ECE0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8233ece8
	if (!ctx.cr6.eq) goto loc_8233ECE8;
loc_8233ECE0:
	// li r24,87
	ctx.r24.s64 = 87;
	// b 0x8233ecf0
	goto loc_8233ECF0;
loc_8233ECE8:
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
loc_8233ECF0:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233ed14
	if (ctx.cr6.eq) goto loc_8233ED14;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233ed14
	if (!ctx.cr6.eq) goto loc_8233ED14;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x8233ed18
	if (ctx.cr6.gt) goto loc_8233ED18;
loc_8233ED14:
	// li r24,21
	ctx.r24.s64 = 21;
loc_8233ED18:
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8233ee58
	if (!ctx.cr6.eq) goto loc_8233EE58;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233ee2c
	if (ctx.cr6.eq) goto loc_8233EE2C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8233ee2c
	if (!ctx.cr6.gt) goto loc_8233EE2C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ed50
	if (ctx.cr6.eq) goto loc_8233ED50;
	// bl 0x82547d80
	ctx.lr = 0x8233ED4C;
	sub_82547D80(ctx, base);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
loc_8233ED50:
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r11,28
	ctx.r29.s64 = ctx.r11.s64 + 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82547c40
	ctx.lr = 0x8233ED6C;
	sub_82547C40(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bne 0x8233ed80
	if (!ctx.cr0.eq) goto loc_8233ED80;
	// li r24,14
	ctx.r24.s64 = 14;
	// b 0x8233ee2c
	goto loc_8233EE2C;
loc_8233ED80:
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// lis r11,21328
	ctx.r11.s64 = 1397751808;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r11,r11,21334
	ctx.r11.u64 = ctx.r11.u64 | 21334;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r30,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r30.s64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82a75220
	ctx.lr = 0x8233EDB8;
	sub_82A75220(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82a75220
	ctx.lr = 0x8233EDE0;
	sub_82A75220(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r1,79
	ctx.r11.s64 = ctx.r1.s64 + 79;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8233EDF8:
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r8,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r8.u8);
	// stb r7,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r7.u8);
	// stb r6,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r6.u8);
	// stbu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8233edf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233EDF8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
loc_8233EE2C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233ee64
	if (!ctx.cr6.eq) goto loc_8233EE64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233ee58
	if (!ctx.cr6.eq) goto loc_8233EE58;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
loc_8233EE58:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233ee6c
	if (ctx.cr6.eq) goto loc_8233EE6C;
loc_8233EE64:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8233ee78
	if (!ctx.cr6.eq) goto loc_8233EE78;
loc_8233EE6C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8233ee84
	if (!ctx.cr6.eq) goto loc_8233EE84;
	// li r24,1627
	ctx.r24.s64 = 1627;
loc_8233EE78:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8233ee84
	if (!ctx.cr6.eq) goto loc_8233EE84;
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
loc_8233EE84:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233EE90"))) PPC_WEAK_FUNC(sub_8233EE90);
PPC_FUNC_IMPL(__imp__sub_8233EE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8233EE98;
	__savegprlr_28(ctx, base);
	// stwu r1,-3728(r1)
	ea = -3728 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,5288
	ctx.r4.s64 = ctx.r11.s64 + 5288;
	// li r5,214
	ctx.r5.s64 = 214;
	// bl 0x82fa77c0
	ctx.lr = 0x8233EEB0;
	sub_82FA77C0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,2208
	ctx.r3.s64 = ctx.r1.s64 + 2208;
	// addi r4,r11,5504
	ctx.r4.s64 = ctx.r11.s64 + 5504;
	// li r5,1468
	ctx.r5.s64 = 1468;
	// bl 0x82fa77c0
	ctx.lr = 0x8233EEC4;
	sub_82FA77C0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// addi r4,r11,6976
	ctx.r4.s64 = ctx.r11.s64 + 6976;
	// li r5,1014
	ctx.r5.s64 = 1014;
	// bl 0x82fa77c0
	ctx.lr = 0x8233EED8;
	sub_82FA77C0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,7992
	ctx.r4.s64 = ctx.r11.s64 + 7992;
	// li r5,772
	ctx.r5.s64 = 772;
	// bl 0x82fa77c0
	ctx.lr = 0x8233EEEC;
	sub_82FA77C0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// ori r5,r5,390
	ctx.r5.u64 = ctx.r5.u64 | 390;
	// li r4,480
	ctx.r4.s64 = 480;
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82662f50
	ctx.lr = 0x8233EF20;
	sub_82662F50(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// sth r31,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r31.u16);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// ori r11,r11,9126
	ctx.r11.u64 = ctx.r11.u64 | 9126;
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r31,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r31.u8);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stb r31,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r31.u8);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r3,21800(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21800, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r31,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r31.u8);
	// sth r31,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r31.u16);
	// sth r31,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r31.u16);
	// stb r31,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r31.u8);
	// stb r31,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r31.u8);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// sth r9,142(r1)
	PPC_STORE_U16(ctx.r1.u32 + 142, ctx.r9.u16);
	// sth r31,140(r1)
	PPC_STORE_U16(ctx.r1.u32 + 140, ctx.r31.u16);
	// stb r8,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r8.u8);
	// stb r31,150(r1)
	PPC_STORE_U8(ctx.r1.u32 + 150, ctx.r31.u8);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x82668e10
	ctx.lr = 0x8233EF9C;
	sub_82668E10(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r3,21780(r9)
	PPC_STORE_U32(ctx.r9.u32 + 21780, ctx.r3.u32);
loc_8233EFAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233efac
	if (!ctx.cr6.eq) goto loc_8233EFAC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,8764
	ctx.r8.s64 = ctx.r10.s64 + 8764;
	// addi r7,r9,8772
	ctx.r7.s64 = ctx.r9.s64 + 8772;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82927fd0
	ctx.lr = 0x8233EFF8;
	sub_82927FD0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233F00C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82668a48
	ctx.lr = 0x8233F010;
	sub_82668A48(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r11,21784(r9)
	PPC_STORE_U32(ctx.r9.u32 + 21784, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233F034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,2208
	ctx.r11.s64 = ctx.r1.s64 + 2208;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8233F03C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233f03c
	if (!ctx.cr6.eq) goto loc_8233F03C;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r29,r9,8788
	ctx.r29.s64 = ctx.r9.s64 + 8788;
	// addi r30,r11,8780
	ctx.r30.s64 = ctx.r11.s64 + 8780;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,2208
	ctx.r3.s64 = ctx.r1.s64 + 2208;
	// bl 0x82927fd0
	ctx.lr = 0x8233F090;
	sub_82927FD0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233F0A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x826686a0
	ctx.lr = 0x8233F0A8;
	sub_826686A0(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r28,r9,21788
	ctx.r28.s64 = ctx.r9.s64 + 21788;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r11,21788(r9)
	PPC_STORE_U32(ctx.r9.u32 + 21788, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233F0D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,1184
	ctx.r11.s64 = ctx.r1.s64 + 1184;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8233F0D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233f0d8
	if (!ctx.cr6.eq) goto loc_8233F0D8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x82927fd0
	ctx.lr = 0x8233F118;
	sub_82927FD0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233F12C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x826686a0
	ctx.lr = 0x8233F130;
	sub_826686A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233F14C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,400
	ctx.r11.s64 = ctx.r1.s64 + 400;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8233F154:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233f154
	if (!ctx.cr6.eq) goto loc_8233F154;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82927fd0
	ctx.lr = 0x8233F194;
	sub_82927FD0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233F1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x826686a0
	ctx.lr = 0x8233F1AC;
	sub_826686A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233F1DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,21776(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21776, ctx.r11.u32);
	// addi r1,r1,3728
	ctx.r1.s64 = ctx.r1.s64 + 3728;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233F1F4"))) PPC_WEAK_FUNC(sub_8233F1F4);
PPC_FUNC_IMPL(__imp__sub_8233F1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233F1F8"))) PPC_WEAK_FUNC(sub_8233F1F8);
PPC_FUNC_IMPL(__imp__sub_8233F1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x8233F200;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwa r11,220(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 220));
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,2236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2236);
	ctx.f0.f64 = double(temp.f32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,20(r21)
	PPC_STORE_U32(ctx.r21.u32 + 20, ctx.r3.u32);
	// bl 0x82547c40
	ctx.lr = 0x8233F240;
	sub_82547C40(ctx, base);
	// stw r3,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8233f264
	if (!ctx.cr0.eq) goto loc_8233F264;
	// li r20,14
	ctx.r20.s64 = 14;
loc_8233F250:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8233f3d0
	ctx.lr = 0x8233F258;
	sub_8233F3D0(ctx, base);
loc_8233F258:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_8233F264:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,21776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233f284
	if (!ctx.cr6.eq) goto loc_8233F284;
	// bl 0x8233ee90
	ctx.lr = 0x8233F27C;
	sub_8233EE90(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// b 0x8233f288
	goto loc_8233F288;
loc_8233F284:
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
loc_8233F288:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x8233f250
	if (!ctx.cr6.eq) goto loc_8233F250;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r28,r21,112
	ctx.r28.s64 = ctx.r21.s64 + 112;
	// addi r25,r21,56
	ctx.r25.s64 = ctx.r21.s64 + 56;
	// li r26,3
	ctx.r26.s64 = 3;
	// lis r23,-31957
	ctx.r23.s64 = -2094333952;
	// addi r24,r11,-19992
	ctx.r24.s64 = ctx.r11.s64 + -19992;
loc_8233F2A8:
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,390
	ctx.r8.u64 = ctx.r8.u64 | 390;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,480
	ctx.r4.s64 = 480;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x82662e30
	ctx.lr = 0x8233F2D0;
	sub_82662E30(ctx, base);
	// lwz r31,23064(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 23064);
	// stw r3,-8(r25)
	PPC_STORE_U32(ctx.r25.u32 + -8, ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8233f2f8
	if (!ctx.cr6.eq) goto loc_8233F2F8;
	// bl 0x825476e8
	ctx.lr = 0x8233F2E4;
	sub_825476E8(ctx, base);
	// lwz r31,23064(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 23064);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8233f2f8
	if (!ctx.cr6.eq) goto loc_8233F2F8;
	// bl 0x825476e8
	ctx.lr = 0x8233F2F4;
	sub_825476E8(ctx, base);
	// lwz r31,23064(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 23064);
loc_8233F2F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233f308
	if (!ctx.cr6.eq) goto loc_8233F308;
	// bl 0x825476e8
	ctx.lr = 0x8233F308;
	sub_825476E8(ctx, base);
loc_8233F308:
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// bl 0x82a74720
	ctx.lr = 0x8233F310;
	sub_82A74720(ctx, base);
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825c63d8
	ctx.lr = 0x8233F320;
	sub_825C63D8(ctx, base);
	// bl 0x82a74720
	ctx.lr = 0x8233F324;
	sub_82A74720(ctx, base);
	// bl 0x825c5fe0
	ctx.lr = 0x8233F328;
	sub_825C5FE0(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x825c6258
	ctx.lr = 0x8233F334;
	sub_825C6258(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r30,40(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r4,18
	ctx.r4.s64 = 1179648;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,53248
	ctx.r4.u64 = ctx.r4.u64 | 53248;
	// bl 0x82547b60
	ctx.lr = 0x8233F350;
	sub_82547B60(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// ble cr6,0x8233f364
	if (!ctx.cr6.gt) goto loc_8233F364;
	// li r11,16
	ctx.r11.s64 = 16;
loc_8233F364:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82a74720
	ctx.lr = 0x8233F36C;
	sub_82A74720(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825c6538
	ctx.lr = 0x8233F374;
	sub_825C6538(ctx, base);
	// stwu r27,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r25.u32 = ea;
	// stw r22,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r22.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x8233F390;
	sub_82A77608(ctx, base);
	// stw r3,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r3.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stwu r22,28(r28)
	ea = 28 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r28.u32 = ea;
	// bne 0x8233f2a8
	if (!ctx.cr0.eq) goto loc_8233F2A8;
	// stw r22,108(r21)
	PPC_STORE_U32(ctx.r21.u32 + 108, ctx.r22.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x8233F3B8;
	sub_82A77608(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,104(r21)
	PPC_STORE_U32(ctx.r21.u32 + 104, ctx.r3.u32);
	// stw r22,112(r21)
	PPC_STORE_U32(ctx.r21.u32 + 112, ctx.r22.u32);
	// stw r11,84(r21)
	PPC_STORE_U32(ctx.r21.u32 + 84, ctx.r11.u32);
	// b 0x8233f258
	goto loc_8233F258;
}

__attribute__((alias("__imp__sub_8233F3CC"))) PPC_WEAK_FUNC(sub_8233F3CC);
PPC_FUNC_IMPL(__imp__sub_8233F3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233F3D0"))) PPC_WEAK_FUNC(sub_8233F3D0);
PPC_FUNC_IMPL(__imp__sub_8233F3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8233F3D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,132
	ctx.r26.s64 = ctx.r3.s64 + 132;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,60
	ctx.r29.s64 = ctx.r3.s64 + 60;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// li r27,3
	ctx.r27.s64 = 3;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_8233F3F8:
	// lwz r3,-12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f408
	if (ctx.cr6.eq) goto loc_8233F408;
	// bl 0x8266eed8
	ctx.lr = 0x8233F408;
	sub_8266EED8(ctx, base);
loc_8233F408:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f41c
	if (ctx.cr6.eq) goto loc_8233F41C;
	// bl 0x82547d80
	ctx.lr = 0x8233F418;
	sub_82547D80(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_8233F41C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8233f430
	if (ctx.cr6.eq) goto loc_8233F430;
	// bl 0x82a756a0
	ctx.lr = 0x8233F42C;
	sub_82A756A0(ctx, base);
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
loc_8233F430:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// bne 0x8233f3f8
	if (!ctx.cr0.eq) goto loc_8233F3F8;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8233f454
	if (ctx.cr6.eq) goto loc_8233F454;
	// bl 0x82a756a0
	ctx.lr = 0x8233F450;
	sub_82A756A0(ctx, base);
	// stw r25,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r25.u32);
loc_8233F454:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f468
	if (ctx.cr6.eq) goto loc_8233F468;
	// bl 0x82547d80
	ctx.lr = 0x8233F464;
	sub_82547D80(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8233F468:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f47c
	if (ctx.cr6.eq) goto loc_8233F47C;
	// bl 0x82547d80
	ctx.lr = 0x8233F478;
	sub_82547D80(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8233F47C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233f490
	if (ctx.cr6.eq) goto loc_8233F490;
	// bl 0x82547d80
	ctx.lr = 0x8233F48C;
	sub_82547D80(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_8233F490:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233f4ac
	if (ctx.cr6.eq) goto loc_8233F4AC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82e607d0
	ctx.lr = 0x8233F4AC;
	sub_82E607D0(ctx, base);
loc_8233F4AC:
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r10,r26,-28
	ctx.r10.s64 = ctx.r26.s64 + -28;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_8233F4F8:
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// stw r30,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r30.u32);
	// stwu r25,28(r10)
	ea = 28 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8233f4f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233F4F8;
	// stw r25,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r25.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233F520"))) PPC_WEAK_FUNC(sub_8233F520);
PPC_FUNC_IMPL(__imp__sub_8233F520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8233F528;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8233f54c
	if (ctx.cr6.eq) goto loc_8233F54C;
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8233f570
	if (!ctx.cr6.gt) goto loc_8233F570;
loc_8233F54C:
	// li r30,21
	ctx.r30.s64 = 21;
loc_8233F550:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233f564
	if (!ctx.cr6.eq) goto loc_8233F564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f3d0
	ctx.lr = 0x8233F564;
	sub_8233F3D0(ctx, base);
loc_8233F564:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8233F570:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8233f58c
	if (!ctx.cr6.eq) goto loc_8233F58C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f3d0
	ctx.lr = 0x8233F584;
	sub_8233F3D0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8233f550
	if (!ctx.cr0.eq) goto loc_8233F550;
loc_8233F58C:
	// li r11,640
	ctx.r11.s64 = 640;
	// stw r29,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r29.u32);
	// li r10,480
	ctx.r10.s64 = 480;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// bl 0x8233f1f8
	ctx.lr = 0x8233F5A8;
	sub_8233F1F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8233f550
	if (!ctx.cr0.eq) goto loc_8233F550;
	// lis r10,640
	ctx.r10.s64 = 41943040;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,30
	ctx.r8.s64 = 30;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ori r10,r10,480
	ctx.r10.u64 = ctx.r10.u64 | 480;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,4000
	ctx.r7.s64 = 4000;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r10,254
	ctx.r10.s64 = 254;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x82e60ba0
	ctx.lr = 0x8233F604;
	sub_82E60BA0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8233f550
	if (!ctx.cr0.eq) goto loc_8233F550;
	// addi r7,r31,92
	ctx.r7.s64 = ctx.r31.s64 + 92;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e60828
	ctx.lr = 0x8233F624;
	sub_82E60828(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8233f550
	if (!ctx.cr0.eq) goto loc_8233F550;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r28,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r28.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,21772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21772, ctx.r11.u32);
	// b 0x8233f564
	goto loc_8233F564;
}

__attribute__((alias("__imp__sub_8233F644"))) PPC_WEAK_FUNC(sub_8233F644);
PPC_FUNC_IMPL(__imp__sub_8233F644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233F648"))) PPC_WEAK_FUNC(sub_8233F648);
PPC_FUNC_IMPL(__imp__sub_8233F648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x8233F650;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r21,r3,228
	ctx.r21.s64 = ctx.r3.s64 + 228;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233F670;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,120
	ctx.r30.s64 = ctx.r11.s64 + 120;
	// bne cr6,0x8233f6bc
	if (!ctx.cr6.eq) goto loc_8233F6BC;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233f6b4
	if (ctx.cr6.eq) goto loc_8233F6B4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_8233F6B4:
	// li r29,21
	ctx.r29.s64 = 21;
	// b 0x8233f8a0
	goto loc_8233F8A0;
loc_8233F6BC:
	// lis r11,4660
	ctx.r11.s64 = 305397760;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// ori r28,r11,22136
	ctx.r28.u64 = ctx.r11.u64 | 22136;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8233f76c
	if (!ctx.cr6.eq) goto loc_8233F76C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// bl 0x82a75860
	ctx.lr = 0x8233F6E4;
	sub_82A75860(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233f740
	if (ctx.cr0.eq) goto loc_8233F740;
	// addi r26,r31,92
	ctx.r26.s64 = ctx.r31.s64 + 92;
loc_8233F6F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a75860
	ctx.lr = 0x8233F700;
	sub_82A75860(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233f734
	if (ctx.cr0.eq) goto loc_8233F734;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,66
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 66, ctx.xer);
	// bgt cr6,0x8233f740
	if (ctx.cr6.gt) goto loc_8233F740;
	// bl 0x82562de8
	ctx.lr = 0x8233F718;
	sub_82562DE8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75860
	ctx.lr = 0x8233F728;
	sub_82A75860(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8233f6f0
	if (!ctx.cr0.eq) goto loc_8233F6F0;
	// b 0x8233f740
	goto loc_8233F740;
loc_8233F734:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f8c0
	ctx.lr = 0x8233F73C;
	sub_8233F8C0(ctx, base);
	// li r29,1627
	ctx.r29.s64 = 1627;
loc_8233F740:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233f758
	if (!ctx.cr6.eq) goto loc_8233F758;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8233F758:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a77b58
	ctx.lr = 0x8233F760;
	sub_82A77B58(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r25,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r25.u32);
	// bne cr6,0x8233f8a0
	if (!ctx.cr6.eq) goto loc_8233F8A0;
loc_8233F76C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8233f958
	ctx.lr = 0x8233F788;
	sub_8233F958(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233f7b8
	if (!ctx.cr6.eq) goto loc_8233F7B8;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// b 0x8233f89c
	goto loc_8233F89C;
loc_8233F7B8:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82662418
	ctx.lr = 0x8233F7D8;
	sub_82662418(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82661d98
	ctx.lr = 0x8233F7E8;
	sub_82661D98(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a75220
	ctx.lr = 0x8233F810;
	sub_82A75220(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x8266ebe8
	ctx.lr = 0x8233F828;
	sub_8266EBE8(ctx, base);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82e60858
	ctx.lr = 0x8233F850;
	sub_82E60858(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r25,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
	// beq 0x8233f86c
	if (ctx.cr0.eq) goto loc_8233F86C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f8c0
	ctx.lr = 0x8233F864;
	sub_8233F8C0(ctx, base);
	// stw r25,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r25.u32);
	// b 0x8233f8a0
	goto loc_8233F8A0;
loc_8233F86C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// divw r10,r8,r10
	ctx.r10.s32 = ctx.r8.s32 / ctx.r10.s32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_8233F89C:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_8233F8A0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8233f8b0
	if (ctx.cr6.eq) goto loc_8233F8B0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233F8B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8233F8B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233F8BC"))) PPC_WEAK_FUNC(sub_8233F8BC);
PPC_FUNC_IMPL(__imp__sub_8233F8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233F8C0"))) PPC_WEAK_FUNC(sub_8233F8C0);
PPC_FUNC_IMPL(__imp__sub_8233F8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8233F8C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,228
	ctx.r29.s64 = ctx.r3.s64 + 228;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233F8DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne cr6,0x8233f8f8
	if (!ctx.cr6.eq) goto loc_8233F8F8;
	// li r28,21
	ctx.r28.s64 = 21;
	// b 0x8233f93c
	goto loc_8233F93C;
loc_8233F8F8:
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,21772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21772, ctx.r11.u32);
	// bl 0x82e60840
	ctx.lr = 0x8233F90C;
	sub_82E60840(ctx, base);
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// b 0x8233f91c
	goto loc_8233F91C;
loc_8233F914:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a77720
	ctx.lr = 0x8233F91C;
	sub_82A77720(ctx, base);
loc_8233F91C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75860
	ctx.lr = 0x8233F92C;
	sub_82A75860(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8233f914
	if (!ctx.cr0.eq) goto loc_8233F914;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8233F93C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233f94c
	if (ctx.cr6.eq) goto loc_8233F94C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233F94C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8233F94C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233F958"))) PPC_WEAK_FUNC(sub_8233F958);
PPC_FUNC_IMPL(__imp__sub_8233F958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x8233F960;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d20
	ctx.lr = 0x8233F968;
	__savefpr_26(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r5,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82661d98
	ctx.lr = 0x8233F988;
	sub_82661D98(ctx, base);
	// lwz r7,204(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// lwz r9,268(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// lwz r8,264(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r20,208(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,7008(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7008);
	ctx.f0.f64 = double(temp.f32);
	// extsw r6,r20
	ctx.r6.s64 = ctx.r20.s32;
	// std r6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// lfd f12,152(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8233f9ec
	if (!ctx.cr6.gt) goto loc_8233F9EC;
	// mulli r10,r8,9
	ctx.r10.s64 = ctx.r8.s64 * 9;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// b 0x8233f9f8
	goto loc_8233F9F8;
loc_8233F9EC:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,3
	ctx.r6.s64 = 3;
	// divwu r11,r11,r6
	ctx.r11.u32 = ctx.r11.u32 / ctx.r6.u32;
loc_8233F9F8:
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// clrldi r4,r8,32
	ctx.r4.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// lfd f12,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// lfd f13,152(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// lfd f11,152(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f0,152(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f10,128(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addze r22,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r22.s64 = temp.s64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lfd f0,144(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f8,f0
	ctx.f8.f64 = double(ctx.f0.s64);
	// lwz r11,1168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1168);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfs f0,31512(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,1164(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1164);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// lwz r7,1152(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r6,10548(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r10,r10,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// lwz r5,10688(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10688);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r21,12816(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12816);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// rlwinm r9,r9,11,21,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// rlwinm r8,r8,13,19,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1FFF;
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lwz r25,12292(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12292);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r24,12308(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12308);
	// rlwimi r9,r11,0,29,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// lwz r11,12284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwimi r8,r10,0,29,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x4) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFB);
	// lwz r10,10556(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwinm r4,r7,22,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 22) & 0x7;
	// lwz r23,12312(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12312);
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// fdivs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// stw r4,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// rlwinm r7,r7,19,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 19) & 0x7;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// rlwinm r18,r6,28,29,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0x7;
	// clrlwi r19,r5,31
	ctx.r19.u64 = ctx.r5.u32 & 0x1;
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// rlwinm r17,r6,30,31,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x1;
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// rlwinm r16,r11,1,31,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// fdivs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// rlwinm r15,r10,29,31,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// fdivs f29,f8,f13
	ctx.f29.f64 = double(float(ctx.f8.f64 / ctx.f13.f64));
	// fdivs f28,f0,f11
	ctx.f28.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// fadds f27,f12,f29
	ctx.f27.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// fadds f26,f10,f28
	ctx.f26.f64 = double(float(ctx.f10.f64 + ctx.f28.f64));
	// beq cr6,0x8233fb5c
	if (ctx.cr6.eq) goto loc_8233FB5C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8266ee60
	ctx.lr = 0x8233FB58;
	sub_8266EE60(ctx, base);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
loc_8233FB5C:
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x82665f00
	ctx.lr = 0x8233FB64;
	sub_82665F00(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r29,0
	ctx.r29.s64 = 0;
	// rldicr r26,r10,35,63
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// ori r30,r10,2048
	ctx.r30.u64 = ctx.r10.u64 | 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,10688(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10688);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,10688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10688, ctx.r10.u32);
	// ld r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | ctx.r26.u64;
	// std r11,32(r9)
	PPC_STORE_U64(ctx.r9.u32 + 32, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10548(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// ori r9,r9,112
	ctx.r9.u64 = ctx.r9.u64 | 112;
	// stw r9,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10548(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r9,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r29,12308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12308, ctx.r29.u32);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,10548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r29,12312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12312, ctx.r29.u32);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,10548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663b10
	ctx.lr = 0x8233FC2C;
	sub_82663B10(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// ori r27,r10,512
	ctx.r27.u64 = ctx.r10.u64 | 512;
	// lwz r10,10556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10556);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,10556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10556, ctx.r10.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82665358
	ctx.lr = 0x8233FC60;
	sub_82665358(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82665500
	ctx.lr = 0x8233FC6C;
	sub_82665500(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// lwz r6,1152(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwimi r6,r10,11,19,21
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x1C00) | (ctx.r6.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r6,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r6.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r6,1152(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwimi r6,r10,14,16,18
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xE000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r6,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r6.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// lwz r10,21780(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21780);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r10,12240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12240, ctx.r10.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lwz r4,21784(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 21784);
	// bl 0x82668b38
	ctx.lr = 0x8233FCE0;
	sub_82668B38(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826631f0
	ctx.lr = 0x8233FCF8;
	sub_826631F0(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,12292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12292, ctx.r10.u32);
	// rldicr r28,r8,37,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r7,12816(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12816);
	// subfic r7,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r7.s64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r8,10460(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10460);
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwimi r10,r8,0,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// stw r10,10460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10460, ctx.r10.u32);
	// ld r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | ctx.r28.u64;
	// std r10,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r10.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lwz r5,21800(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21800);
	// bl 0x82666190
	ctx.lr = 0x8233FD4C;
	sub_82666190(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,21788
	ctx.r11.s64 = ctx.r11.s64 + 21788;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82668790
	ctx.lr = 0x8233FD60;
	sub_82668790(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r22,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r22.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r20,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r20.u32);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lfs f31,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-24756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f30,228(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// bl 0x82665e80
	ctx.lr = 0x8233FD94;
	sub_82665E80(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82673da8
	ctx.lr = 0x8233FDA8;
	sub_82673DA8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r14,r1,176
	ctx.r14.s64 = ctx.r1.s64 + 176;
	// stfs f31,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f28,132(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r10,r10,-29904
	ctx.r10.s64 = ctx.r10.s64 + -29904;
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f28,180(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f30,188(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// addi r8,r8,15760
	ctx.r8.s64 = ctx.r8.s64 + 15760;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,15744
	ctx.r10.s64 = ctx.r10.s64 + 15744;
	// lvx128 v11,r0,r14
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r14.u32) & ~0xF), VectorMaskL));
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stvx128 v11,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r22,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r22.u32);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r22,32
	ctx.r22.s64 = 32;
	// stvx128 v0,r3,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stvx128 v12,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stvx128 v13,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r8,80
	ctx.r8.s64 = 80;
	// stfs f29,192(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f26,196(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stfs f30,204(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stvx128 v0,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,516(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r20,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r20.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lwz r3,13844(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13844);
	// stw r3,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82673d58
	ctx.lr = 0x8233FEB4;
	sub_82673D58(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10688(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10688);
	// rlwimi r9,r19,0,31,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r19.u32, 0) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r9,10688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10688, ctx.r9.u32);
	// ld r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | ctx.r26.u64;
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r25,12292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12292, ctx.r25.u32);
	// lwz r9,10460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10460);
	// lwz r11,12816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12816);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & ctx.r25.u64;
	// rlwimi r11,r9,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// stw r11,10460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10548(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwimi r9,r18,4,25,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r18.u32, 4) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r9,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10548(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwimi r9,r17,2,29,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r17.u32, 2) & 0x4) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r9,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r24,12308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12308, ctx.r24.u32);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r9,12832(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12832);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 & ctx.r24.u64;
	// rlwimi r11,r9,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,10548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r23,12312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12312, ctx.r23.u32);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r9,12832(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12832);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 & ctx.r23.u64;
	// rlwimi r9,r11,0,0,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// stw r9,10548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10548, ctx.r9.u32);
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663b10
	ctx.lr = 0x8233FFBC;
	sub_82663B10(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lwz r9,10556(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10556);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwimi r9,r15,3,28,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r15.u32, 3) & 0x8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r9,10556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10556, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82665358
	ctx.lr = 0x8233FFEC;
	sub_82665358(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82665500
	ctx.lr = 0x8233FFFC;
	sub_82665500(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,1152(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwimi r8,r10,10,19,21
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x1C00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE3FF);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r8,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r8.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,1152(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwimi r8,r10,13,16,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0xE000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r8,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r8.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82666190
	ctx.lr = 0x82340054;
	sub_82666190(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82665e80
	ctx.lr = 0x82340060;
	sub_82665E80(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d6c
	ctx.lr = 0x8234006C;
	__restfpr_26(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82340070"))) PPC_WEAK_FUNC(sub_82340070);
PPC_FUNC_IMPL(__imp__sub_82340070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82340078;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// vor128 v0,v77,v77
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r8,48
	ctx.r8.s64 = 48;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// addi r25,r3,1152
	ctx.r25.s64 = ctx.r3.s64 + 1152;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r26,r31,1048
	ctx.r26.s64 = ctx.r31.s64 + 1048;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stvx128 v0,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v77,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// stw r30,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r30.u32);
	// stw r30,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r30.u32);
	// stw r30,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r30.u32);
	// stw r30,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r30.u32);
	// stw r30,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r30.u32);
	// stw r30,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r30.u32);
	// stw r30,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r30.u32);
	// bl 0x822402c8
	ctx.lr = 0x82340148;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r25,32
	ctx.r3.s64 = ctx.r25.s64 + 32;
	// bl 0x822402c8
	ctx.lr = 0x82340158;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r25,64
	ctx.r3.s64 = ctx.r25.s64 + 64;
	// bl 0x822402c8
	ctx.lr = 0x82340168;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r25,96
	ctx.r3.s64 = ctx.r25.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x82340178;
	sub_822402C8(ctx, base);
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r30,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r30.u32);
	// addic. r3,r29,20
	ctx.xer.ca = ctx.r29.u32 > 4294967275;
	ctx.r3.s64 = ctx.r29.s64 + 20;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r30.u32);
	// addi r24,r31,1288
	ctx.r24.s64 = ctx.r31.s64 + 1288;
	// stw r30,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r30.u32);
	// stw r30,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r30.u32);
	// stw r30,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r30.u32);
	// stw r23,1312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1312, ctx.r23.u32);
	// beq 0x823401c0
	if (ctx.cr0.eq) goto loc_823401C0;
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
	// beq 0x823401c0
	if (ctx.cr0.eq) goto loc_823401C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x823401BC;
	sub_82546708(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
loc_823401C0:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823401f8
	if (ctx.cr6.eq) goto loc_823401F8;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82691500
	ctx.lr = 0x823401D4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823401f0
	if (ctx.cr0.eq) goto loc_823401F0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r5,r11,9096
	ctx.r5.s64 = ctx.r11.s64 + 9096;
	// bl 0x8259c810
	ctx.lr = 0x823401EC;
	sub_8259C810(ctx, base);
	// b 0x823401f4
	goto loc_823401F4;
loc_823401F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823401F4:
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
loc_823401F8:
	// addic. r28,r29,16
	ctx.xer.ca = ctx.r29.u32 > 4294967279;
	ctx.r28.s64 = ctx.r29.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8234023c
	if (ctx.cr0.eq) goto loc_8234023C;
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
	// beq 0x8234023c
	if (ctx.cr0.eq) goto loc_8234023C;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82691500
	ctx.lr = 0x82340218;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82340234
	if (ctx.cr0.eq) goto loc_82340234;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,9108
	ctx.r5.s64 = ctx.r11.s64 + 9108;
	// bl 0x8259c810
	ctx.lr = 0x82340230;
	sub_8259C810(ctx, base);
	// b 0x82340238
	goto loc_82340238;
loc_82340234:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82340238:
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
loc_8234023C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r30.u32);
	// stw r30,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r30.u32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r5,r29,192
	ctx.r5.s64 = ctx.r29.s64 + 192;
	// addi r9,r10,21056
	ctx.r9.s64 = ctx.r10.s64 + 21056;
	// lfs f31,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,816(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 816, temp.u32);
	// lwz r11,188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// stw r11,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r11.u32);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x825572c0
	ctx.lr = 0x82340278;
	sub_825572C0(ctx, base);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// stw r30,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r30.u32);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// addi r11,r31,716
	ctx.r11.s64 = ctx.r31.s64 + 716;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r10,r29,116
	ctx.r10.s64 = ctx.r29.s64 + 116;
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// stw r8,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r8.u32);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_823402A4:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823402c4
	if (!ctx.cr6.lt) goto loc_823402C4;
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x823402a4
	if (!ctx.cr0.eq) goto loc_823402A4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
loc_823402C4:
	// bne cr6,0x823402cc
	if (!ctx.cr6.eq) goto loc_823402CC;
	// stb r30,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r30.u8);
loc_823402CC:
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// lis r27,-31957
	ctx.r27.s64 = -2094333952;
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// stw r11,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r11.u32);
	// lwz r11,256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// stw r11,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// lwz r11,21120(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21120);
	// lwz r10,268(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r10.u32);
	// beq cr6,0x8234030c
	if (ctx.cr6.eq) goto loc_8234030C;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234030c
	if (ctx.cr6.eq) goto loc_8234030C;
	// stw r11,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r11.u32);
loc_8234030C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r10,260(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
	// addi r28,r11,-3728
	ctx.r28.s64 = ctx.r11.s64 + -3728;
	// stw r30,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r30.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r10.u32);
	// lfs f0,18892(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 18892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 828, temp.u32);
	// lwz r5,764(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// lwz r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82596630
	ctx.lr = 0x82340344;
	sub_82596630(ctx, base);
	// lwz r11,276(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 276);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82596630
	ctx.lr = 0x82340358;
	sub_82596630(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f0,25564(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 25564);
	ctx.f0.f64 = double(temp.f32);
	// li r9,12
	ctx.r9.s64 = 12;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r10,r11,31024
	ctx.r10.s64 = ctx.r11.s64 + 31024;
	// beq cr6,0x823403d4
	if (ctx.cr6.eq) goto loc_823403D4;
	// addi r11,r6,20
	ctx.r11.s64 = ctx.r6.s64 + 20;
	// vor128 v12,v67,v67
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// vor128 v13,v77,v77
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// li r8,576
	ctx.r8.s64 = 576;
	// lvrx v0,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v11,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi v0,v0,v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// vor v0,v11,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsel v12,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,36(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lwz r8,40(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// stfs f12,592(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,596(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,600(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// b 0x823403f8
	goto loc_823403F8;
loc_823403D4:
	// li r11,576
	ctx.r11.s64 = 576;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stvx128 v77,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
loc_823403F8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340464
	if (ctx.cr6.eq) goto loc_82340464;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// vor128 v12,v67,v67
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// vor128 v13,v77,v77
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// li r10,608
	ctx.r10.s64 = 608;
	// lvrx v0,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v11,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi v0,v0,v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// vor v0,v11,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsel v12,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,624(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// stfs f13,632(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// b 0x82340484
	goto loc_82340484;
loc_82340464:
	// li r11,608
	ctx.r11.s64 = 608;
	// stvx128 v77,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
loc_82340484:
	// lwz r11,388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 388);
	// addic. r3,r29,48
	ctx.xer.ca = ctx.r29.u32 > 4294967247;
	ctx.r3.s64 = ctx.r29.s64 + 48;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r11.u32);
	// beq 0x823404b8
	if (ctx.cr0.eq) goto loc_823404B8;
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
	// beq 0x823404b8
	if (ctx.cr0.eq) goto loc_823404B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x823404B0;
	sub_82546708(ctx, base);
	// stw r3,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r3.u32);
	// b 0x823404bc
	goto loc_823404BC;
loc_823404B8:
	// stw r30,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r30.u32);
loc_823404BC:
	// addic. r3,r29,44
	ctx.xer.ca = ctx.r29.u32 > 4294967251;
	ctx.r3.s64 = ctx.r29.s64 + 44;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823404e8
	if (ctx.cr0.eq) goto loc_823404E8;
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
	// beq 0x823404e8
	if (ctx.cr0.eq) goto loc_823404E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x823404E0;
	sub_82546708(ctx, base);
	// stw r3,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r3.u32);
	// b 0x823404ec
	goto loc_823404EC;
loc_823404E8:
	// stw r30,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r30.u32);
loc_823404EC:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r5,r29,52
	ctx.r5.s64 = ctx.r29.s64 + 52;
	// addi r11,r11,5176
	ctx.r11.s64 = ctx.r11.s64 + 5176;
	// li r3,856
	ctx.r3.s64 = 856;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x825572c0
	ctx.lr = 0x82340504;
	sub_825572C0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r30,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r30.u32);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r11.u32);
	// bl 0x823090c8
	ctx.lr = 0x8234052C;
	sub_823090C8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,636
	ctx.r3.s64 = ctx.r31.s64 + 636;
	// bl 0x823f6330
	ctx.lr = 0x82340538;
	sub_823F6330(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340548
	if (ctx.cr6.eq) goto loc_82340548;
	// bl 0x82241d18
	ctx.lr = 0x82340548;
	sub_82241D18(ctx, base);
loc_82340548:
	// stw r30,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823090c8
	ctx.lr = 0x82340554;
	sub_823090C8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,648
	ctx.r3.s64 = ctx.r31.s64 + 648;
	// bl 0x823f6330
	ctx.lr = 0x82340560;
	sub_823F6330(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340570
	if (ctx.cr6.eq) goto loc_82340570;
	// bl 0x82241d18
	ctx.lr = 0x82340570;
	sub_82241D18(ctx, base);
loc_82340570:
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r30.u32);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// stw r30,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r30.u32);
	// stw r30,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
	// stw r30,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r30.u32);
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
	// bl 0x82546708
	ctx.lr = 0x8234059C;
	sub_82546708(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r3,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r3.u32);
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r11,9116
	ctx.r4.s64 = ctx.r11.s64 + 9116;
	// lwz r11,280(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// lwz r11,284(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 284);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// bl 0x8257cbb8
	ctx.lr = 0x823405C4;
	sub_8257CBB8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,308(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f13,860(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 860, temp.u32);
	// addi r3,r11,9132
	ctx.r3.s64 = ctx.r11.s64 + 9132;
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// lfs f13,304(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// lfs f0,296(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
	// lfs f0,292(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,868(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 868, temp.u32);
	// lwz r11,312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// stfs f31,896(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 896, temp.u32);
	// stw r11,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r11.u32);
	// stw r30,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r30.u32);
	// stw r30,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r30.u32);
	// stw r30,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r30.u32);
	// stw r23,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r23.u32);
	// lfs f0,316(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,900(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 900, temp.u32);
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// bl 0x82547f38
	ctx.lr = 0x82340634;
	sub_82547F38(ctx, base);
	// bl 0x8226c3f0
	ctx.lr = 0x82340638;
	sub_8226C3F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823406c8
	if (ctx.cr6.eq) goto loc_823406C8;
	// lwz r11,21120(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823406c8
	if (!ctx.cr6.eq) goto loc_823406C8;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82691500
	ctx.lr = 0x82340658;
	sub_82691500(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x823406bc
	if (ctx.cr0.eq) goto loc_823406BC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r27,r28,4
	ctx.r27.s64 = ctx.r28.s64 + 4;
	// addi r11,r11,12424
	ctx.r11.s64 = ctx.r11.s64 + 12424;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// bl 0x826a3ae0
	ctx.lr = 0x82340680;
	sub_826A3AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x826a3c88
	ctx.lr = 0x8234069C;
	sub_826A3C88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f6330
	ctx.lr = 0x823406A8;
	sub_823F6330(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823406c0
	if (ctx.cr6.eq) goto loc_823406C0;
	// bl 0x82241d18
	ctx.lr = 0x823406B8;
	sub_82241D18(ctx, base);
	// b 0x823406c0
	goto loc_823406C0;
loc_823406BC:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_823406C0:
	// stw r28,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r28.u32);
	// b 0x823406cc
	goto loc_823406CC;
loc_823406C8:
	// stw r30,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r30.u32);
loc_823406CC:
	// stfs f31,912(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 912, temp.u32);
	// stw r23,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r23.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,31944
	ctx.r5.s64 = ctx.r11.s64 + 31944;
	// addi r3,r31,916
	ctx.r3.s64 = ctx.r31.s64 + 916;
	// bl 0x82fa2df8
	ctx.lr = 0x823406E8;
	sub_82FA2DF8(ctx, base);
	// stfs f31,988(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// stw r11,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r11.u32);
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// stw r30,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r30.u32);
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// stw r11,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r11.u32);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r11,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r11.u32);
	// lwz r11,344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// stw r11,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r11.u32);
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// stw r11,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r11.u32);
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// stfs f31,1036(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1036, temp.u32);
	// stw r11,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r11.u32);
	// stw r30,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r30.u32);
	// stw r30,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r30.u32);
	// stw r30,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r30.u32);
	// lwz r11,372(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 372);
	// stw r11,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r11.u32);
	// lwz r11,376(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 376);
	// stw r11,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r11.u32);
	// bl 0x823090c8
	ctx.lr = 0x82340750;
	sub_823090C8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823f6330
	ctx.lr = 0x8234075C;
	sub_823F6330(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234076c
	if (ctx.cr6.eq) goto loc_8234076C;
	// bl 0x82241d18
	ctx.lr = 0x8234076C;
	sub_82241D18(ctx, base);
loc_8234076C:
	// stw r30,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r30.u32);
	// stw r30,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r30.u32);
	// stw r30,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r30.u32);
	// stw r30,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r30.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x82340780;
	sub_8226C3F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82340794
	if (!ctx.cr6.eq) goto loc_82340794;
	// stw r30,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r30.u32);
	// b 0x823407b4
	goto loc_823407B4;
loc_82340794:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82691500
	ctx.lr = 0x8234079C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823407ac
	if (ctx.cr0.eq) goto loc_823407AC;
	// bl 0x8253d228
	ctx.lr = 0x823407A8;
	sub_8253D228(ctx, base);
	// b 0x823407b0
	goto loc_823407B0;
loc_823407AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823407B0:
	// stw r3,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r3.u32);
loc_823407B4:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r28,r10,32570
	ctx.r28.s64 = ctx.r10.s64 + 32570;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r11,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r11.u32);
	// lwz r11,392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// stw r11,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r11.u32);
	// lwz r11,396(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// stw r11,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r11.u32);
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1140, temp.u32);
	// lfs f0,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// stw r30,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r30.u32);
	// stw r30,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r30.u32);
	// stw r30,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r30.u32);
	// lwz r11,380(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	// stw r11,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r11.u32);
	// lwz r11,384(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 384);
	// stw r11,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r11.u32);
	// bl 0x82240328
	ctx.lr = 0x82340830;
	sub_82240328(ctx, base);
	// stfs f31,1180(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1180, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// bl 0x82240328
	ctx.lr = 0x82340844;
	sub_82240328(ctx, base);
	// stfs f31,1212(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1212, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// bl 0x82240328
	ctx.lr = 0x82340858;
	sub_82240328(ctx, base);
	// stfs f31,1244(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1244, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// bl 0x82240328
	ctx.lr = 0x8234086C;
	sub_82240328(ctx, base);
	// stfs f31,1276(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1276, temp.u32);
	// stfs f31,1280(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1280, temp.u32);
	// stw r30,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823418a8
	ctx.lr = 0x82340884;
	sub_823418A8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82691500
	ctx.lr = 0x8234088C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823408a0
	if (ctx.cr0.eq) goto loc_823408A0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// b 0x823408a4
	goto loc_823408A4;
loc_823408A0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823408A4:
	// stw r11,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r11,1216
	ctx.r3.s64 = ctx.r11.s64 + 1216;
	// bl 0x825aa9d0
	ctx.lr = 0x823408B4;
	sub_825AA9D0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r30,r11,9148
	ctx.r30.s64 = ctx.r11.s64 + 9148;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82899948
	ctx.lr = 0x823408C8;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x823408CC;
	sub_82899798(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899858
	ctx.lr = 0x823408D8;
	sub_82899858(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,9200
	ctx.r29.s64 = ctx.r11.s64 + 9200;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82899948
	ctx.lr = 0x823408EC;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x823408F0;
	sub_82899798(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899858
	ctx.lr = 0x823408FC;
	sub_82899858(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82385da0
	ctx.lr = 0x82340908;
	sub_82385DA0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r28,r11,9252
	ctx.r28.s64 = ctx.r11.s64 + 9252;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82899948
	ctx.lr = 0x8234091C;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82340920;
	sub_82899798(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899858
	ctx.lr = 0x8234092C;
	sub_82899858(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r27,r11,9312
	ctx.r27.s64 = ctx.r11.s64 + 9312;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82899948
	ctx.lr = 0x82340940;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82340944;
	sub_82899798(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899858
	ctx.lr = 0x82340950;
	sub_82899858(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82385da0
	ctx.lr = 0x8234095C;
	sub_82385DA0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r26,r11,9368
	ctx.r26.s64 = ctx.r11.s64 + 9368;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82899948
	ctx.lr = 0x82340970;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82340974;
	sub_82899798(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899858
	ctx.lr = 0x82340980;
	sub_82899858(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r25,r11,9428
	ctx.r25.s64 = ctx.r11.s64 + 9428;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82899948
	ctx.lr = 0x82340994;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82340998;
	sub_82899798(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899858
	ctx.lr = 0x823409A4;
	sub_82899858(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82385da0
	ctx.lr = 0x823409B0;
	sub_82385DA0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899948
	ctx.lr = 0x823409BC;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x823409C0;
	sub_82899798(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899858
	ctx.lr = 0x823409CC;
	sub_82899858(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899948
	ctx.lr = 0x823409D8;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x823409DC;
	sub_82899798(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899858
	ctx.lr = 0x823409E8;
	sub_82899858(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82385da0
	ctx.lr = 0x823409F4;
	sub_82385DA0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899948
	ctx.lr = 0x82340A00;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82340A04;
	sub_82899798(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899858
	ctx.lr = 0x82340A10;
	sub_82899858(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899948
	ctx.lr = 0x82340A1C;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82340A20;
	sub_82899798(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899858
	ctx.lr = 0x82340A2C;
	sub_82899858(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82385da0
	ctx.lr = 0x82340A38;
	sub_82385DA0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899948
	ctx.lr = 0x82340A44;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82340A48;
	sub_82899798(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899858
	ctx.lr = 0x82340A54;
	sub_82899858(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899948
	ctx.lr = 0x82340A60;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82340A64;
	sub_82899798(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82899858
	ctx.lr = 0x82340A70;
	sub_82899858(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82385da0
	ctx.lr = 0x82340A7C;
	sub_82385DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82340A8C"))) PPC_WEAK_FUNC(sub_82340A8C);
PPC_FUNC_IMPL(__imp__sub_82340A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82340A90"))) PPC_WEAK_FUNC(sub_82340A90);
PPC_FUNC_IMPL(__imp__sub_82340A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82340A98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823479e0
	ctx.lr = 0x82340AA4;
	sub_823479E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82347e00
	ctx.lr = 0x82340AAC;
	sub_82347E00(ctx, base);
	// lwz r30,1068(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1068);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82340ad0
	if (ctx.cr6.eq) goto loc_82340AD0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340ac8
	if (ctx.cr6.eq) goto loc_82340AC8;
	// bl 0x82241d18
	ctx.lr = 0x82340AC8;
	sub_82241D18(ctx, base);
loc_82340AC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x82340AD0;
	sub_82691540(ctx, base);
loc_82340AD0:
	// lwz r3,904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340af8
	if (ctx.cr6.eq) goto loc_82340AF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82340AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r28.u32);
loc_82340AF8:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r30,r11,23144
	ctx.r30.s64 = ctx.r11.s64 + 23144;
	// lwz r11,-2076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2076);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82340b14
	if (!ctx.cr6.eq) goto loc_82340B14;
	// bl 0x822e58d0
	ctx.lr = 0x82340B10;
	sub_822E58D0(ctx, base);
	// lwz r11,-2076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2076);
loc_82340B14:
	// stw r28,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// lwz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82340b54
	if (ctx.cr6.eq) goto loc_82340B54;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340b50
	if (ctx.cr6.eq) goto loc_82340B50;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r4,r10,9488
	ctx.r4.s64 = ctx.r10.s64 + 9488;
	// addi r3,r9,9556
	ctx.r3.s64 = ctx.r9.s64 + 9556;
	// li r5,546
	ctx.r5.s64 = 546;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82340B50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82340B50:
	// stw r28,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r28.u32);
loc_82340B54:
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340b68
	if (ctx.cr6.eq) goto loc_82340B68;
	// stw r28,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r28.u32);
	// stw r28,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r28.u32);
loc_82340B68:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30448);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82340b7c
	if (!ctx.cr6.eq) goto loc_82340B7C;
	// bl 0x82267a68
	ctx.lr = 0x82340B7C;
	sub_82267A68(ctx, base);
loc_82340B7C:
	// bl 0x82266370
	ctx.lr = 0x82340B80;
	sub_82266370(ctx, base);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340b90
	if (ctx.cr6.eq) goto loc_82340B90;
	// bl 0x822e5850
	ctx.lr = 0x82340B90;
	sub_822E5850(ctx, base);
loc_82340B90:
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340ba4
	if (ctx.cr6.eq) goto loc_82340BA4;
	// bl 0x822e5850
	ctx.lr = 0x82340BA4;
	sub_822E5850(ctx, base);
loc_82340BA4:
	// lwz r3,704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// stw r28,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340bbc
	if (ctx.cr6.eq) goto loc_82340BBC;
	// bl 0x825469e0
	ctx.lr = 0x82340BB8;
	sub_825469E0(ctx, base);
	// stw r28,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r28.u32);
loc_82340BBC:
	// lwz r3,708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340bd0
	if (ctx.cr6.eq) goto loc_82340BD0;
	// bl 0x825469e0
	ctx.lr = 0x82340BCC;
	sub_825469E0(ctx, base);
	// stw r28,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r28.u32);
loc_82340BD0:
	// lwz r3,560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340be4
	if (ctx.cr6.eq) goto loc_82340BE4;
	// bl 0x825469e0
	ctx.lr = 0x82340BE0;
	sub_825469E0(ctx, base);
	// stw r28,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r28.u32);
loc_82340BE4:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340bf8
	if (ctx.cr6.eq) goto loc_82340BF8;
	// bl 0x825469e0
	ctx.lr = 0x82340BF4;
	sub_825469E0(ctx, base);
	// stw r28,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r28.u32);
loc_82340BF8:
	// lwz r3,1076(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1076);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340c08
	if (ctx.cr6.eq) goto loc_82340C08;
	// bl 0x82691540
	ctx.lr = 0x82340C08;
	sub_82691540(ctx, base);
loc_82340C08:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r11,1216
	ctx.r30.s64 = ctx.r11.s64 + 1216;
	// lwz r3,1736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340c24
	if (ctx.cr6.eq) goto loc_82340C24;
	// bl 0x8266eed8
	ctx.lr = 0x82340C20;
	sub_8266EED8(ctx, base);
	// stw r28,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r28.u32);
loc_82340C24:
	// lwz r3,524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340c38
	if (ctx.cr6.eq) goto loc_82340C38;
	// bl 0x8266eed8
	ctx.lr = 0x82340C34;
	sub_8266EED8(ctx, base);
	// stw r28,524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 524, ctx.r28.u32);
loc_82340C38:
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340c4c
	if (ctx.cr6.eq) goto loc_82340C4C;
	// bl 0x8266eed8
	ctx.lr = 0x82340C48;
	sub_8266EED8(ctx, base);
	// stw r28,516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 516, ctx.r28.u32);
loc_82340C4C:
	// lwz r3,1288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// addi r29,r31,1288
	ctx.r29.s64 = ctx.r31.s64 + 1288;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340c80
	if (ctx.cr6.eq) goto loc_82340C80;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82340c7c
	if (ctx.cr6.eq) goto loc_82340C7C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82340C70:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82340c70
	if (!ctx.cr6.eq) goto loc_82340C70;
loc_82340C7C:
	// bl 0x82691540
	ctx.lr = 0x82340C80;
	sub_82691540(ctx, base);
loc_82340C80:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r30,r31,1152
	ctx.r30.s64 = ctx.r31.s64 + 1152;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// addi r3,r30,96
	ctx.r3.s64 = ctx.r30.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x82340CA0;
	sub_822402C8(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x82340CB0;
	sub_822402C8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x82340CC0;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822402c8
	ctx.lr = 0x82340CD0;
	sub_822402C8(ctx, base);
	// lwz r3,1052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340ce0
	if (ctx.cr6.eq) goto loc_82340CE0;
	// bl 0x82241d18
	ctx.lr = 0x82340CE0;
	sub_82241D18(ctx, base);
loc_82340CE0:
	// lwz r3,984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340cf0
	if (ctx.cr6.eq) goto loc_82340CF0;
	// bl 0x82241d18
	ctx.lr = 0x82340CF0;
	sub_82241D18(ctx, base);
loc_82340CF0:
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340d04
	if (ctx.cr6.eq) goto loc_82340D04;
	// bl 0x82241d18
	ctx.lr = 0x82340D04;
	sub_82241D18(ctx, base);
loc_82340D04:
	// lwz r3,480(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340d14
	if (ctx.cr6.eq) goto loc_82340D14;
	// bl 0x82241d18
	ctx.lr = 0x82340D14;
	sub_82241D18(ctx, base);
loc_82340D14:
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x822be2f8
	ctx.lr = 0x82340D1C;
	sub_822BE2F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82340D24"))) PPC_WEAK_FUNC(sub_82340D24);
PPC_FUNC_IMPL(__imp__sub_82340D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82340D28"))) PPC_WEAK_FUNC(sub_82340D28);
PPC_FUNC_IMPL(__imp__sub_82340D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82340D30;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8254b7e0
	ctx.lr = 0x82340D40;
	sub_8254B7E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234146c
	if (!ctx.cr6.eq) goto loc_8234146C;
	// bl 0x8226d8e8
	ctx.lr = 0x82340D50;
	sub_8226D8E8(ctx, base);
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234146c
	if (!ctx.cr6.eq) goto loc_8234146C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r30,r11,23112
	ctx.r30.s64 = ctx.r11.s64 + 23112;
	// lwz r11,-2044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82340d78
	if (!ctx.cr6.eq) goto loc_82340D78;
	// bl 0x822e58d0
	ctx.lr = 0x82340D74;
	sub_822E58D0(ctx, base);
	// lwz r11,-2044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2044);
loc_82340D78:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82340d8c
	if (ctx.cr6.eq) goto loc_82340D8C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82340dac
	if (!ctx.cr6.eq) goto loc_82340DAC;
loc_82340D8C:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82340da0
	if (!ctx.cr6.eq) goto loc_82340DA0;
	// bl 0x822599a0
	ctx.lr = 0x82340DA0;
	sub_822599A0(ctx, base);
loc_82340DA0:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8234146c
	if (ctx.cr0.eq) goto loc_8234146C;
loc_82340DAC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f31,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,2104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82340dd0
	if (ctx.cr6.gt) goto loc_82340DD0;
	// lfs f13,2080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2080);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82340DD0:
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340e28
	if (ctx.cr6.eq) goto loc_82340E28;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82340e20
	goto loc_82340E20;
loc_82340DE8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x824fa600
	ctx.lr = 0x82340E14;
	sub_824FA600(ctx, base);
	// bl 0x8245e648
	ctx.lr = 0x82340E18;
	sub_8245E648(ctx, base);
	// bl 0x82461450
	ctx.lr = 0x82340E1C;
	sub_82461450(ctx, base);
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
loc_82340E20:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82340de8
	if (!ctx.cr6.eq) goto loc_82340DE8;
loc_82340E28:
	// lwz r3,1096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340e38
	if (ctx.cr6.eq) goto loc_82340E38;
	// bl 0x82259ba8
	ctx.lr = 0x82340E38;
	sub_82259BA8(ctx, base);
loc_82340E38:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r26,-31957
	ctx.r26.s64 = -2094333952;
	// lis r30,-31957
	ctx.r30.s64 = -2094333952;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x8234100c
	if (ctx.cr6.gt) goto loc_8234100C;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// addi r12,r12,27952
	ctx.r12.s64 = ctx.r12.s64 + 27952;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// nop 
	// addi r12,r12,3700
	ctx.r12.s64 = ctx.r12.s64 + 3700;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82340E74;
	case 1:
		goto loc_82340E80;
	case 2:
		goto loc_82340E8C;
	case 3:
		goto loc_82340EA4;
	case 4:
		goto loc_82340EB0;
	case 5:
		goto loc_82340EBC;
	case 6:
		goto loc_82340ECC;
	case 7:
		goto loc_82340EDC;
	case 8:
		goto loc_82340EE8;
	case 9:
		goto loc_82340EF8;
	case 10:
		goto loc_82340F08;
	case 11:
		goto loc_82340F2C;
	case 12:
		goto loc_82340F38;
	case 13:
		goto loc_82340F48;
	case 14:
		goto loc_82340FC0;
	case 15:
		goto loc_82340FD0;
	case 16:
		goto loc_8234100C;
	case 17:
		goto loc_82341004;
	case 18:
		goto loc_82340FDC;
	default:
		__builtin_unreachable();
	}
loc_82340E74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82341df8
	ctx.lr = 0x82340E7C;
	sub_82341DF8(ctx, base);
	// b 0x8234100c
	goto loc_8234100C;
loc_82340E80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82341f68
	ctx.lr = 0x82340E88;
	sub_82341F68(ctx, base);
	// b 0x8234100c
	goto loc_8234100C;
loc_82340E8C:
	// bl 0x825143c8
	ctx.lr = 0x82340E90;
	sub_825143C8(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234100c
	if (ctx.cr6.eq) goto loc_8234100C;
	// bl 0x82513f60
	ctx.lr = 0x82340EA0;
	sub_82513F60(ctx, base);
	// b 0x8234100c
	goto loc_8234100C;
loc_82340EA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82342078
	ctx.lr = 0x82340EAC;
	sub_82342078(ctx, base);
	// b 0x8234100c
	goto loc_8234100C;
loc_82340EB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823421e8
	ctx.lr = 0x82340EB8;
	sub_823421E8(ctx, base);
	// b 0x8234100c
	goto loc_8234100C;
loc_82340EBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82342640
	ctx.lr = 0x82340EC8;
	sub_82342640(ctx, base);
	// b 0x8234100c
	goto loc_8234100C;
loc_82340ECC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82342ef0
	ctx.lr = 0x82340ED8;
	sub_82342EF0(ctx, base);
	// b 0x8234100c
	goto loc_8234100C;
loc_82340EDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82343000
	ctx.lr = 0x82340EE4;
	sub_82343000(ctx, base);
	// b 0x8234100c
	goto loc_8234100C;
loc_82340EE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82343168
	ctx.lr = 0x82340EF4;
	sub_82343168(ctx, base);
	// b 0x8234100c
	goto loc_8234100C;
loc_82340EF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82343378
	ctx.lr = 0x82340F04;
	sub_82343378(ctx, base);
	// b 0x8234100c
	goto loc_8234100C;
loc_82340F08:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234100c
	if (ctx.cr6.eq) goto loc_8234100C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82340F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8234100c
	goto loc_8234100C;
loc_82340F2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823435e0
	ctx.lr = 0x82340F34;
	sub_823435E0(ctx, base);
	// b 0x8234100c
	goto loc_8234100C;
loc_82340F38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82343730
	ctx.lr = 0x82340F44;
	sub_82343730(ctx, base);
	// b 0x8234100c
	goto loc_8234100C;
loc_82340F48:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340f70
	if (ctx.cr6.eq) goto loc_82340F70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82340F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234100c
	if (ctx.cr0.eq) goto loc_8234100C;
loc_82340F70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82347338
	ctx.lr = 0x82340F78;
	sub_82347338(ctx, base);
	// lwz r11,21092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82340fa8
	if (!ctx.cr6.eq) goto loc_82340FA8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82340fa8
	if (!ctx.cr6.eq) goto loc_82340FA8;
	// lwz r11,21120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82340fb0
	if (!ctx.cr6.eq) goto loc_82340FB0;
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x82340fb4
	goto loc_82340FB4;
loc_82340FA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823480c8
	ctx.lr = 0x82340FB0;
	sub_823480C8(ctx, base);
loc_82340FB0:
	// li r4,16
	ctx.r4.s64 = 16;
loc_82340FB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823418a8
	ctx.lr = 0x82340FBC;
	sub_823418A8(ctx, base);
	// b 0x8234100c
	goto loc_8234100C;
loc_82340FC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823439f8
	ctx.lr = 0x82340FCC;
	sub_823439F8(ctx, base);
	// b 0x8234100c
	goto loc_8234100C;
loc_82340FD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823444b0
	ctx.lr = 0x82340FD8;
	sub_823444B0(ctx, base);
	// b 0x8234100c
	goto loc_8234100C;
loc_82340FDC:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82340FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234100c
	if (ctx.cr0.eq) goto loc_8234100C;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x82340fb4
	goto loc_82340FB4;
loc_82341004:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82343840
	ctx.lr = 0x8234100C;
	sub_82343840(ctx, base);
loc_8234100C:
	// lwz r3,660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82341030
	if (ctx.cr6.eq) goto loc_82341030;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82341030
	if (ctx.cr6.eq) goto loc_82341030;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82572ea0
	ctx.lr = 0x82341030;
	sub_82572EA0(ctx, base);
loc_82341030:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823410a4
	if (ctx.cr6.eq) goto loc_823410A4;
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82341058
	if (!ctx.cr6.eq) goto loc_82341058;
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823410a4
	if (ctx.cr6.eq) goto loc_823410A4;
loc_82341058:
	// lwz r11,892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823410a4
	if (!ctx.cr6.eq) goto loc_823410A4;
	// lwz r11,21092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823410a0
	if (ctx.cr6.eq) goto loc_823410A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,21092(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21092);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822ff540
	ctx.lr = 0x82341084;
	sub_822FF540(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8256d470
	ctx.lr = 0x8234108C;
	sub_8256D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823410a0
	if (ctx.cr0.eq) goto loc_823410A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570620
	ctx.lr = 0x823410A0;
	sub_82570620(ctx, base);
loc_823410A0:
	// stw r27,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r27.u32);
loc_823410A4:
	// lwz r3,1068(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1068);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823410b4
	if (ctx.cr6.eq) goto loc_823410B4;
	// bl 0x8253d300
	ctx.lr = 0x823410B4;
	sub_8253D300(ctx, base);
loc_823410B4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823410c8
	if (ctx.cr6.eq) goto loc_823410C8;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x824f6748
	ctx.lr = 0x823410C8;
	sub_824F6748(ctx, base);
loc_823410C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8234113c
	if (ctx.cr6.eq) goto loc_8234113C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823410f4
	if (ctx.cr6.eq) goto loc_823410F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823410F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823410F4:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234110c
	if (ctx.cr6.eq) goto loc_8234110C;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x824fd4f8
	ctx.lr = 0x8234110C;
	sub_824FD4F8(ctx, base);
loc_8234110C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234113c
	if (ctx.cr6.eq) goto loc_8234113C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234113C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234113C:
	// lwz r11,21120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341184
	if (ctx.cr6.eq) goto loc_82341184;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r28,88(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// bl 0x825163a8
	ctx.lr = 0x82341170;
	sub_825163A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825164c0
	ctx.lr = 0x8234117C;
	sub_825164C0(ctx, base);
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// bl 0x82309860
	ctx.lr = 0x82341184;
	sub_82309860(ctx, base);
loc_82341184:
	// lwz r11,1076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1076);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823411a4
	if (ctx.cr6.eq) goto loc_823411A4;
	// lwz r11,21092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823411a4
	if (ctx.cr6.eq) goto loc_823411A4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8245c1f8
	ctx.lr = 0x823411A4;
	sub_8245C1F8(ctx, base);
loc_823411A4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234146c
	if (ctx.cr6.eq) goto loc_8234146C;
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// lis r28,-32231
	ctx.r28.s64 = -2112290816;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823412a4
	if (ctx.cr6.eq) goto loc_823412A4;
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823412a4
	if (!ctx.cr6.eq) goto loc_823412A4;
	// lwz r11,980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234123c
	if (!ctx.cr6.eq) goto loc_8234123C;
	// li r3,4668
	ctx.r3.s64 = 4668;
	// bl 0x82691500
	ctx.lr = 0x823411E8;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8234121c
	if (ctx.cr0.eq) goto loc_8234121C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// addic. r3,r30,12
	ctx.xer.ca = ctx.r30.u32 > 4294967283;
	ctx.r3.s64 = ctx.r30.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// addi r11,r11,10556
	ctx.r11.s64 = ctx.r11.s64 + 10556;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq 0x82341220
	if (ctx.cr0.eq) goto loc_82341220;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82538d88
	ctx.lr = 0x82341218;
	sub_82538D88(ctx, base);
	// b 0x82341220
	goto loc_82341220;
loc_8234121C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82341220:
	// lwz r3,984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// stw r30,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r30.u32);
	// stw r11,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234123c
	if (ctx.cr6.eq) goto loc_8234123C;
	// bl 0x82241d18
	ctx.lr = 0x8234123C;
	sub_82241D18(ctx, base);
loc_8234123C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f0,900(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,896(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 896, temp.u32);
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfs f13,384(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82341268
	if (ctx.cr6.lt) goto loc_82341268;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,-27104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823412a4
	if (!ctx.cr6.gt) goto loc_823412A4;
loc_82341268:
	// lhz r11,31944(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 31944);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82341280;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r11,9588
	ctx.r4.s64 = ctx.r11.s64 + 9588;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82341830
	ctx.lr = 0x82341298;
	sub_82341830(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// bl 0x82538f08
	ctx.lr = 0x823412A4;
	sub_82538F08(ctx, base);
loc_823412A4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823412c8
	if (ctx.cr6.eq) goto loc_823412C8;
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823412d4
	if (ctx.cr6.eq) goto loc_823412D4;
loc_823412C8:
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82341388
	if (ctx.cr6.eq) goto loc_82341388;
loc_823412D4:
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82341378
	if (ctx.cr6.eq) goto loc_82341378;
	// addic. r29,r31,820
	ctx.xer.ca = ctx.r31.u32 > 4294966475;
	ctx.r29.s64 = ctx.r31.s64 + 820;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82341378
	if (ctx.cr0.eq) goto loc_82341378;
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
	// beq 0x82341378
	if (ctx.cr0.eq) goto loc_82341378;
	// lwz r30,1304(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82341378
	if (ctx.cr6.eq) goto loc_82341378;
	// lhz r11,31944(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 31944);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,162
	ctx.r3.s64 = ctx.r1.s64 + 162;
	// sth r11,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8234131C;
	sub_82FA7CF0(ctx, base);
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82341830
	ctx.lr = 0x82341330;
	sub_82341830(ctx, base);
	// lwz r11,684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82341360
	if (!ctx.cr6.eq) goto loc_82341360;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82691500
	ctx.lr = 0x82341344;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82341358
	if (ctx.cr0.eq) goto loc_82341358;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8253dfe8
	ctx.lr = 0x82341354;
	sub_8253DFE8(ctx, base);
	// b 0x8234135c
	goto loc_8234135C;
loc_82341358:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234135C:
	// stw r3,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r3.u32);
loc_82341360:
	// lwz r4,680(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// lwz r3,684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// bl 0x8253e168
	ctx.lr = 0x8234136C;
	sub_8253E168(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// bl 0x8253e0d8
	ctx.lr = 0x82341378;
	sub_8253E0D8(ctx, base);
loc_82341378:
	// lwz r11,21120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341388
	if (ctx.cr6.eq) goto loc_82341388;
	// bl 0x823067e0
	ctx.lr = 0x82341388;
	sub_823067E0(ctx, base);
loc_82341388:
	// lwz r10,684(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823413e4
	if (ctx.cr6.eq) goto loc_823413E4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,244(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823413bc
	if (!ctx.cr6.eq) goto loc_823413BC;
	// lwz r9,260(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823413bc
	if (!ctx.cr6.eq) goto loc_823413BC;
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823413e4
	if (ctx.cr6.eq) goto loc_823413E4;
loc_823413BC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823413e4
	if (ctx.cr6.eq) goto loc_823413E4;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r4,r11,19908
	ctx.r4.s64 = ctx.r11.s64 + 19908;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x823413E4;
	sub_826A7620(ctx, base);
loc_823413E4:
	// lwz r11,684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234146c
	if (ctx.cr6.eq) goto loc_8234146C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8234146c
	if (ctx.cr6.eq) goto loc_8234146C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r4.u32);
	// bne 0x82341464
	if (!ctx.cr0.eq) goto loc_82341464;
	// lhz r11,31944(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 31944);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,162
	ctx.r3.s64 = ctx.r1.s64 + 162;
	// sth r11,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82341448;
	sub_82FA7CF0(ctx, base);
	// lwz r11,1304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82341830
	ctx.lr = 0x82341460;
	sub_82341830(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82341464:
	// lwz r3,684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// bl 0x8253e0d8
	ctx.lr = 0x8234146C;
	sub_8253E0D8(ctx, base);
loc_8234146C:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82341478"))) PPC_WEAK_FUNC(sub_82341478);
PPC_FUNC_IMPL(__imp__sub_82341478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82341480;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f31,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,2104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x823414b8
	if (ctx.cr6.gt) goto loc_823414B8;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lfs f13,2080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2080);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r10,23112
	ctx.r11.s64 = ctx.r10.s64 + 23112;
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_823414B8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x823414dc
	if (ctx.cr6.eq) goto loc_823414DC;
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823414dc
	if (ctx.cr6.eq) goto loc_823414DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x824fd4f8
	ctx.lr = 0x823414DC;
	sub_824FD4F8(ctx, base);
loc_823414DC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82341570
	if (!ctx.cr6.eq) goto loc_82341570;
	// addi r31,r29,64
	ctx.r31.s64 = ctx.r29.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bd318
	ctx.lr = 0x823414F4;
	sub_822BD318(ctx, base);
	// lis r28,-32231
	ctx.r28.s64 = -2112290816;
	// lfs f1,13192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	ctx.f1.f64 = double(temp.f32);
	// lwz r30,64(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lwz r27,68(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// b 0x82341540
	goto loc_82341540;
loc_82341508:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234153c
	if (!ctx.cr6.eq) goto loc_8234153C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bd418
	ctx.lr = 0x82341528;
	sub_822BD418(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822bb068
	ctx.lr = 0x82341538;
	sub_822BB068(ctx, base);
	// lfs f1,13192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	ctx.f1.f64 = double(temp.f32);
loc_8234153C:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_82341540:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82341508
	if (!ctx.cr6.eq) goto loc_82341508;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r9,48
	ctx.r9.s64 = 48;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stvx128 v0,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v77,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x8234157c
	goto loc_8234157C;
loc_82341570:
	// addi r3,r29,64
	ctx.r3.s64 = ctx.r29.s64 + 64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822bd0c8
	ctx.lr = 0x8234157C;
	sub_822BD0C8(ctx, base);
loc_8234157C:
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82341590
	if (ctx.cr6.eq) goto loc_82341590;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8227d668
	ctx.lr = 0x82341590;
	sub_8227D668(ctx, base);
loc_82341590:
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234162c
	if (ctx.cr6.eq) goto loc_8234162C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x823415b0
	if (ctx.cr6.eq) goto loc_823415B0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8234162c
	if (!ctx.cr6.eq) goto loc_8234162C;
loc_823415B0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822ed090
	ctx.lr = 0x823415B8;
	sub_822ED090(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82341604
	if (ctx.cr0.eq) goto loc_82341604;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x823415d8
	if (!ctx.cr6.eq) goto loc_823415D8;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823418a8
	ctx.lr = 0x823415D8;
	sub_823418A8(ctx, base);
loc_823415D8:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234162c
	if (ctx.cr6.eq) goto loc_8234162C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8234162c
	goto loc_8234162C;
loc_82341604:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8234162c
	if (!ctx.cr6.eq) goto loc_8234162C;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82341628
	if (!ctx.cr6.eq) goto loc_82341628;
	// li r4,9
	ctx.r4.s64 = 9;
loc_82341628:
	// bl 0x823418a8
	ctx.lr = 0x8234162C;
	sub_823418A8(ctx, base);
loc_8234162C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82341638"))) PPC_WEAK_FUNC(sub_82341638);
PPC_FUNC_IMPL(__imp__sub_82341638) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8254b7e0
	ctx.lr = 0x82341658;
	sub_8254B7E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82341810
	if (!ctx.cr6.eq) goto loc_82341810;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r31,r11,23144
	ctx.r31.s64 = ctx.r11.s64 + 23144;
	// lwz r11,-2076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2076);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82341680
	if (!ctx.cr6.eq) goto loc_82341680;
	// bl 0x822e58d0
	ctx.lr = 0x8234167C;
	sub_822E58D0(ctx, base);
	// lwz r11,-2076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2076);
loc_82341680:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82341694
	if (ctx.cr6.eq) goto loc_82341694;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823416b4
	if (!ctx.cr6.eq) goto loc_823416B4;
loc_82341694:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823416a8
	if (!ctx.cr6.eq) goto loc_823416A8;
	// bl 0x822599a0
	ctx.lr = 0x823416A8;
	sub_822599A0(ctx, base);
loc_823416A8:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82341810
	if (ctx.cr0.eq) goto loc_82341810;
loc_823416B4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x82341810
	if (ctx.cr6.eq) goto loc_82341810;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f31,-2340(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,2104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x823416e4
	if (ctx.cr6.gt) goto loc_823416E4;
	// lfs f13,2080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2080);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_823416E4:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x823417bc
	if (ctx.cr6.eq) goto loc_823417BC;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x82341794
	if (ctx.cr6.eq) goto loc_82341794;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// beq cr6,0x82341764
	if (ctx.cr6.eq) goto loc_82341764;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bne cr6,0x823417c4
	if (!ctx.cr6.eq) goto loc_823417C4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341720
	if (ctx.cr6.eq) goto loc_82341720;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234171C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82341724
	goto loc_82341724;
loc_82341720:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82341724:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823417c4
	if (ctx.cr6.eq) goto loc_823417C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82347e00
	ctx.lr = 0x82341734;
	sub_82347E00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823479e0
	ctx.lr = 0x8234173C;
	sub_823479E0(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823418a8
	ctx.lr = 0x82341748;
	sub_823418A8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823417c4
	if (ctx.cr6.eq) goto loc_823417C4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823418a8
	ctx.lr = 0x82341760;
	sub_823418A8(ctx, base);
	// b 0x823417c4
	goto loc_823417C4;
loc_82341764:
	// lwz r11,1088(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1088);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823417c4
	if (ctx.cr6.eq) goto loc_823417C4;
	// lwz r3,1056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1056);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823417c4
	if (ctx.cr6.eq) goto loc_823417C4;
	// bl 0x8250e470
	ctx.lr = 0x82341780;
	sub_8250E470(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823417c4
	if (ctx.cr0.eq) goto loc_823417C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823479e0
	ctx.lr = 0x82341790;
	sub_823479E0(ctx, base);
	// b 0x823417c4
	goto loc_823417C4;
loc_82341794:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823417c4
	if (ctx.cr6.eq) goto loc_823417C4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823417B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823417c4
	goto loc_823417C4;
loc_823417BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82345970
	ctx.lr = 0x823417C4;
	sub_82345970(ctx, base);
loc_823417C4:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341810
	if (ctx.cr6.eq) goto loc_82341810;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823417E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82341810:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8234182C"))) PPC_WEAK_FUNC(sub_8234182C);
PPC_FUNC_IMPL(__imp__sub_8234182C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82341830"))) PPC_WEAK_FUNC(sub_82341830);
PPC_FUNC_IMPL(__imp__sub_82341830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82341838;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341874
	if (ctx.cr6.eq) goto loc_82341874;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8259c8e0
	ctx.lr = 0x8234186C;
	sub_8259C8E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8234189c
	if (!ctx.cr0.eq) goto loc_8234189C;
loc_82341874:
	// lwz r11,148(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234189c
	if (ctx.cr6.eq) goto loc_8234189C;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8259c8e0
	ctx.lr = 0x8234189C;
	sub_8259C8E0(ctx, base);
loc_8234189C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823418A4"))) PPC_WEAK_FUNC(sub_823418A4);
PPC_FUNC_IMPL(__imp__sub_823418A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823418A8"))) PPC_WEAK_FUNC(sub_823418A8);
PPC_FUNC_IMPL(__imp__sub_823418A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x823418B0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82341dec
	if (ctx.cr6.eq) goto loc_82341DEC;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// lfs f31,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82341904
	if (ctx.cr6.eq) goto loc_82341904;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82341960
	if (!ctx.cr6.eq) goto loc_82341960;
	// lwz r11,1068(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// stw r25,1072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1072, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341960
	if (ctx.cr6.eq) goto loc_82341960;
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// b 0x82341960
	goto loc_82341960;
loc_82341904:
	// addi r11,r30,-13
	ctx.r11.s64 = ctx.r30.s64 + -13;
	// stfs f31,912(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 912, temp.u32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r5,r10,31944
	ctx.r5.s64 = ctx.r10.s64 + 31944;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r11,908(r29)
	PPC_STORE_U32(ctx.r29.u32 + 908, ctx.r11.u32);
	// addi r3,r29,916
	ctx.r3.s64 = ctx.r29.s64 + 916;
	// bl 0x82fa2df8
	ctx.lr = 0x8234192C;
	sub_82FA2DF8(ctx, base);
	// lwz r31,904(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 904);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82341960
	if (ctx.cr6.eq) goto loc_82341960;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82341960
	if (ctx.cr6.eq) goto loc_82341960;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,12236
	ctx.r4.s64 = ctx.r11.s64 + 12236;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x8234195C;
	sub_826A7620(ctx, base);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_82341960:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 18, ctx.xer);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// bgt cr6,0x82341dec
	if (ctx.cr6.gt) goto loc_82341DEC;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// rlwinm r0,r30,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,27856
	ctx.r12.s64 = ctx.r12.s64 + 27856;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// addi r12,r12,6556
	ctx.r12.s64 = ctx.r12.s64 + 6556;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_8234199C;
	case 1:
		goto loc_82341DEC;
	case 2:
		goto loc_82341DEC;
	case 3:
		goto loc_82341DEC;
	case 4:
		goto loc_82341DEC;
	case 5:
		goto loc_82341A18;
	case 6:
		goto loc_82341A38;
	case 7:
		goto loc_82341A40;
	case 8:
		goto loc_82341A58;
	case 9:
		goto loc_82341DEC;
	case 10:
		goto loc_82341AD8;
	case 11:
		goto loc_82341B10;
	case 12:
		goto loc_82341DEC;
	case 13:
		goto loc_82341B18;
	case 14:
		goto loc_82341DEC;
	case 15:
		goto loc_82341B24;
	case 16:
		goto loc_82341B54;
	case 17:
		goto loc_82341DE8;
	case 18:
		goto loc_82341B30;
	default:
		__builtin_unreachable();
	}
loc_8234199C:
	// lwz r11,1080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823419f8
	if (!ctx.cr6.eq) goto loc_823419F8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823419f4
	if (ctx.cr6.eq) goto loc_823419F4;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r7,r11,9488
	ctx.r7.s64 = ctx.r11.s64 + 9488;
	// addi r6,r8,9600
	ctx.r6.s64 = ctx.r8.s64 + 9600;
	// lwz r11,21092(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21092);
	// li r8,1281
	ctx.r8.s64 = 1281;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bctrl 
	ctx.lr = 0x823419F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823419F4:
	// stw r24,1080(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1080, ctx.r24.u32);
loc_823419F8:
	// lwz r11,1092(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82341dec
	if (!ctx.cr6.eq) goto loc_82341DEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8254b6b8
	ctx.lr = 0x82341A10;
	sub_8254B6B8(ctx, base);
	// stw r3,1092(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1092, ctx.r3.u32);
	// b 0x82341dec
	goto loc_82341DEC;
loc_82341A18:
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82341dec
	if (ctx.cr6.eq) goto loc_82341DEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341A34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82341dec
	goto loc_82341DEC;
loc_82341A38:
	// stw r25,852(r29)
	PPC_STORE_U32(ctx.r29.u32 + 852, ctx.r25.u32);
	// b 0x82341dec
	goto loc_82341DEC;
loc_82341A40:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// stw r25,832(r29)
	PPC_STORE_U32(ctx.r29.u32 + 832, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341dec
	if (ctx.cr6.eq) goto loc_82341DEC;
	// stw r25,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r25.u32);
	// b 0x82341dec
	goto loc_82341DEC;
loc_82341A58:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stfs f31,872(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 872, temp.u32);
	// lwz r31,21092(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21092);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82341a80
	if (ctx.cr6.eq) goto loc_82341A80;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,-16640
	ctx.r11.s64 = ctx.r11.s64 + -16640;
	// lfs f0,204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 128, temp.u32);
loc_82341A80:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,10496
	ctx.r4.s64 = ctx.r11.s64 + 10496;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82fa77c0
	ctx.lr = 0x82341A94;
	sub_82FA77C0(ctx, base);
	// li r5,228
	ctx.r5.s64 = 228;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82fa7cf0
	ctx.lr = 0x82341AA4;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,10524
	ctx.r4.s64 = ctx.r11.s64 + 10524;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82fa77c0
	ctx.lr = 0x82341AB8;
	sub_82FA77C0(ctx, base);
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82fa7cf0
	ctx.lr = 0x82341AC8;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82341dec
	if (ctx.cr6.eq) goto loc_82341DEC;
	// bl 0x8226c3f0
	ctx.lr = 0x82341AD4;
	sub_8226C3F0(ctx, base);
	// b 0x82341dec
	goto loc_82341DEC;
loc_82341AD8:
	// lwz r11,684(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341dec
	if (ctx.cr6.eq) goto loc_82341DEC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82341dec
	if (ctx.cr6.eq) goto loc_82341DEC;
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r10,19908
	ctx.r4.s64 = ctx.r10.s64 + 19908;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x82341B0C;
	sub_826A7620(ctx, base);
	// b 0x82341dec
	goto loc_82341DEC;
loc_82341B10:
	// stw r25,1000(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1000, ctx.r25.u32);
	// b 0x82341dec
	goto loc_82341DEC;
loc_82341B18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823471b0
	ctx.lr = 0x82341B20;
	sub_823471B0(ctx, base);
	// b 0x82341dec
	goto loc_82341DEC;
loc_82341B24:
	// bl 0x82240590
	ctx.lr = 0x82341B28;
	sub_82240590(ctx, base);
	// stw r25,1040(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1040, ctx.r25.u32);
	// b 0x82341dec
	goto loc_82341DEC;
loc_82341B30:
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r29,656
	ctx.r4.s64 = ctx.r29.s64 + 656;
	// addi r3,r29,648
	ctx.r3.s64 = ctx.r29.s64 + 648;
	// bl 0x823490b0
	ctx.lr = 0x82341B50;
	sub_823490B0(ctx, base);
	// b 0x82341dec
	goto loc_82341DEC;
loc_82341B54:
	// lis r26,-31957
	ctx.r26.s64 = -2094333952;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r27,-31957
	ctx.r27.s64 = -2094333952;
	// addi r28,r11,24856
	ctx.r28.s64 = ctx.r11.s64 + 24856;
	// lis r30,-31957
	ctx.r30.s64 = -2094333952;
	// lwz r11,21092(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82341bb8
	if (!ctx.cr6.eq) goto loc_82341BB8;
	// lwz r11,21748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82341bb8
	if (!ctx.cr6.eq) goto loc_82341BB8;
	// lwz r11,21120(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82341bb8
	if (!ctx.cr6.eq) goto loc_82341BB8;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82341ba4
	if (ctx.cr6.eq) goto loc_82341BA4;
	// bl 0x8226c3f0
	ctx.lr = 0x82341B9C;
	sub_8226C3F0(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// b 0x82341ba8
	goto loc_82341BA8;
loc_82341BA4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82341BA8:
	// stw r11,132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 132, ctx.r11.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x82341BB0;
	sub_8226C3F0(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,140(r28)
	PPC_STORE_U32(ctx.r28.u32 + 140, ctx.r11.u32);
loc_82341BB8:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r4,31080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82341bd0
	if (!ctx.cr6.eq) goto loc_82341BD0;
	// bl 0x8254abe0
	ctx.lr = 0x82341BCC;
	sub_8254ABE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82341BD0:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c1b0
	ctx.lr = 0x82341BDC;
	sub_8254C1B0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341c64
	if (ctx.cr6.eq) goto loc_82341C64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828e3618
	ctx.lr = 0x82341BF0;
	sub_828E3618(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82341c64
	if (ctx.cr0.eq) goto loc_82341C64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824261e8
	ctx.lr = 0x82341C04;
	sub_824261E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,56(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82341c54
	if (ctx.cr6.eq) goto loc_82341C54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,324
	ctx.r3.s64 = ctx.r3.s64 + 324;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828df890
	ctx.lr = 0x82341C34;
	sub_828DF890(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828dffd8
	ctx.lr = 0x82341C54;
	sub_828DFFD8(ctx, base);
loc_82341C54:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82341c64
	if (ctx.cr6.eq) goto loc_82341C64;
	// bl 0x82241d18
	ctx.lr = 0x82341C64;
	sub_82241D18(ctx, base);
loc_82341C64:
	// lwz r3,21748(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21748);
	// li r31,5
	ctx.r31.s64 = 5;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82341c7c
	if (ctx.cr6.eq) goto loc_82341C7C;
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// bl 0x82337e10
	ctx.lr = 0x82341C7C;
	sub_82337E10(ctx, base);
loc_82341C7C:
	// lwz r3,21120(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82341ce8
	if (ctx.cr6.eq) goto loc_82341CE8;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,24448
	ctx.r11.s64 = ctx.r11.s64 + 24448;
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82341ca4
	if (ctx.cr6.eq) goto loc_82341CA4;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82341ca8
	goto loc_82341CA8;
loc_82341CA4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82341CA8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341ce0
	if (ctx.cr6.eq) goto loc_82341CE0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82341cc0
	if (ctx.cr6.eq) goto loc_82341CC0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82341cc4
	goto loc_82341CC4;
loc_82341CC0:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82341CC4:
	// lfs f0,2088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2088);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f31.f64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
loc_82341CE0:
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// bl 0x82305b58
	ctx.lr = 0x82341CE8;
	sub_82305B58(ctx, base);
loc_82341CE8:
	// lwz r3,21092(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21092);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82341d4c
	if (ctx.cr6.eq) goto loc_82341D4C;
	// stw r25,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r25.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r31,1076(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1076);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82341d18
	if (!ctx.cr6.eq) goto loc_82341D18;
	// bl 0x822feff8
	ctx.lr = 0x82341D10;
	sub_822FEFF8(ctx, base);
	// lwz r3,21092(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21092);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_82341D18:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82341d24
	if (ctx.cr6.eq) goto loc_82341D24;
	// bl 0x8245c440
	ctx.lr = 0x82341D24;
	sub_8245C440(ctx, base);
loc_82341D24:
	// lwz r11,1080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82341dd4
	if (!ctx.cr6.eq) goto loc_82341DD4;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82341dd0
	if (ctx.cr6.eq) goto loc_82341DD0;
	// li r8,1383
	ctx.r8.s64 = 1383;
	// b 0x82341da8
	goto loc_82341DA8;
loc_82341D4C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,9632
	ctx.r3.s64 = ctx.r11.s64 + 9632;
	// bl 0x826909a0
	ctx.lr = 0x82341D5C;
	sub_826909A0(ctx, base);
	// lwz r11,1080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1080);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82341dd4
	if (!ctx.cr6.eq) goto loc_82341DD4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82544c50
	ctx.lr = 0x82341D78;
	sub_82544C50(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82341dd0
	if (ctx.cr6.eq) goto loc_82341DD0;
	// beq 0x82341da4
	if (ctx.cr0.eq) goto loc_82341DA4;
	// li r8,1396
	ctx.r8.s64 = 1396;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82341db0
	goto loc_82341DB0;
loc_82341DA4:
	// li r8,1400
	ctx.r8.s64 = 1400;
loc_82341DA8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82341DB0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r7,r10,9488
	ctx.r7.s64 = ctx.r10.s64 + 9488;
	// addi r6,r9,9600
	ctx.r6.s64 = ctx.r9.s64 + 9600;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82341DD0:
	// stw r24,1080(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1080, ctx.r24.u32);
loc_82341DD4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82341dec
	if (ctx.cr6.eq) goto loc_82341DEC;
	// bl 0x82241d18
	ctx.lr = 0x82341DE4;
	sub_82241D18(ctx, base);
	// b 0x82341dec
	goto loc_82341DEC;
loc_82341DE8:
	// stw r25,1312(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1312, ctx.r25.u32);
loc_82341DEC:
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82341DF8"))) PPC_WEAK_FUNC(sub_82341DF8);
PPC_FUNC_IMPL(__imp__sub_82341DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82341E00;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,30428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82341e24
	if (!ctx.cr6.eq) goto loc_82341E24;
	// bl 0x822599a0
	ctx.lr = 0x82341E20;
	sub_822599A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82341E24:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82341f48
	if (ctx.cr0.eq) goto loc_82341F48;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r31,30448(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30448);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82341e48
	if (!ctx.cr6.eq) goto loc_82341E48;
	// bl 0x82267a68
	ctx.lr = 0x82341E44;
	sub_82267A68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82341E48:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r4,31080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82341e60
	if (!ctx.cr6.eq) goto loc_82341E60;
	// bl 0x8254abe0
	ctx.lr = 0x82341E5C;
	sub_8254ABE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82341E60:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c1b0
	ctx.lr = 0x82341E6C;
	sub_8254C1B0(ctx, base);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82341ec0
	if (ctx.cr0.eq) goto loc_82341EC0;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823f62d0
	ctx.lr = 0x82341E84;
	sub_823F62D0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,1104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1104, ctx.r11.u32);
	// beq cr6,0x82341ea0
	if (ctx.cr6.eq) goto loc_82341EA0;
	// bl 0x82241d18
	ctx.lr = 0x82341EA0;
	sub_82241D18(ctx, base);
loc_82341EA0:
	// lwz r11,1112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1112);
	// addi r4,r30,1112
	ctx.r4.s64 = ctx.r30.s64 + 1112;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341eb8
	if (ctx.cr6.eq) goto loc_82341EB8;
	// lwz r3,1104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// bl 0x8225af78
	ctx.lr = 0x82341EB8;
	sub_8225AF78(ctx, base);
loc_82341EB8:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82341f34
	goto loc_82341F34;
loc_82341EC0:
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82341ef4
	if (ctx.cr0.eq) goto loc_82341EF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828e3b10
	ctx.lr = 0x82341EDC;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82341f34
	if (ctx.cr0.eq) goto loc_82341F34;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828e4c10
	ctx.lr = 0x82341EF0;
	sub_828E4C10(ctx, base);
	// b 0x82341f34
	goto loc_82341F34;
loc_82341EF4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	// bne 0x82341f2c
	if (!ctx.cr0.eq) goto loc_82341F2C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r28,1108(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1108);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823f62d0
	ctx.lr = 0x82341F18;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82266268
	ctx.lr = 0x82341F28;
	sub_82266268(ctx, base);
	// b 0x82341f34
	goto loc_82341F34;
loc_82341F2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266450
	ctx.lr = 0x82341F34;
	sub_82266450(ctx, base);
loc_82341F34:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82341f4c
	if (ctx.cr6.eq) goto loc_82341F4C;
	// bl 0x82241d18
	ctx.lr = 0x82341F44;
	sub_82241D18(ctx, base);
	// b 0x82341f4c
	goto loc_82341F4C;
loc_82341F48:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82341F4C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82341f60
	if (ctx.cr6.eq) goto loc_82341F60;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823418a8
	ctx.lr = 0x82341F60;
	sub_823418A8(ctx, base);
loc_82341F60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82341F68"))) PPC_WEAK_FUNC(sub_82341F68);
PPC_FUNC_IMPL(__imp__sub_82341F68) {
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
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,30428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82341f98
	if (!ctx.cr6.eq) goto loc_82341F98;
	// bl 0x822599a0
	ctx.lr = 0x82341F94;
	sub_822599A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82341F98:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82342054
	if (ctx.cr0.eq) goto loc_82342054;
	// lwz r3,1104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// bl 0x828e3b10
	ctx.lr = 0x82341FAC;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82342048
	if (ctx.cr0.eq) goto loc_82342048;
	// lwz r3,1104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// bl 0x828e3618
	ctx.lr = 0x82341FBC;
	sub_828E3618(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82342048
	if (ctx.cr0.eq) goto loc_82342048;
	// lwz r11,1096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82342060
	if (!ctx.cr6.eq) goto loc_82342060;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82691500
	ctx.lr = 0x82341FD8;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82342038
	if (ctx.cr0.eq) goto loc_82342038;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,1104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82550538
	ctx.lr = 0x82341FF0;
	sub_82550538(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-27952
	ctx.r10.s64 = ctx.r10.s64 + -27952;
	// addi r9,r9,-27888
	ctx.r9.s64 = ctx.r9.s64 + -27888;
	// std r11,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r11.u64);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stb r8,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r8.u8);
	// stb r11,149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 149, ctx.r11.u8);
	// stb r11,150(r31)
	PPC_STORE_U8(ctx.r31.u32 + 150, ctx.r11.u8);
	// stb r11,151(r31)
	PPC_STORE_U8(ctx.r31.u32 + 151, ctx.r11.u8);
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
	// b 0x8234203c
	goto loc_8234203C;
loc_82342038:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234203C:
	// stw r3,1096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1096, ctx.r3.u32);
	// bl 0x828c5840
	ctx.lr = 0x82342044;
	sub_828C5840(ctx, base);
	// b 0x82342054
	goto loc_82342054;
loc_82342048:
	// lwz r11,1096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342060
	if (ctx.cr6.eq) goto loc_82342060;
loc_82342054:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823418a8
	ctx.lr = 0x82342060;
	sub_823418A8(ctx, base);
loc_82342060:
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

__attribute__((alias("__imp__sub_82342078"))) PPC_WEAK_FUNC(sub_82342078);
PPC_FUNC_IMPL(__imp__sub_82342078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82342080;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,4
	ctx.r30.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234209c
	if (ctx.cr6.eq) goto loc_8234209C;
	// li r30,5
	ctx.r30.s64 = 5;
loc_8234209C:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823420b0
	if (!ctx.cr6.eq) goto loc_823420B0;
	// bl 0x822599a0
	ctx.lr = 0x823420B0;
	sub_822599A0(ctx, base);
loc_823420B0:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8234217c
	if (ctx.cr0.eq) goto loc_8234217C;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234217c
	if (ctx.cr6.eq) goto loc_8234217C;
	// li r28,1
	ctx.r28.s64 = 1;
	// stb r28,149(r11)
	PPC_STORE_U8(ctx.r11.u32 + 149, ctx.r28.u8);
	// lwz r11,1100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82342104
	if (!ctx.cr6.eq) goto loc_82342104;
	// lwz r30,1096(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// stw r28,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r28,152(r30)
	PPC_STORE_U8(ctx.r30.u32 + 152, ctx.r28.u8);
	// bl 0x828c11f8
	ctx.lr = 0x823420F4;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82342104
	if (ctx.cr0.eq) goto loc_82342104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225a340
	ctx.lr = 0x82342104;
	sub_8225A340(ctx, base);
loc_82342104:
	// lwz r3,1096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// bl 0x8225a060
	ctx.lr = 0x8234210C;
	sub_8225A060(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x823421e0
	if (!ctx.cr6.eq) goto loc_823421E0;
	// lwz r3,1096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,16(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234212C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8234216c
	if (ctx.cr0.eq) goto loc_8234216C;
	// addi r3,r29,632
	ctx.r3.s64 = ctx.r29.s64 + 632;
	// bl 0x828e3390
	ctx.lr = 0x82342150;
	sub_828E3390(ctx, base);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x82342164
	if (!ctx.cr6.lt) goto loc_82342164;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82342164:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82342170
	goto loc_82342170;
loc_8234216C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82342170:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823421e0
	if (ctx.cr0.eq) goto loc_823421E0;
	// li r30,5
	ctx.r30.s64 = 5;
loc_8234217C:
	// lwz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823421c0
	if (ctx.cr6.eq) goto loc_823421C0;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stw r27,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r27.u32);
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823421c0
	if (ctx.cr6.eq) goto loc_823421C0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r4,r10,9488
	ctx.r4.s64 = ctx.r10.s64 + 9488;
	// addi r3,r9,9688
	ctx.r3.s64 = ctx.r9.s64 + 9688;
	// li r5,1804
	ctx.r5.s64 = 1804;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823421C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823421C0:
	// lwz r3,1092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823421d4
	if (ctx.cr6.eq) goto loc_823421D4;
	// bl 0x8254b720
	ctx.lr = 0x823421D0;
	sub_8254B720(ctx, base);
	// stw r27,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r27.u32);
loc_823421D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823418a8
	ctx.lr = 0x823421E0;
	sub_823418A8(ctx, base);
loc_823421E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823421E8"))) PPC_WEAK_FUNC(sub_823421E8);
PPC_FUNC_IMPL(__imp__sub_823421E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x823421F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234220c
	if (!ctx.cr6.eq) goto loc_8234220C;
	// bl 0x822599a0
	ctx.lr = 0x8234220C;
	sub_822599A0(ctx, base);
loc_8234220C:
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,23144
	ctx.r28.s64 = ctx.r11.s64 + 23144;
	// bne 0x82342254
	if (!ctx.cr0.eq) goto loc_82342254;
	// lwz r11,-2076(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2076);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82342234
	if (!ctx.cr6.eq) goto loc_82342234;
	// bl 0x822e58d0
	ctx.lr = 0x82342230;
	sub_822E58D0(ctx, base);
	// lwz r11,-2076(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2076);
loc_82342234:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82342564
	if (ctx.cr6.eq) goto loc_82342564;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82342564
	if (ctx.cr6.eq) goto loc_82342564;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82342564
	if (ctx.cr6.eq) goto loc_82342564;
loc_82342254:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r27,2116(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2116);
	// bl 0x82535b38
	ctx.lr = 0x82342260;
	sub_82535B38(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// bl 0x82536228
	ctx.lr = 0x82342278;
	sub_82536228(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r30,2248(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2248);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823422ac
	if (ctx.cr6.eq) goto loc_823422AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259dc28
	ctx.lr = 0x82342290;
	sub_8259DC28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,11804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825a1520
	ctx.lr = 0x823422AC;
	sub_825A1520(ctx, base);
loc_823422AC:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823423f4
	if (!ctx.cr6.eq) goto loc_823423F4;
	// lwz r11,792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823422f0
	if (ctx.cr6.eq) goto loc_823422F0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,21120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21120);
	// slw r10,r7,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823423f4
	if (!ctx.cr0.eq) goto loc_823423F4;
loc_823422F0:
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lwz r11,1076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1076);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,21092(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21092);
	// beq cr6,0x82342310
	if (ctx.cr6.eq) goto loc_82342310;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82342314
	if (!ctx.cr6.eq) goto loc_82342314;
loc_82342310:
	// addi r4,r31,784
	ctx.r4.s64 = ctx.r31.s64 + 784;
loc_82342314:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342324
	if (ctx.cr6.eq) goto loc_82342324;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82342334
	if (!ctx.cr6.eq) goto loc_82342334;
loc_82342324:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342338
	if (ctx.cr6.eq) goto loc_82342338;
loc_82342334:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82342338:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823424ec
	if (ctx.cr6.eq) goto loc_823424EC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823424ec
	if (ctx.cr0.eq) goto loc_823424EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r31,788
	ctx.r8.s64 = ctx.r31.s64 + 788;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259cd60
	ctx.lr = 0x82342378;
	sub_8259CD60(ctx, base);
	// stw r3,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82342570
	ctx.lr = 0x82342388;
	sub_82342570(ctx, base);
	// addi r4,r31,716
	ctx.r4.s64 = ctx.r31.s64 + 716;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82342390:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82342390
	if (!ctx.cr6.eq) goto loc_82342390;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82342564
	if (ctx.cr0.eq) goto loc_82342564;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342564
	if (ctx.cr6.eq) goto loc_82342564;
	// lwz r11,2240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342564
	if (ctx.cr6.eq) goto loc_82342564;
	// addi r3,r11,152
	ctx.r3.s64 = ctx.r11.s64 + 152;
	// bl 0x82564eb8
	ctx.lr = 0x823423D4;
	sub_82564EB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82342564
	if (ctx.cr0.eq) goto loc_82342564;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// bl 0x8257c810
	ctx.lr = 0x823423F0;
	sub_8257C810(ctx, base);
	// b 0x82342564
	goto loc_82342564;
loc_823423F4:
	// lwz r11,856(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 856);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823424ec
	if (!ctx.cr0.eq) goto loc_823424EC;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342420
	if (ctx.cr6.eq) goto loc_82342420;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234241C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82342424
	goto loc_82342424;
loc_82342420:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82342424:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82342564
	if (ctx.cr6.eq) goto loc_82342564;
	// lwz r11,796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82342564
	if (!ctx.cr6.eq) goto loc_82342564;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,706
	ctx.r3.s64 = ctx.r1.s64 + 706;
	// lhz r30,31944(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r30,704(r1)
	PPC_STORE_U16(ctx.r1.u32 + 704, ctx.r30.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82342454;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// sth r30,192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 192, ctx.r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,194
	ctx.r3.s64 = ctx.r1.s64 + 194;
	// bl 0x82fa7cf0
	ctx.lr = 0x82342468;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r11,9732
	ctx.r4.s64 = ctx.r11.s64 + 9732;
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82341830
	ctx.lr = 0x82342480;
	sub_82341830(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r11,9748
	ctx.r4.s64 = ctx.r11.s64 + 9748;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82341830
	ctx.lr = 0x82342498;
	sub_82341830(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r11,r11,10596
	ctx.r11.s64 = ctx.r11.s64 + 10596;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r10,r10,10572
	ctx.r10.s64 = ctx.r10.s64 + 10572;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82524730
	ctx.lr = 0x823424E4;
	sub_82524730(ctx, base);
	// stw r3,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r3.u32);
	// b 0x82342564
	goto loc_82342564;
loc_823424EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823457c8
	ctx.lr = 0x823424F4;
	sub_823457C8(ctx, base);
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82342508
	if (ctx.cr6.eq) goto loc_82342508;
	// bl 0x82524840
	ctx.lr = 0x82342504;
	sub_82524840(ctx, base);
	// stw r29,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r29.u32);
loc_82342508:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// stw r29,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r29.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,25048
	ctx.r9.s64 = ctx.r11.s64 + 25048;
	// li r11,255
	ctx.r11.s64 = 255;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r8,9760
	ctx.r4.s64 = ctx.r8.s64 + 9760;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stw r11,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// stw r29,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r29.u32);
	// bl 0x82899948
	ctx.lr = 0x8234253C;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82342540;
	sub_82899798(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82899858
	ctx.lr = 0x8234254C;
	sub_82899858(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82570620
	ctx.lr = 0x82342558;
	sub_82570620(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823418a8
	ctx.lr = 0x82342564;
	sub_823418A8(ctx, base);
loc_82342564:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234256C"))) PPC_WEAK_FUNC(sub_8234256C);
PPC_FUNC_IMPL(__imp__sub_8234256C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342570"))) PPC_WEAK_FUNC(sub_82342570);
PPC_FUNC_IMPL(__imp__sub_82342570) {
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
	// lwz r11,804(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 804);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82342628
	if (ctx.cr6.eq) goto loc_82342628;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82342624
	if (!ctx.cr0.gt) goto loc_82342624;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_823425B8:
	// lwz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r11,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82342618
	if (!ctx.cr6.gt) goto loc_82342618;
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// subfe r6,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823425EC:
	// bl 0x824fa600
	ctx.lr = 0x823425F0;
	sub_824FA600(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r6,464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 464, ctx.r6.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823425ec
	if (ctx.cr6.lt) goto loc_823425EC;
loc_82342618:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x823425b8
	if (!ctx.cr0.eq) goto loc_823425B8;
loc_82342624:
	// stw r30,804(r5)
	PPC_STORE_U32(ctx.r5.u32 + 804, ctx.r30.u32);
loc_82342628:
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

__attribute__((alias("__imp__sub_82342640"))) PPC_WEAK_FUNC(sub_82342640);
PPC_FUNC_IMPL(__imp__sub_82342640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82342648;
	__savegprlr_17(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82535b38
	ctx.lr = 0x8234265C;
	sub_82535B38(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// stw r23,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r23.u32);
	// bl 0x82536228
	ctx.lr = 0x82342674;
	sub_82536228(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r31,2248(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2248);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823426a8
	if (ctx.cr6.eq) goto loc_823426A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259dc28
	ctx.lr = 0x8234268C;
	sub_8259DC28(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,11804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825a1520
	ctx.lr = 0x823426A8;
	sub_825A1520(ctx, base);
loc_823426A8:
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823426bc
	if (!ctx.cr6.eq) goto loc_823426BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823457c8
	ctx.lr = 0x823426BC;
	sub_823457C8(ctx, base);
loc_823426BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82342570
	ctx.lr = 0x823426C8;
	sub_82342570(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82342e00
	if (!ctx.cr6.eq) goto loc_82342E00;
	// addic. r28,r29,808
	ctx.xer.ca = ctx.r29.u32 > 4294966487;
	ctx.r28.s64 = ctx.r29.s64 + 808;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x823426f0
	if (ctx.cr0.eq) goto loc_823426F0;
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
	// bne 0x82342714
	if (!ctx.cr0.eq) goto loc_82342714;
loc_823426F0:
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82342714
	if (ctx.cr6.eq) goto loc_82342714;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234270C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82342e00
	if (ctx.cr0.eq) goto loc_82342E00;
loc_82342714:
	// lwz r11,636(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 636);
	// addi r19,r29,636
	ctx.r19.s64 = ctx.r29.s64 + 636;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82342d6c
	if (!ctx.cr0.eq) goto loc_82342D6C;
	// addi r4,r29,1056
	ctx.r4.s64 = ctx.r29.s64 + 1056;
	// addi r3,r29,1048
	ctx.r3.s64 = ctx.r29.s64 + 1048;
	// bl 0x823490b0
	ctx.lr = 0x82342730;
	sub_823490B0(ctx, base);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r18,1
	ctx.r18.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82342790
	if (ctx.cr6.eq) goto loc_82342790;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82342790
	if (ctx.cr0.eq) goto loc_82342790;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823f6330
	ctx.lr = 0x8234277C;
	sub_823F6330(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82342874
	if (ctx.cr6.eq) goto loc_82342874;
	// bl 0x82241d18
	ctx.lr = 0x8234278C;
	sub_82241D18(ctx, base);
	// b 0x82342874
	goto loc_82342874;
loc_82342790:
	// bl 0x8226c3f0
	ctx.lr = 0x82342794;
	sub_8226C3F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823427b0
	if (ctx.cr0.eq) goto loc_823427B0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r11,9784
	ctx.r30.s64 = ctx.r11.s64 + 9784;
	// b 0x823427b8
	goto loc_823427B8;
loc_823427B0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r11,9804
	ctx.r30.s64 = ctx.r11.s64 + 9804;
loc_823427B8:
	// li r3,4544
	ctx.r3.s64 = 4544;
	// bl 0x82691500
	ctx.lr = 0x823427C0;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8234281c
	if (ctx.cr0.eq) goto loc_8234281C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r18,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r18.u32);
	// addic. r3,r31,16
	ctx.xer.ca = ctx.r31.u32 > 4294967279;
	ctx.r3.s64 = ctx.r31.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r18,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r18.u32);
	// addi r11,r11,-24032
	ctx.r11.s64 = ctx.r11.s64 + -24032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82342814
	if (ctx.cr0.eq) goto loc_82342814;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,688(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 688);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,148(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,144(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x8251a560
	ctx.lr = 0x82342814;
	sub_8251A560(ctx, base);
loc_82342814:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82342820
	goto loc_82342820;
loc_8234281C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82342820:
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823f6330
	ctx.lr = 0x82342838;
	sub_823F6330(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82342848
	if (ctx.cr6.eq) goto loc_82342848;
	// bl 0x82241d18
	ctx.lr = 0x82342848;
	sub_82241D18(ctx, base);
loc_82342848:
	// bl 0x8226c3f0
	ctx.lr = 0x8234284C;
	sub_8226C3F0(ctx, base);
	// lwz r11,664(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r9,96
	ctx.r9.s64 = 96;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r4,r11,r9
	ctx.r4.s32 = ctx.r11.s32 / ctx.r9.s32;
	// bl 0x8251ae70
	ctx.lr = 0x82342874;
	sub_8251AE70(ctx, base);
loc_82342874:
	// lwz r11,708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342888
	if (ctx.cr6.eq) goto loc_82342888;
	// lwz r5,112(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x8234288c
	goto loc_8234288C;
loc_82342888:
	// li r5,10
	ctx.r5.s64 = 10;
loc_8234288C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234289c
	if (ctx.cr6.eq) goto loc_8234289C;
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// b 0x823428a0
	goto loc_823428A0;
loc_8234289C:
	// li r4,100
	ctx.r4.s64 = 100;
loc_823428A0:
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x8251b008
	ctx.lr = 0x823428A8;
	sub_8251B008(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82342e48
	ctx.lr = 0x823428B0;
	sub_82342E48(ctx, base);
	// stfs f1,816(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 816, temp.u32);
	// addic. r3,r29,812
	ctx.xer.ca = ctx.r29.u32 > 4294966483;
	ctx.r3.s64 = ctx.r29.s64 + 812;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823428cc
	if (ctx.cr0.eq) goto loc_823428CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x823428d0
	goto loc_823428D0;
loc_823428CC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_823428D0:
	// lis r17,-31957
	ctx.r17.s64 = -2094333952;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823428f0
	if (ctx.cr6.eq) goto loc_823428F0;
	// lwz r11,21092(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823428f0
	if (!ctx.cr6.eq) goto loc_823428F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82570620
	ctx.lr = 0x823428F0;
	sub_82570620(ctx, base);
loc_823428F0:
	// lwz r11,664(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f31,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// lwz r21,4(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82342b0c
	if (ctx.cr6.eq) goto loc_82342B0C;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r20,r11,5176
	ctx.r20.s64 = ctx.r11.s64 + 5176;
loc_82342928:
	// stfs f31,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x824fa600
	ctx.lr = 0x82342958;
	sub_824FA600(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r22
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82342994
	if (ctx.cr6.eq) goto loc_82342994;
loc_8234296C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82342984
	if (!ctx.cr6.eq) goto loc_82342984;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823429b0
	if (ctx.cr6.eq) goto loc_823429B0;
loc_82342984:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x8234296c
	if (!ctx.cr6.eq) goto loc_8234296C;
loc_82342994:
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8238f7f0
	ctx.lr = 0x823429A8;
	sub_8238F7F0(ctx, base);
	// lwz r22,132(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r24,128(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_823429B0:
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823429f4
	if (ctx.cr6.eq) goto loc_823429F4;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823429f4
	if (ctx.cr6.eq) goto loc_823429F4;
	// lwz r11,712(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823429f4
	if (ctx.cr6.eq) goto loc_823429F4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,264(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 264);
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823429F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823429f8
	goto loc_823429F8;
loc_823429F4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_823429F8:
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mulli r11,r26,220
	ctx.r11.s64 = ctx.r26.s64 * 220;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stw r18,2720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2720, ctx.r18.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stfs f31,2748(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2748, temp.u32);
	// stw r18,2736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2736, ctx.r18.u32);
	// stfs f1,2744(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2744, temp.u32);
	// stw r23,2740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2740, ctx.r23.u32);
	// stw r9,2752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2752, ctx.r9.u32);
	// beq cr6,0x82342ab8
	if (ctx.cr6.eq) goto loc_82342AB8;
	// lbz r11,216(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82342ab4
	if (!ctx.cr0.eq) goto loc_82342AB4;
	// lwz r11,708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342ab4
	if (ctx.cr6.eq) goto loc_82342AB4;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// li r3,856
	ctx.r3.s64 = 856;
	// addi r4,r20,4
	ctx.r4.s64 = ctx.r20.s64 + 4;
	// li r30,2
	ctx.r30.s64 = 2;
	// bl 0x825572c0
	ctx.lr = 0x82342A64;
	sub_825572C0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// lwz r10,264(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 264);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// bl 0x823443e0
	ctx.lr = 0x82342AA8;
	sub_823443E0(ctx, base);
	// stfs f11,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82342ab8
	goto loc_82342AB8;
loc_82342AB4:
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_82342AB8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r27,0(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x8245e648
	ctx.lr = 0x82342AC4;
	sub_8245E648(ctx, base);
	// bl 0x82461500
	ctx.lr = 0x82342AC8;
	sub_82461500(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r25,48
	ctx.r6.s64 = ctx.r25.s64 + 48;
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8251b0d8
	ctx.lr = 0x82342B00;
	sub_8251B0D8(ctx, base);
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x82342928
	if (!ctx.cr6.eq) goto loc_82342928;
loc_82342B0C:
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32231
	ctx.r30.s64 = -2112290816;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82342b50
	if (ctx.cr0.eq) goto loc_82342B50;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r31,0(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342B44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,984
	ctx.r3.s64 = ctx.r31.s64 + 984;
	// b 0x82342b94
	goto loc_82342B94;
loc_82342B50:
	// lhz r11,31944(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 31944);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,546
	ctx.r3.s64 = ctx.r1.s64 + 546;
	// sth r11,544(r1)
	PPC_STORE_U16(ctx.r1.u32 + 544, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82342B68;
	sub_82FA7CF0(ctx, base);
	// lwz r11,1304(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342b88
	if (ctx.cr6.eq) goto loc_82342B88;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82341830
	ctx.lr = 0x82342B88;
	sub_82341830(ctx, base);
loc_82342B88:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// addi r3,r11,984
	ctx.r3.s64 = ctx.r11.s64 + 984;
loc_82342B94:
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x82fa2df8
	ctx.lr = 0x82342B9C;
	sub_82FA2DF8(ctx, base);
	// lwz r11,1076(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1076);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342cd4
	if (ctx.cr6.eq) goto loc_82342CD4;
	// lwz r11,21092(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342cd4
	if (ctx.cr6.eq) goto loc_82342CD4;
	// lhz r31,31944(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 31944);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,178
	ctx.r3.s64 = ctx.r1.s64 + 178;
	// sth r31,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82342BCC;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// sth r31,240(r1)
	PPC_STORE_U16(ctx.r1.u32 + 240, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,242
	ctx.r3.s64 = ctx.r1.s64 + 242;
	// bl 0x82fa7cf0
	ctx.lr = 0x82342BE0;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,432(r1)
	PPC_STORE_U16(ctx.r1.u32 + 432, ctx.r31.u16);
	// addi r3,r1,434
	ctx.r3.s64 = ctx.r1.s64 + 434;
	// bl 0x82fa7cf0
	ctx.lr = 0x82342BF4;
	sub_82FA7CF0(ctx, base);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,432
	ctx.r6.s64 = ctx.r1.s64 + 432;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8245c300
	ctx.lr = 0x82342C14;
	sub_8245C300(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,306
	ctx.r3.s64 = ctx.r1.s64 + 306;
	// lhz r31,31944(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 31944);
	// sth r31,304(r1)
	PPC_STORE_U16(ctx.r1.u32 + 304, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82342C2C;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// sth r31,368(r1)
	PPC_STORE_U16(ctx.r1.u32 + 368, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,370
	ctx.r3.s64 = ctx.r1.s64 + 370;
	// bl 0x82fa7cf0
	ctx.lr = 0x82342C40;
	sub_82FA7CF0(ctx, base);
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r31,r11,820
	ctx.r31.s64 = ctx.r11.s64 + 820;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82563c28
	ctx.lr = 0x82342C64;
	sub_82563C28(ctx, base);
	// lfs f1,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82563c28
	ctx.lr = 0x82342C80;
	sub_82563C28(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r31,0(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r3,r31,856
	ctx.r3.s64 = ctx.r31.s64 + 856;
	// bl 0x82fa2df8
	ctx.lr = 0x82342C94;
	sub_82FA2DF8(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,1496
	ctx.r3.s64 = ctx.r31.s64 + 1496;
	// bl 0x82fa2df8
	ctx.lr = 0x82342CA4;
	sub_82FA2DF8(ctx, base);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,1560
	ctx.r3.s64 = ctx.r31.s64 + 1560;
	// bl 0x82fa2df8
	ctx.lr = 0x82342CB4;
	sub_82FA2DF8(ctx, base);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,2072
	ctx.r3.s64 = ctx.r31.s64 + 2072;
	// bl 0x82fa2df8
	ctx.lr = 0x82342CC4;
	sub_82FA2DF8(ctx, base);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,2136
	ctx.r3.s64 = ctx.r31.s64 + 2136;
	// bl 0x82fa2df8
	ctx.lr = 0x82342CD4;
	sub_82FA2DF8(ctx, base);
loc_82342CD4:
	// lwz r11,1076(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1076);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342d60
	if (ctx.cr6.eq) goto loc_82342D60;
	// lwz r11,21092(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342d60
	if (ctx.cr6.eq) goto loc_82342D60;
	// lwz r11,1304(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342d60
	if (ctx.cr6.eq) goto loc_82342D60;
	// lwz r3,324(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// bl 0x8256d470
	ctx.lr = 0x82342D00;
	sub_8256D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82342d60
	if (ctx.cr0.eq) goto loc_82342D60;
	// lwz r10,1304(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1304);
	// lwz r11,1288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1288);
	// lwz r10,324(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// b 0x82342d30
	goto loc_82342D30;
loc_82342D20:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82342d40
	if (ctx.cr6.eq) goto loc_82342D40;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82342D30:
	// lwz r9,1292(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1292);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82342d20
	if (!ctx.cr6.eq) goto loc_82342D20;
	// b 0x82342d48
	goto loc_82342D48;
loc_82342D40:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
loc_82342D48:
	// bl 0x8256d470
	ctx.lr = 0x82342D4C;
	sub_8256D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82342d60
	if (ctx.cr0.eq) goto loc_82342D60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82570620
	ctx.lr = 0x82342D60;
	sub_82570620(ctx, base);
loc_82342D60:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822b1420
	ctx.lr = 0x82342D68;
	sub_822B1420(ctx, base);
	// b 0x82342e38
	goto loc_82342E38;
loc_82342D6C:
	// lwz r10,2672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2672);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82342d88
	if (ctx.cr6.lt) goto loc_82342D88;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x82342e00
	if (ctx.cr6.eq) goto loc_82342E00;
	// lwz r10,2692(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2692);
	// b 0x82342d8c
	goto loc_82342D8C;
loc_82342D88:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82342D8C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82342e00
	if (ctx.cr6.eq) goto loc_82342E00;
	// lwz r10,2688(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2688);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82342e00
	if (!ctx.cr6.eq) goto loc_82342E00;
	// lwz r11,2672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2672);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82342de4
	if (!ctx.cr6.eq) goto loc_82342DE4;
	// lwz r11,816(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342de4
	if (ctx.cr6.eq) goto loc_82342DE4;
	// lfs f0,816(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 816);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f13,f12,f0,f13
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f13,816(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 816, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82342de4
	if (!ctx.cr6.eq) goto loc_82342DE4;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x8251ade8
	ctx.lr = 0x82342DE4;
	sub_8251ADE8(ctx, base);
loc_82342DE4:
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82342e38
	goto loc_82342E38;
loc_82342E00:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r11,9760
	ctx.r4.s64 = ctx.r11.s64 + 9760;
	// bl 0x82899948
	ctx.lr = 0x82342E10;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82342E14;
	sub_82899798(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82899858
	ctx.lr = 0x82342E20;
	sub_82899858(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82570620
	ctx.lr = 0x82342E2C;
	sub_82570620(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823418a8
	ctx.lr = 0x82342E38;
	sub_823418A8(ctx, base);
loc_82342E38:
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82342E44"))) PPC_WEAK_FUNC(sub_82342E44);
PPC_FUNC_IMPL(__imp__sub_82342E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82342E48"))) PPC_WEAK_FUNC(sub_82342E48);
PPC_FUNC_IMPL(__imp__sub_82342E48) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82342e68
	if (ctx.cr6.eq) goto loc_82342E68;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82342e98
	if (!ctx.cr6.eq) goto loc_82342E98;
loc_82342E68:
	// bl 0x8226c3f0
	ctx.lr = 0x82342E6C;
	sub_8226C3F0(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82342e98
	if (!ctx.cr6.eq) goto loc_82342E98;
	// bl 0x8226c3f0
	ctx.lr = 0x82342E7C;
	sub_8226C3F0(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82342e98
	if (!ctx.cr6.eq) goto loc_82342E98;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,15164
	ctx.r11.s64 = ctx.r11.s64 + 15164;
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82342ee0
	goto loc_82342EE0;
loc_82342E98:
	// bl 0x8226c3f0
	ctx.lr = 0x82342E9C;
	sub_8226C3F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82342ed8
	if (ctx.cr6.eq) goto loc_82342ED8;
	// bl 0x8226c3f0
	ctx.lr = 0x82342EAC;
	sub_8226C3F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82342ed8
	if (!ctx.cr6.eq) goto loc_82342ED8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342ed8
	if (ctx.cr6.eq) goto loc_82342ED8;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r11,r11,-13192
	ctx.r11.s64 = ctx.r11.s64 + -13192;
	// lfs f1,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82342ee0
	goto loc_82342EE0;
loc_82342ED8:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f1,15164(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15164);
	ctx.f1.f64 = double(temp.f32);
loc_82342EE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82342EF0"))) PPC_WEAK_FUNC(sub_82342EF0);
PPC_FUNC_IMPL(__imp__sub_82342EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82342EF8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 852);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82342fe4
	if (!ctx.cr6.eq) goto loc_82342FE4;
	// lwz r10,1080(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r11,23144
	ctx.r30.s64 = ctx.r11.s64 + 23144;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82342f68
	if (!ctx.cr6.eq) goto loc_82342F68;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342f64
	if (ctx.cr6.eq) goto loc_82342F64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r7,r10,9488
	ctx.r7.s64 = ctx.r10.s64 + 9488;
	// addi r6,r9,9828
	ctx.r6.s64 = ctx.r9.s64 + 9828;
	// li r8,2387
	ctx.r8.s64 = 2387;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	ctx.lr = 0x82342F64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82342F64:
	// stw r29,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r29.u32);
loc_82342F68:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342f84
	if (ctx.cr6.eq) goto loc_82342F84;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82342f88
	goto loc_82342F88;
loc_82342F84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82342F88:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82342ff0
	if (ctx.cr6.eq) goto loc_82342FF0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82342fb8
	if (ctx.cr6.eq) goto loc_82342FB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342FB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82342ff0
	if (ctx.cr0.eq) goto loc_82342FF0;
loc_82342FB8:
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82342fd4
	if (!ctx.cr6.eq) goto loc_82342FD4;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8234a4d8
	ctx.lr = 0x82342FCC;
	sub_8234A4D8(ctx, base);
	// stw r29,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r29.u32);
	// b 0x82342ff0
	goto loc_82342FF0;
loc_82342FD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82346890
	ctx.lr = 0x82342FDC;
	sub_82346890(ctx, base);
	// stw r29,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r29.u32);
	// b 0x82342ff0
	goto loc_82342FF0;
loc_82342FE4:
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823418a8
	ctx.lr = 0x82342FF0;
	sub_823418A8(ctx, base);
loc_82342FF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82342FFC"))) PPC_WEAK_FUNC(sub_82342FFC);
PPC_FUNC_IMPL(__imp__sub_82342FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343000"))) PPC_WEAK_FUNC(sub_82343000);
PPC_FUNC_IMPL(__imp__sub_82343000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82343008;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x8234314c
	if (ctx.cr6.eq) goto loc_8234314C;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234314c
	if (ctx.cr6.eq) goto loc_8234314C;
	// bl 0x82501520
	ctx.lr = 0x82343034;
	sub_82501520(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r28,r11,9488
	ctx.r28.s64 = ctx.r11.s64 + 9488;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r31,r9,23144
	ctx.r31.s64 = ctx.r9.s64 + 23144;
	// addi r29,r10,9876
	ctx.r29.s64 = ctx.r10.s64 + 9876;
	// lwz r11,832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823430c0
	if (!ctx.cr6.eq) goto loc_823430C0;
	// lwz r11,1080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82343094
	if (ctx.cr6.eq) goto loc_82343094;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234308c
	if (ctx.cr6.eq) goto loc_8234308C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,2461
	ctx.r5.s64 = 2461;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234308C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234308C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1080(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1080, ctx.r11.u32);
loc_82343094:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823430bc
	if (ctx.cr6.eq) goto loc_823430BC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823430c0
	if (ctx.cr6.eq) goto loc_823430C0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x823430c0
	if (!ctx.cr6.eq) goto loc_823430C0;
loc_823430BC:
	// stw r27,832(r30)
	PPC_STORE_U32(ctx.r30.u32 + 832, ctx.r27.u32);
loc_823430C0:
	// lwz r11,832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8234314c
	if (!ctx.cr6.eq) goto loc_8234314C;
	// lwz r11,1080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234310c
	if (!ctx.cr6.eq) goto loc_8234310C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343108
	if (ctx.cr6.eq) goto loc_82343108;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r8,2479
	ctx.r8.s64 = 2479;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	ctx.lr = 0x82343108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82343108:
	// stw r27,1080(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1080, ctx.r27.u32);
loc_8234310C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343128
	if (ctx.cr6.eq) goto loc_82343128;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82343124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8234312c
	goto loc_8234312C;
loc_82343128:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234312C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234314c
	if (ctx.cr6.eq) goto loc_8234314C;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234314c
	if (!ctx.cr6.eq) goto loc_8234314C;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// stw r27,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r27.u32);
loc_8234314C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82343160
	if (ctx.cr6.eq) goto loc_82343160;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823418a8
	ctx.lr = 0x82343160;
	sub_823418A8(ctx, base);
loc_82343160:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82343168"))) PPC_WEAK_FUNC(sub_82343168);
PPC_FUNC_IMPL(__imp__sub_82343168) {
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
	// lfs f0,872(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 872);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,872(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 872, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823431d4
	if (ctx.cr6.eq) goto loc_823431D4;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823431d0
	if (ctx.cr6.eq) goto loc_823431D0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r4,r10,9488
	ctx.r4.s64 = ctx.r10.s64 + 9488;
	// addi r3,r9,9920
	ctx.r3.s64 = ctx.r9.s64 + 9920;
	// li r5,2513
	ctx.r5.s64 = 2513;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823431D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823431D0:
	// stw r30,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r30.u32);
loc_823431D4:
	// lwz r3,824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823431f8
	if (ctx.cr6.eq) goto loc_823431F8;
	// lfs f0,872(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,828(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8234325c
	if (ctx.cr6.lt) goto loc_8234325C;
	// bl 0x82343278
	ctx.lr = 0x823431F4;
	sub_82343278(ctx, base);
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
loc_823431F8:
	// addic. r10,r31,864
	ctx.xer.ca = ctx.r31.u32 > 4294966431;
	ctx.r10.s64 = ctx.r31.s64 + 864;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82343210
	if (ctx.cr0.eq) goto loc_82343210;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82343214
	goto loc_82343214;
loc_82343210:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82343214:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82343250
	if (ctx.cr6.eq) goto loc_82343250;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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
	ctx.lr = 0x82343244;
	sub_8256F138(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570318
	ctx.lr = 0x82343250;
	sub_82570318(ctx, base);
loc_82343250:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823418a8
	ctx.lr = 0x8234325C;
	sub_823418A8(ctx, base);
loc_8234325C:
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

__attribute__((alias("__imp__sub_82343274"))) PPC_WEAK_FUNC(sub_82343274);
PPC_FUNC_IMPL(__imp__sub_82343274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343278"))) PPC_WEAK_FUNC(sub_82343278);
PPC_FUNC_IMPL(__imp__sub_82343278) {
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
	// bl 0x8253de00
	ctx.lr = 0x82343294;
	sub_8253DE00(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823432fc
	if (!ctx.cr6.eq) goto loc_823432FC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823432f4
	if (ctx.cr6.eq) goto loc_823432F4;
loc_823432B4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823432d4
	if (ctx.cr6.eq) goto loc_823432D4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823432b4
	if (!ctx.cr6.eq) goto loc_823432B4;
	// b 0x823432f4
	goto loc_823432F4;
loc_823432D4:
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa20f0
	ctx.lr = 0x823432E8;
	sub_82FA20F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823432F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253df08
	ctx.lr = 0x823432FC;
	sub_8253DF08(ctx, base);
loc_823432FC:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82343354
	if (ctx.cr6.eq) goto loc_82343354;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82519160
	ctx.lr = 0x82343310;
	sub_82519160(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a70d8
	ctx.lr = 0x8234331C;
	sub_826A70D8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234332c
	if (ctx.cr6.eq) goto loc_8234332C;
	// bl 0x82241d18
	ctx.lr = 0x8234332C;
	sub_82241D18(ctx, base);
loc_8234332C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234334c
	if (ctx.cr6.eq) goto loc_8234334C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234334C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234334C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82343354:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x8234335C;
	sub_82691540(ctx, base);
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

__attribute__((alias("__imp__sub_82343378"))) PPC_WEAK_FUNC(sub_82343378);
PPC_FUNC_IMPL(__imp__sub_82343378) {
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
	// lwz r11,888(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823433b8
	if (!ctx.cr6.eq) goto loc_823433B8;
	// lfs f0,880(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 880);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,860(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 860);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f1,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,880(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 880, temp.u32);
loc_823433B8:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823433d4
	if (ctx.cr6.eq) goto loc_823433D4;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823433d4
	if (ctx.cr6.eq) goto loc_823433D4;
	// bl 0x82501520
	ctx.lr = 0x823433D4;
	sub_82501520(ctx, base);
loc_823433D4:
	// lwz r11,1076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1076);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823433f8
	if (ctx.cr6.eq) goto loc_823433F8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823433f8
	if (ctx.cr6.eq) goto loc_823433F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823480c8
	ctx.lr = 0x823433F8;
	sub_823480C8(ctx, base);
loc_823433F8:
	// lis r30,-31957
	ctx.r30.s64 = -2094333952;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,21120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21120);
	// lfs f31,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234343c
	if (ctx.cr6.eq) goto loc_8234343C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82343424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,21120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234343c
	if (ctx.cr6.eq) goto loc_8234343C;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// fsel f0,f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : ctx.f31.f64;
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
loc_8234343C:
	// lwz r3,980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82343468
	if (ctx.cr6.eq) goto loc_82343468;
	// lfs f0,896(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82343468
	if (!ctx.cr6.gt) goto loc_82343468;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,896(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 896, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82343468
	if (ctx.cr6.gt) goto loc_82343468;
	// bl 0x82539440
	ctx.lr = 0x82343468;
	sub_82539440(ctx, base);
loc_82343468:
	// lfs f0,884(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82343480
	if (ctx.cr6.eq) goto loc_82343480;
	// lfs f13,880(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823435ac
	if (!ctx.cr6.lt) goto loc_823435AC;
loc_82343480:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823434e8
	if (ctx.cr6.eq) goto loc_823434E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823434A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823434cc
	if (ctx.cr6.eq) goto loc_823434CC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x823434c4
	if (ctx.cr6.eq) goto loc_823434C4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x823434e8
	if (!ctx.cr6.eq) goto loc_823434E8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823434e0
	goto loc_823434E0;
loc_823434C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823434dc
	goto loc_823434DC;
loc_823434CC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x823434e8
	if (!ctx.cr6.eq) goto loc_823434E8;
	// li r4,1
	ctx.r4.s64 = 1;
loc_823434DC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823434E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82347ea0
	ctx.lr = 0x823434E8;
	sub_82347EA0(ctx, base);
loc_823434E8:
	// bl 0x8226c3f0
	ctx.lr = 0x823434EC;
	sub_8226C3F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823435bc
	if (!ctx.cr6.eq) goto loc_823435BC;
	// bl 0x8226c3f0
	ctx.lr = 0x823434FC;
	sub_8226C3F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823435a0
	if (!ctx.cr6.eq) goto loc_823435A0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f13,912(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x823435a0
	if (!ctx.cr6.gt) goto loc_823435A0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x823435a0
	if (!ctx.cr6.gt) goto loc_823435A0;
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfs f12,372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// beq cr6,0x82343578
	if (ctx.cr6.eq) goto loc_82343578;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8234356c
	if (ctx.cr6.lt) goto loc_8234356C;
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823435a0
	if (!ctx.cr6.gt) goto loc_823435A0;
loc_8234356C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82343594
	if (ctx.cr6.gt) goto loc_82343594;
	// b 0x823435a0
	goto loc_823435A0;
loc_82343578:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8234358c
	if (ctx.cr6.lt) goto loc_8234358C;
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823435a0
	if (!ctx.cr6.gt) goto loc_823435A0;
loc_8234358C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x823435a0
	if (ctx.cr6.gt) goto loc_823435A0;
loc_82343594:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,1280(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1280, temp.u32);
	// stw r11,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r11.u32);
loc_823435A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823485a0
	ctx.lr = 0x823435A8;
	sub_823485A0(ctx, base);
	// b 0x823435bc
	goto loc_823435BC;
loc_823435AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82347ea0
	ctx.lr = 0x823435BC;
	sub_82347EA0(ctx, base);
loc_823435BC:
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

__attribute__((alias("__imp__sub_823435DC"))) PPC_WEAK_FUNC(sub_823435DC);
PPC_FUNC_IMPL(__imp__sub_823435DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823435E0"))) PPC_WEAK_FUNC(sub_823435E0);
PPC_FUNC_IMPL(__imp__sub_823435E0) {
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
	// lwz r11,1008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1008);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82343700
	if (ctx.cr6.eq) goto loc_82343700;
	// lwz r11,1000(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1000);
	// lwz r10,1080(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r31,r11,23144
	ctx.r31.s64 = ctx.r11.s64 + 23144;
	// bne cr6,0x82343698
	if (!ctx.cr6.eq) goto loc_82343698;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82343664
	if (!ctx.cr6.eq) goto loc_82343664;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234365c
	if (ctx.cr6.eq) goto loc_8234365C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r7,r10,9488
	ctx.r7.s64 = ctx.r10.s64 + 9488;
	// addi r6,r9,9968
	ctx.r6.s64 = ctx.r9.s64 + 9968;
	// li r8,2722
	ctx.r8.s64 = 2722;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	ctx.lr = 0x8234365C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234365C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1080(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1080, ctx.r11.u32);
loc_82343664:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343680
	if (ctx.cr6.eq) goto loc_82343680;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234367C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82343684
	goto loc_82343684;
loc_82343680:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82343684:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82343714
	if (ctx.cr6.eq) goto loc_82343714;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82346b50
	ctx.lr = 0x82343694;
	sub_82346B50(ctx, base);
	// b 0x82343714
	goto loc_82343714;
loc_82343698:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823436d4
	if (ctx.cr6.eq) goto loc_823436D4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823436cc
	if (ctx.cr6.eq) goto loc_823436CC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r4,r10,9488
	ctx.r4.s64 = ctx.r10.s64 + 9488;
	// addi r3,r9,9968
	ctx.r3.s64 = ctx.r9.s64 + 9968;
	// li r5,2736
	ctx.r5.s64 = 2736;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823436CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823436CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1080(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1080, ctx.r11.u32);
loc_823436D4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823436f0
	if (ctx.cr6.eq) goto loc_823436F0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823436EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823436f4
	goto loc_823436F4;
loc_823436F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823436F4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82343714
	if (ctx.cr6.eq) goto loc_82343714;
	// b 0x82343708
	goto loc_82343708;
loc_82343700:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82346b50
	ctx.lr = 0x82343708;
	sub_82346B50(ctx, base);
loc_82343708:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823418a8
	ctx.lr = 0x82343714;
	sub_823418A8(ctx, base);
loc_82343714:
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

__attribute__((alias("__imp__sub_8234372C"))) PPC_WEAK_FUNC(sub_8234372C);
PPC_FUNC_IMPL(__imp__sub_8234372C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82343730"))) PPC_WEAK_FUNC(sub_82343730);
PPC_FUNC_IMPL(__imp__sub_82343730) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82342e48
	ctx.lr = 0x82343758;
	sub_82342E48(ctx, base);
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823437e8
	if (ctx.cr6.eq) goto loc_823437E8;
	// lwz r10,2672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2672);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82343780
	if (ctx.cr6.lt) goto loc_82343780;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x823437e8
	if (ctx.cr6.eq) goto loc_823437E8;
	// lwz r10,2692(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2692);
	// b 0x82343784
	goto loc_82343784;
loc_82343780:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82343784:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823437e8
	if (ctx.cr6.eq) goto loc_823437E8;
	// lwz r10,2688(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2688);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823437e8
	if (!ctx.cr6.eq) goto loc_823437E8;
	// lwz r11,2672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2672);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x823437cc
	if (!ctx.cr6.eq) goto loc_823437CC;
	// lfs f0,988(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x823437cc
	if (!ctx.cr6.lt) goto loc_823437CC;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x823437cc
	if (ctx.cr6.lt) goto loc_823437CC;
	// stfs f1,988(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// bl 0x8251ade8
	ctx.lr = 0x823437CC;
	sub_8251ADE8(ctx, base);
loc_823437CC:
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823437E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823437ec
	goto loc_823437EC;
loc_823437E8:
	// li r30,1
	ctx.r30.s64 = 1;
loc_823437EC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343810
	if (ctx.cr6.eq) goto loc_82343810;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82343810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82343810:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82343824
	if (ctx.cr6.eq) goto loc_82343824;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823418a8
	ctx.lr = 0x82343824;
	sub_823418A8(ctx, base);
loc_82343824:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82343840"))) PPC_WEAK_FUNC(sub_82343840);
PPC_FUNC_IMPL(__imp__sub_82343840) {
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
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,31080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82343870
	if (!ctx.cr6.eq) goto loc_82343870;
	// bl 0x8254abe0
	ctx.lr = 0x8234386C;
	sub_8254ABE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82343870:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c1b0
	ctx.lr = 0x8234387C;
	sub_8254C1B0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824261e8
	ctx.lr = 0x82343888;
	sub_824261E8(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823438a4
	if (ctx.cr6.eq) goto loc_823438A4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x8234389C;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823438c0
	if (!ctx.cr0.eq) goto loc_823438C0;
loc_823438A4:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,24856
	ctx.r10.s64 = ctx.r10.s64 + 24856;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// bl 0x823418a8
	ctx.lr = 0x823438C0;
	sub_823418A8(ctx, base);
loc_823438C0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e3618
	ctx.lr = 0x823438C8;
	sub_828E3618(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823439bc
	if (ctx.cr0.eq) goto loc_823439BC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x823438D8;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823439bc
	if (ctx.cr0.eq) goto loc_823439BC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343918
	if (ctx.cr6.eq) goto loc_82343918;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82343900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,324
	ctx.r3.s64 = ctx.r3.s64 + 324;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82343914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8234391c
	goto loc_8234391C;
loc_82343918:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234391C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823439bc
	if (!ctx.cr0.eq) goto loc_823439BC;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82343940
	if (ctx.cr6.eq) goto loc_82343940;
	// bl 0x8225a060
	ctx.lr = 0x82343934;
	sub_8225A060(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82343944
	goto loc_82343944;
loc_82343940:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82343944:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8234395c
	if (!ctx.cr0.eq) goto loc_8234395C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8225ca38
	ctx.lr = 0x82343958;
	sub_8225CA38(ctx, base);
	// b 0x823439bc
	goto loc_823439BC;
loc_8234395C:
	// lwz r11,1312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823439bc
	if (!ctx.cr6.eq) goto loc_823439BC;
	// lwz r31,56(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823439b4
	if (ctx.cr6.eq) goto loc_823439B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82343988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,324
	ctx.r3.s64 = ctx.r3.s64 + 324;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828df890
	ctx.lr = 0x82343994;
	sub_828DF890(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823439A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828dffd8
	ctx.lr = 0x823439B4;
	sub_828DFFD8(ctx, base);
loc_823439B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1312, ctx.r11.u32);
loc_823439BC:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823439cc
	if (ctx.cr6.eq) goto loc_823439CC;
	// bl 0x82241d18
	ctx.lr = 0x823439CC;
	sub_82241D18(ctx, base);
loc_823439CC:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823439dc
	if (ctx.cr6.eq) goto loc_823439DC;
	// bl 0x82241d18
	ctx.lr = 0x823439DC;
	sub_82241D18(ctx, base);
loc_823439DC:
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

__attribute__((alias("__imp__sub_823439F4"))) PPC_WEAK_FUNC(sub_823439F4);
PPC_FUNC_IMPL(__imp__sub_823439F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823439F8"))) PPC_WEAK_FUNC(sub_823439F8);
PPC_FUNC_IMPL(__imp__sub_823439F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82343A00;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-1488(r1)
	ea = -1488 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addic. r11,r3,1028
	ctx.xer.ca = ctx.r3.u32 > 4294966267;
	ctx.r11.s64 = ctx.r3.s64 + 1028;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82343a30
	if (ctx.cr0.eq) goto loc_82343A30;
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
	// bne 0x82343a54
	if (!ctx.cr0.eq) goto loc_82343A54;
loc_82343A30:
	// lwz r3,24(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82343a54
	if (ctx.cr6.eq) goto loc_82343A54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82343A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823443a0
	if (ctx.cr0.eq) goto loc_823443A0;
loc_82343A54:
	// lwz r11,1072(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1072);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82343a78
	if (ctx.cr6.eq) goto loc_82343A78;
	// bl 0x822c7320
	ctx.lr = 0x82343A68;
	sub_822C7320(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82343a78
	if (!ctx.cr6.eq) goto loc_82343A78;
	// stw r22,1072(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1072, ctx.r22.u32);
loc_82343A78:
	// lwz r11,1072(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1072);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1068(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1068);
	// beq cr6,0x82343a94
	if (ctx.cr6.eq) goto loc_82343A94;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// b 0x82343a98
	goto loc_82343A98;
loc_82343A94:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82343A98:
	// addi r29,r25,648
	ctx.r29.s64 = ctx.r25.s64 + 648;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82344300
	if (!ctx.cr0.eq) goto loc_82344300;
	// lwz r3,24(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82343b08
	if (ctx.cr6.eq) goto loc_82343B08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82343AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82343b08
	if (ctx.cr0.eq) goto loc_82343B08;
	// lwz r4,24(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82343AE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6330
	ctx.lr = 0x82343AF4;
	sub_823F6330(ctx, base);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82343bc4
	if (ctx.cr6.eq) goto loc_82343BC4;
	// bl 0x82241d18
	ctx.lr = 0x82343B04;
	sub_82241D18(ctx, base);
	// b 0x82343bc4
	goto loc_82343BC4;
loc_82343B08:
	// li r3,4544
	ctx.r3.s64 = 4544;
	// bl 0x82691500
	ctx.lr = 0x82343B10;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82343b6c
	if (ctx.cr0.eq) goto loc_82343B6C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addic. r3,r31,16
	ctx.xer.ca = ctx.r31.u32 > 4294967279;
	ctx.r3.s64 = ctx.r31.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r11,r11,-24032
	ctx.r11.s64 = ctx.r11.s64 + -24032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82343b70
	if (ctx.cr0.eq) goto loc_82343B70;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r8,688(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 688);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r6,148(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 148);
	// addi r7,r11,10008
	ctx.r7.s64 = ctx.r11.s64 + 10008;
	// lwz r5,144(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 144);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// addi r4,r25,808
	ctx.r4.s64 = ctx.r25.s64 + 808;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8251a560
	ctx.lr = 0x82343B68;
	sub_8251A560(ctx, base);
	// b 0x82343b70
	goto loc_82343B70;
loc_82343B6C:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82343B70:
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6330
	ctx.lr = 0x82343B88;
	sub_823F6330(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82343b98
	if (ctx.cr6.eq) goto loc_82343B98;
	// bl 0x82241d18
	ctx.lr = 0x82343B98;
	sub_82241D18(ctx, base);
loc_82343B98:
	// bl 0x8226c3f0
	ctx.lr = 0x82343B9C;
	sub_8226C3F0(ctx, base);
	// lwz r11,664(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 664);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,96
	ctx.r9.s64 = 96;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r4,r11,r9
	ctx.r4.s32 = ctx.r11.s32 / ctx.r9.s32;
	// bl 0x8251ae70
	ctx.lr = 0x82343BC4;
	sub_8251AE70(ctx, base);
loc_82343BC4:
	// lwz r11,708(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343bd8
	if (ctx.cr6.eq) goto loc_82343BD8;
	// lwz r5,112(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x82343bdc
	goto loc_82343BDC;
loc_82343BD8:
	// li r5,10
	ctx.r5.s64 = 10;
loc_82343BDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343bec
	if (ctx.cr6.eq) goto loc_82343BEC;
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// b 0x82343bf0
	goto loc_82343BF0;
loc_82343BEC:
	// li r4,100
	ctx.r4.s64 = 100;
loc_82343BF0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8251b008
	ctx.lr = 0x82343BF8;
	sub_8251B008(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82342e48
	ctx.lr = 0x82343C00;
	sub_82342E48(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stfs f1,1036(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r25.u32 + 1036, temp.u32);
	// addi r11,r11,10620
	ctx.r11.s64 = ctx.r11.s64 + 10620;
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r31,4504
	ctx.r3.s64 = ctx.r31.s64 + 4504;
	// bl 0x8234cb18
	ctx.lr = 0x82343C2C;
	sub_8234CB18(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f30,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,2676(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2676, temp.u32);
	// bl 0x82f91940
	ctx.lr = 0x82343C40;
	sub_82F91940(ctx, base);
	// addic. r3,r25,1032
	ctx.xer.ca = ctx.r25.u32 > 4294966263;
	ctx.r3.s64 = ctx.r25.s64 + 1032;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82343c58
	if (ctx.cr0.eq) goto loc_82343C58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82343c5c
	goto loc_82343C5C;
loc_82343C58:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82343C5C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82343c6c
	if (ctx.cr6.eq) goto loc_82343C6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82570620
	ctx.lr = 0x82343C6C;
	sub_82570620(ctx, base);
loc_82343C6C:
	// lwz r11,664(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 664);
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r22.u32);
	// mr r17,r22
	ctx.r17.u64 = ctx.r22.u64;
	// stw r22,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r22.u32);
	// stw r22,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r18,4(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r30,r18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x82344114
	if (ctx.cr6.eq) goto loc_82344114;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f29,-15356(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15356);
	ctx.f29.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// addi r6,r6,10076
	ctx.r6.s64 = ctx.r6.s64 + 10076;
	// addi r5,r5,10028
	ctx.r5.s64 = ctx.r5.s64 + 10028;
	// addi r21,r11,5176
	ctx.r21.s64 = ctx.r11.s64 + 5176;
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// addi r19,r10,10272
	ctx.r19.s64 = ctx.r10.s64 + 10272;
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// addi r16,r9,10224
	ctx.r16.s64 = ctx.r9.s64 + 10224;
	// addi r15,r8,10176
	ctx.r15.s64 = ctx.r8.s64 + 10176;
	// addi r14,r7,10128
	ctx.r14.s64 = ctx.r7.s64 + 10128;
loc_82343CDC:
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x824fa600
	ctx.lr = 0x82343D08;
	sub_824FA600(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplw cr6,r22,r20
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x82343d44
	if (ctx.cr6.eq) goto loc_82343D44;
loc_82343D1C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82343d34
	if (!ctx.cr6.eq) goto loc_82343D34;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82343d60
	if (ctx.cr6.eq) goto loc_82343D60;
loc_82343D34:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x82343d1c
	if (!ctx.cr6.eq) goto loc_82343D1C;
loc_82343D44:
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r7,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8238f7f0
	ctx.lr = 0x82343D58;
	sub_8238F7F0(ctx, base);
	// lwz r20,164(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r22,160(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_82343D60:
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82343da4
	if (ctx.cr6.eq) goto loc_82343DA4;
	// lwz r3,24(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82343da4
	if (ctx.cr6.eq) goto loc_82343DA4;
	// lwz r11,712(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82343da4
	if (ctx.cr6.eq) goto loc_82343DA4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82343DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82343da8
	goto loc_82343DA8;
loc_82343DA4:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
loc_82343DA8:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mulli r11,r24,220
	ctx.r11.s64 = ctx.r24.s64 * 220;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f30,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r7,80(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwzx r8,r6,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lfs f0,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,2720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2720, ctx.r9.u32);
	// stfs f0,2748(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2748, temp.u32);
	// stw r9,2736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2736, ctx.r9.u32);
	// stfs f1,2744(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2744, temp.u32);
	// stw r29,2740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2740, ctx.r29.u32);
	// stw r7,2752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2752, ctx.r7.u32);
	// beq cr6,0x823440bc
	if (ctx.cr6.eq) goto loc_823440BC;
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823440b8
	if (!ctx.cr0.eq) goto loc_823440B8;
	// lwz r11,708(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823440b8
	if (ctx.cr6.eq) goto loc_823440B8;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// li r3,856
	ctx.r3.s64 = 856;
	// addi r4,r21,4
	ctx.r4.s64 = ctx.r21.s64 + 4;
	// li r26,2
	ctx.r26.s64 = 2;
	// bl 0x825572c0
	ctx.lr = 0x82343E44;
	sub_825572C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x82920500
	ctx.lr = 0x82343E64;
	sub_82920500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82343eb4
	if (ctx.cr0.eq) goto loc_82343EB4;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r9.u64);
	// lfd f13,216(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82343ed0
	if (ctx.cr6.eq) goto loc_82343ED0;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stwx r7,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// b 0x82343ed0
	goto loc_82343ED0;
loc_82343EB4:
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_82343ED0:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// std r11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// lfd f0,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x823443e0
	ctx.lr = 0x82343EF4;
	sub_823443E0(ctx, base);
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// lfd f0,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823443e0
	ctx.lr = 0x82343F1C;
	sub_823443E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920500
	ctx.lr = 0x82343F28;
	sub_82920500(ctx, base);
	// lfs f31,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f31.f64 = double(temp.f32);
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82343f94
	if (ctx.cr0.eq) goto loc_82343F94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920518
	ctx.lr = 0x82343F40;
	sub_82920518(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82343f94
	if (!ctx.cr0.eq) goto loc_82343F94;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,2260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2260);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82343f5c
	if (ctx.cr6.eq) goto loc_82343F5C;
	// stw r29,2260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2260, ctx.r29.u32);
loc_82343F5C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,2272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2272);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82343f70
	if (ctx.cr6.eq) goto loc_82343F70;
	// stw r28,2272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2272, ctx.r28.u32);
loc_82343F70:
	// fmuls f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r9,2284(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2284);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82343f94
	if (ctx.cr6.eq) goto loc_82343F94;
	// stw r11,2284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2284, ctx.r11.u32);
loc_82343F94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920500
	ctx.lr = 0x82343F9C;
	sub_82920500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823440bc
	if (ctx.cr0.eq) goto loc_823440BC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f90b8
	ctx.lr = 0x82343FB0;
	sub_824F90B8(ctx, base);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x823440bc
	if (!ctx.cr6.eq) goto loc_823440BC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82344080
	if (ctx.cr6.eq) goto loc_82344080;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x8234405c
	if (ctx.cr6.eq) goto loc_8234405C;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// beq cr6,0x82344040
	if (ctx.cr6.eq) goto loc_82344040;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x82344024
	if (ctx.cr6.eq) goto loc_82344024;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// beq cr6,0x82344008
	if (ctx.cr6.eq) goto loc_82344008;
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// bne cr6,0x82344078
	if (!ctx.cr6.eq) goto loc_82344078;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82899948
	ctx.lr = 0x82343FF8;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82343FFC;
	sub_82899798(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// b 0x82344074
	goto loc_82344074;
loc_82344008:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82899948
	ctx.lr = 0x82344014;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82344018;
	sub_82899798(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// b 0x82344074
	goto loc_82344074;
loc_82344024:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82899948
	ctx.lr = 0x82344030;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82344034;
	sub_82899798(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// b 0x82344074
	goto loc_82344074;
loc_82344040:
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82899948
	ctx.lr = 0x8234404C;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82344050;
	sub_82899798(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// b 0x82344074
	goto loc_82344074;
loc_8234405C:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82899948
	ctx.lr = 0x82344068;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x8234406C;
	sub_82899798(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
loc_82344074:
	// bl 0x82899858
	ctx.lr = 0x82344078;
	sub_82899858(ctx, base);
loc_82344078:
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// b 0x823440a8
	goto loc_823440A8;
loc_82344080:
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823440bc
	if (ctx.cr6.eq) goto loc_823440BC;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82899948
	ctx.lr = 0x82344094;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82344098;
	sub_82899798(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82899858
	ctx.lr = 0x823440A4;
	sub_82899858(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_823440A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82570620
	ctx.lr = 0x823440B0;
	sub_82570620(ctx, base);
	// li r17,1
	ctx.r17.s64 = 1;
	// b 0x823440bc
	goto loc_823440BC;
loc_823440B8:
	// li r26,1
	ctx.r26.s64 = 1;
loc_823440BC:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8245e648
	ctx.lr = 0x823440CC;
	sub_8245E648(ctx, base);
	// bl 0x82461500
	ctx.lr = 0x823440D0;
	sub_82461500(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r6,r23,48
	ctx.r6.s64 = ctx.r23.s64 + 48;
	// lfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// bl 0x8251b0d8
	ctx.lr = 0x82344108;
	sub_8251B0D8(ctx, base);
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// cmplw cr6,r30,r18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82343cdc
	if (!ctx.cr6.eq) goto loc_82343CDC;
loc_82344114:
	// lwz r3,24(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82344128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32231
	ctx.r30.s64 = -2112290816;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82344164
	if (ctx.cr0.eq) goto loc_82344164;
	// lwz r3,24(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lwz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82344150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,984
	ctx.r3.s64 = ctx.r31.s64 + 984;
	// bl 0x82fa2df8
	ctx.lr = 0x82344160;
	sub_82FA2DF8(ctx, base);
	// b 0x823441b8
	goto loc_823441B8;
loc_82344164:
	// lhz r11,31944(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 31944);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,802
	ctx.r3.s64 = ctx.r1.s64 + 802;
	// sth r11,800(r1)
	PPC_STORE_U16(ctx.r1.u32 + 800, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8234417C;
	sub_82FA7CF0(ctx, base);
	// lwz r11,1304(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234419c
	if (ctx.cr6.eq) goto loc_8234419C;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,800
	ctx.r5.s64 = ctx.r1.s64 + 800;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82341830
	ctx.lr = 0x8234419C;
	sub_82341830(ctx, base);
loc_8234419C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r5,r1,800
	ctx.r5.s64 = ctx.r1.s64 + 800;
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,984
	ctx.r3.s64 = ctx.r11.s64 + 984;
	// bl 0x82fa2df8
	ctx.lr = 0x823441B4;
	sub_82FA2DF8(ctx, base);
	// lwz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_823441B8:
	// lwz r11,1076(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1076);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823442f4
	if (ctx.cr6.eq) goto loc_823442F4;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823442f4
	if (ctx.cr6.eq) goto loc_823442F4;
	// lhz r31,31944(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 31944);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,482
	ctx.r3.s64 = ctx.r1.s64 + 482;
	// sth r31,480(r1)
	PPC_STORE_U16(ctx.r1.u32 + 480, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x823441EC;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// sth r31,288(r1)
	PPC_STORE_U16(ctx.r1.u32 + 288, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,290
	ctx.r3.s64 = ctx.r1.s64 + 290;
	// bl 0x82fa7cf0
	ctx.lr = 0x82344200;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,544(r1)
	PPC_STORE_U16(ctx.r1.u32 + 544, ctx.r31.u16);
	// addi r3,r1,546
	ctx.r3.s64 = ctx.r1.s64 + 546;
	// bl 0x82fa7cf0
	ctx.lr = 0x82344214;
	sub_82FA7CF0(ctx, base);
	// stfs f30,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8245c300
	ctx.lr = 0x82344234;
	sub_8245C300(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,418
	ctx.r3.s64 = ctx.r1.s64 + 418;
	// lhz r31,31944(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 31944);
	// sth r31,416(r1)
	PPC_STORE_U16(ctx.r1.u32 + 416, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8234424C;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// sth r31,352(r1)
	PPC_STORE_U16(ctx.r1.u32 + 352, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,354
	ctx.r3.s64 = ctx.r1.s64 + 354;
	// bl 0x82fa7cf0
	ctx.lr = 0x82344260;
	sub_82FA7CF0(ctx, base);
	// lfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r31,r11,820
	ctx.r31.s64 = ctx.r11.s64 + 820;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82563c28
	ctx.lr = 0x82344284;
	sub_82563C28(ctx, base);
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82563c28
	ctx.lr = 0x823442A0;
	sub_82563C28(ctx, base);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r31,856
	ctx.r3.s64 = ctx.r31.s64 + 856;
	// bl 0x82fa2df8
	ctx.lr = 0x823442B4;
	sub_82FA2DF8(ctx, base);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,1496
	ctx.r3.s64 = ctx.r31.s64 + 1496;
	// bl 0x82fa2df8
	ctx.lr = 0x823442C4;
	sub_82FA2DF8(ctx, base);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,1560
	ctx.r3.s64 = ctx.r31.s64 + 1560;
	// bl 0x82fa2df8
	ctx.lr = 0x823442D4;
	sub_82FA2DF8(ctx, base);
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,2072
	ctx.r3.s64 = ctx.r31.s64 + 2072;
	// bl 0x82fa2df8
	ctx.lr = 0x823442E4;
	sub_82FA2DF8(ctx, base);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,2136
	ctx.r3.s64 = ctx.r31.s64 + 2136;
	// bl 0x82fa2df8
	ctx.lr = 0x823442F4;
	sub_82FA2DF8(ctx, base);
loc_823442F4:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822b1420
	ctx.lr = 0x823442FC;
	sub_822B1420(ctx, base);
	// b 0x823443cc
	goto loc_823443CC;
loc_82344300:
	// lwz r10,2672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2672);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8234431c
	if (ctx.cr6.lt) goto loc_8234431C;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x82344394
	if (ctx.cr6.eq) goto loc_82344394;
	// lwz r10,2692(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2692);
	// b 0x82344320
	goto loc_82344320;
loc_8234431C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82344320:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82344394
	if (ctx.cr6.eq) goto loc_82344394;
	// lwz r10,2688(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2688);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82344394
	if (!ctx.cr6.eq) goto loc_82344394;
	// lwz r11,2672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2672);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82344378
	if (!ctx.cr6.eq) goto loc_82344378;
	// lwz r11,1036(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344378
	if (ctx.cr6.eq) goto loc_82344378;
	// lfs f0,1036(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 1036);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f13,f12,f0,f13
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f13,1036(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 1036, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82344378
	if (!ctx.cr6.eq) goto loc_82344378;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8251ade8
	ctx.lr = 0x82344378;
	sub_8251ADE8(ctx, base);
loc_82344378:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82344390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823443cc
	goto loc_823443CC;
loc_82344394:
	// lwz r11,1072(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823443cc
	if (!ctx.cr6.eq) goto loc_823443CC;
loc_823443A0:
	// lwz r3,24(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823443B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// bne 0x823443c8
	if (!ctx.cr0.eq) goto loc_823443C8;
	// li r4,15
	ctx.r4.s64 = 15;
loc_823443C8:
	// bl 0x823418a8
	ctx.lr = 0x823443CC;
	sub_823418A8(ctx, base);
loc_823443CC:
	// addi r1,r1,1488
	ctx.r1.s64 = ctx.r1.s64 + 1488;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823443E0"))) PPC_WEAK_FUNC(sub_823443E0);
PPC_FUNC_IMPL(__imp__sub_823443E0) {
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
	// lwz r11,708(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lfs f4,-2340(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -2340);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82344434
	if (ctx.cr6.eq) goto loc_82344434;
loc_82344410:
	// fadds f3,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f3
	ctx.cr6.compare(ctx.f1.f64, ctx.f3.f64);
	// blt cr6,0x82344468
	if (ctx.cr6.lt) goto loc_82344468;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f13,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82344410
	if (ctx.cr6.lt) goto loc_82344410;
loc_82344434:
	// lwz r10,708(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lwz r11,108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lfs f0,-24756(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
loc_82344454:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82344468:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lfs f5,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f5.f64 = double(temp.f32);
	// bl 0x8255b868
	ctx.lr = 0x82344474;
	sub_8255B868(ctx, base);
	// lwz r11,708(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// stfs f1,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// divwu r8,r10,r9
	ctx.r8.u32 = ctx.r10.u32 / ctx.r9.u32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r8,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823444a8
	if (!ctx.cr6.lt) goto loc_823444A8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823444A8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82344454
	goto loc_82344454;
}

__attribute__((alias("__imp__sub_823444B0"))) PPC_WEAK_FUNC(sub_823444B0);
PPC_FUNC_IMPL(__imp__sub_823444B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x823444B8;
	__savegprlr_14(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8944(r1)
	ea = -8944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,1040(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1040);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r20,1
	ctx.r20.s64 = 1;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r18,-31957
	ctx.r18.s64 = -2094333952;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// li r21,16
	ctx.r21.s64 = 16;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r17,r11,21076
	ctx.r17.s64 = ctx.r11.s64 + 21076;
	// addi r16,r10,-24032
	ctx.r16.s64 = ctx.r10.s64 + -24032;
	// addi r15,r9,-11020
	ctx.r15.s64 = ctx.r9.s64 + -11020;
	// addi r14,r8,-11008
	ctx.r14.s64 = ctx.r8.s64 + -11008;
	// bne cr6,0x823446f8
	if (!ctx.cr6.eq) goto loc_823446F8;
	// lwz r11,1092(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82344528
	if (!ctx.cr6.eq) goto loc_82344528;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8254b6b8
	ctx.lr = 0x82344524;
	sub_8254B6B8(ctx, base);
	// stw r3,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r3.u32);
loc_82344528:
	// addi r4,r31,656
	ctx.r4.s64 = ctx.r31.s64 + 656;
	// addi r3,r31,648
	ctx.r3.s64 = ctx.r31.s64 + 648;
	// bl 0x823490b0
	ctx.lr = 0x82344534;
	sub_823490B0(ctx, base);
	// lwz r11,21092(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82344558
	if (!ctx.cr6.eq) goto loc_82344558;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82535c10
	ctx.lr = 0x82344550;
	sub_82535C10(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82535c80
	ctx.lr = 0x82344558;
	sub_82535C80(ctx, base);
loc_82344558:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823445a4
	if (ctx.cr6.eq) goto loc_823445A4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822cbc58
	ctx.lr = 0x8234457C;
	sub_822CBC58(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823445a0
	if (ctx.cr6.eq) goto loc_823445A0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823445a4
	if (ctx.cr6.eq) goto loc_823445A4;
loc_823445A0:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_823445A4:
	// addic. r28,r31,1044
	ctx.xer.ca = ctx.r31.u32 > 4294966251;
	ctx.r28.s64 = ctx.r31.s64 + 1044;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x823446c8
	if (ctx.cr0.eq) goto loc_823446C8;
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
	// beq 0x823446c8
	if (ctx.cr0.eq) goto loc_823446C8;
	// li r3,472
	ctx.r3.s64 = 472;
	// bl 0x82691500
	ctx.lr = 0x823445C4;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8234461c
	if (ctx.cr0.eq) goto loc_8234461C;
	// addic. r3,r30,16
	ctx.xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r3.s64 = ctx.r30.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r16,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r16.u32);
	// stw r20,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r20.u32);
	// stw r20,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r20.u32);
	// beq 0x82344620
	if (ctx.cr0.eq) goto loc_82344620;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,10668
	ctx.r11.s64 = ctx.r11.s64 + 10668;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r9,r31,1060
	ctx.r9.s64 = ctx.r31.s64 + 1060;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r31,1024
	ctx.r6.s64 = ctx.r31.s64 + 1024;
	// addi r5,r31,1020
	ctx.r5.s64 = ctx.r31.s64 + 1020;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8252cbc8
	ctx.lr = 0x82344618;
	sub_8252CBC8(ctx, base);
	// b 0x82344620
	goto loc_82344620;
loc_8234461C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82344620:
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r30,r31,1048
	ctx.r30.s64 = ctx.r31.s64 + 1048;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f6330
	ctx.lr = 0x8234463C;
	sub_823F6330(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234464c
	if (ctx.cr6.eq) goto loc_8234464C;
	// bl 0x82241d18
	ctx.lr = 0x8234464C;
	sub_82241D18(ctx, base);
loc_8234464C:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822a3128
	ctx.lr = 0x82344654;
	sub_822A3128(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823091c0
	ctx.lr = 0x82344660;
	sub_823091C0(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// bl 0x8259c8e0
	ctx.lr = 0x8234467C;
	sub_8259C8E0(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,2332
	ctx.r5.s64 = ctx.r1.s64 + 2332;
	// bl 0x8259c8e0
	ctx.lr = 0x82344698;
	sub_8259C8E0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8250b348
	ctx.lr = 0x823446A0;
	sub_8250B348(ctx, base);
	// stw r3,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8250e7c8
	ctx.lr = 0x823446AC;
	sub_8250E7C8(ctx, base);
	// lwz r4,560(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8252d610
	ctx.lr = 0x823446B8;
	sub_8252D610(ctx, base);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823446c8
	if (ctx.cr6.eq) goto loc_823446C8;
	// bl 0x82241d18
	ctx.lr = 0x823446C8;
	sub_82241D18(ctx, base);
loc_823446C8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r23,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r23.u32);
	// bne cr6,0x823446dc
	if (!ctx.cr6.eq) goto loc_823446DC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x823446e8
	goto loc_823446E8;
loc_823446DC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823446E8:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r20,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r20.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_823446F8:
	// lwz r11,1048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// addi r24,r31,1048
	ctx.r24.s64 = ctx.r31.s64 + 1048;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82344838
	if (ctx.cr0.eq) goto loc_82344838;
	// lwz r10,1308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82344804
	if (ctx.cr6.eq) goto loc_82344804;
	// lwz r30,4(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82344744
	if (ctx.cr6.eq) goto loc_82344744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x82344734;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344744
	if (ctx.cr0.eq) goto loc_82344744;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82344744:
	// lwz r11,432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823447a0
	if (ctx.cr6.eq) goto loc_823447A0;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82344768
	if (ctx.cr6.eq) goto loc_82344768;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x823447bc
	goto loc_823447BC;
loc_82344768:
	// lwz r11,1356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82344788
	if (ctx.cr6.eq) goto loc_82344788;
	// lwz r11,448(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82344788
	if (!ctx.cr6.eq) goto loc_82344788;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252e018
	ctx.lr = 0x82344788;
	sub_8252E018(ctx, base);
loc_82344788:
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x822cc470
	ctx.lr = 0x82344794;
	sub_822CC470(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252dc28
	ctx.lr = 0x8234479C;
	sub_8252DC28(ctx, base);
	// b 0x823447f0
	goto loc_823447F0;
loc_823447A0:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823447ec
	if (!ctx.cr6.eq) goto loc_823447EC;
	// bl 0x822cd168
	ctx.lr = 0x823447B4;
	sub_822CD168(ctx, base);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_823447BC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,228(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// bl 0x8252dce0
	ctx.lr = 0x823447C8;
	sub_8252DCE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x822cc048
	ctx.lr = 0x823447D4;
	sub_822CC048(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822cbc58
	ctx.lr = 0x823447EC;
	sub_822CBC58(ctx, base);
loc_823447EC:
	// stw r23,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r23.u32);
loc_823447F0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82344838
	if (ctx.cr6.eq) goto loc_82344838;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82241d18
	ctx.lr = 0x82344800;
	sub_82241D18(ctx, base);
	// b 0x82344838
	goto loc_82344838;
loc_82344804:
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82344838
	if (ctx.cr6.eq) goto loc_82344838;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x822cc048
	ctx.lr = 0x8234481C;
	sub_822CC048(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cbc58
	ctx.lr = 0x82344834;
	sub_822CBC58(ctx, base);
	// stw r20,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r20.u32);
loc_82344838:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823448b0
	if (ctx.cr6.eq) goto loc_823448B0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823448b0
	if (ctx.cr6.eq) goto loc_823448B0;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// bl 0x8226c3f0
	ctx.lr = 0x82344858;
	sub_8226C3F0(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82344870
	if (ctx.cr6.eq) goto loc_82344870;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x822cc528
	ctx.lr = 0x8234486C;
	sub_822CC528(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82344870:
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r29.u32);
	// beq cr6,0x823448b0
	if (ctx.cr6.eq) goto loc_823448B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82519160
	ctx.lr = 0x8234488C;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r5,392(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// addi r4,r11,12672
	ctx.r4.s64 = ctx.r11.s64 + 12672;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a72e8
	ctx.lr = 0x823448A0;
	sub_826A72E8(ctx, base);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823448b0
	if (ctx.cr6.eq) goto loc_823448B0;
	// bl 0x82241d18
	ctx.lr = 0x823448B0;
	sub_82241D18(ctx, base);
loc_823448B0:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r4,31080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823448c8
	if (!ctx.cr6.eq) goto loc_823448C8;
	// bl 0x8254abe0
	ctx.lr = 0x823448C4;
	sub_8254ABE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_823448C8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8254c1b0
	ctx.lr = 0x823448D4;
	sub_8254C1B0(ctx, base);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r26,r11,24856
	ctx.r26.s64 = ctx.r11.s64 + 24856;
	// lwz r25,176(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82344af0
	if (ctx.cr6.eq) goto loc_82344AF0;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x823448F0;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344a08
	if (ctx.cr0.eq) goto loc_82344A08;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344a08
	if (ctx.cr6.eq) goto loc_82344A08;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x828d6418
	ctx.lr = 0x8234490C;
	sub_828D6418(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828c4cb0
	ctx.lr = 0x82344914;
	sub_828C4CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82265158
	ctx.lr = 0x82344920;
	sub_82265158(ctx, base);
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x823449e8
	goto loc_823449E8;
loc_82344930:
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c11f8
	ctx.lr = 0x8234493C;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// beq 0x8234499c
	if (ctx.cr0.eq) goto loc_8234499C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82344978
	if (ctx.cr0.eq) goto loc_82344978;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subfe r30,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82344970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82344990
	goto loc_82344990;
loc_82344978:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234498C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82344990:
	// addi r3,r3,828
	ctx.r3.s64 = ctx.r3.s64 + 828;
	// bl 0x828df890
	ctx.lr = 0x82344998;
	sub_828DF890(ctx, base);
	// b 0x823449d8
	goto loc_823449D8;
loc_8234499C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823449d8
	if (ctx.cr6.eq) goto loc_823449D8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823449B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,828
	ctx.r3.s64 = ctx.r3.s64 + 828;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823449CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r10,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r10.u32);
loc_823449D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a2b0
	ctx.lr = 0x823449E0;
	sub_8241A2B0(ctx, base);
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823449E8:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82344930
	if (!ctx.cr6.eq) goto loc_82344930;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822655c0
	ctx.lr = 0x82344A00;
	sub_822655C0(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82691540
	ctx.lr = 0x82344A08;
	sub_82691540(ctx, base);
loc_82344A08:
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x82344A10;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344af0
	if (ctx.cr0.eq) goto loc_82344AF0;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344b28
	if (ctx.cr6.eq) goto loc_82344B28;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x828d6418
	ctx.lr = 0x82344A2C;
	sub_828D6418(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828c4cb0
	ctx.lr = 0x82344A34;
	sub_828C4CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82265158
	ctx.lr = 0x82344A40;
	sub_82265158(ctx, base);
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82344acc
	goto loc_82344ACC;
loc_82344A50:
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c11f8
	ctx.lr = 0x82344A5C;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344abc
	if (ctx.cr0.eq) goto loc_82344ABC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,1024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subfe r29,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82344A84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,912
	ctx.r3.s64 = ctx.r3.s64 + 912;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828df890
	ctx.lr = 0x82344A90;
	sub_828DF890(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,1020(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subfe r30,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82344AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,744
	ctx.r3.s64 = ctx.r3.s64 + 744;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828df890
	ctx.lr = 0x82344ABC;
	sub_828DF890(ctx, base);
loc_82344ABC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a2b0
	ctx.lr = 0x82344AC4;
	sub_8241A2B0(ctx, base);
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82344ACC:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82344a50
	if (!ctx.cr6.eq) goto loc_82344A50;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822655c0
	ctx.lr = 0x82344AE4;
	sub_822655C0(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x82691540
	ctx.lr = 0x82344AEC;
	sub_82691540(ctx, base);
	// b 0x82344b28
	goto loc_82344B28;
loc_82344AF0:
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82344b08
	if (ctx.cr6.eq) goto loc_82344B08;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// stw r20,56(r26)
	PPC_STORE_U32(ctx.r26.u32 + 56, ctx.r20.u32);
	// b 0x82344b20
	goto loc_82344B20;
loc_82344B08:
	// lwz r11,1020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82344b28
	if (ctx.cr6.eq) goto loc_82344B28;
	// stw r20,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r20.u32);
	// stw r23,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r23.u32);
	// stw r23,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r23.u32);
loc_82344B20:
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// li r21,16
	ctx.r21.s64 = 16;
loc_82344B28:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82344f00
	if (ctx.cr6.eq) goto loc_82344F00;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x82344B38;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344d34
	if (ctx.cr0.eq) goto loc_82344D34;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344d34
	if (ctx.cr6.eq) goto loc_82344D34;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x828d6418
	ctx.lr = 0x82344B54;
	sub_828D6418(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828c4cb0
	ctx.lr = 0x82344B5C;
	sub_828C4CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82265158
	ctx.lr = 0x82344B68;
	sub_82265158(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subfe r29,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82344c34
	goto loc_82344C34;
loc_82344B8C:
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c11f8
	ctx.lr = 0x82344B98;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x82344bd0
	if (ctx.cr0.eq) goto loc_82344BD0;
	// bctrl 
	ctx.lr = 0x82344BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,912
	ctx.r3.s64 = ctx.r3.s64 + 912;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82344BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82344bec
	goto loc_82344BEC;
loc_82344BD0:
	// bctrl 
	ctx.lr = 0x82344BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,912
	ctx.r3.s64 = ctx.r3.s64 + 912;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82344BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82344BEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82344C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,912
	ctx.r3.s64 = ctx.r3.s64 + 912;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82344C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bl 0x8241a2b0
	ctx.lr = 0x82344C2C;
	sub_8241A2B0(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82344C34:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82344b8c
	if (!ctx.cr6.eq) goto loc_82344B8C;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344c54
	if (ctx.cr0.eq) goto loc_82344C54;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// stw r20,56(r26)
	PPC_STORE_U32(ctx.r26.u32 + 56, ctx.r20.u32);
	// li r21,16
	ctx.r21.s64 = 16;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
loc_82344C54:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344d1c
	if (ctx.cr0.eq) goto loc_82344D1C;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82344d1c
	if (!ctx.cr0.eq) goto loc_82344D1C;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x82344C6C;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344d18
	if (ctx.cr0.eq) goto loc_82344D18;
	// stw r23,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r23.u32);
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x828d6418
	ctx.lr = 0x82344C84;
	sub_828D6418(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828c4cb0
	ctx.lr = 0x82344C8C;
	sub_828C4CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82265158
	ctx.lr = 0x82344C98;
	sub_82265158(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82344cec
	goto loc_82344CEC;
loc_82344CA8:
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c11f8
	ctx.lr = 0x82344CB4;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344cdc
	if (ctx.cr0.eq) goto loc_82344CDC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82344CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,744
	ctx.r3.s64 = ctx.r3.s64 + 744;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828df890
	ctx.lr = 0x82344CDC;
	sub_828DF890(ctx, base);
loc_82344CDC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a2b0
	ctx.lr = 0x82344CE4;
	sub_8241A2B0(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82344CEC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82344ca8
	if (!ctx.cr6.eq) goto loc_82344CA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82345220
	ctx.lr = 0x82344CFC;
	sub_82345220(ctx, base);
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x822655c0
	ctx.lr = 0x82344D10;
	sub_822655C0(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82691540
	ctx.lr = 0x82344D18;
	sub_82691540(ctx, base);
loc_82344D18:
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82344D1C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822655c0
	ctx.lr = 0x82344D2C;
	sub_822655C0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82691540
	ctx.lr = 0x82344D34;
	sub_82691540(ctx, base);
loc_82344D34:
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x82344D3C;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344eb8
	if (ctx.cr0.eq) goto loc_82344EB8;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344eb8
	if (ctx.cr6.eq) goto loc_82344EB8;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x828d6418
	ctx.lr = 0x82344D58;
	sub_828D6418(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828c4cb0
	ctx.lr = 0x82344D60;
	sub_828C4CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82265158
	ctx.lr = 0x82344D6C;
	sub_82265158(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subfe r29,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82344e38
	goto loc_82344E38;
loc_82344D90:
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c11f8
	ctx.lr = 0x82344D9C;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x82344dd4
	if (ctx.cr0.eq) goto loc_82344DD4;
	// bctrl 
	ctx.lr = 0x82344DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,744
	ctx.r3.s64 = ctx.r3.s64 + 744;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82344DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82344df0
	goto loc_82344DF0;
loc_82344DD4:
	// bctrl 
	ctx.lr = 0x82344DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,744
	ctx.r3.s64 = ctx.r3.s64 + 744;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82344DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82344DF0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82344E04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,744
	ctx.r3.s64 = ctx.r3.s64 + 744;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82344E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bl 0x8241a2b0
	ctx.lr = 0x82344E30;
	sub_8241A2B0(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82344E38:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82344d90
	if (!ctx.cr6.eq) goto loc_82344D90;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344e68
	if (ctx.cr0.eq) goto loc_82344E68;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x828e3618
	ctx.lr = 0x82344E50;
	sub_828E3618(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344e68
	if (ctx.cr0.eq) goto loc_82344E68;
	// li r21,17
	ctx.r21.s64 = 17;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
loc_82344E68:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344ea0
	if (ctx.cr0.eq) goto loc_82344EA0;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82344ea0
	if (!ctx.cr0.eq) goto loc_82344EA0;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x82344E80;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82344e9c
	if (ctx.cr0.eq) goto loc_82344E9C;
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82344e9c
	if (!ctx.cr6.eq) goto loc_82344E9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823450f8
	ctx.lr = 0x82344E9C;
	sub_823450F8(ctx, base);
loc_82344E9C:
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82344EA0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822655c0
	ctx.lr = 0x82344EB0;
	sub_822655C0(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82691540
	ctx.lr = 0x82344EB8;
	sub_82691540(ctx, base);
loc_82344EB8:
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x82344EC0;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82344f00
	if (!ctx.cr0.eq) goto loc_82344F00;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82344ee4
	if (ctx.cr6.eq) goto loc_82344EE4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x82344EE0;
	sub_8253D820(ctx, base);
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
loc_82344EE4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82344f00
	if (ctx.cr6.eq) goto loc_82344F00;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x82344EFC;
	sub_8253D820(ctx, base);
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
loc_82344F00:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82344f64
	if (ctx.cr6.eq) goto loc_82344F64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// stw r20,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r20.u32);
	// beq cr6,0x82344f58
	if (ctx.cr6.eq) goto loc_82344F58;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82344f40
	if (ctx.cr6.eq) goto loc_82344F40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822cc048
	ctx.lr = 0x82344F2C;
	sub_822CC048(ctx, base);
	// lwz r11,21092(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82344f40
	if (!ctx.cr6.eq) goto loc_82344F40;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x822cb838
	ctx.lr = 0x82344F40;
	sub_822CB838(ctx, base);
loc_82344F40:
	// cmpwi cr6,r21,5
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 5, ctx.xer);
	// beq cr6,0x82344f54
	if (ctx.cr6.eq) goto loc_82344F54;
	// addi r4,r31,1056
	ctx.r4.s64 = ctx.r31.s64 + 1056;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823490b0
	ctx.lr = 0x82344F54;
	sub_823490B0(ctx, base);
loc_82344F54:
	// stw r23,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r23.u32);
loc_82344F58:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823418a8
	ctx.lr = 0x82344F64;
	sub_823418A8(ctx, base);
loc_82344F64:
	// lwz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823450dc
	if (ctx.cr6.eq) goto loc_823450DC;
	// stw r23,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r23.u32);
	// addi r26,r31,1056
	ctx.r26.s64 = ctx.r31.s64 + 1056;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r27,436(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// lwz r28,428(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// bl 0x823490b0
	ctx.lr = 0x82344F90;
	sub_823490B0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82344fbc
	if (ctx.cr6.eq) goto loc_82344FBC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822cc048
	ctx.lr = 0x82344FA4;
	sub_822CC048(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822cbc58
	ctx.lr = 0x82344FBC;
	sub_822CBC58(ctx, base);
loc_82344FBC:
	// addic. r29,r31,1044
	ctx.xer.ca = ctx.r31.u32 > 4294966251;
	ctx.r29.s64 = ctx.r31.s64 + 1044;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823450dc
	if (ctx.cr0.eq) goto loc_823450DC;
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
	// beq 0x823450dc
	if (ctx.cr0.eq) goto loc_823450DC;
	// li r3,472
	ctx.r3.s64 = 472;
	// bl 0x82691500
	ctx.lr = 0x82344FDC;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82345034
	if (ctx.cr0.eq) goto loc_82345034;
	// addic. r3,r30,16
	ctx.xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r3.s64 = ctx.r30.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r16,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r16.u32);
	// stw r20,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r20.u32);
	// stw r20,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r20.u32);
	// beq 0x82345038
	if (ctx.cr0.eq) goto loc_82345038;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,10692
	ctx.r11.s64 = ctx.r11.s64 + 10692;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r9,r31,1060
	ctx.r9.s64 = ctx.r31.s64 + 1060;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r31,1024
	ctx.r6.s64 = ctx.r31.s64 + 1024;
	// addi r5,r31,1020
	ctx.r5.s64 = ctx.r31.s64 + 1020;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8252cbc8
	ctx.lr = 0x82345030;
	sub_8252CBC8(ctx, base);
	// b 0x82345038
	goto loc_82345038;
loc_82345034:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82345038:
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823f6330
	ctx.lr = 0x82345050;
	sub_823F6330(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82345060
	if (ctx.cr6.eq) goto loc_82345060;
	// bl 0x82241d18
	ctx.lr = 0x82345060;
	sub_82241D18(ctx, base);
loc_82345060:
	// addi r3,r1,4512
	ctx.r3.s64 = ctx.r1.s64 + 4512;
	// bl 0x822a3128
	ctx.lr = 0x82345068;
	sub_822A3128(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,4512
	ctx.r3.s64 = ctx.r1.s64 + 4512;
	// bl 0x823091c0
	ctx.lr = 0x82345074;
	sub_823091C0(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,4556
	ctx.r5.s64 = ctx.r1.s64 + 4556;
	// bl 0x8259c8e0
	ctx.lr = 0x82345090;
	sub_8259C8E0(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,6604
	ctx.r5.s64 = ctx.r1.s64 + 6604;
	// bl 0x8259c8e0
	ctx.lr = 0x823450AC;
	sub_8259C8E0(ctx, base);
	// addi r3,r1,4512
	ctx.r3.s64 = ctx.r1.s64 + 4512;
	// bl 0x8250b348
	ctx.lr = 0x823450B4;
	sub_8250B348(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8250e7c8
	ctx.lr = 0x823450C0;
	sub_8250E7C8(ctx, base);
	// lwz r4,560(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x8252d610
	ctx.lr = 0x823450CC;
	sub_8252D610(ctx, base);
	// lwz r3,4516(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4516);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823450dc
	if (ctx.cr6.eq) goto loc_823450DC;
	// bl 0x82241d18
	ctx.lr = 0x823450DC;
	sub_82241D18(ctx, base);
loc_823450DC:
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823450ec
	if (ctx.cr6.eq) goto loc_823450EC;
	// bl 0x82241d18
	ctx.lr = 0x823450EC;
	sub_82241D18(ctx, base);
loc_823450EC:
	// addi r1,r1,8944
	ctx.r1.s64 = ctx.r1.s64 + 8944;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823450F4"))) PPC_WEAK_FUNC(sub_823450F4);
PPC_FUNC_IMPL(__imp__sub_823450F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823450F8"))) PPC_WEAK_FUNC(sub_823450F8);
PPC_FUNC_IMPL(__imp__sub_823450F8) {
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
	// stwu r1,-2816(r1)
	ea = -2816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r30,r11,21076
	ctx.r30.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,31976
	ctx.r4.s64 = ctx.r10.s64 + 31976;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x82345138;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,10308
	ctx.r4.s64 = ctx.r11.s64 + 10308;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// bl 0x8259c8e0
	ctx.lr = 0x82345158;
	sub_8259C8E0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,31996
	ctx.r4.s64 = ctx.r11.s64 + 31996;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8259c8e0
	ctx.lr = 0x82345178;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,10328
	ctx.r4.s64 = ctx.r11.s64 + 10328;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x8259c8e0
	ctx.lr = 0x82345198;
	sub_8259C8E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82345204
	if (!ctx.cr6.eq) goto loc_82345204;
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x823451AC;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823451f8
	if (ctx.cr0.eq) goto loc_823451F8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r8,-32204
	ctx.r8.s64 = -2110521344;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,1052(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1052, ctx.r11.u32);
	// addi r8,r8,21320
	ctx.r8.s64 = ctx.r8.s64 + 21320;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253d420
	ctx.lr = 0x823451F0;
	sub_8253D420(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x823451fc
	goto loc_823451FC;
loc_823451F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823451FC:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x8253daa0
	ctx.lr = 0x82345204;
	sub_8253DAA0(ctx, base);
loc_82345204:
	// addi r1,r1,2816
	ctx.r1.s64 = ctx.r1.s64 + 2816;
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

__attribute__((alias("__imp__sub_8234521C"))) PPC_WEAK_FUNC(sub_8234521C);
PPC_FUNC_IMPL(__imp__sub_8234521C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82345220"))) PPC_WEAK_FUNC(sub_82345220);
PPC_FUNC_IMPL(__imp__sub_82345220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82345228;
	__savegprlr_29(ctx, base);
	// stwu r1,-2816(r1)
	ea = -2816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r30,r11,21076
	ctx.r30.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,31976
	ctx.r4.s64 = ctx.r10.s64 + 31976;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x82345258;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,10340
	ctx.r4.s64 = ctx.r11.s64 + 10340;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// bl 0x8259c8e0
	ctx.lr = 0x82345278;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-19708
	ctx.r4.s64 = ctx.r11.s64 + -19708;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8259c8e0
	ctx.lr = 0x82345298;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-19704
	ctx.r4.s64 = ctx.r11.s64 + -19704;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x8259c8e0
	ctx.lr = 0x823452B8;
	sub_8259C8E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82345340
	if (!ctx.cr6.eq) goto loc_82345340;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823452e4
	if (ctx.cr6.eq) goto loc_823452E4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x823452E0;
	sub_8253D820(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_823452E4:
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x823452EC;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82345334
	if (ctx.cr0.eq) goto loc_82345334;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r8,-32204
	ctx.r8.s64 = -2110521344;
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,1052(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1052, ctx.r11.u32);
	// addi r8,r8,21896
	ctx.r8.s64 = ctx.r8.s64 + 21896;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253d420
	ctx.lr = 0x8234532C;
	sub_8253D420(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82345338
	goto loc_82345338;
loc_82345334:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82345338:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x8253daa0
	ctx.lr = 0x82345340;
	sub_8253DAA0(ctx, base);
loc_82345340:
	// addi r1,r1,2816
	ctx.r1.s64 = ctx.r1.s64 + 2816;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82345348"))) PPC_WEAK_FUNC(sub_82345348);
PPC_FUNC_IMPL(__imp__sub_82345348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82345350;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82345420
	if (!ctx.cr6.eq) goto loc_82345420;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x82345370;
	sub_8253D820(ctx, base);
	// lwz r11,1096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1096);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82345580
	if (ctx.cr6.eq) goto loc_82345580;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x828d6418
	ctx.lr = 0x8234538C;
	sub_828D6418(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828c4cb0
	ctx.lr = 0x82345394;
	sub_828C4CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82265158
	ctx.lr = 0x823453A0;
	sub_82265158(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x823453fc
	goto loc_823453FC;
loc_823453B0:
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c11f8
	ctx.lr = 0x823453BC;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823453ec
	if (ctx.cr0.eq) goto loc_823453EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1020(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1020, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823453E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,744
	ctx.r3.s64 = ctx.r3.s64 + 744;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828df890
	ctx.lr = 0x823453EC;
	sub_828DF890(ctx, base);
loc_823453EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a2b0
	ctx.lr = 0x823453F4;
	sub_8241A2B0(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823453FC:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x823453b0
	if (!ctx.cr6.eq) goto loc_823453B0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822655c0
	ctx.lr = 0x82345414;
	sub_822655C0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82691540
	ctx.lr = 0x8234541C;
	sub_82691540(ctx, base);
	// b 0x82345580
	goto loc_82345580;
loc_82345420:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82345570
	if (!ctx.cr6.eq) goto loc_82345570;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x82345438;
	sub_8253D820(ctx, base);
	// lis r29,-31955
	ctx.r29.s64 = -2094202880;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,31080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82345458
	if (!ctx.cr6.eq) goto loc_82345458;
	// bl 0x8254abe0
	ctx.lr = 0x82345454;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82345458:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c1b0
	ctx.lr = 0x82345468;
	sub_8254C1B0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234549c
	if (ctx.cr6.eq) goto loc_8234549C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824261e8
	ctx.lr = 0x82345480;
	sub_824261E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8225c020
	ctx.lr = 0x8234548C;
	sub_8225C020(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234549c
	if (ctx.cr6.eq) goto loc_8234549C;
	// bl 0x82241d18
	ctx.lr = 0x8234549C;
	sub_82241D18(ctx, base);
loc_8234549C:
	// lwz r11,31080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823454b0
	if (ctx.cr6.eq) goto loc_823454B0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x823454b8
	goto loc_823454B8;
loc_823454B0:
	// bl 0x8254abe0
	ctx.lr = 0x823454B4;
	sub_8254ABE0(ctx, base);
	// lwz r11,31080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31080);
loc_823454B8:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_823454C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823454d4
	if (!ctx.cr6.eq) goto loc_823454D4;
	// bl 0x8254abe0
	ctx.lr = 0x823454D0;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_823454D4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8234555c
	if (ctx.cr6.eq) goto loc_8234555C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82348d20
	ctx.lr = 0x823454F0;
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
	// beq cr6,0x82345518
	if (ctx.cr6.eq) goto loc_82345518;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82241d18
	ctx.lr = 0x82345518;
	sub_82241D18(ctx, base);
loc_82345518:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234554c
	if (ctx.cr0.eq) goto loc_8234554C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82348d20
	ctx.lr = 0x8234552C;
	sub_82348D20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828e4c10
	ctx.lr = 0x8234553C;
	sub_828E4C10(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234554c
	if (ctx.cr6.eq) goto loc_8234554C;
	// bl 0x82241d18
	ctx.lr = 0x8234554C;
	sub_82241D18(ctx, base);
loc_8234554C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a2b0
	ctx.lr = 0x82345554;
	sub_8241A2B0(ctx, base);
	// lwz r11,31080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31080);
	// b 0x823454c4
	goto loc_823454C4;
loc_8234555C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82345580
	if (ctx.cr6.eq) goto loc_82345580;
	// bl 0x82241d18
	ctx.lr = 0x8234556C;
	sub_82241D18(ctx, base);
	// b 0x82345580
	goto loc_82345580;
loc_82345570:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82345580
	if (!ctx.cr6.eq) goto loc_82345580;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82345580:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82345588"))) PPC_WEAK_FUNC(sub_82345588);
PPC_FUNC_IMPL(__imp__sub_82345588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82345590;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82345660
	if (!ctx.cr6.eq) goto loc_82345660;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x823455B0;
	sub_8253D820(ctx, base);
	// lwz r11,1096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1096);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// beq cr6,0x823457c0
	if (ctx.cr6.eq) goto loc_823457C0;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x828d6418
	ctx.lr = 0x823455CC;
	sub_828D6418(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828c4cb0
	ctx.lr = 0x823455D4;
	sub_828C4CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82265158
	ctx.lr = 0x823455E0;
	sub_82265158(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8234563c
	goto loc_8234563C;
loc_823455F0:
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c11f8
	ctx.lr = 0x823455FC;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234562c
	if (ctx.cr0.eq) goto loc_8234562C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1024(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1024, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82345620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,912
	ctx.r3.s64 = ctx.r3.s64 + 912;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828df890
	ctx.lr = 0x8234562C;
	sub_828DF890(ctx, base);
loc_8234562C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a2b0
	ctx.lr = 0x82345634;
	sub_8241A2B0(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8234563C:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x823455f0
	if (!ctx.cr6.eq) goto loc_823455F0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822655c0
	ctx.lr = 0x82345654;
	sub_822655C0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82691540
	ctx.lr = 0x8234565C;
	sub_82691540(ctx, base);
	// b 0x823457c0
	goto loc_823457C0;
loc_82345660:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823457b0
	if (!ctx.cr6.eq) goto loc_823457B0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x82345678;
	sub_8253D820(ctx, base);
	// lis r29,-31955
	ctx.r29.s64 = -2094202880;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,31080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82345698
	if (!ctx.cr6.eq) goto loc_82345698;
	// bl 0x8254abe0
	ctx.lr = 0x82345694;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82345698:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c1b0
	ctx.lr = 0x823456A8;
	sub_8254C1B0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823456dc
	if (ctx.cr6.eq) goto loc_823456DC;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824261e8
	ctx.lr = 0x823456C0;
	sub_824261E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8225c020
	ctx.lr = 0x823456CC;
	sub_8225C020(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823456dc
	if (ctx.cr6.eq) goto loc_823456DC;
	// bl 0x82241d18
	ctx.lr = 0x823456DC;
	sub_82241D18(ctx, base);
loc_823456DC:
	// lwz r11,31080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823456f0
	if (ctx.cr6.eq) goto loc_823456F0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x823456f8
	goto loc_823456F8;
loc_823456F0:
	// bl 0x8254abe0
	ctx.lr = 0x823456F4;
	sub_8254ABE0(ctx, base);
	// lwz r11,31080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31080);
loc_823456F8:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82345704:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82345714
	if (!ctx.cr6.eq) goto loc_82345714;
	// bl 0x8254abe0
	ctx.lr = 0x82345710;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82345714:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8234579c
	if (ctx.cr6.eq) goto loc_8234579C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82348d20
	ctx.lr = 0x82345730;
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
	// beq cr6,0x82345758
	if (ctx.cr6.eq) goto loc_82345758;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82241d18
	ctx.lr = 0x82345758;
	sub_82241D18(ctx, base);
loc_82345758:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234578c
	if (ctx.cr0.eq) goto loc_8234578C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82348d20
	ctx.lr = 0x8234576C;
	sub_82348D20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828e4c10
	ctx.lr = 0x8234577C;
	sub_828E4C10(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234578c
	if (ctx.cr6.eq) goto loc_8234578C;
	// bl 0x82241d18
	ctx.lr = 0x8234578C;
	sub_82241D18(ctx, base);
loc_8234578C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a2b0
	ctx.lr = 0x82345794;
	sub_8241A2B0(ctx, base);
	// lwz r11,31080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31080);
	// b 0x82345704
	goto loc_82345704;
loc_8234579C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823457c0
	if (ctx.cr6.eq) goto loc_823457C0;
	// bl 0x82241d18
	ctx.lr = 0x823457AC;
	sub_82241D18(ctx, base);
	// b 0x823457c0
	goto loc_823457C0;
loc_823457B0:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x823457c0
	if (!ctx.cr6.eq) goto loc_823457C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_823457C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823457C8"))) PPC_WEAK_FUNC(sub_823457C8);
PPC_FUNC_IMPL(__imp__sub_823457C8) {
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
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82345804
	if (!ctx.cr6.eq) goto loc_82345804;
	// addi r4,r3,176
	ctx.r4.s64 = ctx.r3.s64 + 176;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8257e800
	ctx.lr = 0x82345800;
	sub_8257E800(ctx, base);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
loc_82345804:
	// lwz r3,660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82345824
	if (ctx.cr6.eq) goto loc_82345824;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,2116(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2116);
	// bl 0x82572040
	ctx.lr = 0x8234581C;
	sub_82572040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r11.u32);
loc_82345824:
	// lwz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// addi r4,r31,564
	ctx.r4.s64 = ctx.r31.s64 + 564;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345864
	if (ctx.cr6.eq) goto loc_82345864;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r31,176
	ctx.r6.s64 = ctx.r31.s64 + 176;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,2116(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2116);
	// bl 0x82571e90
	ctx.lr = 0x8234585C;
	sub_82571E90(ctx, base);
	// stw r3,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r3.u32);
	// b 0x823458d4
	goto loc_823458D4;
loc_82345864:
	// li r8,576
	ctx.r8.s64 = 576;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r11,r31,176
	ctx.r11.s64 = ctx.r31.s64 + 176;
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lvx128 v0,r31,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// addi r8,r10,31280
	ctx.r8.s64 = ctx.r10.s64 + 31280;
	// stvx128 v0,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,31296(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31296);
	// clrlwi. r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f0,592(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// lfs f0,596(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// lfs f0,600(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// bne 0x823458c4
	if (!ctx.cr0.eq) goto loc_823458C4;
	// vor128 v0,v77,v77
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,31296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31296, ctx.r10.u32);
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x823458c8
	goto loc_823458C8;
loc_823458C4:
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
loc_823458C8:
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r30,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r30.u32);
	// stvx128 v0,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_823458D4:
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

__attribute__((alias("__imp__sub_823458EC"))) PPC_WEAK_FUNC(sub_823458EC);
PPC_FUNC_IMPL(__imp__sub_823458EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823458F0"))) PPC_WEAK_FUNC(sub_823458F0);
PPC_FUNC_IMPL(__imp__sub_823458F0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r10,10368
	ctx.r4.s64 = ctx.r10.s64 + 10368;
	// lwz r11,996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 996);
	// lwz r11,2240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2240);
	// addi r3,r11,152
	ctx.r3.s64 = ctx.r11.s64 + 152;
	// bl 0x82564eb8
	ctx.lr = 0x82345920;
	sub_82564EB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8234595c
	if (ctx.cr0.eq) goto loc_8234595C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234595c
	if (ctx.cr6.eq) goto loc_8234595C;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,1732(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1732);
	// stw r8,1216(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1216, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82345958
	if (!ctx.cr6.eq) goto loc_82345958;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,-22432
	ctx.r11.s64 = ctx.r11.s64 + -22432;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_82345958:
	// stw r11,412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 412, ctx.r11.u32);
loc_8234595C:
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

__attribute__((alias("__imp__sub_82345970"))) PPC_WEAK_FUNC(sub_82345970);
PPC_FUNC_IMPL(__imp__sub_82345970) {
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
	// lwz r11,1088(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1088);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823459cc
	if (!ctx.cr6.eq) goto loc_823459CC;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823459b4
	if (ctx.cr6.eq) goto loc_823459B4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823459B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823459b8
	goto loc_823459B8;
loc_823459B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823459B8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82345a3c
	if (ctx.cr6.eq) goto loc_82345A3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82345a50
	ctx.lr = 0x823459C8;
	sub_82345A50(ctx, base);
	// b 0x82345a3c
	goto loc_82345A3C;
loc_823459CC:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823459e0
	if (!ctx.cr6.eq) goto loc_823459E0;
	// bl 0x822599a0
	ctx.lr = 0x823459E0;
	sub_822599A0(ctx, base);
loc_823459E0:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823459f8
	if (ctx.cr0.eq) goto loc_823459F8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x823459fc
	goto loc_823459FC;
loc_823459F8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823459FC:
	// stw r11,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82345a3c
	if (ctx.cr6.eq) goto loc_82345A3C;
	// lwz r3,1096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82345a30
	if (ctx.cr6.eq) goto loc_82345A30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82345A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,336
	ctx.r3.s64 = ctx.r3.s64 + 336;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828df890
	ctx.lr = 0x82345A30;
	sub_828DF890(ctx, base);
loc_82345A30:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823418a8
	ctx.lr = 0x82345A3C;
	sub_823418A8(ctx, base);
loc_82345A3C:
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

__attribute__((alias("__imp__sub_82345A50"))) PPC_WEAK_FUNC(sub_82345A50);
PPC_FUNC_IMPL(__imp__sub_82345A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82345A58;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-1680(r1)
	ea = -1680 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r21,r11,31944
	ctx.r21.s64 = ctx.r11.s64 + 31944;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,530
	ctx.r3.s64 = ctx.r1.s64 + 530;
	// addi r29,r11,1908
	ctx.r29.s64 = ctx.r11.s64 + 1908;
	// lhz r30,0(r21)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// addi r25,r11,2124
	ctx.r25.s64 = ctx.r11.s64 + 2124;
	// lwz r28,764(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// sth r30,528(r1)
	PPC_STORE_U16(ctx.r1.u32 + 528, ctx.r30.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82345A94;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// sth r30,1040(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1040, ctx.r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1042
	ctx.r3.s64 = ctx.r1.s64 + 1042;
	// bl 0x82fa7cf0
	ctx.lr = 0x82345AA8;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r20,1
	ctx.r20.s64 = 1;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r20,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r20.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,916
	ctx.r3.s64 = ctx.r31.s64 + 916;
	// lfs f31,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,912(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 912, temp.u32);
	// bl 0x82fa2df8
	ctx.lr = 0x82345ACC;
	sub_82FA2DF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8255b788
	ctx.lr = 0x82345AD4;
	sub_8255B788(ctx, base);
	// bl 0x825b7a80
	ctx.lr = 0x82345AD8;
	sub_825B7A80(ctx, base);
	// lis r23,-31957
	ctx.r23.s64 = -2094333952;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r18,-31957
	ctx.r18.s64 = -2094333952;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// stw r24,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r24.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// lwz r11,21092(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345b08
	if (ctx.cr6.eq) goto loc_82345B08;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82345b40
	goto loc_82345B40;
loc_82345B08:
	// lwz r11,21120(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345b24
	if (ctx.cr6.eq) goto loc_82345B24;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82345b40
	goto loc_82345B40;
loc_82345B24:
	// addic. r11,r31,1136
	ctx.xer.ca = ctx.r31.u32 > 4294966159;
	ctx.r11.s64 = ctx.r31.s64 + 1136;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82345b44
	if (ctx.cr0.eq) goto loc_82345B44;
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
	// beq 0x82345b44
	if (ctx.cr0.eq) goto loc_82345B44;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82345B40:
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
loc_82345B44:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r11,r11,-17888
	ctx.r11.s64 = ctx.r11.s64 + -17888;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
loc_82345B54:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r6,-4
	ctx.r3.s64 = ctx.r6.s64 + -4;
	// bl 0x82544c50
	ctx.lr = 0x82345B60;
	sub_82544C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82345b70
	if (ctx.cr0.eq) goto loc_82345B70;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
loc_82345B70:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// bne 0x82345b54
	if (!ctx.cr0.eq) goto loc_82345B54;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82345b98
	if (ctx.cr6.eq) goto loc_82345B98;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82546708
	ctx.lr = 0x82345B94;
	sub_82546708(ctx, base);
	// stw r3,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r3.u32);
loc_82345B98:
	// addic. r30,r31,1116
	ctx.xer.ca = ctx.r31.u32 > 4294966179;
	ctx.r30.s64 = ctx.r31.s64 + 1116;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82345bdc
	if (ctx.cr0.eq) goto loc_82345BDC;
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
	// beq 0x82345bdc
	if (ctx.cr0.eq) goto loc_82345BDC;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82691500
	ctx.lr = 0x82345BB8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82345bd4
	if (ctx.cr0.eq) goto loc_82345BD4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824f59c0
	ctx.lr = 0x82345BD0;
	sub_824F59C0(ctx, base);
	// b 0x82345bd8
	goto loc_82345BD8;
loc_82345BD4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82345BD8:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_82345BDC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1120
	ctx.r3.s64 = ctx.r31.s64 + 1120;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// bl 0x82546708
	ctx.lr = 0x82345BF0;
	sub_82546708(ctx, base);
	// mr. r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq 0x82345c18
	if (ctx.cr0.eq) goto loc_82345C18;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82546b30
	ctx.lr = 0x82345C00;
	sub_82546B30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82691580
	ctx.lr = 0x82345C08;
	sub_82691580(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x82a75198
	ctx.lr = 0x82345C18;
	sub_82A75198(ctx, base);
loc_82345C18:
	// addic. r26,r31,1124
	ctx.xer.ca = ctx.r31.u32 > 4294966171;
	ctx.r26.s64 = ctx.r31.s64 + 1124;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82345e34
	if (ctx.cr0.eq) goto loc_82345E34;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82345e34
	if (ctx.cr0.eq) goto loc_82345E34;
	// lwz r29,21092(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21092);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// beq cr6,0x82345d4c
	if (ctx.cr6.eq) goto loc_82345D4C;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82fa7cf0
	ctx.lr = 0x82345C58;
	sub_82FA7CF0(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// addi r9,r1,180
	ctx.r9.s64 = ctx.r1.s64 + 180;
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// addi r8,r1,172
	ctx.r8.s64 = ctx.r1.s64 + 172;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// addi r7,r1,168
	ctx.r7.s64 = ctx.r1.s64 + 168;
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ff1a8
	ctx.lr = 0x82345C88;
	sub_822FF1A8(ctx, base);
	// stw r20,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82304500
	ctx.lr = 0x82345C98;
	sub_82304500(ctx, base);
	// lwz r3,21092(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21092);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// beq cr6,0x82345ccc
	if (ctx.cr6.eq) goto loc_82345CCC;
	// addi r9,r1,180
	ctx.r9.s64 = ctx.r1.s64 + 180;
	// addi r8,r1,172
	ctx.r8.s64 = ctx.r1.s64 + 172;
	// addi r7,r1,168
	ctx.r7.s64 = ctx.r1.s64 + 168;
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822ff1a8
	ctx.lr = 0x82345CCC;
	sub_822FF1A8(ctx, base);
loc_82345CCC:
	// stw r20,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82304500
	ctx.lr = 0x82345CDC;
	sub_82304500(ctx, base);
	// lwz r11,21092(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21092);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// beq cr6,0x82345d38
	if (ctx.cr6.eq) goto loc_82345D38;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lfs f0,216(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// lfs f0,228(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r3,140(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// bl 0x8232cdf8
	ctx.lr = 0x82345D2C;
	sub_8232CDF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_82345D38:
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82304500
	ctx.lr = 0x82345D48;
	sub_82304500(ctx, base);
	// b 0x82345d60
	goto loc_82345D60;
loc_82345D4C:
	// bl 0x8226c3f0
	ctx.lr = 0x82345D50;
	sub_8226C3F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,472
	ctx.r4.s64 = ctx.r11.s64 + 472;
	// bl 0x8226cbc8
	ctx.lr = 0x82345D60;
	sub_8226CBC8(ctx, base);
loc_82345D60:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,36428
	ctx.r3.u64 = ctx.r3.u64 | 36428;
	// bl 0x82691500
	ctx.lr = 0x82345D6C;
	sub_82691500(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82345e24
	if (ctx.cr0.eq) goto loc_82345E24;
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// li r11,84
	ctx.r11.s64 = 84;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// lwz r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,148(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// subf r10,r29,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r29.s64;
	// divw r4,r10,r11
	ctx.r4.s32 = ctx.r10.s32 / ctx.r11.s32;
	// bl 0x8226ce00
	ctx.lr = 0x82345D9C;
	sub_8226CE00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82345de0
	if (ctx.cr0.eq) goto loc_82345DE0;
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82345ddc
	if (ctx.cr6.eq) goto loc_82345DDC;
	// subf r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
loc_82345DB4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82345dcc
	if (ctx.cr6.eq) goto loc_82345DCC;
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82345DCC;
	sub_82FA77C0(ctx, base);
loc_82345DCC:
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82345db4
	if (!ctx.cr6.eq) goto loc_82345DB4;
loc_82345DDC:
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
loc_82345DE0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r30,144(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,1104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// lwz r9,1148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// lfs f2,1144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	ctx.f2.f64 = double(temp.f32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,1140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
	ctx.f1.f64 = double(temp.f32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x824fbef8
	ctx.lr = 0x82345E20;
	sub_824FBEF8(ctx, base);
	// b 0x82345e28
	goto loc_82345E28;
loc_82345E24:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82345E28:
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8226cb60
	ctx.lr = 0x82345E34;
	sub_8226CB60(ctx, base);
loc_82345E34:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r28,r31,64
	ctx.r28.s64 = ctx.r31.s64 + 64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r11,780
	ctx.r3.s64 = ctx.r11.s64 + 780;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,2248(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2248);
	// lwz r4,2364(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2364);
	// bl 0x822ecec8
	ctx.lr = 0x82345E54;
	sub_822ECEC8(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// bl 0x822ca958
	ctx.lr = 0x82345E5C;
	sub_822CA958(ctx, base);
	// lwz r11,21092(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21092);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82345e80
	if (!ctx.cr6.eq) goto loc_82345E80;
	// lwz r10,21120(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 21120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82345e80
	if (!ctx.cr6.eq) goto loc_82345E80;
	// bl 0x822cb838
	ctx.lr = 0x82345E7C;
	sub_822CB838(ctx, base);
	// lwz r11,21092(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21092);
loc_82345E80:
	// lwz r10,1076(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1076);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82345e98
	if (ctx.cr6.eq) goto loc_82345E98;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// bne cr6,0x82345e9c
	if (!ctx.cr6.eq) goto loc_82345E9C;
loc_82345E98:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82345E9C:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82691500
	ctx.lr = 0x82345EA4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82345ec4
	if (ctx.cr0.eq) goto loc_82345EC4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r31,1128
	ctx.r4.s64 = ctx.r31.s64 + 1128;
	// bl 0x8227d5b0
	ctx.lr = 0x82345EBC;
	sub_8227D5B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82345ec8
	goto loc_82345EC8;
loc_82345EC4:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82345EC8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// bne cr6,0x82345ee4
	if (!ctx.cr6.eq) goto loc_82345EE4;
	// lwz r11,21120(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 21120);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345ee8
	if (ctx.cr6.eq) goto loc_82345EE8;
loc_82345EE4:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_82345EE8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82345efc
	if (ctx.cr6.eq) goto loc_82345EFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x825641d8
	ctx.lr = 0x82345EFC;
	sub_825641D8(ctx, base);
loc_82345EFC:
	// stw r30,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r30.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r8,144(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r6,1304(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// lwz r7,1104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r5,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r5.u32);
	// stw r28,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r28.u32);
	// stw r10,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
	// stw r8,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r8.u32);
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// stw r4,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// stw r9,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r9.u32);
	// stw r7,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r7.u32);
	// stw r6,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r6.u32);
	// stw r11,52(r22)
	PPC_STORE_U32(ctx.r22.u32 + 52, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,48(r22)
	PPC_STORE_U32(ctx.r22.u32 + 48, ctx.r11.u32);
	// bl 0x8234ba28
	ctx.lr = 0x82345F60;
	sub_8234BA28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x822400d8
	ctx.lr = 0x82345F70;
	sub_822400D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82262678
	ctx.lr = 0x82345F80;
	sub_82262678(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x822402c8
	ctx.lr = 0x82345F90;
	sub_822402C8(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82345fc4
	if (ctx.cr6.eq) goto loc_82345FC4;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,32(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82345fc4
	if (!ctx.cr6.eq) goto loc_82345FC4;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82345FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82345fc8
	goto loc_82345FC8;
loc_82345FC4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82345FC8:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82349c18
	ctx.lr = 0x82345FD4;
	sub_82349C18(ctx, base);
	// lwz r11,1076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1076);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345ff0
	if (ctx.cr6.eq) goto loc_82345FF0;
	// lwz r11,21092(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21092);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82345ff4
	if (!ctx.cr6.eq) goto loc_82345FF4;
loc_82345FF0:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82345FF4:
	// addic. r30,r31,1132
	ctx.xer.ca = ctx.r31.u32 > 4294966163;
	ctx.r30.s64 = ctx.r31.s64 + 1132;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8234607c
	if (ctx.cr0.eq) goto loc_8234607C;
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
	// beq 0x8234607c
	if (ctx.cr0.eq) goto loc_8234607C;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82346020
	if (!ctx.cr6.eq) goto loc_82346020;
	// bl 0x822599a0
	ctx.lr = 0x82346020;
	sub_822599A0(ctx, base);
loc_82346020:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8234607c
	if (!ctx.cr0.eq) goto loc_8234607C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8234607c
	if (!ctx.cr6.eq) goto loc_8234607C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234607c
	if (!ctx.cr6.eq) goto loc_8234607C;
	// lwz r11,21120(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234607c
	if (!ctx.cr6.eq) goto loc_8234607C;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82691500
	ctx.lr = 0x82346058;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82346074
	if (ctx.cr0.eq) goto loc_82346074;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,144(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82500b00
	ctx.lr = 0x82346070;
	sub_82500B00(ctx, base);
	// b 0x82346078
	goto loc_82346078;
loc_82346074:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82346078:
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_8234607C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82346610
	ctx.lr = 0x82346084;
	sub_82346610(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82346098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823460AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823460b8
	if (ctx.cr0.lt) goto loc_823460B8;
	// stw r3,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r3.u32);
loc_823460B8:
	// lwz r11,21092(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823462d0
	if (ctx.cr6.eq) goto loc_823462D0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8245c388
	ctx.lr = 0x823460D8;
	sub_8245C388(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8245c388
	ctx.lr = 0x823460EC;
	sub_8245C388(ctx, base);
	// bl 0x8226c3f0
	ctx.lr = 0x823460F0;
	sub_8226C3F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x82346178
	if (!ctx.cr6.eq) goto loc_82346178;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// bl 0x82fa2df8
	ctx.lr = 0x82346120;
	sub_82FA2DF8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r5,r1,1040
	ctx.r5.s64 = ctx.r1.s64 + 1040;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// bl 0x82fa2df8
	ctx.lr = 0x82346144;
	sub_82FA2DF8(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823461fc
	goto loc_823461FC;
loc_82346178:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// bl 0x82fa2df8
	ctx.lr = 0x82346190;
	sub_82FA2DF8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r5,r1,1040
	ctx.r5.s64 = ctx.r1.s64 + 1040;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// bl 0x82fa2df8
	ctx.lr = 0x823461BC;
	sub_82FA2DF8(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r11,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_823461FC:
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,306
	ctx.r3.s64 = ctx.r1.s64 + 306;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r20,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r20.u32);
	// lhz r30,0(r21)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// sth r30,304(r1)
	PPC_STORE_U16(ctx.r1.u32 + 304, ctx.r30.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82346220;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// sth r30,368(r1)
	PPC_STORE_U16(ctx.r1.u32 + 368, ctx.r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,370
	ctx.r3.s64 = ctx.r1.s64 + 370;
	// bl 0x82fa7cf0
	ctx.lr = 0x82346234;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,432(r1)
	PPC_STORE_U16(ctx.r1.u32 + 432, ctx.r30.u16);
	// addi r3,r1,434
	ctx.r3.s64 = ctx.r1.s64 + 434;
	// bl 0x82fa7cf0
	ctx.lr = 0x82346248;
	sub_82FA7CF0(ctx, base);
	// lwz r11,21092(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21092);
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82346274
	if (ctx.cr6.eq) goto loc_82346274;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,432
	ctx.r6.s64 = ctx.r1.s64 + 432;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8245c300
	ctx.lr = 0x82346274;
	sub_8245C300(ctx, base);
loc_82346274:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82fa3bb8
	ctx.lr = 0x82346280;
	sub_82FA3BB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r30,280
	ctx.r3.s64 = ctx.r30.s64 + 280;
	// bl 0x822c9300
	ctx.lr = 0x82346290;
	sub_822C9300(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82fa3bb8
	ctx.lr = 0x82346298;
	sub_82FA3BB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r30,308
	ctx.r3.s64 = ctx.r30.s64 + 308;
	// bl 0x822c9300
	ctx.lr = 0x823462A8;
	sub_822C9300(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,364(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 364, temp.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82fa3bb8
	ctx.lr = 0x823462B8;
	sub_82FA3BB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r30,336
	ctx.r3.s64 = ctx.r30.s64 + 336;
	// bl 0x822c9300
	ctx.lr = 0x823462C8;
	sub_822C9300(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,368(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 368, temp.u32);
loc_823462D0:
	// lwz r11,21120(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823462e0
	if (ctx.cr6.eq) goto loc_823462E0;
	// stw r20,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r20.u32);
loc_823462E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82346388
	ctx.lr = 0x823462E8;
	sub_82346388(ctx, base);
	// lwz r11,21092(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234631c
	if (ctx.cr6.eq) goto loc_8234631C;
	// addic. r30,r11,148
	ctx.xer.ca = ctx.r11.u32 > 4294967147;
	ctx.r30.s64 = ctx.r11.s64 + 148;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8234631c
	if (ctx.cr0.eq) goto loc_8234631C;
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
	// beq 0x8234631c
	if (ctx.cr0.eq) goto loc_8234631C;
	// bl 0x825adac8
	ctx.lr = 0x82346310;
	sub_825ADAC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825aefd8
	ctx.lr = 0x82346318;
	sub_825AEFD8(ctx, base);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
loc_8234631C:
	// lwz r11,21120(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82346354
	if (ctx.cr6.eq) goto loc_82346354;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82346354
	if (ctx.cr0.eq) goto loc_82346354;
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
	// beq 0x82346354
	if (ctx.cr0.eq) goto loc_82346354;
	// bl 0x825adac8
	ctx.lr = 0x82346348;
	sub_825ADAC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825aefd8
	ctx.lr = 0x82346350;
	sub_825AEFD8(ctx, base);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
loc_82346354:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82348460
	ctx.lr = 0x8234635C;
	sub_82348460(ctx, base);
	// stw r20,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r20.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x826915c0
	ctx.lr = 0x82346368;
	sub_826915C0(ctx, base);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82346378
	if (ctx.cr6.eq) goto loc_82346378;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x825469e0
	ctx.lr = 0x82346378;
	sub_825469E0(ctx, base);
loc_82346378:
	// addi r1,r1,1680
	ctx.r1.s64 = ctx.r1.s64 + 1680;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82346384"))) PPC_WEAK_FUNC(sub_82346384);
PPC_FUNC_IMPL(__imp__sub_82346384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82346388"))) PPC_WEAK_FUNC(sub_82346388);
PPC_FUNC_IMPL(__imp__sub_82346388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82346390;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82691500
	ctx.lr = 0x823463A4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r25,0
	ctx.r25.s64 = 0;
	// beq 0x823463c4
	if (ctx.cr0.eq) goto loc_823463C4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// b 0x823463c8
	goto loc_823463C8;
loc_823463C4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_823463C8:
	// stw r11,664(r26)
	PPC_STORE_U32(ctx.r26.u32 + 664, ctx.r11.u32);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// bl 0x8226c3f0
	ctx.lr = 0x823463D4;
	sub_8226C3F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// bne cr6,0x823464d4
	if (!ctx.cr6.eq) goto loc_823464D4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82346600
	if (ctx.cr0.eq) goto loc_82346600;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// lfs f31,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
loc_82346410:
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823464b4
	if (!ctx.cr6.gt) goto loc_823464B4;
loc_82346424:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x824fa600
	ctx.lr = 0x82346430;
	sub_824FA600(ctx, base);
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234649c
	if (ctx.cr6.eq) goto loc_8234649C;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa2df8
	ctx.lr = 0x82346454;
	sub_82FA2DF8(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stfs f31,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82348028
	ctx.lr = 0x82346484;
	sub_82348028(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,664(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 664);
	// stw r11,668(r26)
	PPC_STORE_U32(ctx.r26.u32 + 668, ctx.r11.u32);
	// bl 0x82348b80
	ctx.lr = 0x82346498;
	sub_82348B80(ctx, base);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_8234649C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82346424
	if (ctx.cr6.lt) goto loc_82346424;
loc_823464B4:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82346410
	if (ctx.cr6.lt) goto loc_82346410;
	// b 0x82346600
	goto loc_82346600;
loc_823464D4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82346600
	if (!ctx.cr0.gt) goto loc_82346600;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// lfs f31,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
loc_823464F8:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r30,r11,r22
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823465dc
	if (ctx.cr0.eq) goto loc_823465DC;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_82346520:
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823465c0
	if (!ctx.cr6.gt) goto loc_823465C0;
loc_82346534:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824fa600
	ctx.lr = 0x8234653C;
	sub_824FA600(ctx, base);
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823465a8
	if (ctx.cr6.eq) goto loc_823465A8;
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa2df8
	ctx.lr = 0x8234655C;
	sub_82FA2DF8(ctx, base);
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// stfs f31,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82348028
	ctx.lr = 0x82346590;
	sub_82348028(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,664(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 664);
	// stw r11,668(r26)
	PPC_STORE_U32(ctx.r26.u32 + 668, ctx.r11.u32);
	// bl 0x82348b80
	ctx.lr = 0x823465A4;
	sub_82348B80(ctx, base);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_823465A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82346534
	if (ctx.cr6.lt) goto loc_82346534;
loc_823465C0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82346520
	if (ctx.cr6.lt) goto loc_82346520;
loc_823465DC:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823464f8
	if (ctx.cr6.lt) goto loc_823464F8;
loc_82346600:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234660C"))) PPC_WEAK_FUNC(sub_8234660C);
PPC_FUNC_IMPL(__imp__sub_8234660C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82346610"))) PPC_WEAK_FUNC(sub_82346610);
PPC_FUNC_IMPL(__imp__sub_82346610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82346618;
	__savegprlr_29(ctx, base);
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,10396
	ctx.r4.s64 = ctx.r11.s64 + 10396;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82346644;
	sub_82FA77C0(ctx, base);
	// li r5,243
	ctx.r5.s64 = 243;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,477
	ctx.r3.s64 = ctx.r1.s64 + 477;
	// bl 0x82fa7cf0
	ctx.lr = 0x82346654;
	sub_82FA7CF0(ctx, base);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r3,r1,209
	ctx.r3.s64 = ctx.r1.s64 + 209;
	// bl 0x82fa7cf0
	ctx.lr = 0x82346668;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,722
	ctx.r3.s64 = ctx.r1.s64 + 722;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r11,720(r1)
	PPC_STORE_U16(ctx.r1.u32 + 720, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82346684;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r11,10412
	ctx.r30.s64 = ctx.r11.s64 + 10412;
loc_8234668C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82557418
	ctx.lr = 0x823466A8;
	sub_82557418(ctx, base);
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,720
	ctx.r5.s64 = ctx.r1.s64 + 720;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82341830
	ctx.lr = 0x823466BC;
	sub_82341830(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823466f4
	if (ctx.cr0.eq) goto loc_823466F4;
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822c93d0
	ctx.lr = 0x823466D0;
	sub_822C93D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82348e00
	ctx.lr = 0x823466DC;
	sub_82348E00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822c5628
	ctx.lr = 0x823466EC;
	sub_822C5628(ctx, base);
	// cmplwi cr6,r31,20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 20, ctx.xer);
	// blt cr6,0x8234668c
	if (ctx.cr6.lt) goto loc_8234668C;
loc_823466F4:
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r11,28
	ctx.r11.s64 = 28;
	// lwz r29,132(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subf r10,r30,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r30.s64;
	// divw. r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82346724
	if (ctx.cr0.eq) goto loc_82346724;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,24856
	ctx.r11.s64 = ctx.r11.s64 + 24856;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// bl 0x82544568
	ctx.lr = 0x82346720;
	sub_82544568(ctx, base);
	// b 0x8234676c
	goto loc_8234676C;
loc_82346724:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,10420
	ctx.r4.s64 = ctx.r11.s64 + 10420;
	// bl 0x822c93d0
	ctx.lr = 0x82346734;
	sub_822C93D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82348e00
	ctx.lr = 0x82346740;
	sub_82348E00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822c5628
	ctx.lr = 0x82346750;
	sub_822C5628(ctx, base);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,24856
	ctx.r11.s64 = ctx.r11.s64 + 24856;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// bl 0x82544568
	ctx.lr = 0x82346764;
	sub_82544568(ctx, base);
	// lwz r29,132(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_8234676C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823467a4
	if (ctx.cr6.eq) goto loc_823467A4;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8234679c
	if (ctx.cr6.eq) goto loc_8234679C;
loc_82346780:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c5628
	ctx.lr = 0x82346790;
	sub_822C5628(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82346780
	if (!ctx.cr6.eq) goto loc_82346780;
loc_8234679C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x823467A4;
	sub_82691540(ctx, base);
loc_823467A4:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823467AC"))) PPC_WEAK_FUNC(sub_823467AC);
PPC_FUNC_IMPL(__imp__sub_823467AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823467B0"))) PPC_WEAK_FUNC(sub_823467B0);
PPC_FUNC_IMPL(__imp__sub_823467B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x823467B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,664(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82346884
	if (ctx.cr6.eq) goto loc_82346884;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8234682c
	if (ctx.cr6.eq) goto loc_8234682C;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82346808
	if (ctx.cr6.eq) goto loc_82346808;
loc_823467E8:
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x823467F8;
	sub_82FA77C0(ctx, base);
	// addi r29,r29,96
	ctx.r29.s64 = ctx.r29.s64 + 96;
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823467e8
	if (!ctx.cr6.eq) goto loc_823467E8;
loc_82346808:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82346828
	if (ctx.cr6.eq) goto loc_82346828;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8234681C:
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8234681c
	if (!ctx.cr6.eq) goto loc_8234681C;
loc_82346828:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
loc_8234682C:
	// lwz r31,664(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 664);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82346880
	if (ctx.cr6.eq) goto loc_82346880;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234686c
	if (ctx.cr6.eq) goto loc_8234686C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82346868
	if (ctx.cr6.eq) goto loc_82346868;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8234685C:
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8234685c
	if (!ctx.cr6.eq) goto loc_8234685C;
loc_82346868:
	// bl 0x82691540
	ctx.lr = 0x8234686C;
	sub_82691540(ctx, base);
loc_8234686C:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82691540
	ctx.lr = 0x82346880;
	sub_82691540(ctx, base);
loc_82346880:
	// stw r30,664(r27)
	PPC_STORE_U32(ctx.r27.u32 + 664, ctx.r30.u32);
loc_82346884:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234688C"))) PPC_WEAK_FUNC(sub_8234688C);
PPC_FUNC_IMPL(__imp__sub_8234688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82346890"))) PPC_WEAK_FUNC(sub_82346890);
PPC_FUNC_IMPL(__imp__sub_82346890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82346898;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// bl 0x8255b788
	ctx.lr = 0x823468B0;
	sub_8255B788(ctx, base);
	// bl 0x825b7a80
	ctx.lr = 0x823468B4;
	sub_825B7A80(ctx, base);
	// bl 0x825adac8
	ctx.lr = 0x823468B8;
	sub_825ADAC8(ctx, base);
	// addi r4,r31,784
	ctx.r4.s64 = ctx.r31.s64 + 784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825aee10
	ctx.lr = 0x823468C4;
	sub_825AEE10(ctx, base);
	// addi r4,r31,780
	ctx.r4.s64 = ctx.r31.s64 + 780;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825aee10
	ctx.lr = 0x823468D0;
	sub_825AEE10(ctx, base);
	// bl 0x8226c3f0
	ctx.lr = 0x823468D4;
	sub_8226C3F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823468f4
	if (!ctx.cr6.eq) goto loc_823468F4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,844(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824fa1f8
	ctx.lr = 0x823468F4;
	sub_824FA1F8(ctx, base);
loc_823468F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82348300
	ctx.lr = 0x823468FC;
	sub_82348300(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r31,1056
	ctx.r4.s64 = ctx.r31.s64 + 1056;
	// addi r3,r31,1048
	ctx.r3.s64 = ctx.r31.s64 + 1048;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// bl 0x823490b0
	ctx.lr = 0x82346914;
	sub_823490B0(ctx, base);
	// addi r4,r31,644
	ctx.r4.s64 = ctx.r31.s64 + 644;
	// addi r3,r31,636
	ctx.r3.s64 = ctx.r31.s64 + 636;
	// bl 0x823490b0
	ctx.lr = 0x82346920;
	sub_823490B0(ctx, base);
	// addi r4,r31,656
	ctx.r4.s64 = ctx.r31.s64 + 656;
	// addi r3,r31,648
	ctx.r3.s64 = ctx.r31.s64 + 648;
	// bl 0x823490b0
	ctx.lr = 0x8234692C;
	sub_823490B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82342570
	ctx.lr = 0x82346938;
	sub_82342570(ctx, base);
	// addi r4,r31,716
	ctx.r4.s64 = ctx.r31.s64 + 716;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82346940:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82346940
	if (!ctx.cr6.eq) goto loc_82346940;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823469a0
	if (ctx.cr0.eq) goto loc_823469A0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823469a0
	if (ctx.cr6.eq) goto loc_823469A0;
	// lwz r11,2240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823469a0
	if (ctx.cr6.eq) goto loc_823469A0;
	// addi r3,r11,152
	ctx.r3.s64 = ctx.r11.s64 + 152;
	// bl 0x82564eb8
	ctx.lr = 0x82346984;
	sub_82564EB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823469a0
	if (ctx.cr0.eq) goto loc_823469A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// bl 0x8257c810
	ctx.lr = 0x823469A0;
	sub_8257C810(ctx, base);
loc_823469A0:
	// lwz r3,660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823469bc
	if (ctx.cr6.eq) goto loc_823469BC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,2116(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2116);
	// bl 0x82572040
	ctx.lr = 0x823469B8;
	sub_82572040(ctx, base);
	// stw r27,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r27.u32);
loc_823469BC:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823469d4
	if (ctx.cr6.eq) goto loc_823469D4;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x8257e8d8
	ctx.lr = 0x823469D0;
	sub_8257E8D8(ctx, base);
	// stw r27,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r27.u32);
loc_823469D4:
	// lwz r3,1016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	// addi r30,r31,1016
	ctx.r30.s64 = ctx.r31.s64 + 1016;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82346a00
	if (ctx.cr6.eq) goto loc_82346A00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823469F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82570318
	ctx.lr = 0x823469FC;
	sub_82570318(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82346A00:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82346a10
	if (ctx.cr6.eq) goto loc_82346A10;
	// bl 0x824fdb18
	ctx.lr = 0x82346A10;
	sub_824FDB18(ctx, base);
loc_82346A10:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82346aa4
	if (ctx.cr6.eq) goto loc_82346AA4;
	// bl 0x8226c3f0
	ctx.lr = 0x82346A20;
	sub_8226C3F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82346a94
	if (!ctx.cr6.eq) goto loc_82346A94;
	// lwz r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r29,844(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82346a88
	goto loc_82346A88;
loc_82346A44:
	// bl 0x8226d8e8
	ctx.lr = 0x82346A48;
	sub_8226D8E8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82346a70
	if (!ctx.cr6.lt) goto loc_82346A70;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82346a74
	goto loc_82346A74;
loc_82346A70:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82346A74:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82346A88:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82346a44
	if (!ctx.cr6.eq) goto loc_82346A44;
loc_82346A94:
	// lwz r5,844(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lwz r4,836(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8234a298
	ctx.lr = 0x82346AA4;
	sub_8234A298(ctx, base);
loc_82346AA4:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82346ab4
	if (ctx.cr6.eq) goto loc_82346AB4;
	// bl 0x822edb70
	ctx.lr = 0x82346AB4;
	sub_822EDB70(ctx, base);
loc_82346AB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823458f0
	ctx.lr = 0x82346ABC;
	sub_823458F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82348300
	ctx.lr = 0x82346AC4;
	sub_82348300(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r3,21092(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21092);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82346b24
	if (ctx.cr6.eq) goto loc_82346B24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x822ff690
	ctx.lr = 0x82346AE0;
	sub_822FF690(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8256d470
	ctx.lr = 0x82346AEC;
	sub_8256D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82346b24
	if (ctx.cr0.eq) goto loc_82346B24;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// addi r6,r11,26796
	ctx.r6.s64 = ctx.r11.s64 + 26796;
	// addi r5,r9,26780
	ctx.r5.s64 = ctx.r9.s64 + 26780;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,2124(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2124);
	// bl 0x8256f138
	ctx.lr = 0x82346B18;
	sub_8256F138(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570318
	ctx.lr = 0x82346B24;
	sub_82570318(ctx, base);
loc_82346B24:
	// stw r27,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r27.u32);
	// bl 0x826a3ae0
	ctx.lr = 0x82346B2C;
	sub_826A3AE0(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x826a13c8
	ctx.lr = 0x82346B38;
	sub_826A13C8(ctx, base);
	// bl 0x826a3ae0
	ctx.lr = 0x82346B3C;
	sub_826A3AE0(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x826a13f8
	ctx.lr = 0x82346B48;
	sub_826A13F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82346B50"))) PPC_WEAK_FUNC(sub_82346B50);
PPC_FUNC_IMPL(__imp__sub_82346B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x82346B58;
	__savegprlr_16(ctx, base);
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,988(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 988, temp.u32);
	// beq cr6,0x82346b94
	if (ctx.cr6.eq) goto loc_82346B94;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,836(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 836);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82346B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82346B94:
	// addic. r11,r29,992
	ctx.xer.ca = ctx.r29.u32 > 4294966303;
	ctx.r11.s64 = ctx.r29.s64 + 992;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r17,1
	ctx.r17.s64 = 1;
	// lis r16,-31957
	ctx.r16.s64 = -2094333952;
	// beq 0x82347118
	if (ctx.cr0.eq) goto loc_82347118;
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
	// beq 0x82347118
	if (ctx.cr0.eq) goto loc_82347118;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82346BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4544
	ctx.r3.s64 = 4544;
	// bl 0x82691500
	ctx.lr = 0x82346BD4;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// beq 0x82346c34
	if (ctx.cr0.eq) goto loc_82346C34;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r17,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r17.u32);
	// addic. r3,r31,16
	ctx.xer.ca = ctx.r31.u32 > 4294967279;
	ctx.r3.s64 = ctx.r31.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r17,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r17.u32);
	// addi r11,r11,-24032
	ctx.r11.s64 = ctx.r11.s64 + -24032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82346c38
	if (ctx.cr0.eq) goto loc_82346C38;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r8,688(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 688);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,148(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// addi r7,r11,10476
	ctx.r7.s64 = ctx.r11.s64 + 10476;
	// lwz r5,144(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r4,r29,808
	ctx.r4.s64 = ctx.r29.s64 + 808;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x8251a560
	ctx.lr = 0x82346C30;
	sub_8251A560(ctx, base);
	// b 0x82346c38
	goto loc_82346C38;
loc_82346C34:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82346C38:
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r21,r29,648
	ctx.r21.s64 = ctx.r29.s64 + 648;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823f6330
	ctx.lr = 0x82346C54;
	sub_823F6330(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82346c64
	if (ctx.cr6.eq) goto loc_82346C64;
	// bl 0x82241d18
	ctx.lr = 0x82346C64;
	sub_82241D18(ctx, base);
loc_82346C64:
	// bl 0x8226c3f0
	ctx.lr = 0x82346C68;
	sub_8226C3F0(ctx, base);
	// lwz r11,664(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r9,96
	ctx.r9.s64 = 96;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r4,r11,r9
	ctx.r4.s32 = ctx.r11.s32 / ctx.r9.s32;
	// bl 0x8251ae70
	ctx.lr = 0x82346C90;
	sub_8251AE70(ctx, base);
	// lwz r11,708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82346ca4
	if (ctx.cr6.eq) goto loc_82346CA4;
	// lwz r5,112(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x82346ca8
	goto loc_82346CA8;
loc_82346CA4:
	// li r5,10
	ctx.r5.s64 = 10;
loc_82346CA8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82346cb8
	if (ctx.cr6.eq) goto loc_82346CB8;
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// b 0x82346cbc
	goto loc_82346CBC;
loc_82346CB8:
	// li r4,100
	ctx.r4.s64 = 100;
loc_82346CBC:
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x8251b008
	ctx.lr = 0x82346CC4;
	sub_8251B008(ctx, base);
	// addic. r3,r29,996
	ctx.xer.ca = ctx.r29.u32 > 4294966299;
	ctx.r3.s64 = ctx.r29.s64 + 996;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82346cdc
	if (ctx.cr0.eq) goto loc_82346CDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82346ce0
	goto loc_82346CE0;
loc_82346CDC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82346CE0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82346cf0
	if (ctx.cr6.eq) goto loc_82346CF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82570620
	ctx.lr = 0x82346CF0;
	sub_82570620(ctx, base);
loc_82346CF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823457c8
	ctx.lr = 0x82346CF8;
	sub_823457C8(ctx, base);
	// lwz r11,664(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r22,4(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82346f2c
	if (ctx.cr6.eq) goto loc_82346F2C;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r20,r11,5176
	ctx.r20.s64 = ctx.r11.s64 + 5176;
loc_82346D30:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x824fa600
	ctx.lr = 0x82346D5C;
	sub_824FA600(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82346d98
	if (ctx.cr6.eq) goto loc_82346D98;
loc_82346D70:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82346d88
	if (!ctx.cr6.eq) goto loc_82346D88;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82346db4
	if (ctx.cr6.eq) goto loc_82346DB4;
loc_82346D88:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82346d70
	if (!ctx.cr6.eq) goto loc_82346D70;
loc_82346D98:
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8238f7f0
	ctx.lr = 0x82346DAC;
	sub_8238F7F0(ctx, base);
	// lwz r23,132(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82346DB4:
	// bl 0x8226c3f0
	ctx.lr = 0x82346DB8;
	sub_8226C3F0(ctx, base);
	// lwz r9,844(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 844);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82346dcc
	if (!ctx.cr0.lt) goto loc_82346DCC;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82346DCC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82346de0
	if (!ctx.cr6.eq) goto loc_82346DE0;
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
	// b 0x82346dec
	goto loc_82346DEC;
loc_82346DE0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82346dec
	if (!ctx.cr6.eq) goto loc_82346DEC;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
loc_82346DEC:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82346e30
	if (ctx.cr6.eq) goto loc_82346E30;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82346e30
	if (ctx.cr6.eq) goto loc_82346E30;
	// lwz r11,712(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82346e30
	if (ctx.cr6.eq) goto loc_82346E30;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,264(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82346E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82346e34
	goto loc_82346E34;
loc_82346E30:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82346E34:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r28,220
	ctx.r11.s64 = ctx.r28.s64 * 220;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f0,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stw r17,2720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2720, ctx.r17.u32);
	// stfs f0,2748(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2748, temp.u32);
	// stw r17,2736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2736, ctx.r17.u32);
	// stfs f1,2744(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2744, temp.u32);
	// stw r26,2740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2740, ctx.r26.u32);
	// stw r7,2752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2752, ctx.r7.u32);
	// beq cr6,0x82346ed4
	if (ctx.cr6.eq) goto loc_82346ED4;
	// lbz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82346ed4
	if (!ctx.cr0.eq) goto loc_82346ED4;
	// lwz r11,708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82346ed4
	if (ctx.cr6.eq) goto loc_82346ED4;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// li r3,856
	ctx.r3.s64 = 856;
	// addi r4,r20,4
	ctx.r4.s64 = ctx.r20.s64 + 4;
	// bl 0x825572c0
	ctx.lr = 0x82346EA0;
	sub_825572C0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// lwz r10,264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwax r11,r11,r10
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32));
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
loc_82346ED4:
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r27,0(r21)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subfe r30,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8245e648
	ctx.lr = 0x82346EE8;
	sub_8245E648(ctx, base);
	// bl 0x82461500
	ctx.lr = 0x82346EEC;
	sub_82461500(ctx, base);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r24,48
	ctx.r6.s64 = ctx.r24.s64 + 48;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8251b0d8
	ctx.lr = 0x82346F20;
	sub_8251B0D8(ctx, base);
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x82346d30
	if (!ctx.cr6.eq) goto loc_82346D30;
loc_82346F2C:
	// bl 0x8226c3f0
	ctx.lr = 0x82346F30;
	sub_8226C3F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82346f48
	if (!ctx.cr6.eq) goto loc_82346F48;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// stw r19,2724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2724, ctx.r19.u32);
	// stw r18,2728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2728, ctx.r18.u32);
loc_82346F48:
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82346F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32231
	ctx.r30.s64 = -2112290816;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82346f8c
	if (ctx.cr0.eq) goto loc_82346F8C;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82346F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,984
	ctx.r3.s64 = ctx.r31.s64 + 984;
	// b 0x82346fd0
	goto loc_82346FD0;
loc_82346F8C:
	// lhz r11,31944(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 31944);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,466
	ctx.r3.s64 = ctx.r1.s64 + 466;
	// sth r11,464(r1)
	PPC_STORE_U16(ctx.r1.u32 + 464, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82346FA4;
	sub_82FA7CF0(ctx, base);
	// lwz r11,1304(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82346fc4
	if (ctx.cr6.eq) goto loc_82346FC4;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82341830
	ctx.lr = 0x82346FC4;
	sub_82341830(ctx, base);
loc_82346FC4:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// addi r3,r11,984
	ctx.r3.s64 = ctx.r11.s64 + 984;
loc_82346FD0:
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x82fa2df8
	ctx.lr = 0x82346FD8;
	sub_82FA2DF8(ctx, base);
	// lwz r11,1076(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1076);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347110
	if (ctx.cr6.eq) goto loc_82347110;
	// lwz r11,21092(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347110
	if (ctx.cr6.eq) goto loc_82347110;
	// lhz r31,31944(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 31944);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,274
	ctx.r3.s64 = ctx.r1.s64 + 274;
	// sth r31,272(r1)
	PPC_STORE_U16(ctx.r1.u32 + 272, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82347008;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// sth r31,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,146
	ctx.r3.s64 = ctx.r1.s64 + 146;
	// bl 0x82fa7cf0
	ctx.lr = 0x8234701C;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r31.u16);
	// addi r3,r1,210
	ctx.r3.s64 = ctx.r1.s64 + 210;
	// bl 0x82fa7cf0
	ctx.lr = 0x82347030;
	sub_82FA7CF0(ctx, base);
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8245c300
	ctx.lr = 0x82347050;
	sub_8245C300(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,402
	ctx.r3.s64 = ctx.r1.s64 + 402;
	// lhz r31,31944(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 31944);
	// sth r31,400(r1)
	PPC_STORE_U16(ctx.r1.u32 + 400, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82347068;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// sth r31,336(r1)
	PPC_STORE_U16(ctx.r1.u32 + 336, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,338
	ctx.r3.s64 = ctx.r1.s64 + 338;
	// bl 0x82fa7cf0
	ctx.lr = 0x8234707C;
	sub_82FA7CF0(ctx, base);
	// lfs f1,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r31,r11,820
	ctx.r31.s64 = ctx.r11.s64 + 820;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82563c28
	ctx.lr = 0x823470A0;
	sub_82563C28(ctx, base);
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82563c28
	ctx.lr = 0x823470BC;
	sub_82563C28(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r3,r31,856
	ctx.r3.s64 = ctx.r31.s64 + 856;
	// bl 0x82fa2df8
	ctx.lr = 0x823470D0;
	sub_82FA2DF8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,1496
	ctx.r3.s64 = ctx.r31.s64 + 1496;
	// bl 0x82fa2df8
	ctx.lr = 0x823470E0;
	sub_82FA2DF8(ctx, base);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,1560
	ctx.r3.s64 = ctx.r31.s64 + 1560;
	// bl 0x82fa2df8
	ctx.lr = 0x823470F0;
	sub_82FA2DF8(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,2072
	ctx.r3.s64 = ctx.r31.s64 + 2072;
	// bl 0x82fa2df8
	ctx.lr = 0x82347100;
	sub_82FA2DF8(ctx, base);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,2136
	ctx.r3.s64 = ctx.r31.s64 + 2136;
	// bl 0x82fa2df8
	ctx.lr = 0x82347110;
	sub_82FA2DF8(ctx, base);
loc_82347110:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822b1420
	ctx.lr = 0x82347118;
	sub_822B1420(ctx, base);
loc_82347118:
	// lwz r11,21092(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234716c
	if (ctx.cr6.eq) goto loc_8234716C;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d470
	ctx.lr = 0x82347134;
	sub_8256D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234716c
	if (ctx.cr0.eq) goto loc_8234716C;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// addi r6,r11,26796
	ctx.r6.s64 = ctx.r11.s64 + 26796;
	// addi r5,r9,26780
	ctx.r5.s64 = ctx.r9.s64 + 26780;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,2124(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2124);
	// bl 0x8256f138
	ctx.lr = 0x82347160;
	sub_8256F138(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82570318
	ctx.lr = 0x8234716C;
	sub_82570318(ctx, base);
loc_8234716C:
	// lwz r11,684(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823471a0
	if (ctx.cr6.eq) goto loc_823471A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x823471a0
	if (ctx.cr6.eq) goto loc_823471A0;
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r10,19908
	ctx.r4.s64 = ctx.r10.s64 + 19908;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x823471A0;
	sub_826A7620(ctx, base);
loc_823471A0:
	// stw r17,1000(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1000, ctx.r17.u32);
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823471B0"))) PPC_WEAK_FUNC(sub_823471B0);
PPC_FUNC_IMPL(__imp__sub_823471B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x823471B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234720c
	if (ctx.cr6.eq) goto loc_8234720C;
	// lwz r28,24(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r31,48(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// b 0x823471fc
	goto loc_823471FC;
loc_823471DC:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823471f8
	if (ctx.cr6.eq) goto loc_823471F8;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x8257e8d8
	ctx.lr = 0x823471F4;
	sub_8257E8D8(ctx, base);
	// stw r27,556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 556, ctx.r27.u32);
loc_823471F8:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_823471FC:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823471dc
	if (!ctx.cr6.eq) goto loc_823471DC;
	// stw r27,848(r29)
	PPC_STORE_U32(ctx.r29.u32 + 848, ctx.r27.u32);
loc_8234720C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823457c8
	ctx.lr = 0x82347214;
	sub_823457C8(ctx, base);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347230
	if (ctx.cr6.eq) goto loc_82347230;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82347230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82347230:
	// bl 0x82535b38
	ctx.lr = 0x82347234;
	sub_82535B38(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82347278
	if (!ctx.cr6.eq) goto loc_82347278;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82347278
	if (!ctx.cr6.eq) goto loc_82347278;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82347278
	if (!ctx.cr6.eq) goto loc_82347278;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82535c10
	ctx.lr = 0x82347270;
	sub_82535C10(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82535c80
	ctx.lr = 0x82347278;
	sub_82535C80(ctx, base);
loc_82347278:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r3,2248(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2248);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823472a0
	if (ctx.cr6.eq) goto loc_823472A0;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f2,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,11804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825a1520
	ctx.lr = 0x823472A0;
	sub_825A1520(ctx, base);
loc_823472A0:
	// addic. r10,r29,1012
	ctx.xer.ca = ctx.r29.u32 > 4294966283;
	ctx.r10.s64 = ctx.r29.s64 + 1012;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823472b8
	if (ctx.cr0.eq) goto loc_823472B8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x823472bc
	goto loc_823472BC;
loc_823472B8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_823472BC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823472f0
	if (ctx.cr6.eq) goto loc_823472F0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
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
	ctx.lr = 0x823472EC;
	sub_8256F138(ctx, base);
	// stw r3,1016(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1016, ctx.r3.u32);
loc_823472F0:
	// lwz r11,684(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347328
	if (ctx.cr6.eq) goto loc_82347328;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82347328
	if (ctx.cr6.eq) goto loc_82347328;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r9,19908
	ctx.r4.s64 = ctx.r9.s64 + 19908;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x82347328;
	sub_826A7620(ctx, base);
loc_82347328:
	// stw r27,1072(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1072, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82347334"))) PPC_WEAK_FUNC(sub_82347334);
PPC_FUNC_IMPL(__imp__sub_82347334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82347338"))) PPC_WEAK_FUNC(sub_82347338);
PPC_FUNC_IMPL(__imp__sub_82347338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82347340;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d24
	ctx.lr = 0x82347348;
	__savefpr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,688(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 688);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8234736c
	if (!ctx.cr6.eq) goto loc_8234736C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfs f31,352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82347374
	goto loc_82347374;
loc_8234736C:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lfs f31,-17688(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17688);
	ctx.f31.f64 = double(temp.f32);
loc_82347374:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// li r15,0
	ctx.r15.s64 = 0;
	// stw r15,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// stw r15,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// stw r15,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r15.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82347494
	if (!ctx.cr0.gt) goto loc_82347494;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// lfs f30,-27104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27104);
	ctx.f30.f64 = double(temp.f32);
loc_823473AC:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r30,r11,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82347470
	if (ctx.cr0.eq) goto loc_82347470;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
loc_823473D4:
	// fsubs f13,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82347404
	if (ctx.cr6.lt) goto loc_82347404;
	// fadds f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82347404
	if (ctx.cr6.gt) goto loc_82347404;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// b 0x82347448
	goto loc_82347448;
loc_82347404:
	// lwz r11,688(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 688);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8234741c
	if (!ctx.cr6.eq) goto loc_8234741C;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82347424
	if (ctx.cr6.lt) goto loc_82347424;
	// b 0x82347450
	goto loc_82347450;
loc_8234741C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82347450
	if (!ctx.cr6.gt) goto loc_82347450;
loc_82347424:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8234743c
	if (ctx.cr6.eq) goto loc_8234743C;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_8234743C:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
loc_82347448:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8238f7f0
	ctx.lr = 0x82347450;
	sub_8238F7F0(ctx, base);
loc_82347450:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823473d4
	if (ctx.cr6.lt) goto loc_823473D4;
loc_82347470:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823473ac
	if (ctx.cr6.lt) goto loc_823473AC;
loc_82347494:
	// lwz r11,664(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 664);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823479c8
	if (ctx.cr6.eq) goto loc_823479C8;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r16,r15
	ctx.r16.u64 = ctx.r15.u64;
	// lwz r14,4(r11)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r17,r15
	ctx.r17.u64 = ctx.r15.u64;
	// stw r15,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
	// cmplw cr6,r27,r14
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r14.u32, ctx.xer);
	// beq cr6,0x82347934
	if (ctx.cr6.eq) goto loc_82347934;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r18,-31957
	ctx.r18.s64 = -2094333952;
	// lfs f27,-24756(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f27.f64 = double(temp.f32);
	// lis r19,-31957
	ctx.r19.s64 = -2094333952;
	// lfs f31,-2340(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// addi r20,r11,5176
	ctx.r20.s64 = ctx.r11.s64 + 5176;
	// addi r21,r10,21056
	ctx.r21.s64 = ctx.r10.s64 + 21056;
loc_823474E4:
	// lwz r23,12(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823478fc
	if (ctx.cr6.eq) goto loc_823478FC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82920500
	ctx.lr = 0x823474F8;
	sub_82920500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8234751c
	if (!ctx.cr0.eq) goto loc_8234751C;
	// lbz r11,216(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8234751c
	if (!ctx.cr0.eq) goto loc_8234751C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x823478fc
	goto loc_823478FC;
loc_8234751C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82920500
	ctx.lr = 0x82347524;
	sub_82920500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823478fc
	if (ctx.cr0.eq) goto loc_823478FC;
	// lbz r11,216(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823478fc
	if (!ctx.cr0.eq) goto loc_823478FC;
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r31,4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f31.f64;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r22,28(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82348a58
	ctx.lr = 0x82347580;
	sub_82348A58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234758c
	if (ctx.cr0.eq) goto loc_8234758C;
	// li r16,1
	ctx.r16.s64 = 1;
loc_8234758C:
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823476e4
	if (ctx.cr6.eq) goto loc_823476E4;
loc_823475A0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x823475bc
	if (!ctx.cr6.eq) goto loc_823475BC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x823475c0
	if (ctx.cr6.eq) goto loc_823475C0;
loc_823475BC:
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
loc_823475C0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823475d4
	if (!ctx.cr0.eq) goto loc_823475D4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823475a0
	if (!ctx.cr6.eq) goto loc_823475A0;
loc_823475D4:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823476e4
	if (ctx.cr6.eq) goto loc_823476E4;
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x823476e4
	if (!ctx.cr6.eq) goto loc_823476E4;
	// lwz r11,664(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 664);
	// li r10,96
	ctx.r10.s64 = 96;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x823476e4
	if (!ctx.cr6.gt) goto loc_823476E4;
	// lwz r11,264(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 264);
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r10,2288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2288);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8234762c
	if (ctx.cr6.eq) goto loc_8234762C;
	// lwz r10,264(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 264);
	// stw r11,2288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2288, ctx.r11.u32);
loc_8234762C:
	// lwz r9,264(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 264);
	// lwz r10,2264(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2264);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82347640
	if (!ctx.cr6.lt) goto loc_82347640;
	// stw r11,2264(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2264, ctx.r11.u32);
loc_82347640:
	// lwz r11,708(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823476fc
	if (ctx.cr6.eq) goto loc_823476FC;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
	// li r3,856
	ctx.r3.s64 = 856;
	// addi r4,r20,4
	ctx.r4.s64 = ctx.r20.s64 + 4;
	// bl 0x825572c0
	ctx.lr = 0x82347660;
	sub_825572C0(ctx, base);
	// lwz r10,664(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 664);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82347774
	if (ctx.cr6.eq) goto loc_82347774;
loc_82347688:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82347754
	if (ctx.cr6.eq) goto loc_82347754;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82347750
	if (ctx.cr6.eq) goto loc_82347750;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fadds f30,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f27.f64));
	// bl 0x82920500
	ctx.lr = 0x823476AC;
	sub_82920500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82347754
	if (ctx.cr0.eq) goto loc_82347754;
	// lbz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82347754
	if (!ctx.cr0.eq) goto loc_82347754;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// b 0x82347754
	goto loc_82347754;
loc_823476E4:
	// lwz r11,264(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 264);
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// lwz r10,2288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2288);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823476fc
	if (ctx.cr6.eq) goto loc_823476FC;
	// stw r15,2288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2288, ctx.r15.u32);
loc_823476FC:
	// lwz r11,708(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347808
	if (ctx.cr6.eq) goto loc_82347808;
	// lfs f13,88(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x823477e4
	if (ctx.cr6.eq) goto loc_823477E4;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 88, temp.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x82347724;
	sub_8226C3F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82347794
	if (!ctx.cr6.eq) goto loc_82347794;
	// bl 0x8226c3f0
	ctx.lr = 0x82347734;
	sub_8226C3F0(ctx, base);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_8234773C:
	// lwz r10,708(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 708);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,88(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x823477e8
	goto loc_823477E8;
loc_82347750:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82347754:
	// lwz r11,664(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 664);
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82347688
	if (!ctx.cr6.eq) goto loc_82347688;
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// beq cr6,0x82347774
	if (ctx.cr6.eq) goto loc_82347774;
	// fdivs f28,f29,f30
	ctx.f28.f64 = double(float(ctx.f29.f64 / ctx.f30.f64));
loc_82347774:
	// lwz r11,264(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 264);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f29,f0
	ctx.f29.f64 = double(float(ctx.f0.f64));
	// b 0x823476fc
	goto loc_823476FC;
loc_82347794:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x823477b4
	if (!ctx.cr6.eq) goto loc_823477B4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823477b4
	if (ctx.cr6.eq) goto loc_823477B4;
	// bl 0x8226c3f0
	ctx.lr = 0x823477A8;
	sub_8226C3F0(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8234773c
	goto loc_8234773C;
loc_823477B4:
	// lwz r11,708(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 708);
	// lfs f0,88(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f31
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// bne cr6,0x823477cc
	if (!ctx.cr6.eq) goto loc_823477CC;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// b 0x823477e8
	goto loc_823477E8;
loc_823477CC:
	// fcmpu cr6,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f28.f64);
	// ble cr6,0x823477dc
	if (!ctx.cr6.gt) goto loc_823477DC;
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// b 0x823477e8
	goto loc_823477E8;
loc_823477DC:
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// b 0x823477e8
	goto loc_823477E8;
loc_823477E4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_823477E8:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,88(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 88, temp.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82347808
	if (ctx.cr6.eq) goto loc_82347808;
	// lwz r11,708(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 708);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,88(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 88, temp.u32);
loc_82347808:
	// lwz r5,704(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 704);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823478fc
	if (ctx.cr6.eq) goto loc_823478FC;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x823478fc
	if (ctx.cr6.eq) goto loc_823478FC;
	// lwz r11,21092(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823478fc
	if (!ctx.cr6.eq) goto loc_823478FC;
	// lwz r11,32(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 32);
	// lwz r10,28(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// bl 0x825572c0
	ctx.lr = 0x8234783C;
	sub_825572C0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x8226c3f0
	ctx.lr = 0x82347858;
	sub_8226C3F0(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82347894
	if (!ctx.cr6.eq) goto loc_82347894;
	// lwz r9,704(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 704);
	// lwz r11,32(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 32);
	// lwz r10,28(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// addi r5,r9,64
	ctx.r5.s64 = ctx.r9.s64 + 64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// bl 0x825572c0
	ctx.lr = 0x82347880;
	sub_825572C0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82347894:
	// lwz r11,21092(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823478fc
	if (!ctx.cr6.eq) goto loc_823478FC;
	// bl 0x8226c3f0
	ctx.lr = 0x823478A4;
	sub_8226C3F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823478fc
	if (ctx.cr6.eq) goto loc_823478FC;
	// lwz r11,21120(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823478fc
	if (!ctx.cr6.eq) goto loc_823478FC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823478dc
	if (ctx.cr6.eq) goto loc_823478DC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x824f8f78
	ctx.lr = 0x823478DC;
	sub_824F8F78(ctx, base);
loc_823478DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823478fc
	if (ctx.cr6.eq) goto loc_823478FC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x824f8f78
	ctx.lr = 0x823478FC;
	sub_824F8F78(ctx, base);
loc_823478FC:
	// addi r27,r27,96
	ctx.r27.s64 = ctx.r27.s64 + 96;
	// cmplw cr6,r27,r14
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x823474e4
	if (!ctx.cr6.eq) goto loc_823474E4;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82347934
	if (ctx.cr6.eq) goto loc_82347934;
	// bl 0x822c7320
	ctx.lr = 0x82347914;
	sub_822C7320(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82347934
	if (!ctx.cr6.eq) goto loc_82347934;
	// stw r15,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r15.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822c75b0
	ctx.lr = 0x8234792C;
	sub_822C75B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1072(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1072, ctx.r11.u32);
loc_82347934:
	// lwz r11,664(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 664);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// beq cr6,0x823479c8
	if (ctx.cr6.eq) goto loc_823479C8;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82347948:
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823479bc
	if (ctx.cr6.eq) goto loc_823479BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920500
	ctx.lr = 0x8234795C;
	sub_82920500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823479bc
	if (ctx.cr0.eq) goto loc_823479BC;
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823479bc
	if (!ctx.cr0.eq) goto loc_823479BC;
	// cmplwi cr6,r17,1
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 1, ctx.xer);
	// ble cr6,0x82347998
	if (!ctx.cr6.gt) goto loc_82347998;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r11,2280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2280);
	// add r10,r11,r17
	ctx.r10.u64 = ctx.r11.u64 + ctx.r17.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82347998
	if (ctx.cr6.eq) goto loc_82347998;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r10,2280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2280, ctx.r10.u32);
loc_82347998:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823479bc
	if (ctx.cr6.eq) goto loc_823479BC;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r11,2276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2276);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823479bc
	if (ctx.cr6.eq) goto loc_823479BC;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r10,2276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2276, ctx.r10.u32);
loc_823479BC:
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x82347948
	if (!ctx.cr6.eq) goto loc_82347948;
loc_823479C8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b1420
	ctx.lr = 0x823479D0;
	sub_822B1420(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d70
	ctx.lr = 0x823479DC;
	__restfpr_27(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823479E0"))) PPC_WEAK_FUNC(sub_823479E0);
PPC_FUNC_IMPL(__imp__sub_823479E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x823479E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1088(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1088);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82347d24
	if (ctx.cr6.eq) goto loc_82347D24;
	// lwz r11,1284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1284);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82347a20
	if (ctx.cr6.eq) goto loc_82347A20;
	// bl 0x82325710
	ctx.lr = 0x82347A10;
	sub_82325710(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r28,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r28.u32);
loc_82347A20:
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// addi r26,r31,648
	ctx.r26.s64 = ctx.r31.s64 + 648;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82347a34
	if (ctx.cr6.eq) goto loc_82347A34;
	// bl 0x8251b170
	ctx.lr = 0x82347A34;
	sub_8251B170(ctx, base);
loc_82347A34:
	// lwz r3,636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// addi r27,r31,636
	ctx.r27.s64 = ctx.r31.s64 + 636;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82347a48
	if (ctx.cr6.eq) goto loc_82347A48;
	// bl 0x8251b170
	ctx.lr = 0x82347A48;
	sub_8251B170(ctx, base);
loc_82347A48:
	// bl 0x82535b38
	ctx.lr = 0x82347A4C;
	sub_82535B38(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82347a8c
	if (ctx.cr6.eq) goto loc_82347A8C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15512
	ctx.r4.s64 = ctx.r11.s64 + 15512;
	// bl 0x82899948
	ctx.lr = 0x82347A6C;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82347A70;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82899858
	ctx.lr = 0x82347A7C;
	sub_82899858(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570620
	ctx.lr = 0x82347A88;
	sub_82570620(ctx, base);
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
loc_82347A8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8250e7c8
	ctx.lr = 0x82347A94;
	sub_8250E7C8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,2248(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2248);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347aa8
	if (ctx.cr6.eq) goto loc_82347AA8;
	// bl 0x8259dcd8
	ctx.lr = 0x82347AA8;
	sub_8259DCD8(ctx, base);
loc_82347AA8:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347b24
	if (ctx.cr6.eq) goto loc_82347B24;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,2116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2116);
	// lwz r30,856(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82347b20
	if (ctx.cr6.eq) goto loc_82347B20;
	// lwz r10,280(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82347b20
	if (ctx.cr0.eq) goto loc_82347B20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347aec
	if (ctx.cr6.eq) goto loc_82347AEC;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
loc_82347AEC:
	// addic. r3,r30,128
	ctx.xer.ca = ctx.r30.u32 > 4294967167;
	ctx.r3.s64 = ctx.r30.s64 + 128;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82347b04
	if (ctx.cr0.eq) goto loc_82347B04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82347b08
	goto loc_82347B08;
loc_82347B04:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82347B08:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82347b18
	if (ctx.cr6.eq) goto loc_82347B18;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82570620
	ctx.lr = 0x82347B18;
	sub_82570620(ctx, base);
loc_82347B18:
	// lfs f0,148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 136, temp.u32);
loc_82347B20:
	// stw r28,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r28.u32);
loc_82347B24:
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347b38
	if (ctx.cr6.eq) goto loc_82347B38;
	// bl 0x82524840
	ctx.lr = 0x82347B34;
	sub_82524840(ctx, base);
	// stw r28,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r28.u32);
loc_82347B38:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347b58
	if (ctx.cr6.eq) goto loc_82347B58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82347B58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82347B58:
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// addi r11,r31,980
	ctx.r11.s64 = ctx.r31.s64 + 980;
	// lwz r3,984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r28.u32);
	// stw r28,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r28.u32);
	// beq cr6,0x82347b78
	if (ctx.cr6.eq) goto loc_82347B78;
	// bl 0x82241d18
	ctx.lr = 0x82347B78;
	sub_82241D18(ctx, base);
loc_82347B78:
	// lis r30,-31957
	ctx.r30.s64 = -2094333952;
	// lwz r11,21068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21068);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82347b90
	if (!ctx.cr6.eq) goto loc_82347B90;
	// bl 0x822e58d0
	ctx.lr = 0x82347B8C;
	sub_822E58D0(ctx, base);
	// lwz r11,21068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21068);
loc_82347B90:
	// stw r28,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82508300
	ctx.lr = 0x82347B9C;
	sub_82508300(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347bbc
	if (ctx.cr6.eq) goto loc_82347BBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82347BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82347BBC:
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82347bdc
	if (ctx.cr6.eq) goto loc_82347BDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824fd3e8
	ctx.lr = 0x82347BD4;
	sub_824FD3E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x82347BDC;
	sub_82691540(ctx, base);
loc_82347BDC:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347c18
	if (ctx.cr6.eq) goto loc_82347C18;
	// lis r30,-31957
	ctx.r30.s64 = -2094333952;
	// lwz r29,21072(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21072);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82347c0c
	if (ctx.cr6.eq) goto loc_82347C0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822edc70
	ctx.lr = 0x82347C04;
	sub_822EDC70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ec490
	ctx.lr = 0x82347C0C;
	sub_822EC490(ctx, base);
loc_82347C0C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stw r28,21072(r30)
	PPC_STORE_U32(ctx.r30.u32 + 21072, ctx.r28.u32);
loc_82347C18:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347c28
	if (ctx.cr6.eq) goto loc_82347C28;
	// bl 0x82347d30
	ctx.lr = 0x82347C28;
	sub_82347D30(ctx, base);
loc_82347C28:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347c4c
	if (ctx.cr6.eq) goto loc_82347C4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82347C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82347C4C:
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// addi r4,r31,656
	ctx.r4.s64 = ctx.r31.s64 + 656;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823490b0
	ctx.lr = 0x82347C5C;
	sub_823490B0(ctx, base);
	// addi r4,r31,644
	ctx.r4.s64 = ctx.r31.s64 + 644;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823490b0
	ctx.lr = 0x82347C68;
	sub_823490B0(ctx, base);
	// lwz r30,684(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82347c90
	if (ctx.cr6.eq) goto loc_82347C90;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347c84
	if (ctx.cr6.eq) goto loc_82347C84;
	// bl 0x82241d18
	ctx.lr = 0x82347C84;
	sub_82241D18(ctx, base);
loc_82347C84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x82347C8C;
	sub_82691540(ctx, base);
	// stw r28,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r28.u32);
loc_82347C90:
	// lwz r3,660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347cac
	if (ctx.cr6.eq) goto loc_82347CAC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,2116(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2116);
	// bl 0x82572040
	ctx.lr = 0x82347CA8;
	sub_82572040(ctx, base);
	// stw r28,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r28.u32);
loc_82347CAC:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82347cc4
	if (ctx.cr6.eq) goto loc_82347CC4;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x8257e8d8
	ctx.lr = 0x82347CC0;
	sub_8257E8D8(ctx, base);
	// stw r28,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r28.u32);
loc_82347CC4:
	// lwz r3,1016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	// addi r30,r31,1016
	ctx.r30.s64 = ctx.r31.s64 + 1016;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347cf0
	if (ctx.cr6.eq) goto loc_82347CF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82347CE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82570318
	ctx.lr = 0x82347CEC;
	sub_82570318(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82347CF0:
	// lwz r3,824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347d04
	if (ctx.cr6.eq) goto loc_82347D04;
	// bl 0x82343278
	ctx.lr = 0x82347D00;
	sub_82343278(ctx, base);
	// stw r28,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r28.u32);
loc_82347D04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823467b0
	ctx.lr = 0x82347D0C;
	sub_823467B0(ctx, base);
	// lwz r3,1304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	// stw r28,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347d24
	if (ctx.cr6.eq) goto loc_82347D24;
	// bl 0x825469e0
	ctx.lr = 0x82347D20;
	sub_825469E0(ctx, base);
	// stw r28,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r28.u32);
loc_82347D24:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82347D2C"))) PPC_WEAK_FUNC(sub_82347D2C);
PPC_FUNC_IMPL(__imp__sub_82347D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82347D30"))) PPC_WEAK_FUNC(sub_82347D30);
PPC_FUNC_IMPL(__imp__sub_82347D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82347D38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x825641d8
	ctx.lr = 0x82347D4C;
	sub_825641D8(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347d64
	if (ctx.cr6.eq) goto loc_82347D64;
	// bl 0x825469e0
	ctx.lr = 0x82347D60;
	sub_825469E0(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_82347D64:
	// addi r3,r29,84
	ctx.r3.s64 = ctx.r29.s64 + 84;
	// bl 0x824997b8
	ctx.lr = 0x82347D6C;
	sub_824997B8(ctx, base);
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// addi r31,r29,60
	ctx.r31.s64 = ctx.r29.s64 + 60;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347da0
	if (ctx.cr6.eq) goto loc_82347DA0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82347d9c
	if (ctx.cr6.eq) goto loc_82347D9C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82347D90:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82347d90
	if (!ctx.cr6.eq) goto loc_82347D90;
loc_82347D9C:
	// bl 0x82691540
	ctx.lr = 0x82347DA0;
	sub_82691540(ctx, base);
loc_82347DA0:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r30,r29,44
	ctx.r30.s64 = ctx.r29.s64 + 44;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347de0
	if (ctx.cr6.eq) goto loc_82347DE0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82347ddc
	if (ctx.cr6.eq) goto loc_82347DDC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82347DD0:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82347dd0
	if (!ctx.cr6.eq) goto loc_82347DD0;
loc_82347DDC:
	// bl 0x82691540
	ctx.lr = 0x82347DE0;
	sub_82691540(ctx, base);
loc_82347DE0:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// bl 0x82691540
	ctx.lr = 0x82347DF4;
	sub_82691540(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82347E00"))) PPC_WEAK_FUNC(sub_82347E00);
PPC_FUNC_IMPL(__imp__sub_82347E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82347E08;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347e58
	if (ctx.cr6.eq) goto loc_82347E58;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822cc048
	ctx.lr = 0x82347E28;
	sub_822CC048(ctx, base);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r29,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r29.u32);
	// lwz r3,1288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r29,1296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1296, ctx.r29.u32);
	// beq cr6,0x82347e50
	if (ctx.cr6.eq) goto loc_82347E50;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cad90
	ctx.lr = 0x82347E50;
	sub_822CAD90(ctx, base);
loc_82347E50:
	// stw r29,1288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1288, ctx.r29.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
loc_82347E58:
	// addi r4,r31,1056
	ctx.r4.s64 = ctx.r31.s64 + 1056;
	// addi r3,r31,1048
	ctx.r3.s64 = ctx.r31.s64 + 1048;
	// bl 0x823490b0
	ctx.lr = 0x82347E64;
	sub_823490B0(ctx, base);
	// lwz r3,1092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347e78
	if (ctx.cr6.eq) goto loc_82347E78;
	// bl 0x8254b720
	ctx.lr = 0x82347E74;
	sub_8254B720(ctx, base);
	// stw r29,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r29.u32);
loc_82347E78:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,10644
	ctx.r11.s64 = ctx.r11.s64 + 10644;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8226d8e8
	ctx.lr = 0x82347E90;
	sub_8226D8E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8226eed0
	ctx.lr = 0x82347E98;
	sub_8226EED0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82347EA0"))) PPC_WEAK_FUNC(sub_82347EA0);
PPC_FUNC_IMPL(__imp__sub_82347EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82347EA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8234801c
	if (!ctx.cr6.eq) goto loc_8234801C;
	// lis r28,-31957
	ctx.r28.s64 = -2094333952;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82347ed4
	if (ctx.cr6.eq) goto loc_82347ED4;
	// lwz r11,840(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 840);
	// b 0x82347f70
	goto loc_82347F70;
loc_82347ED4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82347ee4
	if (ctx.cr6.eq) goto loc_82347EE4;
	// stw r29,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r29.u32);
	// b 0x82347f74
	goto loc_82347F74;
loc_82347EE4:
	// lwz r11,892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82347f2c
	if (!ctx.cr6.eq) goto loc_82347F2C;
	// lwz r3,21092(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21092);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347f24
	if (ctx.cr6.eq) goto loc_82347F24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x822ff540
	ctx.lr = 0x82347F08;
	sub_822FF540(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8256d470
	ctx.lr = 0x82347F10;
	sub_8256D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82347f24
	if (ctx.cr0.eq) goto loc_82347F24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570620
	ctx.lr = 0x82347F24;
	sub_82570620(ctx, base);
loc_82347F24:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
loc_82347F2C:
	// bl 0x8226c3f0
	ctx.lr = 0x82347F30;
	sub_8226C3F0(ctx, base);
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82347f64
	if (!ctx.cr6.lt) goto loc_82347F64;
	// bl 0x8226c3f0
	ctx.lr = 0x82347F48;
	sub_8226C3F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82347f64
	if (ctx.cr6.eq) goto loc_82347F64;
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r11.u32);
	// b 0x82347f74
	goto loc_82347F74;
loc_82347F64:
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// stw r29,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82347F70:
	// stw r11,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r11.u32);
loc_82347F74:
	// lis r30,-31957
	ctx.r30.s64 = -2094333952;
	// lwz r11,21068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21068);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82347f8c
	if (!ctx.cr6.eq) goto loc_82347F8C;
	// bl 0x822e58d0
	ctx.lr = 0x82347F88;
	sub_822E58D0(ctx, base);
	// lwz r11,21068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21068);
loc_82347F8C:
	// stw r29,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r29.u32);
	// lwz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// lwz r10,840(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82347fa8
	if (ctx.cr6.lt) goto loc_82347FA8;
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x82348014
	goto loc_82348014;
loc_82347FA8:
	// lwz r11,21092(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347fc4
	if (ctx.cr6.eq) goto loc_82347FC4;
	// bl 0x8226c3f0
	ctx.lr = 0x82347FB8;
	sub_8226C3F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82347fe8
	if (ctx.cr6.eq) goto loc_82347FE8;
loc_82347FC4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347ff0
	if (ctx.cr6.eq) goto loc_82347FF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82347FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82347ff0
	if (ctx.cr0.eq) goto loc_82347FF0;
loc_82347FE8:
	// stw r29,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r29.u32);
	// b 0x82348010
	goto loc_82348010;
loc_82347FF0:
	// lwz r11,1004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82348010
	if (!ctx.cr6.eq) goto loc_82348010;
	// bl 0x8226c3f0
	ctx.lr = 0x82348000;
	sub_8226C3F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,6
	ctx.r4.s64 = 6;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82348014
	if (!ctx.cr6.eq) goto loc_82348014;
loc_82348010:
	// li r4,11
	ctx.r4.s64 = 11;
loc_82348014:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823418a8
	ctx.lr = 0x8234801C;
	sub_823418A8(ctx, base);
loc_8234801C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82348024"))) PPC_WEAK_FUNC(sub_82348024);
PPC_FUNC_IMPL(__imp__sub_82348024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82348028"))) PPC_WEAK_FUNC(sub_82348028);
PPC_FUNC_IMPL(__imp__sub_82348028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82348030;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,62
	ctx.r5.s64 = 62;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82348060;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823480c0
	if (ctx.cr6.eq) goto loc_823480C0;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bge cr6,0x823480c0
	if (!ctx.cr6.lt) goto loc_823480C0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8245c388
	ctx.lr = 0x8234808C;
	sub_8245C388(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823480a0
	if (ctx.cr6.eq) goto loc_823480A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823480a4
	if (!ctx.cr6.eq) goto loc_823480A4;
loc_823480A0:
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
loc_823480A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r5,r11,168
	ctx.r5.s64 = ctx.r11.s64 + 168;
	// bl 0x82fa2df8
	ctx.lr = 0x823480C0;
	sub_82FA2DF8(ctx, base);
loc_823480C0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823480C8"))) PPC_WEAK_FUNC(sub_823480C8);
PPC_FUNC_IMPL(__imp__sub_823480C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823480D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8226c3f0
	ctx.lr = 0x823480DC;
	sub_8226C3F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r31,r11,21092
	ctx.r31.s64 = ctx.r11.s64 + 21092;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,21092(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21092);
	// bne cr6,0x82348170
	if (!ctx.cr6.eq) goto loc_82348170;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82348230
	if (ctx.cr6.eq) goto loc_82348230;
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82348128:
	// lwzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82348148
	if (ctx.cr6.eq) goto loc_82348148;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// blt cr6,0x82348128
	if (ctx.cr6.lt) goto loc_82348128;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82348148:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82348150:
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x823481fc
	if (ctx.cr6.eq) goto loc_823481FC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// blt cr6,0x82348150
	if (ctx.cr6.lt) goto loc_82348150;
	// b 0x823481f8
	goto loc_823481F8;
loc_82348170:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82348230
	if (ctx.cr6.eq) goto loc_82348230;
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,16
	ctx.r11.s64 = 16;
loc_823481B4:
	// lwzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823481d4
	if (ctx.cr6.eq) goto loc_823481D4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// blt cr6,0x823481b4
	if (ctx.cr6.lt) goto loc_823481B4;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_823481D4:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,16
	ctx.r11.s64 = 16;
loc_823481DC:
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x823481fc
	if (ctx.cr6.eq) goto loc_823481FC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// blt cr6,0x823481dc
	if (ctx.cr6.lt) goto loc_823481DC;
loc_823481F8:
	// li r8,-1
	ctx.r8.s64 = -1;
loc_823481FC:
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mulli r9,r9,284
	ctx.r9.s64 = ctx.r9.s64 * 284;
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r3,1020(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1020);
	// mulli r10,r8,284
	ctx.r10.s64 = ctx.r8.s64 * 284;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f13,276(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 276, temp.u32);
	// stfs f0,276(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 276, temp.u32);
	// lfs f2,560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8232c420
	ctx.lr = 0x8234822C;
	sub_8232C420(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82348230:
	// lwz r11,688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 688);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234824c
	if (ctx.cr6.eq) goto loc_8234824C;
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r9,1020(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1020);
	// stw r11,1060(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1060, ctx.r11.u32);
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
loc_8234824C:
	// lwz r11,688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 688);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82348274
	if (ctx.cr6.eq) goto loc_82348274;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82348278
	if (!ctx.cr6.eq) goto loc_82348278;
	// li r31,2
	ctx.r31.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82348278
	goto loc_82348278;
loc_82348274:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82348278:
	// bl 0x8226c3f0
	ctx.lr = 0x8234827C;
	sub_8226C3F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x823482a4
	if (!ctx.cr6.eq) goto loc_823482A4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823482cc
	goto loc_823482CC;
loc_823482A4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
loc_823482CC:
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lfs f0,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,21748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823482f4
	if (ctx.cr6.eq) goto loc_823482F4;
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stw r31,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r31.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stw r30,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
loc_823482F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823482FC"))) PPC_WEAK_FUNC(sub_823482FC);
PPC_FUNC_IMPL(__imp__sub_823482FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82348300"))) PPC_WEAK_FUNC(sub_82348300);
PPC_FUNC_IMPL(__imp__sub_82348300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82348308;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,21092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82348458
	if (ctx.cr6.eq) goto loc_82348458;
	// bl 0x8226c3f0
	ctx.lr = 0x82348324;
	sub_8226C3F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82348390
	if (!ctx.cr6.eq) goto loc_82348390;
	// lwz r11,21092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21092);
	// lwz r7,844(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 844);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234843c
	if (ctx.cr6.eq) goto loc_8234843C;
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82348354:
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x823483dc
	if (ctx.cr6.eq) goto loc_823483DC;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// blt cr6,0x82348354
	if (ctx.cr6.lt) goto loc_82348354;
loc_82348370:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82348374:
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823483e4
	if (!ctx.cr6.eq) goto loc_823483E4;
	// lwz r9,200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// stw r10,1292(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1292, ctx.r10.u32);
	// b 0x823483ec
	goto loc_823483EC;
loc_82348390:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823483A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,21092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234843c
	if (ctx.cr6.eq) goto loc_8234843C;
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
loc_823483BC:
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x823483dc
	if (ctx.cr6.eq) goto loc_823483DC;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// blt cr6,0x823483bc
	if (ctx.cr6.lt) goto loc_823483BC;
	// b 0x82348370
	goto loc_82348370;
loc_823483DC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82348374
	goto loc_82348374;
loc_823483E4:
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// stw r28,1292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1292, ctx.r28.u32);
loc_823483EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234843c
	if (ctx.cr6.eq) goto loc_8234843C;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8234842c
	if (!ctx.cr6.eq) goto loc_8234842C;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234841c
	if (!ctx.cr6.eq) goto loc_8234841C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82348424
	goto loc_82348424;
loc_8234841C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r10,3
	ctx.r10.s64 = 3;
loc_82348424:
	// stw r29,680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 680, ctx.r29.u32);
	// b 0x82348448
	goto loc_82348448;
loc_8234842C:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r9,680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 680, ctx.r9.u32);
	// b 0x82348444
	goto loc_82348444;
loc_8234843C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 680, ctx.r29.u32);
loc_82348444:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82348448:
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,208(r9)
	PPC_STORE_U32(ctx.r9.u32 + 208, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r10,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r10.u32);
loc_82348458:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82348460"))) PPC_WEAK_FUNC(sub_82348460);
PPC_FUNC_IMPL(__imp__sub_82348460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82348468;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,32570
	ctx.r30.s64 = ctx.r11.s64 + 32570;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,1152
	ctx.r3.s64 = ctx.r3.s64 + 1152;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82240328
	ctx.lr = 0x8234848C;
	sub_82240328(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// lfs f31,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,1180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1180, temp.u32);
	// bl 0x82240328
	ctx.lr = 0x823484A8;
	sub_82240328(ctx, base);
	// stfs f31,1212(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1212, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// bl 0x82240328
	ctx.lr = 0x823484BC;
	sub_82240328(ctx, base);
	// stfs f31,1244(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1244, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// bl 0x82240328
	ctx.lr = 0x823484D0;
	sub_82240328(ctx, base);
	// stfs f31,1276(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1276, temp.u32);
	// stfs f31,1280(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1280, temp.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x823484DC;
	sub_8226C3F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82348590
	if (!ctx.cr6.eq) goto loc_82348590;
	// lwz r11,1284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234850c
	if (!ctx.cr6.eq) goto loc_8234850C;
	// bl 0x82325710
	ctx.lr = 0x823484FC;
	sub_82325710(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r29,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r29.u32);
loc_8234850C:
	// bl 0x8226c3f0
	ctx.lr = 0x82348510;
	sub_8226C3F0(ctx, base);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82348590
	if (ctx.cr6.gt) goto loc_82348590;
	// bl 0x8226d8e8
	ctx.lr = 0x82348520;
	sub_8226D8E8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r30,21120(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234858c
	if (ctx.cr6.eq) goto loc_8234858C;
	// lbz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8234858c
	if (!ctx.cr0.eq) goto loc_8234858C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82920258
	ctx.lr = 0x82348544;
	sub_82920258(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8234858c
	if (!ctx.cr6.eq) goto loc_8234858C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82348584
	if (ctx.cr6.eq) goto loc_82348584;
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82348584
	if (ctx.cr6.eq) goto loc_82348584;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,264(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82348580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82348588
	goto loc_82348588;
loc_82348584:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82348588:
	// stfs f1,1280(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1280, temp.u32);
loc_8234858C:
	// stw r29,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r29.u32);
loc_82348590:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234859C"))) PPC_WEAK_FUNC(sub_8234859C);
PPC_FUNC_IMPL(__imp__sub_8234859C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823485A0"))) PPC_WEAK_FUNC(sub_823485A0);
PPC_FUNC_IMPL(__imp__sub_823485A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x823485A8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r11,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x823485D0;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82348740
	if (!ctx.cr6.eq) goto loc_82348740;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82348740
	if (!ctx.cr6.eq) goto loc_82348740;
	// bl 0x8226c3f0
	ctx.lr = 0x823485F4;
	sub_8226C3F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82348740
	if (!ctx.cr6.eq) goto loc_82348740;
	// lwz r11,908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82348740
	if (ctx.cr6.eq) goto loc_82348740;
	// bl 0x8226c3f0
	ctx.lr = 0x82348610;
	sub_8226C3F0(ctx, base);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82348650
	if (!ctx.cr6.gt) goto loc_82348650;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82348978
	ctx.lr = 0x8234862C;
	sub_82348978(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82348738
	if (ctx.cr0.eq) goto loc_82348738;
	// lfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f31.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82348750
	ctx.lr = 0x82348648;
	sub_82348750(ctx, base);
	// stfs f31,912(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 912, temp.u32);
	// b 0x82348728
	goto loc_82348728;
loc_82348650:
	// bl 0x8226c3f0
	ctx.lr = 0x82348654;
	sub_8226C3F0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82325710
	ctx.lr = 0x82348660;
	sub_82325710(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x823270a0
	ctx.lr = 0x82348674;
	sub_823270A0(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82348740
	if (ctx.cr6.eq) goto loc_82348740;
	// bl 0x8226c3f0
	ctx.lr = 0x82348688;
	sub_8226C3F0(ctx, base);
	// lfs f31,1280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	ctx.f31.f64 = double(temp.f32);
	// lwz r28,16(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r29,r31,1244
	ctx.r29.s64 = ctx.r31.s64 + 1244;
	// addi r30,r31,1216
	ctx.r30.s64 = ctx.r31.s64 + 1216;
	// addi r27,r31,1276
	ctx.r27.s64 = ctx.r31.s64 + 1276;
	// addi r26,r31,1248
	ctx.r26.s64 = ctx.r31.s64 + 1248;
	// addi r25,r31,1212
	ctx.r25.s64 = ctx.r31.s64 + 1212;
	// addi r24,r31,1184
	ctx.r24.s64 = ctx.r31.s64 + 1184;
	// addi r23,r31,1180
	ctx.r23.s64 = ctx.r31.s64 + 1180;
	// bl 0x82325710
	ctx.lr = 0x823486B0;
	sub_82325710(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r5,r31,1152
	ctx.r5.s64 = ctx.r31.s64 + 1152;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x82326078
	ctx.lr = 0x823486DC;
	sub_82326078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82348740
	if (ctx.cr0.eq) goto loc_82348740;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823486f8
	if (ctx.cr6.lt) goto loc_823486F8;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x823486fc
	goto loc_823486FC;
loc_823486F8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_823486FC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,-11604
	ctx.r5.s64 = ctx.r11.s64 + -11604;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82563c28
	ctx.lr = 0x82348710;
	sub_82563C28(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82348750
	ctx.lr = 0x82348720;
	sub_82348750(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 912, temp.u32);
loc_82348728:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,916
	ctx.r3.s64 = ctx.r31.s64 + 916;
	// bl 0x82fa2df8
	ctx.lr = 0x82348738;
	sub_82FA2DF8(ctx, base);
loc_82348738:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r11.u32);
loc_82348740:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234874C"))) PPC_WEAK_FUNC(sub_8234874C);
PPC_FUNC_IMPL(__imp__sub_8234874C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82348750"))) PPC_WEAK_FUNC(sub_82348750);
PPC_FUNC_IMPL(__imp__sub_82348750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82348758;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,904(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82348968
	if (ctx.cr6.eq) goto loc_82348968;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823487a8
	if (!ctx.cr6.eq) goto loc_823487A8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,12208
	ctx.r4.s64 = ctx.r11.s64 + 12208;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x823487A0;
	sub_826A7620(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_823487A8:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,904(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 904);
	// bl 0x822e4d50
	ctx.lr = 0x823487C0;
	sub_822E4D50(ctx, base);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,12264
	ctx.r4.s64 = ctx.r11.s64 + 12264;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x823487DC;
	sub_826A7620(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d00
	ctx.lr = 0x823487E4;
	sub_822E4D00(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,916
	ctx.r3.s64 = ctx.r30.s64 + 916;
	// bl 0x82a77728
	ctx.lr = 0x823487F0;
	sub_82A77728(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823487fc
	if (!ctx.cr0.eq) goto loc_823487FC;
	// li r29,1
	ctx.r29.s64 = 1;
loc_823487FC:
	// lwz r11,688(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	// lwz r3,904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 904);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823488fc
	if (ctx.cr6.eq) goto loc_823488FC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82348848
	if (ctx.cr6.eq) goto loc_82348848;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfd f0,248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 248);
	// fsub f0,f31,f0
	ctx.f0.f64 = ctx.f31.f64 - ctx.f0.f64;
	// fctid f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f0.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8252c230
	ctx.lr = 0x82348844;
	sub_8252C230(ctx, base);
	// b 0x82348968
	goto loc_82348968;
loc_82348848:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r9,r11,-3728
	ctx.r9.s64 = ctx.r11.s64 + -3728;
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f13,-3728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3728);
	ctx.f13.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfs f0,10324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10324);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfd f0,248(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 248);
	// lfs f12,-15356(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15356);
	ctx.f12.f64 = double(temp.f32);
	// fsub f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 - ctx.f0.f64;
	// fctid f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f11.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fnmsubs f13,f11,f13,f31
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f31.f64)));
	// fsub f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 - ctx.f0.f64;
	// fsub f10,f13,f0
	ctx.f10.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fsub f9,f13,f0
	ctx.f9.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fctid f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f11.f64));
	// fctid f10,f10
	ctx.f10.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f10.f64));
	// fctid f9,f9
	ctx.f9.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f9.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fctidz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fctidz f11,f9
	ctx.f11.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fctid f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f0.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8252c2f0
	ctx.lr = 0x823488F8;
	sub_8252C2F0(ctx, base);
	// b 0x82348968
	goto loc_82348968;
loc_823488FC:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lfs f13,-15356(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15356);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,248(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 248);
	// fsub f12,f31,f0
	ctx.f12.f64 = ctx.f31.f64 - ctx.f0.f64;
	// fsub f11,f31,f0
	ctx.f11.f64 = ctx.f31.f64 - ctx.f0.f64;
	// fctid f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f12.f64));
	// fctid f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f11.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fsubs f12,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fctidz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fctid f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f0.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8252c3f8
	ctx.lr = 0x82348968;
	sub_8252C3F8(ctx, base);
loc_82348968:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82348974"))) PPC_WEAK_FUNC(sub_82348974);
PPC_FUNC_IMPL(__imp__sub_82348974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82348978"))) PPC_WEAK_FUNC(sub_82348978);
PPC_FUNC_IMPL(__imp__sub_82348978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82348980;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82348a48
	if (ctx.cr6.eq) goto loc_82348A48;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f31,-27104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27104);
	ctx.f31.f64 = double(temp.f32);
loc_823489C0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82348a3c
	if (ctx.cr6.eq) goto loc_82348A3C;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,688(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 688);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82348a10
	if (ctx.cr6.eq) goto loc_82348A10;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82348a24
	if (ctx.cr6.gt) goto loc_82348A24;
	// b 0x82348a3c
	goto loc_82348A3C;
loc_82348A10:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82348a3c
	if (!ctx.cr6.gt) goto loc_82348A3C;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82348a3c
	if (!ctx.cr6.lt) goto loc_82348A3C;
loc_82348A24:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fa2df8
	ctx.lr = 0x82348A38;
	sub_82FA2DF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82348A3C:
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x823489c0
	if (!ctx.cr6.eq) goto loc_823489C0;
loc_82348A48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82348A54"))) PPC_WEAK_FUNC(sub_82348A54);
PPC_FUNC_IMPL(__imp__sub_82348A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82348A58"))) PPC_WEAK_FUNC(sub_82348A58);
PPC_FUNC_IMPL(__imp__sub_82348A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82348A60;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31955
	ctx.r29.s64 = -2094202880;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,30428(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82348a88
	if (!ctx.cr6.eq) goto loc_82348A88;
	// bl 0x822599a0
	ctx.lr = 0x82348A84;
	sub_822599A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82348A88:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82348b70
	if (!ctx.cr0.eq) goto loc_82348B70;
	// bl 0x8226c3f0
	ctx.lr = 0x82348A98;
	sub_8226C3F0(ctx, base);
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x8226c3f0
	ctx.lr = 0x82348AA0;
	sub_8226C3F0(ctx, base);
	// addi r3,r31,-1
	ctx.r3.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r3,21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 21, ctx.xer);
	// bgt cr6,0x82348ab4
	if (ctx.cr6.gt) goto loc_82348AB4;
	// bl 0x8226c668
	ctx.lr = 0x82348AB0;
	sub_8226C668(ctx, base);
	// b 0x82348ab8
	goto loc_82348AB8;
loc_82348AB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82348AB8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82348b70
	if (ctx.cr6.eq) goto loc_82348B70;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,264(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,108(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82348AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82348b70
	if (!ctx.cr6.gt) goto loc_82348B70;
	// bl 0x8226c3f0
	ctx.lr = 0x82348AFC;
	sub_8226C3F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82348b70
	if (!ctx.cr6.eq) goto loc_82348B70;
	// lwz r11,30428(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82348b1c
	if (!ctx.cr6.eq) goto loc_82348B1C;
	// bl 0x822599a0
	ctx.lr = 0x82348B18;
	sub_822599A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82348B1C:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82348b70
	if (!ctx.cr0.eq) goto loc_82348B70;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82348b70
	if (!ctx.cr6.eq) goto loc_82348B70;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82920258
	ctx.lr = 0x82348B40;
	sub_82920258(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82348b70
	if (!ctx.cr6.eq) goto loc_82348B70;
	// bl 0x8226c3f0
	ctx.lr = 0x82348B4C;
	sub_8226C3F0(ctx, base);
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x822c7320
	ctx.lr = 0x82348B54;
	sub_822C7320(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822c74e0
	ctx.lr = 0x82348B64;
	sub_822C74E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82348b74
	if (!ctx.cr0.eq) goto loc_82348B74;
loc_82348B70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82348B74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82348B80"))) PPC_WEAK_FUNC(sub_82348B80);
PPC_FUNC_IMPL(__imp__sub_82348B80) {
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82348bb8
	if (!ctx.cr6.lt) goto loc_82348BB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82348bbc
	if (!ctx.cr6.gt) goto loc_82348BBC;
loc_82348BB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82348BBC:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq 0x82348c68
	if (ctx.cr0.eq) goto loc_82348C68;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,96
	ctx.r11.s64 = 96;
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// divw r30,r7,r11
	ctx.r30.s32 = ctx.r7.s32 / ctx.r11.s32;
	// bne cr6,0x82348c4c
	if (!ctx.cr6.eq) goto loc_82348C4C;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lis r7,682
	ctx.r7.s64 = 44695552;
	// divw r9,r9,r11
	ctx.r9.s32 = ctx.r9.s32 / ctx.r11.s32;
	// ori r7,r7,43689
	ctx.r7.u64 = ctx.r7.u64 | 43689;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82348c04
	if (!ctx.cr6.gt) goto loc_82348C04;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82348C04;
	sub_82FA0648(ctx, base);
loc_82348C04:
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// divw r11,r8,r11
	ctx.r11.s32 = ctx.r8.s32 / ctx.r11.s32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82348c4c
	if (!ctx.cr6.gt) goto loc_82348C4C;
	// lis r8,682
	ctx.r8.s64 = 44695552;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,43690
	ctx.r8.u64 = ctx.r8.u64 | 43690;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82348c38
	if (ctx.cr6.lt) goto loc_82348C38;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82348C38:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82348c44
	if (!ctx.cr6.lt) goto loc_82348C44;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82348C44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82348f98
	ctx.lr = 0x82348C4C;
	sub_82348F98(ctx, base);
loc_82348C4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r30,96
	ctx.r10.s64 = ctx.r30.s64 * 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82348cf8
	if (ctx.cr6.eq) goto loc_82348CF8;
	// b 0x82348cf0
	goto loc_82348CF0;
loc_82348C68:
	// bne cr6,0x82348ce0
	if (!ctx.cr6.eq) goto loc_82348CE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,96
	ctx.r11.s64 = 96;
	// lis r7,682
	ctx.r7.s64 = 44695552;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// ori r7,r7,43689
	ctx.r7.u64 = ctx.r7.u64 | 43689;
	// divw r9,r9,r11
	ctx.r9.s32 = ctx.r9.s32 / ctx.r11.s32;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82348c98
	if (!ctx.cr6.gt) goto loc_82348C98;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82348C98;
	sub_82FA0648(ctx, base);
loc_82348C98:
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// divw r11,r8,r11
	ctx.r11.s32 = ctx.r8.s32 / ctx.r11.s32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82348ce0
	if (!ctx.cr6.gt) goto loc_82348CE0;
	// lis r8,682
	ctx.r8.s64 = 44695552;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,43690
	ctx.r8.u64 = ctx.r8.u64 | 43690;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82348ccc
	if (ctx.cr6.lt) goto loc_82348CCC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82348CCC:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82348cd8
	if (!ctx.cr6.lt) goto loc_82348CD8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82348CD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82348f98
	ctx.lr = 0x82348CE0;
	sub_82348F98(ctx, base);
loc_82348CE0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82348cf8
	if (ctx.cr6.eq) goto loc_82348CF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82348CF0:
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x82fa77c0
	ctx.lr = 0x82348CF8;
	sub_82FA77C0(ctx, base);
loc_82348CF8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
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

__attribute__((alias("__imp__sub_82348D1C"))) PPC_WEAK_FUNC(sub_82348D1C);
PPC_FUNC_IMPL(__imp__sub_82348D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82348D20"))) PPC_WEAK_FUNC(sub_82348D20);
PPC_FUNC_IMPL(__imp__sub_82348D20) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82349190
	ctx.lr = 0x82348D60;
	sub_82349190(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82348de0
	if (ctx.cr6.eq) goto loc_82348DE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x82348D7C;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82348da0
	if (ctx.cr0.eq) goto loc_82348DA0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82348d94
	if (ctx.cr6.eq) goto loc_82348D94;
	// bl 0x82241d18
	ctx.lr = 0x82348D94;
	sub_82241D18(ctx, base);
loc_82348D94:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82348DA0:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_82348DA4:
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
	// bne 0x82348da4
	if (!ctx.cr0.eq) goto loc_82348DA4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82348de0
	if (!ctx.cr6.eq) goto loc_82348DE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82348DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82348DE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82348DFC"))) PPC_WEAK_FUNC(sub_82348DFC);
PPC_FUNC_IMPL(__imp__sub_82348DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82348E00"))) PPC_WEAK_FUNC(sub_82348E00);
PPC_FUNC_IMPL(__imp__sub_82348E00) {
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82348e38
	if (!ctx.cr6.lt) goto loc_82348E38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82348e3c
	if (!ctx.cr6.gt) goto loc_82348E3C;
loc_82348E38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82348E3C:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq 0x82348ee8
	if (ctx.cr0.eq) goto loc_82348EE8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,28
	ctx.r11.s64 = 28;
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// divw r30,r7,r11
	ctx.r30.s32 = ctx.r7.s32 / ctx.r11.s32;
	// bne cr6,0x82348ecc
	if (!ctx.cr6.eq) goto loc_82348ECC;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lis r7,2340
	ctx.r7.s64 = 153354240;
	// divw r9,r9,r11
	ctx.r9.s32 = ctx.r9.s32 / ctx.r11.s32;
	// ori r7,r7,37448
	ctx.r7.u64 = ctx.r7.u64 | 37448;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82348e84
	if (!ctx.cr6.gt) goto loc_82348E84;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82348E84;
	sub_82FA0648(ctx, base);
loc_82348E84:
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// divw r11,r8,r11
	ctx.r11.s32 = ctx.r8.s32 / ctx.r11.s32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82348ecc
	if (!ctx.cr6.gt) goto loc_82348ECC;
	// lis r8,2340
	ctx.r8.s64 = 153354240;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,37449
	ctx.r8.u64 = ctx.r8.u64 | 37449;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82348eb8
	if (ctx.cr6.lt) goto loc_82348EB8;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82348EB8:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82348ec4
	if (!ctx.cr6.lt) goto loc_82348EC4;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82348EC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82544b18
	ctx.lr = 0x82348ECC;
	sub_82544B18(ctx, base);
loc_82348ECC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82348f74
	if (ctx.cr6.eq) goto loc_82348F74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82348f70
	goto loc_82348F70;
loc_82348EE8:
	// bne cr6,0x82348f60
	if (!ctx.cr6.eq) goto loc_82348F60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,28
	ctx.r11.s64 = 28;
	// lis r7,2340
	ctx.r7.s64 = 153354240;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// ori r7,r7,37448
	ctx.r7.u64 = ctx.r7.u64 | 37448;
	// divw r9,r9,r11
	ctx.r9.s32 = ctx.r9.s32 / ctx.r11.s32;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82348f18
	if (!ctx.cr6.gt) goto loc_82348F18;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82348F18;
	sub_82FA0648(ctx, base);
loc_82348F18:
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// divw r11,r8,r11
	ctx.r11.s32 = ctx.r8.s32 / ctx.r11.s32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82348f60
	if (!ctx.cr6.gt) goto loc_82348F60;
	// lis r8,2340
	ctx.r8.s64 = 153354240;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,37449
	ctx.r8.u64 = ctx.r8.u64 | 37449;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82348f4c
	if (ctx.cr6.lt) goto loc_82348F4C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82348F4C:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82348f58
	if (!ctx.cr6.lt) goto loc_82348F58;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82348F58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82544b18
	ctx.lr = 0x82348F60;
	sub_82544B18(ctx, base);
loc_82348F60:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82348f74
	if (ctx.cr6.eq) goto loc_82348F74;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82348F70:
	// bl 0x82349140
	ctx.lr = 0x82348F74;
	sub_82349140(ctx, base);
loc_82348F74:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
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

__attribute__((alias("__imp__sub_82348F98"))) PPC_WEAK_FUNC(sub_82348F98);
PPC_FUNC_IMPL(__imp__sub_82348F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82348FA0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,682
	ctx.r11.s64 = 44695552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,43690
	ctx.r11.u64 = ctx.r11.u64 | 43690;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82348fc8
	if (!ctx.cr6.gt) goto loc_82348FC8;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82348FC8;
	sub_82FA0648(ctx, base);
loc_82348FC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,96
	ctx.r25.s64 = 96;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8234908c
	if (!ctx.cr6.lt) goto loc_8234908C;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82349000
	if (ctx.cr6.eq) goto loc_82349000;
	// mulli r3,r26,96
	ctx.r3.s64 = ctx.r26.s64 * 96;
	// bl 0x82691500
	ctx.lr = 0x82348FF8;
	sub_82691500(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82349094
	if (ctx.cr0.eq) goto loc_82349094;
loc_82349000:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82349030
	goto loc_82349030;
loc_82349010:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82349028
	if (ctx.cr6.eq) goto loc_82349028;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82349028;
	sub_82FA77C0(ctx, base);
loc_82349028:
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// addi r29,r29,96
	ctx.r29.s64 = ctx.r29.s64 + 96;
loc_82349030:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82349010
	if (!ctx.cr6.eq) goto loc_82349010;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw r30,r10,r25
	ctx.r30.s32 = ctx.r10.s32 / ctx.r25.s32;
	// beq cr6,0x82349070
	if (ctx.cr6.eq) goto loc_82349070;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8234906c
	if (ctx.cr6.eq) goto loc_8234906C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82349060:
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82349060
	if (!ctx.cr6.eq) goto loc_82349060;
loc_8234906C:
	// bl 0x82691540
	ctx.lr = 0x82349070;
	sub_82691540(ctx, base);
loc_82349070:
	// mulli r11,r26,96
	ctx.r11.s64 = ctx.r26.s64 * 96;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mulli r10,r30,96
	ctx.r10.s64 = ctx.r30.s64 * 96;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8234908C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82349094:
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
	ctx.lr = 0x823490B0;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823490B0"))) PPC_WEAK_FUNC(sub_823490B0);
PPC_FUNC_IMPL(__imp__sub_823490B0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823490fc
	if (ctx.cr6.eq) goto loc_823490FC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823090c8
	ctx.lr = 0x823490E0;
	sub_823090C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f6330
	ctx.lr = 0x823490EC;
	sub_823F6330(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823490fc
	if (ctx.cr6.eq) goto loc_823490FC;
	// bl 0x82241d18
	ctx.lr = 0x823490FC;
	sub_82241D18(ctx, base);
loc_823490FC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82349114
	if (ctx.cr6.eq) goto loc_82349114;
	// bl 0x8250b630
	ctx.lr = 0x8234910C;
	sub_8250B630(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82349114:
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

__attribute__((alias("__imp__sub_8234912C"))) PPC_WEAK_FUNC(sub_8234912C);
PPC_FUNC_IMPL(__imp__sub_8234912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82349130"))) PPC_WEAK_FUNC(sub_82349130);
PPC_FUNC_IMPL(__imp__sub_82349130) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x822cad90
	sub_822CAD90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234913C"))) PPC_WEAK_FUNC(sub_8234913C);
PPC_FUNC_IMPL(__imp__sub_8234913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82349140"))) PPC_WEAK_FUNC(sub_82349140);
PPC_FUNC_IMPL(__imp__sub_82349140) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822c5628
	ctx.lr = 0x82349168;
	sub_822C5628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822c3d38
	ctx.lr = 0x82349174;
	sub_822C3D38(ctx, base);
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

__attribute__((alias("__imp__sub_82349190"))) PPC_WEAK_FUNC(sub_82349190);
PPC_FUNC_IMPL(__imp__sub_82349190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82349198;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823491d0
	if (ctx.cr6.eq) goto loc_823491D0;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
loc_823491B4:
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
	// bne 0x823491b4
	if (!ctx.cr0.eq) goto loc_823491B4;
loc_823491D0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82349214
	if (ctx.cr6.eq) goto loc_82349214;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
loc_823491E0:
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
	// bne 0x823491e0
	if (!ctx.cr0.eq) goto loc_823491E0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82349214
	if (!ctx.cr6.eq) goto loc_82349214;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82349214:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82349224"))) PPC_WEAK_FUNC(sub_82349224);
PPC_FUNC_IMPL(__imp__sub_82349224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82349228"))) PPC_WEAK_FUNC(sub_82349228);
PPC_FUNC_IMPL(__imp__sub_82349228) {
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
	// bne cr6,0x82349270
	if (!ctx.cr6.eq) goto loc_82349270;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8234924C;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82349270
	if (!ctx.cr0.eq) goto loc_82349270;
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
	ctx.lr = 0x82349270;
	sub_82240040(ctx, base);
loc_82349270:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,10572
	ctx.r11.s64 = ctx.r11.s64 + 10572;
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

__attribute__((alias("__imp__sub_8234929C"))) PPC_WEAK_FUNC(sub_8234929C);
PPC_FUNC_IMPL(__imp__sub_8234929C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823492A0"))) PPC_WEAK_FUNC(sub_823492A0);
PPC_FUNC_IMPL(__imp__sub_823492A0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823492ec
	if (ctx.cr6.eq) goto loc_823492EC;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,21120(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21120);
	// slw r9,r7,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_823492EC:
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,2116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2116);
	// bl 0x8259cc58
	ctx.lr = 0x823492FC;
	sub_8259CC58(ctx, base);
	// addic. r3,r31,788
	ctx.xer.ca = ctx.r31.u32 > 4294966507;
	ctx.r3.s64 = ctx.r31.s64 + 788;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82349314
	if (ctx.cr0.eq) goto loc_82349314;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82349318
	goto loc_82349318;
loc_82349314:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82349318:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82349328
	if (ctx.cr6.eq) goto loc_82349328;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82570620
	ctx.lr = 0x82349328;
	sub_82570620(ctx, base);
loc_82349328:
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

__attribute__((alias("__imp__sub_8234933C"))) PPC_WEAK_FUNC(sub_8234933C);
PPC_FUNC_IMPL(__imp__sub_8234933C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82349340"))) PPC_WEAK_FUNC(sub_82349340);
PPC_FUNC_IMPL(__imp__sub_82349340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-19268
	ctx.r3.s64 = ctx.r11.s64 + -19268;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234934C"))) PPC_WEAK_FUNC(sub_8234934C);
PPC_FUNC_IMPL(__imp__sub_8234934C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82349350"))) PPC_WEAK_FUNC(sub_82349350);
PPC_FUNC_IMPL(__imp__sub_82349350) {
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
	// bne cr6,0x82349398
	if (!ctx.cr6.eq) goto loc_82349398;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82349374;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82349398
	if (!ctx.cr0.eq) goto loc_82349398;
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
	ctx.lr = 0x82349398;
	sub_82240040(ctx, base);
loc_82349398:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,10596
	ctx.r11.s64 = ctx.r11.s64 + 10596;
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

__attribute__((alias("__imp__sub_823493C4"))) PPC_WEAK_FUNC(sub_823493C4);
PPC_FUNC_IMPL(__imp__sub_823493C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823493C8"))) PPC_WEAK_FUNC(sub_823493C8);
PPC_FUNC_IMPL(__imp__sub_823493C8) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,2116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2116);
	// bl 0x8259cc58
	ctx.lr = 0x823493E8;
	sub_8259CC58(ctx, base);
	// addic. r3,r31,788
	ctx.xer.ca = ctx.r31.u32 > 4294966507;
	ctx.r3.s64 = ctx.r31.s64 + 788;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82349400
	if (ctx.cr0.eq) goto loc_82349400;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82349404
	goto loc_82349404;
loc_82349400:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82349404:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82349414
	if (ctx.cr6.eq) goto loc_82349414;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82570620
	ctx.lr = 0x82349414;
	sub_82570620(ctx, base);
loc_82349414:
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

__attribute__((alias("__imp__sub_82349428"))) PPC_WEAK_FUNC(sub_82349428);
PPC_FUNC_IMPL(__imp__sub_82349428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-19216
	ctx.r3.s64 = ctx.r11.s64 + -19216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82349434"))) PPC_WEAK_FUNC(sub_82349434);
PPC_FUNC_IMPL(__imp__sub_82349434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82349438"))) PPC_WEAK_FUNC(sub_82349438);
PPC_FUNC_IMPL(__imp__sub_82349438) {
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
	// bne cr6,0x82349480
	if (!ctx.cr6.eq) goto loc_82349480;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8234945C;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82349480
	if (!ctx.cr0.eq) goto loc_82349480;
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
	ctx.lr = 0x82349480;
	sub_82240040(ctx, base);
loc_82349480:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,10620
	ctx.r11.s64 = ctx.r11.s64 + 10620;
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

__attribute__((alias("__imp__sub_823494AC"))) PPC_WEAK_FUNC(sub_823494AC);
PPC_FUNC_IMPL(__imp__sub_823494AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823494B0"))) PPC_WEAK_FUNC(sub_823494B0);
PPC_FUNC_IMPL(__imp__sub_823494B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,15164
	ctx.r11.s64 = ctx.r11.s64 + 15164;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1036(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1036, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823494C8"))) PPC_WEAK_FUNC(sub_823494C8);
PPC_FUNC_IMPL(__imp__sub_823494C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-19164
	ctx.r3.s64 = ctx.r11.s64 + -19164;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823494D4"))) PPC_WEAK_FUNC(sub_823494D4);
PPC_FUNC_IMPL(__imp__sub_823494D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823494D8"))) PPC_WEAK_FUNC(sub_823494D8);
PPC_FUNC_IMPL(__imp__sub_823494D8) {
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
	// bne cr6,0x82349520
	if (!ctx.cr6.eq) goto loc_82349520;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823494FC;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82349520
	if (!ctx.cr0.eq) goto loc_82349520;
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
	ctx.lr = 0x82349520;
	sub_82240040(ctx, base);
loc_82349520:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,10644
	ctx.r11.s64 = ctx.r11.s64 + 10644;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8234954C"))) PPC_WEAK_FUNC(sub_8234954C);
PPC_FUNC_IMPL(__imp__sub_8234954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82349550"))) PPC_WEAK_FUNC(sub_82349550);
PPC_FUNC_IMPL(__imp__sub_82349550) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x824f91b8
	sub_824F91B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82349560"))) PPC_WEAK_FUNC(sub_82349560);
PPC_FUNC_IMPL(__imp__sub_82349560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82349564"))) PPC_WEAK_FUNC(sub_82349564);
PPC_FUNC_IMPL(__imp__sub_82349564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82349568"))) PPC_WEAK_FUNC(sub_82349568);
PPC_FUNC_IMPL(__imp__sub_82349568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-19112
	ctx.r3.s64 = ctx.r11.s64 + -19112;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82349574"))) PPC_WEAK_FUNC(sub_82349574);
PPC_FUNC_IMPL(__imp__sub_82349574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82349578"))) PPC_WEAK_FUNC(sub_82349578);
PPC_FUNC_IMPL(__imp__sub_82349578) {
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
	// bne cr6,0x823495c0
	if (!ctx.cr6.eq) goto loc_823495C0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8234959C;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x823495c0
	if (!ctx.cr0.eq) goto loc_823495C0;
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
	ctx.lr = 0x823495C0;
	sub_82240040(ctx, base);
loc_823495C0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,10668
	ctx.r11.s64 = ctx.r11.s64 + 10668;
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

__attribute__((alias("__imp__sub_823495EC"))) PPC_WEAK_FUNC(sub_823495EC);
PPC_FUNC_IMPL(__imp__sub_823495EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823495F0"))) PPC_WEAK_FUNC(sub_823495F0);
PPC_FUNC_IMPL(__imp__sub_823495F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8234961c
	if (ctx.cr0.eq) goto loc_8234961C;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// andi. r9,r9,247
	ctx.r9.u64 = ctx.r9.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// b 0x82349624
	goto loc_82349624;
loc_8234961C:
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// ori r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 8;
loc_82349624:
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1064, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82349634"))) PPC_WEAK_FUNC(sub_82349634);
PPC_FUNC_IMPL(__imp__sub_82349634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82349638"))) PPC_WEAK_FUNC(sub_82349638);
PPC_FUNC_IMPL(__imp__sub_82349638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-19060
	ctx.r3.s64 = ctx.r11.s64 + -19060;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82349644"))) PPC_WEAK_FUNC(sub_82349644);
PPC_FUNC_IMPL(__imp__sub_82349644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82349648"))) PPC_WEAK_FUNC(sub_82349648);
PPC_FUNC_IMPL(__imp__sub_82349648) {
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
	// bne cr6,0x82349690
	if (!ctx.cr6.eq) goto loc_82349690;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8234966C;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82349690
	if (!ctx.cr0.eq) goto loc_82349690;
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
	ctx.lr = 0x82349690;
	sub_82240040(ctx, base);
loc_82349690:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,10692
	ctx.r11.s64 = ctx.r11.s64 + 10692;
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

__attribute__((alias("__imp__sub_823496BC"))) PPC_WEAK_FUNC(sub_823496BC);
PPC_FUNC_IMPL(__imp__sub_823496BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823496C0"))) PPC_WEAK_FUNC(sub_823496C0);
PPC_FUNC_IMPL(__imp__sub_823496C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-19008
	ctx.r3.s64 = ctx.r11.s64 + -19008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823496CC"))) PPC_WEAK_FUNC(sub_823496CC);
PPC_FUNC_IMPL(__imp__sub_823496CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823496D0"))) PPC_WEAK_FUNC(sub_823496D0);
PPC_FUNC_IMPL(__imp__sub_823496D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x823496D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r4,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,10864
	ctx.r11.s64 = ctx.r11.s64 + 10864;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r10,10812
	ctx.r4.s64 = ctx.r10.s64 + 10812;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// bl 0x822400d8
	ctx.lr = 0x82349748;
	sub_822400D8(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x823636b0
	ctx.lr = 0x82349754;
	sub_823636B0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,15632
	ctx.r11.s64 = ctx.r11.s64 + 15632;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822402c8
	ctx.lr = 0x82349770;
	sub_822402C8(ctx, base);
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82691500
	ctx.lr = 0x82349778;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82349790
	if (ctx.cr0.eq) goto loc_82349790;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82411d98
	ctx.lr = 0x8234978C;
	sub_82411D98(ctx, base);
	// b 0x82349794
	goto loc_82349794;
loc_82349790:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82349794:
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r29,52(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,12(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r9,236(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lwz r9,52(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// lwz r9,52(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// lwz r9,52(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// lwz r9,52(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// lwz r9,52(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r8,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r8.u32);
	// stw r28,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// bl 0x822c5628
	ctx.lr = 0x8234988C;
	sub_822C5628(ctx, base);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x822c5628
	ctx.lr = 0x823498A0;
	sub_822C5628(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// bl 0x822c5628
	ctx.lr = 0x823498B0;
	sub_822C5628(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rotlwi r29,r27,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// stfs f0,368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823498e0
	if (ctx.cr6.eq) goto loc_823498E0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823498E0:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// lwz r11,30428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823498fc
	if (ctx.cr6.eq) goto loc_823498FC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82349900
	goto loc_82349900;
loc_823498FC:
	// bl 0x822599a0
	ctx.lr = 0x82349900;
	sub_822599A0(ctx, base);
loc_82349900:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82349960
	if (ctx.cr0.eq) goto loc_82349960;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,31080(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82349920
	if (!ctx.cr6.eq) goto loc_82349920;
	// bl 0x8254abe0
	ctx.lr = 0x82349920;
	sub_8254ABE0(ctx, base);
loc_82349920:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c1b0
	ctx.lr = 0x82349930;
	sub_8254C1B0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82349950
	if (ctx.cr6.eq) goto loc_82349950;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828e3618
	ctx.lr = 0x82349944;
	sub_828E3618(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82349950
	if (!ctx.cr0.eq) goto loc_82349950;
	// stw r28,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r28.u32);
loc_82349950:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82349960
	if (ctx.cr6.eq) goto loc_82349960;
	// bl 0x82241d18
	ctx.lr = 0x82349960;
	sub_82241D18(ctx, base);
loc_82349960:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r3,r29,44
	ctx.r3.s64 = ctx.r29.s64 + 44;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234997c
	if (ctx.cr6.eq) goto loc_8234997C;
	// lwz r5,48(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x822bc5a8
	ctx.lr = 0x8234997C;
	sub_822BC5A8(ctx, base);
loc_8234997C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,11080
	ctx.r11.s64 = ctx.r11.s64 + 11080;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8226d8e8
	ctx.lr = 0x82349998;
	sub_8226D8E8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8226eed0
	ctx.lr = 0x823499A0;
	sub_8226EED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823499AC"))) PPC_WEAK_FUNC(sub_823499AC);
PPC_FUNC_IMPL(__imp__sub_823499AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823499B0"))) PPC_WEAK_FUNC(sub_823499B0);
PPC_FUNC_IMPL(__imp__sub_823499B0) {
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
	// bl 0x82349a00
	ctx.lr = 0x823499D0;
	sub_82349A00(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823499e0
	if (ctx.cr0.eq) goto loc_823499E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x823499E0;
	sub_82691540(ctx, base);
loc_823499E0:
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

__attribute__((alias("__imp__sub_823499FC"))) PPC_WEAK_FUNC(sub_823499FC);
PPC_FUNC_IMPL(__imp__sub_823499FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82349A00"))) PPC_WEAK_FUNC(sub_82349A00);
PPC_FUNC_IMPL(__imp__sub_82349A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82349A08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,10864
	ctx.r11.s64 = ctx.r11.s64 + 10864;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x82349A20;
	sub_8226C3F0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x82349A2C;
	sub_8226C3F0(ctx, base);
	// lis r30,-31957
	ctx.r30.s64 = -2094333952;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lwz r11,21068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21068);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82349a4c
	if (!ctx.cr6.eq) goto loc_82349A4C;
	// bl 0x822e58d0
	ctx.lr = 0x82349A48;
	sub_822E58D0(ctx, base);
	// lwz r11,21068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21068);
loc_82349A4C:
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82349a68
	if (ctx.cr6.eq) goto loc_82349A68;
	// bl 0x822e89b8
	ctx.lr = 0x82349A64;
	sub_822E89B8(ctx, base);
	// stw r6,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r6.u32);
loc_82349A68:
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82349a7c
	if (ctx.cr6.eq) goto loc_82349A7C;
	// bl 0x822e8a40
	ctx.lr = 0x82349A78;
	sub_822E8A40(ctx, base);
	// stw r6,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r6.u32);
loc_82349A7C:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82349aa8
	goto loc_82349AA8;
loc_82349A84:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82349aa4
	if (ctx.cr6.eq) goto loc_82349AA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349AA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82349AA4:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82349AA8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82349a84
	if (ctx.cr6.lt) goto loc_82349A84;
	// lwz r28,32(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x82349b30
	goto loc_82349B30;
loc_82349AC0:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82349af4
	goto loc_82349AF4;
loc_82349ACC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82349aec
	if (ctx.cr6.eq) goto loc_82349AEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82349AEC:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82349AF4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82349acc
	if (ctx.cr6.lt) goto loc_82349ACC;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82349b2c
	if (ctx.cr0.eq) goto loc_82349B2C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82349b18
	if (ctx.cr6.eq) goto loc_82349B18;
	// bl 0x82691540
	ctx.lr = 0x82349B18;
	sub_82691540(ctx, base);
loc_82349B18:
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// bl 0x82691540
	ctx.lr = 0x82349B2C;
	sub_82691540(ctx, base);
loc_82349B2C:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_82349B30:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82349ac0
	if (ctx.cr6.lt) goto loc_82349AC0;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82349b4c
	if (ctx.cr6.eq) goto loc_82349B4C;
	// stw r27,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r27.u32);
loc_82349B4C:
	// addi r30,r31,280
	ctx.r30.s64 = ctx.r31.s64 + 280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822c5628
	ctx.lr = 0x82349B60;
	sub_822C5628(ctx, base);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822c5628
	ctx.lr = 0x82349B70;
	sub_822C5628(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c5628
	ctx.lr = 0x82349B80;
	sub_822C5628(ctx, base);
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82349ba0
	if (ctx.cr6.eq) goto loc_82349BA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82349BA0:
	// lwz r30,140(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82349bbc
	if (ctx.cr6.eq) goto loc_82349BBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824120c0
	ctx.lr = 0x82349BB4;
	sub_824120C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x82349BBC;
	sub_82691540(ctx, base);
loc_82349BBC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r11,r11,15632
	ctx.r11.s64 = ctx.r11.s64 + 15632;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x8243ca58
	ctx.lr = 0x82349BD0;
	sub_8243CA58(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82507f48
	ctx.lr = 0x82349BD8;
	sub_82507F48(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82349be8
	if (ctx.cr6.eq) goto loc_82349BE8;
	// bl 0x82691540
	ctx.lr = 0x82349BE8;
	sub_82691540(ctx, base);
loc_82349BE8:
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82349c04
	if (ctx.cr6.eq) goto loc_82349C04;
	// bl 0x82691540
	ctx.lr = 0x82349C04;
	sub_82691540(ctx, base);
loc_82349C04:
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82349C18"))) PPC_WEAK_FUNC(sub_82349C18);
PPC_FUNC_IMPL(__imp__sub_82349C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82349C20;
	__savegprlr_17(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82349ca0
	if (!ctx.cr0.gt) goto loc_82349CA0;
	// addi r30,r4,36
	ctx.r30.s64 = ctx.r4.s64 + 36;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
loc_82349C54:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234b5f0
	ctx.lr = 0x82349C80;
	sub_8234B5F0(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82349c54
	if (ctx.cr6.lt) goto loc_82349C54;
loc_82349CA0:
	// bl 0x8226d8e8
	ctx.lr = 0x82349CA4;
	sub_8226D8E8(ctx, base);
	// stw r24,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r24.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r17,40
	ctx.r5.s64 = ctx.r17.s64 + 40;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8234a00c
	if (ctx.cr6.eq) goto loc_8234A00C;
	// lis r19,-31957
	ctx.r19.s64 = -2094333952;
	// lis r18,-31955
	ctx.r18.s64 = -2094202880;
loc_82349CFC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82349ff8
	if (ctx.cr6.eq) goto loc_82349FF8;
	// lwz r11,30428(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 30428);
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r29,4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82349d24
	if (!ctx.cr6.eq) goto loc_82349D24;
	// bl 0x822599a0
	ctx.lr = 0x82349D20;
	sub_822599A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82349D24:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82349d58
	if (ctx.cr0.eq) goto loc_82349D58;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x828e3618
	ctx.lr = 0x82349D38;
	sub_828E3618(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82349d4c
	if (ctx.cr0.eq) goto loc_82349D4C;
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82349d58
	goto loc_82349D58;
loc_82349D4C:
	// neg r11,r29
	ctx.r11.s64 = -ctx.r29.s64;
	// andc r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r29.u64;
	// rlwinm r31,r11,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_82349D58:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bl 0x82546708
	ctx.lr = 0x82349D6C;
	sub_82546708(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82349d94
	if (ctx.cr0.eq) goto loc_82349D94;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82546b30
	ctx.lr = 0x82349D7C;
	sub_82546B30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82691580
	ctx.lr = 0x82349D84;
	sub_82691580(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a75198
	ctx.lr = 0x82349D94;
	sub_82A75198(ctx, base);
loc_82349D94:
	// bl 0x8226c3f0
	ctx.lr = 0x82349D98;
	sub_8226C3F0(ctx, base);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82349db8
	if (!ctx.cr6.eq) goto loc_82349DB8;
	// bl 0x8226c3f0
	ctx.lr = 0x82349DA8;
	sub_8226C3F0(ctx, base);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x82349dbc
	if (!ctx.cr6.lt) goto loc_82349DBC;
loc_82349DB8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82349DBC:
	// clrlwi. r27,r31,24
	ctx.r27.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82349de8
	if (ctx.cr0.eq) goto loc_82349DE8;
	// stw r20,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r20.u32);
	// bne cr6,0x82349e04
	if (!ctx.cr6.eq) goto loc_82349E04;
	// addi r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 1;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r20,r10,r11
	ctx.r20.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82349e04
	goto loc_82349E04;
loc_82349DE8:
	// stw r21,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r21.u32);
	// bne cr6,0x82349e04
	if (!ctx.cr6.eq) goto loc_82349E04;
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r21,r10,r11
	ctx.r21.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82349E04:
	// lwz r3,21068(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21068);
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82349e1c
	if (!ctx.cr6.eq) goto loc_82349E1C;
	// bl 0x822e58d0
	ctx.lr = 0x82349E18;
	sub_822E58D0(ctx, base);
	// lwz r3,21068(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21068);
loc_82349E1C:
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x822e6150
	ctx.lr = 0x82349E24;
	sub_822E6150(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82349e3c
	if (!ctx.cr6.eq) goto loc_82349E3C;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_82349E3C:
	// bl 0x822a4650
	ctx.lr = 0x82349E40;
	sub_822A4650(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822400d8
	ctx.lr = 0x82349E50;
	sub_822400D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82262678
	ctx.lr = 0x82349E60;
	sub_82262678(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822402c8
	ctx.lr = 0x82349E70;
	sub_822402C8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82349ea8
	if (ctx.cr6.eq) goto loc_82349EA8;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82349ea8
	if (!ctx.cr6.eq) goto loc_82349EA8;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82349eac
	goto loc_82349EAC;
loc_82349EA8:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82349EAC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82349ef8
	if (ctx.cr6.eq) goto loc_82349EF8;
	// bl 0x8226d8e8
	ctx.lr = 0x82349EBC;
	sub_8226D8E8(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82349ef0
	if (!ctx.cr6.lt) goto loc_82349EF0;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// b 0x82349ef4
	goto loc_82349EF4;
loc_82349EF0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82349EF4:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_82349EF8:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x8234a03c
	if (!ctx.cr6.gt) goto loc_8234A03C;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8234b5f0
	ctx.lr = 0x82349F20;
	sub_8234B5F0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82349f34
	if (ctx.cr6.eq) goto loc_82349F34;
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
loc_82349F34:
	// stw r23,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r23.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r29,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82349fd0
	if (ctx.cr6.eq) goto loc_82349FD0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82349fa8
	if (ctx.cr6.eq) goto loc_82349FA8;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82349fa8
	if (!ctx.cr6.eq) goto loc_82349FA8;
	// lwz r10,556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// addi r31,r11,556
	ctx.r31.s64 = ctx.r11.s64 + 556;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82349fa0
	if (ctx.cr6.eq) goto loc_82349FA0;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r29,r11,32
	ctx.r29.s64 = ctx.r11.s64 + 32;
	// bl 0x822a4288
	ctx.lr = 0x82349F8C;
	sub_822A4288(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8257e800
	ctx.lr = 0x82349F98;
	sub_8257E800(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82349FA0:
	// li r22,1
	ctx.r22.s64 = 1;
	// b 0x82349fc4
	goto loc_82349FC4;
loc_82349FA8:
	// lwz r10,556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// addi r31,r11,556
	ctx.r31.s64 = ctx.r11.s64 + 556;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82349fc4
	if (ctx.cr6.eq) goto loc_82349FC4;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8257e8d8
	ctx.lr = 0x82349FC0;
	sub_8257E8D8(ctx, base);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_82349FC4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r28,48
	ctx.r3.s64 = ctx.r28.s64 + 48;
	// bl 0x8234fa10
	ctx.lr = 0x82349FD0;
	sub_8234FA10(ctx, base);
loc_82349FD0:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82349fe0
	if (ctx.cr6.eq) goto loc_82349FE0;
	// bl 0x82241d18
	ctx.lr = 0x82349FE0;
	sub_82241D18(ctx, base);
loc_82349FE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826915c0
	ctx.lr = 0x82349FE8;
	sub_826915C0(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82349ff8
	if (ctx.cr6.eq) goto loc_82349FF8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x82349FF8;
	sub_825469E0(ctx, base);
loc_82349FF8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82349cfc
	if (!ctx.cr6.eq) goto loc_82349CFC;
loc_8234A00C:
	// lwz r31,48(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8234a06c
	if (ctx.cr6.eq) goto loc_8234A06C;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r30,r11,24448
	ctx.r30.s64 = ctx.r11.s64 + 24448;
loc_8234A024:
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234a048
	if (ctx.cr6.eq) goto loc_8234A048;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8234a04c
	goto loc_8234A04C;
loc_8234A03C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,10832
	ctx.r3.s64 = ctx.r11.s64 + 10832;
	// bl 0x82fa0680
	ctx.lr = 0x8234A048;
	sub_82FA0680(ctx, base);
loc_8234A048:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8234A04C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234A05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8234a024
	if (!ctx.cr6.eq) goto loc_8234A024;
loc_8234A06C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234A088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r28,212
	ctx.r31.s64 = ctx.r28.s64 + 212;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8234a0c8
	if (ctx.cr6.eq) goto loc_8234A0C8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8234a0c8
	if (ctx.cr6.eq) goto loc_8234A0C8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234a0c4
	if (ctx.cr6.eq) goto loc_8234A0C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234A0C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234A0C4:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8234A0C8:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234a0e8
	if (ctx.cr6.eq) goto loc_8234A0E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234A0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234A0E8:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234a0f8
	if (ctx.cr6.eq) goto loc_8234A0F8;
	// bl 0x82691540
	ctx.lr = 0x8234A0F8;
	sub_82691540(ctx, base);
loc_8234A0F8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234A100"))) PPC_WEAK_FUNC(sub_8234A100);
PPC_FUNC_IMPL(__imp__sub_8234A100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8234A108;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82691500
	ctx.lr = 0x8234A120;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x8234a140
	if (ctx.cr0.eq) goto loc_8234A140;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// b 0x8234a144
	goto loc_8234A144;
loc_8234A140:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8234A144:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82546708
	ctx.lr = 0x8234A158;
	sub_82546708(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8234a180
	if (ctx.cr0.eq) goto loc_8234A180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82546b30
	ctx.lr = 0x8234A168;
	sub_82546B30(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82691580
	ctx.lr = 0x8234A170;
	sub_82691580(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a75198
	ctx.lr = 0x8234A180;
	sub_82A75198(ctx, base);
loc_8234A180:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// bl 0x8234b5f0
	ctx.lr = 0x8234A1A4;
	sub_8234B5F0(ctx, base);
	// bl 0x8234bb18
	ctx.lr = 0x8234A1A8;
	sub_8234BB18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8245f708
	ctx.lr = 0x8234A1B0;
	sub_8245F708(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826915c0
	ctx.lr = 0x8234A1BC;
	sub_826915C0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234a1cc
	if (ctx.cr6.eq) goto loc_8234A1CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825469e0
	ctx.lr = 0x8234A1CC;
	sub_825469E0(ctx, base);
loc_8234A1CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234A1D8"))) PPC_WEAK_FUNC(sub_8234A1D8);
PPC_FUNC_IMPL(__imp__sub_8234A1D8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8234a1f4
	if (ctx.cr6.eq) goto loc_8234A1F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8234a274
	goto loc_8234A274;
loc_8234A1F4:
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234a270
	if (ctx.cr6.eq) goto loc_8234A270;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234a214
	if (!ctx.cr6.eq) goto loc_8234A214;
	// bl 0x822599a0
	ctx.lr = 0x8234A214;
	sub_822599A0(ctx, base);
loc_8234A214:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8234a270
	if (!ctx.cr0.eq) goto loc_8234A270;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234a244
	if (ctx.cr6.eq) goto loc_8234A244;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234A240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8234a248
	goto loc_8234A248;
loc_8234A244:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234A248:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234a270
	if (ctx.cr6.eq) goto loc_8234A270;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,25048
	ctx.r11.s64 = ctx.r11.s64 + 25048;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8234a274
	if (ctx.cr6.eq) goto loc_8234A274;
loc_8234A270:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234A274:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234A284"))) PPC_WEAK_FUNC(sub_8234A284);
PPC_FUNC_IMPL(__imp__sub_8234A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234A288"))) PPC_WEAK_FUNC(sub_8234A288);
PPC_FUNC_IMPL(__imp__sub_8234A288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,32570
	ctx.r3.s64 = ctx.r11.s64 + 32570;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234A294"))) PPC_WEAK_FUNC(sub_8234A294);
PPC_FUNC_IMPL(__imp__sub_8234A294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234A298"))) PPC_WEAK_FUNC(sub_8234A298);
PPC_FUNC_IMPL(__imp__sub_8234A298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8234A2A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234A2C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234A2D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8226c3f0
	ctx.lr = 0x8234A2DC;
	sub_8226C3F0(ctx, base);
	// lis r28,-31957
	ctx.r28.s64 = -2094333952;
	// stw r27,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r27.u32);
	// lwz r11,21068(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21068);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234a2f8
	if (!ctx.cr6.eq) goto loc_8234A2F8;
	// bl 0x822e58d0
	ctx.lr = 0x8234A2F4;
	sub_822E58D0(ctx, base);
	// lwz r11,21068(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21068);
loc_8234A2F8:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r8,212(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// lwz r7,216(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r29,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r29.u32);
	// stw r30,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r30.u32);
	// stw r8,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r8.u32);
	// stw r7,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r7.u32);
	// stw r9,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r9.u32);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8234a33c
	if (ctx.cr6.eq) goto loc_8234A33C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
loc_8234A33C:
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234A348"))) PPC_WEAK_FUNC(sub_8234A348);
PPC_FUNC_IMPL(__imp__sub_8234A348) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234a390
	if (ctx.cr6.eq) goto loc_8234A390;
	// lwz r10,220(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x8234a394
	if (ctx.cr6.eq) goto loc_8234A394;
loc_8234A390:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8234A394:
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234a3b0
	if (!ctx.cr6.eq) goto loc_8234A3B0;
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x8234a3b4
	if (!ctx.cr6.eq) goto loc_8234A3B4;
loc_8234A3B0:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8234A3B4:
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r8,232(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r7,236(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// and. r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// beq 0x8234a41c
	if (ctx.cr0.eq) goto loc_8234A41C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234A3F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234a41c
	if (ctx.cr0.eq) goto loc_8234A41C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234A418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
loc_8234A41C:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r9,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r9.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r8,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r8.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// beq cr6,0x8234a468
	if (ctx.cr6.eq) goto loc_8234A468;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234A468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234A468:
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8234b780
	ctx.lr = 0x8234A474;
	sub_8234B780(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234a4b4
	if (ctx.cr6.eq) goto loc_8234A4B4;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234a498
	if (ctx.cr6.eq) goto loc_8234A498;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8234a4b4
	if (ctx.cr6.eq) goto loc_8234A4B4;
loc_8234A498:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234A4AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r3,1292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1292, ctx.r3.u32);
loc_8234A4B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8234A4D4"))) PPC_WEAK_FUNC(sub_8234A4D4);
PPC_FUNC_IMPL(__imp__sub_8234A4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234A4D8"))) PPC_WEAK_FUNC(sub_8234A4D8);
PPC_FUNC_IMPL(__imp__sub_8234A4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8234A4E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8234a570
	if (ctx.cr6.eq) goto loc_8234A570;
	// lis r27,-31955
	ctx.r27.s64 = -2094202880;
loc_8234A4FC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,30428(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r29,44(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// bne cr6,0x8234a520
	if (!ctx.cr6.eq) goto loc_8234A520;
	// bl 0x822599a0
	ctx.lr = 0x8234A51C;
	sub_822599A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8234A520:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8234a554
	if (ctx.cr0.eq) goto loc_8234A554;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x828e3618
	ctx.lr = 0x8234A534;
	sub_828E3618(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234a548
	if (ctx.cr0.eq) goto loc_8234A548;
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8234a554
	goto loc_8234A554;
loc_8234A548:
	// neg r11,r29
	ctx.r11.s64 = -ctx.r29.s64;
	// andc r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r29.u64;
	// rlwinm r30,r11,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_8234A554:
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8235c6b8
	ctx.lr = 0x8234A560;
	sub_8235C6B8(ctx, base);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8234a4fc
	if (!ctx.cr6.eq) goto loc_8234A4FC;
loc_8234A570:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234A578"))) PPC_WEAK_FUNC(sub_8234A578);
PPC_FUNC_IMPL(__imp__sub_8234A578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8234A580;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8234b1b8
	ctx.lr = 0x8234A594;
	sub_8234B1B8(ctx, base);
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82412318
	ctx.lr = 0x8234A5A0;
	sub_82412318(ctx, base);
	// lwz r29,32(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r27,36(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// b 0x8234a5e4
	goto loc_8234A5E4;
loc_8234A5AC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8234a5d8
	goto loc_8234A5D8;
loc_8234A5BC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234A5D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8234A5D8:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8234a5bc
	if (ctx.cr6.lt) goto loc_8234A5BC;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8234A5E4:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8234a5ac
	if (ctx.cr6.lt) goto loc_8234A5AC;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// b 0x8234a610
	goto loc_8234A610;
loc_8234A5F8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234A60C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8234A610:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// blt cr6,0x8234a5f8
	if (ctx.cr6.lt) goto loc_8234A5F8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234A630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234A63C"))) PPC_WEAK_FUNC(sub_8234A63C);
PPC_FUNC_IMPL(__imp__sub_8234A63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234A640"))) PPC_WEAK_FUNC(sub_8234A640);
PPC_FUNC_IMPL(__imp__sub_8234A640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8234A648;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,82
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 82, ctx.xer);
	// beq cr6,0x8234a68c
	if (ctx.cr6.eq) goto loc_8234A68C;
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// bne cr6,0x8234a6c8
	if (!ctx.cr6.eq) goto loc_8234A6C8;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x8234a67c
	goto loc_8234A67C;
loc_8234A66C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,560(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// bl 0x8235c6b8
	ctx.lr = 0x8234A678;
	sub_8235C6B8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_8234A67C:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8234a66c
	if (!ctx.cr6.eq) goto loc_8234A66C;
	// b 0x8234a6c8
	goto loc_8234A6C8;
loc_8234A68C:
	// lwz r31,48(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// b 0x8234a6bc
	goto loc_8234A6BC;
loc_8234A694:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,556(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,560(r29)
	PPC_STORE_U32(ctx.r29.u32 + 560, ctx.r11.u32);
	// beq cr6,0x8234a6b8
	if (ctx.cr6.eq) goto loc_8234A6B8;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x8257e8d8
	ctx.lr = 0x8234A6B0;
	sub_8257E8D8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,556(r29)
	PPC_STORE_U32(ctx.r29.u32 + 556, ctx.r11.u32);
loc_8234A6B8:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_8234A6BC:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8234a694
	if (!ctx.cr6.eq) goto loc_8234A694;
loc_8234A6C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234A6D0"))) PPC_WEAK_FUNC(sub_8234A6D0);
PPC_FUNC_IMPL(__imp__sub_8234A6D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x824fdb18
	sub_824FDB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234A6D8"))) PPC_WEAK_FUNC(sub_8234A6D8);
PPC_FUNC_IMPL(__imp__sub_8234A6D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234A6E0"))) PPC_WEAK_FUNC(sub_8234A6E0);
PPC_FUNC_IMPL(__imp__sub_8234A6E0) {
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
	// bl 0x823090c8
	ctx.lr = 0x8234A6F8;
	sub_823090C8(ctx, base);
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

__attribute__((alias("__imp__sub_8234A710"))) PPC_WEAK_FUNC(sub_8234A710);
PPC_FUNC_IMPL(__imp__sub_8234A710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8234A718;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x8234A730;
	sub_82546708(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82546b30
	ctx.lr = 0x8234A740;
	sub_82546B30(ctx, base);
	// li r28,136
	ctx.r28.s64 = 136;
	// divwu. r11,r3,r28
	ctx.r11.u32 = ctx.r3.u32 / ctx.r28.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234a78c
	if (ctx.cr0.eq) goto loc_8234A78C;
loc_8234A74C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234a770
	if (ctx.cr6.eq) goto loc_8234A770;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82385da0
	ctx.lr = 0x8234A770;
	sub_82385DA0(ctx, base);
loc_8234A770:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,136
	ctx.r31.s64 = ctx.r31.s64 + 136;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x82546b30
	ctx.lr = 0x8234A780;
	sub_82546B30(ctx, base);
	// divwu r11,r3,r28
	ctx.r11.u32 = ctx.r3.u32 / ctx.r28.u32;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8234a74c
	if (ctx.cr6.lt) goto loc_8234A74C;
loc_8234A78C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234a79c
	if (ctx.cr6.eq) goto loc_8234A79C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825469e0
	ctx.lr = 0x8234A79C;
	sub_825469E0(ctx, base);
loc_8234A79C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234A7A4"))) PPC_WEAK_FUNC(sub_8234A7A4);
PPC_FUNC_IMPL(__imp__sub_8234A7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234A7A8"))) PPC_WEAK_FUNC(sub_8234A7A8);
PPC_FUNC_IMPL(__imp__sub_8234A7A8) {
	PPC_FUNC_PROLOGUE();
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234A7C0"))) PPC_WEAK_FUNC(sub_8234A7C0);
PPC_FUNC_IMPL(__imp__sub_8234A7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8234A7C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,32(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r28,36(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x8234a828
	goto loc_8234A828;
loc_8234A7DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8234a81c
	goto loc_8234A81C;
loc_8234A7EC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234a818
	if (ctx.cr6.eq) goto loc_8234A818;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234a838
	if (ctx.cr6.eq) goto loc_8234A838;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234A818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234A818:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8234A81C:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8234a7ec
	if (ctx.cr6.lt) goto loc_8234A7EC;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8234A828:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8234a7dc
	if (ctx.cr6.lt) goto loc_8234A7DC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_8234A838:
	// bl 0x82fa1518
	ctx.lr = 0x8234A83C;
	sub_82FA1518(ctx, base);
}

__attribute__((alias("__imp__sub_8234A83C"))) PPC_WEAK_FUNC(sub_8234A83C);
PPC_FUNC_IMPL(__imp__sub_8234A83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234A840"))) PPC_WEAK_FUNC(sub_8234A840);
PPC_FUNC_IMPL(__imp__sub_8234A840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x8234A848;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r30,32(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r26,36(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// b 0x8234a8d4
	goto loc_8234A8D4;
loc_8234A86C:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bge cr6,0x8234a8dc
	if (!ctx.cr6.lt) goto loc_8234A8DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x8234a8d0
	if (!ctx.cr6.lt) goto loc_8234A8D0;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_8234A898:
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8234a8c4
	if (ctx.cr6.eq) goto loc_8234A8C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a4538
	ctx.lr = 0x8234A8AC;
	sub_822A4538(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234a8c4
	if (ctx.cr0.eq) goto loc_8234A8C4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r29,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r28.u32 = ea;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// beq cr6,0x8234a8d0
	if (ctx.cr6.eq) goto loc_8234A8D0;
loc_8234A8C4:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8234a898
	if (ctx.cr6.lt) goto loc_8234A898;
loc_8234A8D0:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8234A8D4:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8234a86c
	if (ctx.cr6.lt) goto loc_8234A86C;
loc_8234A8DC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234A8F8"))) PPC_WEAK_FUNC(sub_8234A8F8);
PPC_FUNC_IMPL(__imp__sub_8234A8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x8234A900;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r24,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r24.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// stw r24,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r24.u32);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8234aa08
	if (!ctx.cr0.gt) goto loc_8234AA08;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_8234A940:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lwzx r30,r28,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8234a9e4
	if (!ctx.cr6.gt) goto loc_8234A9E4;
loc_8234A968:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824fa600
	ctx.lr = 0x8234A970;
	sub_824FA600(ctx, base);
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234a9c4
	if (ctx.cr6.eq) goto loc_8234A9C4;
	// lwz r3,360(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234a998
	if (ctx.cr6.eq) goto loc_8234A998;
	// bl 0x828c11f8
	ctx.lr = 0x8234A990;
	sub_828C11F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x8234a99c
	goto loc_8234A99C;
loc_8234A998:
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
loc_8234A99C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234a9c4
	if (ctx.cr6.eq) goto loc_8234A9C4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234a9bc
	if (!ctx.cr6.eq) goto loc_8234A9BC;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x8234a9c4
	goto loc_8234A9C4;
loc_8234A9BC:
	// stw r31,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// li r23,2
	ctx.r23.s64 = 2;
loc_8234A9C4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8234a968
	if (ctx.cr6.lt) goto loc_8234A968;
loc_8234A9E4:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8234a940
	if (ctx.cr6.lt) goto loc_8234A940;
loc_8234AA08:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234AA14"))) PPC_WEAK_FUNC(sub_8234AA14);
PPC_FUNC_IMPL(__imp__sub_8234AA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234AA18"))) PPC_WEAK_FUNC(sub_8234AA18);
PPC_FUNC_IMPL(__imp__sub_8234AA18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8234AA58"))) PPC_WEAK_FUNC(sub_8234AA58);
PPC_FUNC_IMPL(__imp__sub_8234AA58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234AA5C"))) PPC_WEAK_FUNC(sub_8234AA5C);
PPC_FUNC_IMPL(__imp__sub_8234AA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234AA60"))) PPC_WEAK_FUNC(sub_8234AA60);
PPC_FUNC_IMPL(__imp__sub_8234AA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8234AA68;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234aaac
	if (ctx.cr6.eq) goto loc_8234AAAC;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8259c8e0
	ctx.lr = 0x8234AAA4;
	sub_8259C8E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8234aaec
	if (!ctx.cr0.eq) goto loc_8234AAEC;
loc_8234AAAC:
	// lwz r3,156(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234aad8
	if (ctx.cr6.eq) goto loc_8234AAD8;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8259c8e0
	ctx.lr = 0x8234AAD0;
	sub_8259C8E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8234aaec
	if (!ctx.cr0.eq) goto loc_8234AAEC;
loc_8234AAD8:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,31944
	ctx.r5.s64 = ctx.r11.s64 + 31944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82563c28
	ctx.lr = 0x8234AAEC;
	sub_82563C28(ctx, base);
loc_8234AAEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234AAF8"))) PPC_WEAK_FUNC(sub_8234AAF8);
PPC_FUNC_IMPL(__imp__sub_8234AAF8) {
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
	// lwz r31,148(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8234ab54
	if (ctx.cr6.eq) goto loc_8234AB54;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r5,48(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822ec5a0
	ctx.lr = 0x8234AB2C;
	sub_822EC5A0(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234ab4c
	if (ctx.cr6.eq) goto loc_8234AB4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234AB4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234AB4C:
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// b 0x8234ab74
	goto loc_8234AB74;
loc_8234AB54:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234ab74
	if (ctx.cr6.eq) goto loc_8234AB74;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234AB74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234AB74:
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

__attribute__((alias("__imp__sub_8234AB8C"))) PPC_WEAK_FUNC(sub_8234AB8C);
PPC_FUNC_IMPL(__imp__sub_8234AB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234AB90"))) PPC_WEAK_FUNC(sub_8234AB90);
PPC_FUNC_IMPL(__imp__sub_8234AB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8234AB98;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8234ABD0;
	sub_82FA7CF0(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234ac64
	if (ctx.cr6.eq) goto loc_8234AC64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8234ac64
	if (!ctx.cr6.eq) goto loc_8234AC64;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234ac64
	if (!ctx.cr6.eq) goto loc_8234AC64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234AC10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8234ac34
	if (ctx.cr0.eq) goto loc_8234AC34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234AC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8234ac64
	goto loc_8234AC64;
loc_8234AC34:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234ac64
	if (ctx.cr6.eq) goto loc_8234AC64;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234ac64
	if (ctx.cr6.eq) goto loc_8234AC64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x8259c8e0
	ctx.lr = 0x8234AC64;
	sub_8259C8E0(ctx, base);
loc_8234AC64:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8253a768
	ctx.lr = 0x8234AC88;
	sub_8253A768(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234AC94"))) PPC_WEAK_FUNC(sub_8234AC94);
PPC_FUNC_IMPL(__imp__sub_8234AC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234AC98"))) PPC_WEAK_FUNC(sub_8234AC98);
PPC_FUNC_IMPL(__imp__sub_8234AC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8234ACA0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// addi r3,r1,114
	ctx.r3.s64 = ctx.r1.s64 + 114;
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8234ACD0;
	sub_82FA7CF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234ACE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8234ad0c
	if (ctx.cr0.eq) goto loc_8234AD0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234AD04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8234ad3c
	goto loc_8234AD3C;
loc_8234AD0C:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234ad3c
	if (ctx.cr6.eq) goto loc_8234AD3C;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234ad3c
	if (ctx.cr6.eq) goto loc_8234AD3C;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x8259c8e0
	ctx.lr = 0x8234AD3C;
	sub_8259C8E0(ctx, base);
loc_8234AD3C:
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8234adc0
	if (!ctx.cr6.eq) goto loc_8234ADC0;
	// addi r11,r31,336
	ctx.r11.s64 = ctx.r31.s64 + 336;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x8234ad60
	if (ctx.cr6.lt) goto loc_8234AD60;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8234ad64
	goto loc_8234AD64;
loc_8234AD60:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8234AD64:
	// lwz r9,328(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r11,r31,308
	ctx.r11.s64 = ctx.r31.s64 + 308;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x8234ad78
	if (ctx.cr6.lt) goto loc_8234AD78;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234AD78:
	// lwz r9,300(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// addi r8,r31,280
	ctx.r8.s64 = ctx.r31.s64 + 280;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x8234ad8c
	if (ctx.cr6.lt) goto loc_8234AD8C;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_8234AD8C:
	// lwz r6,212(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f3,368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f3.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f2,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f2.f64 = double(temp.f32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r4,28(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// lwz r3,24(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// bl 0x8253a9c8
	ctx.lr = 0x8234ADBC;
	sub_8253A9C8(ctx, base);
	// b 0x8234aea8
	goto loc_8234AEA8;
loc_8234ADC0:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// addi r11,r31,336
	ctx.r11.s64 = ctx.r31.s64 + 336;
	// bne cr6,0x8234ae3c
	if (!ctx.cr6.eq) goto loc_8234AE3C;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x8234addc
	if (ctx.cr6.lt) goto loc_8234ADDC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8234ade0
	goto loc_8234ADE0;
loc_8234ADDC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8234ADE0:
	// lwz r9,328(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r11,r31,308
	ctx.r11.s64 = ctx.r31.s64 + 308;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x8234adf4
	if (ctx.cr6.lt) goto loc_8234ADF4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234ADF4:
	// lwz r9,300(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// addi r8,r31,280
	ctx.r8.s64 = ctx.r31.s64 + 280;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x8234ae08
	if (ctx.cr6.lt) goto loc_8234AE08;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_8234AE08:
	// lwz r6,212(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f3,368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f3.f64 = double(temp.f32);
	// li r5,3
	ctx.r5.s64 = 3;
	// lfs f2,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f2.f64 = double(temp.f32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r4,28(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// lwz r3,24(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// bl 0x8253a9c8
	ctx.lr = 0x8234AE38;
	sub_8253A9C8(ctx, base);
	// b 0x8234aea8
	goto loc_8234AEA8;
loc_8234AE3C:
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x8234ae4c
	if (ctx.cr6.lt) goto loc_8234AE4C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8234ae50
	goto loc_8234AE50;
loc_8234AE4C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8234AE50:
	// lwz r9,328(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r11,r31,308
	ctx.r11.s64 = ctx.r31.s64 + 308;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x8234ae64
	if (ctx.cr6.lt) goto loc_8234AE64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8234AE64:
	// lwz r9,300(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// addi r8,r31,280
	ctx.r8.s64 = ctx.r31.s64 + 280;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x8234ae78
	if (ctx.cr6.lt) goto loc_8234AE78;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_8234AE78:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f3,368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f2.f64 = double(temp.f32);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8253a9c8
	ctx.lr = 0x8234AEA8;
	sub_8253A9C8(ctx, base);
loc_8234AEA8:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234AEB4"))) PPC_WEAK_FUNC(sub_8234AEB4);
PPC_FUNC_IMPL(__imp__sub_8234AEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234AEB8"))) PPC_WEAK_FUNC(sub_8234AEB8);
PPC_FUNC_IMPL(__imp__sub_8234AEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8234AEC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234afec
	if (ctx.cr6.eq) goto loc_8234AFEC;
	// lfs f0,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f11,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stfs f12,196(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// lfs f13,31512(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31512);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// lfd f0,248(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 248);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsub f12,f11,f0
	ctx.f12.f64 = ctx.f11.f64 - ctx.f0.f64;
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fctid f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f12.f64));
	// fctid f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8234afbc
	if (ctx.cr6.lt) goto loc_8234AFBC;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bgt cr6,0x8234afe4
	if (ctx.cr6.gt) goto loc_8234AFE4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8234afe4
	if (!ctx.cr6.lt) goto loc_8234AFE4;
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8234afe4
	if (ctx.cr6.eq) goto loc_8234AFE4;
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-18956
	ctx.r10.s64 = ctx.r10.s64 + -18956;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r3,r9,10796
	ctx.r3.s64 = ctx.r9.s64 + 10796;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82570100
	ctx.lr = 0x8234AF88;
	sub_82570100(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r11,26796
	ctx.r6.s64 = ctx.r11.s64 + 26796;
	// addi r5,r9,26780
	ctx.r5.s64 = ctx.r9.s64 + 26780;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8256f138
	ctx.lr = 0x8234AFAC;
	sub_8256F138(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570318
	ctx.lr = 0x8234AFB8;
	sub_82570318(ctx, base);
	// b 0x8234afe4
	goto loc_8234AFE4;
loc_8234AFBC:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8234afe4
	if (!ctx.cr6.lt) goto loc_8234AFE4;
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8234afe4
	if (ctx.cr6.eq) goto loc_8234AFE4;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8234afe4
	if (!ctx.cr6.eq) goto loc_8234AFE4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
loc_8234AFE4:
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
loc_8234AFEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234AFF4"))) PPC_WEAK_FUNC(sub_8234AFF4);
PPC_FUNC_IMPL(__imp__sub_8234AFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234AFF8"))) PPC_WEAK_FUNC(sub_8234AFF8);
PPC_FUNC_IMPL(__imp__sub_8234AFF8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234b0a4
	if (ctx.cr6.eq) goto loc_8234B0A4;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8234b0a4
	if (!ctx.cr0.gt) goto loc_8234B0A4;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8234B038:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8234b084
	if (ctx.cr6.eq) goto loc_8234B084;
loc_8234B05C:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x824fa600
	ctx.lr = 0x8234B064;
	sub_824FA600(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234b078
	if (ctx.cr6.eq) goto loc_8234B078;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8234b0a8
	if (ctx.cr6.eq) goto loc_8234B0A8;
loc_8234B078:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8234b05c
	if (ctx.cr6.lt) goto loc_8234B05C;
loc_8234B084:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234b038
	if (ctx.cr6.lt) goto loc_8234B038;
loc_8234B0A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234B0A8:
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

__attribute__((alias("__imp__sub_8234B0C0"))) PPC_WEAK_FUNC(sub_8234B0C0);
PPC_FUNC_IMPL(__imp__sub_8234B0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8234B0C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8234b114
	if (ctx.cr6.eq) goto loc_8234B114;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x8234B0F4;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234b114
	if (ctx.cr0.eq) goto loc_8234B114;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234b10c
	if (ctx.cr6.eq) goto loc_8234B10C;
	// bl 0x82241d18
	ctx.lr = 0x8234B10C;
	sub_82241D18(ctx, base);
loc_8234B10C:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_8234B114:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234B12C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234B134"))) PPC_WEAK_FUNC(sub_8234B134);
PPC_FUNC_IMPL(__imp__sub_8234B134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234B138"))) PPC_WEAK_FUNC(sub_8234B138);
PPC_FUNC_IMPL(__imp__sub_8234B138) {
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
	// addi r31,r3,64
	ctx.r31.s64 = ctx.r3.s64 + 64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x822c2b90
	ctx.lr = 0x8234B168;
	sub_822C2B90(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234b190
	if (ctx.cr6.eq) goto loc_8234B190;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234B18C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8234b194
	goto loc_8234B194;
loc_8234B190:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8234B194:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234b1a0
	if (ctx.cr0.eq) goto loc_8234B1A0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_8234B1A0:
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

__attribute__((alias("__imp__sub_8234B1B8"))) PPC_WEAK_FUNC(sub_8234B1B8);
PPC_FUNC_IMPL(__imp__sub_8234B1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8234B1C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r11,30428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234b1e4
	if (!ctx.cr6.eq) goto loc_8234B1E4;
	// bl 0x822599a0
	ctx.lr = 0x8234B1E0;
	sub_822599A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8234B1E4:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8234b340
	if (ctx.cr0.eq) goto loc_8234B340;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234b2b0
	if (!ctx.cr6.eq) goto loc_8234B2B0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x828e3618
	ctx.lr = 0x8234B204;
	sub_828E3618(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x828e3b10
	ctx.lr = 0x8234B214;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234b348
	if (ctx.cr0.eq) goto loc_8234B348;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8234b260
	if (ctx.cr0.eq) goto loc_8234B260;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234B23C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234B254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c5840
	ctx.lr = 0x8234B25C;
	sub_828C5840(ctx, base);
	// b 0x8234b2b0
	goto loc_8234B2B0;
loc_8234B260:
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234B270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d6418
	ctx.lr = 0x8234B27C;
	sub_828D6418(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828c4cb0
	ctx.lr = 0x8234B284;
	sub_828C4CB0(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8234b348
	if (ctx.cr6.eq) goto loc_8234B348;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// stw r31,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234B2B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234B2B0:
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// b 0x8234b318
	goto loc_8234B318;
loc_8234B2B8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8234b2f8
	goto loc_8234B2F8;
loc_8234B2C4:
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234b308
	if (ctx.cr6.eq) goto loc_8234B308;
	// bl 0x828c11f8
	ctx.lr = 0x8234B2D8;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234b2f0
	if (ctx.cr0.eq) goto loc_8234B2F0;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x828c2c58
	ctx.lr = 0x8234B2E8;
	sub_828C2C58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234b308
	if (ctx.cr0.eq) goto loc_8234B308;
loc_8234B2F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8234B2F8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8234b2c4
	if (!ctx.cr6.eq) goto loc_8234B2C4;
	// b 0x8234b30c
	goto loc_8234B30C;
loc_8234B308:
	// li r27,0
	ctx.r27.s64 = 0;
loc_8234B30C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8234b348
	if (ctx.cr6.eq) goto loc_8234B348;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8234B318:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8234b2b8
	if (!ctx.cr6.eq) goto loc_8234B2B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234B338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234b348
	if (ctx.cr0.eq) goto loc_8234B348;
loc_8234B340:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_8234B348:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234B350"))) PPC_WEAK_FUNC(sub_8234B350);
PPC_FUNC_IMPL(__imp__sub_8234B350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8234B358;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8234b3d4
	if (ctx.cr6.eq) goto loc_8234B3D4;
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// lwz r11,21068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21068);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234b388
	if (!ctx.cr6.eq) goto loc_8234B388;
	// bl 0x822e58d0
	ctx.lr = 0x8234B384;
	sub_822E58D0(ctx, base);
	// lwz r11,21068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21068);
loc_8234B388:
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lwz r3,288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8234b3a4
	if (ctx.cr6.eq) goto loc_8234B3A4;
	// bl 0x822e89b8
	ctx.lr = 0x8234B39C;
	sub_822E89B8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
loc_8234B3A4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8234b3d0
	if (!ctx.cr6.eq) goto loc_8234B3D0;
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82385da0
	ctx.lr = 0x8234B3CC;
	sub_82385DA0(ctx, base);
	// stw r31,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r31.u32);
loc_8234B3D0:
	// stw r29,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r29.u32);
loc_8234B3D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234B3DC"))) PPC_WEAK_FUNC(sub_8234B3DC);
PPC_FUNC_IMPL(__imp__sub_8234B3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234B3E0"))) PPC_WEAK_FUNC(sub_8234B3E0);
PPC_FUNC_IMPL(__imp__sub_8234B3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8234B3E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8234b46c
	if (ctx.cr6.eq) goto loc_8234B46C;
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// lwz r11,21068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21068);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234b418
	if (!ctx.cr6.eq) goto loc_8234B418;
	// bl 0x822e58d0
	ctx.lr = 0x8234B414;
	sub_822E58D0(ctx, base);
	// lwz r11,21068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21068);
loc_8234B418:
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// lwz r6,288(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8234b438
	if (ctx.cr6.eq) goto loc_8234B438;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x822e8a40
	ctx.lr = 0x8234B430;
	sub_822E8A40(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r11.u32);
loc_8234B438:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8234b468
	if (!ctx.cr6.eq) goto loc_8234B468;
	// lwz r31,32(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r6,16
	ctx.r3.s64 = ctx.r6.s64 + 16;
	// stw r10,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r10.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82385da0
	ctx.lr = 0x8234B464;
	sub_82385DA0(ctx, base);
	// stw r31,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r31.u32);
loc_8234B468:
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
loc_8234B46C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234B474"))) PPC_WEAK_FUNC(sub_8234B474);
PPC_FUNC_IMPL(__imp__sub_8234B474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234B478"))) PPC_WEAK_FUNC(sub_8234B478);
PPC_FUNC_IMPL(__imp__sub_8234B478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8234B480;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234b4a0
	if (!ctx.cr6.eq) goto loc_8234B4A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8234b4c4
	goto loc_8234B4C4;
loc_8234B4A0:
	// lwz r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8234b4c0
	if (ctx.cr6.eq) goto loc_8234B4C0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8234B4C0:
	// bctrl 
	ctx.lr = 0x8234B4C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234B4C4:
	// lwz r30,52(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// bne cr6,0x8234b4e0
	if (!ctx.cr6.eq) goto loc_8234B4E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8234b504
	goto loc_8234B504;
loc_8234B4E0:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8234b500
	if (ctx.cr6.eq) goto loc_8234B500;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8234B500:
	// bctrl 
	ctx.lr = 0x8234B504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234B504:
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// b 0x8234b530
	goto loc_8234B530;
loc_8234B50C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234b548
	if (ctx.cr6.eq) goto loc_8234B548;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234B528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_8234B530:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8234b50c
	if (!ctx.cr6.eq) goto loc_8234B50C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234b54c
	if (!ctx.cr6.eq) goto loc_8234B54C;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// b 0x8234b578
	goto loc_8234B578;
loc_8234B548:
	// bl 0x82fa1518
	ctx.lr = 0x8234B54C;
	sub_82FA1518(ctx, base);
loc_8234B54C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8234b570
	if (!ctx.cr6.eq) goto loc_8234B570;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234B56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8234b574
	goto loc_8234B574;
loc_8234B570:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_8234B574:
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
loc_8234B578:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x8234B580;
	sub_82F91940(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f91940
	ctx.lr = 0x8234B588;
	sub_82F91940(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f91940
	ctx.lr = 0x8234B590;
	sub_82F91940(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234B598"))) PPC_WEAK_FUNC(sub_8234B598);
PPC_FUNC_IMPL(__imp__sub_8234B598) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234B5A0"))) PPC_WEAK_FUNC(sub_8234B5A0);
PPC_FUNC_IMPL(__imp__sub_8234B5A0) {
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
	// li r3,136
	ctx.r3.s64 = 136;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82691500
	ctx.lr = 0x8234B5BC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8234b5d0
	if (ctx.cr0.eq) goto loc_8234B5D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823633d8
	ctx.lr = 0x8234B5CC;
	sub_823633D8(ctx, base);
	// b 0x8234b5d4
	goto loc_8234B5D4;
loc_8234B5D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234B5D4:
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

__attribute__((alias("__imp__sub_8234B5E8"))) PPC_WEAK_FUNC(sub_8234B5E8);
PPC_FUNC_IMPL(__imp__sub_8234B5E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234B5F0"))) PPC_WEAK_FUNC(sub_8234B5F0);
PPC_FUNC_IMPL(__imp__sub_8234B5F0) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8234b628
	if (!ctx.cr6.lt) goto loc_8234B628;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8234b62c
	if (!ctx.cr6.gt) goto loc_8234B62C;
loc_8234B628:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234B62C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq 0x8234b6d4
	if (ctx.cr0.eq) goto loc_8234B6D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srawi r30,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 2;
	// bne cr6,0x8234b6b8
	if (!ctx.cr6.eq) goto loc_8234B6B8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// ori r8,r8,65534
	ctx.r8.u64 = ctx.r8.u64 | 65534;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8234b670
	if (!ctx.cr6.gt) goto loc_8234B670;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x8234B670;
	sub_82FA0648(ctx, base);
loc_8234B670:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8234b6b8
	if (!ctx.cr6.gt) goto loc_8234B6B8;
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8234b6a4
	if (ctx.cr6.lt) goto loc_8234B6A4;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8234B6A4:
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8234b6b0
	if (!ctx.cr6.lt) goto loc_8234B6B0;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_8234B6B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82426040
	ctx.lr = 0x8234B6B8;
	sub_82426040(ctx, base);
loc_8234B6B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234b75c
	if (ctx.cr6.eq) goto loc_8234B75C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x8234b758
	goto loc_8234B758;
loc_8234B6D4:
	// bne cr6,0x8234b748
	if (!ctx.cr6.eq) goto loc_8234B748;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// ori r8,r8,65534
	ctx.r8.u64 = ctx.r8.u64 | 65534;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8234b700
	if (!ctx.cr6.gt) goto loc_8234B700;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x8234B700;
	sub_82FA0648(ctx, base);
loc_8234B700:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8234b748
	if (!ctx.cr6.gt) goto loc_8234B748;
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8234b734
	if (ctx.cr6.lt) goto loc_8234B734;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8234B734:
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8234b740
	if (!ctx.cr6.lt) goto loc_8234B740;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_8234B740:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82426040
	ctx.lr = 0x8234B748;
	sub_82426040(ctx, base);
loc_8234B748:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234b75c
	if (ctx.cr6.eq) goto loc_8234B75C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8234B758:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8234B75C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
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

__attribute__((alias("__imp__sub_8234B780"))) PPC_WEAK_FUNC(sub_8234B780);
PPC_FUNC_IMPL(__imp__sub_8234B780) {
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
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234b7cc
	if (ctx.cr6.eq) goto loc_8234B7CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234B7C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8234b7d0
	goto loc_8234B7D0;
loc_8234B7CC:
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_8234B7D0:
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8234b818
	if (ctx.cr6.eq) goto loc_8234B818;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234B804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
loc_8234B818:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8234b890
	if (ctx.cr0.eq) goto loc_8234B890;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8234b838
	if (ctx.cr6.eq) goto loc_8234B838;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234b858
	if (!ctx.cr6.eq) goto loc_8234B858;
loc_8234B838:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8243cd28
	ctx.lr = 0x8234B848;
	sub_8243CD28(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8234b874
	goto loc_8234B874;
loc_8234B858:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8243cd28
	ctx.lr = 0x8234B868;
	sub_8243CD28(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_8234B874:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234B880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234b890
	if (ctx.cr6.eq) goto loc_8234B890;
	// bl 0x82241d18
	ctx.lr = 0x8234B890;
	sub_82241D18(ctx, base);
loc_8234B890:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234B8A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8234B8C4"))) PPC_WEAK_FUNC(sub_8234B8C4);
PPC_FUNC_IMPL(__imp__sub_8234B8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234B8C8"))) PPC_WEAK_FUNC(sub_8234B8C8);
PPC_FUNC_IMPL(__imp__sub_8234B8C8) {
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
	// bne cr6,0x8234b910
	if (!ctx.cr6.eq) goto loc_8234B910;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8234B8EC;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8234b910
	if (!ctx.cr0.eq) goto loc_8234B910;
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
	ctx.lr = 0x8234B910;
	sub_82240040(ctx, base);
loc_8234B910:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,11080
	ctx.r11.s64 = ctx.r11.s64 + 11080;
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

__attribute__((alias("__imp__sub_8234B93C"))) PPC_WEAK_FUNC(sub_8234B93C);
PPC_FUNC_IMPL(__imp__sub_8234B93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234B940"))) PPC_WEAK_FUNC(sub_8234B940);
PPC_FUNC_IMPL(__imp__sub_8234B940) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234b9fc
	if (ctx.cr6.eq) goto loc_8234B9FC;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234b978
	if (!ctx.cr6.eq) goto loc_8234B978;
	// bl 0x822599a0
	ctx.lr = 0x8234B978;
	sub_822599A0(ctx, base);
loc_8234B978:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8234b998
	if (ctx.cr0.eq) goto loc_8234B998;
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8234b9fc
	if (!ctx.cr0.eq) goto loc_8234B9FC;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8234b9ec
	goto loc_8234B9EC;
loc_8234B998:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234b9c8
	if (ctx.cr6.eq) goto loc_8234B9C8;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8234b9c8
	if (!ctx.cr6.eq) goto loc_8234B9C8;
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8234b9fc
	if (!ctx.cr0.eq) goto loc_8234B9FC;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x8234b9ec
	goto loc_8234B9EC;
loc_8234B9C8:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8234b9fc
	if (!ctx.cr0.eq) goto loc_8234B9FC;
	// li r5,5
	ctx.r5.s64 = 5;
	// bne cr6,0x8234b9ec
	if (!ctx.cr6.eq) goto loc_8234B9EC;
	// li r5,2
	ctx.r5.s64 = 2;
loc_8234B9EC:
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// bl 0x8255a8c0
	ctx.lr = 0x8234B9FC;
	sub_8255A8C0(ctx, base);
loc_8234B9FC:
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

__attribute__((alias("__imp__sub_8234BA14"))) PPC_WEAK_FUNC(sub_8234BA14);
PPC_FUNC_IMPL(__imp__sub_8234BA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234BA18"))) PPC_WEAK_FUNC(sub_8234BA18);
PPC_FUNC_IMPL(__imp__sub_8234BA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-18916
	ctx.r3.s64 = ctx.r11.s64 + -18916;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234BA24"))) PPC_WEAK_FUNC(sub_8234BA24);
PPC_FUNC_IMPL(__imp__sub_8234BA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234BA28"))) PPC_WEAK_FUNC(sub_8234BA28);
PPC_FUNC_IMPL(__imp__sub_8234BA28) {
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
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lwz r11,-28296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28296);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8234ba5c
	if (!ctx.cr0.eq) goto loc_8234BA5C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-28296(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28296, ctx.r11.u32);
	// bl 0x8234bb68
	ctx.lr = 0x8234BA50;
	sub_8234BB68(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,13296
	ctx.r3.s64 = ctx.r11.s64 + 13296;
	// bl 0x82fa2318
	ctx.lr = 0x8234BA5C;
	sub_82FA2318(ctx, base);
loc_8234BA5C:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,-28324
	ctx.r3.s64 = ctx.r11.s64 + -28324;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234BA74"))) PPC_WEAK_FUNC(sub_8234BA74);
PPC_FUNC_IMPL(__imp__sub_8234BA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234BA78"))) PPC_WEAK_FUNC(sub_8234BA78);
PPC_FUNC_IMPL(__imp__sub_8234BA78) {
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
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r11,32692(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32692);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8234baac
	if (!ctx.cr0.eq) goto loc_8234BAAC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,32692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32692, ctx.r11.u32);
	// bl 0x8234bc10
	ctx.lr = 0x8234BAA0;
	sub_8234BC10(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,13312
	ctx.r3.s64 = ctx.r11.s64 + 13312;
	// bl 0x82fa2318
	ctx.lr = 0x8234BAAC;
	sub_82FA2318(ctx, base);
loc_8234BAAC:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,32660
	ctx.r3.s64 = ctx.r11.s64 + 32660;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234BAC4"))) PPC_WEAK_FUNC(sub_8234BAC4);
PPC_FUNC_IMPL(__imp__sub_8234BAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234BAC8"))) PPC_WEAK_FUNC(sub_8234BAC8);
PPC_FUNC_IMPL(__imp__sub_8234BAC8) {
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
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r11,32688(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32688);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8234bafc
	if (!ctx.cr0.eq) goto loc_8234BAFC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,32688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32688, ctx.r11.u32);
	// bl 0x8234bcb8
	ctx.lr = 0x8234BAF0;
	sub_8234BCB8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,13328
	ctx.r3.s64 = ctx.r11.s64 + 13328;
	// bl 0x82fa2318
	ctx.lr = 0x8234BAFC;
	sub_82FA2318(ctx, base);
loc_8234BAFC:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,32636
	ctx.r3.s64 = ctx.r11.s64 + 32636;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234BB14"))) PPC_WEAK_FUNC(sub_8234BB14);
PPC_FUNC_IMPL(__imp__sub_8234BB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234BB18"))) PPC_WEAK_FUNC(sub_8234BB18);
PPC_FUNC_IMPL(__imp__sub_8234BB18) {
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
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lwz r11,-28300(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28300);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8234bb4c
	if (!ctx.cr0.eq) goto loc_8234BB4C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-28300(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28300, ctx.r11.u32);
	// bl 0x8234be08
	ctx.lr = 0x8234BB40;
	sub_8234BE08(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,13360
	ctx.r3.s64 = ctx.r11.s64 + 13360;
	// bl 0x82fa2318
	ctx.lr = 0x8234BB4C;
	sub_82FA2318(ctx, base);
loc_8234BB4C:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,-28348
	ctx.r3.s64 = ctx.r11.s64 + -28348;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234BB64"))) PPC_WEAK_FUNC(sub_8234BB64);
PPC_FUNC_IMPL(__imp__sub_8234BB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234BB68"))) PPC_WEAK_FUNC(sub_8234BB68);
PPC_FUNC_IMPL(__imp__sub_8234BB68) {
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
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r31,r10,-28324
	ctx.r31.s64 = ctx.r10.s64 + -28324;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-22536
	ctx.r11.s64 = ctx.r11.s64 + -22536;
	// addi r10,r10,11104
	ctx.r10.s64 = ctx.r10.s64 + 11104;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x82691500
	ctx.lr = 0x8234BBA8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8234bbf4
	if (ctx.cr0.eq) goto loc_8234BBF4;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r10,49(r11)
	PPC_STORE_U8(ctx.r11.u32 + 49, ctx.r10.u8);
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
loc_8234BBF4:
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
	ctx.lr = 0x8234BC10;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_8234BC10"))) PPC_WEAK_FUNC(sub_8234BC10);
PPC_FUNC_IMPL(__imp__sub_8234BC10) {
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
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r31,r10,32660
	ctx.r31.s64 = ctx.r10.s64 + 32660;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-22536
	ctx.r11.s64 = ctx.r11.s64 + -22536;
	// addi r10,r10,11120
	ctx.r10.s64 = ctx.r10.s64 + 11120;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x82691500
	ctx.lr = 0x8234BC50;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8234bc9c
	if (ctx.cr0.eq) goto loc_8234BC9C;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r10,49(r11)
	PPC_STORE_U8(ctx.r11.u32 + 49, ctx.r10.u8);
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
loc_8234BC9C:
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
	ctx.lr = 0x8234BCB8;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_8234BCB8"))) PPC_WEAK_FUNC(sub_8234BCB8);
PPC_FUNC_IMPL(__imp__sub_8234BCB8) {
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
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r31,r10,32636
	ctx.r31.s64 = ctx.r10.s64 + 32636;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-22536
	ctx.r11.s64 = ctx.r11.s64 + -22536;
	// addi r10,r10,11132
	ctx.r10.s64 = ctx.r10.s64 + 11132;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x82691500
	ctx.lr = 0x8234BCF8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8234bd44
	if (ctx.cr0.eq) goto loc_8234BD44;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r10,49(r11)
	PPC_STORE_U8(ctx.r11.u32 + 49, ctx.r10.u8);
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
loc_8234BD44:
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
	ctx.lr = 0x8234BD60;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_8234BD60"))) PPC_WEAK_FUNC(sub_8234BD60);
PPC_FUNC_IMPL(__imp__sub_8234BD60) {
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
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r31,r10,32612
	ctx.r31.s64 = ctx.r10.s64 + 32612;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-22536
	ctx.r11.s64 = ctx.r11.s64 + -22536;
	// addi r10,r10,11148
	ctx.r10.s64 = ctx.r10.s64 + 11148;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x82691500
	ctx.lr = 0x8234BDA0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8234bdec
	if (ctx.cr0.eq) goto loc_8234BDEC;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r10,49(r11)
	PPC_STORE_U8(ctx.r11.u32 + 49, ctx.r10.u8);
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
loc_8234BDEC:
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
	ctx.lr = 0x8234BE08;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_8234BE08"))) PPC_WEAK_FUNC(sub_8234BE08);
PPC_FUNC_IMPL(__imp__sub_8234BE08) {
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
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r31,r10,-28348
	ctx.r31.s64 = ctx.r10.s64 + -28348;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-22536
	ctx.r11.s64 = ctx.r11.s64 + -22536;
	// addi r10,r10,11164
	ctx.r10.s64 = ctx.r10.s64 + 11164;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x82691500
	ctx.lr = 0x8234BE48;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8234be94
	if (ctx.cr0.eq) goto loc_8234BE94;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r10,49(r11)
	PPC_STORE_U8(ctx.r11.u32 + 49, ctx.r10.u8);
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
loc_8234BE94:
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
	ctx.lr = 0x8234BEB0;
	sub_82240040(ctx, base);
}

