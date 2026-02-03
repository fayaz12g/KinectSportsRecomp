#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8231E4E0"))) PPC_WEAK_FUNC(sub_8231E4E0);
PPC_FUNC_IMPL(__imp__sub_8231E4E0) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r4,r3,1604
	ctx.r4.s64 = ctx.r3.s64 + 1604;
	// bl 0x82323028
	ctx.lr = 0x8231E504;
	sub_82323028(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82323198
	ctx.lr = 0x8231E50C;
	sub_82323198(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82323ce8
	ctx.lr = 0x8231E514;
	sub_82323CE8(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8231E51C:
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,2120(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2120);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8231e56c
	if (ctx.cr6.eq) goto loc_8231E56C;
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// cmpwi cr6,r11,4224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4224, ctx.xer);
	// blt cr6,0x8231e51c
	if (ctx.cr6.lt) goto loc_8231E51C;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x822c3bc0
	ctx.lr = 0x8231E540;
	sub_822C3BC0(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x822c3c28
	ctx.lr = 0x8231E548;
	sub_822C3C28(ctx, base);
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8231e56c
	if (ctx.cr6.eq) goto loc_8231E56C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231ba70
	ctx.lr = 0x8231E55C;
	sub_8231BA70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x8231E564;
	sub_82691540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
loc_8231E56C:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231e580
	if (!ctx.cr6.eq) goto loc_8231E580;
	// bl 0x822599a0
	ctx.lr = 0x8231E580;
	sub_822599A0(ctx, base);
loc_8231E580:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8231e598
	if (!ctx.cr0.eq) goto loc_8231E598;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8231E598:
	// bl 0x82323270
	ctx.lr = 0x8231E59C;
	sub_82323270(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231ccc0
	ctx.lr = 0x8231E5A8;
	sub_8231CCC0(ctx, base);
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231e290
	ctx.lr = 0x8231E5B4;
	sub_8231E290(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,6344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8231e5e4
	if (ctx.cr6.lt) goto loc_8231E5E4;
	// beq cr6,0x8231e5d0
	if (ctx.cr6.eq) goto loc_8231E5D0;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// b 0x8231e5e8
	goto loc_8231E5E8;
loc_8231E5D0:
	// lwz r10,3176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3176);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8231e5e4
	if (ctx.cr6.eq) goto loc_8231E5E4;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x8231e5e8
	goto loc_8231E5E8;
loc_8231E5E4:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_8231E5E8:
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8231E604"))) PPC_WEAK_FUNC(sub_8231E604);
PPC_FUNC_IMPL(__imp__sub_8231E604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231E608"))) PPC_WEAK_FUNC(sub_8231E608);
PPC_FUNC_IMPL(__imp__sub_8231E608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8231E610;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,28784
	ctx.r31.s64 = ctx.r11.s64 + 28784;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r11,1604
	ctx.r25.s64 = ctx.r11.s64 + 1604;
	// addi r28,r11,580
	ctx.r28.s64 = ctx.r11.s64 + 580;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231e698
	if (ctx.cr6.eq) goto loc_8231E698;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8231E644:
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x8231e694
	if (!ctx.cr6.eq) goto loc_8231E694;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8231E654:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8231e654
	if (!ctx.cr6.eq) goto loc_8231E654;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82fa4320
	ctx.lr = 0x8231E678;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231e684
	if (!ctx.cr0.eq) goto loc_8231E684;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_8231E684:
	// lwzu r11,20(r29)
	ea = 20 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231e644
	if (!ctx.cr6.eq) goto loc_8231E644;
loc_8231E694:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8231E698:
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231e6f8
	if (ctx.cr6.eq) goto loc_8231E6F8;
loc_8231E6A8:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x8231e6f8
	if (!ctx.cr6.eq) goto loc_8231E6F8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8231E6B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8231e6b8
	if (!ctx.cr6.eq) goto loc_8231E6B8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82fa4320
	ctx.lr = 0x8231E6DC;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231e6e8
	if (!ctx.cr0.eq) goto loc_8231E6E8;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8231E6E8:
	// lwzu r11,20(r31)
	ea = 20 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231e6a8
	if (!ctx.cr6.eq) goto loc_8231E6A8;
loc_8231E6F8:
	// subf r11,r26,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r26.s64;
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,1604
	ctx.r4.s64 = ctx.r3.s64 + 1604;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82323028
	ctx.lr = 0x8231E710;
	sub_82323028(ctx, base);
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// bl 0x82323198
	ctx.lr = 0x8231E724;
	sub_82323198(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r11,30428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231e73c
	if (!ctx.cr6.eq) goto loc_8231E73C;
	// bl 0x822599a0
	ctx.lr = 0x8231E738;
	sub_822599A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8231E73C:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8231e754
	if (!ctx.cr0.eq) goto loc_8231E754;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8231E754:
	// bl 0x82323270
	ctx.lr = 0x8231E758;
	sub_82323270(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8231e76c
	if (ctx.cr6.eq) goto loc_8231E76C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8231ccc0
	ctx.lr = 0x8231E76C;
	sub_8231CCC0(ctx, base);
loc_8231E76C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231E774"))) PPC_WEAK_FUNC(sub_8231E774);
PPC_FUNC_IMPL(__imp__sub_8231E774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231E778"))) PPC_WEAK_FUNC(sub_8231E778);
PPC_FUNC_IMPL(__imp__sub_8231E778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8231E780;
	__savegprlr_29(ctx, base);
	// stwu r1,-2304(r1)
	ea = -2304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,226
	ctx.r3.s64 = ctx.r1.s64 + 226;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// addi r30,r11,31944
	ctx.r30.s64 = ctx.r11.s64 + 31944;
	// sth r31,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8231E7A8;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// bl 0x82fa7cf0
	ctx.lr = 0x8231E7BC;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r31.u16);
	// addi r3,r1,162
	ctx.r3.s64 = ctx.r1.s64 + 162;
	// bl 0x82fa7cf0
	ctx.lr = 0x8231E7D0;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,-3984
	ctx.r4.s64 = ctx.r10.s64 + -3984;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8231E7F8;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-19708
	ctx.r4.s64 = ctx.r11.s64 + -19708;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8259c8e0
	ctx.lr = 0x8231E818;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-19704
	ctx.r4.s64 = ctx.r11.s64 + -19704;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x8259c8e0
	ctx.lr = 0x8231E838;
	sub_8259C8E0(ctx, base);
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x8231E840;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8231e888
	if (ctx.cr0.eq) goto loc_8231E888;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r8,-32206
	ctx.r8.s64 = -2110652416;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r8,-5704
	ctx.r8.s64 = ctx.r8.s64 + -5704;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x8231E884;
	sub_8253D420(ctx, base);
	// b 0x8231e88c
	goto loc_8231E88C;
loc_8231E888:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8231E88C:
	// stw r31,184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 184, ctx.r31.u32);
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231E898"))) PPC_WEAK_FUNC(sub_8231E898);
PPC_FUNC_IMPL(__imp__sub_8231E898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8231E8A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-2304(r1)
	ea = -2304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,226
	ctx.r3.s64 = ctx.r1.s64 + 226;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// addi r30,r11,31944
	ctx.r30.s64 = ctx.r11.s64 + 31944;
	// sth r31,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8231E8C8;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// bl 0x82fa7cf0
	ctx.lr = 0x8231E8DC;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r31.u16);
	// addi r3,r1,162
	ctx.r3.s64 = ctx.r1.s64 + 162;
	// bl 0x82fa7cf0
	ctx.lr = 0x8231E8F0;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,-3960
	ctx.r4.s64 = ctx.r10.s64 + -3960;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8231E918;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-19708
	ctx.r4.s64 = ctx.r11.s64 + -19708;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8259c8e0
	ctx.lr = 0x8231E938;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-19704
	ctx.r4.s64 = ctx.r11.s64 + -19704;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x8259c8e0
	ctx.lr = 0x8231E958;
	sub_8259C8E0(ctx, base);
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x8231E960;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8231e9a8
	if (ctx.cr0.eq) goto loc_8231E9A8;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r8,-32206
	ctx.r8.s64 = -2110652416;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r8,-5576
	ctx.r8.s64 = ctx.r8.s64 + -5576;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x8231E9A4;
	sub_8253D420(ctx, base);
	// b 0x8231e9ac
	goto loc_8231E9AC;
loc_8231E9A8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8231E9AC:
	// stw r31,188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 188, ctx.r31.u32);
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231E9B8"))) PPC_WEAK_FUNC(sub_8231E9B8);
PPC_FUNC_IMPL(__imp__sub_8231E9B8) {
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
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8231ea18
	if (ctx.cr6.eq) goto loc_8231EA18;
	// lwz r3,184(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8231E9EC;
	sub_8253D820(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// bne cr6,0x8231ea20
	if (!ctx.cr6.eq) goto loc_8231EA20;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// beq cr6,0x8231ea20
	if (ctx.cr6.eq) goto loc_8231EA20;
	// bl 0x822c3bc0
	ctx.lr = 0x8231EA14;
	sub_822C3BC0(ctx, base);
	// b 0x8231ea20
	goto loc_8231EA20;
loc_8231EA18:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
loc_8231EA20:
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

__attribute__((alias("__imp__sub_8231EA38"))) PPC_WEAK_FUNC(sub_8231EA38);
PPC_FUNC_IMPL(__imp__sub_8231EA38) {
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
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8231eab0
	if (ctx.cr6.eq) goto loc_8231EAB0;
	// lwz r3,188(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8231EA6C;
	sub_8253D820(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// bne cr6,0x8231eab8
	if (!ctx.cr6.eq) goto loc_8231EAB8;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8231ea9c
	if (!ctx.cr6.eq) goto loc_8231EA9C;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r10.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_8231EA9C:
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231eab8
	if (ctx.cr6.eq) goto loc_8231EAB8;
	// bl 0x822c3bc0
	ctx.lr = 0x8231EAAC;
	sub_822C3BC0(ctx, base);
	// b 0x8231eab8
	goto loc_8231EAB8;
loc_8231EAB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
loc_8231EAB8:
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

__attribute__((alias("__imp__sub_8231EAD0"))) PPC_WEAK_FUNC(sub_8231EAD0);
PPC_FUNC_IMPL(__imp__sub_8231EAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8231EAD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-2320(r1)
	ea = -2320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,2046
	ctx.r5.s64 = 2046;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,226
	ctx.r3.s64 = ctx.r1.s64 + 226;
	// addi r30,r11,31944
	ctx.r30.s64 = ctx.r11.s64 + 31944;
	// sth r31,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8231EB08;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// bl 0x82fa7cf0
	ctx.lr = 0x8231EB1C;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r31.u16);
	// addi r3,r1,162
	ctx.r3.s64 = ctx.r1.s64 + 162;
	// bl 0x82fa7cf0
	ctx.lr = 0x8231EB30;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8231EB54;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-19708
	ctx.r4.s64 = ctx.r11.s64 + -19708;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8259c8e0
	ctx.lr = 0x8231EB74;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-19704
	ctx.r4.s64 = ctx.r11.s64 + -19704;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x8259c8e0
	ctx.lr = 0x8231EB94;
	sub_8259C8E0(ctx, base);
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x8231EB9C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8231ebe0
	if (ctx.cr0.eq) goto loc_8231EBE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x8231EBDC;
	sub_8253D420(ctx, base);
	// b 0x8231ebe4
	goto loc_8231EBE4;
loc_8231EBE0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8231EBE4:
	// stw r31,180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 180, ctx.r31.u32);
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231EBF0"))) PPC_WEAK_FUNC(sub_8231EBF0);
PPC_FUNC_IMPL(__imp__sub_8231EBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8231EBF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-2304(r1)
	ea = -2304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,226
	ctx.r3.s64 = ctx.r1.s64 + 226;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// addi r30,r11,31944
	ctx.r30.s64 = ctx.r11.s64 + 31944;
	// sth r31,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8231EC20;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// bl 0x82fa7cf0
	ctx.lr = 0x8231EC34;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r31.u16);
	// addi r3,r1,162
	ctx.r3.s64 = ctx.r1.s64 + 162;
	// bl 0x82fa7cf0
	ctx.lr = 0x8231EC48;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,-3944
	ctx.r4.s64 = ctx.r10.s64 + -3944;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8231EC70;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-19708
	ctx.r4.s64 = ctx.r11.s64 + -19708;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8259c8e0
	ctx.lr = 0x8231EC90;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-19704
	ctx.r4.s64 = ctx.r11.s64 + -19704;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x8259c8e0
	ctx.lr = 0x8231ECB0;
	sub_8259C8E0(ctx, base);
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x8231ECB8;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8231ed00
	if (ctx.cr0.eq) goto loc_8231ED00;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r8,-32206
	ctx.r8.s64 = -2110652416;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r8,-4480
	ctx.r8.s64 = ctx.r8.s64 + -4480;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x8231ECFC;
	sub_8253D420(ctx, base);
	// b 0x8231ed04
	goto loc_8231ED04;
loc_8231ED00:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8231ED04:
	// stw r31,180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 180, ctx.r31.u32);
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231ED10"))) PPC_WEAK_FUNC(sub_8231ED10);
PPC_FUNC_IMPL(__imp__sub_8231ED10) {
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
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8231edac
	if (ctx.cr6.eq) goto loc_8231EDAC;
	// lwz r3,180(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8231ED44;
	sub_8253D820(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// bne cr6,0x8231ed6c
	if (!ctx.cr6.eq) goto loc_8231ED6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231e4e0
	ctx.lr = 0x8231ED5C;
	sub_8231E4E0(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x8231ed74
	goto loc_8231ED74;
loc_8231ED6C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r3,124
	ctx.r4.s64 = ctx.r3.s64 + 124;
loc_8231ED74:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231ed90
	if (ctx.cr6.eq) goto loc_8231ED90;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825212d0
	ctx.lr = 0x8231ED8C;
	sub_825212D0(ctx, base);
	// b 0x8231eda0
	goto loc_8231EDA0;
loc_8231ED90:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231eda0
	if (ctx.cr6.eq) goto loc_8231EDA0;
	// bl 0x82521458
	ctx.lr = 0x8231EDA0;
	sub_82521458(ctx, base);
loc_8231EDA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// b 0x8231edb4
	goto loc_8231EDB4;
loc_8231EDAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
loc_8231EDB4:
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

__attribute__((alias("__imp__sub_8231EDCC"))) PPC_WEAK_FUNC(sub_8231EDCC);
PPC_FUNC_IMPL(__imp__sub_8231EDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231EDD0"))) PPC_WEAK_FUNC(sub_8231EDD0);
PPC_FUNC_IMPL(__imp__sub_8231EDD0) {
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
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8231ee60
	if (ctx.cr6.eq) goto loc_8231EE60;
	// lwz r3,180(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8231EE04;
	sub_8253D820(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// bne cr6,0x8231ee20
	if (!ctx.cr6.eq) goto loc_8231EE20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231e328
	ctx.lr = 0x8231EE1C;
	sub_8231E328(ctx, base);
	// b 0x8231ee68
	goto loc_8231EE68;
loc_8231EE20:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r3,124
	ctx.r4.s64 = ctx.r3.s64 + 124;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231ee44
	if (ctx.cr6.eq) goto loc_8231EE44;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825212d0
	ctx.lr = 0x8231EE40;
	sub_825212D0(ctx, base);
	// b 0x8231ee54
	goto loc_8231EE54;
loc_8231EE44:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231ee54
	if (ctx.cr6.eq) goto loc_8231EE54;
	// bl 0x82521458
	ctx.lr = 0x8231EE54;
	sub_82521458(ctx, base);
loc_8231EE54:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// b 0x8231ee68
	goto loc_8231EE68;
loc_8231EE60:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
loc_8231EE68:
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

__attribute__((alias("__imp__sub_8231EE80"))) PPC_WEAK_FUNC(sub_8231EE80);
PPC_FUNC_IMPL(__imp__sub_8231EE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8231EE88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8231eeec
	if (ctx.cr6.eq) goto loc_8231EEEC;
	// lwz r3,180(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8231EEAC;
	sub_8253D820(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r28,180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 180, ctx.r28.u32);
	// beq cr6,0x8231eef4
	if (ctx.cr6.eq) goto loc_8231EEF4;
	// bl 0x8226c3f0
	ctx.lr = 0x8231EEC0;
	sub_8226C3F0(ctx, base);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
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
	// beq 0x8231eef4
	if (ctx.cr0.eq) goto loc_8231EEF4;
	// bl 0x828edab8
	ctx.lr = 0x8231EEE4;
	sub_828EDAB8(ctx, base);
	// bl 0x828ed528
	ctx.lr = 0x8231EEE8;
	sub_828ED528(ctx, base);
	// b 0x8231eef4
	goto loc_8231EEF4;
loc_8231EEEC:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 180, ctx.r28.u32);
loc_8231EEF4:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,21120
	ctx.r11.s64 = ctx.r11.s64 + 21120;
	// lbz r10,69(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8231ef88
	if (ctx.cr0.eq) goto loc_8231EF88;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,164(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// bl 0x829204e8
	ctx.lr = 0x8231EF14;
	sub_829204E8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// li r3,1064
	ctx.r3.s64 = 1064;
	// bl 0x82691500
	ctx.lr = 0x8231EF20;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8231ef3c
	if (ctx.cr0.eq) goto loc_8231EF3C;
	// addi r4,r29,1340
	ctx.r4.s64 = ctx.r29.s64 + 1340;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8231EF38;
	sub_82FA77C0(ctx, base);
	// b 0x8231ef40
	goto loc_8231EF40;
loc_8231EF3C:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8231EF40:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8231ef5c
	if (ctx.cr6.eq) goto loc_8231EF5C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231ef58
	if (ctx.cr6.eq) goto loc_8231EF58;
	// bl 0x82691540
	ctx.lr = 0x8231EF58;
	sub_82691540(ctx, base);
loc_8231EF58:
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
loc_8231EF5C:
	// std r28,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r28.u64);
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// beq cr6,0x8231ef7c
	if (ctx.cr6.eq) goto loc_8231EF7C;
	// bl 0x82241d18
	ctx.lr = 0x8231EF7C;
	sub_82241D18(ctx, base);
loc_8231EF7C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c2258
	ctx.lr = 0x8231EF88;
	sub_822C2258(ctx, base);
loc_8231EF88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231EF90"))) PPC_WEAK_FUNC(sub_8231EF90);
PPC_FUNC_IMPL(__imp__sub_8231EF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8231EF98;
	__savegprlr_25(ctx, base);
	// stwu r1,-2448(r1)
	ea = -2448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r27,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r27.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x8231efec
	if (ctx.cr6.lt) goto loc_8231EFEC;
	// cmplwi cr6,r4,9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 9, ctx.xer);
	// bgt cr6,0x8231efec
	if (ctx.cr6.gt) goto loc_8231EFEC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8231efe8
	if (ctx.cr6.eq) goto loc_8231EFE8;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8231EFE8:
	// stw r27,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r27.u32);
loc_8231EFEC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823226a0
	ctx.lr = 0x8231EFFC;
	sub_823226A0(ctx, base);
	// cmplwi cr6,r30,30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 30, ctx.xer);
	// bgt cr6,0x8231f310
	if (ctx.cr6.gt) goto loc_8231F310;
	// cmplwi cr6,r30,26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 26, ctx.xer);
	// bge cr6,0x8231f338
	if (!ctx.cr6.lt) goto loc_8231F338;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x8231f1fc
	if (ctx.cr6.eq) goto loc_8231F1FC;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// beq cr6,0x8231f1a8
	if (ctx.cr6.eq) goto loc_8231F1A8;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// beq cr6,0x8231f138
	if (ctx.cr6.eq) goto loc_8231F138;
	// ble cr6,0x8231f7ac
	if (!ctx.cr6.gt) goto loc_8231F7AC;
	// cmplwi cr6,r30,9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 9, ctx.xer);
	// ble cr6,0x8231f03c
	if (!ctx.cr6.gt) goto loc_8231F03C;
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 24, ctx.xer);
	// ble cr6,0x8231f338
	if (!ctx.cr6.gt) goto loc_8231F338;
	// b 0x8231f7ac
	goto loc_8231F7AC;
loc_8231F03C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r4,r10,-11704
	ctx.r4.s64 = ctx.r10.s64 + -11704;
	// addi r3,r11,1092
	ctx.r3.s64 = ctx.r11.s64 + 1092;
	// addi r6,r11,1604
	ctx.r6.s64 = ctx.r11.s64 + 1604;
	// bl 0x82557338
	ctx.lr = 0x8231F054;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231f064
	if (!ctx.cr0.eq) goto loc_8231F064;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x8231f070
	goto loc_8231F070;
loc_8231F064:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x823230b8
	ctx.lr = 0x8231F06C;
	sub_823230B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8231F070:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x8231f0b0
	if (ctx.cr6.lt) goto loc_8231F0B0;
	// beq cr6,0x8231f0a8
	if (ctx.cr6.eq) goto loc_8231F0A8;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x8231f0a8
	if (ctx.cr6.lt) goto loc_8231F0A8;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// blt cr6,0x8231f0a0
	if (ctx.cr6.lt) goto loc_8231F0A0;
	// beq cr6,0x8231f0b0
	if (ctx.cr6.eq) goto loc_8231F0B0;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// blt cr6,0x8231f0a8
	if (ctx.cr6.lt) goto loc_8231F0A8;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x8231f0b4
	goto loc_8231F0B4;
loc_8231F0A0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x8231f0b4
	goto loc_8231F0B4;
loc_8231F0A8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// b 0x8231f0b4
	goto loc_8231F0B4;
loc_8231F0B0:
	// li r5,2
	ctx.r5.s64 = 2;
loc_8231F0B4:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x8231f0d4
	if (ctx.cr6.lt) goto loc_8231F0D4;
	// beq cr6,0x8231f128
	if (ctx.cr6.eq) goto loc_8231F128;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82323d98
	ctx.lr = 0x8231F0CC;
	sub_82323D98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8231f108
	goto loc_8231F108;
loc_8231F0D4:
	// lwz r10,3176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3176);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8231f100
	if (ctx.cr6.eq) goto loc_8231F100;
	// lwz r10,4232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4232);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8231f100
	if (ctx.cr6.eq) goto loc_8231F100;
	// lwz r11,5288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5288);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8231f100
	if (ctx.cr6.eq) goto loc_8231F100;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x8231f108
	goto loc_8231F108;
loc_8231F100:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
loc_8231F108:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231f128
	if (ctx.cr6.eq) goto loc_8231F128;
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-4848
	ctx.r5.s64 = ctx.r11.s64 + -4848;
	// bl 0x8231ead0
	ctx.lr = 0x8231F124;
	sub_8231EAD0(ctx, base);
	// b 0x8231f130
	goto loc_8231F130;
loc_8231F128:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231e4e0
	ctx.lr = 0x8231F130;
	sub_8231E4E0(ctx, base);
loc_8231F130:
	// stw r27,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r27.u32);
	// b 0x8231f7ac
	goto loc_8231F7AC;
loc_8231F138:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8231f154
	if (ctx.cr6.eq) goto loc_8231F154;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231f154
	if (ctx.cr6.eq) goto loc_8231F154;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// b 0x8231f158
	goto loc_8231F158;
loc_8231F154:
	// stw r25,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r25.u32);
loc_8231F158:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231f16c
	if (ctx.cr6.eq) goto loc_8231F16C;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_8231F16C:
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x822c3bc0
	ctx.lr = 0x8231F174;
	sub_822C3BC0(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x822c3c28
	ctx.lr = 0x8231F17C;
	sub_822C3C28(ctx, base);
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8231f19c
	if (ctx.cr6.eq) goto loc_8231F19C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231ba70
	ctx.lr = 0x8231F190;
	sub_8231BA70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x8231F198;
	sub_82691540(ctx, base);
	// stw r25,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r25.u32);
loc_8231F19C:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x823225c8
	ctx.lr = 0x8231F1A4;
	sub_823225C8(ctx, base);
	// b 0x8231f7ac
	goto loc_8231F7AC;
loc_8231F1A8:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r4,r10,-11704
	ctx.r4.s64 = ctx.r10.s64 + -11704;
	// addi r3,r11,1092
	ctx.r3.s64 = ctx.r11.s64 + 1092;
	// addi r6,r11,1604
	ctx.r6.s64 = ctx.r11.s64 + 1604;
	// bl 0x82557338
	ctx.lr = 0x8231F1C0;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8231f1d0
	if (ctx.cr0.eq) goto loc_8231F1D0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x823230b8
	ctx.lr = 0x8231F1D0;
	sub_823230B8(ctx, base);
loc_8231F1D0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8231f1ec
	if (ctx.cr6.eq) goto loc_8231F1EC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231f1ec
	if (ctx.cr6.eq) goto loc_8231F1EC;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// b 0x8231f1f0
	goto loc_8231F1F0;
loc_8231F1EC:
	// stw r25,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r25.u32);
loc_8231F1F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231e428
	ctx.lr = 0x8231F1F8;
	sub_8231E428(ctx, base);
	// b 0x8231f7ac
	goto loc_8231F7AC;
loc_8231F1FC:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r4,r10,-11704
	ctx.r4.s64 = ctx.r10.s64 + -11704;
	// addi r3,r11,1092
	ctx.r3.s64 = ctx.r11.s64 + 1092;
	// addi r6,r11,1604
	ctx.r6.s64 = ctx.r11.s64 + 1604;
	// bl 0x82557338
	ctx.lr = 0x8231F214;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231f224
	if (!ctx.cr0.eq) goto loc_8231F224;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x8231f230
	goto loc_8231F230;
loc_8231F224:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x823230b8
	ctx.lr = 0x8231F22C;
	sub_823230B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8231F230:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x8231f270
	if (ctx.cr6.lt) goto loc_8231F270;
	// beq cr6,0x8231f268
	if (ctx.cr6.eq) goto loc_8231F268;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x8231f268
	if (ctx.cr6.lt) goto loc_8231F268;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// blt cr6,0x8231f260
	if (ctx.cr6.lt) goto loc_8231F260;
	// beq cr6,0x8231f270
	if (ctx.cr6.eq) goto loc_8231F270;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// blt cr6,0x8231f268
	if (ctx.cr6.lt) goto loc_8231F268;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x8231f274
	goto loc_8231F274;
loc_8231F260:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x8231f274
	goto loc_8231F274;
loc_8231F268:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// b 0x8231f274
	goto loc_8231F274;
loc_8231F270:
	// li r5,2
	ctx.r5.s64 = 2;
loc_8231F274:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x8231f29c
	if (ctx.cr6.lt) goto loc_8231F29C;
	// beq cr6,0x8231f294
	if (ctx.cr6.eq) goto loc_8231F294;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82323d98
	ctx.lr = 0x8231F28C;
	sub_82323D98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8231f2c8
	goto loc_8231F2C8;
loc_8231F294:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x8231f2c8
	goto loc_8231F2C8;
loc_8231F29C:
	// lwz r10,3176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3176);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8231f2c0
	if (ctx.cr6.eq) goto loc_8231F2C0;
	// lwz r10,4232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4232);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8231f2c0
	if (ctx.cr6.eq) goto loc_8231F2C0;
	// lwz r11,5288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5288);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8231f294
	if (!ctx.cr6.eq) goto loc_8231F294;
loc_8231F2C0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
loc_8231F2C8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8231f2e4
	if (ctx.cr6.eq) goto loc_8231F2E4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231f2e4
	if (ctx.cr6.eq) goto loc_8231F2E4;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// b 0x8231f2e8
	goto loc_8231F2E8;
loc_8231F2E4:
	// stw r25,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r25.u32);
loc_8231F2E8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8231f308
	if (ctx.cr6.eq) goto loc_8231F308;
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// addi r5,r11,-4656
	ctx.r5.s64 = ctx.r11.s64 + -4656;
	// bl 0x8231ead0
	ctx.lr = 0x8231F304;
	sub_8231EAD0(ctx, base);
	// b 0x8231f7ac
	goto loc_8231F7AC;
loc_8231F308:
	// bl 0x8231e328
	ctx.lr = 0x8231F30C;
	sub_8231E328(ctx, base);
	// b 0x8231f7ac
	goto loc_8231F7AC;
loc_8231F310:
	// cmplwi cr6,r30,47
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 47, ctx.xer);
	// beq cr6,0x8231f6f8
	if (ctx.cr6.eq) goto loc_8231F6F8;
	// cmplwi cr6,r30,48
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 48, ctx.xer);
	// beq cr6,0x8231f6b4
	if (ctx.cr6.eq) goto loc_8231F6B4;
	// cmplwi cr6,r30,49
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 49, ctx.xer);
	// beq cr6,0x8231f344
	if (ctx.cr6.eq) goto loc_8231F344;
	// cmplwi cr6,r30,81
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 81, ctx.xer);
	// ble cr6,0x8231f7ac
	if (!ctx.cr6.gt) goto loc_8231F7AC;
	// cmplwi cr6,r30,86
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 86, ctx.xer);
	// bgt cr6,0x8231f7ac
	if (ctx.cr6.gt) goto loc_8231F7AC;
loc_8231F338:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231e608
	ctx.lr = 0x8231F340;
	sub_8231E608(ctx, base);
	// b 0x8231f130
	goto loc_8231F130;
loc_8231F344:
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r6,68
	ctx.r3.s64 = ctx.r6.s64 + 68;
	// addi r4,r11,-3932
	ctx.r4.s64 = ctx.r11.s64 + -3932;
	// bl 0x82557338
	ctx.lr = 0x8231F358;
	sub_82557338(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82322010
	ctx.lr = 0x8231F36C;
	sub_82322010(ctx, base);
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8231f3a4
	if (!ctx.cr6.eq) goto loc_8231F3A4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231f7ac
	if (ctx.cr6.eq) goto loc_8231F7AC;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231f7ac
	if (ctx.cr6.eq) goto loc_8231F7AC;
	// bl 0x82524840
	ctx.lr = 0x8231F39C;
	sub_82524840(ctx, base);
	// stw r25,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r25.u32);
	// b 0x8231f7ac
	goto loc_8231F7AC;
loc_8231F3A4:
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8231f7ac
	if (ctx.cr6.eq) goto loc_8231F7AC;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231f660
	if (!ctx.cr6.eq) goto loc_8231F660;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addic. r28,r31,1340
	ctx.xer.ca = ctx.r31.u32 > 4294965955;
	ctx.r28.s64 = ctx.r31.s64 + 1340;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r27,21120(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// beq 0x8231f460
	if (ctx.cr0.eq) goto loc_8231F460;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,836
	ctx.r4.s64 = ctx.r11.s64 + 836;
	// bl 0x822400d8
	ctx.lr = 0x8231F3DC;
	sub_822400D8(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,324
	ctx.r4.s64 = ctx.r11.s64 + 324;
	// bl 0x822400d8
	ctx.lr = 0x8231F3EC;
	sub_822400D8(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// bl 0x822400d8
	ctx.lr = 0x8231F3FC;
	sub_822400D8(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,580
	ctx.r4.s64 = ctx.r11.s64 + 580;
	// bl 0x822400d8
	ctx.lr = 0x8231F40C;
	sub_822400D8(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// lwz r9,6344(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r29,15
	ctx.r29.s64 = 15;
	// lwz r30,6360(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6360);
	// lwz r10,6352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6352);
	// lwz r11,6356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6356);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822c34e8
	ctx.lr = 0x8231F460;
	sub_822C34E8(ctx, base);
loc_8231F460:
	// rlwinm. r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231f47c
	if (ctx.cr0.eq) goto loc_8231F47C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r29,r29,0,29,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x822402c8
	ctx.lr = 0x8231F47C;
	sub_822402C8(ctx, base);
loc_8231F47C:
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231f498
	if (ctx.cr0.eq) goto loc_8231F498;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r29,r29,0,30,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x822402c8
	ctx.lr = 0x8231F498;
	sub_822402C8(ctx, base);
loc_8231F498:
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231f4b4
	if (ctx.cr0.eq) goto loc_8231F4B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x822402c8
	ctx.lr = 0x8231F4B4;
	sub_822402C8(ctx, base);
loc_8231F4B4:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231f4cc
	if (ctx.cr0.eq) goto loc_8231F4CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822402c8
	ctx.lr = 0x8231F4CC;
	sub_822402C8(ctx, base);
loc_8231F4CC:
	// stw r26,2376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2376, ctx.r26.u32);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r11,-21096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21096);
	// stw r11,2364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2364, ctx.r11.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ld r10,6368(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6368);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8231f590
	if (ctx.cr6.eq) goto loc_8231F590;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r3,r11,836
	ctx.r3.s64 = ctx.r11.s64 + 836;
	// addi r4,r10,-4176
	ctx.r4.s64 = ctx.r10.s64 + -4176;
	// bl 0x82557338
	ctx.lr = 0x8231F4FC;
	sub_82557338(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8231f518
	if (ctx.cr0.eq) goto loc_8231F518;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-3920
	ctx.r4.s64 = ctx.r11.s64 + -3920;
	// b 0x8231f520
	goto loc_8231F520;
loc_8231F518:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-3904
	ctx.r4.s64 = ctx.r11.s64 + -3904;
loc_8231F520:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,21076
	ctx.r11.s64 = ctx.r11.s64 + 21076;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8231F540;
	sub_8259C8E0(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r31,164(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// ld r29,6368(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6368);
	// bl 0x822c93d0
	ctx.lr = 0x8231F558;
	sub_822C93D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829204e8
	ctx.lr = 0x8231F564;
	sub_829204E8(ctx, base);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// bl 0x822c3a48
	ctx.lr = 0x8231F58C;
	sub_822C3A48(ctx, base);
	// b 0x8231f7ac
	goto loc_8231F7AC;
loc_8231F590:
	// bl 0x8226c3f0
	ctx.lr = 0x8231F594;
	sub_8226C3F0(ctx, base);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r10,r10,-28112
	ctx.r10.s64 = ctx.r10.s64 + -28112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x8226d8e8
	ctx.lr = 0x8231F5BC;
	sub_8226D8E8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8226ee40
	ctx.lr = 0x8231F5C4;
	sub_8226EE40(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8231f5dc
	if (!ctx.cr6.eq) goto loc_8231F5DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231ebf0
	ctx.lr = 0x8231F5D8;
	sub_8231EBF0(ctx, base);
	// b 0x8231f7ac
	goto loc_8231F7AC;
loc_8231F5DC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r31,164(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x829204e8
	ctx.lr = 0x8231F5E8;
	sub_829204E8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// li r3,1064
	ctx.r3.s64 = 1064;
	// bl 0x82691500
	ctx.lr = 0x8231F5F4;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8231f610
	if (ctx.cr0.eq) goto loc_8231F610;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8231F60C;
	sub_82FA77C0(ctx, base);
	// b 0x8231f614
	goto loc_8231F614;
loc_8231F610:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_8231F614:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8231f630
	if (ctx.cr6.eq) goto loc_8231F630;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231f62c
	if (ctx.cr6.eq) goto loc_8231F62C;
	// bl 0x82691540
	ctx.lr = 0x8231F62C;
	sub_82691540(ctx, base);
loc_8231F62C:
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
loc_8231F630:
	// std r25,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r25.u64);
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r25,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r25.u32);
	// stw r25,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r25.u32);
	// beq cr6,0x8231f650
	if (ctx.cr6.eq) goto loc_8231F650;
	// bl 0x82241d18
	ctx.lr = 0x8231F650;
	sub_82241D18(ctx, base);
loc_8231F650:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c2258
	ctx.lr = 0x8231F65C;
	sub_822C2258(ctx, base);
	// b 0x8231f7ac
	goto loc_8231F7AC;
loc_8231F660:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8231f7ac
	if (!ctx.cr6.eq) goto loc_8231F7AC;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c2258
	ctx.lr = 0x8231F674;
	sub_822C2258(ctx, base);
	// lwz r31,72(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231f7ac
	if (ctx.cr6.eq) goto loc_8231F7AC;
	// bl 0x828c11f8
	ctx.lr = 0x8231F688;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231f7ac
	if (ctx.cr0.eq) goto loc_8231F7AC;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231F6A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,408
	ctx.r3.s64 = ctx.r3.s64 + 408;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828df890
	ctx.lr = 0x8231F6B0;
	sub_828DF890(ctx, base);
	// b 0x8231f7ac
	goto loc_8231F7AC;
loc_8231F6B4:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231f6c8
	if (!ctx.cr6.eq) goto loc_8231F6C8;
	// bl 0x822599a0
	ctx.lr = 0x8231F6C8;
	sub_822599A0(ctx, base);
loc_8231F6C8:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8231f6e0
	if (ctx.cr0.eq) goto loc_8231F6E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231e778
	ctx.lr = 0x8231F6DC;
	sub_8231E778(ctx, base);
	// b 0x8231f7ac
	goto loc_8231F7AC;
loc_8231F6E0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r27,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r27.u32);
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// b 0x8231f7ac
	goto loc_8231F7AC;
loc_8231F6F8:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231f70c
	if (!ctx.cr6.eq) goto loc_8231F70C;
	// bl 0x822599a0
	ctx.lr = 0x8231F70C;
	sub_822599A0(ctx, base);
loc_8231F70C:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// beq 0x8231f794
	if (ctx.cr0.eq) goto loc_8231F794;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r6,r11,68
	ctx.r6.s64 = ctx.r11.s64 + 68;
	// addi r4,r10,-4232
	ctx.r4.s64 = ctx.r10.s64 + -4232;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82557338
	ctx.lr = 0x8231F730;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231f740
	if (!ctx.cr0.eq) goto loc_8231F740;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// b 0x8231f75c
	goto loc_8231F75C;
loc_8231F740:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-3884
	ctx.r4.s64 = ctx.r11.s64 + -3884;
	// bl 0x82557338
	ctx.lr = 0x8231F750;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231f78c
	if (!ctx.cr0.eq) goto loc_8231F78C;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
loc_8231F75C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231f77c
	if (ctx.cr6.eq) goto loc_8231F77C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825212d0
	ctx.lr = 0x8231F778;
	sub_825212D0(ctx, base);
	// b 0x8231f78c
	goto loc_8231F78C;
loc_8231F77C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231f78c
	if (ctx.cr6.eq) goto loc_8231F78C;
	// bl 0x82521458
	ctx.lr = 0x8231F78C;
	sub_82521458(ctx, base);
loc_8231F78C:
	// stw r27,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r27.u32);
	// b 0x8231f7a0
	goto loc_8231F7A0;
loc_8231F794:
	// stw r27,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r27.u32);
	// stw r27,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r27.u32);
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
loc_8231F7A0:
	// bl 0x82325710
	ctx.lr = 0x8231F7A4;
	sub_82325710(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// stw r25,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r25.u32);
loc_8231F7AC:
	// addi r1,r1,2448
	ctx.r1.s64 = ctx.r1.s64 + 2448;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231F7B4"))) PPC_WEAK_FUNC(sub_8231F7B4);
PPC_FUNC_IMPL(__imp__sub_8231F7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231F7B8"))) PPC_WEAK_FUNC(sub_8231F7B8);
PPC_FUNC_IMPL(__imp__sub_8231F7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8231F7C0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-2512(r1)
	ea = -2512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231ff70
	if (ctx.cr6.eq) goto loc_8231FF70;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r4,31080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8231f7f4
	if (!ctx.cr6.eq) goto loc_8231F7F4;
	// bl 0x8254abe0
	ctx.lr = 0x8231F7F0;
	sub_8254ABE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8231F7F4:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8254c1b0
	ctx.lr = 0x8231F800;
	sub_8254C1B0(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x824261e8
	ctx.lr = 0x8231F80C;
	sub_824261E8(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822c4128
	ctx.lr = 0x8231F818;
	sub_822C4128(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231f884
	if (ctx.cr6.eq) goto loc_8231F884;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8231f850
	if (!ctx.cr6.eq) goto loc_8231F850;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231f850
	if (ctx.cr6.eq) goto loc_8231F850;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8231F84C;
	sub_8253D820(ctx, base);
	// stw r26,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r26.u32);
loc_8231F850:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r11,30428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// lwz r30,68(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231f870
	if (ctx.cr6.eq) goto loc_8231F870;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8231f874
	goto loc_8231F874;
loc_8231F870:
	// bl 0x822599a0
	ctx.lr = 0x8231F874;
	sub_822599A0(ctx, base);
loc_8231F874:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82242870
	ctx.lr = 0x8231F87C;
	sub_82242870(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r26,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r26.u32);
loc_8231F884:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82521208
	ctx.lr = 0x8231F890;
	sub_82521208(ctx, base);
	// lwz r24,152(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8231f9d4
	if (ctx.cr6.eq) goto loc_8231F9D4;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x8231f8e8
	if (!ctx.cr6.eq) goto loc_8231F8E8;
loc_8231F8B0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82519230
	ctx.lr = 0x8231F8C0;
	sub_82519230(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82519230
	ctx.lr = 0x8231F8D0;
	sub_82519230(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82519230
	ctx.lr = 0x8231F8E0;
	sub_82519230(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8231f9c8
	goto loc_8231F9C8;
loc_8231F8E8:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8231f8fc
	if (ctx.cr6.eq) goto loc_8231F8FC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8231f938
	if (!ctx.cr6.eq) goto loc_8231F938;
loc_8231F8FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82519230
	ctx.lr = 0x8231F90C;
	sub_82519230(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82519230
	ctx.lr = 0x8231F91C;
	sub_82519230(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82519230
	ctx.lr = 0x8231F92C;
	sub_82519230(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,49
	ctx.r4.s64 = 49;
	// b 0x8231f9cc
	goto loc_8231F9CC;
loc_8231F938:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x8231f958
	if (!ctx.cr6.eq) goto loc_8231F958;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8231f958
	if (ctx.cr6.eq) goto loc_8231F958;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// bl 0x828e3618
	ctx.lr = 0x8231F950;
	sub_828E3618(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231f8b0
	if (ctx.cr0.eq) goto loc_8231F8B0;
loc_8231F958:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x8231f994
	if (!ctx.cr6.eq) goto loc_8231F994;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8231f994
	if (ctx.cr6.eq) goto loc_8231F994;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231f988
	if (ctx.cr6.eq) goto loc_8231F988;
	// bl 0x8225e260
	ctx.lr = 0x8231F980;
	sub_8225E260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x8231f98c
	goto loc_8231F98C;
loc_8231F988:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8231F98C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231f8b0
	if (ctx.cr6.eq) goto loc_8231F8B0;
loc_8231F994:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82519230
	ctx.lr = 0x8231F9A4;
	sub_82519230(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82519230
	ctx.lr = 0x8231F9B4;
	sub_82519230(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82519230
	ctx.lr = 0x8231F9C4;
	sub_82519230(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_8231F9C8:
	// li r4,48
	ctx.r4.s64 = 48;
loc_8231F9CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82519230
	ctx.lr = 0x8231F9D4;
	sub_82519230(ctx, base);
loc_8231F9D4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8231ff40
	if (ctx.cr6.eq) goto loc_8231FF40;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// bl 0x828e3618
	ctx.lr = 0x8231F9E4;
	sub_828E3618(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r25,4
	ctx.r25.s64 = 4;
	// beq 0x8231fb78
	if (ctx.cr0.eq) goto loc_8231FB78;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8231fde0
	if (!ctx.cr6.eq) goto loc_8231FDE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82322010
	ctx.lr = 0x8231FA10;
	sub_82322010(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,836
	ctx.r4.s64 = ctx.r11.s64 + 836;
	// bl 0x822400d8
	ctx.lr = 0x8231FA20;
	sub_822400D8(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,580
	ctx.r4.s64 = ctx.r11.s64 + 580;
	// bl 0x822400d8
	ctx.lr = 0x8231FA30;
	sub_822400D8(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,324
	ctx.r4.s64 = ctx.r11.s64 + 324;
	// bl 0x822400d8
	ctx.lr = 0x8231FA40;
	sub_822400D8(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// bl 0x822400d8
	ctx.lr = 0x8231FA50;
	sub_822400D8(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// lwz r9,6344(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r30,6360(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6360);
	// lwz r10,6352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6352);
	// lwz r11,6356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6356);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822c34e8
	ctx.lr = 0x8231FAA0;
	sub_822C34E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822402c8
	ctx.lr = 0x8231FAB0;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822402c8
	ctx.lr = 0x8231FAC0;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x822402c8
	ctx.lr = 0x8231FAD0;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822402c8
	ctx.lr = 0x8231FAE0;
	sub_822402C8(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,1324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1324, ctx.r11.u32);
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231fde0
	if (ctx.cr6.eq) goto loc_8231FDE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,92(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231FB10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,240
	ctx.r4.s64 = ctx.r3.s64 + 240;
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// bl 0x822c4810
	ctx.lr = 0x8231FB1C;
	sub_822C4810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8231FB2C;
	sub_82FA77C0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// bl 0x822c3ca0
	ctx.lr = 0x8231FB38;
	sub_822C3CA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231fde0
	if (ctx.cr0.eq) goto loc_8231FDE0;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231FB58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x822c4260
	ctx.lr = 0x8231FB64;
	sub_822C4260(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// bl 0x82fa77c0
	ctx.lr = 0x8231FB74;
	sub_82FA77C0(ctx, base);
	// b 0x8231fde0
	goto loc_8231FDE0;
loc_8231FB78:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x822c3488
	ctx.lr = 0x8231FB80;
	sub_822C3488(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8231fde0
	if (!ctx.cr6.eq) goto loc_8231FDE0;
	// lwz r3,56(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231fde0
	if (ctx.cr6.eq) goto loc_8231FDE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231FBAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r3,240
	ctx.r4.s64 = ctx.r3.s64 + 240;
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// bl 0x822c4810
	ctx.lr = 0x8231FBB8;
	sub_822C4810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// bl 0x82fa77c0
	ctx.lr = 0x8231FBC8;
	sub_82FA77C0(ctx, base);
	// addi r29,r31,276
	ctx.r29.s64 = ctx.r31.s64 + 276;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c3ca0
	ctx.lr = 0x8231FBD8;
	sub_822C3CA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231fde0
	if (ctx.cr0.eq) goto loc_8231FDE0;
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82323028
	ctx.lr = 0x8231FBEC;
	sub_82323028(ctx, base);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
loc_8231FC00:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8231fc20
	if (!ctx.cr6.lt) goto loc_8231FC20;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb. r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8231fc00
	if (!ctx.cr0.eq) goto loc_8231FC00;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
loc_8231FC20:
	// bne cr6,0x8231fc28
	if (!ctx.cr6.eq) goto loc_8231FC28;
	// stb r26,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r26.u8);
loc_8231FC28:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r9,r1,543
	ctx.r9.s64 = ctx.r1.s64 + 543;
	// addi r11,r11,324
	ctx.r11.s64 = ctx.r11.s64 + 324;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
loc_8231FC38:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8231fc58
	if (!ctx.cr6.lt) goto loc_8231FC58;
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb. r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8231fc38
	if (!ctx.cr0.eq) goto loc_8231FC38;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
loc_8231FC58:
	// bne cr6,0x8231fc60
	if (!ctx.cr6.eq) goto loc_8231FC60;
	// stb r26,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r26.u8);
loc_8231FC60:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r9,r1,1055
	ctx.r9.s64 = ctx.r1.s64 + 1055;
	// addi r11,r11,836
	ctx.r11.s64 = ctx.r11.s64 + 836;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
loc_8231FC70:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8231fc90
	if (!ctx.cr6.lt) goto loc_8231FC90;
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb. r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8231fc70
	if (!ctx.cr0.eq) goto loc_8231FC70;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
loc_8231FC90:
	// bne cr6,0x8231fc98
	if (!ctx.cr6.eq) goto loc_8231FC98;
	// stb r26,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r26.u8);
loc_8231FC98:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,1328(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1328);
	// lwz r9,1332(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1332);
	// lwz r8,1336(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1336);
	// lwz r7,1340(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1340);
	// lwz r6,1344(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1344);
	// stw r10,6344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6344, ctx.r10.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r9,6352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6352, ctx.r9.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r8,6356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6356, ctx.r8.u32);
	// lwz r11,1348(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1348);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r7,6360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6360, ctx.r7.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r6,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r6.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lbz r11,81(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8231fd28
	if (ctx.cr0.eq) goto loc_8231FD28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82320ba8
	ctx.lr = 0x8231FCF4;
	sub_82320BA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82323270
	ctx.lr = 0x8231FD00;
	sub_82323270(ctx, base);
	// bl 0x8226c3f0
	ctx.lr = 0x8231FD04;
	sub_8226C3F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r26.u32);
	// stw r26,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r26.u32);
	// stw r26,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r26.u32);
	// stw r25,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r25.u32);
	// bl 0x8231ccc0
	ctx.lr = 0x8231FD28;
	sub_8231CCC0(ctx, base);
loc_8231FD28:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82521208
	ctx.lr = 0x8231FD34;
	sub_82521208(ctx, base);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8231fdc0
	if (ctx.cr6.eq) goto loc_8231FDC0;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8231fd60
	goto loc_8231FD60;
loc_8231FD4C:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r9,45
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 45, ctx.xer);
	// beq cr6,0x8231fd6c
	if (ctx.cr6.eq) goto loc_8231FD6C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8231FD60:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8231fd4c
	if (!ctx.cr6.eq) goto loc_8231FD4C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8231FD6C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231fd80
	if (ctx.cr6.eq) goto loc_8231FD80;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82518760
	ctx.lr = 0x8231FD80;
	sub_82518760(ctx, base);
loc_8231FD80:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8231fda0
	goto loc_8231FDA0;
loc_8231FD8C:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r9,49
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 49, ctx.xer);
	// beq cr6,0x8231fdac
	if (ctx.cr6.eq) goto loc_8231FDAC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8231FDA0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8231fd8c
	if (!ctx.cr6.eq) goto loc_8231FD8C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8231FDAC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231fdc0
	if (ctx.cr6.eq) goto loc_8231FDC0;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// bl 0x82518760
	ctx.lr = 0x8231FDC0;
	sub_82518760(ctx, base);
loc_8231FDC0:
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8231FDD0;
	sub_82FA77C0(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231fde0
	if (ctx.cr6.eq) goto loc_8231FDE0;
	// bl 0x82241d18
	ctx.lr = 0x8231FDE0;
	sub_82241D18(ctx, base);
loc_8231FDE0:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8231fdf8
	if (ctx.cr6.eq) goto loc_8231FDF8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8231ff40
	if (!ctx.cr6.eq) goto loc_8231FF40;
loc_8231FDF8:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r4,r10,-4176
	ctx.r4.s64 = ctx.r10.s64 + -4176;
	// addi r3,r11,836
	ctx.r3.s64 = ctx.r11.s64 + 836;
	// bl 0x82557338
	ctx.lr = 0x8231FE10;
	sub_82557338(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r27,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r27.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// bl 0x828d6418
	ctx.lr = 0x8231FE2C;
	sub_828D6418(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828c4cb0
	ctx.lr = 0x8231FE34;
	sub_828C4CB0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
loc_8231FE40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d6418
	ctx.lr = 0x8231FE48;
	sub_828D6418(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828c4cb0
	ctx.lr = 0x8231FE50;
	sub_828C4CB0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8231fee8
	if (ctx.cr6.eq) goto loc_8231FEE8;
	// lwz r30,20(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c11f8
	ctx.lr = 0x8231FE68;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8231fed4
	if (!ctx.cr0.eq) goto loc_8231FED4;
	// lwz r11,1136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231fe94
	if (ctx.cr6.eq) goto loc_8231FE94;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231fe90
	if (ctx.cr0.eq) goto loc_8231FE90;
	// lwz r11,2144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231fe94
	if (ctx.cr6.eq) goto loc_8231FE94;
loc_8231FE90:
	// li r28,1
	ctx.r28.s64 = 1;
loc_8231FE94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ad4688
	ctx.lr = 0x8231FE9C;
	sub_82AD4688(ctx, base);
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// lbz r10,81(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 81);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwinm r30,r11,28,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// beq 0x8231fed0
	if (ctx.cr0.eq) goto loc_8231FED0;
	// lwz r11,2404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2404);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8231fed0
	if (ctx.cr6.eq) goto loc_8231FED0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231ccc0
	ctx.lr = 0x8231FED0;
	sub_8231CCC0(ctx, base);
loc_8231FED0:
	// stw r30,2404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2404, ctx.r30.u32);
loc_8231FED4:
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8241a2b0
	ctx.lr = 0x8231FEDC;
	sub_8241A2B0(ctx, base);
	// lwz r29,132(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x8231fe40
	goto loc_8231FE40;
loc_8231FEE8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8231ff40
	if (ctx.cr6.eq) goto loc_8231FF40;
	// lbz r11,81(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8231ff40
	if (!ctx.cr0.eq) goto loc_8231FF40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82320ba8
	ctx.lr = 0x8231FF04;
	sub_82320BA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82323270
	ctx.lr = 0x8231FF10;
	sub_82323270(ctx, base);
	// bl 0x8226c3f0
	ctx.lr = 0x8231FF14;
	sub_8226C3F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r26.u32);
	// stw r26,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r26.u32);
	// stw r26,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r26.u32);
	// stw r25,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r25.u32);
	// bl 0x8231ccc0
	ctx.lr = 0x8231FF38;
	sub_8231CCC0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,81(r24)
	PPC_STORE_U8(ctx.r24.u32 + 81, ctx.r11.u8);
loc_8231FF40:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231ff50
	if (ctx.cr6.eq) goto loc_8231FF50;
	// bl 0x82241d18
	ctx.lr = 0x8231FF50;
	sub_82241D18(ctx, base);
loc_8231FF50:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231ff60
	if (ctx.cr6.eq) goto loc_8231FF60;
	// bl 0x82241d18
	ctx.lr = 0x8231FF60;
	sub_82241D18(ctx, base);
loc_8231FF60:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231ff70
	if (ctx.cr6.eq) goto loc_8231FF70;
	// bl 0x82241d18
	ctx.lr = 0x8231FF70;
	sub_82241D18(ctx, base);
loc_8231FF70:
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8231FF7C"))) PPC_WEAK_FUNC(sub_8231FF7C);
PPC_FUNC_IMPL(__imp__sub_8231FF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231FF80"))) PPC_WEAK_FUNC(sub_8231FF80);
PPC_FUNC_IMPL(__imp__sub_8231FF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8231FF88;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r7,124
	ctx.r3.s64 = ctx.r7.s64 + 124;
	// bl 0x82544c50
	ctx.lr = 0x8231FFA4;
	sub_82544C50(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r11,21421(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21421);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne 0x8231ffd0
	if (!ctx.cr0.eq) goto loc_8231FFD0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82520d20
	ctx.lr = 0x8231FFC4;
	sub_82520D20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// beq 0x8231ffd4
	if (ctx.cr0.eq) goto loc_8231FFD4;
loc_8231FFD0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8231FFD4:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320070
	if (ctx.cr6.eq) goto loc_82320070;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// beq cr6,0x82320054
	if (ctx.cr6.eq) goto loc_82320054;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r10,r10,24448
	ctx.r10.s64 = ctx.r10.s64 + 24448;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82320054
	if (!ctx.cr6.eq) goto loc_82320054;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bne cr6,0x82320014
	if (!ctx.cr6.eq) goto loc_82320014;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x82320074
	goto loc_82320074;
loc_82320014:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82320028
	if (ctx.cr6.eq) goto loc_82320028;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82320034
	if (!ctx.cr6.eq) goto loc_82320034;
loc_82320028:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x82320074
	goto loc_82320074;
loc_82320034:
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x8232004c
	if (!ctx.cr6.eq) goto loc_8232004C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8232004c
	if (ctx.cr6.eq) goto loc_8232004C;
	// li r29,4
	ctx.r29.s64 = 4;
	// b 0x82320074
	goto loc_82320074;
loc_8232004C:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82320074
	goto loc_82320074;
loc_82320054:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320074
	if (ctx.cr6.eq) goto loc_82320074;
	// bl 0x82524840
	ctx.lr = 0x82320064;
	sub_82524840(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// b 0x82320074
	goto loc_82320074;
loc_82320070:
	// li r29,5
	ctx.r29.s64 = 5;
loc_82320074:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8232008c
	if (!ctx.cr6.eq) goto loc_8232008C;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82320150
	if (ctx.cr6.eq) goto loc_82320150;
loc_8232008C:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320148
	if (ctx.cr6.eq) goto loc_82320148;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// lhz r30,31944(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x823200B4;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// sth r30,592(r1)
	PPC_STORE_U16(ctx.r1.u32 + 592, ctx.r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,594
	ctx.r3.s64 = ctx.r1.s64 + 594;
	// bl 0x82fa7cf0
	ctx.lr = 0x823200C8;
	sub_82FA7CF0(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x823200f0
	if (ctx.cr6.eq) goto loc_823200F0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-4188
	ctx.r4.s64 = ctx.r11.s64 + -4188;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// bl 0x8259c8e0
	ctx.lr = 0x823200F0;
	sub_8259C8E0(ctx, base);
loc_823200F0:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82320118
	if (ctx.cr6.eq) goto loc_82320118;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82320170
	if (ctx.cr6.eq) goto loc_82320170;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x82320164
	if (ctx.cr6.eq) goto loc_82320164;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// beq cr6,0x82320158
	if (ctx.cr6.eq) goto loc_82320158;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// bne cr6,0x82320138
	if (!ctx.cr6.eq) goto loc_82320138;
loc_82320118:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-7760
	ctx.r4.s64 = ctx.r11.s64 + -7760;
loc_82320120:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8259c8e0
	ctx.lr = 0x82320138;
	sub_8259C8E0(ctx, base);
loc_82320138:
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825249c8
	ctx.lr = 0x82320148;
	sub_825249C8(ctx, base);
loc_82320148:
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
loc_82320150:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82320158:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-3836
	ctx.r4.s64 = ctx.r11.s64 + -3836;
	// b 0x82320120
	goto loc_82320120;
loc_82320164:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-3872
	ctx.r4.s64 = ctx.r11.s64 + -3872;
	// b 0x82320120
	goto loc_82320120;
loc_82320170:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-3856
	ctx.r4.s64 = ctx.r11.s64 + -3856;
	// b 0x82320120
	goto loc_82320120;
}

__attribute__((alias("__imp__sub_8232017C"))) PPC_WEAK_FUNC(sub_8232017C);
PPC_FUNC_IMPL(__imp__sub_8232017C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320180"))) PPC_WEAK_FUNC(sub_82320180);
PPC_FUNC_IMPL(__imp__sub_82320180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82320188;
	__savegprlr_26(ctx, base);
	// stwu r1,-2240(r1)
	ea = -2240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bl 0x82521208
	ctx.lr = 0x823201A8;
	sub_82521208(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82320200
	if (ctx.cr6.eq) goto loc_82320200;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r31,3
	ctx.r31.s64 = 3;
	// bl 0x82521208
	ctx.lr = 0x823201C4;
	sub_82521208(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x823201e8
	goto loc_823201E8;
loc_823201D4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r8,49
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 49, ctx.xer);
	// beq cr6,0x823201f4
	if (ctx.cr6.eq) goto loc_823201F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823201E8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823201d4
	if (!ctx.cr6.eq) goto loc_823201D4;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_823201F4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bne cr6,0x82320204
	if (!ctx.cr6.eq) goto loc_82320204;
loc_82320200:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82320204:
	// rlwinm. r10,r31,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82320224
	if (ctx.cr0.eq) goto loc_82320224;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320224
	if (ctx.cr6.eq) goto loc_82320224;
	// bl 0x82241d18
	ctx.lr = 0x82320224;
	sub_82241D18(ctx, base);
loc_82320224:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232023c
	if (ctx.cr0.eq) goto loc_8232023C;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232023c
	if (ctx.cr6.eq) goto loc_8232023C;
	// bl 0x82241d18
	ctx.lr = 0x8232023C;
	sub_82241D18(ctx, base);
loc_8232023C:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82320740
	if (!ctx.cr0.eq) goto loc_82320740;
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232039c
	if (ctx.cr6.eq) goto loc_8232039C;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82320280
	if (!ctx.cr6.eq) goto loc_82320280;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// ld r11,6368(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6368);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82320278
	if (!ctx.cr6.eq) goto loc_82320278;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x8232039c
	goto loc_8232039C;
loc_82320278:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x8232039c
	goto loc_8232039C;
loc_82320280:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82320374
	if (!ctx.cr6.eq) goto loc_82320374;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r4,31080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823202a0
	if (!ctx.cr6.eq) goto loc_823202A0;
	// bl 0x8254abe0
	ctx.lr = 0x8232029C;
	sub_8254ABE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_823202A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c1b0
	ctx.lr = 0x823202AC;
	sub_8254C1B0(ctx, base);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82320360
	if (ctx.cr6.eq) goto loc_82320360;
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823202d4
	if (ctx.cr6.eq) goto loc_823202D4;
	// bl 0x8225e260
	ctx.lr = 0x823202CC;
	sub_8225E260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x823202d8
	goto loc_823202D8;
loc_823202D4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_823202D8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82320300
	if (ctx.cr6.eq) goto loc_82320300;
	// bl 0x828e3618
	ctx.lr = 0x823202E8;
	sub_828E3618(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,3
	ctx.r10.s64 = 3;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82320318
	goto loc_82320318;
loc_82320300:
	// bl 0x828e3618
	ctx.lr = 0x82320304;
	sub_828E3618(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82320314
	if (ctx.cr0.eq) goto loc_82320314;
	// lwz r30,168(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// b 0x82320318
	goto loc_82320318;
loc_82320314:
	// li r30,3
	ctx.r30.s64 = 3;
loc_82320318:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824261e8
	ctx.lr = 0x82320324;
	sub_824261E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82320350
	if (ctx.cr6.eq) goto loc_82320350;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82320344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,492
	ctx.r3.s64 = ctx.r3.s64 + 492;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828df890
	ctx.lr = 0x82320350;
	sub_828DF890(ctx, base);
loc_82320350:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320360
	if (ctx.cr6.eq) goto loc_82320360;
	// bl 0x82241d18
	ctx.lr = 0x82320360;
	sub_82241D18(ctx, base);
loc_82320360:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232039c
	if (ctx.cr6.eq) goto loc_8232039C;
	// bl 0x82241d18
	ctx.lr = 0x82320370;
	sub_82241D18(ctx, base);
	// b 0x8232039c
	goto loc_8232039C;
loc_82320374:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82320384
	if (!ctx.cr6.eq) goto loc_82320384;
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x8232039c
	goto loc_8232039C;
loc_82320384:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82320398
	if (ctx.cr6.eq) goto loc_82320398;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8232039c
	if (!ctx.cr6.eq) goto loc_8232039C;
loc_82320398:
	// li r30,5
	ctx.r30.s64 = 5;
loc_8232039C:
	// lwz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82320740
	if (ctx.cr6.eq) goto loc_82320740;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x823203d0
	if (!ctx.cr6.eq) goto loc_823203D0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823203c8
	if (!ctx.cr6.eq) goto loc_823203C8;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// stw r27,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r27.u32);
	// stw r26,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r26.u32);
	// stw r26,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r26.u32);
loc_823203C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82320d50
	ctx.lr = 0x823203D0;
	sub_82320D50(ctx, base);
loc_823203D0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82521208
	ctx.lr = 0x823203DC;
	sub_82521208(ctx, base);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82320730
	if (ctx.cr6.eq) goto loc_82320730;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82320408
	goto loc_82320408;
loc_823203F4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r8,49
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 49, ctx.xer);
	// beq cr6,0x8232046c
	if (ctx.cr6.eq) goto loc_8232046C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82320408:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823203f4
	if (!ctx.cr6.eq) goto loc_823203F4;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82320414:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82320720
	if (ctx.cr6.eq) goto loc_82320720;
	// lwz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8232043c
	if (!ctx.cr6.eq) goto loc_8232043C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8232043c
	if (!ctx.cr6.eq) goto loc_8232043C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,272
	ctx.r3.s64 = ctx.r29.s64 + 272;
	// bl 0x82570620
	ctx.lr = 0x8232043C;
	sub_82570620(ctx, base);
loc_8232043C:
	// stw r30,168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 168, ctx.r30.u32);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x823204a4
	if (ctx.cr6.lt) goto loc_823204A4;
	// beq cr6,0x82320498
	if (ctx.cr6.eq) goto loc_82320498;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x8232048c
	if (ctx.cr6.lt) goto loc_8232048C;
	// beq cr6,0x82320480
	if (ctx.cr6.eq) goto loc_82320480;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5, ctx.xer);
	// blt cr6,0x82320474
	if (ctx.cr6.lt) goto loc_82320474;
	// beq cr6,0x82320480
	if (ctx.cr6.eq) goto loc_82320480;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x823204ac
	goto loc_823204AC;
loc_8232046C:
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// b 0x82320414
	goto loc_82320414;
loc_82320474:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-3624
	ctx.r5.s64 = ctx.r11.s64 + -3624;
	// b 0x823204ac
	goto loc_823204AC;
loc_82320480:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-3584
	ctx.r5.s64 = ctx.r11.s64 + -3584;
	// b 0x823204ac
	goto loc_823204AC;
loc_8232048C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-3600
	ctx.r5.s64 = ctx.r11.s64 + -3600;
	// b 0x823204ac
	goto loc_823204AC;
loc_82320498:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-3608
	ctx.r5.s64 = ctx.r11.s64 + -3608;
	// b 0x823204ac
	goto loc_823204AC;
loc_823204A4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-7120
	ctx.r5.s64 = ctx.r11.s64 + -7120;
loc_823204AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825181d0
	ctx.lr = 0x823204B8;
	sub_825181D0(ctx, base);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x82320520
	if (ctx.cr6.eq) goto loc_82320520;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x82320520
	if (ctx.cr6.eq) goto loc_82320520;
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82320584
	if (ctx.cr6.eq) goto loc_82320584;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82521208
	ctx.lr = 0x823204E0;
	sub_82521208(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82519160
	ctx.lr = 0x823204F0;
	sub_82519160(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320500
	if (ctx.cr6.eq) goto loc_82320500;
	// bl 0x82241d18
	ctx.lr = 0x82320500;
	sub_82241D18(ctx, base);
loc_82320500:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-3544
	ctx.r4.s64 = ctx.r11.s64 + -3544;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x82320518;
	sub_826A7620(ctx, base);
	// stw r27,204(r29)
	PPC_STORE_U32(ctx.r29.u32 + 204, ctx.r27.u32);
	// b 0x82320574
	goto loc_82320574;
loc_82320520:
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82320584
	if (ctx.cr6.eq) goto loc_82320584;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82521208
	ctx.lr = 0x82320538;
	sub_82521208(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82519160
	ctx.lr = 0x82320548;
	sub_82519160(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320558
	if (ctx.cr6.eq) goto loc_82320558;
	// bl 0x82241d18
	ctx.lr = 0x82320558;
	sub_82241D18(ctx, base);
loc_82320558:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-3560
	ctx.r4.s64 = ctx.r11.s64 + -3560;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x82320570;
	sub_826A7620(ctx, base);
	// stw r26,204(r29)
	PPC_STORE_U32(ctx.r29.u32 + 204, ctx.r26.u32);
loc_82320574:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320584
	if (ctx.cr6.eq) goto loc_82320584;
	// bl 0x82241d18
	ctx.lr = 0x82320584;
	sub_82241D18(ctx, base);
loc_82320584:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8232068c
	if (ctx.cr6.eq) goto loc_8232068C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r11,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
	// beq cr6,0x8232067c
	if (ctx.cr6.eq) goto loc_8232067C;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x8232063c
	if (ctx.cr6.eq) goto loc_8232063C;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x823205fc
	if (ctx.cr6.eq) goto loc_823205FC;
	// bl 0x82fa7cf0
	ctx.lr = 0x823205C0;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,160(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// addi r4,r11,-3660
	ctx.r4.s64 = ctx.r11.s64 + -3660;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x8259c8e0
	ctx.lr = 0x823205E0;
	sub_8259C8E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8250e4d8
	ctx.lr = 0x823205F0;
	sub_8250E4D8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-3640
	ctx.r4.s64 = ctx.r11.s64 + -3640;
	// b 0x823206f8
	goto loc_823206F8;
loc_823205FC:
	// bl 0x82fa7cf0
	ctx.lr = 0x82320600;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,160(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// addi r4,r11,-3776
	ctx.r4.s64 = ctx.r11.s64 + -3776;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x8259c8e0
	ctx.lr = 0x82320620;
	sub_8259C8E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8250e4d8
	ctx.lr = 0x82320630;
	sub_8250E4D8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-3756
	ctx.r4.s64 = ctx.r11.s64 + -3756;
	// b 0x823206f8
	goto loc_823206F8;
loc_8232063C:
	// bl 0x82fa7cf0
	ctx.lr = 0x82320640;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,160(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// addi r4,r11,-3824
	ctx.r4.s64 = ctx.r11.s64 + -3824;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x8259c8e0
	ctx.lr = 0x82320660;
	sub_8259C8E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8250e4d8
	ctx.lr = 0x82320670;
	sub_8250E4D8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-3796
	ctx.r4.s64 = ctx.r11.s64 + -3796;
	// b 0x823206f8
	goto loc_823206F8;
loc_8232067C:
	// bl 0x82fa7cf0
	ctx.lr = 0x82320680;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-3692
	ctx.r4.s64 = ctx.r11.s64 + -3692;
	// b 0x823206c8
	goto loc_823206C8;
loc_8232068C:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320720
	if (ctx.cr6.eq) goto loc_82320720;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82320720
	if (!ctx.cr6.eq) goto loc_82320720;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r11,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x823206C0;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-3736
	ctx.r4.s64 = ctx.r11.s64 + -3736;
loc_823206C8:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,160(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x8259c8e0
	ctx.lr = 0x823206E0;
	sub_8259C8E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8250e4d8
	ctx.lr = 0x823206F0;
	sub_8250E4D8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-3708
	ctx.r4.s64 = ctx.r11.s64 + -3708;
loc_823206F8:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,160(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x8259c8e0
	ctx.lr = 0x82320710;
	sub_8259C8E0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8250e4d8
	ctx.lr = 0x82320720;
	sub_8250E4D8(ctx, base);
loc_82320720:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82519230
	ctx.lr = 0x82320730;
	sub_82519230(ctx, base);
loc_82320730:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320740
	if (ctx.cr6.eq) goto loc_82320740;
	// bl 0x82241d18
	ctx.lr = 0x82320740;
	sub_82241D18(ctx, base);
loc_82320740:
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82320748"))) PPC_WEAK_FUNC(sub_82320748);
PPC_FUNC_IMPL(__imp__sub_82320748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82320750;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232077c
	if (!ctx.cr6.eq) goto loc_8232077C;
	// bl 0x8250eb18
	ctx.lr = 0x82320768;
	sub_8250EB18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82320850
	if (ctx.cr0.eq) goto loc_82320850;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8231da00
	ctx.lr = 0x82320778;
	sub_8231DA00(ctx, base);
	// b 0x82320850
	goto loc_82320850;
loc_8232077C:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82320788:
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,2120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2120);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82320840
	if (ctx.cr6.eq) goto loc_82320840;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8250ec88
	ctx.lr = 0x823207AC;
	sub_8250EC88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232083c
	if (ctx.cr0.eq) goto loc_8232083C;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r3,236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	// bl 0x8251dc88
	ctx.lr = 0x823207E8;
	sub_8251DC88(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f11,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// ld r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x8251ddd8
	ctx.lr = 0x8232083C;
	sub_8251DDD8(ctx, base);
loc_8232083C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82320840:
	// addi r30,r30,1056
	ctx.r30.s64 = ctx.r30.s64 + 1056;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r30,4224
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4224, ctx.xer);
	// blt cr6,0x82320788
	if (ctx.cr6.lt) goto loc_82320788;
loc_82320850:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82320858"))) PPC_WEAK_FUNC(sub_82320858);
PPC_FUNC_IMPL(__imp__sub_82320858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82320860;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8250ebe8
	ctx.lr = 0x82320878;
	sub_8250EBE8(ctx, base);
	// lwz r11,1560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82320adc
	if (ctx.cr6.eq) goto loc_82320ADC;
	// lwz r8,72(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 72);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r11,6344(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823208d8
	if (!ctx.cr6.eq) goto loc_823208D8;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823208A8:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r11,2120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2120);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823208bc
	if (ctx.cr6.eq) goto loc_823208BC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_823208BC:
	// addi r10,r10,1056
	ctx.r10.s64 = ctx.r10.s64 + 1056;
	// bdnz 0x823208a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823208A8;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x823208d8
	if (!ctx.cr6.lt) goto loc_823208D8;
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 1, ctx.xer);
	// bne cr6,0x823208d8
	if (!ctx.cr6.eq) goto loc_823208D8;
	// li r31,2
	ctx.r31.s64 = 2;
loc_823208D8:
	// mulli r11,r31,1056
	ctx.r11.s64 = ctx.r31.s64 * 1056;
	// add r23,r11,r8
	ctx.r23.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,2120(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 2120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823208f4
	if (ctx.cr6.eq) goto loc_823208F4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82320914
	if (!ctx.cr6.eq) goto loc_82320914;
loc_823208F4:
	// bl 0x8226d8e8
	ctx.lr = 0x823208F8;
	sub_8226D8E8(ctx, base);
	// lwz r4,2124(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 2124);
	// bl 0x8226ecf0
	ctx.lr = 0x82320900;
	sub_8226ECF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82320a8c
	if (ctx.cr0.eq) goto loc_82320A8C;
	// bl 0x82920528
	ctx.lr = 0x8232090C;
	sub_82920528(ctx, base);
	// ld r24,0(r3)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x82320918
	goto loc_82320918;
loc_82320914:
	// ld r24,3136(r23)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r23.u32 + 3136);
loc_82320918:
	// cmpldi cr6,r24,0
	ctx.cr6.compare<uint64_t>(ctx.r24.u64, 0, ctx.xer);
	// beq cr6,0x82320a8c
	if (ctx.cr6.eq) goto loc_82320A8C;
	// bl 0x82514288
	ctx.lr = 0x82320924;
	sub_82514288(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r25,r11,21120
	ctx.r25.s64 = ctx.r11.s64 + 21120;
	// lbz r11,69(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 69);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82320a8c
	if (ctx.cr0.eq) goto loc_82320A8C;
	// bl 0x8226d8e8
	ctx.lr = 0x82320940;
	sub_8226D8E8(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82320a8c
	if (ctx.cr0.eq) goto loc_82320A8C;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82320a14
	if (ctx.cr6.eq) goto loc_82320A14;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_8232096C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82320990
	if (!ctx.cr6.lt) goto loc_82320990;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// b 0x82320994
	goto loc_82320994;
loc_82320990:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82320994:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823209fc
	if (ctx.cr6.eq) goto loc_823209FC;
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823209fc
	if (!ctx.cr0.eq) goto loc_823209FC;
	// std r24,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r24.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920550
	ctx.lr = 0x823209B4;
	sub_82920550(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x823209fc
	if (ctx.cr6.lt) goto loc_823209FC;
	// beq cr6,0x823209cc
	if (ctx.cr6.eq) goto loc_823209CC;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x823209f8
	if (ctx.cr6.lt) goto loc_823209F8;
	// b 0x823209fc
	goto loc_823209FC;
loc_823209CC:
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829204e8
	ctx.lr = 0x823209D8;
	sub_829204E8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82a74bb8
	ctx.lr = 0x823209EC;
	sub_82A74BB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823209fc
	if (!ctx.cr6.eq) goto loc_823209FC;
loc_823209F8:
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
loc_823209FC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8232096c
	if (ctx.cr6.lt) goto loc_8232096C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82320a8c
	if (ctx.cr6.eq) goto loc_82320A8C;
loc_82320A14:
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82320a8c
	if (ctx.cr6.eq) goto loc_82320A8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829204e8
	ctx.lr = 0x82320A28;
	sub_829204E8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82320a8c
	if (ctx.cr0.lt) goto loc_82320A8C;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x82320a8c
	if (!ctx.cr6.lt) goto loc_82320A8C;
	// lwz r11,2120(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 2120);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82320a8c
	if (!ctx.cr6.eq) goto loc_82320A8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825487e8
	ctx.lr = 0x82320A4C;
	sub_825487E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82320a8c
	if (ctx.cr0.eq) goto loc_82320A8C;
	// bl 0x82513ff0
	ctx.lr = 0x82320A58;
	sub_82513FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82320a70
	if (ctx.cr0.eq) goto loc_82320A70;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a74da0
	ctx.lr = 0x82320A6C;
	sub_82A74DA0(ctx, base);
	// b 0x82320a80
	goto loc_82320A80;
loc_82320A70:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a74d70
	ctx.lr = 0x82320A80;
	sub_82A74D70(ctx, base);
loc_82320A80:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82320adc
	if (ctx.cr0.eq) goto loc_82320ADC;
loc_82320A8C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8250ebe8
	ctx.lr = 0x82320A94;
	sub_8250EBE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82320adc
	if (ctx.cr0.eq) goto loc_82320ADC;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// addi r4,r19,64
	ctx.r4.s64 = ctx.r19.s64 + 64;
	// ori r9,r11,26125
	ctx.r9.u64 = ctx.r11.u64 | 26125;
	// lwz r11,21292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21292);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// addic. r11,r11,-3233
	ctx.xer.ca = ctx.r11.u32 > 3232;
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,21292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21292, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r21,1548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1548, ctx.r21.u32);
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1544(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1544, temp.u32);
	// bgt 0x82320ad8
	if (ctx.cr0.gt) goto loc_82320AD8;
	// addi r4,r19,68
	ctx.r4.s64 = ctx.r19.s64 + 68;
loc_82320AD8:
	// bl 0x82532c48
	ctx.lr = 0x82320ADC;
	sub_82532C48(ctx, base);
loc_82320ADC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82320AE4"))) PPC_WEAK_FUNC(sub_82320AE4);
PPC_FUNC_IMPL(__imp__sub_82320AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320AE8"))) PPC_WEAK_FUNC(sub_82320AE8);
PPC_FUNC_IMPL(__imp__sub_82320AE8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8250ebe8
	ctx.lr = 0x82320B04;
	sub_8250EBE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82320b70
	if (ctx.cr0.eq) goto loc_82320B70;
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1596(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1596);
	// beq 0x82320b68
	if (ctx.cr0.eq) goto loc_82320B68;
	// lwz r10,444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82320b70
	if (!ctx.cr6.eq) goto loc_82320B70;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r9.u32);
	// lwz r11,-3848(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320b48
	if (ctx.cr6.eq) goto loc_82320B48;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// stw r10,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r10.u32);
loc_82320B48:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// lis r9,-31967
	ctx.r9.s64 = -2094989312;
	// lfs f3,-1980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1980);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-20480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20480);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-20484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8258aac0
	ctx.lr = 0x82320B64;
	sub_8258AAC0(ctx, base);
	// b 0x82320b70
	goto loc_82320B70;
loc_82320B68:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
loc_82320B70:
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

__attribute__((alias("__imp__sub_82320B84"))) PPC_WEAK_FUNC(sub_82320B84);
PPC_FUNC_IMPL(__imp__sub_82320B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320B88"))) PPC_WEAK_FUNC(sub_82320B88);
PPC_FUNC_IMPL(__imp__sub_82320B88) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,20
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 20, ctx.xer);
	// blt cr6,0x82320b9c
	if (ctx.cr6.lt) goto loc_82320B9C;
	// cmpwi cr6,r5,100
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 100, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82320ba0
	if (ctx.cr6.lt) goto loc_82320BA0;
loc_82320B9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82320BA0:
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82320BA8"))) PPC_WEAK_FUNC(sub_82320BA8);
PPC_FUNC_IMPL(__imp__sub_82320BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82320BB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8226d8e8
	ctx.lr = 0x82320BBC;
	sub_8226D8E8(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r27,r3,32
	ctx.r27.s64 = ctx.r3.s64 + 32;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// srawi r25,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r10.s32 >> 2;
loc_82320BE8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82324148
	ctx.lr = 0x82320BF0;
	sub_82324148(ctx, base);
	// lwz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,2120
	ctx.r3.s64 = ctx.r11.s64 + 2120;
	// bl 0x82315f00
	ctx.lr = 0x82320C04;
	sub_82315F00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x822402c8
	ctx.lr = 0x82320C14;
	sub_822402C8(ctx, base);
	// addi r31,r31,1056
	ctx.r31.s64 = ctx.r31.s64 + 1056;
	// cmpwi cr6,r31,4224
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4224, ctx.xer);
	// blt cr6,0x82320be8
	if (ctx.cr6.lt) goto loc_82320BE8;
	// lwz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// lwz r11,6344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6344);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82320c3c
	if (ctx.cr6.lt) goto loc_82320C3C;
	// beq cr6,0x82320c5c
	if (ctx.cr6.eq) goto loc_82320C5C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82320d48
	if (!ctx.cr6.lt) goto loc_82320D48;
loc_82320C3C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82320d08
	if (ctx.cr0.eq) goto loc_82320D08;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82320d0c
	goto loc_82320D0C;
loc_82320C5C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82320cb0
	if (ctx.cr6.eq) goto loc_82320CB0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82320C6C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82320c90
	if (!ctx.cr6.lt) goto loc_82320C90;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// b 0x82320c94
	goto loc_82320C94;
loc_82320C90:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82320C94:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82320e90
	ctx.lr = 0x82320CA0;
	sub_82320E90(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82320c6c
	if (ctx.cr6.lt) goto loc_82320C6C;
loc_82320CB0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82320d48
	if (ctx.cr6.eq) goto loc_82320D48;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82320CC0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82320ce4
	if (!ctx.cr6.lt) goto loc_82320CE4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// b 0x82320ce8
	goto loc_82320CE8;
loc_82320CE4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82320CE8:
	// addi r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82320e90
	ctx.lr = 0x82320CF4;
	sub_82320E90(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82320cc0
	if (ctx.cr6.lt) goto loc_82320CC0;
	// b 0x82320d48
	goto loc_82320D48;
loc_82320D08:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82320D0C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82320e90
	ctx.lr = 0x82320D18;
	sub_82320E90(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82320d38
	if (ctx.cr0.eq) goto loc_82320D38;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82320d3c
	goto loc_82320D3C;
loc_82320D38:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82320D3C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82320e90
	ctx.lr = 0x82320D48;
	sub_82320E90(ctx, base);
loc_82320D48:
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82320D50"))) PPC_WEAK_FUNC(sub_82320D50);
PPC_FUNC_IMPL(__imp__sub_82320D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-3216(r1)
	ea = -3216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,999
	ctx.r5.s64 = 999;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,2192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2192, ctx.r11.u8);
	// addi r3,r1,2193
	ctx.r3.s64 = ctx.r1.s64 + 2193;
	// bl 0x82fa7cf0
	ctx.lr = 0x82320D7C;
	sub_82FA7CF0(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,6344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6344);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82320d98
	if (ctx.cr6.lt) goto loc_82320D98;
	// beq cr6,0x82320e0c
	if (ctx.cr6.eq) goto loc_82320E0C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82320df8
	if (!ctx.cr6.lt) goto loc_82320DF8;
loc_82320D98:
	// lbz r11,4228(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4228);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82320df8
	if (!ctx.cr0.eq) goto loc_82320DF8;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x82324148
	ctx.lr = 0x82320DAC;
	sub_82324148(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r3,r1,1148
	ctx.r3.s64 = ctx.r1.s64 + 1148;
	// stb r11,2188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2188, ctx.r11.u8);
	// addi r4,r1,2192
	ctx.r4.s64 = ctx.r1.s64 + 2192;
	// stw r10,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, ctx.r10.u32);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// bl 0x82fa77c0
	ctx.lr = 0x82320DCC;
	sub_82FA77C0(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r4,r1,1136
	ctx.r4.s64 = ctx.r1.s64 + 1136;
	// addi r3,r11,3176
	ctx.r3.s64 = ctx.r11.s64 + 3176;
	// bl 0x82315f00
	ctx.lr = 0x82320DDC;
	sub_82315F00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231ccc0
	ctx.lr = 0x82320DE8;
	sub_8231CCC0(ctx, base);
	// addi r3,r1,2160
	ctx.r3.s64 = ctx.r1.s64 + 2160;
loc_82320DEC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x82320DF8;
	sub_822402C8(ctx, base);
loc_82320DF8:
	// addi r1,r1,3216
	ctx.r1.s64 = ctx.r1.s64 + 3216;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82320E0C:
	// lbz r11,5284(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5284);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82320df8
	if (!ctx.cr0.eq) goto loc_82320DF8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82324148
	ctx.lr = 0x82320E20;
	sub_82324148(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stb r11,1132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1132, ctx.r11.u8);
	// addi r4,r1,2192
	ctx.r4.s64 = ctx.r1.s64 + 2192;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// bl 0x82fa77c0
	ctx.lr = 0x82320E40;
	sub_82FA77C0(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,4232
	ctx.r3.s64 = ctx.r11.s64 + 4232;
	// bl 0x82315f00
	ctx.lr = 0x82320E50;
	sub_82315F00(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,5288
	ctx.r3.s64 = ctx.r11.s64 + 5288;
	// lwz r10,5288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5288);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82320e74
	if (ctx.cr6.eq) goto loc_82320E74;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r3,r11,3176
	ctx.r3.s64 = ctx.r11.s64 + 3176;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82320E74:
	// bl 0x82315f00
	ctx.lr = 0x82320E78;
	sub_82315F00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231ccc0
	ctx.lr = 0x82320E84;
	sub_8231CCC0(ctx, base);
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// b 0x82320dec
	goto loc_82320DEC;
}

__attribute__((alias("__imp__sub_82320E8C"))) PPC_WEAK_FUNC(sub_82320E8C);
PPC_FUNC_IMPL(__imp__sub_82320E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320E90"))) PPC_WEAK_FUNC(sub_82320E90);
PPC_FUNC_IMPL(__imp__sub_82320E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82320E98;
	__savegprlr_27(ctx, base);
	// stwu r1,-2240(r1)
	ea = -2240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82324148
	ctx.lr = 0x82320EB0;
	sub_82324148(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x82320EC0;
	sub_822402C8(ctx, base);
	// bl 0x8226d8e8
	ctx.lr = 0x82320EC4;
	sub_8226D8E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,1184
	ctx.r4.s64 = ctx.r1.s64 + 1184;
	// bl 0x8226ed48
	ctx.lr = 0x82320ED4;
	sub_8226ED48(ctx, base);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r4,r1,1184
	ctx.r4.s64 = ctx.r1.s64 + 1184;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82a75198
	ctx.lr = 0x82320EE4;
	sub_82A75198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920500
	ctx.lr = 0x82320EEC;
	sub_82920500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// bne 0x82320f00
	if (!ctx.cr0.eq) goto loc_82320F00;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82320f28
	goto loc_82320F28;
loc_82320F00:
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82320f24
	if (!ctx.cr0.eq) goto loc_82320F24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920518
	ctx.lr = 0x82320F14;
	sub_82920518(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82320f24
	if (!ctx.cr0.eq) goto loc_82320F24;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// b 0x82320f2c
	goto loc_82320F2C;
loc_82320F24:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82320F28:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_82320F2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920500
	ctx.lr = 0x82320F34;
	sub_82920500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,-1
	ctx.r30.s64 = -1;
	// beq 0x82320f50
	if (ctx.cr0.eq) goto loc_82320F50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829204e8
	ctx.lr = 0x82320F48;
	sub_829204E8(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// b 0x82320f54
	goto loc_82320F54;
loc_82320F50:
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
loc_82320F54:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r27,1180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1180, ctx.r27.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x82920528
	ctx.lr = 0x82320F68;
	sub_82920528(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,1144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1144, ctx.r11.u64);
	// bl 0x82920520
	ctx.lr = 0x82320F7C;
	sub_82920520(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x822401e0
	ctx.lr = 0x82320F90;
	sub_822401E0(ctx, base);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// mulli r10,r28,1056
	ctx.r10.s64 = ctx.r28.s64 * 1056;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,2120
	ctx.r3.s64 = ctx.r11.s64 + 2120;
	// bl 0x82315f00
	ctx.lr = 0x82320FA8;
	sub_82315F00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x82320FB8;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x822402c8
	ctx.lr = 0x82320FC8;
	sub_822402C8(ctx, base);
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82320FD0"))) PPC_WEAK_FUNC(sub_82320FD0);
PPC_FUNC_IMPL(__imp__sub_82320FD0) {
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
	// bl 0x82321020
	ctx.lr = 0x82320FF0;
	sub_82321020(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82321000
	if (ctx.cr0.eq) goto loc_82321000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82321000;
	sub_82691540(ctx, base);
loc_82321000:
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

__attribute__((alias("__imp__sub_8232101C"))) PPC_WEAK_FUNC(sub_8232101C);
PPC_FUNC_IMPL(__imp__sub_8232101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321020"))) PPC_WEAK_FUNC(sub_82321020);
PPC_FUNC_IMPL(__imp__sub_82321020) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r11,r11,-3528
	ctx.r11.s64 = ctx.r11.s64 + -3528;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8231c498
	ctx.lr = 0x82321048;
	sub_8231C498(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,524
	ctx.r11.s64 = ctx.r11.s64 + 524;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82321068"))) PPC_WEAK_FUNC(sub_82321068);
PPC_FUNC_IMPL(__imp__sub_82321068) {
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
	// lwz r11,2440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2440);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823210a8
	if (ctx.cr6.eq) goto loc_823210A8;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8231d0b0
	ctx.lr = 0x823210A0;
	sub_8231D0B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r11.u32);
loc_823210A8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8231c5e8
	ctx.lr = 0x823210B8;
	sub_8231C5E8(ctx, base);
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

__attribute__((alias("__imp__sub_823210D4"))) PPC_WEAK_FUNC(sub_823210D4);
PPC_FUNC_IMPL(__imp__sub_823210D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823210D8"))) PPC_WEAK_FUNC(sub_823210D8);
PPC_FUNC_IMPL(__imp__sub_823210D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x823210E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r11,21417
	ctx.r28.s64 = ctx.r11.s64 + 21417;
	// lbz r11,1(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823211d0
	if (!ctx.cr0.eq) goto loc_823211D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82535c10
	ctx.lr = 0x8232110C;
	sub_82535C10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82535c80
	ctx.lr = 0x82321114;
	sub_82535C80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82535da0
	ctx.lr = 0x8232111C;
	sub_82535DA0(ctx, base);
	// lwz r11,2432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2432);
	// lwz r3,2248(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2248);
	// bl 0x8259dc28
	ctx.lr = 0x82321128;
	sub_8259DC28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// stw r29,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r29.u32);
	// stw r29,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r29.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// stw r29,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r29.u32);
	// stw r27,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r27.u32);
	// bne cr6,0x8232115c
	if (!ctx.cr6.eq) goto loc_8232115C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231ccc0
	ctx.lr = 0x8232115C;
	sub_8231CCC0(ctx, base);
loc_8232115C:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321174
	if (ctx.cr6.eq) goto loc_82321174;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82512cb0
	ctx.lr = 0x82321170;
	sub_82512CB0(ctx, base);
	// stw r29,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r29.u32);
loc_82321174:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r27,2440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2440, ctx.r27.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// stb r27,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r27.u8);
	// beq cr6,0x82321194
	if (ctx.cr6.eq) goto loc_82321194;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x823211d0
	if (!ctx.cr6.eq) goto loc_823211D0;
loc_82321194:
	// lwz r11,2436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2436);
	// addi r4,r30,2436
	ctx.r4.s64 = ctx.r30.s64 + 2436;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823211d0
	if (ctx.cr6.eq) goto loc_823211D0;
	// lwz r10,2432(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2432);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,2116(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2116);
	// bl 0x8259cd60
	ctx.lr = 0x823211D0;
	sub_8259CD60(ctx, base);
loc_823211D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823211D8"))) PPC_WEAK_FUNC(sub_823211D8);
PPC_FUNC_IMPL(__imp__sub_823211D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// b 0x8231dd10
	sub_8231DD10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823211E0"))) PPC_WEAK_FUNC(sub_823211E0);
PPC_FUNC_IMPL(__imp__sub_823211E0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r30.u32);
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// stw r30,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r30.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231ccc0
	ctx.lr = 0x8232121C;
	sub_8231CCC0(ctx, base);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321234
	if (ctx.cr6.eq) goto loc_82321234;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82512cb0
	ctx.lr = 0x82321230;
	sub_82512CB0(ctx, base);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
loc_82321234:
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

__attribute__((alias("__imp__sub_8232124C"))) PPC_WEAK_FUNC(sub_8232124C);
PPC_FUNC_IMPL(__imp__sub_8232124C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321250"))) PPC_WEAK_FUNC(sub_82321250);
PPC_FUNC_IMPL(__imp__sub_82321250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82321270
	if (!ctx.cr6.eq) goto loc_82321270;
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_82321270:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823212a4
	if (ctx.cr6.eq) goto loc_823212A4;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8232128c
	if (ctx.cr6.eq) goto loc_8232128C;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_8232128C:
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// blr 
	return;
loc_823212A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823212AC"))) PPC_WEAK_FUNC(sub_823212AC);
PPC_FUNC_IMPL(__imp__sub_823212AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823212B0"))) PPC_WEAK_FUNC(sub_823212B0);
PPC_FUNC_IMPL(__imp__sub_823212B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// vor128 v13,v77,v77
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// li r10,12
	ctx.r10.s64 = 12;
	// vor128 v11,v67,v67
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// addi r11,r11,13808
	ctx.r11.s64 = ctx.r11.s64 + 13808;
	// vor128 v10,v67,v67
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// vor128 v12,v77,v77
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lvrx v0,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v9,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi v0,v0,v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// vor v0,v9,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsel v11,v0,v13,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v11,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v0,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v13,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsldoi v13,v13,v13,4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v13.u8), 12));
	// vor v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsel v13,v0,v12,v10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// stvx128 v13,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321314"))) PPC_WEAK_FUNC(sub_82321314);
PPC_FUNC_IMPL(__imp__sub_82321314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321318"))) PPC_WEAK_FUNC(sub_82321318);
PPC_FUNC_IMPL(__imp__sub_82321318) {
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
	// bne cr6,0x82321360
	if (!ctx.cr6.eq) goto loc_82321360;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8232133C;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82321360
	if (!ctx.cr0.eq) goto loc_82321360;
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
	ctx.lr = 0x82321360;
	sub_82240040(ctx, base);
loc_82321360:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,-3480
	ctx.r11.s64 = ctx.r11.s64 + -3480;
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

__attribute__((alias("__imp__sub_8232138C"))) PPC_WEAK_FUNC(sub_8232138C);
PPC_FUNC_IMPL(__imp__sub_8232138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321390"))) PPC_WEAK_FUNC(sub_82321390);
PPC_FUNC_IMPL(__imp__sub_82321390) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x823213bc
	if (!ctx.cr6.eq) goto loc_823213BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x82321420
	goto loc_82321420;
loc_823213BC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823213d0
	if (ctx.cr6.eq) goto loc_823213D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231e898
	ctx.lr = 0x823213CC;
	sub_8231E898(ctx, base);
	// b 0x82321420
	goto loc_82321420;
loc_823213D0:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82520d20
	ctx.lr = 0x823213D8;
	sub_82520D20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82321420
	if (!ctx.cr0.eq) goto loc_82321420;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82321408
	if (ctx.cr6.eq) goto loc_82321408;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825212d0
	ctx.lr = 0x82321404;
	sub_825212D0(ctx, base);
	// b 0x82321418
	goto loc_82321418;
loc_82321408:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82321418
	if (ctx.cr6.eq) goto loc_82321418;
	// bl 0x82521458
	ctx.lr = 0x82321418;
	sub_82521458(ctx, base);
loc_82321418:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
loc_82321420:
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

__attribute__((alias("__imp__sub_82321434"))) PPC_WEAK_FUNC(sub_82321434);
PPC_FUNC_IMPL(__imp__sub_82321434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321438"))) PPC_WEAK_FUNC(sub_82321438);
PPC_FUNC_IMPL(__imp__sub_82321438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-20476
	ctx.r3.s64 = ctx.r11.s64 + -20476;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321444"))) PPC_WEAK_FUNC(sub_82321444);
PPC_FUNC_IMPL(__imp__sub_82321444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321448"))) PPC_WEAK_FUNC(sub_82321448);
PPC_FUNC_IMPL(__imp__sub_82321448) {
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
	// bne cr6,0x82321490
	if (!ctx.cr6.eq) goto loc_82321490;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8232146C;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82321490
	if (!ctx.cr0.eq) goto loc_82321490;
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
	ctx.lr = 0x82321490;
	sub_82240040(ctx, base);
loc_82321490:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,-3456
	ctx.r11.s64 = ctx.r11.s64 + -3456;
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

__attribute__((alias("__imp__sub_823214BC"))) PPC_WEAK_FUNC(sub_823214BC);
PPC_FUNC_IMPL(__imp__sub_823214BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823214C0"))) PPC_WEAK_FUNC(sub_823214C0);
PPC_FUNC_IMPL(__imp__sub_823214C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8231dac8
	sub_8231DAC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823214C8"))) PPC_WEAK_FUNC(sub_823214C8);
PPC_FUNC_IMPL(__imp__sub_823214C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-20420
	ctx.r3.s64 = ctx.r11.s64 + -20420;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823214D4"))) PPC_WEAK_FUNC(sub_823214D4);
PPC_FUNC_IMPL(__imp__sub_823214D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823214D8"))) PPC_WEAK_FUNC(sub_823214D8);
PPC_FUNC_IMPL(__imp__sub_823214D8) {
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
	// bne cr6,0x82321520
	if (!ctx.cr6.eq) goto loc_82321520;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823214FC;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82321520
	if (!ctx.cr0.eq) goto loc_82321520;
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
	ctx.lr = 0x82321520;
	sub_82240040(ctx, base);
loc_82321520:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,-3432
	ctx.r11.s64 = ctx.r11.s64 + -3432;
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

__attribute__((alias("__imp__sub_8232154C"))) PPC_WEAK_FUNC(sub_8232154C);
PPC_FUNC_IMPL(__imp__sub_8232154C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321550"))) PPC_WEAK_FUNC(sub_82321550);
PPC_FUNC_IMPL(__imp__sub_82321550) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8231ccc0
	sub_8231CCC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232155C"))) PPC_WEAK_FUNC(sub_8232155C);
PPC_FUNC_IMPL(__imp__sub_8232155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321560"))) PPC_WEAK_FUNC(sub_82321560);
PPC_FUNC_IMPL(__imp__sub_82321560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-20364
	ctx.r3.s64 = ctx.r11.s64 + -20364;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232156C"))) PPC_WEAK_FUNC(sub_8232156C);
PPC_FUNC_IMPL(__imp__sub_8232156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321570"))) PPC_WEAK_FUNC(sub_82321570);
PPC_FUNC_IMPL(__imp__sub_82321570) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,524
	ctx.r11.s64 = ctx.r11.s64 + 524;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8232159c
	if (ctx.cr0.eq) goto loc_8232159C;
	// bl 0x82691540
	ctx.lr = 0x8232159C;
	sub_82691540(ctx, base);
loc_8232159C:
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

__attribute__((alias("__imp__sub_823215B4"))) PPC_WEAK_FUNC(sub_823215B4);
PPC_FUNC_IMPL(__imp__sub_823215B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823215B8"))) PPC_WEAK_FUNC(sub_823215B8);
PPC_FUNC_IMPL(__imp__sub_823215B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x823215C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r30,68
	ctx.r6.s64 = ctx.r30.s64 + 68;
	// addi r4,r11,-3932
	ctx.r4.s64 = ctx.r11.s64 + -3932;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82557338
	ctx.lr = 0x823215E0;
	sub_82557338(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r4,r11,-7368
	ctx.r4.s64 = ctx.r11.s64 + -7368;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82557338
	ctx.lr = 0x823215F8;
	sub_82557338(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x8232161c
	if (!ctx.cr6.eq) goto loc_8232161C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// beq cr6,0x82321620
	if (ctx.cr6.eq) goto loc_82321620;
loc_8232161C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_82321620:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82322010
	ctx.lr = 0x8232162C;
	sub_82322010(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x823216f0
	if (ctx.cr6.eq) goto loc_823216F0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-3408
	ctx.r3.s64 = ctx.r11.s64 + -3408;
	// bl 0x826909a0
	ctx.lr = 0x82321644;
	sub_826909A0(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r11,-8552
	ctx.r11.s64 = ctx.r11.s64 + -8552;
	// lwz r30,6404(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r27,6408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6408, ctx.r27.u32);
	// bne cr6,0x8232166c
	if (!ctx.cr6.eq) goto loc_8232166C;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// b 0x82321684
	goto loc_82321684;
loc_8232166C:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,-11080
	ctx.r10.s64 = ctx.r10.s64 + -11080;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_82321684:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-3232
	ctx.r11.s64 = ctx.r11.s64 + -3232;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82543370
	ctx.lr = 0x823216A8;
	sub_82543370(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82321890
	if (ctx.cr6.eq) goto loc_82321890;
	// bl 0x8250f738
	ctx.lr = 0x823216B4;
	sub_8250F738(ctx, base);
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x823216e4
	goto loc_823216E4;
loc_823216C0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823216dc
	if (!ctx.cr6.eq) goto loc_823216DC;
	// lwz r10,4280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4280);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823216dc
	if (!ctx.cr6.eq) goto loc_823216DC;
	// stw r26,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r26.u32);
loc_823216DC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
loc_823216E4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823216c0
	if (!ctx.cr6.eq) goto loc_823216C0;
	// b 0x82321890
	goto loc_82321890;
loc_823216F0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82321750
	if (ctx.cr6.eq) goto loc_82321750;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r11,r11,11912
	ctx.r11.s64 = ctx.r11.s64 + 11912;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82321710
	if (!ctx.cr6.eq) goto loc_82321710;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// b 0x82321728
	goto loc_82321728;
loc_82321710:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,-11080
	ctx.r10.s64 = ctx.r10.s64 + -11080;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_82321728:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-3208
	ctx.r11.s64 = ctx.r11.s64 + -3208;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82543370
	ctx.lr = 0x8232174C;
	sub_82543370(ctx, base);
	// b 0x82321890
	goto loc_82321890;
loc_82321750:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r4,r10,-11704
	ctx.r4.s64 = ctx.r10.s64 + -11704;
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// bl 0x82557338
	ctx.lr = 0x82321764;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82321830
	if (!ctx.cr0.eq) goto loc_82321830;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r8,r10,24856
	ctx.r8.s64 = ctx.r10.s64 + 24856;
	// addi r11,r11,-2240
	ctx.r11.s64 = ctx.r11.s64 + -2240;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r30,6404(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r27,6408(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6408, ctx.r27.u32);
	// stw r10,128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 128, ctx.r10.u32);
	// bne cr6,0x823217a0
	if (!ctx.cr6.eq) goto loc_823217A0;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// b 0x823217b8
	goto loc_823217B8;
loc_823217A0:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,-11080
	ctx.r10.s64 = ctx.r10.s64 + -11080;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_823217B8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-3184
	ctx.r11.s64 = ctx.r11.s64 + -3184;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82543370
	ctx.lr = 0x823217DC;
	sub_82543370(ctx, base);
	// bl 0x8226c3f0
	ctx.lr = 0x823217E0;
	sub_8226C3F0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82321890
	if (ctx.cr6.eq) goto loc_82321890;
	// bl 0x8250f738
	ctx.lr = 0x823217F4;
	sub_8250F738(ctx, base);
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82321824
	goto loc_82321824;
loc_82321800:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8232181c
	if (!ctx.cr6.eq) goto loc_8232181C;
	// lwz r10,4280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4280);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8232181c
	if (!ctx.cr6.eq) goto loc_8232181C;
	// stw r26,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r26.u32);
loc_8232181C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
loc_82321824:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82321800
	if (!ctx.cr6.eq) goto loc_82321800;
	// b 0x82321890
	goto loc_82321890;
loc_82321830:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-3352
	ctx.r4.s64 = ctx.r11.s64 + -3352;
	// bl 0x82899948
	ctx.lr = 0x82321840;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82321844;
	sub_82899798(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82899858
	ctx.lr = 0x82321850;
	sub_82899858(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82570620
	ctx.lr = 0x8232185C;
	sub_82570620(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82323e78
	ctx.lr = 0x82321864;
	sub_82323E78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8226c3f0
	ctx.lr = 0x8232186C;
	sub_8226C3F0(ctx, base);
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x82321874;
	sub_8226C3F0(ctx, base);
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r31,r10,24856
	ctx.r31.s64 = ctx.r10.s64 + 24856;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x82321888;
	sub_8226C3F0(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_82321890:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825496e0
	ctx.lr = 0x823218AC;
	sub_825496E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823218B4"))) PPC_WEAK_FUNC(sub_823218B4);
PPC_FUNC_IMPL(__imp__sub_823218B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823218B8"))) PPC_WEAK_FUNC(sub_823218B8);
PPC_FUNC_IMPL(__imp__sub_823218B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,27568
	ctx.r11.s64 = ctx.r11.s64 + 27568;
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823218d8
	if (ctx.cr6.eq) goto loc_823218D8;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v0,r10,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// b 0x823218dc
	goto loc_823218DC;
loc_823218D8:
	// vor128 v0,v77,v77
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
loc_823218DC:
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823218f8
	if (ctx.cr6.eq) goto loc_823218F8;
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v0,r10,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// b 0x823218fc
	goto loc_823218FC;
loc_823218F8:
	// vor128 v0,v77,v77
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
loc_823218FC:
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82321914
	if (ctx.cr6.eq) goto loc_82321914;
	// lfs f0,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8232191c
	goto loc_8232191C;
loc_82321914:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
loc_8232191C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321930"))) PPC_WEAK_FUNC(sub_82321930);
PPC_FUNC_IMPL(__imp__sub_82321930) {
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
	// bne cr6,0x82321978
	if (!ctx.cr6.eq) goto loc_82321978;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82321954;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82321978
	if (!ctx.cr0.eq) goto loc_82321978;
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
	ctx.lr = 0x82321978;
	sub_82240040(ctx, base);
loc_82321978:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,-3232
	ctx.r11.s64 = ctx.r11.s64 + -3232;
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

__attribute__((alias("__imp__sub_823219A4"))) PPC_WEAK_FUNC(sub_823219A4);
PPC_FUNC_IMPL(__imp__sub_823219A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823219A8"))) PPC_WEAK_FUNC(sub_823219A8);
PPC_FUNC_IMPL(__imp__sub_823219A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,6404(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6404);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823219C0"))) PPC_WEAK_FUNC(sub_823219C0);
PPC_FUNC_IMPL(__imp__sub_823219C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-20308
	ctx.r3.s64 = ctx.r11.s64 + -20308;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823219CC"))) PPC_WEAK_FUNC(sub_823219CC);
PPC_FUNC_IMPL(__imp__sub_823219CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823219D0"))) PPC_WEAK_FUNC(sub_823219D0);
PPC_FUNC_IMPL(__imp__sub_823219D0) {
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
	// bne cr6,0x82321a18
	if (!ctx.cr6.eq) goto loc_82321A18;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823219F4;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82321a18
	if (!ctx.cr0.eq) goto loc_82321A18;
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
	ctx.lr = 0x82321A18;
	sub_82240040(ctx, base);
loc_82321A18:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,-3208
	ctx.r11.s64 = ctx.r11.s64 + -3208;
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

__attribute__((alias("__imp__sub_82321A44"))) PPC_WEAK_FUNC(sub_82321A44);
PPC_FUNC_IMPL(__imp__sub_82321A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321A48"))) PPC_WEAK_FUNC(sub_82321A48);
PPC_FUNC_IMPL(__imp__sub_82321A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82321A50;
	__savegprlr_29(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4416(r1)
	ea = -4416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822a3128
	ctx.lr = 0x82321A64;
	sub_822A3128(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r11,-3312
	ctx.r3.s64 = ctx.r11.s64 + -3312;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x82321A80;
	sub_82547F38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82309140
	ctx.lr = 0x82321AA0;
	sub_82309140(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f6330
	ctx.lr = 0x82321AAC;
	sub_823F6330(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321abc
	if (ctx.cr6.eq) goto loc_82321ABC;
	// bl 0x82241d18
	ctx.lr = 0x82321ABC;
	sub_82241D18(ctx, base);
loc_82321ABC:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82519160
	ctx.lr = 0x82321AC8;
	sub_82519160(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a41d0
	ctx.lr = 0x82321AD4;
	sub_826A41D0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321ae4
	if (ctx.cr6.eq) goto loc_82321AE4;
	// bl 0x82241d18
	ctx.lr = 0x82321AE4;
	sub_82241D18(ctx, base);
loc_82321AE4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8250b348
	ctx.lr = 0x82321AEC;
	sub_8250B348(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82321b08
	if (ctx.cr6.eq) goto loc_82321B08;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82241d18
	ctx.lr = 0x82321B08;
	sub_82241D18(ctx, base);
loc_82321B08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,4416
	ctx.r1.s64 = ctx.r1.s64 + 4416;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82321B14"))) PPC_WEAK_FUNC(sub_82321B14);
PPC_FUNC_IMPL(__imp__sub_82321B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321B18"))) PPC_WEAK_FUNC(sub_82321B18);
PPC_FUNC_IMPL(__imp__sub_82321B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-20252
	ctx.r3.s64 = ctx.r11.s64 + -20252;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321B24"))) PPC_WEAK_FUNC(sub_82321B24);
PPC_FUNC_IMPL(__imp__sub_82321B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321B28"))) PPC_WEAK_FUNC(sub_82321B28);
PPC_FUNC_IMPL(__imp__sub_82321B28) {
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
	// bne cr6,0x82321b70
	if (!ctx.cr6.eq) goto loc_82321B70;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82321B4C;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82321b70
	if (!ctx.cr0.eq) goto loc_82321B70;
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
	ctx.lr = 0x82321B70;
	sub_82240040(ctx, base);
loc_82321B70:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,-3184
	ctx.r11.s64 = ctx.r11.s64 + -3184;
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

__attribute__((alias("__imp__sub_82321B9C"))) PPC_WEAK_FUNC(sub_82321B9C);
PPC_FUNC_IMPL(__imp__sub_82321B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321BA0"))) PPC_WEAK_FUNC(sub_82321BA0);
PPC_FUNC_IMPL(__imp__sub_82321BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-20196
	ctx.r3.s64 = ctx.r11.s64 + -20196;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82321BAC"))) PPC_WEAK_FUNC(sub_82321BAC);
PPC_FUNC_IMPL(__imp__sub_82321BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321BB0"))) PPC_WEAK_FUNC(sub_82321BB0);
PPC_FUNC_IMPL(__imp__sub_82321BB0) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-11128
	ctx.r11.s64 = ctx.r11.s64 + -11128;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82321bdc
	if (ctx.cr0.eq) goto loc_82321BDC;
	// bl 0x82691540
	ctx.lr = 0x82321BDC;
	sub_82691540(ctx, base);
loc_82321BDC:
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

__attribute__((alias("__imp__sub_82321BF4"))) PPC_WEAK_FUNC(sub_82321BF4);
PPC_FUNC_IMPL(__imp__sub_82321BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321BF8"))) PPC_WEAK_FUNC(sub_82321BF8);
PPC_FUNC_IMPL(__imp__sub_82321BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82321C00;
	__savegprlr_24(ctx, base);
	// stwu r1,-1728(r1)
	ea = -1728 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,2120
	ctx.r30.s64 = ctx.r3.s64 + 2120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r29,3
	ctx.r29.s64 = 3;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82321C24:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82324148
	ctx.lr = 0x82321C2C;
	sub_82324148(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r25,r25,1056
	ctx.r25.s64 = ctx.r25.s64 + 1056;
	// bge 0x82321c24
	if (!ctx.cr0.lt) goto loc_82321C24;
	// li r25,4
	ctx.r25.s64 = 4;
	// stw r26,6384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6384, ctx.r26.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,6396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6396, ctx.r27.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,6392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6392, ctx.r11.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r31,6392
	ctx.r29.s64 = ctx.r31.s64 + 6392;
	// stw r8,6400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6400, ctx.r8.u32);
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// stw r11,6404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6404, ctx.r11.u32);
	// addi r10,r30,-1056
	ctx.r10.s64 = ctx.r30.s64 + -1056;
	// stw r11,6408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6408, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
	// stb r11,324(r31)
	PPC_STORE_U8(ctx.r31.u32 + 324, ctx.r11.u8);
	// stb r11,580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 580, ctx.r11.u8);
	// stb r11,836(r31)
	PPC_STORE_U8(ctx.r31.u32 + 836, ctx.r11.u8);
	// stw r11,6376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6376, ctx.r11.u32);
	// stw r9,6344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6344, ctx.r9.u32);
loc_82321CA4:
	// stwu r25,1056(r10)
	ea = 1056 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82321ca4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82321CA4;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r10,-27564
	ctx.r3.s64 = ctx.r10.s64 + -27564;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// bl 0x82547f38
	ctx.lr = 0x82321CE4;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27548
	ctx.r3.s64 = ctx.r11.s64 + -27548;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x82547f38
	ctx.lr = 0x82321CF8;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27528
	ctx.r3.s64 = ctx.r11.s64 + -27528;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82547f38
	ctx.lr = 0x82321D0C;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27508
	ctx.r3.s64 = ctx.r11.s64 + -27508;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82547f38
	ctx.lr = 0x82321D20;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27488
	ctx.r3.s64 = ctx.r11.s64 + -27488;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x82547f38
	ctx.lr = 0x82321D34;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27472
	ctx.r3.s64 = ctx.r11.s64 + -27472;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x82321D48;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27452
	ctx.r3.s64 = ctx.r11.s64 + -27452;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82547f38
	ctx.lr = 0x82321D5C;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27432
	ctx.r3.s64 = ctx.r11.s64 + -27432;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82547f38
	ctx.lr = 0x82321D70;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82546708
	ctx.lr = 0x82321D80;
	sub_82546708(ctx, base);
	// stw r3,6412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6412, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82546708
	ctx.lr = 0x82321D94;
	sub_82546708(ctx, base);
	// stw r3,6416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6416, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82546708
	ctx.lr = 0x82321DA8;
	sub_82546708(ctx, base);
	// stw r3,6420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6420, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82546708
	ctx.lr = 0x82321DBC;
	sub_82546708(ctx, base);
	// stw r3,6424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6424, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82546708
	ctx.lr = 0x82321DD0;
	sub_82546708(ctx, base);
	// stw r3,6428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6428, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x82321DE4;
	sub_82546708(ctx, base);
	// stw r3,6432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6432, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82546708
	ctx.lr = 0x82321DF8;
	sub_82546708(ctx, base);
	// stw r3,6436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6436, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82546708
	ctx.lr = 0x82321E0C;
	sub_82546708(ctx, base);
	// stw r3,6440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6440, ctx.r3.u32);
	// bl 0x8226d8e8
	ctx.lr = 0x82321E14;
	sub_8226D8E8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r11,r11,596
	ctx.r11.s64 = ctx.r11.s64 + 596;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r10,r10,572
	ctx.r10.s64 = ctx.r10.s64 + 572;
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
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8226e220
	ctx.lr = 0x82321E50;
	sub_8226E220(ctx, base);
	// stw r3,6388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6388, ctx.r3.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82569e10
	ctx.lr = 0x82321E5C;
	sub_82569E10(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r10,300
	ctx.r10.s64 = 300;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r1,328
	ctx.r8.s64 = ctx.r1.s64 + 328;
	// addi r9,r9,-2340
	ctx.r9.s64 = ctx.r9.s64 + -2340;
	// addi r7,r1,328
	ctx.r7.s64 = ctx.r1.s64 + 328;
	// addi r6,r1,328
	ctx.r6.s64 = ctx.r1.s64 + 328;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,251
	ctx.r3.s64 = ctx.r1.s64 + 251;
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r28,6396(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6396);
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// stw r28,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r28.u32);
	// lvlx v0,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vor v11,v13,v13
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrlimi128 v12,v0,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v11,v13,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v12,v11,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// vspltw v0,v12,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw v13,v12,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vspltw v12,v12,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// stvewx v0,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v13,r7,r25
	ea = (ctx.r7.u32 + ctx.r25.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v12,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// stw r4,1416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1416, ctx.r4.u32);
	// bl 0x8259bbf8
	ctx.lr = 0x82321ED4;
	sub_8259BBF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x8256a330
	ctx.lr = 0x82321EE0;
	sub_8256A330(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1728
	ctx.r1.s64 = ctx.r1.s64 + 1728;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82321EF0"))) PPC_WEAK_FUNC(sub_82321EF0);
PPC_FUNC_IMPL(__imp__sub_82321EF0) {
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
	// bl 0x8226d8e8
	ctx.lr = 0x82321F0C;
	sub_8226D8E8(ctx, base);
	// lwz r4,6388(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6388);
	// bl 0x8226e428
	ctx.lr = 0x82321F14;
	sub_8226E428(ctx, base);
	// lwz r3,6392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6392);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321f30
	if (ctx.cr6.eq) goto loc_82321F30;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8256c608
	ctx.lr = 0x82321F2C;
	sub_8256C608(ctx, base);
	// stw r30,6392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6392, ctx.r30.u32);
loc_82321F30:
	// lwz r3,6412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321f44
	if (ctx.cr6.eq) goto loc_82321F44;
	// bl 0x825469e0
	ctx.lr = 0x82321F40;
	sub_825469E0(ctx, base);
	// stw r30,6412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6412, ctx.r30.u32);
loc_82321F44:
	// lwz r3,6416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321f58
	if (ctx.cr6.eq) goto loc_82321F58;
	// bl 0x825469e0
	ctx.lr = 0x82321F54;
	sub_825469E0(ctx, base);
	// stw r30,6416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6416, ctx.r30.u32);
loc_82321F58:
	// lwz r3,6420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321f6c
	if (ctx.cr6.eq) goto loc_82321F6C;
	// bl 0x825469e0
	ctx.lr = 0x82321F68;
	sub_825469E0(ctx, base);
	// stw r30,6420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6420, ctx.r30.u32);
loc_82321F6C:
	// lwz r3,6424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321f80
	if (ctx.cr6.eq) goto loc_82321F80;
	// bl 0x825469e0
	ctx.lr = 0x82321F7C;
	sub_825469E0(ctx, base);
	// stw r30,6424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6424, ctx.r30.u32);
loc_82321F80:
	// lwz r3,6428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321f94
	if (ctx.cr6.eq) goto loc_82321F94;
	// bl 0x825469e0
	ctx.lr = 0x82321F90;
	sub_825469E0(ctx, base);
	// stw r30,6428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6428, ctx.r30.u32);
loc_82321F94:
	// lwz r3,6432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6432);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321fa8
	if (ctx.cr6.eq) goto loc_82321FA8;
	// bl 0x825469e0
	ctx.lr = 0x82321FA4;
	sub_825469E0(ctx, base);
	// stw r30,6432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6432, ctx.r30.u32);
loc_82321FA8:
	// lwz r3,6436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6436);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321fbc
	if (ctx.cr6.eq) goto loc_82321FBC;
	// bl 0x825469e0
	ctx.lr = 0x82321FB8;
	sub_825469E0(ctx, base);
	// stw r30,6436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6436, ctx.r30.u32);
loc_82321FBC:
	// lwz r3,6440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6440);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82321fd0
	if (ctx.cr6.eq) goto loc_82321FD0;
	// bl 0x825469e0
	ctx.lr = 0x82321FCC;
	sub_825469E0(ctx, base);
	// stw r30,6440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6440, ctx.r30.u32);
loc_82321FD0:
	// addi r11,r31,6344
	ctx.r11.s64 = ctx.r31.s64 + 6344;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r31,r11,1024
	ctx.r31.s64 = ctx.r11.s64 + 1024;
loc_82321FDC:
	// addi r31,r31,-1056
	ctx.r31.s64 = ctx.r31.s64 + -1056;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822402c8
	ctx.lr = 0x82321FF0;
	sub_822402C8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82321fdc
	if (!ctx.cr0.lt) goto loc_82321FDC;
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

__attribute__((alias("__imp__sub_82322010"))) PPC_WEAK_FUNC(sub_82322010);
PPC_FUNC_IMPL(__imp__sub_82322010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82322018;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x8227e2f8
	ctx.lr = 0x82322034;
	sub_8227E2F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82322060
	if (ctx.cr0.eq) goto loc_82322060;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-2904
	ctx.r3.s64 = ctx.r11.s64 + -2904;
	// bl 0x82547f38
	ctx.lr = 0x82322054;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82322064
	goto loc_82322064;
loc_82322060:
	// addi r3,r31,6400
	ctx.r3.s64 = ctx.r31.s64 + 6400;
loc_82322064:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x8232206C;
	sub_82546708(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232211c
	if (ctx.cr6.eq) goto loc_8232211C;
	// bl 0x82546b30
	ctx.lr = 0x8232207C;
	sub_82546B30(ctx, base);
	// li r11,100
	ctx.r11.s64 = 100;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// divwu. r29,r3,r11
	ctx.r29.u32 = ctx.r3.u32 / ctx.r11.u32;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82322114
	if (ctx.cr0.eq) goto loc_82322114;
loc_8232208C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82322114
	if (!ctx.cr6.eq) goto loc_82322114;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82557338
	ctx.lr = 0x823220A4;
	sub_82557338(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x823220f8
	if (ctx.cr0.eq) goto loc_823220F8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8232210c
	if (!ctx.cr6.eq) goto loc_8232210C;
	// addi r4,r6,48
	ctx.r4.s64 = ctx.r6.s64 + 48;
	// addi r3,r31,580
	ctx.r3.s64 = ctx.r31.s64 + 580;
	// bl 0x82557338
	ctx.lr = 0x823220C4;
	sub_82557338(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and. r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x823220f8
	if (ctx.cr0.eq) goto loc_823220F8;
	// addi r4,r6,72
	ctx.r4.s64 = ctx.r6.s64 + 72;
	// addi r3,r31,836
	ctx.r3.s64 = ctx.r31.s64 + 836;
	// bl 0x82557338
	ctx.lr = 0x823220E0;
	sub_82557338(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823220f8
	if (ctx.cr0.eq) goto loc_823220F8;
	// lwz r11,96(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 96);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_823220F8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r6,r6,100
	ctx.r6.s64 = ctx.r6.s64 + 100;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8232208c
	if (ctx.cr6.lt) goto loc_8232208C;
	// b 0x82322114
	goto loc_82322114;
loc_8232210C:
	// lwz r11,96(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 96);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82322114:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825469e0
	ctx.lr = 0x8232211C;
	sub_825469E0(ctx, base);
loc_8232211C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322128"))) PPC_WEAK_FUNC(sub_82322128);
PPC_FUNC_IMPL(__imp__sub_82322128) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r30,21120(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8232223c
	if (ctx.cr6.eq) goto loc_8232223C;
	// addi r6,r3,580
	ctx.r6.s64 = ctx.r3.s64 + 580;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-2880
	ctx.r4.s64 = ctx.r11.s64 + -2880;
	// bl 0x82557338
	ctx.lr = 0x82322164;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82322178
	if (!ctx.cr0.eq) goto loc_82322178;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r31,272(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// b 0x82322228
	goto loc_82322228;
loc_82322178:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-2868
	ctx.r4.s64 = ctx.r11.s64 + -2868;
	// bl 0x82557338
	ctx.lr = 0x82322188;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232219c
	if (!ctx.cr0.eq) goto loc_8232219C;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// b 0x82322228
	goto loc_82322228;
loc_8232219C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-2852
	ctx.r4.s64 = ctx.r11.s64 + -2852;
	// bl 0x82557338
	ctx.lr = 0x823221AC;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823221c0
	if (!ctx.cr0.eq) goto loc_823221C0;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r31,284(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// b 0x82322228
	goto loc_82322228;
loc_823221C0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-2836
	ctx.r4.s64 = ctx.r11.s64 + -2836;
	// bl 0x82557338
	ctx.lr = 0x823221D0;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823221e4
	if (!ctx.cr0.eq) goto loc_823221E4;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r31,280(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// b 0x82322228
	goto loc_82322228;
loc_823221E4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-2816
	ctx.r4.s64 = ctx.r11.s64 + -2816;
	// bl 0x82557338
	ctx.lr = 0x823221F4;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82322208
	if (!ctx.cr0.eq) goto loc_82322208;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r31,268(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// b 0x82322228
	goto loc_82322228;
loc_82322208:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-2800
	ctx.r4.s64 = ctx.r11.s64 + -2800;
	// bl 0x82fa3928
	ctx.lr = 0x82322218;
	sub_82FA3928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8232223c
	if (ctx.cr0.eq) goto loc_8232223C;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r31,264(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
loc_82322228:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82322238
	if (ctx.cr6.lt) goto loc_82322238;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// ble cr6,0x8232223c
	if (!ctx.cr6.gt) goto loc_8232223C;
loc_82322238:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8232223C:
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

__attribute__((alias("__imp__sub_82322258"))) PPC_WEAK_FUNC(sub_82322258);
PPC_FUNC_IMPL(__imp__sub_82322258) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r6,r3,580
	ctx.r6.s64 = ctx.r3.s64 + 580;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r10,-2880
	ctx.r4.s64 = ctx.r10.s64 + -2880;
	// lwz r30,21120(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// bl 0x82557338
	ctx.lr = 0x8232228C;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823222ac
	if (!ctx.cr0.eq) goto loc_823222AC;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82322398
	if (ctx.cr6.eq) goto loc_82322398;
	// stw r31,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r31.u32);
	// b 0x82322398
	goto loc_82322398;
loc_823222AC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-2868
	ctx.r4.s64 = ctx.r11.s64 + -2868;
	// bl 0x82557338
	ctx.lr = 0x823222BC;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823222dc
	if (!ctx.cr0.eq) goto loc_823222DC;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82322398
	if (ctx.cr6.eq) goto loc_82322398;
	// stw r31,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r31.u32);
	// b 0x82322398
	goto loc_82322398;
loc_823222DC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-2852
	ctx.r4.s64 = ctx.r11.s64 + -2852;
	// bl 0x82557338
	ctx.lr = 0x823222EC;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232230c
	if (!ctx.cr0.eq) goto loc_8232230C;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r10,284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82322398
	if (ctx.cr6.eq) goto loc_82322398;
	// stw r31,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r31.u32);
	// b 0x82322398
	goto loc_82322398;
loc_8232230C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-2836
	ctx.r4.s64 = ctx.r11.s64 + -2836;
	// bl 0x82557338
	ctx.lr = 0x8232231C;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232233c
	if (!ctx.cr0.eq) goto loc_8232233C;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82322398
	if (ctx.cr6.eq) goto loc_82322398;
	// stw r31,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r31.u32);
	// b 0x82322398
	goto loc_82322398;
loc_8232233C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-2816
	ctx.r4.s64 = ctx.r11.s64 + -2816;
	// bl 0x82557338
	ctx.lr = 0x8232234C;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232236c
	if (!ctx.cr0.eq) goto loc_8232236C;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82322398
	if (ctx.cr6.eq) goto loc_82322398;
	// stw r31,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r31.u32);
	// b 0x82322398
	goto loc_82322398;
loc_8232236C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-2800
	ctx.r4.s64 = ctx.r11.s64 + -2800;
	// bl 0x82fa3928
	ctx.lr = 0x8232237C;
	sub_82FA3928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82322398
	if (ctx.cr0.eq) goto loc_82322398;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82322398
	if (ctx.cr6.eq) goto loc_82322398;
	// stw r31,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r31.u32);
loc_82322398:
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

__attribute__((alias("__imp__sub_823223B0"))) PPC_WEAK_FUNC(sub_823223B0);
PPC_FUNC_IMPL(__imp__sub_823223B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823223B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
	// addi r10,r3,1092
	ctx.r10.s64 = ctx.r3.s64 + 1092;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_823223D0:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823223ec
	if (!ctx.cr6.lt) goto loc_823223EC;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x823223d0
	if (!ctx.cr0.eq) goto loc_823223D0;
loc_823223EC:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823223fc
	if (!ctx.cr6.eq) goto loc_823223FC;
	// stb r29,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r29.u8);
loc_823223FC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232240c
	if (ctx.cr6.eq) goto loc_8232240C;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8232240C:
	// bl 0x8226c3f0
	ctx.lr = 0x82322410;
	sub_8226C3F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82322498
	if (ctx.cr6.eq) goto loc_82322498;
	// addi r11,r31,324
	ctx.r11.s64 = ctx.r31.s64 + 324;
	// addi r10,r31,1348
	ctx.r10.s64 = ctx.r31.s64 + 1348;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8232242C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8232244c
	if (!ctx.cr6.lt) goto loc_8232244C;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8232242c
	if (!ctx.cr0.eq) goto loc_8232242C;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
loc_8232244C:
	// bne cr6,0x82322454
	if (!ctx.cr6.eq) goto loc_82322454;
	// stb r29,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r29.u8);
loc_82322454:
	// addi r4,r31,1604
	ctx.r4.s64 = ctx.r31.s64 + 1604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82323028
	ctx.lr = 0x82322460;
	sub_82323028(ctx, base);
	// addi r11,r31,836
	ctx.r11.s64 = ctx.r31.s64 + 836;
	// addi r10,r31,1860
	ctx.r10.s64 = ctx.r31.s64 + 1860;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82322470:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82322490
	if (!ctx.cr6.lt) goto loc_82322490;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82322470
	if (!ctx.cr0.eq) goto loc_82322470;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
loc_82322490:
	// bne cr6,0x82322498
	if (!ctx.cr6.eq) goto loc_82322498;
	// stb r29,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r29.u8);
loc_82322498:
	// bl 0x8226c3f0
	ctx.lr = 0x8232249C;
	sub_8226C3F0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r29,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r29.u32);
	// stw r29,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r29,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r29.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x823224BC;
	sub_8226C3F0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r10,r31,2120
	ctx.r10.s64 = ctx.r31.s64 + 2120;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823224CC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823224dc
	if (ctx.cr6.eq) goto loc_823224DC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_823224DC:
	// addi r10,r10,1056
	ctx.r10.s64 = ctx.r10.s64 + 1056;
	// bdnz 0x823224cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823224CC;
	// bl 0x8226c3f0
	ctx.lr = 0x823224E8;
	sub_8226C3F0(ctx, base);
	// stw r29,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823224F4"))) PPC_WEAK_FUNC(sub_823224F4);
PPC_FUNC_IMPL(__imp__sub_823224F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823224F8"))) PPC_WEAK_FUNC(sub_823224F8);
PPC_FUNC_IMPL(__imp__sub_823224F8) {
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
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
	// addi r10,r3,1092
	ctx.r10.s64 = ctx.r3.s64 + 1092;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82322518:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82322534
	if (!ctx.cr6.lt) goto loc_82322534;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82322518
	if (!ctx.cr0.eq) goto loc_82322518;
loc_82322534:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82322544
	if (!ctx.cr6.eq) goto loc_82322544;
	// stb r31,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r31.u8);
loc_82322544:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82322554
	if (ctx.cr6.eq) goto loc_82322554;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82322554:
	// addi r11,r3,324
	ctx.r11.s64 = ctx.r3.s64 + 324;
	// addi r10,r3,1348
	ctx.r10.s64 = ctx.r3.s64 + 1348;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82322564:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82322584
	if (!ctx.cr6.lt) goto loc_82322584;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82322564
	if (!ctx.cr0.eq) goto loc_82322564;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
loc_82322584:
	// bne cr6,0x8232258c
	if (!ctx.cr6.eq) goto loc_8232258C;
	// stb r31,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r31.u8);
loc_8232258C:
	// addi r4,r3,1604
	ctx.r4.s64 = ctx.r3.s64 + 1604;
	// bl 0x82323028
	ctx.lr = 0x82322594;
	sub_82323028(ctx, base);
	// bl 0x8226c3f0
	ctx.lr = 0x82322598;
	sub_8226C3F0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r31.u32);
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r31.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823225C4"))) PPC_WEAK_FUNC(sub_823225C4);
PPC_FUNC_IMPL(__imp__sub_823225C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823225C8"))) PPC_WEAK_FUNC(sub_823225C8);
PPC_FUNC_IMPL(__imp__sub_823225C8) {
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
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r10,-11704
	ctx.r9.s64 = ctx.r10.s64 + -11704;
	// stb r31,324(r3)
	PPC_STORE_U8(ctx.r3.u32 + 324, ctx.r31.u8);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// stb r31,580(r3)
	PPC_STORE_U8(ctx.r3.u32 + 580, ctx.r31.u8);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_823225F8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82322618
	if (!ctx.cr6.lt) goto loc_82322618;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x823225f8
	if (!ctx.cr0.eq) goto loc_823225F8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82322618:
	// bne cr6,0x82322620
	if (!ctx.cr6.eq) goto loc_82322620;
	// stb r31,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r31.u8);
loc_82322620:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r3,836
	ctx.r11.s64 = ctx.r3.s64 + 836;
	// addi r9,r10,-4020
	ctx.r9.s64 = ctx.r10.s64 + -4020;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82322634:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82322654
	if (!ctx.cr6.lt) goto loc_82322654;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82322634
	if (!ctx.cr0.eq) goto loc_82322634;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82322654:
	// bne cr6,0x8232265c
	if (!ctx.cr6.eq) goto loc_8232265C;
	// stb r31,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r31.u8);
loc_8232265C:
	// bl 0x8226c3f0
	ctx.lr = 0x82322660;
	sub_8226C3F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r31.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x82322680;
	sub_8226C3F0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8232269C"))) PPC_WEAK_FUNC(sub_8232269C);
PPC_FUNC_IMPL(__imp__sub_8232269C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823226A0"))) PPC_WEAK_FUNC(sub_823226A0);
PPC_FUNC_IMPL(__imp__sub_823226A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x823226A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,86
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 86, ctx.xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bgt cr6,0x823226dc
	if (ctx.cr6.gt) goto loc_823226DC;
	// bl 0x82322ae0
	ctx.lr = 0x823226D8;
	sub_82322AE0(ctx, base);
	// b 0x823226ec
	goto loc_823226EC;
loc_823226DC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-20
	ctx.r5.s64 = ctx.r11.s64 + -20;
	// bl 0x82fa25c0
	ctx.lr = 0x823226EC;
	sub_82FA25C0(ctx, base);
loc_823226EC:
	// bl 0x825143c8
	ctx.lr = 0x823226F0;
	sub_825143C8(ctx, base);
	// cmpwi cr6,r27,30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 30, ctx.xer);
	// bgt cr6,0x8232293c
	if (ctx.cr6.gt) goto loc_8232293C;
	// cmpwi cr6,r27,26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 26, ctx.xer);
	// bge cr6,0x82322724
	if (!ctx.cr6.lt) goto loc_82322724;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x823228a0
	if (ctx.cr6.eq) goto loc_823228A0;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x823227d8
	if (ctx.cr6.eq) goto loc_823227D8;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x82322790
	if (ctx.cr6.eq) goto loc_82322790;
	// ble cr6,0x82322768
	if (!ctx.cr6.gt) goto loc_82322768;
	// cmpwi cr6,r27,24
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 24, ctx.xer);
loc_82322720:
	// bgt cr6,0x82322768
	if (ctx.cr6.gt) goto loc_82322768;
loc_82322724:
	// addi r11,r30,1604
	ctx.r11.s64 = ctx.r30.s64 + 1604;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_82322730:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82322750
	if (!ctx.cr6.lt) goto loc_82322750;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82322730
	if (!ctx.cr0.eq) goto loc_82322730;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82322750:
	// bne cr6,0x82322758
	if (!ctx.cr6.eq) goto loc_82322758;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
loc_82322758:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82322768
	if (ctx.cr6.eq) goto loc_82322768;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
loc_82322768:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82322998
	ctx.lr = 0x82322770;
	sub_82322998(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82322788
	if (ctx.cr6.eq) goto loc_82322788;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82322788
	if (ctx.cr6.eq) goto loc_82322788;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82322788:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82322790:
	// addi r11,r30,1092
	ctx.r11.s64 = ctx.r30.s64 + 1092;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8232279C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823227bc
	if (!ctx.cr6.lt) goto loc_823227BC;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8232279c
	if (!ctx.cr0.eq) goto loc_8232279C;
loc_823227B8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_823227BC:
	// bne cr6,0x823227c4
	if (!ctx.cr6.eq) goto loc_823227C4;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
loc_823227C4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8232298c
	if (ctx.cr6.eq) goto loc_8232298C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// b 0x82322768
	goto loc_82322768;
loc_823227D8:
	// addi r11,r30,1092
	ctx.r11.s64 = ctx.r30.s64 + 1092;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_823227E4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82322804
	if (!ctx.cr6.lt) goto loc_82322804;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x823227e4
	if (!ctx.cr0.eq) goto loc_823227E4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82322804:
	// bne cr6,0x8232280c
	if (!ctx.cr6.eq) goto loc_8232280C;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
loc_8232280C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82322820
	if (ctx.cr6.eq) goto loc_82322820;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// b 0x82322824
	goto loc_82322824;
loc_82322820:
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
loc_82322824:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r30,1348
	ctx.r11.s64 = ctx.r30.s64 + 1348;
	// addi r9,r10,-2784
	ctx.r9.s64 = ctx.r10.s64 + -2784;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82322838:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82322858
	if (!ctx.cr6.lt) goto loc_82322858;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82322838
	if (!ctx.cr0.eq) goto loc_82322838;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82322858:
	// bne cr6,0x82322860
	if (!ctx.cr6.eq) goto loc_82322860;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
loc_82322860:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r30,1604
	ctx.r11.s64 = ctx.r30.s64 + 1604;
	// addi r9,r10,-2816
	ctx.r9.s64 = ctx.r10.s64 + -2816;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82322874:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82322894
	if (!ctx.cr6.lt) goto loc_82322894;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82322874
	if (!ctx.cr0.eq) goto loc_82322874;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82322894:
	// bne cr6,0x82322768
	if (!ctx.cr6.eq) goto loc_82322768;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
	// b 0x82322768
	goto loc_82322768;
loc_823228A0:
	// addi r11,r30,1092
	ctx.r11.s64 = ctx.r30.s64 + 1092;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_823228AC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823228cc
	if (!ctx.cr6.lt) goto loc_823228CC;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x823228ac
	if (!ctx.cr0.eq) goto loc_823228AC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_823228CC:
	// bne cr6,0x823228d4
	if (!ctx.cr6.eq) goto loc_823228D4;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
loc_823228D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823228e8
	if (ctx.cr6.eq) goto loc_823228E8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// b 0x823228ec
	goto loc_823228EC;
loc_823228E8:
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
loc_823228EC:
	// bl 0x8226c3f0
	ctx.lr = 0x823228F0;
	sub_8226C3F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82322768
	if (ctx.cr6.eq) goto loc_82322768;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r30,1348
	ctx.r3.s64 = ctx.r30.s64 + 1348;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,-2784
	ctx.r5.s64 = ctx.r11.s64 + -2784;
	// bl 0x82557418
	ctx.lr = 0x82322910;
	sub_82557418(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r30,1604
	ctx.r3.s64 = ctx.r30.s64 + 1604;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,-2768
	ctx.r5.s64 = ctx.r11.s64 + -2768;
	// bl 0x82557418
	ctx.lr = 0x82322924;
	sub_82557418(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,-4020
	ctx.r5.s64 = ctx.r11.s64 + -4020;
	// addi r3,r30,1860
	ctx.r3.s64 = ctx.r30.s64 + 1860;
	// bl 0x82557418
	ctx.lr = 0x82322938;
	sub_82557418(ctx, base);
	// b 0x82322768
	goto loc_82322768;
loc_8232293C:
	// cmpwi cr6,r27,76
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 76, ctx.xer);
	// blt cr6,0x82322768
	if (ctx.cr6.lt) goto loc_82322768;
	// cmpwi cr6,r27,86
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 86, ctx.xer);
	// ble cr6,0x82322724
	if (!ctx.cr6.gt) goto loc_82322724;
	// cmpwi cr6,r27,87
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 87, ctx.xer);
	// beq cr6,0x82322960
	if (ctx.cr6.eq) goto loc_82322960;
	// ble cr6,0x82322768
	if (!ctx.cr6.gt) goto loc_82322768;
	// cmpwi cr6,r27,97
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 97, ctx.xer);
	// b 0x82322720
	goto loc_82322720;
loc_82322960:
	// addi r11,r30,1092
	ctx.r11.s64 = ctx.r30.s64 + 1092;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8232296C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823227bc
	if (!ctx.cr6.lt) goto loc_823227BC;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8232296c
	if (!ctx.cr0.eq) goto loc_8232296C;
	// b 0x823227b8
	goto loc_823227B8;
loc_8232298C:
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// b 0x82322768
	goto loc_82322768;
}

__attribute__((alias("__imp__sub_82322994"))) PPC_WEAK_FUNC(sub_82322994);
PPC_FUNC_IMPL(__imp__sub_82322994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322998"))) PPC_WEAK_FUNC(sub_82322998);
PPC_FUNC_IMPL(__imp__sub_82322998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r3,82
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 82, ctx.xer);
	// bgt cr6,0x82322a24
	if (ctx.cr6.gt) goto loc_82322A24;
	// beq cr6,0x82322a04
	if (ctx.cr6.eq) goto loc_82322A04;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bgt cr6,0x82322ad0
	if (ctx.cr6.gt) goto loc_82322AD0;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// addi r12,r12,25904
	ctx.r12.s64 = ctx.r12.s64 + 25904;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// nop 
	// addi r12,r12,10724
	ctx.r12.s64 = ctx.r12.s64 + 10724;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82322A64;
	case 1:
		goto loc_823229E4;
	case 2:
		goto loc_82322A04;
	case 3:
		goto loc_82322AA4;
	case 4:
		goto loc_82322A44;
	case 5:
		goto loc_82322A84;
	case 6:
		goto loc_82322A04;
	case 7:
		goto loc_82322A04;
	case 8:
		goto loc_82322A04;
	case 9:
		goto loc_82322AA4;
	case 10:
		goto loc_82322AA4;
	case 11:
		goto loc_82322AA4;
	case 12:
		goto loc_82322A84;
	case 13:
		goto loc_82322A84;
	case 14:
		goto loc_82322A84;
	case 15:
		goto loc_82322A64;
	case 16:
		goto loc_82322A64;
	case 17:
		goto loc_82322A64;
	case 18:
		goto loc_823229E4;
	case 19:
		goto loc_823229E4;
	case 20:
		goto loc_82322A44;
	case 21:
		goto loc_82322AD0;
	case 22:
		goto loc_82322A44;
	case 23:
		goto loc_82322A44;
	case 24:
		goto loc_82322A44;
	case 25:
		goto loc_82322A44;
	case 26:
		goto loc_82322A44;
	default:
		__builtin_unreachable();
	}
loc_823229E4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-2708
	ctx.r4.s64 = ctx.r11.s64 + -2708;
	// bl 0x82899948
	ctx.lr = 0x823229F4;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x823229F8;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// b 0x82322ac0
	goto loc_82322AC0;
loc_82322A04:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-2668
	ctx.r4.s64 = ctx.r11.s64 + -2668;
	// bl 0x82899948
	ctx.lr = 0x82322A14;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82322A18;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// b 0x82322ac0
	goto loc_82322AC0;
loc_82322A24:
	// cmpwi cr6,r3,83
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 83, ctx.xer);
	// beq cr6,0x82322aa4
	if (ctx.cr6.eq) goto loc_82322AA4;
	// cmpwi cr6,r3,84
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 84, ctx.xer);
	// beq cr6,0x82322a84
	if (ctx.cr6.eq) goto loc_82322A84;
	// cmpwi cr6,r3,85
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 85, ctx.xer);
	// beq cr6,0x82322a64
	if (ctx.cr6.eq) goto loc_82322A64;
	// cmpwi cr6,r3,86
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 86, ctx.xer);
	// bne cr6,0x82322ad0
	if (!ctx.cr6.eq) goto loc_82322AD0;
loc_82322A44:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-2576
	ctx.r4.s64 = ctx.r11.s64 + -2576;
	// bl 0x82899948
	ctx.lr = 0x82322A54;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82322A58;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x82322ac0
	goto loc_82322AC0;
loc_82322A64:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-2752
	ctx.r4.s64 = ctx.r11.s64 + -2752;
	// bl 0x82899948
	ctx.lr = 0x82322A74;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82322A78;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x82322ac0
	goto loc_82322AC0;
loc_82322A84:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-2532
	ctx.r4.s64 = ctx.r11.s64 + -2532;
	// bl 0x82899948
	ctx.lr = 0x82322A94;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82322A98;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// b 0x82322ac0
	goto loc_82322AC0;
loc_82322AA4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-2624
	ctx.r4.s64 = ctx.r11.s64 + -2624;
	// bl 0x82899948
	ctx.lr = 0x82322AB4;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82322AB8;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
loc_82322AC0:
	// bl 0x82899858
	ctx.lr = 0x82322AC4;
	sub_82899858(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570620
	ctx.lr = 0x82322AD0;
	sub_82570620(ctx, base);
loc_82322AD0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82322AE0"))) PPC_WEAK_FUNC(sub_82322AE0);
PPC_FUNC_IMPL(__imp__sub_82322AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// rlwinm r0,r4,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,25240
	ctx.r12.s64 = ctx.r12.s64 + 25240;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// addi r12,r12,11016
	ctx.r12.s64 = ctx.r12.s64 + 11016;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82322B08"))) PPC_WEAK_FUNC(sub_82322B08);
PPC_FUNC_IMPL(__imp__sub_82322B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-2488
	ctx.r5.s64 = ctx.r11.s64 + -2488;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322B18"))) PPC_WEAK_FUNC(sub_82322B18);
PPC_FUNC_IMPL(__imp__sub_82322B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-2460
	ctx.r5.s64 = ctx.r11.s64 + -2460;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322B28"))) PPC_WEAK_FUNC(sub_82322B28);
PPC_FUNC_IMPL(__imp__sub_82322B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-2436
	ctx.r5.s64 = ctx.r11.s64 + -2436;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322B38"))) PPC_WEAK_FUNC(sub_82322B38);
PPC_FUNC_IMPL(__imp__sub_82322B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-2408
	ctx.r5.s64 = ctx.r11.s64 + -2408;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322B48"))) PPC_WEAK_FUNC(sub_82322B48);
PPC_FUNC_IMPL(__imp__sub_82322B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-2388
	ctx.r5.s64 = ctx.r11.s64 + -2388;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322B58"))) PPC_WEAK_FUNC(sub_82322B58);
PPC_FUNC_IMPL(__imp__sub_82322B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-2364
	ctx.r5.s64 = ctx.r11.s64 + -2364;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322B68"))) PPC_WEAK_FUNC(sub_82322B68);
PPC_FUNC_IMPL(__imp__sub_82322B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-2340
	ctx.r5.s64 = ctx.r11.s64 + -2340;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322B78"))) PPC_WEAK_FUNC(sub_82322B78);
PPC_FUNC_IMPL(__imp__sub_82322B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-2316
	ctx.r5.s64 = ctx.r11.s64 + -2316;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322B88"))) PPC_WEAK_FUNC(sub_82322B88);
PPC_FUNC_IMPL(__imp__sub_82322B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-2288
	ctx.r5.s64 = ctx.r11.s64 + -2288;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322B98"))) PPC_WEAK_FUNC(sub_82322B98);
PPC_FUNC_IMPL(__imp__sub_82322B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-2256
	ctx.r5.s64 = ctx.r11.s64 + -2256;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322BA8"))) PPC_WEAK_FUNC(sub_82322BA8);
PPC_FUNC_IMPL(__imp__sub_82322BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-2228
	ctx.r5.s64 = ctx.r11.s64 + -2228;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322BB8"))) PPC_WEAK_FUNC(sub_82322BB8);
PPC_FUNC_IMPL(__imp__sub_82322BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-2192
	ctx.r5.s64 = ctx.r11.s64 + -2192;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322BC8"))) PPC_WEAK_FUNC(sub_82322BC8);
PPC_FUNC_IMPL(__imp__sub_82322BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-2156
	ctx.r5.s64 = ctx.r11.s64 + -2156;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322BD8"))) PPC_WEAK_FUNC(sub_82322BD8);
PPC_FUNC_IMPL(__imp__sub_82322BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-2120
	ctx.r5.s64 = ctx.r11.s64 + -2120;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322BE8"))) PPC_WEAK_FUNC(sub_82322BE8);
PPC_FUNC_IMPL(__imp__sub_82322BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-2084
	ctx.r5.s64 = ctx.r11.s64 + -2084;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322BF8"))) PPC_WEAK_FUNC(sub_82322BF8);
PPC_FUNC_IMPL(__imp__sub_82322BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-2044
	ctx.r5.s64 = ctx.r11.s64 + -2044;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322C08"))) PPC_WEAK_FUNC(sub_82322C08);
PPC_FUNC_IMPL(__imp__sub_82322C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-2004
	ctx.r5.s64 = ctx.r11.s64 + -2004;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322C18"))) PPC_WEAK_FUNC(sub_82322C18);
PPC_FUNC_IMPL(__imp__sub_82322C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1964
	ctx.r5.s64 = ctx.r11.s64 + -1964;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322C28"))) PPC_WEAK_FUNC(sub_82322C28);
PPC_FUNC_IMPL(__imp__sub_82322C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1924
	ctx.r5.s64 = ctx.r11.s64 + -1924;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322C38"))) PPC_WEAK_FUNC(sub_82322C38);
PPC_FUNC_IMPL(__imp__sub_82322C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1888
	ctx.r5.s64 = ctx.r11.s64 + -1888;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322C48"))) PPC_WEAK_FUNC(sub_82322C48);
PPC_FUNC_IMPL(__imp__sub_82322C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1848
	ctx.r5.s64 = ctx.r11.s64 + -1848;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322C58"))) PPC_WEAK_FUNC(sub_82322C58);
PPC_FUNC_IMPL(__imp__sub_82322C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1812
	ctx.r5.s64 = ctx.r11.s64 + -1812;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322C68"))) PPC_WEAK_FUNC(sub_82322C68);
PPC_FUNC_IMPL(__imp__sub_82322C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1776
	ctx.r5.s64 = ctx.r11.s64 + -1776;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322C78"))) PPC_WEAK_FUNC(sub_82322C78);
PPC_FUNC_IMPL(__imp__sub_82322C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1744
	ctx.r5.s64 = ctx.r11.s64 + -1744;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322C88"))) PPC_WEAK_FUNC(sub_82322C88);
PPC_FUNC_IMPL(__imp__sub_82322C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1708
	ctx.r5.s64 = ctx.r11.s64 + -1708;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322C98"))) PPC_WEAK_FUNC(sub_82322C98);
PPC_FUNC_IMPL(__imp__sub_82322C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1672
	ctx.r5.s64 = ctx.r11.s64 + -1672;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322CA8"))) PPC_WEAK_FUNC(sub_82322CA8);
PPC_FUNC_IMPL(__imp__sub_82322CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1636
	ctx.r5.s64 = ctx.r11.s64 + -1636;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322CB8"))) PPC_WEAK_FUNC(sub_82322CB8);
PPC_FUNC_IMPL(__imp__sub_82322CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1596
	ctx.r5.s64 = ctx.r11.s64 + -1596;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322CC8"))) PPC_WEAK_FUNC(sub_82322CC8);
PPC_FUNC_IMPL(__imp__sub_82322CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1560
	ctx.r5.s64 = ctx.r11.s64 + -1560;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322CD8"))) PPC_WEAK_FUNC(sub_82322CD8);
PPC_FUNC_IMPL(__imp__sub_82322CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1516
	ctx.r5.s64 = ctx.r11.s64 + -1516;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322CE8"))) PPC_WEAK_FUNC(sub_82322CE8);
PPC_FUNC_IMPL(__imp__sub_82322CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1472
	ctx.r5.s64 = ctx.r11.s64 + -1472;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322CF8"))) PPC_WEAK_FUNC(sub_82322CF8);
PPC_FUNC_IMPL(__imp__sub_82322CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1428
	ctx.r5.s64 = ctx.r11.s64 + -1428;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322D08"))) PPC_WEAK_FUNC(sub_82322D08);
PPC_FUNC_IMPL(__imp__sub_82322D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1380
	ctx.r5.s64 = ctx.r11.s64 + -1380;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322D18"))) PPC_WEAK_FUNC(sub_82322D18);
PPC_FUNC_IMPL(__imp__sub_82322D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1336
	ctx.r5.s64 = ctx.r11.s64 + -1336;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322D28"))) PPC_WEAK_FUNC(sub_82322D28);
PPC_FUNC_IMPL(__imp__sub_82322D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1292
	ctx.r5.s64 = ctx.r11.s64 + -1292;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322D38"))) PPC_WEAK_FUNC(sub_82322D38);
PPC_FUNC_IMPL(__imp__sub_82322D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1248
	ctx.r5.s64 = ctx.r11.s64 + -1248;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322D48"))) PPC_WEAK_FUNC(sub_82322D48);
PPC_FUNC_IMPL(__imp__sub_82322D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1196
	ctx.r5.s64 = ctx.r11.s64 + -1196;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322D58"))) PPC_WEAK_FUNC(sub_82322D58);
PPC_FUNC_IMPL(__imp__sub_82322D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1148
	ctx.r5.s64 = ctx.r11.s64 + -1148;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322D68"))) PPC_WEAK_FUNC(sub_82322D68);
PPC_FUNC_IMPL(__imp__sub_82322D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1116
	ctx.r5.s64 = ctx.r11.s64 + -1116;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322D78"))) PPC_WEAK_FUNC(sub_82322D78);
PPC_FUNC_IMPL(__imp__sub_82322D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1084
	ctx.r5.s64 = ctx.r11.s64 + -1084;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322D88"))) PPC_WEAK_FUNC(sub_82322D88);
PPC_FUNC_IMPL(__imp__sub_82322D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1052
	ctx.r5.s64 = ctx.r11.s64 + -1052;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322D98"))) PPC_WEAK_FUNC(sub_82322D98);
PPC_FUNC_IMPL(__imp__sub_82322D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-1020
	ctx.r5.s64 = ctx.r11.s64 + -1020;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322DA8"))) PPC_WEAK_FUNC(sub_82322DA8);
PPC_FUNC_IMPL(__imp__sub_82322DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-988
	ctx.r5.s64 = ctx.r11.s64 + -988;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322DB8"))) PPC_WEAK_FUNC(sub_82322DB8);
PPC_FUNC_IMPL(__imp__sub_82322DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-956
	ctx.r5.s64 = ctx.r11.s64 + -956;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322DC8"))) PPC_WEAK_FUNC(sub_82322DC8);
PPC_FUNC_IMPL(__imp__sub_82322DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-920
	ctx.r5.s64 = ctx.r11.s64 + -920;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322DD8"))) PPC_WEAK_FUNC(sub_82322DD8);
PPC_FUNC_IMPL(__imp__sub_82322DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-884
	ctx.r5.s64 = ctx.r11.s64 + -884;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322DE8"))) PPC_WEAK_FUNC(sub_82322DE8);
PPC_FUNC_IMPL(__imp__sub_82322DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-848
	ctx.r5.s64 = ctx.r11.s64 + -848;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322DF8"))) PPC_WEAK_FUNC(sub_82322DF8);
PPC_FUNC_IMPL(__imp__sub_82322DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-816
	ctx.r5.s64 = ctx.r11.s64 + -816;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322E08"))) PPC_WEAK_FUNC(sub_82322E08);
PPC_FUNC_IMPL(__imp__sub_82322E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-784
	ctx.r5.s64 = ctx.r11.s64 + -784;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322E18"))) PPC_WEAK_FUNC(sub_82322E18);
PPC_FUNC_IMPL(__imp__sub_82322E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-752
	ctx.r5.s64 = ctx.r11.s64 + -752;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322E28"))) PPC_WEAK_FUNC(sub_82322E28);
PPC_FUNC_IMPL(__imp__sub_82322E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-720
	ctx.r5.s64 = ctx.r11.s64 + -720;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322E38"))) PPC_WEAK_FUNC(sub_82322E38);
PPC_FUNC_IMPL(__imp__sub_82322E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-696
	ctx.r5.s64 = ctx.r11.s64 + -696;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322E48"))) PPC_WEAK_FUNC(sub_82322E48);
PPC_FUNC_IMPL(__imp__sub_82322E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-676
	ctx.r5.s64 = ctx.r11.s64 + -676;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322E58"))) PPC_WEAK_FUNC(sub_82322E58);
PPC_FUNC_IMPL(__imp__sub_82322E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-656
	ctx.r5.s64 = ctx.r11.s64 + -656;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322E68"))) PPC_WEAK_FUNC(sub_82322E68);
PPC_FUNC_IMPL(__imp__sub_82322E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-628
	ctx.r5.s64 = ctx.r11.s64 + -628;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322E78"))) PPC_WEAK_FUNC(sub_82322E78);
PPC_FUNC_IMPL(__imp__sub_82322E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-604
	ctx.r5.s64 = ctx.r11.s64 + -604;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322E88"))) PPC_WEAK_FUNC(sub_82322E88);
PPC_FUNC_IMPL(__imp__sub_82322E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-572
	ctx.r5.s64 = ctx.r11.s64 + -572;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322E98"))) PPC_WEAK_FUNC(sub_82322E98);
PPC_FUNC_IMPL(__imp__sub_82322E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-540
	ctx.r5.s64 = ctx.r11.s64 + -540;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322EA8"))) PPC_WEAK_FUNC(sub_82322EA8);
PPC_FUNC_IMPL(__imp__sub_82322EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-508
	ctx.r5.s64 = ctx.r11.s64 + -508;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322EB8"))) PPC_WEAK_FUNC(sub_82322EB8);
PPC_FUNC_IMPL(__imp__sub_82322EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-472
	ctx.r5.s64 = ctx.r11.s64 + -472;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322EC8"))) PPC_WEAK_FUNC(sub_82322EC8);
PPC_FUNC_IMPL(__imp__sub_82322EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-444
	ctx.r5.s64 = ctx.r11.s64 + -444;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322ED8"))) PPC_WEAK_FUNC(sub_82322ED8);
PPC_FUNC_IMPL(__imp__sub_82322ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-416
	ctx.r5.s64 = ctx.r11.s64 + -416;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322EE8"))) PPC_WEAK_FUNC(sub_82322EE8);
PPC_FUNC_IMPL(__imp__sub_82322EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-388
	ctx.r5.s64 = ctx.r11.s64 + -388;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322EF8"))) PPC_WEAK_FUNC(sub_82322EF8);
PPC_FUNC_IMPL(__imp__sub_82322EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-360
	ctx.r5.s64 = ctx.r11.s64 + -360;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322F08"))) PPC_WEAK_FUNC(sub_82322F08);
PPC_FUNC_IMPL(__imp__sub_82322F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-336
	ctx.r5.s64 = ctx.r11.s64 + -336;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322F18"))) PPC_WEAK_FUNC(sub_82322F18);
PPC_FUNC_IMPL(__imp__sub_82322F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-312
	ctx.r5.s64 = ctx.r11.s64 + -312;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322F28"))) PPC_WEAK_FUNC(sub_82322F28);
PPC_FUNC_IMPL(__imp__sub_82322F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-288
	ctx.r5.s64 = ctx.r11.s64 + -288;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322F38"))) PPC_WEAK_FUNC(sub_82322F38);
PPC_FUNC_IMPL(__imp__sub_82322F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-264
	ctx.r5.s64 = ctx.r11.s64 + -264;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322F48"))) PPC_WEAK_FUNC(sub_82322F48);
PPC_FUNC_IMPL(__imp__sub_82322F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-240
	ctx.r5.s64 = ctx.r11.s64 + -240;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322F58"))) PPC_WEAK_FUNC(sub_82322F58);
PPC_FUNC_IMPL(__imp__sub_82322F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-212
	ctx.r5.s64 = ctx.r11.s64 + -212;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322F68"))) PPC_WEAK_FUNC(sub_82322F68);
PPC_FUNC_IMPL(__imp__sub_82322F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-196
	ctx.r5.s64 = ctx.r11.s64 + -196;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322F78"))) PPC_WEAK_FUNC(sub_82322F78);
PPC_FUNC_IMPL(__imp__sub_82322F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-184
	ctx.r5.s64 = ctx.r11.s64 + -184;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322F88"))) PPC_WEAK_FUNC(sub_82322F88);
PPC_FUNC_IMPL(__imp__sub_82322F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-168
	ctx.r5.s64 = ctx.r11.s64 + -168;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322F98"))) PPC_WEAK_FUNC(sub_82322F98);
PPC_FUNC_IMPL(__imp__sub_82322F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-144
	ctx.r5.s64 = ctx.r11.s64 + -144;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322FA8"))) PPC_WEAK_FUNC(sub_82322FA8);
PPC_FUNC_IMPL(__imp__sub_82322FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-132
	ctx.r5.s64 = ctx.r11.s64 + -132;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322FB8"))) PPC_WEAK_FUNC(sub_82322FB8);
PPC_FUNC_IMPL(__imp__sub_82322FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-116
	ctx.r5.s64 = ctx.r11.s64 + -116;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322FC8"))) PPC_WEAK_FUNC(sub_82322FC8);
PPC_FUNC_IMPL(__imp__sub_82322FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-100
	ctx.r5.s64 = ctx.r11.s64 + -100;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322FD8"))) PPC_WEAK_FUNC(sub_82322FD8);
PPC_FUNC_IMPL(__imp__sub_82322FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-84
	ctx.r5.s64 = ctx.r11.s64 + -84;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322FE8"))) PPC_WEAK_FUNC(sub_82322FE8);
PPC_FUNC_IMPL(__imp__sub_82322FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-68
	ctx.r5.s64 = ctx.r11.s64 + -68;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322FF8"))) PPC_WEAK_FUNC(sub_82322FF8);
PPC_FUNC_IMPL(__imp__sub_82322FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-52
	ctx.r5.s64 = ctx.r11.s64 + -52;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82323008"))) PPC_WEAK_FUNC(sub_82323008);
PPC_FUNC_IMPL(__imp__sub_82323008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-36
	ctx.r5.s64 = ctx.r11.s64 + -36;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82323018"))) PPC_WEAK_FUNC(sub_82323018);
PPC_FUNC_IMPL(__imp__sub_82323018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-20
	ctx.r5.s64 = ctx.r11.s64 + -20;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82323028"))) PPC_WEAK_FUNC(sub_82323028);
PPC_FUNC_IMPL(__imp__sub_82323028) {
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
	// addi r11,r3,580
	ctx.r11.s64 = ctx.r3.s64 + 580;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_82323048:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82323064
	if (!ctx.cr6.lt) goto loc_82323064;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82323048
	if (!ctx.cr0.eq) goto loc_82323048;
loc_82323064:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82323074
	if (!ctx.cr6.eq) goto loc_82323074;
	// stb r31,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r31.u8);
loc_82323074:
	// bl 0x82323f98
	ctx.lr = 0x82323078;
	sub_82323F98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8226c3f0
	ctx.lr = 0x82323080;
	sub_8226C3F0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r31.u32);
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r31.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823230B4"))) PPC_WEAK_FUNC(sub_823230B4);
PPC_FUNC_IMPL(__imp__sub_823230B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823230B8"))) PPC_WEAK_FUNC(sub_823230B8);
PPC_FUNC_IMPL(__imp__sub_823230B8) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-2880
	ctx.r4.s64 = ctx.r11.s64 + -2880;
	// bl 0x82557338
	ctx.lr = 0x823230D4;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823230e4
	if (!ctx.cr0.eq) goto loc_823230E4;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82323188
	goto loc_82323188;
loc_823230E4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-2868
	ctx.r4.s64 = ctx.r11.s64 + -2868;
	// bl 0x82557338
	ctx.lr = 0x823230F4;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82323104
	if (!ctx.cr0.eq) goto loc_82323104;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82323188
	goto loc_82323188;
loc_82323104:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-2852
	ctx.r4.s64 = ctx.r11.s64 + -2852;
	// bl 0x82557338
	ctx.lr = 0x82323114;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82323124
	if (!ctx.cr0.eq) goto loc_82323124;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82323188
	goto loc_82323188;
loc_82323124:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-2836
	ctx.r4.s64 = ctx.r11.s64 + -2836;
	// bl 0x82557338
	ctx.lr = 0x82323134;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82323144
	if (!ctx.cr0.eq) goto loc_82323144;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x82323188
	goto loc_82323188;
loc_82323144:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-2816
	ctx.r4.s64 = ctx.r11.s64 + -2816;
	// bl 0x82557338
	ctx.lr = 0x82323154;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82323164
	if (!ctx.cr0.eq) goto loc_82323164;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x82323188
	goto loc_82323188;
loc_82323164:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-2800
	ctx.r4.s64 = ctx.r11.s64 + -2800;
	// bl 0x82fa3928
	ctx.lr = 0x82323174;
	sub_82FA3928(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82323188:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82323198"))) PPC_WEAK_FUNC(sub_82323198);
PPC_FUNC_IMPL(__imp__sub_82323198) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// addi r4,r11,-11704
	ctx.r4.s64 = ctx.r11.s64 + -11704;
	// addi r31,r30,580
	ctx.r31.s64 = ctx.r30.s64 + 580;
	// bl 0x82557338
	ctx.lr = 0x823231C4;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823231d4
	if (!ctx.cr0.eq) goto loc_823231D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823231dc
	goto loc_823231DC;
loc_823231D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823230b8
	ctx.lr = 0x823231DC;
	sub_823230B8(ctx, base);
loc_823231DC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,6352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6352, ctx.r3.u32);
	// bne cr6,0x8232320c
	if (!ctx.cr6.eq) goto loc_8232320C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28536
	ctx.r4.s64 = ctx.r11.s64 + -28536;
	// bl 0x82fa3928
	ctx.lr = 0x823231F8;
	sub_82FA3928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// bne 0x82323208
	if (!ctx.cr0.eq) goto loc_82323208;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82323208:
	// stw r11,6360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6360, ctx.r11.u32);
loc_8232320C:
	// lwz r11,6352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6352);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82323250
	if (ctx.cr6.lt) goto loc_82323250;
	// beq cr6,0x82323248
	if (ctx.cr6.eq) goto loc_82323248;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82323248
	if (ctx.cr6.lt) goto loc_82323248;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x82323240
	if (ctx.cr6.lt) goto loc_82323240;
	// beq cr6,0x82323250
	if (ctx.cr6.eq) goto loc_82323250;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82323248
	if (ctx.cr6.lt) goto loc_82323248;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82323254
	goto loc_82323254;
loc_82323240:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82323254
	goto loc_82323254;
loc_82323248:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82323254
	goto loc_82323254;
loc_82323250:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82323254:
	// stw r11,6344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6344, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82323270"))) PPC_WEAK_FUNC(sub_82323270);
PPC_FUNC_IMPL(__imp__sub_82323270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82323278;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8226c3f0
	ctx.lr = 0x82323288;
	sub_8226C3F0(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r25,6356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6356, ctx.r25.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r25,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r25.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,6352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6352);
	// li r8,5
	ctx.r8.s64 = 5;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82323320
	if (ctx.cr6.lt) goto loc_82323320;
	// beq cr6,0x82323318
	if (ctx.cr6.eq) goto loc_82323318;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82323310
	if (ctx.cr6.lt) goto loc_82323310;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x823232d8
	if (ctx.cr6.lt) goto loc_823232D8;
	// beq cr6,0x82323320
	if (ctx.cr6.eq) goto loc_82323320;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82323324
	if (!ctx.cr6.lt) goto loc_82323324;
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// b 0x82323324
	goto loc_82323324;
loc_823232D8:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r10,r30,2120
	ctx.r10.s64 = ctx.r30.s64 + 2120;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_823232E4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bge cr6,0x823232f4
	if (!ctx.cr6.lt) goto loc_823232F4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_823232F4:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1056
	ctx.r10.s64 = ctx.r10.s64 + 1056;
	// bne 0x823232e4
	if (!ctx.cr0.eq) goto loc_823232E4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82323310
	if (ctx.cr6.eq) goto loc_82323310;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// b 0x82323324
	goto loc_82323324;
loc_82323310:
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// b 0x82323324
	goto loc_82323324;
loc_82323318:
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// b 0x82323324
	goto loc_82323324;
loc_82323320:
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
loc_82323324:
	// lwz r11,6344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6344);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82323508
	if (ctx.cr6.lt) goto loc_82323508;
	// beq cr6,0x8232347c
	if (ctx.cr6.eq) goto loc_8232347C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82323574
	if (!ctx.cr6.lt) goto loc_82323574;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r9,r30,2120
	ctx.r9.s64 = ctx.r30.s64 + 2120;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82323350:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// blt cr6,0x82323368
	if (ctx.cr6.lt) goto loc_82323368;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bne cr6,0x82323370
	if (!ctx.cr6.eq) goto loc_82323370;
	// b 0x8232336c
	goto loc_8232336C;
loc_82323368:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8232336C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82323370:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,1056
	ctx.r9.s64 = ctx.r9.s64 + 1056;
	// bne 0x82323350
	if (!ctx.cr0.eq) goto loc_82323350;
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r31,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r31.u32);
	// lwz r10,6352(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6352);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82323430
	if (!ctx.cr6.eq) goto loc_82323430;
	// lwz r10,3176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3176);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x823233b0
	if (!ctx.cr6.eq) goto loc_823233B0;
	// stw r31,6356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6356, ctx.r31.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r4,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// b 0x82323574
	goto loc_82323574;
loc_823233B0:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x823233cc
	if (!ctx.cr6.eq) goto loc_823233CC;
	// stw r5,6356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6356, ctx.r5.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// stw r6,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r6.u32);
	// b 0x82323574
	goto loc_82323574;
loc_823233CC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8232341c
	if (ctx.cr6.eq) goto loc_8232341C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8232340c
	if (ctx.cr6.eq) goto loc_8232340C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823233fc
	if (ctx.cr6.eq) goto loc_823233FC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82323424
	if (!ctx.cr6.eq) goto loc_82323424;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,6356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6356, ctx.r11.u32);
	// stw r5,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r5.u32);
	// b 0x82323424
	goto loc_82323424;
loc_823233FC:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,6356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6356, ctx.r11.u32);
	// stw r4,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r4.u32);
	// b 0x82323424
	goto loc_82323424;
loc_8232340C:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,6356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6356, ctx.r11.u32);
	// stw r6,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r6.u32);
	// b 0x82323424
	goto loc_82323424;
loc_8232341C:
	// stw r6,6356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6356, ctx.r6.u32);
	// stw r31,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r31.u32);
loc_82323424:
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// b 0x82323574
	goto loc_82323574;
loc_82323430:
	// lwz r11,6360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6360);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r11,6356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6356, ctx.r11.u32);
	// beq cr6,0x82323458
	if (ctx.cr6.eq) goto loc_82323458;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82323574
	if (!ctx.cr6.eq) goto loc_82323574;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r6,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r6.u32);
	// stw r31,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r31.u32);
	// b 0x82323574
	goto loc_82323574;
loc_82323458:
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lwz r11,6352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82323574
	if (!ctx.cr6.eq) goto loc_82323574;
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// b 0x82323574
	goto loc_82323574;
loc_8232347C:
	// lwz r11,3176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82323490
	if (ctx.cr6.eq) goto loc_82323490;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823234c4
	if (!ctx.cr6.eq) goto loc_823234C4;
loc_82323490:
	// lwz r11,4232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4232);
	// stw r31,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r31.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// stw r25,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r25.u32);
	// stw r31,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r31.u32);
	// bne cr6,0x823234b8
	if (!ctx.cr6.eq) goto loc_823234B8;
	// stw r6,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r6.u32);
	// stw r8,6356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6356, ctx.r8.u32);
	// b 0x82323574
	goto loc_82323574;
loc_823234B8:
	// stw r31,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r31.u32);
	// stw r4,6356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6356, ctx.r4.u32);
	// b 0x82323574
	goto loc_82323574;
loc_823234C4:
	// lwz r10,4232(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4232);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8232355c
	if (ctx.cr6.eq) goto loc_8232355C;
	// lwz r11,5288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5288);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8232355c
	if (ctx.cr6.eq) goto loc_8232355C;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82323540
	if (ctx.cr0.eq) goto loc_82323540;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82323540
	if (ctx.cr6.eq) goto loc_82323540;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82323540
	if (ctx.cr0.eq) goto loc_82323540;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82323540
	if (ctx.cr6.eq) goto loc_82323540;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r4,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// b 0x8232351c
	goto loc_8232351C;
loc_82323508:
	// lwz r11,3176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3176);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82323530
	if (!ctx.cr6.eq) goto loc_82323530;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
loc_8232351C:
	// stw r31,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r31.u32);
	// stw r31,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r31.u32);
	// stw r31,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r31.u32);
	// stw r31,6356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6356, ctx.r31.u32);
	// b 0x82323574
	goto loc_82323574;
loc_82323530:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82323540
	if (ctx.cr0.eq) goto loc_82323540;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8232355c
	if (!ctx.cr6.eq) goto loc_8232355C;
loc_82323540:
	// stw r31,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// stw r6,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r6.u32);
	// stw r31,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r31.u32);
	// stw r6,6356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6356, ctx.r6.u32);
	// b 0x82323574
	goto loc_82323574;
loc_8232355C:
	// stw r31,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// stw r6,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r6.u32);
	// stw r31,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r31.u32);
	// stw r5,6356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6356, ctx.r5.u32);
loc_82323574:
	// lwz r10,6356(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6356);
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// addi r11,r30,836
	ctx.r11.s64 = ctx.r30.s64 + 836;
	// addi r9,r9,-15592
	ctx.r9.s64 = ctx.r9.s64 + -15592;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
loc_82323594:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x823235b4
	if (!ctx.cr6.lt) goto loc_823235B4;
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb. r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82323594
	if (!ctx.cr0.eq) goto loc_82323594;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
loc_823235B4:
	// bne cr6,0x823235bc
	if (!ctx.cr6.eq) goto loc_823235BC;
	// stb r25,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r25.u8);
loc_823235BC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82323668
	if (ctx.cr6.eq) goto loc_82323668;
	// bl 0x8226d8e8
	ctx.lr = 0x823235C8;
	sub_8226D8E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8226e978
	ctx.lr = 0x823235D4;
	sub_8226E978(ctx, base);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// addi r29,r30,2120
	ctx.r29.s64 = ctx.r30.s64 + 2120;
loc_823235E0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823235f4
	if (ctx.cr6.eq) goto loc_823235F4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82323624
	if (!ctx.cr6.eq) goto loc_82323624;
loc_823235F4:
	// lwz r11,6344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82323608
	if (!ctx.cr6.eq) goto loc_82323608;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x82323624
	if (ctx.cr6.eq) goto loc_82323624;
loc_82323608:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8226ecf0
	ctx.lr = 0x82323614;
	sub_8226ECF0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82323624
	if (ctx.cr0.eq) goto loc_82323624;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8226ec08
	ctx.lr = 0x82323624;
	sub_8226EC08(ctx, base);
loc_82323624:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82323658
	if (!ctx.cr6.eq) goto loc_82323658;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82323658
	if (!ctx.cr6.eq) goto loc_82323658;
	// lwz r24,8(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8226c3f0
	ctx.lr = 0x82323640;
	sub_8226C3F0(ctx, base);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// stw r24,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r24.u32);
	// stw r25,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r25.u32);
	// stw r25,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r25.u32);
	// stw r25,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r25.u32);
	// stw r24,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r24.u32);
loc_82323658:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,1056
	ctx.r29.s64 = ctx.r29.s64 + 1056;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x823235e0
	if (ctx.cr6.lt) goto loc_823235E0;
loc_82323668:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82323670"))) PPC_WEAK_FUNC(sub_82323670);
PPC_FUNC_IMPL(__imp__sub_82323670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82323678;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8226d8e8
	ctx.lr = 0x8232368C;
	sub_8226D8E8(ctx, base);
	// mulli r11,r30,1056
	ctx.r11.s64 = ctx.r30.s64 * 1056;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,2120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823236dc
	if (!ctx.cr6.eq) goto loc_823236DC;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823236dc
	if (ctx.cr6.eq) goto loc_823236DC;
	// lwz r4,2124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	// bl 0x8226ecf0
	ctx.lr = 0x823236B4;
	sub_8226ECF0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x823236dc
	if (ctx.cr0.eq) goto loc_823236DC;
	// lbz r11,216(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823236dc
	if (ctx.cr0.eq) goto loc_823236DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226eb90
	ctx.lr = 0x823236D0;
	sub_8226EB90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,2124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	// bl 0x8226e660
	ctx.lr = 0x823236DC;
	sub_8226E660(ctx, base);
loc_823236DC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823236EC"))) PPC_WEAK_FUNC(sub_823236EC);
PPC_FUNC_IMPL(__imp__sub_823236EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823236F0"))) PPC_WEAK_FUNC(sub_823236F0);
PPC_FUNC_IMPL(__imp__sub_823236F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x823236F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,1056
	ctx.r11.s64 = ctx.r4.s64 * 1056;
	// add r26,r11,r3
	ctx.r26.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,2128(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2128);
	// beq cr6,0x82323754
	if (ctx.cr6.eq) goto loc_82323754;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8232374c
	if (ctx.cr6.lt) goto loc_8232374C;
	// beq cr6,0x82323744
	if (ctx.cr6.eq) goto loc_82323744;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8232373c
	if (ctx.cr6.lt) goto loc_8232373C;
	// bne cr6,0x823238bc
	if (!ctx.cr6.eq) goto loc_823238BC;
	// lwz r31,6436(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6436);
	// b 0x82323788
	goto loc_82323788;
loc_8232373C:
	// lwz r31,6428(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6428);
	// b 0x82323788
	goto loc_82323788;
loc_82323744:
	// lwz r31,6420(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6420);
	// b 0x82323788
	goto loc_82323788;
loc_8232374C:
	// lwz r31,6412(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6412);
	// b 0x82323788
	goto loc_82323788;
loc_82323754:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82323784
	if (ctx.cr6.lt) goto loc_82323784;
	// beq cr6,0x8232377c
	if (ctx.cr6.eq) goto loc_8232377C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82323774
	if (ctx.cr6.lt) goto loc_82323774;
	// bne cr6,0x823238bc
	if (!ctx.cr6.eq) goto loc_823238BC;
	// lwz r31,6440(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6440);
	// b 0x82323788
	goto loc_82323788;
loc_82323774:
	// lwz r31,6432(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6432);
	// b 0x82323788
	goto loc_82323788;
loc_8232377C:
	// lwz r31,6424(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6424);
	// b 0x82323788
	goto loc_82323788;
loc_82323784:
	// lwz r31,6416(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6416);
loc_82323788:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823238bc
	if (ctx.cr6.eq) goto loc_823238BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546b30
	ctx.lr = 0x82323798;
	sub_82546B30(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,36
	ctx.r11.s64 = 36;
	// lis r9,25
	ctx.r9.s64 = 1638400;
	// divwu r8,r3,r11
	ctx.r8.u32 = ctx.r3.u32 / ctx.r11.u32;
	// ori r9,r9,26125
	ctx.r9.u64 = ctx.r9.u64 | 26125;
	// lwz r11,21292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21292);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// lfs f0,-24756(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// clrlwi r9,r11,9
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21292, ctx.r11.u32);
	// lwz r11,6344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// oris r11,r9,16256
	ctx.r11.u64 = ctx.r9.u64 | 1065353216;
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
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x82323848
	if (!ctx.cr6.eq) goto loc_82323848;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x82323848
	if (!ctx.cr6.eq) goto loc_82323848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82323f98
	ctx.lr = 0x82323820;
	sub_82323F98(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82323848
	if (!ctx.cr6.eq) goto loc_82323848;
	// bl 0x8226c3f0
	ctx.lr = 0x8232382C;
	sub_8226C3F0(ctx, base);
	// mulli r11,r29,36
	ctx.r11.s64 = ctx.r29.s64 * 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82fa77c0
	ctx.lr = 0x82323844;
	sub_82FA77C0(ctx, base);
	// stw r28,388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 388, ctx.r28.u32);
loc_82323848:
	// bl 0x8226c3f0
	ctx.lr = 0x8232384C;
	sub_8226C3F0(ctx, base);
	// mulli r10,r27,40
	ctx.r10.s64 = ctx.r27.s64 * 40;
	// mulli r11,r29,36
	ctx.r11.s64 = ctx.r29.s64 * 36;
	// add r30,r10,r3
	ctx.r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r30,312
	ctx.r3.s64 = ctx.r30.s64 + 312;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8232386C;
	sub_82FA77C0(ctx, base);
	// stw r28,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82546708
	ctx.lr = 0x82323880;
	sub_82546708(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8232389c
	if (ctx.cr6.eq) goto loc_8232389C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a75198
	ctx.lr = 0x8232389C;
	sub_82A75198(ctx, base);
loc_8232389C:
	// li r5,1000
	ctx.r5.s64 = 1000;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r26,2132
	ctx.r3.s64 = ctx.r26.s64 + 2132;
	// bl 0x82a75198
	ctx.lr = 0x823238AC;
	sub_82A75198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825469e0
	ctx.lr = 0x823238B4;
	sub_825469E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x823238c0
	goto loc_823238C0;
loc_823238BC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823238C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823238C8"))) PPC_WEAK_FUNC(sub_823238C8);
PPC_FUNC_IMPL(__imp__sub_823238C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823238D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,6344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6344);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82323b70
	if (ctx.cr6.lt) goto loc_82323B70;
	// beq cr6,0x823239d4
	if (ctx.cr6.eq) goto loc_823239D4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82323cdc
	if (!ctx.cr6.lt) goto loc_82323CDC;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r7,r3,3176
	ctx.r7.s64 = ctx.r3.s64 + 3176;
	// li r28,4
	ctx.r28.s64 = 4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82323904:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82323914
	if (!ctx.cr6.eq) goto loc_82323914;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
loc_82323914:
	// addi r10,r10,1056
	ctx.r10.s64 = ctx.r10.s64 + 1056;
	// bdnz 0x82323904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323904;
	// addi r10,r29,2120
	ctx.r10.s64 = ctx.r29.s64 + 2120;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82323930:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82323944
	if (ctx.cr6.eq) goto loc_82323944;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82323948
	if (!ctx.cr6.eq) goto loc_82323948;
loc_82323944:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82323948:
	// addi r9,r9,1056
	ctx.r9.s64 = ctx.r9.s64 + 1056;
	// bdnz 0x82323930
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323930;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82323954:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82323974
	if (ctx.cr6.eq) goto loc_82323974;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1056
	ctx.r10.s64 = ctx.r10.s64 + 1056;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82323954
	if (ctx.cr6.lt) goto loc_82323954;
	// b 0x823239a0
	goto loc_823239A0;
loc_82323974:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x823239a0
	if (!ctx.cr6.gt) goto loc_823239A0;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82323988:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82323998
	if (!ctx.cr6.eq) goto loc_82323998;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_82323998:
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// bdnz 0x82323988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323988;
loc_823239A0:
	// addi r31,r29,4232
	ctx.r31.s64 = ctx.r29.s64 + 4232;
	// li r30,2
	ctx.r30.s64 = 2;
loc_823239A8:
	// lwz r11,-1056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1056);
	// addi r3,r31,-1056
	ctx.r3.s64 = ctx.r31.s64 + -1056;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x823239c4
	if (!ctx.cr6.eq) goto loc_823239C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82315f00
	ctx.lr = 0x823239C0;
	sub_82315F00(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_823239C4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1056
	ctx.r31.s64 = ctx.r31.s64 + 1056;
	// bne 0x823239a8
	if (!ctx.cr0.eq) goto loc_823239A8;
	// b 0x82323cdc
	goto loc_82323CDC;
loc_823239D4:
	// lwz r11,3176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3176);
	// addi r30,r29,3176
	ctx.r30.s64 = ctx.r29.s64 + 3176;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x823239fc
	if (!ctx.cr6.eq) goto loc_823239FC;
	// lwz r11,4232(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4232);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82323a64
	if (ctx.cr6.eq) goto loc_82323A64;
	// lwz r11,5288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5288);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// b 0x82323a60
	goto loc_82323A60;
loc_823239FC:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82323a0c
	if (ctx.cr0.eq) goto loc_82323A0C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82323a64
	if (!ctx.cr6.eq) goto loc_82323A64;
loc_82323A0C:
	// lwz r11,4232(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4232);
	// addi r3,r29,4232
	ctx.r3.s64 = ctx.r29.s64 + 4232;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82323a40
	if (!ctx.cr6.eq) goto loc_82323A40;
	// lwz r10,6352(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6352);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82323a40
	if (!ctx.cr6.eq) goto loc_82323A40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82315f00
	ctx.lr = 0x82323A30;
	sub_82315F00(ctx, base);
	// li r28,4
	ctx.r28.s64 = 4;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r28,5288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5288, ctx.r28.u32);
	// b 0x82323cdc
	goto loc_82323CDC;
loc_82323A40:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82323a64
	if (ctx.cr0.eq) goto loc_82323A64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82323a64
	if (ctx.cr6.eq) goto loc_82323A64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82323a64
	if (ctx.cr6.eq) goto loc_82323A64;
	// lwz r10,5288(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5288);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
loc_82323A60:
	// beq cr6,0x82323cdc
	if (ctx.cr6.eq) goto loc_82323CDC;
loc_82323A64:
	// li r31,1
	ctx.r31.s64 = 1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82323A6C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82323ab8
	if (ctx.cr6.eq) goto loc_82323AB8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82323ab8
	if (ctx.cr6.eq) goto loc_82323AB8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82323a6c
	if (ctx.cr6.lt) goto loc_82323A6C;
	// li r31,1
	ctx.r31.s64 = 1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82323A98:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82323ab8
	if (ctx.cr6.eq) goto loc_82323AB8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82323a98
	if (ctx.cr6.lt) goto loc_82323A98;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82323AB8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82323af0
	if (ctx.cr6.eq) goto loc_82323AF0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82323b68
	if (ctx.cr6.eq) goto loc_82323B68;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82323670
	ctx.lr = 0x82323AD8;
	sub_82323670(ctx, base);
	// mulli r11,r31,1056
	ctx.r11.s64 = ctx.r31.s64 * 1056;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r29,4232
	ctx.r3.s64 = ctx.r29.s64 + 4232;
	// addi r4,r11,2120
	ctx.r4.s64 = ctx.r11.s64 + 2120;
	// bl 0x82315f00
	ctx.lr = 0x82323AEC;
	sub_82315F00(ctx, base);
	// b 0x82323b68
	goto loc_82323B68;
loc_82323AF0:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,4232(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4232, ctx.r11.u32);
	// bl 0x82322128
	ctx.lr = 0x82323B00;
	sub_82322128(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// stw r3,4240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4240, ctx.r3.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// ori r8,r11,26125
	ctx.r8.u64 = ctx.r11.u64 | 26125;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lwz r11,21292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21292);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// lfs f0,-24756(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,31512(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 31512);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// clrlwi r9,r11,9
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21292, ctx.r11.u32);
	// oris r11,r9,16256
	ctx.r11.u64 = ctx.r9.u64 | 1065353216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82323b58
	if (!ctx.cr6.gt) goto loc_82323B58;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82323B58:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823236f0
	ctx.lr = 0x82323B68;
	sub_823236F0(ctx, base);
loc_82323B68:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82323cc0
	goto loc_82323CC0;
loc_82323B70:
	// addi r8,r29,3176
	ctx.r8.s64 = ctx.r29.s64 + 3176;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82323B7C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82323bec
	if (ctx.cr6.eq) goto loc_82323BEC;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82323bec
	if (ctx.cr6.eq) goto loc_82323BEC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82323b7c
	if (ctx.cr6.lt) goto loc_82323B7C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82323BA8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82323bf4
	if (ctx.cr6.eq) goto loc_82323BF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1056
	ctx.r10.s64 = ctx.r10.s64 + 1056;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82323ba8
	if (ctx.cr6.lt) goto loc_82323BA8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82323BC8:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x82323bfc
	if (ctx.cr6.lt) goto loc_82323BFC;
	// beq cr6,0x82323cbc
	if (ctx.cr6.eq) goto loc_82323CBC;
	// mulli r11,r31,1056
	ctx.r11.s64 = ctx.r31.s64 * 1056;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r4,r11,2120
	ctx.r4.s64 = ctx.r11.s64 + 2120;
	// bl 0x82315f00
	ctx.lr = 0x82323BE8;
	sub_82315F00(ctx, base);
	// b 0x82323cbc
	goto loc_82323CBC;
loc_82323BEC:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x82323bc8
	goto loc_82323BC8;
loc_82323BF4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x82323bc8
	goto loc_82323BC8;
loc_82323BFC:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// bl 0x82322128
	ctx.lr = 0x82323C0C;
	sub_82322128(ctx, base);
	// stw r3,3184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3184, ctx.r3.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r29,580
	ctx.r3.s64 = ctx.r29.s64 + 580;
	// addi r4,r11,-28500
	ctx.r4.s64 = ctx.r11.s64 + -28500;
	// bl 0x82fa3928
	ctx.lr = 0x82323C20;
	sub_82FA3928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82323c58
	if (ctx.cr0.eq) goto loc_82323C58;
	// addi r3,r29,2132
	ctx.r3.s64 = ctx.r29.s64 + 2132;
	// bl 0x82adfe80
	ctx.lr = 0x82323C30;
	sub_82ADFE80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82323c50
	if (!ctx.cr6.eq) goto loc_82323C50;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82323cb8
	goto loc_82323CB8;
loc_82323C50:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82323cb8
	goto loc_82323CB8;
loc_82323C58:
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// ori r8,r11,26125
	ctx.r8.u64 = ctx.r11.u64 | 26125;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lwz r11,21292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21292);
	// li r5,1
	ctx.r5.s64 = 1;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lfs f0,-24756(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,31512(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 31512);
	ctx.f13.f64 = double(temp.f32);
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
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82323cac
	if (!ctx.cr6.gt) goto loc_82323CAC;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82323CAC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82323CB8:
	// bl 0x823236f0
	ctx.lr = 0x82323CBC;
	sub_823236F0(ctx, base);
loc_82323CBC:
	// li r4,2
	ctx.r4.s64 = 2;
loc_82323CC0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82323670
	ctx.lr = 0x82323CCC;
	sub_82323670(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82323670
	ctx.lr = 0x82323CDC;
	sub_82323670(ctx, base);
loc_82323CDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82323CE4"))) PPC_WEAK_FUNC(sub_82323CE4);
PPC_FUNC_IMPL(__imp__sub_82323CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82323CE8"))) PPC_WEAK_FUNC(sub_82323CE8);
PPC_FUNC_IMPL(__imp__sub_82323CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82323CF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,6352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6352);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82323d0c
	if (ctx.cr6.lt) goto loc_82323D0C;
	// beq cr6,0x82323d8c
	if (ctx.cr6.eq) goto loc_82323D8C;
	// bl 0x823238c8
	ctx.lr = 0x82323D08;
	sub_823238C8(ctx, base);
	// b 0x82323d8c
	goto loc_82323D8C;
loc_82323D0C:
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r9,r3,3176
	ctx.r9.s64 = ctx.r3.s64 + 3176;
	// li r29,4
	ctx.r29.s64 = 4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82323D20:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82323d30
	if (!ctx.cr6.eq) goto loc_82323D30;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
loc_82323D30:
	// addi r10,r10,1056
	ctx.r10.s64 = ctx.r10.s64 + 1056;
	// bdnz 0x82323d20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323D20;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82323D44:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82323d54
	if (!ctx.cr6.eq) goto loc_82323D54;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_82323D54:
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// bdnz 0x82323d44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323D44;
	// addi r31,r3,4232
	ctx.r31.s64 = ctx.r3.s64 + 4232;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82323D64:
	// lwz r11,-1056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1056);
	// addi r3,r31,-1056
	ctx.r3.s64 = ctx.r31.s64 + -1056;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82323d80
	if (!ctx.cr6.eq) goto loc_82323D80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82315f00
	ctx.lr = 0x82323D7C;
	sub_82315F00(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82323D80:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1056
	ctx.r31.s64 = ctx.r31.s64 + 1056;
	// bne 0x82323d64
	if (!ctx.cr0.eq) goto loc_82323D64;
loc_82323D8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82323D94"))) PPC_WEAK_FUNC(sub_82323D94);
PPC_FUNC_IMPL(__imp__sub_82323D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82323D98"))) PPC_WEAK_FUNC(sub_82323D98);
PPC_FUNC_IMPL(__imp__sub_82323D98) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r3,2120
	ctx.r10.s64 = ctx.r3.s64 + 2120;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82323DAC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82323dc0
	if (ctx.cr6.eq) goto loc_82323DC0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82323dc4
	if (!ctx.cr6.eq) goto loc_82323DC4;
loc_82323DC0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82323DC4:
	// addi r9,r9,1056
	ctx.r9.s64 = ctx.r9.s64 + 1056;
	// bdnz 0x82323dac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323DAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82323DD4:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82323e14
	if (ctx.cr6.eq) goto loc_82323E14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1056
	ctx.r9.s64 = ctx.r9.s64 + 1056;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82323dd4
	if (ctx.cr6.lt) goto loc_82323DD4;
loc_82323DF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82323DF4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82323e30
	if (ctx.cr6.eq) goto loc_82323E30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1056
	ctx.r10.s64 = ctx.r10.s64 + 1056;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82323df4
	if (ctx.cr6.lt) goto loc_82323DF4;
	// b 0x82323e40
	goto loc_82323E40;
loc_82323E14:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82323df0
	if (!ctx.cr6.gt) goto loc_82323DF0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82323df0
	if (ctx.cr6.eq) goto loc_82323DF0;
loc_82323E24:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// blr 
	return;
loc_82323E30:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82323e40
	if (!ctx.cr6.gt) goto loc_82323E40;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82323e24
	if (ctx.cr6.eq) goto loc_82323E24;
loc_82323E40:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bge cr6,0x82323e70
	if (!ctx.cr6.lt) goto loc_82323E70;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82323e5c
	if (!ctx.cr6.eq) goto loc_82323E5C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// blr 
	return;
loc_82323E5C:
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bne cr6,0x82323e70
	if (!ctx.cr6.eq) goto loc_82323E70;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// blr 
	return;
loc_82323E70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82323E78"))) PPC_WEAK_FUNC(sub_82323E78);
PPC_FUNC_IMPL(__imp__sub_82323E78) {
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
	// bl 0x8226c3f0
	ctx.lr = 0x82323E90;
	sub_8226C3F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82323ec0
	if (ctx.cr6.lt) goto loc_82323EC0;
	// bne cr6,0x82323eb8
	if (!ctx.cr6.eq) goto loc_82323EB8;
loc_82323EA0:
	// bl 0x8226c3f0
	ctx.lr = 0x82323EA4;
	sub_8226C3F0(ctx, base);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82323eb8
	if (!ctx.cr6.gt) goto loc_82323EB8;
loc_82323EB0:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82323f80
	goto loc_82323F80;
loc_82323EB8:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82323f80
	goto loc_82323F80;
loc_82323EC0:
	// bl 0x8226c3f0
	ctx.lr = 0x82323EC4;
	sub_8226C3F0(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82323ea0
	if (ctx.cr6.eq) goto loc_82323EA0;
	// bl 0x8226c3f0
	ctx.lr = 0x82323ED4;
	sub_8226C3F0(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82323f58
	if (!ctx.cr6.eq) goto loc_82323F58;
	// bl 0x8226c3f0
	ctx.lr = 0x82323EE4;
	sub_8226C3F0(ctx, base);
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82323eb8
	if (!ctx.cr6.gt) goto loc_82323EB8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r31,580
	ctx.r6.s64 = ctx.r31.s64 + 580;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82557338
	ctx.lr = 0x82323F04;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82323eb0
	if (ctx.cr0.eq) goto loc_82323EB0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 + 112;
	// bl 0x82557338
	ctx.lr = 0x82323F1C;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82323eb0
	if (ctx.cr0.eq) goto loc_82323EB0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// bl 0x82557338
	ctx.lr = 0x82323F34;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82323eb0
	if (ctx.cr0.eq) goto loc_82323EB0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,144
	ctx.r4.s64 = ctx.r11.s64 + 144;
	// bl 0x82557338
	ctx.lr = 0x82323F4C;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82323f7c
	if (!ctx.cr0.eq) goto loc_82323F7C;
	// b 0x82323eb0
	goto loc_82323EB0;
loc_82323F58:
	// bl 0x8226c3f0
	ctx.lr = 0x82323F5C;
	sub_8226C3F0(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82323f7c
	if (!ctx.cr6.eq) goto loc_82323F7C;
	// bl 0x8226c3f0
	ctx.lr = 0x82323F6C;
	sub_8226C3F0(ctx, base);
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r3,2
	ctx.r3.s64 = 2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82323f80
	if (!ctx.cr6.gt) goto loc_82323F80;
loc_82323F7C:
	// li r3,4
	ctx.r3.s64 = 4;
loc_82323F80:
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

__attribute__((alias("__imp__sub_82323F94"))) PPC_WEAK_FUNC(sub_82323F94);
PPC_FUNC_IMPL(__imp__sub_82323F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82323F98"))) PPC_WEAK_FUNC(sub_82323F98);
PPC_FUNC_IMPL(__imp__sub_82323F98) {
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
	// addi r31,r3,580
	ctx.r31.s64 = ctx.r3.s64 + 580;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28500
	ctx.r4.s64 = ctx.r11.s64 + -28500;
	// bl 0x82fa3928
	ctx.lr = 0x82323FBC;
	sub_82FA3928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82323fcc
	if (ctx.cr0.eq) goto loc_82323FCC;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8232404c
	goto loc_8232404C;
loc_82323FCC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28512
	ctx.r4.s64 = ctx.r11.s64 + -28512;
	// bl 0x82fa3928
	ctx.lr = 0x82323FDC;
	sub_82FA3928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82323fec
	if (ctx.cr0.eq) goto loc_82323FEC;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8232404c
	goto loc_8232404C;
loc_82323FEC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28556
	ctx.r4.s64 = ctx.r11.s64 + -28556;
	// bl 0x82fa3928
	ctx.lr = 0x82323FFC;
	sub_82FA3928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8232400c
	if (ctx.cr0.eq) goto loc_8232400C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8232404c
	goto loc_8232404C;
loc_8232400C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28524
	ctx.r4.s64 = ctx.r11.s64 + -28524;
	// bl 0x82fa3928
	ctx.lr = 0x8232401C;
	sub_82FA3928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8232402c
	if (ctx.cr0.eq) goto loc_8232402C;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8232404c
	goto loc_8232404C;
loc_8232402C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28544
	ctx.r4.s64 = ctx.r11.s64 + -28544;
	// bl 0x82fa3928
	ctx.lr = 0x8232403C;
	sub_82FA3928(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_8232404C:
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

__attribute__((alias("__imp__sub_82324060"))) PPC_WEAK_FUNC(sub_82324060);
PPC_FUNC_IMPL(__imp__sub_82324060) {
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
	// addi r31,r3,580
	ctx.r31.s64 = ctx.r3.s64 + 580;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28500
	ctx.r4.s64 = ctx.r11.s64 + -28500;
	// bl 0x82fa3928
	ctx.lr = 0x82324084;
	sub_82FA3928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82324098
	if (ctx.cr0.eq) goto loc_82324098;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// b 0x82324130
	goto loc_82324130;
loc_82324098:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28512
	ctx.r4.s64 = ctx.r11.s64 + -28512;
	// bl 0x82fa3928
	ctx.lr = 0x823240A8;
	sub_82FA3928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823240bc
	if (ctx.cr0.eq) goto loc_823240BC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// b 0x82324130
	goto loc_82324130;
loc_823240BC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28524
	ctx.r4.s64 = ctx.r11.s64 + -28524;
	// bl 0x82fa3928
	ctx.lr = 0x823240CC;
	sub_82FA3928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823240e0
	if (ctx.cr0.eq) goto loc_823240E0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// b 0x82324130
	goto loc_82324130;
loc_823240E0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28544
	ctx.r4.s64 = ctx.r11.s64 + -28544;
	// bl 0x82fa3928
	ctx.lr = 0x823240F0;
	sub_82FA3928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82324104
	if (ctx.cr0.eq) goto loc_82324104;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,272
	ctx.r3.s64 = ctx.r11.s64 + 272;
	// b 0x82324130
	goto loc_82324130;
loc_82324104:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28536
	ctx.r4.s64 = ctx.r11.s64 + -28536;
	// bl 0x82fa3928
	ctx.lr = 0x82324114;
	sub_82FA3928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82324128
	if (ctx.cr0.eq) goto loc_82324128;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,308
	ctx.r3.s64 = ctx.r11.s64 + 308;
	// b 0x82324130
	goto loc_82324130;
loc_82324128:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,348
	ctx.r3.s64 = ctx.r11.s64 + 348;
loc_82324130:
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

__attribute__((alias("__imp__sub_82324144"))) PPC_WEAK_FUNC(sub_82324144);
PPC_FUNC_IMPL(__imp__sub_82324144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324148"))) PPC_WEAK_FUNC(sub_82324148);
PPC_FUNC_IMPL(__imp__sub_82324148) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,1024
	ctx.r3.s64 = ctx.r3.s64 + 1024;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r4,r10,32570
	ctx.r4.s64 = ctx.r10.s64 + 32570;
	// std r30,1016(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1016, ctx.r30.u64);
	// bl 0x822400d8
	ctx.lr = 0x82324188;
	sub_822400D8(ctx, base);
	// stb r30,1052(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1052, ctx.r30.u8);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x8232419C;
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

__attribute__((alias("__imp__sub_823241B8"))) PPC_WEAK_FUNC(sub_823241B8);
PPC_FUNC_IMPL(__imp__sub_823241B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// addi r12,r12,25512
	ctx.r12.s64 = ctx.r12.s64 + 25512;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// nop 
	// addi r12,r12,16888
	ctx.r12.s64 = ctx.r12.s64 + 16888;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x823241F8
		return;
	case 1:
		// ERROR: 0x82324208
		return;
	case 2:
		// ERROR: 0x82324218
		return;
	case 3:
		// ERROR: 0x82324228
		return;
	case 4:
		// ERROR: 0x82324238
		return;
	case 5:
		// ERROR: 0x82324248
		return;
	case 6:
		// ERROR: 0x82324258
		return;
	case 7:
		// ERROR: 0x82324268
		return;
	case 8:
		// ERROR: 0x82324278
		return;
	case 9:
		// ERROR: 0x82324298
		return;
	case 10:
		// ERROR: 0x82324288
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_823241F8"))) PPC_WEAK_FUNC(sub_823241F8);
PPC_FUNC_IMPL(__imp__sub_823241F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r5,r11,388
	ctx.r5.s64 = ctx.r11.s64 + 388;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324208"))) PPC_WEAK_FUNC(sub_82324208);
PPC_FUNC_IMPL(__imp__sub_82324208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r5,r11,400
	ctx.r5.s64 = ctx.r11.s64 + 400;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324218"))) PPC_WEAK_FUNC(sub_82324218);
PPC_FUNC_IMPL(__imp__sub_82324218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r5,r11,420
	ctx.r5.s64 = ctx.r11.s64 + 420;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324228"))) PPC_WEAK_FUNC(sub_82324228);
PPC_FUNC_IMPL(__imp__sub_82324228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r5,r11,432
	ctx.r5.s64 = ctx.r11.s64 + 432;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324238"))) PPC_WEAK_FUNC(sub_82324238);
PPC_FUNC_IMPL(__imp__sub_82324238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r5,r11,448
	ctx.r5.s64 = ctx.r11.s64 + 448;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324248"))) PPC_WEAK_FUNC(sub_82324248);
PPC_FUNC_IMPL(__imp__sub_82324248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r5,r11,464
	ctx.r5.s64 = ctx.r11.s64 + 464;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324258"))) PPC_WEAK_FUNC(sub_82324258);
PPC_FUNC_IMPL(__imp__sub_82324258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r5,r11,476
	ctx.r5.s64 = ctx.r11.s64 + 476;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324268"))) PPC_WEAK_FUNC(sub_82324268);
PPC_FUNC_IMPL(__imp__sub_82324268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r5,r11,488
	ctx.r5.s64 = ctx.r11.s64 + 488;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324278"))) PPC_WEAK_FUNC(sub_82324278);
PPC_FUNC_IMPL(__imp__sub_82324278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r5,r11,500
	ctx.r5.s64 = ctx.r11.s64 + 500;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324288"))) PPC_WEAK_FUNC(sub_82324288);
PPC_FUNC_IMPL(__imp__sub_82324288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r5,r11,508
	ctx.r5.s64 = ctx.r11.s64 + 508;
	// b 0x82fa25c0
	sub_82FA25C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324298"))) PPC_WEAK_FUNC(sub_82324298);
PPC_FUNC_IMPL(__imp__sub_82324298) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232429C"))) PPC_WEAK_FUNC(sub_8232429C);
PPC_FUNC_IMPL(__imp__sub_8232429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823242A0"))) PPC_WEAK_FUNC(sub_823242A0);
PPC_FUNC_IMPL(__imp__sub_823242A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x823242A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r10,31672
	ctx.r31.s64 = ctx.r10.s64 + 31672;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r29,r31,2128
	ctx.r29.s64 = ctx.r31.s64 + 2128;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r28,4
	ctx.r28.s64 = 4;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r27,r11,32570
	ctx.r27.s64 = ctx.r11.s64 + 32570;
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
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
	// stb r30,324(r31)
	PPC_STORE_U8(ctx.r31.u32 + 324, ctx.r30.u8);
	// stb r30,580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 580, ctx.r30.u8);
	// stb r30,836(r31)
	PPC_STORE_U8(ctx.r31.u32 + 836, ctx.r30.u8);
	// stb r30,1092(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1092, ctx.r30.u8);
	// stb r30,1348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1348, ctx.r30.u8);
	// stb r30,1604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1604, ctx.r30.u8);
	// stb r30,1860(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1860, ctx.r30.u8);
loc_8232434C:
	// stw r30,-8(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8, ctx.r30.u32);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// stw r30,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x82a75988
	ctx.lr = 0x82324368;
	sub_82A75988(ctx, base);
	// std r30,1008(r29)
	PPC_STORE_U64(ctx.r29.u32 + 1008, ctx.r30.u64);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r29,1016
	ctx.r3.s64 = ctx.r29.s64 + 1016;
	// bl 0x82240328
	ctx.lr = 0x8232437C;
	sub_82240328(ctx, base);
	// stb r30,1044(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1044, ctx.r30.u8);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1056
	ctx.r29.s64 = ctx.r29.s64 + 1056;
	// bne 0x8232434c
	if (!ctx.cr0.eq) goto loc_8232434C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,6344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6344, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,6348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6348, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,6352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6352, ctx.r30.u32);
	// stw r30,6356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6356, ctx.r30.u32);
	// stw r30,6360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6360, ctx.r30.u32);
	// std r30,6368(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6368, ctx.r30.u64);
	// stw r30,6376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6376, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823243BC"))) PPC_WEAK_FUNC(sub_823243BC);
PPC_FUNC_IMPL(__imp__sub_823243BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823243C0"))) PPC_WEAK_FUNC(sub_823243C0);
PPC_FUNC_IMPL(__imp__sub_823243C0) {
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
	// bne cr6,0x82324408
	if (!ctx.cr6.eq) goto loc_82324408;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823243E4;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82324408
	if (!ctx.cr0.eq) goto loc_82324408;
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
	ctx.lr = 0x82324408;
	sub_82240040(ctx, base);
loc_82324408:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,572
	ctx.r11.s64 = ctx.r11.s64 + 572;
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

__attribute__((alias("__imp__sub_82324434"))) PPC_WEAK_FUNC(sub_82324434);
PPC_FUNC_IMPL(__imp__sub_82324434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324438"))) PPC_WEAK_FUNC(sub_82324438);
PPC_FUNC_IMPL(__imp__sub_82324438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-20140
	ctx.r3.s64 = ctx.r11.s64 + -20140;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324444"))) PPC_WEAK_FUNC(sub_82324444);
PPC_FUNC_IMPL(__imp__sub_82324444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324448"))) PPC_WEAK_FUNC(sub_82324448);
PPC_FUNC_IMPL(__imp__sub_82324448) {
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
	// bne cr6,0x82324490
	if (!ctx.cr6.eq) goto loc_82324490;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8232446C;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82324490
	if (!ctx.cr0.eq) goto loc_82324490;
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
	ctx.lr = 0x82324490;
	sub_82240040(ctx, base);
loc_82324490:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,596
	ctx.r11.s64 = ctx.r11.s64 + 596;
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

__attribute__((alias("__imp__sub_823244BC"))) PPC_WEAK_FUNC(sub_823244BC);
PPC_FUNC_IMPL(__imp__sub_823244BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823244C0"))) PPC_WEAK_FUNC(sub_823244C0);
PPC_FUNC_IMPL(__imp__sub_823244C0) {
	PPC_FUNC_PROLOGUE();
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,2120
	ctx.r11.s64 = ctx.r11.s64 + 2120;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823244D0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823244e4
	if (ctx.cr6.eq) goto loc_823244E4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x823244f8
	if (!ctx.cr6.eq) goto loc_823244F8;
loc_823244E4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823244f8
	if (!ctx.cr6.eq) goto loc_823244F8;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823244F8:
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// bdnz 0x823244d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823244D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324504"))) PPC_WEAK_FUNC(sub_82324504);
PPC_FUNC_IMPL(__imp__sub_82324504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324508"))) PPC_WEAK_FUNC(sub_82324508);
PPC_FUNC_IMPL(__imp__sub_82324508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-20084
	ctx.r3.s64 = ctx.r11.s64 + -20084;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324514"))) PPC_WEAK_FUNC(sub_82324514);
PPC_FUNC_IMPL(__imp__sub_82324514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324518"))) PPC_WEAK_FUNC(sub_82324518);
PPC_FUNC_IMPL(__imp__sub_82324518) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,620
	ctx.r11.s64 = ctx.r11.s64 + 620;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82324848
	ctx.lr = 0x82324544;
	sub_82324848(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82324554
	if (ctx.cr0.eq) goto loc_82324554;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82324554;
	sub_82691540(ctx, base);
loc_82324554:
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

__attribute__((alias("__imp__sub_82324570"))) PPC_WEAK_FUNC(sub_82324570);
PPC_FUNC_IMPL(__imp__sub_82324570) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,656
	ctx.r11.s64 = ctx.r11.s64 + 656;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82316a28
	ctx.lr = 0x8232459C;
	sub_82316A28(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823245c8
	if (ctx.cr6.eq) goto loc_823245C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823245C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823245C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823245D8"))) PPC_WEAK_FUNC(sub_823245D8);
PPC_FUNC_IMPL(__imp__sub_823245D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823245E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82324650
	if (ctx.cr6.eq) goto loc_82324650;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8245d068
	ctx.lr = 0x82324608;
	sub_8245D068(ctx, base);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// bl 0x82547ee0
	ctx.lr = 0x82324614;
	sub_82547EE0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x823241b8
	ctx.lr = 0x82324620;
	sub_823241B8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823241b8
	ctx.lr = 0x8232462C;
	sub_823241B8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82324640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82324650
	if (ctx.cr6.eq) goto loc_82324650;
	// bl 0x82241d18
	ctx.lr = 0x82324650;
	sub_82241D18(ctx, base);
loc_82324650:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8232469c
	if (ctx.cr6.eq) goto loc_8232469C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8245d068
	ctx.lr = 0x82324668;
	sub_8245D068(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82547ee0
	ctx.lr = 0x82324674;
	sub_82547EE0(ctx, base);
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232468C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232469c
	if (ctx.cr6.eq) goto loc_8232469C;
	// bl 0x82241d18
	ctx.lr = 0x8232469C;
	sub_82241D18(ctx, base);
loc_8232469C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823246A4"))) PPC_WEAK_FUNC(sub_823246A4);
PPC_FUNC_IMPL(__imp__sub_823246A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823246A8"))) PPC_WEAK_FUNC(sub_823246A8);
PPC_FUNC_IMPL(__imp__sub_823246A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r10,680
	ctx.r10.s64 = ctx.r10.s64 + 680;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,100(r1)
	PPC_STORE_U64(ctx.r1.u32 + 100, ctx.r11.u64);
	// bl 0x82316a28
	ctx.lr = 0x823246E4;
	sub_82316A28(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82324710
	if (ctx.cr6.eq) goto loc_82324710;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82324710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82324710:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324720"))) PPC_WEAK_FUNC(sub_82324720);
PPC_FUNC_IMPL(__imp__sub_82324720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82324728;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,640
	ctx.r11.s64 = ctx.r11.s64 + 640;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x82691500
	ctx.lr = 0x82324750;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8232482c
	if (ctx.cr0.eq) goto loc_8232482C;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r11.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,25(r10)
	PPC_STORE_U8(ctx.r10.u32 + 25, ctx.r11.u8);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// bl 0x8224d3e0
	ctx.lr = 0x82324798;
	sub_8224D3E0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,40
	ctx.r3.s64 = 40;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// bl 0x82691500
	ctx.lr = 0x823247B4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823247f4
	if (ctx.cr0.eq) goto loc_823247F4;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-12720
	ctx.r11.s64 = ctx.r11.s64 + -12720;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,100(r1)
	PPC_STORE_U64(ctx.r1.u32 + 100, ctx.r11.u64);
	// bl 0x824f7fb0
	ctx.lr = 0x823247F0;
	sub_824F7FB0(ctx, base);
	// b 0x823247f8
	goto loc_823247F8;
loc_823247F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823247F8:
	// lwz r29,60(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82324820
	if (ctx.cr6.eq) goto loc_82324820;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x82f91940
	ctx.lr = 0x82324810;
	sub_82F91940(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824f80e8
	ctx.lr = 0x82324818;
	sub_824F80E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82691540
	ctx.lr = 0x82324820;
	sub_82691540(ctx, base);
loc_82324820:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8232482C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x82324844;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_82324844"))) PPC_WEAK_FUNC(sub_82324844);
PPC_FUNC_IMPL(__imp__sub_82324844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324848"))) PPC_WEAK_FUNC(sub_82324848);
PPC_FUNC_IMPL(__imp__sub_82324848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82324850;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,640
	ctx.r11.s64 = ctx.r11.s64 + 640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82324884
	if (ctx.cr6.eq) goto loc_82324884;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82324884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82324884:
	// lwz r30,60(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823248a8
	if (ctx.cr6.eq) goto loc_823248A8;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82f91940
	ctx.lr = 0x82324898;
	sub_82F91940(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824f80e8
	ctx.lr = 0x823248A0;
	sub_824F80E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x823248A8;
	sub_82691540(ctx, base);
loc_823248A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x822402c8
	ctx.lr = 0x823248B8;
	sub_822402C8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// b 0x82324900
	goto loc_82324900;
loc_823248D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8245d008
	ctx.lr = 0x823248DC;
	sub_8245D008(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x823248f0
	if (ctx.cr6.eq) goto loc_823248F0;
	// bl 0x82241d18
	ctx.lr = 0x823248F0;
	sub_82241D18(ctx, base);
loc_823248F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x823248F8;
	sub_82691540(ctx, base);
	// lbz r11,25(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 25);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82324900:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823248d0
	if (ctx.cr0.eq) goto loc_823248D0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82691540
	ctx.lr = 0x82324930;
	sub_82691540(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324938"))) PPC_WEAK_FUNC(sub_82324938);
PPC_FUNC_IMPL(__imp__sub_82324938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82324940;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x823f62d0
	ctx.lr = 0x82324960;
	sub_823F62D0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bl 0x82691500
	ctx.lr = 0x8232496C;
	sub_82691500(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82324a10
	if (ctx.cr0.eq) goto loc_82324A10;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r10,r5,12
	ctx.xer.ca = ctx.r5.u32 > 4294967283;
	ctx.r10.s64 = ctx.r5.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stb r9,24(r5)
	PPC_STORE_U8(ctx.r5.u32 + 24, ctx.r9.u8);
	// stb r9,25(r5)
	PPC_STORE_U8(ctx.r5.u32 + 25, ctx.r9.u8);
	// beq 0x823249d8
	if (ctx.cr0.eq) goto loc_823249D8;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// beq cr6,0x823249d8
	if (ctx.cr6.eq) goto loc_823249D8;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x823249dc
	goto loc_823249DC;
loc_823249D8:
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_823249DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8245d168
	ctx.lr = 0x823249E8;
	sub_8245D168(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823249f8
	if (ctx.cr6.eq) goto loc_823249F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823249F8;
	sub_82241D18(ctx, base);
loc_823249F8:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82324a08
	if (ctx.cr6.eq) goto loc_82324A08;
	// bl 0x82241d18
	ctx.lr = 0x82324A08;
	sub_82241D18(ctx, base);
loc_82324A08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82324A10:
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
	ctx.lr = 0x82324A2C;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_82324A2C"))) PPC_WEAK_FUNC(sub_82324A2C);
PPC_FUNC_IMPL(__imp__sub_82324A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324A30"))) PPC_WEAK_FUNC(sub_82324A30);
PPC_FUNC_IMPL(__imp__sub_82324A30) {
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
	// bl 0x82324848
	ctx.lr = 0x82324A50;
	sub_82324848(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82324a60
	if (ctx.cr0.eq) goto loc_82324A60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82324A60;
	sub_82691540(ctx, base);
loc_82324A60:
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

__attribute__((alias("__imp__sub_82324A7C"))) PPC_WEAK_FUNC(sub_82324A7C);
PPC_FUNC_IMPL(__imp__sub_82324A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324A80"))) PPC_WEAK_FUNC(sub_82324A80);
PPC_FUNC_IMPL(__imp__sub_82324A80) {
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
	// bne cr6,0x82324ac8
	if (!ctx.cr6.eq) goto loc_82324AC8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82324AA4;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82324ac8
	if (!ctx.cr0.eq) goto loc_82324AC8;
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
	ctx.lr = 0x82324AC8;
	sub_82240040(ctx, base);
loc_82324AC8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,656
	ctx.r11.s64 = ctx.r11.s64 + 656;
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

__attribute__((alias("__imp__sub_82324AF4"))) PPC_WEAK_FUNC(sub_82324AF4);
PPC_FUNC_IMPL(__imp__sub_82324AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324AF8"))) PPC_WEAK_FUNC(sub_82324AF8);
PPC_FUNC_IMPL(__imp__sub_82324AF8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f62d0
	ctx.lr = 0x82324B18;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82324B34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82324b44
	if (ctx.cr6.eq) goto loc_82324B44;
	// bl 0x82241d18
	ctx.lr = 0x82324B44;
	sub_82241D18(ctx, base);
loc_82324B44:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82324B60"))) PPC_WEAK_FUNC(sub_82324B60);
PPC_FUNC_IMPL(__imp__sub_82324B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-20028
	ctx.r3.s64 = ctx.r11.s64 + -20028;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324B6C"))) PPC_WEAK_FUNC(sub_82324B6C);
PPC_FUNC_IMPL(__imp__sub_82324B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324B70"))) PPC_WEAK_FUNC(sub_82324B70);
PPC_FUNC_IMPL(__imp__sub_82324B70) {
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
	// bne cr6,0x82324bb8
	if (!ctx.cr6.eq) goto loc_82324BB8;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82691500
	ctx.lr = 0x82324B94;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82324bb8
	if (!ctx.cr0.eq) goto loc_82324BB8;
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
	ctx.lr = 0x82324BB8;
	sub_82240040(ctx, base);
loc_82324BB8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,680
	ctx.r11.s64 = ctx.r11.s64 + 680;
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

__attribute__((alias("__imp__sub_82324BEC"))) PPC_WEAK_FUNC(sub_82324BEC);
PPC_FUNC_IMPL(__imp__sub_82324BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324BF0"))) PPC_WEAK_FUNC(sub_82324BF0);
PPC_FUNC_IMPL(__imp__sub_82324BF0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f62d0
	ctx.lr = 0x82324C10;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82324c40
	if (ctx.cr6.eq) goto loc_82324C40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82324C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82324C40:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82324c50
	if (ctx.cr6.eq) goto loc_82324C50;
	// bl 0x82241d18
	ctx.lr = 0x82324C50;
	sub_82241D18(ctx, base);
loc_82324C50:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82324C6C"))) PPC_WEAK_FUNC(sub_82324C6C);
PPC_FUNC_IMPL(__imp__sub_82324C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324C70"))) PPC_WEAK_FUNC(sub_82324C70);
PPC_FUNC_IMPL(__imp__sub_82324C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-19972
	ctx.r3.s64 = ctx.r11.s64 + -19972;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324C7C"))) PPC_WEAK_FUNC(sub_82324C7C);
PPC_FUNC_IMPL(__imp__sub_82324C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324C80"))) PPC_WEAK_FUNC(sub_82324C80);
PPC_FUNC_IMPL(__imp__sub_82324C80) {
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
	// bne cr6,0x82324cc8
	if (!ctx.cr6.eq) goto loc_82324CC8;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82691500
	ctx.lr = 0x82324CA4;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82324cc8
	if (!ctx.cr0.eq) goto loc_82324CC8;
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
	ctx.lr = 0x82324CC8;
	sub_82240040(ctx, base);
loc_82324CC8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
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

__attribute__((alias("__imp__sub_82324CFC"))) PPC_WEAK_FUNC(sub_82324CFC);
PPC_FUNC_IMPL(__imp__sub_82324CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324D00"))) PPC_WEAK_FUNC(sub_82324D00);
PPC_FUNC_IMPL(__imp__sub_82324D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-19912
	ctx.r3.s64 = ctx.r11.s64 + -19912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324D0C"))) PPC_WEAK_FUNC(sub_82324D0C);
PPC_FUNC_IMPL(__imp__sub_82324D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324D10"))) PPC_WEAK_FUNC(sub_82324D10);
PPC_FUNC_IMPL(__imp__sub_82324D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82324D18;
	__savegprlr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,580
	ctx.r30.s64 = ctx.r11.s64 + 580;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r10,-28512
	ctx.r4.s64 = ctx.r10.s64 + -28512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa4320
	ctx.lr = 0x82324D40;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82324d64
	if (!ctx.cr0.eq) goto loc_82324D64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// addi r26,r11,728
	ctx.r26.s64 = ctx.r11.s64 + 728;
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
	// addi r28,r31,84
	ctx.r28.s64 = ctx.r31.s64 + 84;
	// addi r27,r31,80
	ctx.r27.s64 = ctx.r31.s64 + 80;
	// b 0x82324e08
	goto loc_82324E08;
loc_82324D64:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r11,-28556
	ctx.r4.s64 = ctx.r11.s64 + -28556;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa4320
	ctx.lr = 0x82324D78;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82324d9c
	if (!ctx.cr0.eq) goto loc_82324D9C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// addi r26,r11,736
	ctx.r26.s64 = ctx.r11.s64 + 736;
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
	// addi r28,r31,116
	ctx.r28.s64 = ctx.r31.s64 + 116;
	// addi r27,r31,112
	ctx.r27.s64 = ctx.r31.s64 + 112;
	// b 0x82324e08
	goto loc_82324E08;
loc_82324D9C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r11,-28524
	ctx.r4.s64 = ctx.r11.s64 + -28524;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa4320
	ctx.lr = 0x82324DB0;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82324dd4
	if (!ctx.cr0.eq) goto loc_82324DD4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// addi r26,r11,744
	ctx.r26.s64 = ctx.r11.s64 + 744;
	// addi r29,r31,88
	ctx.r29.s64 = ctx.r31.s64 + 88;
	// addi r28,r31,100
	ctx.r28.s64 = ctx.r31.s64 + 100;
	// addi r27,r31,96
	ctx.r27.s64 = ctx.r31.s64 + 96;
	// b 0x82324e08
	goto loc_82324E08;
loc_82324DD4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,-28536
	ctx.r4.s64 = ctx.r11.s64 + -28536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa4320
	ctx.lr = 0x82324DE8;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82324e90
	if (!ctx.cr0.eq) goto loc_82324E90;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r26,r11,752
	ctx.r26.s64 = ctx.r11.s64 + 752;
loc_82324DF8:
	// addi r27,r31,32
	ctx.r27.s64 = ctx.r31.s64 + 32;
	// addi r28,r31,36
	ctx.r28.s64 = ctx.r31.s64 + 36;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
loc_82324E08:
	// lwz r3,1132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1132);
	// lwz r25,6344(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6344);
	// bl 0x82323198
	ctx.lr = 0x82324E14;
	sub_82323198(ctx, base);
	// lwz r3,1132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1132);
	// lwz r11,6344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6344);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82324e28
	if (ctx.cr6.eq) goto loc_82324E28;
	// bl 0x82323ce8
	ctx.lr = 0x82324E28;
	sub_82323CE8(ctx, base);
loc_82324E28:
	// li r3,4704
	ctx.r3.s64 = 4704;
	// bl 0x82691500
	ctx.lr = 0x82324E30;
	sub_82691500(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82324f00
	if (ctx.cr0.eq) goto loc_82324F00;
	// addi r4,r31,1104
	ctx.r4.s64 = ctx.r31.s64 + 1104;
	// lwz r23,1132(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1132);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r22,1144(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	// bl 0x8226c200
	ctx.lr = 0x82324E4C;
	sub_8226C200(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r8,1140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r7,1136(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r6,1100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,1128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1128);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// bl 0x82526000
	ctx.lr = 0x82324E8C;
	sub_82526000(ctx, base);
	// b 0x82324f04
	goto loc_82324F04;
loc_82324E90:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-28544
	ctx.r4.s64 = ctx.r11.s64 + -28544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa4320
	ctx.lr = 0x82324EA4;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82324ec8
	if (!ctx.cr0.eq) goto loc_82324EC8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// addi r26,r11,756
	ctx.r26.s64 = ctx.r11.s64 + 756;
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// addi r28,r31,52
	ctx.r28.s64 = ctx.r31.s64 + 52;
	// addi r27,r31,48
	ctx.r27.s64 = ctx.r31.s64 + 48;
	// b 0x82324e08
	goto loc_82324E08;
loc_82324EC8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-28500
	ctx.r4.s64 = ctx.r11.s64 + -28500;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa4320
	ctx.lr = 0x82324EDC;
	sub_82FA4320(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r26,r11,764
	ctx.r26.s64 = ctx.r11.s64 + 764;
	// bne 0x82324df8
	if (!ctx.cr0.eq) goto loc_82324DF8;
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// addi r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 + 56;
	// addi r28,r31,68
	ctx.r28.s64 = ctx.r31.s64 + 68;
	// addi r27,r31,64
	ctx.r27.s64 = ctx.r31.s64 + 64;
	// b 0x82324e08
	goto loc_82324E08;
loc_82324F00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82324F04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324F18"))) PPC_WEAK_FUNC(sub_82324F18);
PPC_FUNC_IMPL(__imp__sub_82324F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82324F20;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r10,772
	ctx.r10.s64 = ctx.r10.s64 + 772;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// bl 0x8226c200
	ctx.lr = 0x82324F7C;
	sub_8226C200(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r27,r31,24
	ctx.r27.s64 = ctx.r31.s64 + 24;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// li r5,1092
	ctx.r5.s64 = 1092;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82324F98;
	sub_82FA77C0(ctx, base);
	// stw r30,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r30.u32);
	// stw r30,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r27,1104
	ctx.r3.s64 = ctx.r27.s64 + 1104;
	// bl 0x8226c200
	ctx.lr = 0x82324FAC;
	sub_8226C200(ctx, base);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// stw r29,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r29.u32);
	// li r3,160
	ctx.r3.s64 = 160;
	// stw r26,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r26.u32);
	// addi r29,r11,14132
	ctx.r29.s64 = ctx.r11.s64 + 14132;
	// stw r23,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r23.u32);
	// stw r22,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r22.u32);
	// stw r21,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r21.u32);
	// stw r26,14132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14132, ctx.r26.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x82324FE4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82324ff8
	if (ctx.cr0.eq) goto loc_82324FF8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8251f4a8
	ctx.lr = 0x82324FF4;
	sub_8251F4A8(ctx, base);
	// b 0x82324ffc
	goto loc_82324FFC;
loc_82324FF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82324FFC:
	// stw r3,1100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1100, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f91940
	ctx.lr = 0x82325008;
	sub_82F91940(ctx, base);
	// stw r26,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r26.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r11.u32);
	// bl 0x82f91940
	ctx.lr = 0x8232501C;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82325028"))) PPC_WEAK_FUNC(sub_82325028);
PPC_FUNC_IMPL(__imp__sub_82325028) {
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
	// bl 0x82325078
	ctx.lr = 0x82325048;
	sub_82325078(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82325058
	if (ctx.cr0.eq) goto loc_82325058;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82325058;
	sub_82691540(ctx, base);
loc_82325058:
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

__attribute__((alias("__imp__sub_82325074"))) PPC_WEAK_FUNC(sub_82325074);
PPC_FUNC_IMPL(__imp__sub_82325074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82325078"))) PPC_WEAK_FUNC(sub_82325078);
PPC_FUNC_IMPL(__imp__sub_82325078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82325080;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,772
	ctx.r11.s64 = ctx.r11.s64 + 772;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,1120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823250d0
	if (ctx.cr6.eq) goto loc_823250D0;
	// lwz r10,1096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1968, ctx.r11.u32);
	// stw r11,1964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1964, ctx.r11.u32);
	// lwz r30,1096(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823250d0
	if (ctx.cr6.eq) goto loc_823250D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82526af0
	ctx.lr = 0x823250C8;
	sub_82526AF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x823250D0;
	sub_82691540(ctx, base);
loc_823250D0:
	// lwz r30,1100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823250ec
	if (ctx.cr6.eq) goto loc_823250EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8251f6c0
	ctx.lr = 0x823250E4;
	sub_8251F6C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x823250EC;
	sub_82691540(ctx, base);
loc_823250EC:
	// addi r3,r31,1104
	ctx.r3.s64 = ctx.r31.s64 + 1104;
	// bl 0x82f91940
	ctx.lr = 0x823250F4;
	sub_82F91940(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,524
	ctx.r11.s64 = ctx.r11.s64 + 524;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

