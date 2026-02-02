#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82552590"))) PPC_WEAK_FUNC(sub_82552590);
PPC_FUNC_IMPL(__imp__sub_82552590) {
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
	// bl 0x825525e0
	ctx.lr = 0x825525B0;
	sub_825525E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825525c0
	if (ctx.cr0.eq) goto loc_825525C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825525C0;
	sub_82691540(ctx, base);
loc_825525C0:
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

__attribute__((alias("__imp__sub_825525DC"))) PPC_WEAK_FUNC(sub_825525DC);
PPC_FUNC_IMPL(__imp__sub_825525DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825525E0"))) PPC_WEAK_FUNC(sub_825525E0);
PPC_FUNC_IMPL(__imp__sub_825525E0) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,29016
	ctx.r11.s64 = ctx.r11.s64 + 29016;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x828f8438
	ctx.lr = 0x8255260C;
	sub_828F8438(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82261450
	ctx.lr = 0x82552614;
	sub_82261450(ctx, base);
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

__attribute__((alias("__imp__sub_82552628"))) PPC_WEAK_FUNC(sub_82552628);
PPC_FUNC_IMPL(__imp__sub_82552628) {
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82552650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82262510
	ctx.lr = 0x82552670;
	sub_82262510(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82262588
	ctx.lr = 0x8255269C;
	sub_82262588(ctx, base);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// beq cr6,0x825526e8
	if (ctx.cr6.eq) goto loc_825526E8;
	// bl 0x82241d18
	ctx.lr = 0x825526E8;
	sub_82241D18(ctx, base);
loc_825526E8:
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

__attribute__((alias("__imp__sub_82552700"))) PPC_WEAK_FUNC(sub_82552700);
PPC_FUNC_IMPL(__imp__sub_82552700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82552708;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r30,r4,4
	ctx.r30.s64 = ctx.r4.s64 + 4;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x825527d0
	if (ctx.cr6.eq) goto loc_825527D0;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82261c20
	ctx.lr = 0x82552740;
	sub_82261C20(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82554060
	ctx.lr = 0x82552758;
	sub_82554060(ctx, base);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,53(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x825527c4
	if (!ctx.cr0.eq) goto loc_825527C4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82552788
	goto loc_82552788;
loc_82552780:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82552788:
	// lbz r8,53(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 53);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82552780
	if (ctx.cr0.eq) goto loc_82552780;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x825527b0
	goto loc_825527B0;
loc_825527A8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_825527B0:
	// lbz r8,53(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x825527a8
	if (ctx.cr0.eq) goto loc_825527A8;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x825527d0
	goto loc_825527D0;
loc_825527C4:
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
loc_825527D0:
	// addi r30,r28,20
	ctx.r30.s64 = ctx.r28.s64 + 20;
	// addi r31,r29,20
	ctx.r31.s64 = ctx.r29.s64 + 20;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82552884
	if (ctx.cr6.eq) goto loc_82552884;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82261cc8
	ctx.lr = 0x825527F4;
	sub_82261CC8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82554168
	ctx.lr = 0x8255280C;
	sub_82554168(ctx, base);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,73(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82552878
	if (!ctx.cr0.eq) goto loc_82552878;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8255283c
	goto loc_8255283C;
loc_82552834:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8255283C:
	// lbz r8,73(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 73);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82552834
	if (ctx.cr0.eq) goto loc_82552834;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82552864
	goto loc_82552864;
loc_8255285C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82552864:
	// lbz r8,73(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8255285c
	if (ctx.cr0.eq) goto loc_8255285C;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82552884
	goto loc_82552884;
loc_82552878:
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
loc_82552884:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// addi r4,r28,52
	ctx.r4.s64 = ctx.r28.s64 + 52;
	// addi r3,r29,52
	ctx.r3.s64 = ctx.r29.s64 + 52;
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// bl 0x82550238
	ctx.lr = 0x825528B0;
	sub_82550238(ctx, base);
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825528C4"))) PPC_WEAK_FUNC(sub_825528C4);
PPC_FUNC_IMPL(__imp__sub_825528C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825528C8"))) PPC_WEAK_FUNC(sub_825528C8);
PPC_FUNC_IMPL(__imp__sub_825528C8) {
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
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825528EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f8438
	ctx.lr = 0x825528F8;
	sub_828F8438(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255290c
	if (ctx.cr6.eq) goto loc_8255290C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_8255290C:
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

__attribute__((alias("__imp__sub_82552920"))) PPC_WEAK_FUNC(sub_82552920);
PPC_FUNC_IMPL(__imp__sub_82552920) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82552950
	if (!ctx.cr0.eq) goto loc_82552950;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82552948
	if (ctx.cr6.eq) goto loc_82552948;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82552948
	if (ctx.cr6.eq) goto loc_82552948;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82552950
	if (!ctx.cr6.eq) goto loc_82552950;
loc_82552948:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82552954
	goto loc_82552954;
loc_82552950:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82552954:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255295C"))) PPC_WEAK_FUNC(sub_8255295C);
PPC_FUNC_IMPL(__imp__sub_8255295C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82552960"))) PPC_WEAK_FUNC(sub_82552960);
PPC_FUNC_IMPL(__imp__sub_82552960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82552968;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82552ad8
	if (ctx.cr6.eq) goto loc_82552AD8;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82552b30
	if (!ctx.cr6.eq) goto loc_82552B30;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,3
	ctx.r29.s64 = 3;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,180(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r30,23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 23, ctx.xer);
	// blt cr6,0x825529a0
	if (ctx.cr6.lt) goto loc_825529A0;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x825529d8
	goto loc_825529D8;
loc_825529A0:
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// blt cr6,0x825529d4
	if (ctx.cr6.lt) goto loc_825529D4;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// ble cr6,0x82552a00
	if (!ctx.cr6.gt) goto loc_82552A00;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// beq cr6,0x82552ac8
	if (ctx.cr6.eq) goto loc_82552AC8;
	// ble cr6,0x825529d4
	if (!ctx.cr6.gt) goto loc_825529D4;
	// cmpwi cr6,r30,20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 20, ctx.xer);
	// ble cr6,0x825529f8
	if (!ctx.cr6.gt) goto loc_825529F8;
	// cmpwi cr6,r30,21
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 21, ctx.xer);
	// beq cr6,0x82552ac8
	if (ctx.cr6.eq) goto loc_82552AC8;
	// cmpwi cr6,r30,22
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 22, ctx.xer);
	// beq cr6,0x82552ac8
	if (ctx.cr6.eq) goto loc_82552AC8;
loc_825529D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825529D8:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82552a08
	if (!ctx.cr6.eq) goto loc_82552A08;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82552b30
	if (ctx.cr6.eq) goto loc_82552B30;
loc_825529EC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// b 0x82552b2c
	goto loc_82552B2C;
loc_825529F8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x825529d8
	goto loc_825529D8;
loc_82552A00:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825529d8
	goto loc_825529D8;
loc_82552A08:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82552ac8
	if (ctx.cr6.eq) goto loc_82552AC8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82552ac8
	if (!ctx.cr6.eq) goto loc_82552AC8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82553de8
	ctx.lr = 0x82552A20;
	sub_82553DE8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,28420
	ctx.r4.s64 = ctx.r11.s64 + 28420;
	// bl 0x82251da0
	ctx.lr = 0x82552A30;
	sub_82251DA0(ctx, base);
	// cmpwi cr6,r30,17
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 17, ctx.xer);
	// bne cr6,0x82552a64
	if (!ctx.cr6.eq) goto loc_82552A64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828e62f8
	ctx.lr = 0x82552A44;
	sub_828E62F8(ctx, base);
	// bl 0x828d5ac8
	ctx.lr = 0x82552A48;
	sub_828D5AC8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,28456
	ctx.r4.s64 = ctx.r11.s64 + 28456;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82251da0
	ctx.lr = 0x82552A5C;
	sub_82251DA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82251da0
	ctx.lr = 0x82552A64;
	sub_82251DA0(ctx, base);
loc_82552A64:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82552aac
	if (!ctx.cr6.eq) goto loc_82552AAC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82552aac
	if (!ctx.cr6.eq) goto loc_82552AAC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// bl 0x82553eb0
	ctx.lr = 0x82552A94;
	sub_82553EB0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,10356
	ctx.r11.s64 = ctx.r11.s64 + 10356;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x82fa1370
	ctx.lr = 0x82552AA8;
	sub_82FA1370(ctx, base);
	// b 0x82552b30
	goto loc_82552B30;
loc_82552AAC:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82553eb0
	ctx.lr = 0x82552AB4;
	sub_82553EB0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,10356
	ctx.r11.s64 = ctx.r11.s64 + 10356;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x82fa1370
	ctx.lr = 0x82552AC8;
	sub_82FA1370(ctx, base);
loc_82552AC8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82552b30
	if (!ctx.cr6.eq) goto loc_82552B30;
	// b 0x825529ec
	goto loc_825529EC;
loc_82552AD8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82552b20
	if (ctx.cr6.eq) goto loc_82552B20;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82552b30
	if (!ctx.cr6.eq) goto loc_82552B30;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lwz r10,21120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82552b18
	if (!ctx.cr6.eq) goto loc_82552B18;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82552b30
	if (ctx.cr6.eq) goto loc_82552B30;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// b 0x82552b30
	goto loc_82552B30;
loc_82552B18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553850
	ctx.lr = 0x82552B20;
	sub_82553850(ctx, base);
loc_82552B20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825539a8
	ctx.lr = 0x82552B28;
	sub_825539A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82552B2C:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82552B30:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82552B38"))) PPC_WEAK_FUNC(sub_82552B38);
PPC_FUNC_IMPL(__imp__sub_82552B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82552B40;
	__savegprlr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224edb8
	ctx.lr = 0x82552B5C;
	sub_8224EDB8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28508
	ctx.r4.s64 = ctx.r11.s64 + 28508;
	// bl 0x82251da0
	ctx.lr = 0x82552B6C;
	sub_82251DA0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r30,r11,27536
	ctx.r30.s64 = ctx.r11.s64 + 27536;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82552c78
	if (ctx.cr6.lt) goto loc_82552C78;
	// beq cr6,0x82552c6c
	if (ctx.cr6.eq) goto loc_82552C6C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82552c28
	if (ctx.cr6.lt) goto loc_82552C28;
	// beq cr6,0x82552c1c
	if (ctx.cr6.eq) goto loc_82552C1C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82552be0
	if (ctx.cr6.lt) goto loc_82552BE0;
	// bne cr6,0x82552c88
	if (!ctx.cr6.eq) goto loc_82552C88;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x828e9f40
	ctx.lr = 0x82552BB4;
	sub_828E9F40(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,28608
	ctx.r4.s64 = ctx.r11.s64 + 28608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82251da0
	ctx.lr = 0x82552BC8;
	sub_82251DA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8224d4c8
	ctx.lr = 0x82552BD0;
	sub_8224D4C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82251da0
	ctx.lr = 0x82552BD8;
	sub_82251DA0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// b 0x82552c5c
	goto loc_82552C5C;
loc_82552BE0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,52(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r11,28584
	ctx.r4.s64 = ctx.r11.s64 + 28584;
	// bl 0x82251da0
	ctx.lr = 0x82552BF8;
	sub_82251DA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82557028
	ctx.lr = 0x82552C00;
	sub_82557028(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,28564
	ctx.r4.s64 = ctx.r11.s64 + 28564;
	// bl 0x82251da0
	ctx.lr = 0x82552C0C;
	sub_82251DA0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82557028
	ctx.lr = 0x82552C14;
	sub_82557028(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82552c84
	goto loc_82552C84;
loc_82552C1C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,28552
	ctx.r4.s64 = ctx.r11.s64 + 28552;
	// b 0x82552c80
	goto loc_82552C80;
loc_82552C28:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82552cb8
	ctx.lr = 0x82552C34;
	sub_82552CB8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,28536
	ctx.r4.s64 = ctx.r11.s64 + 28536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82251da0
	ctx.lr = 0x82552C48;
	sub_82251DA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8224d4c8
	ctx.lr = 0x82552C50;
	sub_8224D4C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82251da0
	ctx.lr = 0x82552C58;
	sub_82251DA0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
loc_82552C5C:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822402c8
	ctx.lr = 0x82552C68;
	sub_822402C8(ctx, base);
	// b 0x82552c88
	goto loc_82552C88;
loc_82552C6C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,28528
	ctx.r4.s64 = ctx.r11.s64 + 28528;
	// b 0x82552c80
	goto loc_82552C80;
loc_82552C78:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-20148
	ctx.r4.s64 = ctx.r11.s64 + -20148;
loc_82552C80:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82552C84:
	// bl 0x82251da0
	ctx.lr = 0x82552C88;
	sub_82251DA0(ctx, base);
loc_82552C88:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82251da0
	ctx.lr = 0x82552C94;
	sub_82251DA0(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82252010
	ctx.lr = 0x82552CA0;
	sub_82252010(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224fa68
	ctx.lr = 0x82552CA8;
	sub_8224FA68(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82552CB4"))) PPC_WEAK_FUNC(sub_82552CB4);
PPC_FUNC_IMPL(__imp__sub_82552CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82552CB8"))) PPC_WEAK_FUNC(sub_82552CB8);
PPC_FUNC_IMPL(__imp__sub_82552CB8) {
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
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82552d44
	if (ctx.cr6.eq) goto loc_82552D44;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82552d38
	if (ctx.cr6.eq) goto loc_82552D38;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82552d2c
	if (ctx.cr6.eq) goto loc_82552D2C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x82552d20
	if (ctx.cr6.eq) goto loc_82552D20;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x82552d14
	if (ctx.cr6.eq) goto loc_82552D14;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// beq cr6,0x82552d08
	if (ctx.cr6.eq) goto loc_82552D08;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32570
	ctx.r4.s64 = ctx.r11.s64 + 32570;
	// b 0x82552d50
	goto loc_82552D50;
loc_82552D08:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,28968
	ctx.r4.s64 = ctx.r11.s64 + 28968;
	// b 0x82552d50
	goto loc_82552D50;
loc_82552D14:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,28872
	ctx.r4.s64 = ctx.r11.s64 + 28872;
	// b 0x82552d4c
	goto loc_82552D4C;
loc_82552D20:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,28784
	ctx.r4.s64 = ctx.r11.s64 + 28784;
	// b 0x82552d4c
	goto loc_82552D4C;
loc_82552D2C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,28680
	ctx.r4.s64 = ctx.r11.s64 + 28680;
	// b 0x82552d4c
	goto loc_82552D4C;
loc_82552D38:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,28628
	ctx.r4.s64 = ctx.r11.s64 + 28628;
	// b 0x82552d4c
	goto loc_82552D4C;
loc_82552D44:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,28720
	ctx.r4.s64 = ctx.r11.s64 + 28720;
loc_82552D4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82552D50:
	// bl 0x822400d8
	ctx.lr = 0x82552D54;
	sub_822400D8(ctx, base);
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

__attribute__((alias("__imp__sub_82552D6C"))) PPC_WEAK_FUNC(sub_82552D6C);
PPC_FUNC_IMPL(__imp__sub_82552D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82552D70"))) PPC_WEAK_FUNC(sub_82552D70);
PPC_FUNC_IMPL(__imp__sub_82552D70) {
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
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82552dc4
	if (ctx.cr6.eq) goto loc_82552DC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r11.u8);
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82552DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_82552DC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82552DDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82552DFC"))) PPC_WEAK_FUNC(sub_82552DFC);
PPC_FUNC_IMPL(__imp__sub_82552DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82552E00"))) PPC_WEAK_FUNC(sub_82552E00);
PPC_FUNC_IMPL(__imp__sub_82552E00) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82552e3c
	if (!ctx.cr6.eq) goto loc_82552E3C;
	// lbz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82552e3c
	if (ctx.cr0.eq) goto loc_82552E3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// b 0x82552eb4
	goto loc_82552EB4;
loc_82552E3C:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82552eb4
	if (ctx.cr0.eq) goto loc_82552EB4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82552e60
	if (ctx.cr6.lt) goto loc_82552E60;
	// beq cr6,0x82552eac
	if (ctx.cr6.eq) goto loc_82552EAC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82552eb4
	if (!ctx.cr6.lt) goto loc_82552EB4;
loc_82552E60:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828e4c10
	ctx.lr = 0x82552E70;
	sub_828E4C10(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828e3b00
	ctx.lr = 0x82552E7C;
	sub_828E3B00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82552eb4
	if (ctx.cr0.eq) goto loc_82552EB4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82552eac
	if (ctx.cr6.lt) goto loc_82552EAC;
	// beq cr6,0x82552ea4
	if (ctx.cr6.eq) goto loc_82552EA4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82552eb4
	if (!ctx.cr6.eq) goto loc_82552EB4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82552eb0
	goto loc_82552EB0;
loc_82552EA4:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82552eb0
	goto loc_82552EB0;
loc_82552EAC:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82552EB0:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82552EB4:
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

__attribute__((alias("__imp__sub_82552EC8"))) PPC_WEAK_FUNC(sub_82552EC8);
PPC_FUNC_IMPL(__imp__sub_82552EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82552ED0;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82552f24
	if (!ctx.cr6.eq) goto loc_82552F24;
	// lbz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82552f24
	if (ctx.cr0.eq) goto loc_82552F24;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f8438
	ctx.lr = 0x82552F00;
	sub_828F8438(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// beq cr6,0x825530a8
	if (ctx.cr6.eq) goto loc_825530A8;
	// bl 0x82241d18
	ctx.lr = 0x82552F20;
	sub_82241D18(ctx, base);
	// b 0x825530a8
	goto loc_825530A8;
loc_82552F24:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828e3b00
	ctx.lr = 0x82552F30;
	sub_828E3B00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825530a8
	if (ctx.cr0.eq) goto loc_825530A8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r28,21120(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82552f68
	if (!ctx.cr6.eq) goto loc_82552F68;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x825530a8
	if (ctx.cr6.eq) goto loc_825530A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// b 0x825530a8
	goto loc_825530A8;
loc_82552F68:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82553020
	if (!ctx.cr6.eq) goto loc_82553020;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f80d0
	ctx.lr = 0x82552F88;
	sub_828F80D0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x828e6c78
	ctx.lr = 0x82552F90;
	sub_828E6C78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82552fc4
	if (ctx.cr0.eq) goto loc_82552FC4;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82914fa0
	ctx.lr = 0x82552FA0;
	sub_82914FA0(ctx, base);
	// bl 0x828e6de0
	ctx.lr = 0x82552FA4;
	sub_828E6DE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82552fc4
	if (ctx.cr0.eq) goto loc_82552FC4;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82914fa0
	ctx.lr = 0x82552FB4;
	sub_82914FA0(ctx, base);
	// bl 0x828e70a8
	ctx.lr = 0x82552FB8;
	sub_828E70A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82552fc8
	if (!ctx.cr0.eq) goto loc_82552FC8;
loc_82552FC4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82552FC8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// beq 0x825530b0
	if (ctx.cr0.eq) goto loc_825530B0;
	// bl 0x828e6c88
	ctx.lr = 0x82552FD8;
	sub_828E6C88(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x828e6ca0
	ctx.lr = 0x82552FE0;
	sub_828E6CA0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82914fa0
	ctx.lr = 0x82552FE8;
	sub_82914FA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x828e70c0
	ctx.lr = 0x82552FF4;
	sub_828E70C0(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82550238
	ctx.lr = 0x82553000;
	sub_82550238(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82914fa0
	ctx.lr = 0x82553008;
	sub_82914FA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// bl 0x828e85e8
	ctx.lr = 0x82553018;
	sub_828E85E8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x828e6d08
	ctx.lr = 0x82553020;
	sub_828E6D08(ctx, base);
loc_82553020:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// std r10,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r10.u64);
	// bl 0x828e9770
	ctx.lr = 0x8255303C;
	sub_828E9770(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r31,76(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829206a8
	ctx.lr = 0x8255304C;
	sub_829206A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r11,170(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 170);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r28,171(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 171);
	// lbz r25,173(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 173);
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r29,174(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 174);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// lbz r27,175(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 175);
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// lbz r10,169(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 169);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// stb r28,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r28.u8);
	// stb r25,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r25.u8);
	// stb r29,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r29.u8);
	// stb r27,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r27.u8);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// stb r30,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r30.u8);
	// stb r30,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r30.u8);
	// stb r30,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r30.u8);
	// bl 0x828e4528
	ctx.lr = 0x825530A8;
	sub_828E4528(ctx, base);
loc_825530A8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_825530B0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x828e6d08
	ctx.lr = 0x825530BC;
	sub_828E6D08(ctx, base);
	// b 0x825530a8
	goto loc_825530A8;
}

__attribute__((alias("__imp__sub_825530C0"))) PPC_WEAK_FUNC(sub_825530C0);
PPC_FUNC_IMPL(__imp__sub_825530C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x825530C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f0b30
	ctx.lr = 0x825530DC;
	sub_828F0B30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825534dc
	if (ctx.cr0.eq) goto loc_825534DC;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r28,21120(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82553114
	if (!ctx.cr6.eq) goto loc_82553114;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82553534
	if (ctx.cr6.eq) goto loc_82553534;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// b 0x82553534
	goto loc_82553534;
loc_82553114:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82920258
	ctx.lr = 0x8255311C;
	sub_82920258(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82553148
	if (!ctx.cr0.eq) goto loc_82553148;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82553534
	if (ctx.cr6.eq) goto loc_82553534;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82553534
	goto loc_82553534;
loc_82553148:
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82553d00
	ctx.lr = 0x82553164;
	sub_82553D00(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825531a4
	if (ctx.cr6.eq) goto loc_825531A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82553be0
	ctx.lr = 0x82553178;
	sub_82553BE0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x828eacd8
	ctx.lr = 0x82553184;
	sub_828EACD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825531a4
	if (ctx.cr0.eq) goto loc_825531A4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825531a4
	if (ctx.cr6.eq) goto loc_825531A4;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r29,-6524(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6524);
	// b 0x825531ac
	goto loc_825531AC;
loc_825531A4:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r29,-6520(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6520);
loc_825531AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8295be18
	ctx.lr = 0x825531B4;
	sub_8295BE18(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,64(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82553208
	if (ctx.cr6.eq) goto loc_82553208;
	// lwz r28,60(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x829206a8
	ctx.lr = 0x825531D4;
	sub_829206A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// bl 0x828f7f58
	ctx.lr = 0x825531F4;
	sub_828F7F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828e6d50
	ctx.lr = 0x82553200;
	sub_828E6D50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x82553240
	goto loc_82553240;
loc_82553208:
	// lwz r30,60(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x829206a8
	ctx.lr = 0x82553214;
	sub_829206A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// bl 0x828f8008
	ctx.lr = 0x82553230;
	sub_828F8008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828e6d50
	ctx.lr = 0x8255323C;
	sub_828E6D50(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
loc_82553240:
	// bl 0x828e6d08
	ctx.lr = 0x82553244;
	sub_828E6D08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828e6c78
	ctx.lr = 0x8255324C;
	sub_828E6C78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825534d4
	if (ctx.cr0.eq) goto loc_825534D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82914fa0
	ctx.lr = 0x8255325C;
	sub_82914FA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x828bfcf8
	ctx.lr = 0x82553264;
	sub_828BFCF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x828ebc90
	ctx.lr = 0x82553278;
	sub_828EBC90(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-4488
	ctx.r4.s64 = ctx.r10.s64 + -4488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82553294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82914fa0
	ctx.lr = 0x8255329C;
	sub_82914FA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x828ebc90
	ctx.lr = 0x825532B8;
	sub_828EBC90(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-4516
	ctx.r4.s64 = ctx.r10.s64 + -4516;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825532D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82914fa0
	ctx.lr = 0x825532DC;
	sub_82914FA0(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r5,r11,25096
	ctx.r5.s64 = ctx.r11.s64 + 25096;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r10,25124
	ctx.r4.s64 = ctx.r10.s64 + 25124;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825532FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// beq cr6,0x825533e8
	if (ctx.cr6.eq) goto loc_825533E8;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r29,r11,-4544
	ctx.r29.s64 = ctx.r11.s64 + -4544;
loc_82553318:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828ebdf8
	ctx.lr = 0x82553330;
	sub_828EBDF8(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825533c0
	if (ctx.cr6.eq) goto loc_825533C0;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82553354
	if (ctx.cr6.lt) goto loc_82553354;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82553358
	goto loc_82553358;
loc_82553354:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_82553358:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82656348
	ctx.lr = 0x82553368;
	sub_82656348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8255337c
	if (!ctx.cr0.eq) goto loc_8255337C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825533c0
	if (ctx.cr6.eq) goto loc_825533C0;
loc_8255337C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82914fa0
	ctx.lr = 0x82553384;
	sub_82914FA0(ctx, base);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x822c2418
	ctx.lr = 0x825533A4;
	sub_822C2418(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825533C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825533C0:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825533d0
	if (ctx.cr6.eq) goto loc_825533D0;
	// bl 0x82241d18
	ctx.lr = 0x825533D0;
	sub_82241D18(ctx, base);
loc_825533D0:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8289db58
	ctx.lr = 0x825533D8;
	sub_8289DB58(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82553318
	if (!ctx.cr6.eq) goto loc_82553318;
loc_825533E8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// b 0x82553488
	goto loc_82553488;
loc_825533F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f6068
	ctx.lr = 0x82553410;
	sub_828F6068(ctx, base);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82553468
	if (ctx.cr6.eq) goto loc_82553468;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828f61e8
	ctx.lr = 0x8255342C;
	sub_828F61E8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82553458
	if (ctx.cr6.eq) goto loc_82553458;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82914fa0
	ctx.lr = 0x82553440;
	sub_82914FA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82553458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82553458:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82553468
	if (ctx.cr6.eq) goto loc_82553468;
	// bl 0x82241d18
	ctx.lr = 0x82553468;
	sub_82241D18(ctx, base);
loc_82553468:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82553478
	if (ctx.cr6.eq) goto loc_82553478;
	// bl 0x82241d18
	ctx.lr = 0x82553478;
	sub_82241D18(ctx, base);
loc_82553478:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82f95e18
	ctx.lr = 0x82553480;
	sub_82F95E18(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82553488:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825533f8
	if (!ctx.cr6.eq) goto loc_825533F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82914fa0
	ctx.lr = 0x82553498;
	sub_82914FA0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r5,r11,-4460
	ctx.r5.s64 = ctx.r11.s64 + -4460;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r10,25152
	ctx.r4.s64 = ctx.r10.s64 + 25152;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825534B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82914fa0
	ctx.lr = 0x825534C0;
	sub_82914FA0(ctx, base);
	// bl 0x828e6f30
	ctx.lr = 0x825534C4;
	sub_828E6F30(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f8548
	ctx.lr = 0x825534D4;
	sub_828F8548(ctx, base);
loc_825534D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82553530
	goto loc_82553530;
loc_825534DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f0ec0
	ctx.lr = 0x825534E8;
	sub_828F0EC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82553534
	if (ctx.cr0.eq) goto loc_82553534;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f8040
	ctx.lr = 0x82553500;
	sub_828F8040(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x828e6c78
	ctx.lr = 0x82553508;
	sub_828E6C78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255352c
	if (ctx.cr0.eq) goto loc_8255352C;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82914fa0
	ctx.lr = 0x82553518;
	sub_82914FA0(ctx, base);
	// bl 0x828e6f30
	ctx.lr = 0x8255351C;
	sub_828E6F30(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f8548
	ctx.lr = 0x8255352C;
	sub_828F8548(ctx, base);
loc_8255352C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
loc_82553530:
	// bl 0x828e6d08
	ctx.lr = 0x82553534;
	sub_828E6D08(ctx, base);
loc_82553534:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255353C"))) PPC_WEAK_FUNC(sub_8255353C);
PPC_FUNC_IMPL(__imp__sub_8255353C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82553540"))) PPC_WEAK_FUNC(sub_82553540);
PPC_FUNC_IMPL(__imp__sub_82553540) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f80d0
	ctx.lr = 0x82553568;
	sub_828F80D0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x828e6c78
	ctx.lr = 0x82553570;
	sub_828E6C78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825535a4
	if (!ctx.cr0.eq) goto loc_825535A4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82553688
	if (ctx.cr6.eq) goto loc_82553688;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82553690
	if (ctx.cr6.eq) goto loc_82553690;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// b 0x82553690
	goto loc_82553690;
loc_825535A4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82914fa0
	ctx.lr = 0x825535AC;
	sub_82914FA0(ctx, base);
	// bl 0x828e6de0
	ctx.lr = 0x825535B0;
	sub_828E6DE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82553690
	if (ctx.cr0.eq) goto loc_82553690;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x825535cc
	if (!ctx.cr6.eq) goto loc_825535CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8255368c
	goto loc_8255368C;
loc_825535CC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82914fa0
	ctx.lr = 0x825535D8;
	sub_82914FA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828e70c0
	ctx.lr = 0x825535E4;
	sub_828E70C0(ctx, base);
	// b 0x825536bc
	goto loc_825536BC;
loc_825535E8:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82553658
	if (ctx.cr0.eq) goto loc_82553658;
	// lbz r11,157(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 157);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82553624
	if (!ctx.cr0.eq) goto loc_82553624;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82914fa0
	ctx.lr = 0x8255360C;
	sub_82914FA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
loc_82553614:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x828e85e8
	ctx.lr = 0x8255361C;
	sub_828E85E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x825536b8
	goto loc_825536B8;
loc_82553624:
	// bl 0x828e9768
	ctx.lr = 0x82553628;
	sub_828E9768(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82553644
	if (ctx.cr0.eq) goto loc_82553644;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828e97b0
	ctx.lr = 0x8255363C;
	sub_828E97B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825536b0
	if (!ctx.cr0.eq) goto loc_825536B0;
loc_82553644:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82914fa0
	ctx.lr = 0x8255364C;
	sub_82914FA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x82553614
	goto loc_82553614;
loc_82553658:
	// lbz r10,158(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 158);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825536b4
	if (!ctx.cr0.eq) goto loc_825536B4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82553668:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82553690
	if (ctx.cr0.eq) goto loc_82553690;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82914fa0
	ctx.lr = 0x82553678;
	sub_82914FA0(ctx, base);
	// bl 0x828e70a8
	ctx.lr = 0x8255367C;
	sub_828E70A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,5
	ctx.r11.s64 = 5;
	// bne 0x8255368c
	if (!ctx.cr0.eq) goto loc_8255368C;
loc_82553688:
	// li r11,4
	ctx.r11.s64 = 4;
loc_8255368C:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82553690:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x828e6d08
	ctx.lr = 0x82553698;
	sub_828E6D08(ctx, base);
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
loc_825536B0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825536B4:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_825536B8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_825536BC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82914fa0
	ctx.lr = 0x825536C4;
	sub_82914FA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x828e70d0
	ctx.lr = 0x825536D0;
	sub_828E70D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825535e8
	if (!ctx.cr6.eq) goto loc_825535E8;
	// b 0x82553668
	goto loc_82553668;
}

__attribute__((alias("__imp__sub_825536E4"))) PPC_WEAK_FUNC(sub_825536E4);
PPC_FUNC_IMPL(__imp__sub_825536E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825536E8"))) PPC_WEAK_FUNC(sub_825536E8);
PPC_FUNC_IMPL(__imp__sub_825536E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825536F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,21120(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82553728
	if (!ctx.cr6.eq) goto loc_82553728;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82553848
	if (ctx.cr6.eq) goto loc_82553848;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// b 0x82553848
	goto loc_82553848;
loc_82553728:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829206a8
	ctx.lr = 0x82553730;
	sub_829206A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553850
	ctx.lr = 0x8255373C;
	sub_82553850(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f0b30
	ctx.lr = 0x82553748;
	sub_828F0B30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825537fc
	if (ctx.cr0.eq) goto loc_825537FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82920258
	ctx.lr = 0x82553758;
	sub_82920258(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82553784
	if (!ctx.cr0.eq) goto loc_82553784;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82553848
	if (ctx.cr6.eq) goto loc_82553848;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82553848
	goto loc_82553848;
loc_82553784:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r11,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r11.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// lbz r31,164(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 164);
	// lbz r30,163(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 163);
	// lbz r29,167(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 167);
	// lbz r28,166(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 166);
	// lbz r10,162(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 162);
	// lbz r9,161(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 161);
	// lbz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// lbz r11,165(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 165);
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// stb r28,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r28.u8);
	// stb r29,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r29.u8);
	// stb r31,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r31.u8);
	// stb r30,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// bl 0x828f0ca8
	ctx.lr = 0x825537F8;
	sub_828F0CA8(ctx, base);
	// b 0x82553848
	goto loc_82553848;
loc_825537FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f0ec0
	ctx.lr = 0x82553808;
	sub_828F0EC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82553848
	if (ctx.cr0.eq) goto loc_82553848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,56(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r31,52(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x829206a8
	ctx.lr = 0x82553828;
	sub_829206A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x828f0fc0
	ctx.lr = 0x82553848;
	sub_828F0FC0(ctx, base);
loc_82553848:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553850"))) PPC_WEAK_FUNC(sub_82553850);
PPC_FUNC_IMPL(__imp__sub_82553850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82553858;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,21120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8255399c
	if (ctx.cr6.eq) goto loc_8255399C;
	// bl 0x829206a8
	ctx.lr = 0x82553874;
	sub_829206A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828bfcf8
	ctx.lr = 0x8255387C;
	sub_828BFCF8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,56(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x828ebc90
	ctx.lr = 0x82553894;
	sub_828EBC90(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-4488
	ctx.r5.s64 = ctx.r11.s64 + -4488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828ecbc8
	ctx.lr = 0x825538AC;
	sub_828ECBC8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x828ebc90
	ctx.lr = 0x825538C0;
	sub_828EBC90(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-4516
	ctx.r5.s64 = ctx.r11.s64 + -4516;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828ecbc8
	ctx.lr = 0x825538D8;
	sub_828ECBC8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r6,r11,-4460
	ctx.r6.s64 = ctx.r11.s64 + -4460;
	// addi r5,r10,25152
	ctx.r5.s64 = ctx.r10.s64 + 25152;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f6fb0
	ctx.lr = 0x825538F8;
	sub_828F6FB0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x8255395c
	if (ctx.cr6.eq) goto loc_8255395C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82553910:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x822c2418
	ctx.lr = 0x8255392C;
	sub_822C2418(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828ecbc8
	ctx.lr = 0x82553944;
	sub_828ECBC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8289db58
	ctx.lr = 0x8255394C;
	sub_8289DB58(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82553910
	if (!ctx.cr6.eq) goto loc_82553910;
loc_8255395C:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82553994
	goto loc_82553994;
loc_8255396C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r11,40
	ctx.r6.s64 = ctx.r11.s64 + 40;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x828f6fb0
	ctx.lr = 0x82553984;
	sub_828F6FB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f95e18
	ctx.lr = 0x8255398C;
	sub_82F95E18(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82553994:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8255396c
	if (!ctx.cr6.eq) goto loc_8255396C;
loc_8255399C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825539A4"))) PPC_WEAK_FUNC(sub_825539A4);
PPC_FUNC_IMPL(__imp__sub_825539A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825539A8"))) PPC_WEAK_FUNC(sub_825539A8);
PPC_FUNC_IMPL(__imp__sub_825539A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825539B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828dd280
	ctx.lr = 0x825539C4;
	sub_828DD280(ctx, base);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82553acc
	if (ctx.cr6.eq) goto loc_82553ACC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_825539E0:
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82553ab4
	if (!ctx.cr6.eq) goto loc_82553AB4;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x822c2418
	ctx.lr = 0x82553A08;
	sub_822C2418(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c11f8
	ctx.lr = 0x82553A10;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82553aa4
	if (ctx.cr0.eq) goto loc_82553AA4;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828ebdf8
	ctx.lr = 0x82553A28;
	sub_828EBDF8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82553a94
	if (ctx.cr6.eq) goto loc_82553A94;
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r31,r30,120
	ctx.r31.s64 = ctx.r30.s64 + 120;
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bge cr6,0x82553a94
	if (!ctx.cr6.lt) goto loc_82553A94;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8254fd20
	ctx.lr = 0x82553A60;
	sub_8254FD20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254f9c0
	ctx.lr = 0x82553A6C;
	sub_8254F9C0(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82553a7c
	if (ctx.cr6.eq) goto loc_82553A7C;
	// bl 0x82241d18
	ctx.lr = 0x82553A7C;
	sub_82241D18(ctx, base);
loc_82553A7C:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82553a8c
	if (ctx.cr6.eq) goto loc_82553A8C;
	// bl 0x82241d18
	ctx.lr = 0x82553A8C;
	sub_82241D18(ctx, base);
loc_82553A8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8254ef08
	ctx.lr = 0x82553A94;
	sub_8254EF08(ctx, base);
loc_82553A94:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82553aa4
	if (ctx.cr6.eq) goto loc_82553AA4;
	// bl 0x82241d18
	ctx.lr = 0x82553AA4;
	sub_82241D18(ctx, base);
loc_82553AA4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82553ab4
	if (ctx.cr6.eq) goto loc_82553AB4;
	// bl 0x82241d18
	ctx.lr = 0x82553AB4;
	sub_82241D18(ctx, base);
loc_82553AB4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8289db58
	ctx.lr = 0x82553ABC;
	sub_8289DB58(ctx, base);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825539e0
	if (!ctx.cr6.eq) goto loc_825539E0;
loc_82553ACC:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// b 0x82553bbc
	goto loc_82553BBC;
loc_82553ADC:
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82553bac
	if (!ctx.cr6.eq) goto loc_82553BAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c11f8
	ctx.lr = 0x82553AF0;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82553bac
	if (ctx.cr0.eq) goto loc_82553BAC;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x828f6068
	ctx.lr = 0x82553B08;
	sub_828F6068(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82553b9c
	if (ctx.cr6.eq) goto loc_82553B9C;
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x828f61e8
	ctx.lr = 0x82553B20;
	sub_828F61E8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82553b8c
	if (ctx.cr6.eq) goto loc_82553B8C;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r31,r30,104
	ctx.r31.s64 = ctx.r30.s64 + 104;
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bge cr6,0x82553b8c
	if (!ctx.cr6.lt) goto loc_82553B8C;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8254fd20
	ctx.lr = 0x82553B58;
	sub_8254FD20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254f9c0
	ctx.lr = 0x82553B64;
	sub_8254F9C0(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82553b74
	if (ctx.cr6.eq) goto loc_82553B74;
	// bl 0x82241d18
	ctx.lr = 0x82553B74;
	sub_82241D18(ctx, base);
loc_82553B74:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82553b84
	if (ctx.cr6.eq) goto loc_82553B84;
	// bl 0x82241d18
	ctx.lr = 0x82553B84;
	sub_82241D18(ctx, base);
loc_82553B84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8254ef08
	ctx.lr = 0x82553B8C;
	sub_8254EF08(ctx, base);
loc_82553B8C:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82553b9c
	if (ctx.cr6.eq) goto loc_82553B9C;
	// bl 0x82241d18
	ctx.lr = 0x82553B9C;
	sub_82241D18(ctx, base);
loc_82553B9C:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82553bac
	if (ctx.cr6.eq) goto loc_82553BAC;
	// bl 0x82241d18
	ctx.lr = 0x82553BAC;
	sub_82241D18(ctx, base);
loc_82553BAC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f95e18
	ctx.lr = 0x82553BB4;
	sub_82F95E18(ctx, base);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82553BBC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82553adc
	if (!ctx.cr6.eq) goto loc_82553ADC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82553BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553BE0"))) PPC_WEAK_FUNC(sub_82553BE0);
PPC_FUNC_IMPL(__imp__sub_82553BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82553BE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-4544
	ctx.r31.s64 = ctx.r11.s64 + -4544;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82553c48
	goto loc_82553C48;
loc_82553C04:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82553c1c
	if (ctx.cr6.lt) goto loc_82553C1C;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82553c20
	goto loc_82553C20;
loc_82553C1C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82553C20:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82656348
	ctx.lr = 0x82553C30;
	sub_82656348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82553c40
	if (!ctx.cr0.lt) goto loc_82553C40;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x82553c48
	goto loc_82553C48;
loc_82553C40:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82553C48:
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82553c04
	if (ctx.cr0.eq) goto loc_82553C04;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82553c98
	if (ctx.cr6.eq) goto loc_82553C98;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// lwz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82553c7c
	if (ctx.cr6.lt) goto loc_82553C7C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82553C7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82656348
	ctx.lr = 0x82553C90;
	sub_82656348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82553cf0
	if (!ctx.cr0.lt) goto loc_82553CF0;
loc_82553C98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8224d3e0
	ctx.lr = 0x82553CA4;
	sub_8224D3E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r11,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82554260
	ctx.lr = 0x82553CC8;
	sub_82554260(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82553ce0
	if (ctx.cr6.eq) goto loc_82553CE0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82241d18
	ctx.lr = 0x82553CE0;
	sub_82241D18(ctx, base);
loc_82553CE0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x82553CF0;
	sub_822402C8(ctx, base);
loc_82553CF0:
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553CFC"))) PPC_WEAK_FUNC(sub_82553CFC);
PPC_FUNC_IMPL(__imp__sub_82553CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82553D00"))) PPC_WEAK_FUNC(sub_82553D00);
PPC_FUNC_IMPL(__imp__sub_82553D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82553D08;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,-4544
	ctx.r30.s64 = ctx.r11.s64 + -4544;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82553d6c
	goto loc_82553D6C;
loc_82553D28:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82553d40
	if (ctx.cr6.lt) goto loc_82553D40;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82553d44
	goto loc_82553D44;
loc_82553D40:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82553D44:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82656348
	ctx.lr = 0x82553D54;
	sub_82656348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82553d64
	if (!ctx.cr0.lt) goto loc_82553D64;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82553d6c
	goto loc_82553D6C;
loc_82553D64:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82553D6C:
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82553d28
	if (ctx.cr0.eq) goto loc_82553D28;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82553dc4
	if (ctx.cr6.eq) goto loc_82553DC4;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// lwz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82553da0
	if (ctx.cr6.lt) goto loc_82553DA0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82553DA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82656348
	ctx.lr = 0x82553DB4;
	sub_82656348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82553dc4
	if (ctx.cr0.lt) goto loc_82553DC4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x82553dd0
	goto loc_82553DD0;
loc_82553DC4:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82553DD0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553DE4"))) PPC_WEAK_FUNC(sub_82553DE4);
PPC_FUNC_IMPL(__imp__sub_82553DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82553DE8"))) PPC_WEAK_FUNC(sub_82553DE8);
PPC_FUNC_IMPL(__imp__sub_82553DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82553DF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,29008
	ctx.r11.s64 = ctx.r11.s64 + 29008;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-29976
	ctx.r10.s64 = ctx.r10.s64 + -29976;
	// addi r9,r9,10364
	ctx.r9.s64 = ctx.r9.s64 + 10364;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x8224eb00
	ctx.lr = 0x82553E58;
	sub_8224EB00(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,10372
	ctx.r11.s64 = ctx.r11.s64 + 10372;
	// addi r10,r10,29000
	ctx.r10.s64 = ctx.r10.s64 + 29000;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r9,r9,29004
	ctx.r9.s64 = ctx.r9.s64 + 29004;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r11,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + ctx.r29.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// bl 0x8224ed30
	ctx.lr = 0x82553EA0;
	sub_8224ED30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553EAC"))) PPC_WEAK_FUNC(sub_82553EAC);
PPC_FUNC_IMPL(__imp__sub_82553EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82553EB0"))) PPC_WEAK_FUNC(sub_82553EB0);
PPC_FUNC_IMPL(__imp__sub_82553EB0) {
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
	// lwz r11,-96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r10,29004
	ctx.r10.s64 = ctx.r10.s64 + 29004;
	// addi r9,r9,11076
	ctx.r9.s64 = ctx.r9.s64 + 11076;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r30,r3,-72
	ctx.r30.s64 = ctx.r3.s64 + -72;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,-96(r11)
	PPC_STORE_U32(ctx.r11.u32 + -96, ctx.r10.u32);
	// stw r9,-72(r31)
	PPC_STORE_U32(ctx.r31.u32 + -72, ctx.r9.u32);
	// bl 0x8224f958
	ctx.lr = 0x82553EF8;
	sub_8224F958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224f908
	ctx.lr = 0x82553F00;
	sub_8224F908(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r8,r10,10372
	ctx.r8.s64 = ctx.r10.s64 + 10372;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r9,r11,29000
	ctx.r9.s64 = ctx.r11.s64 + 29000;
	// addi r7,r10,-24
	ctx.r7.s64 = ctx.r10.s64 + -24;
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// lwz r10,-96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,-24(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24, ctx.r9.u32);
	// lwz r10,-80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -80);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// lwz r10,-96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82553F64"))) PPC_WEAK_FUNC(sub_82553F64);
PPC_FUNC_IMPL(__imp__sub_82553F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82553F68"))) PPC_WEAK_FUNC(sub_82553F68);
PPC_FUNC_IMPL(__imp__sub_82553F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82553F70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,-96
	ctx.r31.s64 = ctx.r3.s64 + -96;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82553eb0
	ctx.lr = 0x82553F88;
	sub_82553EB0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10356
	ctx.r11.s64 = ctx.r11.s64 + 10356;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82fa1370
	ctx.lr = 0x82553F9C;
	sub_82FA1370(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82553fac
	if (ctx.cr0.eq) goto loc_82553FAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82553FAC;
	sub_82691540(ctx, base);
loc_82553FAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553FB8"))) PPC_WEAK_FUNC(sub_82553FB8);
PPC_FUNC_IMPL(__imp__sub_82553FB8) {
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
	// addi r31,r3,-24
	ctx.r31.s64 = ctx.r3.s64 + -24;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r8,r10,29000
	ctx.r8.s64 = ctx.r10.s64 + 29000;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// addi r9,r9,10372
	ctx.r9.s64 = ctx.r9.s64 + 10372;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r7,r7,-24
	ctx.r7.s64 = ctx.r7.s64 + -24;
	// addi r6,r6,10356
	ctx.r6.s64 = ctx.r6.s64 + 10356;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r8,-24(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24, ctx.r8.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r9,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r7.u32);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// bl 0x82fa1370
	ctx.lr = 0x82554034;
	sub_82FA1370(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82554044
	if (ctx.cr0.eq) goto loc_82554044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82554044;
	sub_82691540(ctx, base);
loc_82554044:
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

__attribute__((alias("__imp__sub_82554060"))) PPC_WEAK_FUNC(sub_82554060);
PPC_FUNC_IMPL(__imp__sub_82554060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82554068;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,53(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 53);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r25,4(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8255413c
	if (!ctx.cr0.eq) goto loc_8255413C;
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r28,r4,12
	ctx.r28.s64 = ctx.r4.s64 + 12;
	// bl 0x82691500
	ctx.lr = 0x82554094;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82554148
	if (ctx.cr0.eq) goto loc_82554148;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// addic. r30,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r30.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stb r29,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r29.u8);
	// stb r29,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r29.u8);
	// beq 0x825540f8
	if (ctx.cr0.eq) goto loc_825540F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224d3e0
	ctx.lr = 0x825540D4;
	sub_8224D3E0(ctx, base);
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,32(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x822c2418
	ctx.lr = 0x825540F0;
	sub_822C2418(ctx, base);
	// lbz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 36);
	// stb r11,36(r30)
	PPC_STORE_U8(ctx.r30.u32 + 36, ctx.r11.u8);
loc_825540F8:
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// lbz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 52);
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// lbz r11,53(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 53);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82554114
	if (ctx.cr0.eq) goto loc_82554114;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82554114:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82554060
	ctx.lr = 0x82554124;
	sub_82554060(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x82554060
	ctx.lr = 0x82554138;
	sub_82554060(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_8255413C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82554148:
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
	ctx.lr = 0x82554164;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_82554164"))) PPC_WEAK_FUNC(sub_82554164);
PPC_FUNC_IMPL(__imp__sub_82554164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82554168"))) PPC_WEAK_FUNC(sub_82554168);
PPC_FUNC_IMPL(__imp__sub_82554168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82554170;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,73(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 73);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r25,4(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82554238
	if (!ctx.cr0.eq) goto loc_82554238;
	// li r3,76
	ctx.r3.s64 = 76;
	// addi r28,r4,12
	ctx.r28.s64 = ctx.r4.s64 + 12;
	// bl 0x82691500
	ctx.lr = 0x8255419C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82554244
	if (ctx.cr0.eq) goto loc_82554244;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r30,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r30.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// stb r11,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r11.u8);
	// beq 0x825541f4
	if (ctx.cr0.eq) goto loc_825541F4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r26,r28,28
	ctx.r26.s64 = ctx.r28.s64 + 28;
	// bl 0x8224d3e0
	ctx.lr = 0x825541E0;
	sub_8224D3E0(ctx, base);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8224d3e0
	ctx.lr = 0x825541EC;
	sub_8224D3E0(ctx, base);
	// lbz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// stb r11,56(r30)
	PPC_STORE_U8(ctx.r30.u32 + 56, ctx.r11.u8);
loc_825541F4:
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// lbz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 72);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// lbz r11,73(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82554210
	if (ctx.cr0.eq) goto loc_82554210;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82554210:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82554168
	ctx.lr = 0x82554220;
	sub_82554168(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x82554168
	ctx.lr = 0x82554234;
	sub_82554168(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82554238:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82554244:
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
	ctx.lr = 0x82554260;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_82554260"))) PPC_WEAK_FUNC(sub_82554260);
PPC_FUNC_IMPL(__imp__sub_82554260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82554268;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82691500
	ctx.lr = 0x82554284;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82554324
	if (ctx.cr0.eq) goto loc_82554324;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// addic. r29,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r29.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stb r28,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r28.u8);
	// stb r28,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r28.u8);
	// beq 0x82554304
	if (ctx.cr0.eq) goto loc_82554304;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bl 0x8224d3e0
	ctx.lr = 0x825542C8;
	sub_8224D3E0(ctx, base);
	// addi r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 + 28;
	// stw r28,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r28.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// stw r28,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r28.u32);
	// beq cr6,0x825542fc
	if (ctx.cr6.eq) goto loc_825542FC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_825542FC:
	// lbz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
loc_82554304:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82554340
	ctx.lr = 0x82554318;
	sub_82554340(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82554324:
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
	ctx.lr = 0x82554340;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_82554340"))) PPC_WEAK_FUNC(sub_82554340);
PPC_FUNC_IMPL(__imp__sub_82554340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82554348;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// addi r31,r6,12
	ctx.r31.s64 = ctx.r6.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82554390
	if (!ctx.cr6.eq) goto loc_82554390;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82554378:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8255437C:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82554388:
	// bl 0x82554710
	ctx.lr = 0x8255438C;
	sub_82554710(ctx, base);
	// b 0x825545ac
	goto loc_825545AC;
loc_82554390:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825543dc
	if (!ctx.cr6.eq) goto loc_825543DC;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// lwz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x825543b8
	if (ctx.cr6.lt) goto loc_825543B8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825543B8:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82656348
	ctx.lr = 0x825543CC;
	sub_82656348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82554590
	if (!ctx.cr0.lt) goto loc_82554590;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// b 0x82554378
	goto loc_82554378;
loc_825543DC:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255442c
	if (!ctx.cr6.eq) goto loc_8255442C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82554404
	if (ctx.cr6.lt) goto loc_82554404;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82554408
	goto loc_82554408;
loc_82554404:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82554408:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82656348
	ctx.lr = 0x82554414;
	sub_82656348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82554590
	if (!ctx.cr0.lt) goto loc_82554590;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8255437c
	goto loc_8255437C;
loc_8255442C:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
	// lwz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82554448
	if (ctx.cr6.lt) goto loc_82554448;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8255444c
	goto loc_8255444C;
loc_82554448:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_8255444C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82656348
	ctx.lr = 0x8255445C;
	sub_82656348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x825544dc
	if (!ctx.cr0.lt) goto loc_825544DC;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8289dbd0
	ctx.lr = 0x82554470;
	sub_8289DBD0(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blt cr6,0x82554490
	if (ctx.cr6.lt) goto loc_82554490;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82554494
	goto loc_82554494;
loc_82554490:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82554494:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82656348
	ctx.lr = 0x825544A0;
	sub_82656348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x825544dc
	if (!ctx.cr0.lt) goto loc_825544DC;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lbz r11,53(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825544d0
	if (ctx.cr0.eq) goto loc_825544D0;
loc_825544C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82554388
	goto loc_82554388;
loc_825544D0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_825544D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82554388
	goto loc_82554388;
loc_825544DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825544f4
	if (ctx.cr6.lt) goto loc_825544F4;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825544f8
	goto loc_825544F8;
loc_825544F4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_825544F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82656348
	ctx.lr = 0x82554508;
	sub_82656348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82554590
	if (!ctx.cr0.lt) goto loc_82554590;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8289db58
	ctx.lr = 0x8255451C;
	sub_8289DB58(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82554564
	if (ctx.cr6.eq) goto loc_82554564;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82554548
	if (ctx.cr6.lt) goto loc_82554548;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82554548:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82656348
	ctx.lr = 0x8255455C;
	sub_82656348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82554590
	if (!ctx.cr0.lt) goto loc_82554590;
loc_82554564:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r11,53(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82554588
	if (ctx.cr0.eq) goto loc_82554588;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// b 0x825544c8
	goto loc_825544C8;
loc_82554588:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x825544d4
	goto loc_825544D4;
loc_82554590:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825545b8
	ctx.lr = 0x825545A0;
	sub_825545B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_825545AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825545B8"))) PPC_WEAK_FUNC(sub_825545B8);
PPC_FUNC_IMPL(__imp__sub_825545B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x825545C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r28,r5,12
	ctx.r28.s64 = ctx.r5.s64 + 12;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// b 0x8255462c
	goto loc_8255462C;
loc_825545E8:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82554604
	if (ctx.cr6.lt) goto loc_82554604;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82554604:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82656348
	ctx.lr = 0x82554618;
	sub_82656348(ctx, base);
	// rlwinm. r27,r3,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82554628
	if (ctx.cr0.eq) goto loc_82554628;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8255462c
	goto loc_8255462C;
loc_82554628:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8255462C:
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825545e8
	if (ctx.cr0.eq) goto loc_825545E8;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// beq 0x8255468c
	if (ctx.cr0.eq) goto loc_8255468C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82554684
	if (!ctx.cr6.eq) goto loc_82554684;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82554660:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x82554710
	ctx.lr = 0x82554670;
	sub_82554710(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r24.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82554700
	goto loc_82554700;
loc_82554684:
	// bl 0x8289dbd0
	ctx.lr = 0x82554688;
	sub_8289DBD0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8255468C:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825546a8
	if (ctx.cr6.lt) goto loc_825546A8;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x825546ac
	goto loc_825546AC;
loc_825546A8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_825546AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82656348
	ctx.lr = 0x825546B8;
	sub_82656348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x825546cc
	if (!ctx.cr0.lt) goto loc_825546CC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82554660
	goto loc_82554660;
loc_825546CC:
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825546dc
	if (ctx.cr6.eq) goto loc_825546DC;
	// bl 0x82241d18
	ctx.lr = 0x825546DC;
	sub_82241D18(ctx, base);
loc_825546DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822402c8
	ctx.lr = 0x825546EC;
	sub_822402C8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82691540
	ctx.lr = 0x825546F4;
	sub_82691540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
loc_82554700:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255470C"))) PPC_WEAK_FUNC(sub_8255470C);
PPC_FUNC_IMPL(__imp__sub_8255470C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82554710"))) PPC_WEAK_FUNC(sub_82554710);
PPC_FUNC_IMPL(__imp__sub_82554710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82554718;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,1638
	ctx.r10.s64 = 107347968;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r10,r10,26213
	ctx.r10.u64 = ctx.r10.u64 | 26213;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82554774
	if (ctx.cr6.lt) goto loc_82554774;
	// lwz r3,44(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// addi r31,r7,12
	ctx.r31.s64 = ctx.r7.s64 + 12;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82554750
	if (ctx.cr6.eq) goto loc_82554750;
	// bl 0x82241d18
	ctx.lr = 0x82554750;
	sub_82241D18(ctx, base);
loc_82554750:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822402c8
	ctx.lr = 0x82554760;
	sub_822402C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82691540
	ctx.lr = 0x82554768;
	sub_82691540(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-26596
	ctx.r3.s64 = ctx.r11.s64 + -26596;
	// bl 0x82fa0648
	ctx.lr = 0x82554774;
	sub_82FA0648(ctx, base);
loc_82554774:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825547a0
	if (!ctx.cr6.eq) goto loc_825547A0;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x825547d8
	goto loc_825547D8;
loc_825547A0:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825547c4
	if (ctx.cr0.eq) goto loc_825547C4;
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825547dc
	if (!ctx.cr6.eq) goto loc_825547DC;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// b 0x825547dc
	goto loc_825547DC;
loc_825547C4:
	// stw r29,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825547dc
	if (!ctx.cr6.eq) goto loc_825547DC;
loc_825547D8:
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
loc_825547DC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// lbz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825548dc
	if (!ctx.cr0.eq) goto loc_825548DC;
	// li r27,0
	ctx.r27.s64 = 0;
loc_825547F8:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8255485c
	if (!ctx.cr6.eq) goto loc_8255485C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8255486c
	if (ctx.cr0.eq) goto loc_8255486C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82554834
	if (!ctx.cr6.eq) goto loc_82554834;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8289ee30
	ctx.lr = 0x82554834;
	sub_8289EE30(ctx, base);
loc_82554834:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r28,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82415f28
	ctx.lr = 0x82554858;
	sub_82415F28(ctx, base);
	// b 0x825548cc
	goto loc_825548CC;
loc_8255485C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82554890
	if (!ctx.cr0.eq) goto loc_82554890;
loc_8255486C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r28,52(r10)
	PPC_STORE_U8(ctx.r10.u32 + 52, ctx.r28.u8);
	// stb r28,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825548cc
	goto loc_825548CC;
loc_82554890:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825548a8
	if (!ctx.cr6.eq) goto loc_825548A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82415f28
	ctx.lr = 0x825548A8;
	sub_82415F28(ctx, base);
loc_825548A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r28,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8289ee30
	ctx.lr = 0x825548CC;
	sub_8289EE30(ctx, base);
loc_825548CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825547f8
	if (ctx.cr0.eq) goto loc_825547F8;
loc_825548DC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r28,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825548F8"))) PPC_WEAK_FUNC(sub_825548F8);
PPC_FUNC_IMPL(__imp__sub_825548F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r11,r11,29064
	ctx.r11.s64 = ctx.r11.s64 + 29064;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82554918"))) PPC_WEAK_FUNC(sub_82554918);
PPC_FUNC_IMPL(__imp__sub_82554918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,29064
	ctx.r11.s64 = ctx.r11.s64 + 29064;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82554928"))) PPC_WEAK_FUNC(sub_82554928);
PPC_FUNC_IMPL(__imp__sub_82554928) {
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
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r11,r11,-26288
	ctx.r11.s64 = ctx.r11.s64 + -26288;
	// addi r9,r9,-26204
	ctx.r9.s64 = ctx.r9.s64 + -26204;
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255496c
	if (ctx.cr6.eq) goto loc_8255496C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_8255496C:
	// bl 0x822627c0
	ctx.lr = 0x82554970;
	sub_822627C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828df4f0
	ctx.lr = 0x82554978;
	sub_828DF4F0(ctx, base);
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

__attribute__((alias("__imp__sub_8255498C"))) PPC_WEAK_FUNC(sub_8255498C);
PPC_FUNC_IMPL(__imp__sub_8255498C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82554990"))) PPC_WEAK_FUNC(sub_82554990);
PPC_FUNC_IMPL(__imp__sub_82554990) {
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
	// bl 0x828c11f8
	ctx.lr = 0x825549A8;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825549fc
	if (ctx.cr0.eq) goto loc_825549FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828dd8f0
	ctx.lr = 0x825549B8;
	sub_828DD8F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825549fc
	if (ctx.cr0.eq) goto loc_825549FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825549E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825549fc
	if (ctx.cr0.eq) goto loc_825549FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828ddaa8
	ctx.lr = 0x825549FC;
	sub_828DDAA8(ctx, base);
loc_825549FC:
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

__attribute__((alias("__imp__sub_82554A10"))) PPC_WEAK_FUNC(sub_82554A10);
PPC_FUNC_IMPL(__imp__sub_82554A10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828de378
	sub_828DE378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82554A14"))) PPC_WEAK_FUNC(sub_82554A14);
PPC_FUNC_IMPL(__imp__sub_82554A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82554A18"))) PPC_WEAK_FUNC(sub_82554A18);
PPC_FUNC_IMPL(__imp__sub_82554A18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828ddc30
	sub_828DDC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82554A1C"))) PPC_WEAK_FUNC(sub_82554A1C);
PPC_FUNC_IMPL(__imp__sub_82554A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82554A20"))) PPC_WEAK_FUNC(sub_82554A20);
PPC_FUNC_IMPL(__imp__sub_82554A20) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82554A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bne cr6,0x82554a50
	if (!ctx.cr6.eq) goto loc_82554A50;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,21120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// b 0x82554a54
	goto loc_82554A54;
loc_82554A50:
	// bl 0x829213a0
	ctx.lr = 0x82554A54;
	sub_829213A0(ctx, base);
loc_82554A54:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82554A6C"))) PPC_WEAK_FUNC(sub_82554A6C);
PPC_FUNC_IMPL(__imp__sub_82554A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82554A70"))) PPC_WEAK_FUNC(sub_82554A70);
PPC_FUNC_IMPL(__imp__sub_82554A70) {
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
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82691500
	ctx.lr = 0x82554A90;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82554aec
	if (ctx.cr0.eq) goto loc_82554AEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828df3c0
	ctx.lr = 0x82554AA4;
	sub_828DF3C0(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r7,r10,-26200
	ctx.r7.s64 = ctx.r10.s64 + -26200;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// addi r9,r9,-26288
	ctx.r9.s64 = ctx.r9.s64 + -26288;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// addi r8,r8,-26204
	ctx.r8.s64 = ctx.r8.s64 + -26204;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// b 0x82554af0
	goto loc_82554AF0;
loc_82554AEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82554AF0:
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

__attribute__((alias("__imp__sub_82554B08"))) PPC_WEAK_FUNC(sub_82554B08);
PPC_FUNC_IMPL(__imp__sub_82554B08) {
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
	// li r3,744
	ctx.r3.s64 = 744;
	// bl 0x82691500
	ctx.lr = 0x82554B28;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82554b50
	if (ctx.cr0.eq) goto loc_82554B50;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224d9f8
	ctx.lr = 0x82554B3C;
	sub_8224D9F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-31692
	ctx.r11.s64 = ctx.r11.s64 + -31692;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82554b54
	goto loc_82554B54;
loc_82554B50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82554B54:
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

__attribute__((alias("__imp__sub_82554B6C"))) PPC_WEAK_FUNC(sub_82554B6C);
PPC_FUNC_IMPL(__imp__sub_82554B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82554B70"))) PPC_WEAK_FUNC(sub_82554B70);
PPC_FUNC_IMPL(__imp__sub_82554B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82554B78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,776
	ctx.r3.s64 = 776;
	// bl 0x82691500
	ctx.lr = 0x82554B88;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// beq 0x82554bcc
	if (ctx.cr0.eq) goto loc_82554BCC;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// addic. r29,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r29.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq 0x82554bd0
	if (ctx.cr0.eq) goto loc_82554BD0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82252378
	ctx.lr = 0x82554BBC;
	sub_82252378(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-31676
	ctx.r11.s64 = ctx.r11.s64 + -31676;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82554bd0
	goto loc_82554BD0;
loc_82554BCC:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82554BD0:
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// beq cr6,0x82554c14
	if (ctx.cr6.eq) goto loc_82554C14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x82554BEC;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82554c0c
	if (ctx.cr0.eq) goto loc_82554C0C;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82554c04
	if (ctx.cr6.eq) goto loc_82554C04;
	// bl 0x82241d18
	ctx.lr = 0x82554C04;
	sub_82241D18(ctx, base);
loc_82554C04:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82554C0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241d18
	ctx.lr = 0x82554C14;
	sub_82241D18(ctx, base);
loc_82554C14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82554C20"))) PPC_WEAK_FUNC(sub_82554C20);
PPC_FUNC_IMPL(__imp__sub_82554C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82554C28;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82554de8
	if (ctx.cr6.eq) goto loc_82554DE8;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a75988
	ctx.lr = 0x82554C50;
	sub_82A75988(ctx, base);
	// li r11,66
	ctx.r11.s64 = 66;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a75988
	ctx.lr = 0x82554C74;
	sub_82A75988(ctx, base);
	// li r11,51
	ctx.r11.s64 = 51;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82563b08
	ctx.lr = 0x82554C8C;
	sub_82563B08(ctx, base);
	// lwz r30,224(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 224);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82554de8
	if (ctx.cr6.eq) goto loc_82554DE8;
	// addi r25,r27,4
	ctx.r25.s64 = ctx.r27.s64 + 4;
	// addi r24,r27,144
	ctx.r24.s64 = ctx.r27.s64 + 144;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82554CA8:
	// addi r31,r30,-48
	ctx.r31.s64 = ctx.r30.s64 + -48;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82554cb8
	if (ctx.cr6.eq) goto loc_82554CB8;
	// bl 0x82562de8
	ctx.lr = 0x82554CB8;
	sub_82562DE8(ctx, base);
loc_82554CB8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,2853(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2853, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82554CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,2853(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2853, ctx.r11.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82554cf4
	if (ctx.cr6.eq) goto loc_82554CF4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82554CF4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82554d08
	if (ctx.cr6.eq) goto loc_82554D08;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82554D08:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// bl 0x825553d0
	ctx.lr = 0x82554D18;
	sub_825553D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x825553d0
	ctx.lr = 0x82554D30;
	sub_825553D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82554D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,2232(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2232);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82554d6c
	if (!ctx.cr0.eq) goto loc_82554D6C;
	// lwz r11,2840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2840);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82554d7c
	if (ctx.cr0.eq) goto loc_82554D7C;
loc_82554D6C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82554db4
	if (!ctx.cr6.eq) goto loc_82554DB4;
	// b 0x82554dc4
	goto loc_82554DC4;
loc_82554D7C:
	// lwz r30,784(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 784);
	// lwz r29,788(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 788);
	// b 0x82554dac
	goto loc_82554DAC;
loc_82554D88:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82554da8
	if (ctx.cr6.eq) goto loc_82554DA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82554DA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82554DA8:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_82554DAC:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82554d88
	if (ctx.cr6.lt) goto loc_82554D88;
loc_82554DB4:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r28,120
	ctx.r3.s64 = ctx.r28.s64 + 120;
	// bl 0x825a9e98
	ctx.lr = 0x82554DC4;
	sub_825A9E98(ctx, base);
loc_82554DC4:
	// lwz r11,2840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2840);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82554ddc
	if (ctx.cr0.eq) goto loc_82554DDC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// bl 0x825b6018
	ctx.lr = 0x82554DDC;
	sub_825B6018(ctx, base);
loc_82554DDC:
	// lwz r30,224(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 224);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82554ca8
	if (!ctx.cr6.eq) goto loc_82554CA8;
loc_82554DE8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82554DF0"))) PPC_WEAK_FUNC(sub_82554DF0);
PPC_FUNC_IMPL(__imp__sub_82554DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82554DF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82554ea0
	if (ctx.cr6.eq) goto loc_82554EA0;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r29,148(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r11,69
	ctx.r11.s64 = 69;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// b 0x82554e54
	goto loc_82554E54;
loc_82554E2C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82554e50
	if (!ctx.cr6.eq) goto loc_82554E50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82554E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82554E50:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82554E54:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82554e2c
	if (ctx.cr6.lt) goto loc_82554E2C;
	// lhz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 160);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// ble cr6,0x82554ea0
	if (!ctx.cr6.gt) goto loc_82554EA0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82554ea0
	if (ctx.cr6.eq) goto loc_82554EA0;
	// lwz r31,504(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82554ea0
	if (ctx.cr6.eq) goto loc_82554EA0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82554E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dd6530
	ctx.lr = 0x82554EA0;
	sub_82DD6530(ctx, base);
loc_82554EA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82554EA8"))) PPC_WEAK_FUNC(sub_82554EA8);
PPC_FUNC_IMPL(__imp__sub_82554EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82554EB0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82554fb4
	if (ctx.cr6.eq) goto loc_82554FB4;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,16
	ctx.r29.s64 = 16;
	// addi r25,r11,27984
	ctx.r25.s64 = ctx.r11.s64 + 27984;
loc_82554ED4:
	// lwz r11,-8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// addi r30,r28,-64
	ctx.r30.s64 = ctx.r28.s64 + -64;
	// lwz r26,4(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82554f94
	if (!ctx.cr6.eq) goto loc_82554F94;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82554F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82554f94
	if (!ctx.cr6.eq) goto loc_82554F94;
	// lwz r11,2592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2592);
	// addi r31,r30,2368
	ctx.r31.s64 = ctx.r30.s64 + 2368;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82554f94
	if (!ctx.cr6.eq) goto loc_82554F94;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82576760
	ctx.lr = 0x82554F2C;
	sub_82576760(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// li r10,520
	ctx.r10.s64 = 520;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v11,v12,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvlx v0,r25,r10
	temp.u32 = ctx.r25.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vrlimi128 v11,v0,1,0
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 1));
	// vcmpbfp. v11,v11,v0
	_mm_store_ps(ctx.v11.f32, _mm_vcmpbfp(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v11.f32), 0xF);
	// bne cr6,0x82554f70
	if (!ctx.cr6.eq) goto loc_82554F70;
	// lvx128 v11,r31,r29
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// vsubfp v11,v13,v11
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// vrlimi128 v11,v0,1,0
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 1));
	// vcmpbfp. v0,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_vcmpbfp(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v0.f32), 0xF);
	// beq cr6,0x82554f94
	if (ctx.cr6.eq) goto loc_82554F94;
loc_82554F70:
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stvx128 v12,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r3,r11,1748
	ctx.r3.s64 = ctx.r11.s64 + 1748;
	// bl 0x8258fbf8
	ctx.lr = 0x82554F94;
	sub_8258FBF8(ctx, base);
loc_82554F94:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82554fa8
	if (ctx.cr6.eq) goto loc_82554FA8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82554ea8
	ctx.lr = 0x82554FA8;
	sub_82554EA8(ctx, base);
loc_82554FA8:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82554ed4
	if (!ctx.cr6.eq) goto loc_82554ED4;
loc_82554FB4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82554FBC"))) PPC_WEAK_FUNC(sub_82554FBC);
PPC_FUNC_IMPL(__imp__sub_82554FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82554FC0"))) PPC_WEAK_FUNC(sub_82554FC0);
PPC_FUNC_IMPL(__imp__sub_82554FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82554FC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,232(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82555098
	if (ctx.cr6.eq) goto loc_82555098;
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82563b08
	ctx.lr = 0x82554FEC;
	sub_82563B08(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82554FF0:
	// addi r30,r29,-56
	ctx.r30.s64 = ctx.r29.s64 + -56;
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,2892(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82555010
	if (!ctx.cr6.eq) goto loc_82555010;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825550a0
	ctx.lr = 0x82555010;
	sub_825550A0(ctx, base);
loc_82555010:
	// lwz r11,2892(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2892);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82555030
	if (ctx.cr6.eq) goto loc_82555030;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82555030
	if (!ctx.cr6.eq) goto loc_82555030;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2892(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2892, ctx.r11.u32);
	// b 0x82555084
	goto loc_82555084;
loc_82555030:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8255507c
	if (!ctx.cr6.eq) goto loc_8255507C;
	// lwz r11,2220(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2220);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255507c
	if (ctx.cr6.eq) goto loc_8255507C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r10,r10,47796
	ctx.r10.u64 = ctx.r10.u64 | 47796;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// bl 0x825f2718
	ctx.lr = 0x82555060;
	sub_825F2718(ctx, base);
loc_82555060:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82555060
	if (!ctx.cr6.eq) goto loc_82555060;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255507C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8255507C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8256a1e0
	ctx.lr = 0x82555084;
	sub_8256A1E0(ctx, base);
loc_82555084:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82555090
	if (ctx.cr6.eq) goto loc_82555090;
	// bl 0x82562de8
	ctx.lr = 0x82555090;
	sub_82562DE8(ctx, base);
loc_82555090:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82554ff0
	if (!ctx.cr6.eq) goto loc_82554FF0;
loc_82555098:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825550A0"))) PPC_WEAK_FUNC(sub_825550A0);
PPC_FUNC_IMPL(__imp__sub_825550A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x825550A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r28,r27,2044
	ctx.r28.s64 = ctx.r27.s64 + 2044;
	// bl 0x82a75988
	ctx.lr = 0x825550CC;
	sub_82A75988(ctx, base);
	// li r11,68
	ctx.r11.s64 = 68;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lwz r11,2840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2840);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82555128
	if (!ctx.cr0.eq) goto loc_82555128;
	// lwz r30,784(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 784);
	// lwz r29,788(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 788);
	// b 0x82555120
	goto loc_82555120;
loc_825550FC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8255511c
	if (ctx.cr6.eq) goto loc_8255511C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255511C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8255511C:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_82555120:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x825550fc
	if (ctx.cr6.lt) goto loc_825550FC;
loc_82555128:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,120
	ctx.r3.s64 = ctx.r27.s64 + 120;
	// bl 0x825a9e98
	ctx.lr = 0x82555138;
	sub_825A9E98(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,184(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 184);
	// bl 0x825b6018
	ctx.lr = 0x82555144;
	sub_825B6018(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255515C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r11,2853(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2853, ctx.r11.u8);
	// lbz r11,2852(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2852);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82555198
	if (ctx.cr0.eq) goto loc_82555198;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r31,2608
	ctx.r29.s64 = ctx.r31.s64 + 2608;
	// bl 0x8256d8d0
	ctx.lr = 0x8255517C;
	sub_8256D8D0(ctx, base);
	// li r30,9
	ctx.r30.s64 = 9;
loc_82555180:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825641d8
	ctx.lr = 0x8255518C;
	sub_825641D8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne 0x82555180
	if (!ctx.cr0.eq) goto loc_82555180;
loc_82555198:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r6,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f0,8072(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8072);
	ctx.f0.f64 = double(temp.f32);
loc_825551B4:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82555204
	if (!ctx.cr6.gt) goto loc_82555204;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_825551CC:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825551f0
	if (ctx.cr6.eq) goto loc_825551F0;
	// lwz r5,396(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825551f0
	if (!ctx.cr6.eq) goto loc_825551F0;
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r6,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r6.u32);
loc_825551F0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825551cc
	if (ctx.cr6.lt) goto loc_825551CC;
loc_82555204:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x825551b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825551B4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r10,21288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21288);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82555230
	if (ctx.cr6.eq) goto loc_82555230;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82555230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82555230:
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x825cc520
	ctx.lr = 0x82555238;
	sub_825CC520(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// b 0x82555258
	goto loc_82555258;
loc_82555248:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82555264
	if (ctx.cr6.eq) goto loc_82555264;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
loc_82555258:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82555248
	if (ctx.cr6.lt) goto loc_82555248;
	// b 0x82555268
	goto loc_82555268;
loc_82555264:
	// bl 0x825554a0
	ctx.lr = 0x82555268;
	sub_825554A0(ctx, base);
loc_82555268:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82555270"))) PPC_WEAK_FUNC(sub_82555270);
PPC_FUNC_IMPL(__imp__sub_82555270) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82555298
	if (!ctx.cr6.gt) goto loc_82555298;
	// lis r5,1
	ctx.r5.s64 = 65536;
loc_82555298:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// sth r4,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r4.u16);
	// bne cr6,0x825552c0
	if (!ctx.cr6.eq) goto loc_825552C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// sth r9,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r9.u16);
	// b 0x825552e4
	goto loc_825552E4;
loc_825552C0:
	// sth r5,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r5.u16);
	// mullw r30,r4,r5
	ctx.r30.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82547c40
	ctx.lr = 0x825552D0;
	sub_82547C40(ctx, base);
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_825552E4:
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82555300"))) PPC_WEAK_FUNC(sub_82555300);
PPC_FUNC_IMPL(__imp__sub_82555300) {
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
	// beq cr6,0x82555324
	if (ctx.cr6.eq) goto loc_82555324;
	// bl 0x82547d80
	ctx.lr = 0x82555324;
	sub_82547D80(ctx, base);
loc_82555324:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_8255534C"))) PPC_WEAK_FUNC(sub_8255534C);
PPC_FUNC_IMPL(__imp__sub_8255534C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82555350"))) PPC_WEAK_FUNC(sub_82555350);
PPC_FUNC_IMPL(__imp__sub_82555350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82555358;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// subf r27,r30,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// beq cr6,0x825553a8
	if (ctx.cr6.eq) goto loc_825553A8;
	// lis r28,-31957
	ctx.r28.s64 = -2094333952;
	// lwz r3,23064(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23064);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82555398
	if (!ctx.cr6.eq) goto loc_82555398;
	// bl 0x825476e8
	ctx.lr = 0x82555394;
	sub_825476E8(ctx, base);
	// lwz r3,23064(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23064);
loc_82555398:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82547a30
	ctx.lr = 0x825553A4;
	sub_82547A30(ctx, base);
	// b 0x825553b0
	goto loc_825553B0;
loc_825553A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82547c40
	ctx.lr = 0x825553B0;
	sub_82547C40(ctx, base);
loc_825553B0:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825553D0"))) PPC_WEAK_FUNC(sub_825553D0);
PPC_FUNC_IMPL(__imp__sub_825553D0) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825553fc
	if (!ctx.cr6.eq) goto loc_825553FC;
	// lhz r4,14(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// bl 0x82555350
	ctx.lr = 0x825553FC;
	sub_82555350(ctx, base);
loc_825553FC:
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sth r10,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r10.u16);
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

__attribute__((alias("__imp__sub_8255542C"))) PPC_WEAK_FUNC(sub_8255542C);
PPC_FUNC_IMPL(__imp__sub_8255542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82555430"))) PPC_WEAK_FUNC(sub_82555430);
PPC_FUNC_IMPL(__imp__sub_82555430) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82555468
	if (!ctx.cr6.lt) goto loc_82555468;
	// subf r5,r4,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r4.s64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x82555468;
	sub_82FA20F0(ctx, base);
loc_82555468:
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8255549C"))) PPC_WEAK_FUNC(sub_8255549C);
PPC_FUNC_IMPL(__imp__sub_8255549C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825554A0"))) PPC_WEAK_FUNC(sub_825554A0);
PPC_FUNC_IMPL(__imp__sub_825554A0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lhz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x825554d0
	if (!ctx.cr6.lt) goto loc_825554D0;
	// bl 0x82a75198
	ctx.lr = 0x825554D0;
	sub_82A75198(ctx, base);
loc_825554D0:
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82555504"))) PPC_WEAK_FUNC(sub_82555504);
PPC_FUNC_IMPL(__imp__sub_82555504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82555508"))) PPC_WEAK_FUNC(sub_82555508);
PPC_FUNC_IMPL(__imp__sub_82555508) {
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
	// lwz r11,136(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r4,2
	ctx.r3.s64 = ctx.r4.s64 + 2;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x8259be28
	ctx.lr = 0x82555534;
	sub_8259BE28(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// beq cr6,0x825555d0
	if (ctx.cr6.eq) goto loc_825555D0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82555578
	if (!ctx.cr6.eq) goto loc_82555578;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8255557c
	goto loc_8255557C;
loc_82555578:
	// bl 0x828c11f8
	ctx.lr = 0x8255557C;
	sub_828C11F8(ctx, base);
loc_8255557C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825555d0
	if (ctx.cr0.eq) goto loc_825555D0;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lbz r11,973(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 973);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825555d0
	if (ctx.cr0.eq) goto loc_825555D0;
	// lis r30,-31956
	ctx.r30.s64 = -2094268416;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r4,r30,5252
	ctx.r4.s64 = ctx.r30.s64 + 5252;
	// addi r3,r10,28992
	ctx.r3.s64 = ctx.r10.s64 + 28992;
	// lwz r11,5252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5252);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x82380ac0
	ctx.lr = 0x825555B8;
	sub_82380AC0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,5252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5252);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5252, ctx.r11.u32);
loc_825555D0:
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

__attribute__((alias("__imp__sub_825555EC"))) PPC_WEAK_FUNC(sub_825555EC);
PPC_FUNC_IMPL(__imp__sub_825555EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825555F0"))) PPC_WEAK_FUNC(sub_825555F0);
PPC_FUNC_IMPL(__imp__sub_825555F0) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255564c
	if (ctx.cr6.eq) goto loc_8255564C;
	// addi r31,r3,44
	ctx.r31.s64 = ctx.r3.s64 + 44;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,28992
	ctx.r3.s64 = ctx.r11.s64 + 28992;
	// bl 0x82380ac0
	ctx.lr = 0x82555628;
	sub_82380AC0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne 0x82555640
	if (!ctx.cr0.eq) goto loc_82555640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cba38
	ctx.lr = 0x82555640;
	sub_825CBA38(ctx, base);
loc_82555640:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8255564C:
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

__attribute__((alias("__imp__sub_82555664"))) PPC_WEAK_FUNC(sub_82555664);
PPC_FUNC_IMPL(__imp__sub_82555664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82555668"))) PPC_WEAK_FUNC(sub_82555668);
PPC_FUNC_IMPL(__imp__sub_82555668) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r31,r11,-28244
	ctx.r31.s64 = ctx.r11.s64 + -28244;
	// lwz r11,-28188(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28188);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825556b4
	if (!ctx.cr0.eq) goto loc_825556B4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-28188(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28188, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826a9610
	ctx.lr = 0x825556A8;
	sub_826A9610(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,24792
	ctx.r3.s64 = ctx.r11.s64 + 24792;
	// bl 0x82fa2318
	ctx.lr = 0x825556B4;
	sub_82FA2318(ctx, base);
loc_825556B4:
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

__attribute__((alias("__imp__sub_825556CC"))) PPC_WEAK_FUNC(sub_825556CC);
PPC_FUNC_IMPL(__imp__sub_825556CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825556D0"))) PPC_WEAK_FUNC(sub_825556D0);
PPC_FUNC_IMPL(__imp__sub_825556D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825556D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82555710
	goto loc_82555710;
loc_825556F4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82555708
	if (!ctx.cr6.lt) goto loc_82555708;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82555710
	goto loc_82555710;
loc_82555708:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82555710:
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825556f4
	if (ctx.cr0.eq) goto loc_825556F4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82555738
	if (ctx.cr6.eq) goto loc_82555738;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82555790
	if (!ctx.cr6.lt) goto loc_82555790;
loc_82555738:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828e35c0
	ctx.lr = 0x82555740;
	sub_828E35C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82fa77c0
	ctx.lr = 0x82555750;
	sub_82FA77C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826a9598
	ctx.lr = 0x82555758;
	sub_826A9598(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82555778
	if (ctx.cr0.eq) goto loc_82555778;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82fa77c0
	ctx.lr = 0x82555778;
	sub_82FA77C0(ctx, base);
loc_82555778:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82555d68
	ctx.lr = 0x8255578C;
	sub_82555D68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82555790:
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x825557A0;
	sub_82FA77C0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825557A8"))) PPC_WEAK_FUNC(sub_825557A8);
PPC_FUNC_IMPL(__imp__sub_825557A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825557B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82555814
	if (!ctx.cr6.eq) goto loc_82555814;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82555814
	if (!ctx.cr6.eq) goto loc_82555814;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82555be0
	ctx.lr = 0x825557E4;
	sub_82555BE0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82555820
	goto loc_82555820;
loc_825557F4:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82538730
	ctx.lr = 0x82555800;
	sub_82538730(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82555830
	ctx.lr = 0x82555810;
	sub_82555830(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_82555814:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825557f4
	if (!ctx.cr6.eq) goto loc_825557F4;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
loc_82555820:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255582C"))) PPC_WEAK_FUNC(sub_8255582C);
PPC_FUNC_IMPL(__imp__sub_8255582C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82555830"))) PPC_WEAK_FUNC(sub_82555830);
PPC_FUNC_IMPL(__imp__sub_82555830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82555838;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,45(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 45);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82555860
	if (ctx.cr0.eq) goto loc_82555860;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,32172
	ctx.r3.s64 = ctx.r11.s64 + 32172;
	// bl 0x82fa0680
	ctx.lr = 0x82555860;
	sub_82FA0680(ctx, base);
loc_82555860:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82538730
	ctx.lr = 0x8255586C;
	sub_82538730(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq 0x82555888
	if (ctx.cr0.eq) goto loc_82555888;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x825558ac
	goto loc_825558AC;
loc_82555888:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r10,45(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825558a0
	if (ctx.cr0.eq) goto loc_825558A0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x825558ac
	goto loc_825558AC;
loc_825558A0:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82555984
	if (!ctx.cr6.eq) goto loc_82555984;
loc_825558AC:
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825558c0
	if (!ctx.cr0.eq) goto loc_825558C0;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_825558C0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x825558d8
	if (!ctx.cr6.eq) goto loc_825558D8;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x825558f0
	goto loc_825558F0;
loc_825558D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x825558ec
	if (!ctx.cr6.eq) goto loc_825558EC;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x825558f0
	goto loc_825558F0;
loc_825558EC:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_825558F0:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82555938
	if (!ctx.cr6.eq) goto loc_82555938;
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82555914
	if (ctx.cr0.eq) goto loc_82555914;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82555934
	goto loc_82555934;
loc_82555914:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82555928
	goto loc_82555928;
loc_82555920:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82555928:
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82555920
	if (ctx.cr0.eq) goto loc_82555920;
loc_82555934:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82555938:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82555a18
	if (!ctx.cr6.eq) goto loc_82555A18;
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255595c
	if (ctx.cr0.eq) goto loc_8255595C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8255597c
	goto loc_8255597C;
loc_8255595C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82555970
	goto loc_82555970;
loc_82555968:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82555970:
	// lbz r8,45(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82555968
	if (ctx.cr0.eq) goto loc_82555968;
loc_8255597C:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82555a18
	goto loc_82555A18;
loc_82555984:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825559a4
	if (!ctx.cr6.eq) goto loc_825559A4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x825559cc
	goto loc_825559CC;
loc_825559A4:
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825559b8
	if (!ctx.cr0.eq) goto loc_825559B8;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_825559B8:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
loc_825559CC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x825559e4
	if (!ctx.cr6.eq) goto loc_825559E4;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82555a00
	goto loc_82555A00;
loc_825559E4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x825559fc
	if (!ctx.cr6.eq) goto loc_825559FC;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82555a00
	goto loc_82555A00;
loc_825559FC:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82555A00:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r11,44(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 44);
	// lbz r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 44);
	// stb r10,44(r25)
	PPC_STORE_U8(ctx.r25.u32 + 44, ctx.r10.u8);
	// stb r11,44(r26)
	PPC_STORE_U8(ctx.r26.u32 + 44, ctx.r11.u8);
loc_82555A18:
	// lbz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 44);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82555bb0
	if (!ctx.cr6.eq) goto loc_82555BB0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82555bac
	if (ctx.cr6.eq) goto loc_82555BAC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82555A3C:
	// lbz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82555bac
	if (!ctx.cr6.eq) goto loc_82555BAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82555af4
	if (!ctx.cr6.eq) goto loc_82555AF4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82555a7c
	if (!ctx.cr0.eq) goto loc_82555A7C;
	// stb r30,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82555c98
	ctx.lr = 0x82555A78;
	sub_82555C98(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82555A7C:
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82555b48
	if (!ctx.cr0.eq) goto loc_82555B48;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82555aa8
	if (!ctx.cr6.eq) goto loc_82555AA8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,44(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x82555b44
	if (ctx.cr6.eq) goto loc_82555B44;
loc_82555AA8:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,44(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82555ad0
	if (!ctx.cr6.eq) goto loc_82555AD0;
	// stb r30,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82555d00
	ctx.lr = 0x82555ACC;
	sub_82555D00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82555AD0:
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r30.u8);
	// bl 0x82555c98
	ctx.lr = 0x82555AF0;
	sub_82555C98(ctx, base);
	// b 0x82555bac
	goto loc_82555BAC;
loc_82555AF4:
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82555b18
	if (!ctx.cr0.eq) goto loc_82555B18;
	// stb r30,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82555d00
	ctx.lr = 0x82555B14;
	sub_82555D00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82555B18:
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82555b48
	if (!ctx.cr0.eq) goto loc_82555B48;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82555b64
	if (!ctx.cr6.eq) goto loc_82555B64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,44(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82555b64
	if (!ctx.cr6.eq) goto loc_82555B64;
loc_82555B44:
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
loc_82555B48:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82555a3c
	if (!ctx.cr6.eq) goto loc_82555A3C;
	// b 0x82555bac
	goto loc_82555BAC;
loc_82555B64:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,44(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82555b8c
	if (!ctx.cr6.eq) goto loc_82555B8C;
	// stb r30,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82555c98
	ctx.lr = 0x82555B88;
	sub_82555C98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82555B8C:
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r30.u8);
	// bl 0x82555d00
	ctx.lr = 0x82555BAC;
	sub_82555D00(ctx, base);
loc_82555BAC:
	// stb r30,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r30.u8);
loc_82555BB0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82691540
	ctx.lr = 0x82555BB8;
	sub_82691540(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82555bcc
	if (ctx.cr6.eq) goto loc_82555BCC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82555BCC:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82555BDC"))) PPC_WEAK_FUNC(sub_82555BDC);
PPC_FUNC_IMPL(__imp__sub_82555BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82555BE0"))) PPC_WEAK_FUNC(sub_82555BE0);
PPC_FUNC_IMPL(__imp__sub_82555BE0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82555c38
	ctx.lr = 0x82555C00;
	sub_82555C38(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82555C34"))) PPC_WEAK_FUNC(sub_82555C34);
PPC_FUNC_IMPL(__imp__sub_82555C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82555C38"))) PPC_WEAK_FUNC(sub_82555C38);
PPC_FUNC_IMPL(__imp__sub_82555C38) {
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
	// b 0x82555c70
	goto loc_82555C70;
loc_82555C58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82555c38
	ctx.lr = 0x82555C64;
	sub_82555C38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82691540
	ctx.lr = 0x82555C70;
	sub_82691540(ctx, base);
loc_82555C70:
	// lbz r11,45(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82555c58
	if (ctx.cr0.eq) goto loc_82555C58;
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

__attribute__((alias("__imp__sub_82555C94"))) PPC_WEAK_FUNC(sub_82555C94);
PPC_FUNC_IMPL(__imp__sub_82555C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82555C98"))) PPC_WEAK_FUNC(sub_82555C98);
PPC_FUNC_IMPL(__imp__sub_82555C98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,45(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82555cb8
	if (!ctx.cr0.eq) goto loc_82555CB8;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82555CB8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82555cd8
	if (!ctx.cr6.eq) goto loc_82555CD8;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82555cf4
	goto loc_82555CF4;
loc_82555CD8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82555cf0
	if (!ctx.cr6.eq) goto loc_82555CF0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82555cf4
	goto loc_82555CF4;
loc_82555CF0:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82555CF4:
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82555D00"))) PPC_WEAK_FUNC(sub_82555D00);
PPC_FUNC_IMPL(__imp__sub_82555D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,45(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82555d20
	if (!ctx.cr0.eq) goto loc_82555D20;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82555D20:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82555d40
	if (!ctx.cr6.eq) goto loc_82555D40;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82555d5c
	goto loc_82555D5C;
loc_82555D40:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82555d58
	if (!ctx.cr6.eq) goto loc_82555D58;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82555d5c
	goto loc_82555D5C;
loc_82555D58:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82555D5C:
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82555D68"))) PPC_WEAK_FUNC(sub_82555D68);
PPC_FUNC_IMPL(__imp__sub_82555D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82555D70;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82555dac
	if (!ctx.cr6.eq) goto loc_82555DAC;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82555D94:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82555D98:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82555DA4:
	// bl 0x82555fe8
	ctx.lr = 0x82555DA8;
	sub_82555FE8(ctx, base);
	// b 0x82555ec4
	goto loc_82555EC4;
loc_82555DAC:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82555dd4
	if (!ctx.cr6.eq) goto loc_82555DD4;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82555ea4
	if (!ctx.cr6.lt) goto loc_82555EA4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x82555d94
	goto loc_82555D94;
loc_82555DD4:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82555df8
	if (!ctx.cr6.eq) goto loc_82555DF8;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82555ea4
	if (!ctx.cr6.lt) goto loc_82555EA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82555d98
	goto loc_82555D98;
loc_82555DF8:
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r26,12(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x82555e58
	if (!ctx.cr6.gt) goto loc_82555E58;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825561b0
	ctx.lr = 0x82555E14;
	sub_825561B0(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82555e54
	if (!ctx.cr6.lt) goto loc_82555E54;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,45(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82555e48
	if (ctx.cr0.eq) goto loc_82555E48;
loc_82555E40:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82555da4
	goto loc_82555DA4;
loc_82555E48:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82555E4C:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82555da4
	goto loc_82555DA4;
loc_82555E54:
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
loc_82555E58:
	// bge cr6,0x82555ea4
	if (!ctx.cr6.lt) goto loc_82555EA4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82538730
	ctx.lr = 0x82555E68;
	sub_82538730(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82555e80
	if (ctx.cr6.eq) goto loc_82555E80;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82555ea4
	if (!ctx.cr6.lt) goto loc_82555EA4;
loc_82555E80:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,45(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82555e4c
	if (ctx.cr0.eq) goto loc_82555E4C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x82555e40
	goto loc_82555E40;
loc_82555EA4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82555ed0
	ctx.lr = 0x82555EB8;
	sub_82555ED0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82555EC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82555ED0"))) PPC_WEAK_FUNC(sub_82555ED0);
PPC_FUNC_IMPL(__imp__sub_82555ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82555ED8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82555f58
	if (!ctx.cr0.eq) goto loc_82555F58;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
loc_82555F0C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82555f2c
	if (ctx.cr6.eq) goto loc_82555F2C;
	// li r7,-1
	ctx.r7.s64 = -1;
	// subfc r10,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r29,r7
	temp.u64 = ~ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r29.u64 = temp.u64;
	// b 0x82555f38
	goto loc_82555F38;
loc_82555F2C:
	// subfc r10,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r29,r10,31
	ctx.r29.u64 = ctx.r10.u32 & 0x1;
loc_82555F38:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82555f48
	if (ctx.cr0.eq) goto loc_82555F48;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82555f4c
	goto loc_82555F4C;
loc_82555F48:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82555F4C:
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82555f0c
	if (ctx.cr0.eq) goto loc_82555F0C;
loc_82555F58:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// beq 0x82555fac
	if (ctx.cr0.eq) goto loc_82555FAC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82555fa4
	if (!ctx.cr6.eq) goto loc_82555FA4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82555F80:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x82555fe8
	ctx.lr = 0x82555F90;
	sub_82555FE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r25.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82555fdc
	goto loc_82555FDC;
loc_82555FA4:
	// bl 0x825561b0
	ctx.lr = 0x82555FA8;
	sub_825561B0(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82555FAC:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82555fc8
	if (!ctx.cr6.lt) goto loc_82555FC8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82555f80
	goto loc_82555F80;
loc_82555FC8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82691540
	ctx.lr = 0x82555FD0;
	sub_82691540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_82555FDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82555FE8"))) PPC_WEAK_FUNC(sub_82555FE8);
PPC_FUNC_IMPL(__imp__sub_82555FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82555FF0;
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
	// blt cr6,0x82556028
	if (ctx.cr6.lt) goto loc_82556028;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82691540
	ctx.lr = 0x8255601C;
	sub_82691540(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-26596
	ctx.r3.s64 = ctx.r11.s64 + -26596;
	// bl 0x82fa0648
	ctx.lr = 0x82556028;
	sub_82FA0648(ctx, base);
loc_82556028:
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
	// bne cr6,0x82556054
	if (!ctx.cr6.eq) goto loc_82556054;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8255608c
	goto loc_8255608C;
loc_82556054:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82556078
	if (ctx.cr0.eq) goto loc_82556078;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82556090
	if (!ctx.cr6.eq) goto loc_82556090;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// b 0x82556090
	goto loc_82556090;
loc_82556078:
	// stw r28,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82556090
	if (!ctx.cr6.eq) goto loc_82556090;
loc_8255608C:
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_82556090:
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
	// bne 0x82556190
	if (!ctx.cr0.eq) goto loc_82556190;
	// li r27,0
	ctx.r27.s64 = 0;
loc_825560AC:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82556110
	if (!ctx.cr6.eq) goto loc_82556110;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82556120
	if (ctx.cr0.eq) goto loc_82556120;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825560e8
	if (!ctx.cr6.eq) goto loc_825560E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82555c98
	ctx.lr = 0x825560E8;
	sub_82555C98(ctx, base);
loc_825560E8:
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
	ctx.lr = 0x8255610C;
	sub_82555D00(ctx, base);
	// b 0x82556180
	goto loc_82556180;
loc_82556110:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82556144
	if (!ctx.cr0.eq) goto loc_82556144;
loc_82556120:
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
	// b 0x82556180
	goto loc_82556180;
loc_82556144:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255615c
	if (!ctx.cr6.eq) goto loc_8255615C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82555d00
	ctx.lr = 0x8255615C;
	sub_82555D00(ctx, base);
loc_8255615C:
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
	ctx.lr = 0x82556180;
	sub_82555C98(ctx, base);
loc_82556180:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825560ac
	if (ctx.cr0.eq) goto loc_825560AC;
loc_82556190:
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

__attribute__((alias("__imp__sub_825561AC"))) PPC_WEAK_FUNC(sub_825561AC);
PPC_FUNC_IMPL(__imp__sub_825561AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825561B0"))) PPC_WEAK_FUNC(sub_825561B0);
PPC_FUNC_IMPL(__imp__sub_825561B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825561c8
	if (ctx.cr0.eq) goto loc_825561C8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82556234
	goto loc_82556234;
loc_825561C8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,45(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82556214
	if (!ctx.cr0.eq) goto loc_82556214;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x825561e8
	goto loc_825561E8;
loc_825561E0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_825561E8:
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825561e0
	if (ctx.cr0.eq) goto loc_825561E0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_825561FC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82556224
	if (!ctx.cr6.eq) goto loc_82556224;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82556214:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825561fc
	if (ctx.cr0.eq) goto loc_825561FC;
loc_82556224:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,45(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82556234:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255623C"))) PPC_WEAK_FUNC(sub_8255623C);
PPC_FUNC_IMPL(__imp__sub_8255623C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556240"))) PPC_WEAK_FUNC(sub_82556240);
PPC_FUNC_IMPL(__imp__sub_82556240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,25
	ctx.r9.s64 = 1638400;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// ori r9,r9,26125
	ctx.r9.u64 = ctx.r9.u64 | 26125;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// addis r11,r10,15471
	ctx.r11.s64 = ctx.r10.s64 + 1013907456;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// clrlwi r9,r11,9
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// oris r11,r9,16256
	ctx.r11.u64 = ctx.r9.u64 | 1065353216;
	// lfs f0,-24756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f11,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825562B8"))) PPC_WEAK_FUNC(sub_825562B8);
PPC_FUNC_IMPL(__imp__sub_825562B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8255634c
	if (ctx.cr6.lt) goto loc_8255634C;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8255634c
	if (!ctx.cr6.lt) goto loc_8255634C;
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r9,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r4.s64;
	// ori r11,r11,26125
	ctx.r11.u64 = ctx.r11.u64 | 26125;
	// rlwinm r9,r4,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// addme r10,r9
	temp.u64 = ctx.r9.u64 + ctx.xer.ca - 1;
	ctx.xer.ca = (ctx.r9.u64 > temp.u64) || (ctx.r9.u64 == temp.u64 && ctx.xer.ca);
	ctx.r10.u64 = temp.u64;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// clrlwi r9,r11,9
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// and r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 & ctx.r4.u64;
	// oris r10,r9,16256
	ctx.r10.u64 = ctx.r9.u64 | 1065353216;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f0,-24756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// divw r9,r10,r11
	ctx.r9.s32 = ctx.r10.s32 / ctx.r11.s32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
loc_8255634C:
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// ori r11,r11,26125
	ctx.r11.u64 = ctx.r11.u64 | 26125;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// clrlwi r9,r11,9
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// oris r11,r9,16256
	ctx.r11.u64 = ctx.r9.u64 | 1065353216;
	// lfs f0,-24756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825563AC"))) PPC_WEAK_FUNC(sub_825563AC);
PPC_FUNC_IMPL(__imp__sub_825563AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825563B0"))) PPC_WEAK_FUNC(sub_825563B0);
PPC_FUNC_IMPL(__imp__sub_825563B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// fsubs f13,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// ori r11,r11,26125
	ctx.r11.u64 = ctx.r11.u64 | 26125;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lfs f0,-24756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// clrlwi r10,r11,9
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// oris r11,r10,16256
	ctx.r11.u64 = ctx.r10.u64 | 1065353216;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmadds f1,f13,f0,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825563F4"))) PPC_WEAK_FUNC(sub_825563F4);
PPC_FUNC_IMPL(__imp__sub_825563F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825563F8"))) PPC_WEAK_FUNC(sub_825563F8);
PPC_FUNC_IMPL(__imp__sub_825563F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// ori r11,r11,26125
	ctx.r11.u64 = ctx.r11.u64 | 26125;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lfs f0,-24756(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// clrlwi r10,r11,9
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// oris r11,r10,16256
	ctx.r11.u64 = ctx.r10.u64 | 1065353216;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82556444"))) PPC_WEAK_FUNC(sub_82556444);
PPC_FUNC_IMPL(__imp__sub_82556444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556448"))) PPC_WEAK_FUNC(sub_82556448);
PPC_FUNC_IMPL(__imp__sub_82556448) {
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
	// lwz r11,-28392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28392);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255647c
	if (!ctx.cr0.eq) goto loc_8255647C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-28392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28392, ctx.r11.u32);
	// bl 0x82556498
	ctx.lr = 0x82556470;
	sub_82556498(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,24864
	ctx.r3.s64 = ctx.r11.s64 + 24864;
	// bl 0x82fa2318
	ctx.lr = 0x8255647C;
	sub_82FA2318(ctx, base);
loc_8255647C:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,-28416
	ctx.r3.s64 = ctx.r11.s64 + -28416;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82556494"))) PPC_WEAK_FUNC(sub_82556494);
PPC_FUNC_IMPL(__imp__sub_82556494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556498"))) PPC_WEAK_FUNC(sub_82556498);
PPC_FUNC_IMPL(__imp__sub_82556498) {
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
	// addi r31,r10,-28416
	ctx.r31.s64 = ctx.r10.s64 + -28416;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-22536
	ctx.r11.s64 = ctx.r11.s64 + -22536;
	// addi r10,r10,29076
	ctx.r10.s64 = ctx.r10.s64 + 29076;
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
	ctx.lr = 0x825564D8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82556524
	if (ctx.cr0.eq) goto loc_82556524;
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
loc_82556524:
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
	ctx.lr = 0x82556540;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_82556540"))) PPC_WEAK_FUNC(sub_82556540);
PPC_FUNC_IMPL(__imp__sub_82556540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82556548;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,29092
	ctx.r11.s64 = ctx.r11.s64 + 29092;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x822400d8
	ctx.lr = 0x82556574;
	sub_822400D8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r29,r11,160
	ctx.r29.s64 = ctx.r11.s64 + 160;
	// lwz r30,160(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82691500
	ctx.lr = 0x8255658C;
	sub_82691500(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825565ec
	if (ctx.cr0.eq) goto loc_825565EC;
	// addic. r10,r11,8
	ctx.xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r10.s64 = ctx.r11.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// beq 0x825565a8
	if (ctx.cr0.eq) goto loc_825565A8;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
loc_825565A8:
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// ori r9,r9,65534
	ctx.r9.u64 = ctx.r9.u64 | 65534;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bge cr6,0x825565cc
	if (!ctx.cr6.lt) goto loc_825565CC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-17244
	ctx.r3.s64 = ctx.r11.s64 + -17244;
	// bl 0x82fa0648
	ctx.lr = 0x825565CC;
	sub_82FA0648(ctx, base);
loc_825565CC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_825565EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x82556604;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_82556604"))) PPC_WEAK_FUNC(sub_82556604);
PPC_FUNC_IMPL(__imp__sub_82556604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556608"))) PPC_WEAK_FUNC(sub_82556608);
PPC_FUNC_IMPL(__imp__sub_82556608) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,29092
	ctx.r11.s64 = ctx.r11.s64 + 29092;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x822402c8
	ctx.lr = 0x82556640;
	sub_822402C8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82556650
	if (ctx.cr0.eq) goto loc_82556650;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82556650;
	sub_82691540(ctx, base);
loc_82556650:
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

__attribute__((alias("__imp__sub_8255666C"))) PPC_WEAK_FUNC(sub_8255666C);
PPC_FUNC_IMPL(__imp__sub_8255666C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556670"))) PPC_WEAK_FUNC(sub_82556670);
PPC_FUNC_IMPL(__imp__sub_82556670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825566a8
	if (ctx.cr6.lt) goto loc_825566A8;
	// beq cr6,0x825566a0
	if (ctx.cr6.eq) goto loc_825566A0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_825566A0:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x825566ac
	goto loc_825566AC;
loc_825566A8:
	// li r11,4
	ctx.r11.s64 = 4;
loc_825566AC:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825566B4"))) PPC_WEAK_FUNC(sub_825566B4);
PPC_FUNC_IMPL(__imp__sub_825566B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825566B8"))) PPC_WEAK_FUNC(sub_825566B8);
PPC_FUNC_IMPL(__imp__sub_825566B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825566C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825567ac
	if (ctx.cr0.eq) goto loc_825567AC;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r29,r3,88
	ctx.r29.s64 = ctx.r3.s64 + 88;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825567f8
	if (!ctx.cr6.eq) goto loc_825567F8;
	// lis r31,-31955
	ctx.r31.s64 = -2094202880;
	// lwz r11,31080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82556700
	if (ctx.cr6.eq) goto loc_82556700;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82556708
	goto loc_82556708;
loc_82556700:
	// bl 0x8254abe0
	ctx.lr = 0x82556704;
	sub_8254ABE0(ctx, base);
	// lwz r11,31080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
loc_82556708:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825567f8
	if (!ctx.cr6.eq) goto loc_825567F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82556724
	if (!ctx.cr6.eq) goto loc_82556724;
	// bl 0x8254abe0
	ctx.lr = 0x82556720;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82556724:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254bff8
	ctx.lr = 0x82556734;
	sub_8254BFF8(ctx, base);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82556758
	if (ctx.cr6.eq) goto loc_82556758;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
loc_82556758:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82556770
	if (ctx.cr6.eq) goto loc_82556770;
	// bl 0x82241d18
	ctx.lr = 0x82556770;
	sub_82241D18(ctx, base);
loc_82556770:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82556780
	if (ctx.cr6.eq) goto loc_82556780;
	// bl 0x82241d18
	ctx.lr = 0x82556780;
	sub_82241D18(ctx, base);
loc_82556780:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825567a8
	if (ctx.cr6.eq) goto loc_825567A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r31,3400(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3400);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823f62d0
	ctx.lr = 0x8255679C;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597158
	ctx.lr = 0x825567A8;
	sub_82597158(ctx, base);
loc_825567A8:
	// stb r28,84(r30)
	PPC_STORE_U8(ctx.r30.u32 + 84, ctx.r28.u8);
loc_825567AC:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82556914
	if (ctx.cr6.eq) goto loc_82556914;
	// lbz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82556914
	if (ctx.cr0.eq) goto loc_82556914;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5910
	ctx.lr = 0x825567D0;
	sub_828F5910(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82556864
	if (ctx.cr6.eq) goto loc_82556864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828e3b00
	ctx.lr = 0x825567E4;
	sub_828E3B00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82556800
	if (!ctx.cr0.eq) goto loc_82556800;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828e4c10
	ctx.lr = 0x825567F8;
	sub_828E4C10(ctx, base);
loc_825567F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255691c
	goto loc_8255691C;
loc_82556800:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82556814
	if (ctx.cr6.eq) goto loc_82556814;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f5918
	ctx.lr = 0x82556814;
	sub_828F5918(ctx, base);
loc_82556814:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82556858
	if (ctx.cr6.eq) goto loc_82556858;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8255683c
	if (ctx.cr6.eq) goto loc_8255683C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825567f8
	if (!ctx.cr6.eq) goto loc_825567F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f85b8
	ctx.lr = 0x82556838;
	sub_828F85B8(ctx, base);
	// b 0x825567f8
	goto loc_825567F8;
loc_8255683C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f0b28
	ctx.lr = 0x82556844;
	sub_828F0B28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825567f8
	if (ctx.cr0.eq) goto loc_825567F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f0bc0
	ctx.lr = 0x82556854;
	sub_828F0BC0(ctx, base);
	// b 0x825567f8
	goto loc_825567F8;
loc_82556858:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828f0ed8
	ctx.lr = 0x82556860;
	sub_828F0ED8(ctx, base);
	// b 0x825567f8
	goto loc_825567F8;
loc_82556864:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lbz r10,77(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 77);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x825568b8
	if (!ctx.cr0.eq) goto loc_825568B8;
	// lbz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x825568a8
	if (ctx.cr0.eq) goto loc_825568A8;
	// bctrl 
	ctx.lr = 0x82556898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82552700
	ctx.lr = 0x825568A4;
	sub_82552700(ctx, base);
	// b 0x825568ac
	goto loc_825568AC;
loc_825568A8:
	// bctrl 
	ctx.lr = 0x825568AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825568AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,77(r30)
	PPC_STORE_U8(ctx.r30.u32 + 77, ctx.r11.u8);
	// b 0x825567f8
	goto loc_825567F8;
loc_825568B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825568C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825567f8
	if (!ctx.cr0.eq) goto loc_825567F8;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82556908
	if (!ctx.cr6.eq) goto loc_82556908;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82552cb8
	ctx.lr = 0x825568EC;
	sub_82552CB8(ctx, base);
	// stw r31,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r31.u32);
	// stb r28,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r28.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x82556904;
	sub_822402C8(ctx, base);
	// b 0x82556918
	goto loc_82556918;
loc_82556908:
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r28,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r28.u8);
	// b 0x8255691c
	goto loc_8255691C;
loc_82556914:
	// stw r28,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r28.u32);
loc_82556918:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255691C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82556924"))) PPC_WEAK_FUNC(sub_82556924);
PPC_FUNC_IMPL(__imp__sub_82556924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556928"))) PPC_WEAK_FUNC(sub_82556928);
PPC_FUNC_IMPL(__imp__sub_82556928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82556930;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,88
	ctx.r31.s64 = ctx.r3.s64 + 88;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825569a8
	if (ctx.cr6.eq) goto loc_825569A8;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82556968
	if (ctx.cr6.eq) goto loc_82556968;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,3400(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3400);
	// bl 0x82597208
	ctx.lr = 0x82556964;
	sub_82597208(ctx, base);
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
loc_82556968:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,31080(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82556984
	if (!ctx.cr6.eq) goto loc_82556984;
	// bl 0x8254abe0
	ctx.lr = 0x82556984;
	sub_8254ABE0(ctx, base);
loc_82556984:
	// li r5,29
	ctx.r5.s64 = 29;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8254c5f0
	ctx.lr = 0x82556990;
	sub_8254C5F0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825569a8
	if (ctx.cr6.eq) goto loc_825569A8;
	// bl 0x82241d18
	ctx.lr = 0x825569A8;
	sub_82241D18(ctx, base);
loc_825569A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825569B0"))) PPC_WEAK_FUNC(sub_825569B0);
PPC_FUNC_IMPL(__imp__sub_825569B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825569B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825569e8
	if (ctx.cr6.eq) goto loc_825569E8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x829204e8
	ctx.lr = 0x825569E8;
	sub_829204E8(ctx, base);
loc_825569E8:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a74db8
	ctx.lr = 0x82556A00;
	sub_82A74DB8(ctx, base);
	// addi r11,r3,-5
	ctx.r11.s64 = ctx.r3.s64 + -5;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82556A14"))) PPC_WEAK_FUNC(sub_82556A14);
PPC_FUNC_IMPL(__imp__sub_82556A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556A18"))) PPC_WEAK_FUNC(sub_82556A18);
PPC_FUNC_IMPL(__imp__sub_82556A18) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r31,r11,21296
	ctx.r31.s64 = ctx.r11.s64 + 21296;
	// lwz r11,21296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21296);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82556b24
	if (ctx.cr6.eq) goto loc_82556B24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82556ae8
	if (ctx.cr6.eq) goto loc_82556AE8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82556aa8
	if (ctx.cr6.eq) goto loc_82556AA8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82556a94
	if (ctx.cr6.eq) goto loc_82556A94;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82556b6c
	if (!ctx.cr6.eq) goto loc_82556B6C;
	// lwz r3,1664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// bl 0x829204e8
	ctx.lr = 0x82556A68;
	sub_829204E8(ctx, base);
	// lwz r6,1680(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// ld r5,1672(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1672);
	// lwz r4,1668(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// bl 0x82a74da8
	ctx.lr = 0x82556A78;
	sub_82A74DA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82556b68
	if (!ctx.cr0.eq) goto loc_82556B68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82556b6c
	if (ctx.cr6.eq) goto loc_82556B6C;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x82556b64
	goto loc_82556B64;
loc_82556A94:
	// lwz r10,1608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmplwi cr6,r10,997
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 997, ctx.xer);
loc_82556A9C:
	// beq cr6,0x82556b6c
	if (ctx.cr6.eq) goto loc_82556B6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82556b64
	goto loc_82556B64;
loc_82556AA8:
	// lwz r11,1660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// addi r8,r31,1608
	ctx.r8.s64 = ctx.r31.s64 + 1608;
	// lwz r7,1656(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// ld r6,1648(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1648);
	// lwz r5,1644(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// lwz r4,1640(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// lwz r3,1636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82556ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82556b68
	if (ctx.cr0.eq) goto loc_82556B68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82556b6c
	if (ctx.cr6.eq) goto loc_82556B6C;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x82556b64
	goto loc_82556B64;
loc_82556AE8:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,997
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 997, ctx.xer);
	// beq cr6,0x82556b6c
	if (ctx.cr6.eq) goto loc_82556B6C;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r30,1604(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// bl 0x82a74d28
	ctx.lr = 0x82556B00;
	sub_82A74D28(ctx, base);
	// lwz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82556B18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82556a9c
	goto loc_82556A9C;
loc_82556B24:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x829204e8
	ctx.lr = 0x82556B2C;
	sub_829204E8(ctx, base);
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// lwz r9,1596(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// addi r7,r31,1080
	ctx.r7.s64 = ctx.r31.s64 + 1080;
	// lwz r8,1592(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// addi r6,r31,568
	ctx.r6.s64 = ctx.r31.s64 + 568;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// bl 0x82a74d98
	ctx.lr = 0x82556B4C;
	sub_82A74D98(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82556b68
	if (ctx.cr6.eq) goto loc_82556B68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82556b6c
	if (ctx.cr6.eq) goto loc_82556B6C;
	// li r3,3
	ctx.r3.s64 = 3;
loc_82556B64:
	// bl 0x82556c70
	ctx.lr = 0x82556B68;
	sub_82556C70(ctx, base);
loc_82556B68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82556B6C:
	// lbz r10,1688(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1688);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82556bdc
	if (ctx.cr0.eq) goto loc_82556BDC;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lfs f13,1692(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r10,23112
	ctx.r11.s64 = ctx.r10.s64 + 23112;
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,1692(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1692, temp.u32);
	// beq cr6,0x82556c00
	if (ctx.cr6.eq) goto loc_82556C00;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82556c00
	if (!ctx.cr6.eq) goto loc_82556C00;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfs f13,616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82556bc8
	if (!ctx.cr6.gt) goto loc_82556BC8;
	// lwz r11,1700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r11.u32);
	// b 0x82556bd4
	goto loc_82556BD4;
loc_82556BC8:
	// lwz r11,1696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r11.u32);
loc_82556BD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82556bfc
	goto loc_82556BFC;
loc_82556BDC:
	// beq cr6,0x82556bec
	if (ctx.cr6.eq) goto loc_82556BEC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82556c00
	if (ctx.cr6.eq) goto loc_82556C00;
loc_82556BEC:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1692(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1692, temp.u32);
loc_82556BFC:
	// stb r11,1688(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1688, ctx.r11.u8);
loc_82556C00:
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

__attribute__((alias("__imp__sub_82556C18"))) PPC_WEAK_FUNC(sub_82556C18);
PPC_FUNC_IMPL(__imp__sub_82556C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,21296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21296);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82556c58
	if (ctx.cr6.lt) goto loc_82556C58;
	// beq cr6,0x82556c48
	if (ctx.cr6.eq) goto loc_82556C48;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82556c70
	sub_82556C70(ctx, base);
	return;
loc_82556C48:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82556c70
	sub_82556C70(ctx, base);
	return;
loc_82556C58:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82556c70
	sub_82556C70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82556C68"))) PPC_WEAK_FUNC(sub_82556C68);
PPC_FUNC_IMPL(__imp__sub_82556C68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82556C6C"))) PPC_WEAK_FUNC(sub_82556C6C);
PPC_FUNC_IMPL(__imp__sub_82556C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556C70"))) PPC_WEAK_FUNC(sub_82556C70);
PPC_FUNC_IMPL(__imp__sub_82556C70) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,21296
	ctx.r31.s64 = ctx.r11.s64 + 21296;
	// lwz r11,21296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21296);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82556cdc
	if (ctx.cr6.eq) goto loc_82556CDC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82556ccc
	if (ctx.cr6.eq) goto loc_82556CCC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82556cc0
	if (ctx.cr6.eq) goto loc_82556CC0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bne cr6,0x82556d14
	if (!ctx.cr6.eq) goto loc_82556D14;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x82556cd4
	goto loc_82556CD4;
loc_82556CC0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// b 0x82556cd4
	goto loc_82556CD4;
loc_82556CCC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82556CD4:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82556d14
	goto loc_82556D14;
loc_82556CDC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82556d10
	if (!ctx.cr0.eq) goto loc_82556D10;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82556d10
	if (ctx.cr6.eq) goto loc_82556D10;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8254b5f8
	ctx.lr = 0x82556D08;
	sub_8254B5F8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82556D10:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82556D14:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// beq cr6,0x82556d54
	if (ctx.cr6.eq) goto loc_82556D54;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82556d48
	if (ctx.cr6.eq) goto loc_82556D48;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x82556d40
	if (ctx.cr6.eq) goto loc_82556D40;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bne cr6,0x82556d8c
	if (!ctx.cr6.eq) goto loc_82556D8C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x82556d4c
	goto loc_82556D4C;
loc_82556D40:
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x82556d4c
	goto loc_82556D4C;
loc_82556D48:
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82556D4C:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82556d8c
	goto loc_82556D8C;
loc_82556D54:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82556d80
	if (!ctx.cr6.eq) goto loc_82556D80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82556d80
	if (!ctx.cr6.eq) goto loc_82556D80;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82556d80
	if (!ctx.cr6.eq) goto loc_82556D80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8254b578
	ctx.lr = 0x82556D7C;
	sub_8254B578(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_82556D80:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82556D8C:
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

__attribute__((alias("__imp__sub_82556DA4"))) PPC_WEAK_FUNC(sub_82556DA4);
PPC_FUNC_IMPL(__imp__sub_82556DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556DA8"))) PPC_WEAK_FUNC(sub_82556DA8);
PPC_FUNC_IMPL(__imp__sub_82556DA8) {
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
	// addi r11,r11,28276
	ctx.r11.s64 = ctx.r11.s64 + 28276;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82556dd4
	if (ctx.cr0.eq) goto loc_82556DD4;
	// bl 0x82691540
	ctx.lr = 0x82556DD4;
	sub_82691540(ctx, base);
loc_82556DD4:
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

__attribute__((alias("__imp__sub_82556DEC"))) PPC_WEAK_FUNC(sub_82556DEC);
PPC_FUNC_IMPL(__imp__sub_82556DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556DF0"))) PPC_WEAK_FUNC(sub_82556DF0);
PPC_FUNC_IMPL(__imp__sub_82556DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82556DF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r28,2008(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2008);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,25272(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25272);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8224e2d0
	ctx.lr = 0x82556E20;
	sub_8224E2D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291fca8
	ctx.lr = 0x82556E30;
	sub_8291FCA8(ctx, base);
	// lwz r29,2008(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2008);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82556e5c
	if (ctx.cr6.eq) goto loc_82556E5C;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r29,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224e2d0
	ctx.lr = 0x82556E4C;
	sub_8224E2D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r30,1008
	ctx.r4.s64 = ctx.r30.s64 + 1008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829201c8
	ctx.lr = 0x82556E5C;
	sub_829201C8(ctx, base);
loc_82556E5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82556E64"))) PPC_WEAK_FUNC(sub_82556E64);
PPC_FUNC_IMPL(__imp__sub_82556E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556E68"))) PPC_WEAK_FUNC(sub_82556E68);
PPC_FUNC_IMPL(__imp__sub_82556E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82556E70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,25272(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25272);
	// bl 0x8225bb80
	ctx.lr = 0x82556E94;
	sub_8225BB80(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r5.u32);
	// beq 0x82556f04
	if (ctx.cr0.eq) goto loc_82556F04;
	// addi r29,r31,1008
	ctx.r29.s64 = ctx.r31.s64 + 1008;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224c838
	ctx.lr = 0x82556EB8;
	sub_8224C838(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a748c8
	ctx.lr = 0x82556ED4;
	sub_82A748C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82556f04
	if (ctx.cr0.lt) goto loc_82556F04;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// lwz r7,2008(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2008);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// bl 0x82a74868
	ctx.lr = 0x82556EFC;
	sub_82A74868(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a74758
	ctx.lr = 0x82556F04;
	sub_82A74758(ctx, base);
loc_82556F04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82556F0C"))) PPC_WEAK_FUNC(sub_82556F0C);
PPC_FUNC_IMPL(__imp__sub_82556F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556F10"))) PPC_WEAK_FUNC(sub_82556F10);
PPC_FUNC_IMPL(__imp__sub_82556F10) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224edb8
	ctx.lr = 0x82556F3C;
	sub_8224EDB8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,29136
	ctx.r4.s64 = ctx.r11.s64 + 29136;
	// lwz r30,2008(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2008);
	// bl 0x82251da0
	ctx.lr = 0x82556F50;
	sub_82251DA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82557028
	ctx.lr = 0x82556F58;
	sub_82557028(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r11,-30052
	ctx.r4.s64 = ctx.r11.s64 + -30052;
	// bl 0x82251da0
	ctx.lr = 0x82556F64;
	sub_82251DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82252010
	ctx.lr = 0x82556F70;
	sub_82252010(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224fa68
	ctx.lr = 0x82556F78;
	sub_8224FA68(ctx, base);
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

__attribute__((alias("__imp__sub_82556F94"))) PPC_WEAK_FUNC(sub_82556F94);
PPC_FUNC_IMPL(__imp__sub_82556F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556F98"))) PPC_WEAK_FUNC(sub_82556F98);
PPC_FUNC_IMPL(__imp__sub_82556F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82556FA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8255701c
	if (ctx.cr6.eq) goto loc_8255701C;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82556FC4;
	sub_82FA77C0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a747a8
	ctx.lr = 0x82556FDC;
	sub_82A747A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8255701c
	if (ctx.cr0.lt) goto loc_8255701C;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r31,2008
	ctx.r5.s64 = ctx.r31.s64 + 2008;
	// stw r11,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r11.u32);
	// li r7,1000
	ctx.r7.s64 = 1000;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r31,1008
	ctx.r4.s64 = ctx.r31.s64 + 1008;
	// bl 0x82a74730
	ctx.lr = 0x82557004;
	sub_82A74730(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a74758
	ctx.lr = 0x82557010;
	sub_82A74758(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8255701c
	if (ctx.cr6.lt) goto loc_8255701C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8255701C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557028"))) PPC_WEAK_FUNC(sub_82557028);
PPC_FUNC_IMPL(__imp__sub_82557028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82557030;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82251ae0
	ctx.lr = 0x8255704C;
	sub_82251AE0(ctx, base);
	// lbz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82557104
	if (ctx.cr0.eq) goto loc_82557104;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x82251360
	ctx.lr = 0x82557078;
	sub_82251360(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82250c80
	ctx.lr = 0x82557080;
	sub_82250C80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825570b0
	if (ctx.cr6.eq) goto loc_825570B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822513f8
	ctx.lr = 0x82557094;
	sub_822513F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825570b0
	if (ctx.cr0.eq) goto loc_825570B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825570B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825570B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r9,24(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// add r6,r31,r10
	ctx.r6.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lbz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bctrl 
	ctx.lr = 0x825570F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82557104
	if (ctx.cr0.eq) goto loc_82557104;
	// li r27,4
	ctx.r27.s64 = 4;
loc_82557104:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x8255713c
	if (ctx.cr6.eq) goto loc_8255713C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82557130
	if (!ctx.cr6.eq) goto loc_82557130;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82557130:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82251cb8
	ctx.lr = 0x8255713C;
	sub_82251CB8(ctx, base);
loc_8255713C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823c0638
	ctx.lr = 0x82557144;
	sub_823C0638(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557150"))) PPC_WEAK_FUNC(sub_82557150);
PPC_FUNC_IMPL(__imp__sub_82557150) {
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
	// li r3,2012
	ctx.r3.s64 = 2012;
	// bl 0x82691500
	ctx.lr = 0x82557164;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255718c
	if (ctx.cr0.eq) goto loc_8255718C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,29192
	ctx.r11.s64 = ctx.r11.s64 + 29192;
	// stw r10,2008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2008, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82557190
	goto loc_82557190;
loc_8255718C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82557190:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825571A0"))) PPC_WEAK_FUNC(sub_825571A0);
PPC_FUNC_IMPL(__imp__sub_825571A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82547d80
	sub_82547D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825571A4"))) PPC_WEAK_FUNC(sub_825571A4);
PPC_FUNC_IMPL(__imp__sub_825571A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825571A8"))) PPC_WEAK_FUNC(sub_825571A8);
PPC_FUNC_IMPL(__imp__sub_825571A8) {
	PPC_FUNC_PROLOGUE();
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_825571AC:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// ble cr6,0x825571bc
	if (!ctx.cr6.gt) goto loc_825571BC;
	// andi. r11,r11,223
	ctx.r11.u64 = ctx.r11.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_825571BC:
	// lbzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// ble cr6,0x825571cc
	if (!ctx.cr6.gt) goto loc_825571CC;
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_825571CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825571f0
	if (!ctx.cr6.eq) goto loc_825571F0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825571ac
	if (!ctx.cr6.eq) goto loc_825571AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825571F0:
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825571F8"))) PPC_WEAK_FUNC(sub_825571F8);
PPC_FUNC_IMPL(__imp__sub_825571F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82557210
	if (ctx.cr6.eq) goto loc_82557210;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82557210:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82557218"))) PPC_WEAK_FUNC(sub_82557218);
PPC_FUNC_IMPL(__imp__sub_82557218) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82557230
	if (ctx.cr6.eq) goto loc_82557230;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82557230:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82557238"))) PPC_WEAK_FUNC(sub_82557238);
PPC_FUNC_IMPL(__imp__sub_82557238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82557240;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82557250:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82557250
	if (!ctx.cr6.eq) goto loc_82557250;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bl 0x82547c40
	ctx.lr = 0x82557278;
	sub_82547C40(ctx, base);
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_82557288:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x825572a8
	if (!ctx.cr6.lt) goto loc_825572A8;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82557288
	if (!ctx.cr0.eq) goto loc_82557288;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
loc_825572A8:
	// bne cr6,0x825572b4
	if (!ctx.cr6.eq) goto loc_825572B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_825572B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825572BC"))) PPC_WEAK_FUNC(sub_825572BC);
PPC_FUNC_IMPL(__imp__sub_825572BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825572C0"))) PPC_WEAK_FUNC(sub_825572C0);
PPC_FUNC_IMPL(__imp__sub_825572C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825572C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82557324
	if (ctx.cr0.eq) goto loc_82557324;
	// addic. r31,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r31.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// blt 0x82557324
	if (ctx.cr0.lt) goto loc_82557324;
loc_825572E8:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82557338
	ctx.lr = 0x82557300;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82557310
	if (!ctx.cr0.lt) goto loc_82557310;
	// addi r30,r6,1
	ctx.r30.s64 = ctx.r6.s64 + 1;
	// b 0x8255731c
	goto loc_8255731C;
loc_82557310:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82557330
	if (!ctx.cr6.gt) goto loc_82557330;
	// addi r31,r6,-1
	ctx.r31.s64 = ctx.r6.s64 + -1;
loc_8255731C:
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x825572e8
	if (!ctx.cr6.gt) goto loc_825572E8;
loc_82557324:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82557328:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82557330:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x82557328
	goto loc_82557328;
}

__attribute__((alias("__imp__sub_82557338"))) PPC_WEAK_FUNC(sub_82557338);
PPC_FUNC_IMPL(__imp__sub_82557338) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82557370
	if (!ctx.cr6.eq) goto loc_82557370;
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82557350:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82557378
	if (ctx.cr6.eq) goto loc_82557378;
	// lbzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82557350
	if (ctx.cr6.eq) goto loc_82557350;
loc_82557370:
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
loc_82557378:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82557380"))) PPC_WEAK_FUNC(sub_82557380);
PPC_FUNC_IMPL(__imp__sub_82557380) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
loc_82557388:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825573a8
	if (!ctx.cr6.lt) goto loc_825573A8;
	// lbzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// extsb. r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x82557388
	if (!ctx.cr0.eq) goto loc_82557388;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
loc_825573A8:
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-1(r3)
	PPC_STORE_U8(ctx.r3.u32 + -1, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825573B8"))) PPC_WEAK_FUNC(sub_825573B8);
PPC_FUNC_IMPL(__imp__sub_825573B8) {
	PPC_FUNC_PROLOGUE();
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825573C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825573c0
	if (!ctx.cr6.eq) goto loc_825573C0;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_825573E4:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82557404
	if (!ctx.cr6.lt) goto loc_82557404;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x825573e4
	if (!ctx.cr0.eq) goto loc_825573E4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
loc_82557404:
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82557414"))) PPC_WEAK_FUNC(sub_82557414);
PPC_FUNC_IMPL(__imp__sub_82557414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557418"))) PPC_WEAK_FUNC(sub_82557418);
PPC_FUNC_IMPL(__imp__sub_82557418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82fa5358
	ctx.lr = 0x82557458;
	sub_82FA5358(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82557468"))) PPC_WEAK_FUNC(sub_82557468);
PPC_FUNC_IMPL(__imp__sub_82557468) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8255746C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8255746c
	if (!ctx.cr6.eq) goto loc_8255746C;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8255748C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8255748c
	if (!ctx.cr6.eq) goto loc_8255748C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf. r8,r6,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x82557504
	if (ctx.cr0.lt) goto loc_82557504;
	// subf r11,r8,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r8.s64;
	// subf r7,r3,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r3.s64;
loc_825574B8:
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x825574ec
	if (ctx.cr6.eq) goto loc_825574EC;
loc_825574C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// andi. r9,r9,223
	ctx.r9.u64 = ctx.r9.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8255750c
	if (!ctx.cr6.eq) goto loc_8255750C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bdnzf 4*cr6+eq,0x825574c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr6.eq) goto loc_825574C8;
loc_825574EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825574F0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82557514
	if (ctx.cr6.eq) goto loc_82557514;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bge 0x825574b8
	if (!ctx.cr0.lt) goto loc_825574B8;
loc_82557504:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8255750C:
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// b 0x825574f0
	goto loc_825574F0;
loc_82557514:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255751C"))) PPC_WEAK_FUNC(sub_8255751C);
PPC_FUNC_IMPL(__imp__sub_8255751C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557520"))) PPC_WEAK_FUNC(sub_82557520);
PPC_FUNC_IMPL(__imp__sub_82557520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82557528;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// subf r29,r6,r7
	ctx.r29.s64 = ctx.r7.s64 - ctx.r6.s64;
	// add r5,r3,r6
	ctx.r5.u64 = ctx.r3.u64 + ctx.r6.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa4eb0
	ctx.lr = 0x8255754C;
	sub_82FA4EB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stbx r11,r29,r31
	PPC_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// beq 0x82557564
	if (ctx.cr0.eq) goto loc_82557564;
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stb r11,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r11.u8);
loc_82557564:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255756C"))) PPC_WEAK_FUNC(sub_8255756C);
PPC_FUNC_IMPL(__imp__sub_8255756C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557570"))) PPC_WEAK_FUNC(sub_82557570);
PPC_FUNC_IMPL(__imp__sub_82557570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82557578;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82557594:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82557594
	if (!ctx.cr6.eq) goto loc_82557594;
	// subf r10,r27,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r17,r10,0
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_825575B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825575b4
	if (!ctx.cr6.eq) goto loc_825575B4;
	// subf r10,r25,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r20,r10,0
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_825575D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825575d4
	if (!ctx.cr6.eq) goto loc_825575D4;
	// subf r11,r19,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r19.s64;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// rotlwi r21,r11,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// bl 0x82fa3928
	ctx.lr = 0x82557608;
	sub_82FA3928(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8255760C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8255760c
	if (!ctx.cr6.eq) goto loc_8255760C;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825576b8
	if (ctx.cr0.eq) goto loc_825576B8;
loc_8255762C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825576b0
	if (ctx.cr6.eq) goto loc_825576B0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8255763C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8255763c
	if (!ctx.cr6.eq) goto loc_8255763C;
	// subf r10,r25,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82557660:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82557660
	if (!ctx.cr6.eq) goto loc_82557660;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82fa3928
	ctx.lr = 0x82557688;
	sub_82FA3928(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8255768C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8255768c
	if (!ctx.cr6.eq) goto loc_8255768C;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8255762c
	if (ctx.cr6.lt) goto loc_8255762C;
loc_825576B0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt cr6,0x825576e4
	if (ctx.cr6.gt) goto loc_825576E4;
loc_825576B8:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa4eb0
	ctx.lr = 0x825576CC;
	sub_82FA4EB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stbx r23,r17,r31
	PPC_STORE_U8(ctx.r17.u32 + ctx.r31.u32, ctx.r23.u8);
	// beq 0x825577d0
	if (ctx.cr0.eq) goto loc_825577D0;
	// add r11,r31,r18
	ctx.r11.u64 = ctx.r31.u64 + ctx.r18.u64;
	// stb r23,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r23.u8);
	// b 0x825577d0
	goto loc_825577D0;
loc_825576E4:
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x825577d0
	if (ctx.cr6.eq) goto loc_825577D0;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// neg r22,r27
	ctx.r22.s64 = -ctx.r27.s64;
	// neg r24,r20
	ctx.r24.s64 = -ctx.r20.s64;
loc_82557700:
	// add r5,r26,r27
	ctx.r5.u64 = ctx.r26.u64 + ctx.r27.u64;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// beq cr6,0x82557740
	if (ctx.cr6.eq) goto loc_82557740;
	// add r10,r22,r28
	ctx.r10.u64 = ctx.r22.u64 + ctx.r28.u64;
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + ctx.r25.u64;
loc_8255771C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// andi. r9,r9,223
	ctx.r9.u64 = ctx.r9.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82557794
	if (!ctx.cr6.eq) goto loc_82557794;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bdnzf 4*cr6+eq,0x8255771c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr6.eq) goto loc_8255771C;
loc_82557740:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82557744:
	// subf r30,r29,r18
	ctx.r30.s64 = ctx.r18.s64 - ctx.r29.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x8255779c
	if (!ctx.cr6.eq) goto loc_8255779C;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// bl 0x82fa4eb0
	ctx.lr = 0x82557764;
	sub_82FA4EB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stbx r23,r31,r21
	PPC_STORE_U8(ctx.r31.u32 + ctx.r21.u32, ctx.r23.u8);
	// beq 0x82557778
	if (ctx.cr0.eq) goto loc_82557778;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stb r23,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r23.u8);
loc_82557778:
	// add r11,r24,r28
	ctx.r11.u64 = ctx.r24.u64 + ctx.r28.u64;
	// add r10,r26,r20
	ctx.r10.u64 = ctx.r26.u64 + ctx.r20.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// add r29,r29,r21
	ctx.r29.u64 = ctx.r29.u64 + ctx.r21.u64;
	// add r31,r31,r21
	ctx.r31.u64 = ctx.r31.u64 + ctx.r21.u64;
	// b 0x825577c0
	goto loc_825577C0;
loc_82557794:
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// b 0x82557744
	goto loc_82557744;
loc_8255779C:
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82fa4eb0
	ctx.lr = 0x825577A4;
	sub_82FA4EB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r23,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// beq 0x825577b8
	if (ctx.cr0.eq) goto loc_825577B8;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stb r23,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r23.u8);
loc_825577B8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_825577C0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// cmplw cr6,r26,r17
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x82557700
	if (ctx.cr6.lt) goto loc_82557700;
loc_825577D0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825577D8"))) PPC_WEAK_FUNC(sub_825577D8);
PPC_FUNC_IMPL(__imp__sub_825577D8) {
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
	// stwu r1,-1104(r1)
	ea = -1104 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8255b628
	ctx.lr = 0x825577FC;
	sub_8255B628(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stb r4,2916(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2916, ctx.r4.u8);
	// addi r3,r3,2508
	ctx.r3.s64 = ctx.r3.s64 + 2508;
	// addi r11,r11,29752
	ctx.r11.s64 = ctx.r11.s64 + 29752;
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x8255781C;
	sub_82A75988(ctx, base);
	// addi r3,r31,2544
	ctx.r3.s64 = ctx.r31.s64 + 2544;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x8255782C;
	sub_82A75988(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,6528
	ctx.r11.u64 = ctx.r11.u64 | 6528;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,2496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2496, ctx.r9.u32);
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x82558070
	ctx.lr = 0x8255784C;
	sub_82558070(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// bne cr6,0x82557868
	if (!ctx.cr6.eq) goto loc_82557868;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// bl 0x82fa7cf0
	ctx.lr = 0x82557864;
	sub_82FA7CF0(ctx, base);
	// b 0x8255788c
	goto loc_8255788C;
loc_82557868:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82557874;
	sub_82FA77C0(ctx, base);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// bl 0x82fa77c0
	ctx.lr = 0x82557884;
	sub_82FA77C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558950
	ctx.lr = 0x8255788C;
	sub_82558950(ctx, base);
loc_8255788C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1104
	ctx.r1.s64 = ctx.r1.s64 + 1104;
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

__attribute__((alias("__imp__sub_825578A8"))) PPC_WEAK_FUNC(sub_825578A8);
PPC_FUNC_IMPL(__imp__sub_825578A8) {
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
	// bl 0x82557cb0
	ctx.lr = 0x825578C8;
	sub_82557CB0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825578d8
	if (ctx.cr0.eq) goto loc_825578D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825578D8;
	sub_82691540(ctx, base);
loc_825578D8:
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

__attribute__((alias("__imp__sub_825578F4"))) PPC_WEAK_FUNC(sub_825578F4);
PPC_FUNC_IMPL(__imp__sub_825578F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825578F8"))) PPC_WEAK_FUNC(sub_825578F8);
PPC_FUNC_IMPL(__imp__sub_825578F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82557900;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x8255b628
	ctx.lr = 0x82557928;
	sub_8255B628(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// ori r11,r11,6528
	ctx.r11.u64 = ctx.r11.u64 | 6528;
	// addi r10,r10,29752
	ctx.r10.s64 = ctx.r10.s64 + 29752;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// bl 0x82558070
	ctx.lr = 0x82557944;
	sub_82558070(ctx, base);
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r27,2496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2496, ctx.r27.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r25,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r25.u32);
	// stb r26,2916(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2916, ctx.r26.u8);
	// addi r27,r31,480
	ctx.r27.s64 = ctx.r31.s64 + 480;
	// stw r11,2484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2484, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a75198
	ctx.lr = 0x82557974;
	sub_82A75198(ctx, base);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
	// bl 0x82a75198
	ctx.lr = 0x82557984;
	sub_82A75198(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825579c4
	if (ctx.cr6.eq) goto loc_825579C4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,2508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2508, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,2512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2512, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,2516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2516, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,2520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2520, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,2536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2536, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,2540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2540, ctx.r11.u32);
	// b 0x825579dc
	goto loc_825579DC;
loc_825579C4:
	// stw r28,2508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2508, ctx.r28.u32);
	// stw r28,2512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2512, ctx.r28.u32);
	// stw r28,2516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2516, ctx.r28.u32);
	// stw r28,2520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2520, ctx.r28.u32);
	// stw r28,2536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2536, ctx.r28.u32);
	// stw r28,2540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2540, ctx.r28.u32);
loc_825579DC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82557a18
	if (ctx.cr6.eq) goto loc_82557A18;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,2544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2544, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,2548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2548, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,2552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2552, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,2556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2556, ctx.r11.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r11,2572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2572, ctx.r11.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,2576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2576, ctx.r11.u32);
	// b 0x82557a30
	goto loc_82557A30;
loc_82557A18:
	// stw r28,2544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2544, ctx.r28.u32);
	// stw r28,2548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2548, ctx.r28.u32);
	// stw r28,2552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2552, ctx.r28.u32);
	// stw r28,2556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2556, ctx.r28.u32);
	// stw r28,2572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2572, ctx.r28.u32);
	// stw r28,2576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2576, ctx.r28.u32);
loc_82557A30:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82adfe80
	ctx.lr = 0x82557A38;
	sub_82ADFE80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82557a9c
	if (!ctx.cr6.eq) goto loc_82557A9C;
	// lwz r11,2508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82557a94
	if (!ctx.cr6.gt) goto loc_82557A94;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82557A58:
	// lwz r11,2520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2520);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82557a80
	if (ctx.cr6.eq) goto loc_82557A80;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82adff00
	ctx.lr = 0x82557A80;
	sub_82ADFF00(ctx, base);
loc_82557A80:
	// lwz r11,2508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2508);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82557a58
	if (ctx.cr6.lt) goto loc_82557A58;
loc_82557A94:
	// stw r26,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r26.u32);
	// b 0x82557aec
	goto loc_82557AEC;
loc_82557A9C:
	// lwz r11,2544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82557ae8
	if (!ctx.cr6.gt) goto loc_82557AE8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82557AAC:
	// lwz r11,2556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2556);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82557ad4
	if (ctx.cr6.eq) goto loc_82557AD4;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82adff00
	ctx.lr = 0x82557AD4;
	sub_82ADFF00(ctx, base);
loc_82557AD4:
	// lwz r11,2544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2544);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82557aac
	if (ctx.cr6.lt) goto loc_82557AAC;
loc_82557AE8:
	// stw r28,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r28.u32);
loc_82557AEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558950
	ctx.lr = 0x82557AF4;
	sub_82558950(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557B00"))) PPC_WEAK_FUNC(sub_82557B00);
PPC_FUNC_IMPL(__imp__sub_82557B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82557B08;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x8255b628
	ctx.lr = 0x82557B30;
	sub_8255B628(ctx, base);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stb r26,2916(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2916, ctx.r26.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r25,2496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2496, ctx.r25.u32);
	// addi r10,r10,29752
	ctx.r10.s64 = ctx.r10.s64 + 29752;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82557b84
	if (ctx.cr6.eq) goto loc_82557B84;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,2508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2508, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,2512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2512, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,2516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2516, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,2520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2520, ctx.r10.u32);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r10,2536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2536, ctx.r10.u32);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r10,2540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2540, ctx.r10.u32);
	// b 0x82557b9c
	goto loc_82557B9C;
loc_82557B84:
	// stw r11,2508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2508, ctx.r11.u32);
	// stw r11,2512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2512, ctx.r11.u32);
	// stw r11,2516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2516, ctx.r11.u32);
	// stw r11,2520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2520, ctx.r11.u32);
	// stw r11,2536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2536, ctx.r11.u32);
	// stw r11,2540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2540, ctx.r11.u32);
loc_82557B9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82557bd4
	if (ctx.cr6.eq) goto loc_82557BD4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,2544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2544, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,2548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2548, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,2552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2552, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,2556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2556, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,2572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2572, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// b 0x82557be8
	goto loc_82557BE8;
loc_82557BD4:
	// stw r11,2544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2544, ctx.r11.u32);
	// stw r11,2548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2548, ctx.r11.u32);
	// stw r11,2552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2552, ctx.r11.u32);
	// stw r11,2556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2556, ctx.r11.u32);
	// stw r11,2572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2572, ctx.r11.u32);
loc_82557BE8:
	// stw r11,2576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2576, ctx.r11.u32);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,6528
	ctx.r11.u64 = ctx.r11.u64 | 6528;
	// stwx r28,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// bl 0x82558070
	ctx.lr = 0x82557C00;
	sub_82558070(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,2484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2484, ctx.r11.u32);
	// bne cr6,0x82557c2c
	if (!ctx.cr6.eq) goto loc_82557C2C;
	// addi r5,r31,452
	ctx.r5.s64 = ctx.r31.s64 + 452;
	// addi r4,r31,480
	ctx.r4.s64 = ctx.r31.s64 + 480;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82adfcb0
	ctx.lr = 0x82557C28;
	sub_82ADFCB0(ctx, base);
	// b 0x82557c84
	goto loc_82557C84;
loc_82557C2C:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82557c48
	if (!ctx.cr6.eq) goto loc_82557C48;
	// addi r5,r31,452
	ctx.r5.s64 = ctx.r31.s64 + 452;
	// addi r4,r31,480
	ctx.r4.s64 = ctx.r31.s64 + 480;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82adfdf0
	ctx.lr = 0x82557C44;
	sub_82ADFDF0(ctx, base);
	// b 0x82557c84
	goto loc_82557C84;
loc_82557C48:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x82557c58
	if (!ctx.cr6.eq) goto loc_82557C58;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82557c74
	goto loc_82557C74;
loc_82557C58:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bne cr6,0x82557c68
	if (!ctx.cr6.eq) goto loc_82557C68;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82557c74
	goto loc_82557C74;
loc_82557C68:
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// bne cr6,0x82557c90
	if (!ctx.cr6.eq) goto loc_82557C90;
	// li r3,2
	ctx.r3.s64 = 2;
loc_82557C74:
	// addi r6,r31,452
	ctx.r6.s64 = ctx.r31.s64 + 452;
	// addi r5,r31,480
	ctx.r5.s64 = ctx.r31.s64 + 480;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82adfd48
	ctx.lr = 0x82557C84;
	sub_82ADFD48(ctx, base);
loc_82557C84:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// b 0x82557ca0
	goto loc_82557CA0;
loc_82557C90:
	// li r5,1000
	ctx.r5.s64 = 1000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// bl 0x82fa7cf0
	ctx.lr = 0x82557CA0;
	sub_82FA7CF0(ctx, base);
loc_82557CA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557CAC"))) PPC_WEAK_FUNC(sub_82557CAC);
PPC_FUNC_IMPL(__imp__sub_82557CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557CB0"))) PPC_WEAK_FUNC(sub_82557CB0);
PPC_FUNC_IMPL(__imp__sub_82557CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82557CB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r3,452
	ctx.r3.s64 = ctx.r3.s64 + 452;
	// addi r11,r11,29752
	ctx.r11.s64 = ctx.r11.s64 + 29752;
	// lwz r10,452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,997
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 997, ctx.xer);
	// bne cr6,0x82557ce0
	if (!ctx.cr6.eq) goto loc_82557CE0;
	// bl 0x82a74de0
	ctx.lr = 0x82557CE0;
	sub_82A74DE0(ctx, base);
loc_82557CE0:
	// addi r30,r31,2924
	ctx.r30.s64 = ctx.r31.s64 + 2924;
	// li r29,4
	ctx.r29.s64 = 4;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82557CEC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82557d10
	if (ctx.cr6.eq) goto loc_82557D10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82557D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82557D10:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82557cec
	if (!ctx.cr0.eq) goto loc_82557CEC;
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82557d30
	if (ctx.cr6.eq) goto loc_82557D30;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82ae0600
	ctx.lr = 0x82557D30;
	sub_82AE0600(ctx, base);
loc_82557D30:
	// lwz r11,2592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82557d7c
	if (ctx.cr6.eq) goto loc_82557D7C;
	// lwz r4,2584(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2584);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82557d74
	if (ctx.cr6.eq) goto loc_82557D74;
	// lwz r5,2588(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2588);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82557d74
	if (ctx.cr6.eq) goto loc_82557D74;
	// lwz r11,2484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2484);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82557d68
	if (ctx.cr6.eq) goto loc_82557D68;
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
loc_82557D68:
	// bl 0x8255a7c8
	ctx.lr = 0x82557D6C;
	sub_8255A7C8(ctx, base);
	// stw r27,2584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2584, ctx.r27.u32);
	// b 0x82557db4
	goto loc_82557DB4;
loc_82557D74:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82557d98
	if (!ctx.cr6.eq) goto loc_82557D98;
loc_82557D7C:
	// lwz r3,2584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82557d98
	if (ctx.cr6.eq) goto loc_82557D98;
	// lis r4,8448
	ctx.r4.s64 = 553648128;
	// ori r4,r4,24576
	ctx.r4.u64 = ctx.r4.u64 | 24576;
	// bl 0x82691460
	ctx.lr = 0x82557D94;
	sub_82691460(ctx, base);
	// stw r27,2584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2584, ctx.r27.u32);
loc_82557D98:
	// lwz r11,2592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82557db8
	if (!ctx.cr6.eq) goto loc_82557DB8;
	// lwz r3,2588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2588);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82557db8
	if (ctx.cr6.eq) goto loc_82557DB8;
	// bl 0x82a782c0
	ctx.lr = 0x82557DB4;
	sub_82A782C0(ctx, base);
loc_82557DB4:
	// stw r27,2588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2588, ctx.r27.u32);
loc_82557DB8:
	// lwz r11,2832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82557dfc
	if (ctx.cr6.eq) goto loc_82557DFC;
	// lwz r4,2820(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2820);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82557dfc
	if (ctx.cr6.eq) goto loc_82557DFC;
	// lwz r5,2824(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2824);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82557dfc
	if (ctx.cr6.eq) goto loc_82557DFC;
	// lwz r11,2484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2484);
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82557df0
	if (ctx.cr6.eq) goto loc_82557DF0;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
loc_82557DF0:
	// bl 0x8255a7c8
	ctx.lr = 0x82557DF4;
	sub_8255A7C8(ctx, base);
	// stw r27,2820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2820, ctx.r27.u32);
	// b 0x82557e28
	goto loc_82557E28;
loc_82557DFC:
	// lwz r3,2820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2820);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82557e18
	if (ctx.cr6.eq) goto loc_82557E18;
	// lis r4,8448
	ctx.r4.s64 = 553648128;
	// ori r4,r4,24576
	ctx.r4.u64 = ctx.r4.u64 | 24576;
	// bl 0x82691460
	ctx.lr = 0x82557E14;
	sub_82691460(ctx, base);
	// stw r27,2820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2820, ctx.r27.u32);
loc_82557E18:
	// lwz r3,2824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2824);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82557e2c
	if (ctx.cr6.eq) goto loc_82557E2C;
	// bl 0x82a782c0
	ctx.lr = 0x82557E28;
	sub_82A782C0(ctx, base);
loc_82557E28:
	// stw r27,2824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2824, ctx.r27.u32);
loc_82557E2C:
	// addi r30,r31,2596
	ctx.r30.s64 = ctx.r31.s64 + 2596;
	// li r26,4
	ctx.r26.s64 = 4;
loc_82557E34:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82557e48
	if (ctx.cr6.eq) goto loc_82557E48;
	// bl 0x82547d80
	ctx.lr = 0x82557E44;
	sub_82547D80(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82557E48:
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// li r28,4
	ctx.r28.s64 = 4;
loc_82557E50:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82557e64
	if (ctx.cr6.eq) goto loc_82557E64;
	// bl 0x82547d80
	ctx.lr = 0x82557E60;
	sub_82547D80(ctx, base);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
loc_82557E64:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x82557e50
	if (!ctx.cr0.eq) goto loc_82557E50;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82557e84
	if (ctx.cr6.eq) goto loc_82557E84;
	// bl 0x82a782c0
	ctx.lr = 0x82557E80;
	sub_82A782C0(ctx, base);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
loc_82557E84:
	// addi r29,r30,96
	ctx.r29.s64 = ctx.r30.s64 + 96;
	// li r28,4
	ctx.r28.s64 = 4;
loc_82557E8C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82557ea0
	if (ctx.cr6.eq) goto loc_82557EA0;
	// bl 0x82a782c0
	ctx.lr = 0x82557E9C;
	sub_82A782C0(ctx, base);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
loc_82557EA0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x82557e8c
	if (!ctx.cr0.eq) goto loc_82557E8C;
	// lwz r3,240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82557ec0
	if (ctx.cr6.eq) goto loc_82557EC0;
	// bl 0x82a782c0
	ctx.lr = 0x82557EBC;
	sub_82A782C0(ctx, base);
	// stw r27,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r27.u32);
loc_82557EC0:
	// addi r29,r30,256
	ctx.r29.s64 = ctx.r30.s64 + 256;
	// li r28,4
	ctx.r28.s64 = 4;
loc_82557EC8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82557edc
	if (ctx.cr6.eq) goto loc_82557EDC;
	// bl 0x82a782c0
	ctx.lr = 0x82557ED8;
	sub_82A782C0(ctx, base);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
loc_82557EDC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x82557ec8
	if (!ctx.cr0.eq) goto loc_82557EC8;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82557e34
	if (!ctx.cr0.eq) goto loc_82557E34;
	// addi r3,r31,2756
	ctx.r3.s64 = ctx.r31.s64 + 2756;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82557F04;
	sub_82FA7CF0(ctx, base);
	// lwz r11,2940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82557f3c
	if (ctx.cr6.eq) goto loc_82557F3C;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82557f28
	if (ctx.cr6.eq) goto loc_82557F28;
	// bl 0x82691540
	ctx.lr = 0x82557F20;
	sub_82691540(ctx, base);
	// lwz r11,2940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// stw r27,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r27.u32);
loc_82557F28:
	// lwz r3,2940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82557f3c
	if (ctx.cr6.eq) goto loc_82557F3C;
	// bl 0x82691540
	ctx.lr = 0x82557F38;
	sub_82691540(ctx, base);
	// stw r27,2940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2940, ctx.r27.u32);
loc_82557F3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255b6e0
	ctx.lr = 0x82557F44;
	sub_8255B6E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557F4C"))) PPC_WEAK_FUNC(sub_82557F4C);
PPC_FUNC_IMPL(__imp__sub_82557F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557F50"))) PPC_WEAK_FUNC(sub_82557F50);
PPC_FUNC_IMPL(__imp__sub_82557F50) {
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
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lwz r11,-6900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6900);
	// lwz r30,-13544(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82557fa8
	if (!ctx.cr6.eq) goto loc_82557FA8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82691500
	ctx.lr = 0x82557F84;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82557fa0
	if (ctx.cr0.eq) goto loc_82557FA0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r3,-6900(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6900, ctx.r3.u32);
	// addi r11,r11,29928
	ctx.r11.s64 = ctx.r11.s64 + 29928;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82557fa8
	goto loc_82557FA8;
loc_82557FA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-6900(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6900, ctx.r11.u32);
loc_82557FA8:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82ae01a8
	ctx.lr = 0x82557FC0;
	sub_82AE01A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82558054
	if (ctx.cr0.lt) goto loc_82558054;
	// bl 0x825cc990
	ctx.lr = 0x82557FCC;
	sub_825CC990(ctx, base);
	// lis r4,8448
	ctx.r4.s64 = 553648128;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// ori r4,r4,24576
	ctx.r4.u64 = ctx.r4.u64 | 24576;
	// bl 0x82691410
	ctx.lr = 0x82557FDC;
	sub_82691410(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,23204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23204, ctx.r6.u32);
	// bl 0x82ae0468
	ctx.lr = 0x82557FF8;
	sub_82AE0468(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,29676
	ctx.r3.s64 = ctx.r11.s64 + 29676;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82547f38
	ctx.lr = 0x8255800C;
	sub_82547F38(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,29712
	ctx.r3.s64 = ctx.r11.s64 + 29712;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x82558020;
	sub_82547F38(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8255a490
	ctx.lr = 0x8255802C;
	sub_8255A490(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,23208
	ctx.r3.s64 = ctx.r11.s64 + 23208;
	// ori r5,r5,35424
	ctx.r5.u64 = ctx.r5.u64 | 35424;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x82558044;
	sub_82A75988(ctx, base);
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-5896(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5896, ctx.r11.u32);
loc_82558054:
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

__attribute__((alias("__imp__sub_8255806C"))) PPC_WEAK_FUNC(sub_8255806C);
PPC_FUNC_IMPL(__imp__sub_8255806C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558070"))) PPC_WEAK_FUNC(sub_82558070);
PPC_FUNC_IMPL(__imp__sub_82558070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82558078;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// bl 0x82fa7cf0
	ctx.lr = 0x82558090;
	sub_82FA7CF0(ctx, base);
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82fa7cf0
	ctx.lr = 0x825580A0;
	sub_82FA7CF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,84
	ctx.r5.s64 = 84;
	// std r30,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,304(r31)
	PPC_STORE_U64(ctx.r31.u32 + 304, ctx.r30.u64);
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// std r30,312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.r30.u64);
	// addi r11,r31,296
	ctx.r11.s64 = ctx.r31.s64 + 296;
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x825580C8;
	sub_82FA7CF0(ctx, base);
	// lis r11,-20469
	ctx.r11.s64 = -1341456384;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r30,2940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2940, ctx.r30.u32);
	// ori r11,r11,45067
	ctx.r11.u64 = ctx.r11.u64 | 45067;
	// stw r30,2920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2920, ctx.r30.u32);
	// stw r30,2944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2944, ctx.r30.u32);
	// addi r8,r31,2920
	ctx.r8.s64 = ctx.r31.s64 + 2920;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// addi r10,r31,6388
	ctx.r10.s64 = ctx.r31.s64 + 6388;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// addi r11,r31,2692
	ctx.r11.s64 = ctx.r31.s64 + 2692;
	// stw r30,2584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2584, ctx.r30.u32);
	// stw r30,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r30.u32);
	// stw r30,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r30.u32);
	// stw r30,2588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2588, ctx.r30.u32);
	// stw r30,2820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2820, ctx.r30.u32);
	// stw r30,2824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2824, ctx.r30.u32);
	// stb r27,2916(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2916, ctx.r27.u8);
	// stw r27,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r27.u32);
	// stw r27,2484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2484, ctx.r27.u32);
	// stw r30,2488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2488, ctx.r30.u32);
	// stw r30,2492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2492, ctx.r30.u32);
	// stw r30,2500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2500, ctx.r30.u32);
	// stw r30,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r30.u32);
	// stw r30,2580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2580, ctx.r30.u32);
	// stw r30,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r30.u32);
	// stw r30,2596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2596, ctx.r30.u32);
	// stw r30,2600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2600, ctx.r30.u32);
	// stw r30,2604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2604, ctx.r30.u32);
	// stw r30,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r30.u32);
	// stw r30,2612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2612, ctx.r30.u32);
	// stw r30,2616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2616, ctx.r30.u32);
	// stw r30,2620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2620, ctx.r30.u32);
	// stw r30,2624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2624, ctx.r30.u32);
	// stw r30,2836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2836, ctx.r30.u32);
	// stw r30,2840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2840, ctx.r30.u32);
	// stw r30,2844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2844, ctx.r30.u32);
	// stw r30,2848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2848, ctx.r30.u32);
	// std r30,6368(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6368, ctx.r30.u64);
	// std r30,6376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6376, ctx.r30.u64);
	// stw r30,6384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6384, ctx.r30.u32);
loc_82558178:
	// stw r30,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r30.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r30,-60(r11)
	PPC_STORE_U32(ctx.r11.u32 + -60, ctx.r30.u32);
	// stw r30,-56(r11)
	PPC_STORE_U32(ctx.r11.u32 + -56, ctx.r30.u32);
	// stw r30,-52(r11)
	PPC_STORE_U32(ctx.r11.u32 + -52, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r30.u32);
	// stw r30,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r30.u32);
	// stw r30,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r30.u32);
	// stw r30,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r30.u32);
	// stw r30,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
	// stw r30,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r30.u32);
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// stw r30,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r30.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// stw r30,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r30.u32);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// stwu r30,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r8.u32 = ea;
	// bne 0x82558178
	if (!ctx.cr0.eq) goto loc_82558178;
	// lis r28,-31956
	ctx.r28.s64 = -2094268416;
	// lwz r11,-6904(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82558700
	if (!ctx.cr6.eq) goto loc_82558700;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29220
	ctx.r3.s64 = ctx.r11.s64 + 29220;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x82558204;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x82558214;
	sub_82546708(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r29,r11,23000
	ctx.r29.s64 = ctx.r11.s64 + 23000;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// bl 0x82a75198
	ctx.lr = 0x82558230;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x82558238;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29240
	ctx.r3.s64 = ctx.r11.s64 + 29240;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8255824C;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x8255825C;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,1000
	ctx.r3.s64 = ctx.r29.s64 + 1000;
	// bl 0x82a75198
	ctx.lr = 0x82558270;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x82558278;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29260
	ctx.r3.s64 = ctx.r11.s64 + 29260;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8255828C;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x8255829C;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,2000
	ctx.r3.s64 = ctx.r29.s64 + 2000;
	// bl 0x82a75198
	ctx.lr = 0x825582B0;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x825582B8;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29280
	ctx.r3.s64 = ctx.r11.s64 + 29280;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x825582CC;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x825582DC;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,3000
	ctx.r3.s64 = ctx.r29.s64 + 3000;
	// bl 0x82a75198
	ctx.lr = 0x825582F0;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x825582F8;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29300
	ctx.r3.s64 = ctx.r11.s64 + 29300;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8255830C;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x8255831C;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,4000
	ctx.r3.s64 = ctx.r29.s64 + 4000;
	// bl 0x82a75198
	ctx.lr = 0x82558330;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x82558338;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29320
	ctx.r3.s64 = ctx.r11.s64 + 29320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8255834C;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x8255835C;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,5000
	ctx.r3.s64 = ctx.r29.s64 + 5000;
	// bl 0x82a75198
	ctx.lr = 0x82558370;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x82558378;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29340
	ctx.r3.s64 = ctx.r11.s64 + 29340;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8255838C;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x8255839C;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,6000
	ctx.r3.s64 = ctx.r29.s64 + 6000;
	// bl 0x82a75198
	ctx.lr = 0x825583B0;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x825583B8;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29360
	ctx.r3.s64 = ctx.r11.s64 + 29360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x825583CC;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x825583DC;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,7000
	ctx.r3.s64 = ctx.r29.s64 + 7000;
	// bl 0x82a75198
	ctx.lr = 0x825583F0;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x825583F8;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29380
	ctx.r3.s64 = ctx.r11.s64 + 29380;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8255840C;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x8255841C;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,8000
	ctx.r3.s64 = ctx.r29.s64 + 8000;
	// bl 0x82a75198
	ctx.lr = 0x82558430;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x82558438;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29400
	ctx.r3.s64 = ctx.r11.s64 + 29400;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8255844C;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x8255845C;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,9000
	ctx.r3.s64 = ctx.r29.s64 + 9000;
	// bl 0x82a75198
	ctx.lr = 0x82558470;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x82558478;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29424
	ctx.r3.s64 = ctx.r11.s64 + 29424;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8255848C;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x8255849C;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,10000
	ctx.r3.s64 = ctx.r29.s64 + 10000;
	// bl 0x82a75198
	ctx.lr = 0x825584B0;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x825584B8;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29448
	ctx.r3.s64 = ctx.r11.s64 + 29448;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x825584CC;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x825584DC;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,11000
	ctx.r3.s64 = ctx.r29.s64 + 11000;
	// bl 0x82a75198
	ctx.lr = 0x825584F0;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x825584F8;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29472
	ctx.r3.s64 = ctx.r11.s64 + 29472;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8255850C;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x8255851C;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,12000
	ctx.r3.s64 = ctx.r29.s64 + 12000;
	// bl 0x82a75198
	ctx.lr = 0x82558530;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x82558538;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29496
	ctx.r3.s64 = ctx.r11.s64 + 29496;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8255854C;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x8255855C;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,13000
	ctx.r3.s64 = ctx.r29.s64 + 13000;
	// bl 0x82a75198
	ctx.lr = 0x82558570;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x82558578;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29520
	ctx.r3.s64 = ctx.r11.s64 + 29520;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8255858C;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x8255859C;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,14000
	ctx.r3.s64 = ctx.r29.s64 + 14000;
	// bl 0x82a75198
	ctx.lr = 0x825585B0;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x825585B8;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29544
	ctx.r3.s64 = ctx.r11.s64 + 29544;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x825585CC;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x825585DC;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,15000
	ctx.r3.s64 = ctx.r29.s64 + 15000;
	// bl 0x82a75198
	ctx.lr = 0x825585F0;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x825585F8;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29568
	ctx.r3.s64 = ctx.r11.s64 + 29568;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8255860C;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x8255861C;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,16000
	ctx.r3.s64 = ctx.r29.s64 + 16000;
	// bl 0x82a75198
	ctx.lr = 0x82558630;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x82558638;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29592
	ctx.r3.s64 = ctx.r11.s64 + 29592;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8255864C;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x8255865C;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,17000
	ctx.r3.s64 = ctx.r29.s64 + 17000;
	// bl 0x82a75198
	ctx.lr = 0x82558670;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x82558678;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29616
	ctx.r3.s64 = ctx.r11.s64 + 29616;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8255868C;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x8255869C;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,18000
	ctx.r3.s64 = ctx.r29.s64 + 18000;
	// bl 0x82a75198
	ctx.lr = 0x825586B0;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x825586B8;
	sub_825469E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,29640
	ctx.r3.s64 = ctx.r11.s64 + 29640;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x825586CC;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x825586DC;
	sub_82546708(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r29,19000
	ctx.r3.s64 = ctx.r29.s64 + 19000;
	// bl 0x82a75198
	ctx.lr = 0x825586F0;
	sub_82A75198(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x825586F8;
	sub_825469E0(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,-6904(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6904, ctx.r27.u32);
loc_82558700:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82691500
	ctx.lr = 0x82558708;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825587ac
	if (ctx.cr0.eq) goto loc_825587AC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// addi r11,r11,-14596
	ctx.r11.s64 = ctx.r11.s64 + -14596;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
	// bl 0x82ae05e8
	ctx.lr = 0x8255873C;
	sub_82AE05E8(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-14652
	ctx.r3.s64 = ctx.r11.s64 + -14652;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x82558750;
	sub_82547F38(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-14624
	ctx.r3.s64 = ctx.r11.s64 + -14624;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82547f38
	ctx.lr = 0x82558764;
	sub_82547F38(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r11,r11,6528
	ctx.r11.u64 = ctx.r11.u64 | 6528;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82558790
	if (!ctx.cr6.eq) goto loc_82558790;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x82558788;
	sub_82546708(ctx, base);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// b 0x82558794
	goto loc_82558794;
loc_82558790:
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
loc_82558794:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82546708
	ctx.lr = 0x825587A4;
	sub_82546708(ctx, base);
	// stw r3,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r3.u32);
	// b 0x825587b0
	goto loc_825587B0;
loc_825587AC:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_825587B0:
	// stw r29,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r29.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x825587BC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825587dc
	if (ctx.cr0.eq) goto loc_825587DC;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14580
	ctx.r10.s64 = ctx.r10.s64 + -14580;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x825587e0
	goto loc_825587E0;
loc_825587DC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825587E0:
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x825587EC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255880c
	if (ctx.cr0.eq) goto loc_8255880C;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-14540
	ctx.r10.s64 = ctx.r10.s64 + -14540;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82558810
	goto loc_82558810;
loc_8255880C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82558810:
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8255881C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255883c
	if (ctx.cr0.eq) goto loc_8255883C;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-24640
	ctx.r10.s64 = ctx.r10.s64 + -24640;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82558840
	goto loc_82558840;
loc_8255883C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82558840:
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// addi r11,r10,-29904
	ctx.r11.s64 = ctx.r10.s64 + -29904;
	// addi r10,r9,15600
	ctx.r10.s64 = ctx.r9.s64 + 15600;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r29,r31,2960
	ctx.r29.s64 = ctx.r31.s64 + 2960;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,48
	ctx.r5.s64 = 48;
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa77c0
	ctx.lr = 0x82558894;
	sub_82FA77C0(ctx, base);
	// li r5,3360
	ctx.r5.s64 = 3360;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r29,48
	ctx.r3.s64 = ctx.r29.s64 + 48;
	// bl 0x82fa7c48
	ctx.lr = 0x825588A4;
	sub_82FA7C48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559f08
	ctx.lr = 0x825588AC;
	sub_82559F08(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,452
	ctx.r3.s64 = ctx.r31.s64 + 452;
	// bl 0x82fa7cf0
	ctx.lr = 0x825588BC;
	sub_82FA7CF0(ctx, base);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// bl 0x82fa7cf0
	ctx.lr = 0x825588D0;
	sub_82FA7CF0(ctx, base);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
	// bl 0x82fa7cf0
	ctx.lr = 0x825588E0;
	sub_82FA7CF0(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// ori r11,r11,6584
	ctx.r11.u64 = ctx.r11.u64 | 6584;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,6532
	ctx.r3.s64 = ctx.r3.s64 + 6532;
	// stwx r27,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82558900;
	sub_82FA7CF0(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addis r8,r31,3
	ctx.r8.s64 = ctx.r31.s64 + 196608;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lfs f0,-2340(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,6565
	ctx.r8.s64 = ctx.r8.s64 + 6565;
	// addi r11,r11,6572
	ctx.r11.s64 = ctx.r11.s64 + 6572;
	// lfs f13,-24756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f13.f64 = double(temp.f32);
loc_8255892C:
	// stbx r30,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u8);
	// stfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfsu f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8255892c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8255892C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255894C"))) PPC_WEAK_FUNC(sub_8255894C);
PPC_FUNC_IMPL(__imp__sub_8255894C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558950"))) PPC_WEAK_FUNC(sub_82558950);
PPC_FUNC_IMPL(__imp__sub_82558950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82558958;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2504);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825589ac
	if (!ctx.cr6.eq) goto loc_825589AC;
	// lwz r11,2484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2484);
	// addi r3,r3,480
	ctx.r3.s64 = ctx.r3.s64 + 480;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82558980
	if (ctx.cr6.eq) goto loc_82558980;
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
loc_82558980:
	// addi r5,r31,2588
	ctx.r5.s64 = ctx.r31.s64 + 2588;
	// addi r4,r31,2584
	ctx.r4.s64 = ctx.r31.s64 + 2584;
	// bl 0x8255a648
	ctx.lr = 0x8255898C;
	sub_8255A648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825589ac
	if (ctx.cr0.eq) goto loc_825589AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r11.u32);
	// bl 0x82558d38
	ctx.lr = 0x825589A4;
	sub_82558D38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82558b04
	goto loc_82558B04;
loc_825589AC:
	// lwz r11,2484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2484);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82558a08
	if (!ctx.cr6.eq) goto loc_82558A08;
	// lwz r11,2508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82558a08
	if (!ctx.cr6.gt) goto loc_82558A08;
	// lwz r11,2544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82558a08
	if (!ctx.cr6.gt) goto loc_82558A08;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// bl 0x82adfe80
	ctx.lr = 0x825589D8;
	sub_82ADFE80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825589f0
	if (!ctx.cr6.eq) goto loc_825589F0;
	// lwz r11,2536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2536);
	// lwz r10,2540(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2540);
	// b 0x825589f8
	goto loc_825589F8;
loc_825589F0:
	// lwz r11,2572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2572);
	// lwz r10,2576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2576);
loc_825589F8:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// andi. r11,r11,2367
	ctx.r11.u64 = ctx.r11.u64 & 2367;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82558a0c
	goto loc_82558A0C;
loc_82558A08:
	// li r11,4095
	ctx.r11.s64 = 4095;
loc_82558A0C:
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ae0320
	ctx.lr = 0x82558A20;
	sub_82AE0320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82558b04
	if (ctx.cr0.lt) goto loc_82558B04;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r4,8448
	ctx.r4.s64 = 553648128;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// ori r4,r4,24576
	ctx.r4.u64 = ctx.r4.u64 | 24576;
	// rlwinm r29,r11,0,0,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x82691410
	ctx.lr = 0x82558A44;
	sub_82691410(ctx, base);
	// stw r3,2584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2584, ctx.r3.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a78230
	ctx.lr = 0x82558A5C;
	sub_82A78230(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,2588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2588, ctx.r3.u32);
	// lwz r11,23204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82558afc
	if (ctx.cr6.eq) goto loc_82558AFC;
	// lwz r3,2584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82558afc
	if (ctx.cr6.eq) goto loc_82558AFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82558afc
	if (ctx.cr6.eq) goto loc_82558AFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82fa7cf0
	ctx.lr = 0x82558A94;
	sub_82FA7CF0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2588);
	// bl 0x82fa7cf0
	ctx.lr = 0x82558AA4;
	sub_82FA7CF0(ctx, base);
	// lwz r11,2484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2484);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82558ab8
	if (ctx.cr6.eq) goto loc_82558AB8;
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
loc_82558AB8:
	// addi r30,r31,452
	ctx.r30.s64 = ctx.r31.s64 + 452;
	// lwz r9,2588(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2588);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r7,2584(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2584);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ae0370
	ctx.lr = 0x82558ADC;
	sub_82AE0370(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82558aec
	if (ctx.cr6.eq) goto loc_82558AEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a74d28
	ctx.lr = 0x82558AEC;
	sub_82A74D28(ctx, base);
loc_82558AEC:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// b 0x82558b04
	goto loc_82558B04;
loc_82558AFC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82558B04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82558B0C"))) PPC_WEAK_FUNC(sub_82558B0C);
PPC_FUNC_IMPL(__imp__sub_82558B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558B10"))) PPC_WEAK_FUNC(sub_82558B10);
PPC_FUNC_IMPL(__imp__sub_82558B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82558B18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2832);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82558b64
	if (ctx.cr6.eq) goto loc_82558B64;
	// lwz r4,2820(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2820);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82558b94
	if (ctx.cr6.eq) goto loc_82558B94;
	// lwz r5,2824(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2824);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82558b94
	if (ctx.cr6.eq) goto loc_82558B94;
	// lwz r11,2484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2484);
	// addi r3,r3,480
	ctx.r3.s64 = ctx.r3.s64 + 480;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82558b5c
	if (ctx.cr6.eq) goto loc_82558B5C;
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
loc_82558B5C:
	// bl 0x8255a7c8
	ctx.lr = 0x82558B60;
	sub_8255A7C8(ctx, base);
	// b 0x82558b94
	goto loc_82558B94;
loc_82558B64:
	// lwz r3,2820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2820);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82558b80
	if (ctx.cr6.eq) goto loc_82558B80;
	// lis r4,8448
	ctx.r4.s64 = 553648128;
	// ori r4,r4,24576
	ctx.r4.u64 = ctx.r4.u64 | 24576;
	// bl 0x82691460
	ctx.lr = 0x82558B7C;
	sub_82691460(ctx, base);
	// stw r29,2820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2820, ctx.r29.u32);
loc_82558B80:
	// lwz r3,2824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2824);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82558b94
	if (ctx.cr6.eq) goto loc_82558B94;
	// bl 0x82a782c0
	ctx.lr = 0x82558B90;
	sub_82A782C0(ctx, base);
	// stw r29,2824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2824, ctx.r29.u32);
loc_82558B94:
	// lwz r11,2584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2584);
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r10,2588(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2588);
	// addi r28,r31,2584
	ctx.r28.s64 = ctx.r31.s64 + 2584;
	// lwz r9,2592(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2592);
	// addi r27,r31,2588
	ctx.r27.s64 = ctx.r31.s64 + 2588;
	// lwz r8,2504(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// stw r30,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r30.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,2820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2820, ctx.r11.u32);
	// stw r10,2824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2824, ctx.r10.u32);
	// stw r9,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r9.u32);
	// bne cr6,0x82558c04
	if (!ctx.cr6.eq) goto loc_82558C04;
	// lwz r11,2484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2484);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82558bdc
	if (ctx.cr6.eq) goto loc_82558BDC;
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
loc_82558BDC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8255a648
	ctx.lr = 0x82558BE8;
	sub_8255A648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82558c04
	if (ctx.cr0.eq) goto loc_82558C04;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r11.u32);
	// bl 0x82558d38
	ctx.lr = 0x82558C00;
	sub_82558D38(ctx, base);
	// b 0x82558d28
	goto loc_82558D28;
loc_82558C04:
	// lwz r11,2484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2484);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82558c64
	if (!ctx.cr6.eq) goto loc_82558C64;
	// lwz r11,2508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82558c64
	if (!ctx.cr6.gt) goto loc_82558C64;
	// lwz r11,2544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82558c64
	if (!ctx.cr6.gt) goto loc_82558C64;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// bl 0x82adfe80
	ctx.lr = 0x82558C34;
	sub_82ADFE80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82558c4c
	if (!ctx.cr6.eq) goto loc_82558C4C;
	// lwz r11,2536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2536);
	// lwz r10,2540(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2540);
	// b 0x82558c54
	goto loc_82558C54;
loc_82558C4C:
	// lwz r11,2572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2572);
	// lwz r10,2576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2576);
loc_82558C54:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// andi. r11,r11,2367
	ctx.r11.u64 = ctx.r11.u64 & 2367;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82558c68
	goto loc_82558C68;
loc_82558C64:
	// li r11,4095
	ctx.r11.s64 = 4095;
loc_82558C68:
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ae0320
	ctx.lr = 0x82558C7C;
	sub_82AE0320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82558d2c
	if (ctx.cr0.lt) goto loc_82558D2C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r4,8448
	ctx.r4.s64 = 553648128;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// ori r4,r4,24576
	ctx.r4.u64 = ctx.r4.u64 | 24576;
	// rlwinm r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x82691410
	ctx.lr = 0x82558CA0;
	sub_82691410(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82a78230
	ctx.lr = 0x82558CB8;
	sub_82A78230(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r29,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r29.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82558CD0;
	sub_82FA7CF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82558CE0;
	sub_82FA7CF0(ctx, base);
	// addi r29,r31,452
	ctx.r29.s64 = ctx.r31.s64 + 452;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82558CF4;
	sub_82FA7CF0(ctx, base);
	// lwz r11,2484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2484);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82558d08
	if (ctx.cr6.eq) goto loc_82558D08;
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
loc_82558D08:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82ae0370
	ctx.lr = 0x82558D28;
	sub_82AE0370(ctx, base);
loc_82558D28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82558D2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82558D34"))) PPC_WEAK_FUNC(sub_82558D34);
PPC_FUNC_IMPL(__imp__sub_82558D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558D38"))) PPC_WEAK_FUNC(sub_82558D38);
PPC_FUNC_IMPL(__imp__sub_82558D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82558D40;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2592);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82558dac
	if (!ctx.cr6.eq) goto loc_82558DAC;
	// lwz r11,2488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,2484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2484);
	// beq cr6,0x82558d74
	if (ctx.cr6.eq) goto loc_82558D74;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82558d80
	if (ctx.cr6.eq) goto loc_82558D80;
	// addi r3,r3,480
	ctx.r3.s64 = ctx.r3.s64 + 480;
	// b 0x82558d84
	goto loc_82558D84;
loc_82558D74:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r3,r28,480
	ctx.r3.s64 = ctx.r28.s64 + 480;
	// beq cr6,0x82558d84
	if (ctx.cr6.eq) goto loc_82558D84;
loc_82558D80:
	// addi r3,r28,1480
	ctx.r3.s64 = ctx.r28.s64 + 1480;
loc_82558D84:
	// lwz r11,2504(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82558dac
	if (!ctx.cr6.eq) goto loc_82558DAC;
	// lwz r5,2588(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2588);
	// lwz r4,2584(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2584);
	// bl 0x8255a6e8
	ctx.lr = 0x82558D9C;
	sub_8255A6E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82558dac
	if (ctx.cr0.eq) goto loc_82558DAC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2592(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2592, ctx.r11.u32);
loc_82558DAC:
	// lwz r11,2584(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2584);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r18,r23
	ctx.r18.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82558f04
	if (!ctx.cr6.gt) goto loc_82558F04;
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// addi r26,r28,8032
	ctx.r26.s64 = ctx.r28.s64 + 8032;
loc_82558DD0:
	// lwz r11,2584(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2584);
	// addi r31,r26,-416
	ctx.r31.s64 = ctx.r26.s64 + -416;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r29,r11,r20
	ctx.r29.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82af3e40
	ctx.lr = 0x82558DF8;
	sub_82AF3E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x82af44c8
	ctx.lr = 0x82558E04;
	sub_82AF44C8(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82af3ed8
	ctx.lr = 0x82558E20;
	sub_82AF3ED8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x82af44c8
	ctx.lr = 0x82558E2C;
	sub_82AF44C8(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82558ee4
	if (!ctx.cr6.gt) goto loc_82558EE4;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
loc_82558E40:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// add r31,r22,r11
	ctx.r31.u64 = ctx.r22.u64 + ctx.r11.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r25,36(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82558ed0
	if (!ctx.cr6.gt) goto loc_82558ED0;
	// add r11,r19,r21
	ctx.r11.u64 = ctx.r19.u64 + ctx.r21.u64;
	// rlwinm r24,r11,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_82558E64:
	// add r11,r24,r30
	ctx.r11.u64 = ctx.r24.u64 + ctx.r30.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r27,r11,8448
	ctx.r27.s64 = ctx.r11.s64 + 8448;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82af4170
	ctx.lr = 0x82558EAC;
	sub_82AF4170(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82af44c8
	ctx.lr = 0x82558EC0;
	sub_82AF44C8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82558e64
	if (ctx.cr6.lt) goto loc_82558E64;
loc_82558ED0:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,44
	ctx.r22.s64 = ctx.r22.s64 + 44;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82558e40
	if (ctx.cr6.lt) goto loc_82558E40;
loc_82558EE4:
	// lwz r11,2584(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2584);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// addi r20,r20,52
	ctx.r20.s64 = ctx.r20.s64 + 52;
	// addi r19,r19,18
	ctx.r19.s64 = ctx.r19.s64 + 18;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82558dd0
	if (ctx.cr6.lt) goto loc_82558DD0;
loc_82558F04:
	// lwz r11,428(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 428);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,448(r28)
	PPC_STORE_U32(ctx.r28.u32 + 448, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82558f20
	if (ctx.cr6.eq) goto loc_82558F20;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82ae0600
	ctx.lr = 0x82558F20;
	sub_82AE0600(ctx, base);
loc_82558F20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82558F2C"))) PPC_WEAK_FUNC(sub_82558F2C);
PPC_FUNC_IMPL(__imp__sub_82558F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558F30"))) PPC_WEAK_FUNC(sub_82558F30);
PPC_FUNC_IMPL(__imp__sub_82558F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82558F38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2940(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2940);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825591d8
	if (!ctx.cr6.eq) goto loc_825591D8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r3,52
	ctx.r3.s64 = 52;
	// lwz r11,23204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23204);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82691500
	ctx.lr = 0x82558F64;
	sub_82691500(ctx, base);
	// stw r3,2940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2940, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r5,r11,29664
	ctx.r5.s64 = ctx.r11.s64 + 29664;
	// bl 0x82fa5590
	ctx.lr = 0x82558F78;
	sub_82FA5590(ctx, base);
	// lwz r10,2940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,3692
	ctx.r3.s64 = 3692;
	// stb r30,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r30.u8);
	// lwz r10,2940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// stb r30,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r30.u8);
	// lwz r10,2940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// sth r9,26(r10)
	PPC_STORE_U16(ctx.r10.u32 + 26, ctx.r9.u16);
	// lwz r10,2940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// sth r30,28(r10)
	PPC_STORE_U16(ctx.r10.u32 + 28, ctx.r30.u16);
	// lwz r10,2940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// sth r11,30(r10)
	PPC_STORE_U16(ctx.r10.u32 + 30, ctx.r11.u16);
	// bl 0x82691580
	ctx.lr = 0x82558FB4;
	sub_82691580(ctx, base);
	// lwz r11,2940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// stw r3,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r3.u32);
	// lwz r11,2940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// lwz r11,2940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// lwz r11,2940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// stw r30,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825591d8
	if (!ctx.cr6.gt) goto loc_825591D8;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// ori r6,r9,65535
	ctx.r6.u64 = ctx.r9.u64 | 65535;
	// lfs f0,-24756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r11,5200
	ctx.r5.s64 = ctx.r11.s64 + 5200;
loc_82558FFC:
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,2940(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// mulli r11,r8,96
	ctx.r11.s64 = ctx.r8.s64 * 96;
	// lwzx r9,r10,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// lwz r7,44(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mulli r10,r9,52
	ctx.r10.s64 = ctx.r9.s64 * 52;
	// lfs f13,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r7,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// lwz r7,2940(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,44(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,2940(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,44(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f13,8(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r7,2940(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,44(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f13,12(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r7,2940(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,44(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f13,16(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lwz r7,2940(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,44(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f13,20(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r7,2940(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,44(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f13,24(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// lwz r7,2940(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,44(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f13,28(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 28, temp.u32);
	// lwz r7,2940(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,44(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f13,32(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r7,2940(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,44(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f13,36(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 36, temp.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// bne cr6,0x825590e8
	if (!ctx.cr6.eq) goto loc_825590E8;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// b 0x825590f0
	goto loc_825590F0;
loc_825590E8:
	// rlwinm r7,r7,2,14,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FFFC;
	// lwzx r7,r7,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
loc_825590F0:
	// lwz r4,2940(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r7,44(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// sth r3,40(r7)
	PPC_STORE_U16(ctx.r7.u32 + 40, ctx.r3.u16);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// bne cr6,0x82559118
	if (!ctx.cr6.eq) goto loc_82559118;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// b 0x82559120
	goto loc_82559120;
loc_82559118:
	// rlwinm r7,r7,2,14,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FFFC;
	// lwzx r7,r7,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
loc_82559120:
	// lwz r4,2940(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r7,44(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// sth r3,42(r7)
	PPC_STORE_U16(ctx.r7.u32 + 42, ctx.r3.u16);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// bne cr6,0x82559148
	if (!ctx.cr6.eq) goto loc_82559148;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// b 0x82559150
	goto loc_82559150;
loc_82559148:
	// rlwinm r7,r7,2,14,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FFFC;
	// lwzx r7,r7,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
loc_82559150:
	// lwz r4,2940(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// clrlwi r3,r7,16
	ctx.r3.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r7,r9,405
	ctx.r7.s64 = ctx.r9.s64 + 405;
	// clrlwi r27,r9,16
	ctx.r27.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r26,r7,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,44(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r3,44(r7)
	PPC_STORE_U16(ctx.r7.u32 + 44, ctx.r3.u16);
	// lwz r7,2940(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// lwz r7,44(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stb r30,50(r7)
	PPC_STORE_U8(ctx.r7.u32 + 50, ctx.r30.u8);
	// lwz r7,2940(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// lwz r7,44(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// sth r6,48(r7)
	PPC_STORE_U16(ctx.r7.u32 + 48, ctx.r6.u16);
	// lwz r7,2940(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// lwz r7,44(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// sth r27,46(r10)
	PPC_STORE_U16(ctx.r10.u32 + 46, ctx.r27.u16);
	// lfs f13,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r26,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r31.u32, temp.u32);
	// lfs f13,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,6484(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 6484, temp.u32);
	// lfs f13,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,6488(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 6488, temp.u32);
	// stfs f0,6492(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 6492, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82558ffc
	if (ctx.cr6.lt) goto loc_82558FFC;
loc_825591D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825591E4"))) PPC_WEAK_FUNC(sub_825591E4);
PPC_FUNC_IMPL(__imp__sub_825591E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825591E8"))) PPC_WEAK_FUNC(sub_825591E8);
PPC_FUNC_IMPL(__imp__sub_825591E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825591F0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2944(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2944);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825592e4
	if (!ctx.cr6.eq) goto loc_825592E4;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,23204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23204);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825592dc
	if (!ctx.cr6.gt) goto loc_825592DC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r28,-31956
	ctx.r28.s64 = -2094268416;
	// lfs f31,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f31.f64 = double(temp.f32);
loc_82559234:
	// addi r11,r31,405
	ctx.r11.s64 = ctx.r31.s64 + 405;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8255926c
	if (!ctx.cr6.eq) goto loc_8255926C;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f0,6484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8255926c
	if (!ctx.cr6.eq) goto loc_8255926C;
	// lfs f0,6488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6488);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x825592c4
	if (ctx.cr6.eq) goto loc_825592C4;
loc_8255926C:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r11,r11,6584
	ctx.r11.u64 = ctx.r11.u64 | 6584;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825592b8
	if (ctx.cr6.eq) goto loc_825592B8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x825592c4
	if (ctx.cr6.eq) goto loc_825592C4;
	// cmpwi cr6,r31,28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 28, ctx.xer);
	// beq cr6,0x825592c4
	if (ctx.cr6.eq) goto loc_825592C4;
	// cmpwi cr6,r31,29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 29, ctx.xer);
	// beq cr6,0x825592c4
	if (ctx.cr6.eq) goto loc_825592C4;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// beq cr6,0x825592c4
	if (ctx.cr6.eq) goto loc_825592C4;
	// cmpwi cr6,r31,36
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 36, ctx.xer);
	// beq cr6,0x825592c4
	if (ctx.cr6.eq) goto loc_825592C4;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x825592c4
	if (ctx.cr6.eq) goto loc_825592C4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x825592c4
	if (ctx.cr6.eq) goto loc_825592C4;
loc_825592B8:
	// lwz r5,-6900(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6900);
	// lwz r3,2920(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2920);
	// bl 0x8282bd88
	ctx.lr = 0x825592C4;
	sub_8282BD88(ctx, base);
loc_825592C4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82559234
	if (ctx.cr6.lt) goto loc_82559234;
loc_825592DC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2944(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2944, ctx.r11.u32);
loc_825592E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825592F4"))) PPC_WEAK_FUNC(sub_825592F4);
PPC_FUNC_IMPL(__imp__sub_825592F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825592F8"))) PPC_WEAK_FUNC(sub_825592F8);
PPC_FUNC_IMPL(__imp__sub_825592F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82559300;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2496);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825594d8
	if (!ctx.cr6.eq) goto loc_825594D8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r10,2584(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2584);
	// lwz r11,23204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23204);
	// lwz r22,0(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r24,4(r22)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ble cr6,0x825594d8
	if (!ctx.cr6.gt) goto loc_825594D8;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r23,-31956
	ctx.r23.s64 = -2094268416;
	// addi r21,r11,5200
	ctx.r21.s64 = ctx.r11.s64 + 5200;
	// lfs f31,-24756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f31.f64 = double(temp.f32);
loc_82559358:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r29,26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 26, ctx.xer);
	// lwzx r30,r11,r21
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// beq cr6,0x825593d0
	if (ctx.cr6.eq) goto loc_825593D0;
	// cmplwi cr6,r29,27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 27, ctx.xer);
	// beq cr6,0x825593d0
	if (ctx.cr6.eq) goto loc_825593D0;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// beq cr6,0x825593d0
	if (ctx.cr6.eq) goto loc_825593D0;
	// cmplwi cr6,r29,29
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 29, ctx.xer);
	// beq cr6,0x825593d0
	if (ctx.cr6.eq) goto loc_825593D0;
	// cmplwi cr6,r29,30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 30, ctx.xer);
	// beq cr6,0x825593d0
	if (ctx.cr6.eq) goto loc_825593D0;
	// cmplwi cr6,r29,35
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 35, ctx.xer);
	// beq cr6,0x825593d0
	if (ctx.cr6.eq) goto loc_825593D0;
	// mulli r11,r29,96
	ctx.r11.s64 = ctx.r29.s64 * 96;
	// addi r8,r30,405
	ctx.r8.s64 = ctx.r30.s64 + 405;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r9,r30,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lfs f0,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// add r31,r8,r28
	ctx.r31.u64 = ctx.r8.u64 + ctx.r28.u64;
	// addi r11,r9,6484
	ctx.r11.s64 = ctx.r9.s64 + 6484;
	// stfsx f0,r8,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r28.u32, temp.u32);
	// lfs f0,84(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6484(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 6484, temp.u32);
	// lfs f0,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6488(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 6488, temp.u32);
	// b 0x8255940c
	goto loc_8255940C;
loc_825593D0:
	// addi r10,r30,405
	ctx.r10.s64 = ctx.r30.s64 + 405;
	// mulli r11,r29,96
	ctx.r11.s64 = ctx.r29.s64 * 96;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r9,r28
	ctx.r31.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lfs f0,80(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,6484
	ctx.r11.s64 = ctx.r10.s64 + 6484;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,84(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6484(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6484, temp.u32);
	// lfs f0,88(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6488(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6488, temp.u32);
loc_8255940C:
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x8255942c
	if (!ctx.cr6.eq) goto loc_8255942C;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x8255942c
	if (!ctx.cr6.eq) goto loc_8255942C;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x825594c4
	if (ctx.cr6.eq) goto loc_825594C4;
loc_8255942C:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r11,r11,6584
	ctx.r11.u64 = ctx.r11.u64 | 6584;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82559478
	if (ctx.cr6.eq) goto loc_82559478;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825594c4
	if (ctx.cr6.eq) goto loc_825594C4;
	// cmplwi cr6,r29,14
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 14, ctx.xer);
	// beq cr6,0x825594c4
	if (ctx.cr6.eq) goto loc_825594C4;
	// cmplwi cr6,r29,19
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 19, ctx.xer);
	// beq cr6,0x825594c4
	if (ctx.cr6.eq) goto loc_825594C4;
	// cmplwi cr6,r29,33
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 33, ctx.xer);
	// beq cr6,0x825594c4
	if (ctx.cr6.eq) goto loc_825594C4;
	// cmplwi cr6,r29,36
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 36, ctx.xer);
	// beq cr6,0x825594c4
	if (ctx.cr6.eq) goto loc_825594C4;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x825594c4
	if (ctx.cr6.eq) goto loc_825594C4;
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// beq cr6,0x825594c4
	if (ctx.cr6.eq) goto loc_825594C4;
loc_82559478:
	// lwz r3,2920(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2920);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82559494
	if (ctx.cr6.eq) goto loc_82559494;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,-6900(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + -6900);
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x8282bd88
	ctx.lr = 0x82559494;
	sub_8282BD88(ctx, base);
loc_82559494:
	// addi r27,r28,2924
	ctx.r27.s64 = ctx.r28.s64 + 2924;
	// li r26,4
	ctx.r26.s64 = 4;
loc_8255949C:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825594b8
	if (ctx.cr6.eq) goto loc_825594B8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,-6900(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + -6900);
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x8282bd88
	ctx.lr = 0x825594B8;
	sub_8282BD88(ctx, base);
loc_825594B8:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x8255949c
	if (!ctx.cr0.eq) goto loc_8255949C;
loc_825594C4:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82559358
	if (ctx.cr6.lt) goto loc_82559358;
loc_825594D8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825594E4"))) PPC_WEAK_FUNC(sub_825594E4);
PPC_FUNC_IMPL(__imp__sub_825594E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825594E8"))) PPC_WEAK_FUNC(sub_825594E8);
PPC_FUNC_IMPL(__imp__sub_825594E8) {
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
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r3,r3,6592
	ctx.r3.u64 = ctx.r3.u64 | 6592;
	// bl 0x82691500
	ctx.lr = 0x82559508;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82559520
	if (ctx.cr0.eq) goto loc_82559520;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,480
	ctx.r4.s64 = ctx.r31.s64 + 480;
	// bl 0x825577d8
	ctx.lr = 0x8255951C;
	sub_825577D8(ctx, base);
	// b 0x82559524
	goto loc_82559524;
loc_82559520:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82559524:
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

__attribute__((alias("__imp__sub_82559538"))) PPC_WEAK_FUNC(sub_82559538);
PPC_FUNC_IMPL(__imp__sub_82559538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82559540;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82559598
	if (ctx.cr6.eq) goto loc_82559598;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// li r28,4
	ctx.r28.s64 = 4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82559560:
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82559578
	if (ctx.cr6.eq) goto loc_82559578;
	// bl 0x82a782c0
	ctx.lr = 0x82559574;
	sub_82A782C0(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_82559578:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8255958c
	if (ctx.cr6.eq) goto loc_8255958C;
	// bl 0x82a782c0
	ctx.lr = 0x82559588;
	sub_82A782C0(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_8255958C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stwu r30,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r29.u32 = ea;
	// bne 0x82559560
	if (!ctx.cr0.eq) goto loc_82559560;
loc_82559598:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825595A0"))) PPC_WEAK_FUNC(sub_825595A0);
PPC_FUNC_IMPL(__imp__sub_825595A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x825595A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82559774
	if (!ctx.cr6.eq) goto loc_82559774;
	// lwz r11,452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// addi r27,r3,452
	ctx.r27.s64 = ctx.r3.s64 + 452;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82559774
	if (ctx.cr6.eq) goto loc_82559774;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a74d28
	ctx.lr = 0x825595D8;
	sub_82A74D28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x825595fc
	if (ctx.cr0.lt) goto loc_825595FC;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r28,r31,480
	ctx.r28.s64 = ctx.r31.s64 + 480;
	// addi r4,r11,-6896
	ctx.r4.s64 = ctx.r11.s64 + -6896;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82adfe90
	ctx.lr = 0x825595F4;
	sub_82ADFE90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82559674
	if (ctx.cr0.eq) goto loc_82559674;
loc_825595FC:
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// ori r8,r11,26125
	ctx.r8.u64 = ctx.r11.u64 | 26125;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lwz r11,21292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21292);
	// lis r6,-31958
	ctx.r6.s64 = -2094399488;
	// addi r7,r7,27984
	ctx.r7.s64 = ctx.r7.s64 + 27984;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lfs f0,-24756(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,852(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 852);
	ctx.f13.f64 = double(temp.f32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// addi r9,r6,23000
	ctx.r9.s64 = ctx.r6.s64 + 23000;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// addi r28,r31,480
	ctx.r28.s64 = ctx.r31.s64 + 480;
	// clrlwi r8,r11,9
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21292, ctx.r11.u32);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// oris r11,r8,16256
	ctx.r11.u64 = ctx.r8.u64 | 1065353216;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
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
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 * 1000;
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
	// bl 0x82a75198
	ctx.lr = 0x82559674;
	sub_82A75198(ctx, base);
loc_82559674:
	// li r5,1000
	ctx.r5.s64 = 1000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
	// bl 0x82a75198
	ctx.lr = 0x82559684;
	sub_82A75198(ctx, base);
	// lwz r11,2508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x8255969c
	if (ctx.cr6.gt) goto loc_8255969C;
	// lwz r11,2544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8255975c
	if (!ctx.cr6.gt) goto loc_8255975C;
loc_8255969C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82adfe80
	ctx.lr = 0x825596A4;
	sub_82ADFE80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
	// beq 0x82559710
	if (ctx.cr0.eq) goto loc_82559710;
	// lwz r11,2508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8255975c
	if (!ctx.cr6.gt) goto loc_8255975C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_825596D0:
	// lwz r11,2520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2520);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825596f8
	if (ctx.cr6.eq) goto loc_825596F8;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82adff00
	ctx.lr = 0x825596F8;
	sub_82ADFF00(ctx, base);
loc_825596F8:
	// lwz r11,2508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2508);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825596d0
	if (ctx.cr6.lt) goto loc_825596D0;
	// b 0x8255975c
	goto loc_8255975C;
loc_82559710:
	// lwz r11,2544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8255975c
	if (!ctx.cr6.gt) goto loc_8255975C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82559720:
	// lwz r11,2556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2556);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82559748
	if (ctx.cr6.eq) goto loc_82559748;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82adff00
	ctx.lr = 0x82559748;
	sub_82ADFF00(ctx, base);
loc_82559748:
	// lwz r11,2544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2544);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82559720
	if (ctx.cr6.lt) goto loc_82559720;
loc_8255975C:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x8255976C;
	sub_82FA7CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558950
	ctx.lr = 0x82559774;
	sub_82558950(ctx, base);
loc_82559774:
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8255987c
	if (!ctx.cr6.eq) goto loc_8255987C;
	// lwz r11,452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// addi r30,r31,452
	ctx.r30.s64 = ctx.r31.s64 + 452;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8255987c
	if (ctx.cr6.eq) goto loc_8255987C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a74d28
	ctx.lr = 0x82559798;
	sub_82A74D28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82559864
	if (!ctx.cr0.lt) goto loc_82559864;
	// lwz r11,2580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82559864
	if (!ctx.cr6.eq) goto loc_82559864;
	// lwz r11,2592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825597f8
	if (ctx.cr6.eq) goto loc_825597F8;
	// lwz r4,2584(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2584);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825597f0
	if (ctx.cr6.eq) goto loc_825597F0;
	// lwz r5,2588(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2588);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825597f0
	if (ctx.cr6.eq) goto loc_825597F0;
	// lwz r11,2484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2484);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825597e4
	if (ctx.cr6.eq) goto loc_825597E4;
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
loc_825597E4:
	// bl 0x8255a7c8
	ctx.lr = 0x825597E8;
	sub_8255A7C8(ctx, base);
	// stw r26,2584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2584, ctx.r26.u32);
	// b 0x82559830
	goto loc_82559830;
loc_825597F0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82559814
	if (!ctx.cr6.eq) goto loc_82559814;
loc_825597F8:
	// lwz r3,2584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82559814
	if (ctx.cr6.eq) goto loc_82559814;
	// lis r4,8448
	ctx.r4.s64 = 553648128;
	// ori r4,r4,24576
	ctx.r4.u64 = ctx.r4.u64 | 24576;
	// bl 0x82691460
	ctx.lr = 0x82559810;
	sub_82691460(ctx, base);
	// stw r26,2584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2584, ctx.r26.u32);
loc_82559814:
	// lwz r11,2592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82559834
	if (!ctx.cr6.eq) goto loc_82559834;
	// lwz r3,2588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2588);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82559834
	if (ctx.cr6.eq) goto loc_82559834;
	// bl 0x82a782c0
	ctx.lr = 0x82559830;
	sub_82A782C0(ctx, base);
loc_82559830:
	// stw r26,2588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2588, ctx.r26.u32);
loc_82559834:
	// li r5,1000
	ctx.r5.s64 = 1000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// bl 0x82fa7cf0
	ctx.lr = 0x82559844;
	sub_82FA7CF0(ctx, base);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
	// bl 0x82fa7cf0
	ctx.lr = 0x82559854;
	sub_82FA7CF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stw r11,2580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2580, ctx.r11.u32);
	// b 0x825598b0
	goto loc_825598B0;
loc_82559864:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82559874;
	sub_82FA7CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558d38
	ctx.lr = 0x8255987C;
	sub_82558D38(ctx, base);
loc_8255987C:
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825598b0
	if (!ctx.cr6.eq) goto loc_825598B0;
	// lwz r11,2492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825598b0
	if (!ctx.cr6.eq) goto loc_825598B0;
	// lwz r11,2920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825598b0
	if (ctx.cr6.eq) goto loc_825598B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825592f8
	ctx.lr = 0x825598A8;
	sub_825592F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2492, ctx.r11.u32);
loc_825598B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825598B8"))) PPC_WEAK_FUNC(sub_825598B8);
PPC_FUNC_IMPL(__imp__sub_825598B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825598C0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825598DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82559900
	if (!ctx.cr0.eq) goto loc_82559900;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825598FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82559918
	goto loc_82559918;
loc_82559900:
	// lwz r11,2488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82559918
	if (ctx.cr6.eq) goto loc_82559918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558b10
	ctx.lr = 0x82559914;
	sub_82558B10(ctx, base);
	// stw r27,2488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2488, ctx.r27.u32);
loc_82559918:
	// lwz r11,2920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82559998
	if (ctx.cr6.eq) goto loc_82559998;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r28,r31,6364
	ctx.r28.s64 = ctx.r31.s64 + 6364;
	// addi r29,r11,10260
	ctx.r29.s64 = ctx.r11.s64 + 10260;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lfs f31,31512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31512);
	ctx.f31.f64 = double(temp.f32);
loc_8255993C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,2920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2920);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8282bbe0
	ctx.lr = 0x8255994C;
	sub_8282BBE0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// addi r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 + 20;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x8255993c
	if (ctx.cr6.lt) goto loc_8255993C;
	// lwz r11,6380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6380);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x82559988
	if (!ctx.cr6.eq) goto loc_82559988;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82559994
	goto loc_82559994;
loc_82559988:
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82559998
	if (!ctx.cr6.eq) goto loc_82559998;
	// li r11,11
	ctx.r11.s64 = 11;
loc_82559994:
	// stw r11,6384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6384, ctx.r11.u32);
loc_82559998:
	// lwz r11,2828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2828);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82559a24
	if (ctx.cr6.eq) goto loc_82559A24;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r11.u32);
	// bne 0x82559a24
	if (!ctx.cr0.eq) goto loc_82559A24;
	// lwz r11,2832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825599f4
	if (ctx.cr6.eq) goto loc_825599F4;
	// lwz r4,2820(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2820);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82559a24
	if (ctx.cr6.eq) goto loc_82559A24;
	// lwz r5,2824(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2824);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82559a24
	if (ctx.cr6.eq) goto loc_82559A24;
	// lwz r11,2484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2484);
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825599e8
	if (ctx.cr6.eq) goto loc_825599E8;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
loc_825599E8:
	// bl 0x8255a7c8
	ctx.lr = 0x825599EC;
	sub_8255A7C8(ctx, base);
	// stw r27,2820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2820, ctx.r27.u32);
	// b 0x82559a20
	goto loc_82559A20;
loc_825599F4:
	// lwz r3,2820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2820);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82559a10
	if (ctx.cr6.eq) goto loc_82559A10;
	// lis r4,8448
	ctx.r4.s64 = 553648128;
	// ori r4,r4,24576
	ctx.r4.u64 = ctx.r4.u64 | 24576;
	// bl 0x82691460
	ctx.lr = 0x82559A0C;
	sub_82691460(ctx, base);
	// stw r27,2820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2820, ctx.r27.u32);
loc_82559A10:
	// lwz r3,2824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2824);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82559a24
	if (ctx.cr6.eq) goto loc_82559A24;
	// bl 0x82a782c0
	ctx.lr = 0x82559A20;
	sub_82A782C0(ctx, base);
loc_82559A20:
	// stw r27,2824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2824, ctx.r27.u32);
loc_82559A24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82559A30"))) PPC_WEAK_FUNC(sub_82559A30);
PPC_FUNC_IMPL(__imp__sub_82559A30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559A44"))) PPC_WEAK_FUNC(sub_82559A44);
PPC_FUNC_IMPL(__imp__sub_82559A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559A48"))) PPC_WEAK_FUNC(sub_82559A48);
PPC_FUNC_IMPL(__imp__sub_82559A48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2920(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2920);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559A58"))) PPC_WEAK_FUNC(sub_82559A58);
PPC_FUNC_IMPL(__imp__sub_82559A58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2940(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2940);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559A60"))) PPC_WEAK_FUNC(sub_82559A60);
PPC_FUNC_IMPL(__imp__sub_82559A60) {
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
	// lis r11,3
	ctx.r11.s64 = 196608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,6564
	ctx.r11.u64 = ctx.r11.u64 | 6564;
	// lbzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82559aac
	if (ctx.cr0.eq) goto loc_82559AAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82559A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82559aac
	if (ctx.cr0.eq) goto loc_82559AAC;
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// addi r3,r3,6532
	ctx.r3.s64 = ctx.r3.s64 + 6532;
	// b 0x82559ab0
	goto loc_82559AB0;
loc_82559AAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82559AB0:
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

__attribute__((alias("__imp__sub_82559AC4"))) PPC_WEAK_FUNC(sub_82559AC4);
PPC_FUNC_IMPL(__imp__sub_82559AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559AC8"))) PPC_WEAK_FUNC(sub_82559AC8);
PPC_FUNC_IMPL(__imp__sub_82559AC8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2916(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2916);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559AD0"))) PPC_WEAK_FUNC(sub_82559AD0);
PPC_FUNC_IMPL(__imp__sub_82559AD0) {
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
	// lwz r11,2940(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2940);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82559af4
	if (!ctx.cr6.eq) goto loc_82559AF4;
	// bl 0x82558f30
	ctx.lr = 0x82559AF4;
	sub_82558F30(ctx, base);
loc_82559AF4:
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8282b738
	ctx.lr = 0x82559AFC;
	sub_8282B738(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82559b18
	if (ctx.cr0.eq) goto loc_82559B18;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,2940(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8282c388
	ctx.lr = 0x82559B14;
	sub_8282C388(ctx, base);
	// b 0x82559b1c
	goto loc_82559B1C;
loc_82559B18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82559B1C:
	// lwz r11,2944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2944);
	// stw r3,2920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2920, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82559b34
	if (!ctx.cr6.eq) goto loc_82559B34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825591e8
	ctx.lr = 0x82559B34;
	sub_825591E8(ctx, base);
loc_82559B34:
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82559b5c
	if (!ctx.cr6.eq) goto loc_82559B5C;
	// lwz r11,2492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82559b5c
	if (!ctx.cr6.eq) goto loc_82559B5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825592f8
	ctx.lr = 0x82559B54;
	sub_825592F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2492, ctx.r11.u32);
loc_82559B5C:
	// lwz r3,2920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2920);
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

__attribute__((alias("__imp__sub_82559B74"))) PPC_WEAK_FUNC(sub_82559B74);
PPC_FUNC_IMPL(__imp__sub_82559B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559B78"))) PPC_WEAK_FUNC(sub_82559B78);
PPC_FUNC_IMPL(__imp__sub_82559B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82559B80;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r3,2924
	ctx.r11.s64 = ctx.r3.s64 + 2924;
loc_82559B94:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82559bb0
	if (ctx.cr6.eq) goto loc_82559BB0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82559b94
	if (ctx.cr6.lt) goto loc_82559B94;
loc_82559BB0:
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// lwz r11,2940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82559bc8
	if (!ctx.cr6.eq) goto loc_82559BC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558f30
	ctx.lr = 0x82559BC8;
	sub_82558F30(ctx, base);
loc_82559BC8:
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8282b738
	ctx.lr = 0x82559BD0;
	sub_8282B738(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82559bec
	if (ctx.cr0.eq) goto loc_82559BEC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,2940(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8282c388
	ctx.lr = 0x82559BE8;
	sub_8282C388(ctx, base);
	// b 0x82559bf0
	goto loc_82559BF0;
loc_82559BEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82559BF0:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r10,r30,731
	ctx.r10.s64 = ctx.r30.s64 + 731;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,23204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23204);
	// stwx r3,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82559cd0
	if (!ctx.cr6.gt) goto loc_82559CD0;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r27,-31956
	ctx.r27.s64 = -2094268416;
	// lfs f31,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f31.f64 = double(temp.f32);
loc_82559C28:
	// addi r11,r30,405
	ctx.r11.s64 = ctx.r30.s64 + 405;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82559c60
	if (!ctx.cr6.eq) goto loc_82559C60;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,6484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82559c60
	if (!ctx.cr6.eq) goto loc_82559C60;
	// lfs f0,6488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6488);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82559cb8
	if (ctx.cr6.eq) goto loc_82559CB8;
loc_82559C60:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r11,r11,6584
	ctx.r11.u64 = ctx.r11.u64 | 6584;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82559cac
	if (ctx.cr6.eq) goto loc_82559CAC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82559cb8
	if (ctx.cr6.eq) goto loc_82559CB8;
	// cmpwi cr6,r30,28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 28, ctx.xer);
	// beq cr6,0x82559cb8
	if (ctx.cr6.eq) goto loc_82559CB8;
	// cmpwi cr6,r30,29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 29, ctx.xer);
	// beq cr6,0x82559cb8
	if (ctx.cr6.eq) goto loc_82559CB8;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// beq cr6,0x82559cb8
	if (ctx.cr6.eq) goto loc_82559CB8;
	// cmpwi cr6,r30,36
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 36, ctx.xer);
	// beq cr6,0x82559cb8
	if (ctx.cr6.eq) goto loc_82559CB8;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82559cb8
	if (ctx.cr6.eq) goto loc_82559CB8;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82559cb8
	if (ctx.cr6.eq) goto loc_82559CB8;
loc_82559CAC:
	// lwz r5,-6900(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6900);
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x8282bd88
	ctx.lr = 0x82559CB8;
	sub_8282BD88(ctx, base);
loc_82559CB8:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82559c28
	if (ctx.cr6.lt) goto loc_82559C28;
loc_82559CD0:
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82559CE0"))) PPC_WEAK_FUNC(sub_82559CE0);
PPC_FUNC_IMPL(__imp__sub_82559CE0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82559d18
	if (ctx.cr6.eq) goto loc_82559D18;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82559D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82559D18:
	// lwz r11,2940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82559d54
	if (ctx.cr6.eq) goto loc_82559D54;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82559d40
	if (ctx.cr6.eq) goto loc_82559D40;
	// bl 0x82691540
	ctx.lr = 0x82559D38;
	sub_82691540(ctx, base);
	// lwz r11,2940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// stw r30,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r30.u32);
loc_82559D40:
	// lwz r3,2940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82559d54
	if (ctx.cr6.eq) goto loc_82559D54;
	// bl 0x82691540
	ctx.lr = 0x82559D50;
	sub_82691540(ctx, base);
	// stw r30,2940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2940, ctx.r30.u32);
loc_82559D54:
	// stw r30,2944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2944, ctx.r30.u32);
	// stw r30,2920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2920, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82559D74"))) PPC_WEAK_FUNC(sub_82559D74);
PPC_FUNC_IMPL(__imp__sub_82559D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559D78"))) PPC_WEAK_FUNC(sub_82559D78);
PPC_FUNC_IMPL(__imp__sub_82559D78) {
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
	// addi r11,r5,731
	ctx.r11.s64 = ctx.r5.s64 + 731;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82559dc0
	if (ctx.cr6.eq) goto loc_82559DC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82559DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_82559DC0:
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

__attribute__((alias("__imp__sub_82559DD8"))) PPC_WEAK_FUNC(sub_82559DD8);
PPC_FUNC_IMPL(__imp__sub_82559DD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,480
	ctx.r3.s64 = ctx.r3.s64 + 480;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559DE0"))) PPC_WEAK_FUNC(sub_82559DE0);
PPC_FUNC_IMPL(__imp__sub_82559DE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1480
	ctx.r3.s64 = ctx.r3.s64 + 1480;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559DE8"))) PPC_WEAK_FUNC(sub_82559DE8);
PPC_FUNC_IMPL(__imp__sub_82559DE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,6480
	ctx.r3.s64 = ctx.r3.s64 + 6480;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559DF0"))) PPC_WEAK_FUNC(sub_82559DF0);
PPC_FUNC_IMPL(__imp__sub_82559DF0) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,23204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82559e24
	if (!ctx.cr6.eq) goto loc_82559E24;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82559e34
	if (ctx.cr6.eq) goto loc_82559E34;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82559e4c
	goto loc_82559E4C;
loc_82559E24:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82559e34
	if (ctx.cr6.eq) goto loc_82559E34;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82559E34:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82559e48
	if (ctx.cr6.eq) goto loc_82559E48;
	// addi r3,r3,480
	ctx.r3.s64 = ctx.r3.s64 + 480;
	// bl 0x82adfe80
	ctx.lr = 0x82559E44;
	sub_82ADFE80(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
loc_82559E48:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82559E4C:
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

__attribute__((alias("__imp__sub_82559E60"))) PPC_WEAK_FUNC(sub_82559E60);
PPC_FUNC_IMPL(__imp__sub_82559E60) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,2584(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2584);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82559ef8
	if (ctx.cr6.eq) goto loc_82559EF8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r7,r4,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r4.s64;
loc_82559E80:
	// li r9,7
	ctx.r9.s64 = 7;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_82559E88:
	// ldx r8,r7,r10
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r10.u32);
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r8,r3
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r3.u64, ctx.xer);
	// bne cr6,0x82559ee4
	if (!ctx.cr6.eq) goto loc_82559EE4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82559e88
	if (ctx.cr6.lt) goto loc_82559E88;
	// addi r10,r9,-7
	ctx.r10.s64 = ctx.r9.s64 + -7;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x82559edc
	if (!ctx.cr6.lt) goto loc_82559EDC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_82559EBC:
	// lbzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82559ee4
	if (!ctx.cr6.eq) goto loc_82559EE4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82559ebc
	if (ctx.cr6.lt) goto loc_82559EBC;
loc_82559EDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82559efc
	goto loc_82559EFC;
loc_82559EE4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82559e80
	if (ctx.cr6.lt) goto loc_82559E80;
loc_82559EF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82559EFC:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559F04"))) PPC_WEAK_FUNC(sub_82559F04);
PPC_FUNC_IMPL(__imp__sub_82559F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559F08"))) PPC_WEAK_FUNC(sub_82559F08);
PPC_FUNC_IMPL(__imp__sub_82559F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82559F10;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r27,r3,2836
	ctx.r27.s64 = ctx.r3.s64 + 2836;
	// li r23,4
	ctx.r23.s64 = 4;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r24,-31957
	ctx.r24.s64 = -2094333952;
	// addi r25,r11,-19992
	ctx.r25.s64 = ctx.r11.s64 + -19992;
loc_82559F30:
	// lwz r31,23064(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 23064);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82559f54
	if (!ctx.cr6.eq) goto loc_82559F54;
	// bl 0x825476e8
	ctx.lr = 0x82559F40;
	sub_825476E8(ctx, base);
	// lwz r31,23064(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 23064);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82559f54
	if (!ctx.cr6.eq) goto loc_82559F54;
	// bl 0x825476e8
	ctx.lr = 0x82559F50;
	sub_825476E8(ctx, base);
	// lwz r31,23064(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 23064);
loc_82559F54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82559f64
	if (!ctx.cr6.eq) goto loc_82559F64;
	// bl 0x825476e8
	ctx.lr = 0x82559F64;
	sub_825476E8(ctx, base);
loc_82559F64:
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// bl 0x82a74720
	ctx.lr = 0x82559F6C;
	sub_82A74720(ctx, base);
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825c63d8
	ctx.lr = 0x82559F7C;
	sub_825C63D8(ctx, base);
	// bl 0x82a74720
	ctx.lr = 0x82559F80;
	sub_82A74720(ctx, base);
	// bl 0x825c5fe0
	ctx.lr = 0x82559F84;
	sub_825C5FE0(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x825c6258
	ctx.lr = 0x82559F90;
	sub_825C6258(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r30,40(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r4,148
	ctx.r4.s64 = 148;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82547b60
	ctx.lr = 0x82559FA8;
	sub_82547B60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// ble cr6,0x82559fbc
	if (!ctx.cr6.gt) goto loc_82559FBC;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82559FBC:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82a74720
	ctx.lr = 0x82559FC4;
	sub_82A74720(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825c6538
	ctx.lr = 0x82559FCC;
	sub_825C6538(ctx, base);
	// stw r28,-240(r27)
	PPC_STORE_U32(ctx.r27.u32 + -240, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,4544
	ctx.r3.s64 = 4544;
	// bl 0x825c3ba0
	ctx.lr = 0x82559FE4;
	sub_825C3BA0(ctx, base);
	// stw r3,-224(r27)
	PPC_STORE_U32(ctx.r27.u32 + -224, ctx.r3.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82559FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8255a020
	if (ctx.cr0.eq) goto loc_8255A020;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,4544
	ctx.r3.s64 = 4544;
	// bl 0x825c3ba0
	ctx.lr = 0x8255A018;
	sub_825C3BA0(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// b 0x8255a024
	goto loc_8255A024;
loc_8255A020:
	// stw r22,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r22.u32);
loc_8255A024:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82559f30
	if (!ctx.cr0.eq) goto loc_82559F30;
	// addi r31,r26,124
	ctx.r31.s64 = ctx.r26.s64 + 124;
	// li r30,4
	ctx.r30.s64 = 4;
loc_8255A038:
	// li r3,71
	ctx.r3.s64 = 71;
	// lwz r4,2472(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2472);
	// lwz r5,2488(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2488);
	// lwz r6,2712(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2712);
	// bl 0x82578f38
	ctx.lr = 0x8255A04C;
	sub_82578F38(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r31.u32 = ea;
	// bne 0x8255a038
	if (!ctx.cr0.eq) goto loc_8255A038;
	// stw r22,144(r26)
	PPC_STORE_U32(ctx.r26.u32 + 144, ctx.r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A064"))) PPC_WEAK_FUNC(sub_8255A064);
PPC_FUNC_IMPL(__imp__sub_8255A064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A068"))) PPC_WEAK_FUNC(sub_8255A068);
PPC_FUNC_IMPL(__imp__sub_8255A068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x8255a0bc
	if (!ctx.cr6.eq) goto loc_8255A0BC;
	// li r10,2
	ctx.r10.s64 = 2;
	// addis r9,r3,3
	ctx.r9.s64 = ctx.r3.s64 + 196608;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// addi r9,r9,6565
	ctx.r9.s64 = ctx.r9.s64 + 6565;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addis r10,r3,3
	ctx.r10.s64 = ctx.r3.s64 + 196608;
	// addi r10,r10,6568
	ctx.r10.s64 = ctx.r10.s64 + 6568;
loc_8255A090:
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8255a0a8
	if (ctx.cr6.eq) goto loc_8255A0A8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8255a0a8
	if (ctx.cr6.eq) goto loc_8255A0A8;
	// stfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_8255A0A8:
	// stbx r4,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8255a090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8255A090;
	// blr 
	return;
loc_8255A0BC:
	// add r10,r6,r3
	ctx.r10.u64 = ctx.r6.u64 + ctx.r3.u64;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addis r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 196608;
	// addi r10,r10,6565
	ctx.r10.s64 = ctx.r10.s64 + 6565;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8255a0f0
	if (ctx.cr6.eq) goto loc_8255A0F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255a0f0
	if (ctx.cr6.eq) goto loc_8255A0F0;
	// addis r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 65536;
	// addi r11,r11,-14742
	ctx.r11.s64 = ctx.r11.s64 + -14742;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
loc_8255A0F0:
	// stb r4,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A0F8"))) PPC_WEAK_FUNC(sub_8255A0F8);
PPC_FUNC_IMPL(__imp__sub_8255A0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 65536;
	// addi r11,r11,-14740
	ctx.r11.s64 = ctx.r11.s64 + -14740;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A10C"))) PPC_WEAK_FUNC(sub_8255A10C);
PPC_FUNC_IMPL(__imp__sub_8255A10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A110"))) PPC_WEAK_FUNC(sub_8255A110);
PPC_FUNC_IMPL(__imp__sub_8255A110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// addi r11,r11,-14740
	ctx.r11.s64 = ctx.r11.s64 + -14740;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A124"))) PPC_WEAK_FUNC(sub_8255A124);
PPC_FUNC_IMPL(__imp__sub_8255A124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A128"))) PPC_WEAK_FUNC(sub_8255A128);
PPC_FUNC_IMPL(__imp__sub_8255A128) {
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
	// lwz r11,2484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2484);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8255a178
	if (ctx.cr6.eq) goto loc_8255A178;
	// stw r4,2484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2484, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255A15C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8255a170
	if (ctx.cr0.eq) goto loc_8255A170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558b10
	ctx.lr = 0x8255A16C;
	sub_82558B10(ctx, base);
	// b 0x8255a178
	goto loc_8255A178;
loc_8255A170:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2488, ctx.r11.u32);
loc_8255A178:
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

__attribute__((alias("__imp__sub_8255A18C"))) PPC_WEAK_FUNC(sub_8255A18C);
PPC_FUNC_IMPL(__imp__sub_8255A18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A190"))) PPC_WEAK_FUNC(sub_8255A190);
PPC_FUNC_IMPL(__imp__sub_8255A190) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2484(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2484);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A198"))) PPC_WEAK_FUNC(sub_8255A198);
PPC_FUNC_IMPL(__imp__sub_8255A198) {
	PPC_FUNC_PROLOGUE();
	// stw r4,2500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2500, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A1A0"))) PPC_WEAK_FUNC(sub_8255A1A0);
PPC_FUNC_IMPL(__imp__sub_8255A1A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2500(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2500);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A1A8"))) PPC_WEAK_FUNC(sub_8255A1A8);
PPC_FUNC_IMPL(__imp__sub_8255A1A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8255a1d8
	if (ctx.cr6.eq) goto loc_8255A1D8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,2508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2508, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,2512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2512, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,2516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2516, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,2520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2520, ctx.r10.u32);
	// b 0x8255a1e8
	goto loc_8255A1E8;
loc_8255A1D8:
	// stw r11,2508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2508, ctx.r11.u32);
	// stw r11,2512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2512, ctx.r11.u32);
	// stw r11,2516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2516, ctx.r11.u32);
	// stw r11,2520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2520, ctx.r11.u32);
loc_8255A1E8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8255a210
	if (ctx.cr6.eq) goto loc_8255A210;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,2544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2544, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,2548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2548, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,2552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2552, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// b 0x8255a21c
	goto loc_8255A21C;
loc_8255A210:
	// stw r11,2544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2544, ctx.r11.u32);
	// stw r11,2548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2548, ctx.r11.u32);
	// stw r11,2552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2552, ctx.r11.u32);
loc_8255A21C:
	// stw r11,2556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A224"))) PPC_WEAK_FUNC(sub_8255A224);
PPC_FUNC_IMPL(__imp__sub_8255A224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A228"))) PPC_WEAK_FUNC(sub_8255A228);
PPC_FUNC_IMPL(__imp__sub_8255A228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x8255A230;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r26,r4,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r22,r26,689
	ctx.r22.s64 = ctx.r26.s64 + 689;
	// lis r23,-31957
	ctx.r23.s64 = -2094333952;
	// addi r24,r11,-19992
	ctx.r24.s64 = ctx.r11.s64 + -19992;
loc_8255A250:
	// lwz r29,23064(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 23064);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8255a274
	if (!ctx.cr6.eq) goto loc_8255A274;
	// bl 0x825476e8
	ctx.lr = 0x8255A260;
	sub_825476E8(ctx, base);
	// lwz r29,23064(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 23064);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8255a274
	if (!ctx.cr6.eq) goto loc_8255A274;
	// bl 0x825476e8
	ctx.lr = 0x8255A270;
	sub_825476E8(ctx, base);
	// lwz r29,23064(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 23064);
loc_8255A274:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255a284
	if (!ctx.cr6.eq) goto loc_8255A284;
	// bl 0x825476e8
	ctx.lr = 0x8255A284;
	sub_825476E8(ctx, base);
loc_8255A284:
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// bl 0x82a74720
	ctx.lr = 0x8255A28C;
	sub_82A74720(ctx, base);
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825c63d8
	ctx.lr = 0x8255A29C;
	sub_825C63D8(ctx, base);
	// bl 0x82a74720
	ctx.lr = 0x8255A2A0;
	sub_82A74720(ctx, base);
	// bl 0x825c5fe0
	ctx.lr = 0x8255A2A4;
	sub_825C5FE0(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x825c6258
	ctx.lr = 0x8255A2B0;
	sub_825C6258(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r27,40(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r4,148
	ctx.r4.s64 = 148;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82547b60
	ctx.lr = 0x8255A2C8;
	sub_82547B60(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// ble cr6,0x8255a2dc
	if (!ctx.cr6.gt) goto loc_8255A2DC;
	// li r11,16
	ctx.r11.s64 = 16;
loc_8255A2DC:
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// bl 0x82a74720
	ctx.lr = 0x8255A2E4;
	sub_82A74720(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825c6538
	ctx.lr = 0x8255A2EC;
	sub_825C6538(ctx, base);
	// add r10,r26,r30
	ctx.r10.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r11,r26,r30
	ctx.r11.u64 = ctx.r26.u64 + ctx.r30.u64;
	// addi r10,r10,657
	ctx.r10.s64 = ctx.r10.s64 + 657;
	// addi r11,r11,673
	ctx.r11.s64 = ctx.r11.s64 + 673;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,4544
	ctx.r3.s64 = 4544;
	// stwx r25,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r25.u32);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825c3ba0
	ctx.lr = 0x8255A31C;
	sub_825C3BA0(ctx, base);
	// stwx r3,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255A334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r26,r30
	ctx.r11.u64 = ctx.r26.u64 + ctx.r30.u64;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,713
	ctx.r11.s64 = ctx.r11.s64 + 713;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq 0x8255a368
	if (ctx.cr0.eq) goto loc_8255A368;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,4544
	ctx.r3.s64 = 4544;
	// bl 0x825c3ba0
	ctx.lr = 0x8255A360;
	sub_825C3BA0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// b 0x8255a370
	goto loc_8255A370;
loc_8255A368:
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8255A370:
	// li r3,71
	ctx.r3.s64 = 71;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r5,r28,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwzx r4,r27,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x82578f38
	ctx.lr = 0x8255A384;
	sub_82578F38(ctx, base);
	// add r11,r22,r30
	ctx.r11.u64 = ctx.r22.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// blt cr6,0x8255a250
	if (ctx.cr6.lt) goto loc_8255A250;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A3A4"))) PPC_WEAK_FUNC(sub_8255A3A4);
PPC_FUNC_IMPL(__imp__sub_8255A3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A3A8"))) PPC_WEAK_FUNC(sub_8255A3A8);
PPC_FUNC_IMPL(__imp__sub_8255A3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8255A3B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r27,r4,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r25,r27,713
	ctx.r25.s64 = ctx.r27.s64 + 713;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8255A3CC:
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addi r11,r11,657
	ctx.r11.s64 = ctx.r11.s64 + 657;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8255a3ec
	if (ctx.cr6.eq) goto loc_8255A3EC;
	// bl 0x82547d80
	ctx.lr = 0x8255A3E8;
	sub_82547D80(ctx, base);
	// stwx r30,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r30.u32);
loc_8255A3EC:
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addi r11,r11,673
	ctx.r11.s64 = ctx.r11.s64 + 673;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8255a40c
	if (ctx.cr6.eq) goto loc_8255A40C;
	// bl 0x82a782c0
	ctx.lr = 0x8255A408;
	sub_82A782C0(ctx, base);
	// stwx r30,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r30.u32);
loc_8255A40C:
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8255a428
	if (ctx.cr6.eq) goto loc_8255A428;
	// bl 0x82a782c0
	ctx.lr = 0x8255A424;
	sub_82A782C0(ctx, base);
	// stwx r30,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r30.u32);
loc_8255A428:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x8255a3cc
	if (ctx.cr6.lt) goto loc_8255A3CC;
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,2756
	ctx.r10.s64 = ctx.r11.s64 + 2756;
	// stw r30,2756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2756, ctx.r30.u32);
	// stw r30,2760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2760, ctx.r30.u32);
	// stw r30,2764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2764, ctx.r30.u32);
	// stw r30,2768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2768, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A458"))) PPC_WEAK_FUNC(sub_8255A458);
PPC_FUNC_IMPL(__imp__sub_8255A458) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,689
	ctx.r11.s64 = ctx.r11.s64 + 689;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A470"))) PPC_WEAK_FUNC(sub_8255A470);
PPC_FUNC_IMPL(__imp__sub_8255A470) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 * 20;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,6388
	ctx.r3.s64 = ctx.r11.s64 + 6388;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A480"))) PPC_WEAK_FUNC(sub_8255A480);
PPC_FUNC_IMPL(__imp__sub_8255A480) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8255a490
	sub_8255A490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A48C"))) PPC_WEAK_FUNC(sub_8255A48C);
PPC_FUNC_IMPL(__imp__sub_8255A48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A490"))) PPC_WEAK_FUNC(sub_8255A490);
PPC_FUNC_IMPL(__imp__sub_8255A490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8255A498;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8255a504
	if (ctx.cr6.eq) goto loc_8255A504;
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
	// beq 0x8255a504
	if (ctx.cr0.eq) goto loc_8255A504;
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// lwz r11,23196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255a504
	if (!ctx.cr6.eq) goto loc_8255A504;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x82691500
	ctx.lr = 0x8255A4D4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255a4fc
	if (ctx.cr0.eq) goto loc_8255A4FC;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8257f968
	ctx.lr = 0x8255A4F4;
	sub_8257F968(ctx, base);
	// stw r3,23196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23196, ctx.r3.u32);
	// b 0x8255a504
	goto loc_8255A504;
loc_8255A4FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23196, ctx.r11.u32);
loc_8255A504:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8255a564
	if (ctx.cr6.eq) goto loc_8255A564;
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
	// beq 0x8255a564
	if (ctx.cr0.eq) goto loc_8255A564;
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// lwz r11,23200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255a564
	if (!ctx.cr6.eq) goto loc_8255A564;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x82691500
	ctx.lr = 0x8255A534;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255a55c
	if (ctx.cr0.eq) goto loc_8255A55C;
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
	ctx.lr = 0x8255A554;
	sub_8257F968(ctx, base);
	// stw r3,23200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23200, ctx.r3.u32);
	// b 0x8255a564
	goto loc_8255A564;
loc_8255A55C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23200, ctx.r11.u32);
loc_8255A564:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A56C"))) PPC_WEAK_FUNC(sub_8255A56C);
PPC_FUNC_IMPL(__imp__sub_8255A56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A570"))) PPC_WEAK_FUNC(sub_8255A570);
PPC_FUNC_IMPL(__imp__sub_8255A570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8255A578;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// bl 0x8283d4f8
	ctx.lr = 0x8255A594;
	sub_8283D4F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f3,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8283da08
	ctx.lr = 0x8255A5A8;
	sub_8283DA08(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8283f390
	ctx.lr = 0x8255A5B8;
	sub_8283F390(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8283f390
	ctx.lr = 0x8255A5C8;
	sub_8283F390(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A5D0"))) PPC_WEAK_FUNC(sub_8255A5D0);
PPC_FUNC_IMPL(__imp__sub_8255A5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r10,6548
	ctx.r10.u64 = ctx.r10.u64 | 6548;
	// addis r31,r3,3
	ctx.r31.s64 = ctx.r3.s64 + 196608;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// stfsx f1,r3,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, temp.u32);
	// ori r11,r11,6532
	ctx.r11.u64 = ctx.r11.u64 | 6532;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r31,r31,6536
	ctx.r31.s64 = ctx.r31.s64 + 6536;
	// ori r10,r6,6564
	ctx.r10.u64 = ctx.r6.u64 | 6564;
	// ori r9,r9,6552
	ctx.r9.u64 = ctx.r9.u64 | 6552;
	// ori r8,r8,6556
	ctx.r8.u64 = ctx.r8.u64 | 6556;
	// ori r7,r7,6560
	ctx.r7.u64 = ctx.r7.u64 | 6560;
	// lfs f0,-2340(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stwx r6,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r6.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stbx r4,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r4.u8);
	// stfsx f2,r3,r9
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, temp.u32);
	// stfsx f3,r3,r8
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, temp.u32);
	// stfsx f4,r3,r7
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, temp.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A644"))) PPC_WEAK_FUNC(sub_8255A644);
PPC_FUNC_IMPL(__imp__sub_8255A644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A648"))) PPC_WEAK_FUNC(sub_8255A648);
PPC_FUNC_IMPL(__imp__sub_8255A648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8255A650;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r31,r11,23208
	ctx.r31.s64 = ctx.r11.s64 + 23208;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_8255A674:
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255a694
	if (ctx.cr6.eq) goto loc_8255A694;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82adfe90
	ctx.lr = 0x8255A68C;
	sub_82ADFE90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8255a6b4
	if (!ctx.cr0.eq) goto loc_8255A6B4;
loc_8255A694:
	// addi r28,r28,1012
	ctx.r28.s64 = ctx.r28.s64 + 1012;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1012
	ctx.r29.s64 = ctx.r29.s64 + 1012;
	// cmplwi cr6,r28,35420
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 35420, ctx.xer);
	// blt cr6,0x8255a674
	if (ctx.cr6.lt) goto loc_8255A674;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255A6AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_8255A6B4:
	// mulli r11,r30,1012
	ctx.r11.s64 = ctx.r30.s64 * 1012;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r9,r31,1004
	ctx.r9.s64 = ctx.r31.s64 + 1004;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r8,r31,1008
	ctx.r8.s64 = ctx.r31.s64 + 1008;
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x8255a6ac
	goto loc_8255A6AC;
}

__attribute__((alias("__imp__sub_8255A6E8"))) PPC_WEAK_FUNC(sub_8255A6E8);
PPC_FUNC_IMPL(__imp__sub_8255A6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8255A6F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,23208
	ctx.r31.s64 = ctx.r11.s64 + 23208;
	// ori r11,r10,35420
	ctx.r11.u64 = ctx.r10.u64 | 35420;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bge cr6,0x8255a7b8
	if (!ctx.cr6.lt) goto loc_8255A7B8;
	// mulli r11,r11,1012
	ctx.r11.s64 = ctx.r11.s64 * 1012;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// bl 0x82fa77c0
	ctx.lr = 0x8255A730;
	sub_82FA77C0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,35420
	ctx.r11.u64 = ctx.r11.u64 | 35420;
	// ori r8,r10,35420
	ctx.r8.u64 = ctx.r10.u64 | 35420;
	// addi r9,r31,1004
	ctx.r9.s64 = ctx.r31.s64 + 1004;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,1008
	ctx.r6.s64 = ctx.r31.s64 + 1008;
	// ori r7,r7,35420
	ctx.r7.u64 = ctx.r7.u64 | 35420;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mulli r11,r10,1012
	ctx.r11.s64 = ctx.r10.s64 * 1012;
	// stwx r30,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u32);
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// mulli r10,r10,1012
	ctx.r10.s64 = ctx.r10.s64 * 1012;
	// stwx r29,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r29.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwzx r10,r31,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// mulli r10,r10,1012
	ctx.r10.s64 = ctx.r10.s64 * 1012;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r5,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r5.u32);
loc_8255A780:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255a7a4
	if (ctx.cr6.eq) goto loc_8255A7A4;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,1012
	ctx.r11.s64 = ctx.r11.s64 + 1012;
	// addi r10,r10,-30116
	ctx.r10.s64 = ctx.r10.s64 + -30116;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8255a780
	if (ctx.cr6.lt) goto loc_8255A780;
loc_8255A7A4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r11,r11,35420
	ctx.r11.u64 = ctx.r11.u64 | 35420;
	// stwx r9,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// b 0x8255a7bc
	goto loc_8255A7BC;
loc_8255A7B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255A7BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A7C4"))) PPC_WEAK_FUNC(sub_8255A7C4);
PPC_FUNC_IMPL(__imp__sub_8255A7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A7C8"))) PPC_WEAK_FUNC(sub_8255A7C8);
PPC_FUNC_IMPL(__imp__sub_8255A7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8255A7D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r29,r11,23208
	ctx.r29.s64 = ctx.r11.s64 + 23208;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r28,35
	ctx.r28.s64 = 35;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8255A7F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255a8ac
	if (ctx.cr6.eq) goto loc_8255A8AC;
	// addi r31,r30,1004
	ctx.r31.s64 = ctx.r30.s64 + 1004;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r31,-1000
	ctx.r4.s64 = ctx.r31.s64 + -1000;
	// bl 0x82adfe90
	ctx.lr = 0x8255A80C;
	sub_82ADFE90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8255a8ac
	if (ctx.cr0.eq) goto loc_8255A8AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255a8ac
	if (!ctx.cr6.eq) goto loc_8255A8AC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255a8ac
	if (!ctx.cr6.eq) goto loc_8255A8AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne 0x8255a8ac
	if (!ctx.cr0.eq) goto loc_8255A8AC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8255a854
	if (ctx.cr6.eq) goto loc_8255A854;
	// lis r4,8448
	ctx.r4.s64 = 553648128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,24576
	ctx.r4.u64 = ctx.r4.u64 | 24576;
	// bl 0x82691460
	ctx.lr = 0x8255A854;
	sub_82691460(ctx, base);
loc_8255A854:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8255a864
	if (ctx.cr6.eq) goto loc_8255A864;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a782c0
	ctx.lr = 0x8255A864;
	sub_82A782C0(ctx, base);
loc_8255A864:
	// li r5,1012
	ctx.r5.s64 = 1012;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75988
	ctx.lr = 0x8255A874;
	sub_82A75988(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8255A87C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8255a8a0
	if (ctx.cr6.eq) goto loc_8255A8A0;
	// addis r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 65536;
	// addi r11,r11,1012
	ctx.r11.s64 = ctx.r11.s64 + 1012;
	// addi r9,r9,-30116
	ctx.r9.s64 = ctx.r9.s64 + -30116;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8255a87c
	if (ctx.cr6.lt) goto loc_8255A87C;
loc_8255A8A0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,35420
	ctx.r11.u64 = ctx.r11.u64 | 35420;
	// stwx r10,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u32);
loc_8255A8AC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,1012
	ctx.r30.s64 = ctx.r30.s64 + 1012;
	// bne 0x8255a7f0
	if (!ctx.cr0.eq) goto loc_8255A7F0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A8C0"))) PPC_WEAK_FUNC(sub_8255A8C0);
PPC_FUNC_IMPL(__imp__sub_8255A8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8255A8C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x829204e8
	ctx.lr = 0x8255A8E0;
	sub_829204E8(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// mulli r30,r3,368
	ctx.r30.s64 = ctx.r3.s64 * 368;
	// addi r31,r11,25280
	ctx.r31.s64 = ctx.r11.s64 + 25280;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8255a914
	if (ctx.cr6.eq) goto loc_8255A914;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8255acf8
	ctx.lr = 0x8255A908;
	sub_8255ACF8(ctx, base);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8255acf8
	ctx.lr = 0x8255A914;
	sub_8255ACF8(ctx, base);
loc_8255A914:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stwx r28,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r28.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8255a950
	goto loc_8255A950;
loc_8255A934:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r25
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x8255a948
	if (!ctx.cr6.lt) goto loc_8255A948;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8255a950
	goto loc_8255A950;
loc_8255A948:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8255A950:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8255a934
	if (ctx.cr0.eq) goto loc_8255A934;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8255a97c
	if (ctx.cr6.eq) goto loc_8255A97C;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8255a97c
	if (ctx.cr6.lt) goto loc_8255A97C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x8255a984
	goto loc_8255A984;
loc_8255A97C:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8255A984:
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8255a9b4
	if (ctx.cr6.eq) goto loc_8255A9B4;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// subf r11,r11,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8244e220
	ctx.lr = 0x8255A9B4;
	sub_8244E220(ctx, base);
loc_8255A9B4:
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255ac00
	ctx.lr = 0x8255A9C0;
	sub_8255AC00(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// bne 0x8255aa4c
	if (!ctx.cr0.eq) goto loc_8255AA4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8255A9D4:
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8255a9fc
	if (ctx.cr6.eq) goto loc_8255A9FC;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,300
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 300, ctx.xer);
	// blt cr6,0x8255a9d4
	if (ctx.cr6.lt) goto loc_8255A9D4;
	// b 0x8255aa4c
	goto loc_8255AA4C;
loc_8255A9FC:
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r31,40
	ctx.r9.s64 = ctx.r31.s64 + 40;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r8,r31,44
	ctx.r8.s64 = ctx.r31.s64 + 44;
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// addi r5,r31,364
	ctx.r5.s64 = ctx.r31.s64 + 364;
	// stwx r25,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r25.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r26,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r26.u32);
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// stwx r28,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r28.u32);
	// stbx r9,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// lwzx r11,r30,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255aa4c
	if (!ctx.cr6.eq) goto loc_8255AA4C;
	// clrlwi r3,r24,24
	ctx.r3.u64 = ctx.r24.u32 & 0xFF;
	// bl 0x8255aa58
	ctx.lr = 0x8255AA4C;
	sub_8255AA58(ctx, base);
loc_8255AA4C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255AA54"))) PPC_WEAK_FUNC(sub_8255AA54);
PPC_FUNC_IMPL(__imp__sub_8255AA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255AA58"))) PPC_WEAK_FUNC(sub_8255AA58);
PPC_FUNC_IMPL(__imp__sub_8255AA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x8255AA60;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r25,r3,24
	ctx.r25.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r25,255
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 255, ctx.xer);
	// bne cr6,0x8255aa7c
	if (!ctx.cr6.eq) goto loc_8255AA7C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r24,21120(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// b 0x8255aa88
	goto loc_8255AA88;
loc_8255AA7C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x829213a0
	ctx.lr = 0x8255AA84;
	sub_829213A0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_8255AA88:
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// mulli r29,r25,368
	ctx.r29.s64 = ctx.r25.s64 * 368;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// addi r31,r11,25280
	ctx.r31.s64 = ctx.r11.s64 + 25280;
loc_8255AAA0:
	// add r30,r27,r29
	ctx.r30.u64 = ctx.r27.u64 + ctx.r29.u64;
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// lwzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255aae0
	if (ctx.cr6.eq) goto loc_8255AAE0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8255aadc
	if (ctx.cr6.eq) goto loc_8255AADC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82920510
	ctx.lr = 0x8255AAC4;
	sub_82920510(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255aadc
	if (ctx.cr0.eq) goto loc_8255AADC;
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8255ab00
	if (ctx.cr6.eq) goto loc_8255AB00;
loc_8255AADC:
	// stwx r23,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r23.u32);
loc_8255AAE0:
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r27,300
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 300, ctx.xer);
	// blt cr6,0x8255aaa0
	if (ctx.cr6.lt) goto loc_8255AAA0;
	// addi r11,r31,364
	ctx.r11.s64 = ctx.r31.s64 + 364;
	// stwx r23,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r23.u32);
loc_8255AAF8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_8255AB00:
	// mulli r11,r26,20
	ctx.r11.s64 = ctx.r26.s64 * 20;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// addi r9,r31,40
	ctx.r9.s64 = ctx.r31.s64 + 40;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r4,r30,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255ab40
	if (ctx.cr0.eq) goto loc_8255AB40;
	// addi r10,r31,336
	ctx.r10.s64 = ctx.r31.s64 + 336;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// add r7,r29,r10
	ctx.r7.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82a74ae8
	ctx.lr = 0x8255AB3C;
	sub_82A74AE8(ctx, base);
	// b 0x8255ab54
	goto loc_8255AB54;
loc_8255AB40:
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// addi r11,r31,336
	ctx.r11.s64 = ctx.r31.s64 + 336;
	// add r6,r29,r11
	ctx.r6.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r5,r30,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x82a74a50
	ctx.lr = 0x8255AB54;
	sub_82A74A50(ctx, base);
loc_8255AB54:
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r10,r31,364
	ctx.r10.s64 = ctx.r31.s64 + 364;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r23,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r23.u32);
	// stwx r9,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x8255aaf8
	goto loc_8255AAF8;
}

__attribute__((alias("__imp__sub_8255AB6C"))) PPC_WEAK_FUNC(sub_8255AB6C);
PPC_FUNC_IMPL(__imp__sub_8255AB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255AB70"))) PPC_WEAK_FUNC(sub_8255AB70);
PPC_FUNC_IMPL(__imp__sub_8255AB70) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82691500
	ctx.lr = 0x8255AB98;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255abe8
	if (ctx.cr0.eq) goto loc_8255ABE8;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,21(r10)
	PPC_STORE_U8(ctx.r10.u32 + 21, ctx.r11.u8);
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
loc_8255ABE8:
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
	ctx.lr = 0x8255AC00;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_8255AC00"))) PPC_WEAK_FUNC(sub_8255AC00);
PPC_FUNC_IMPL(__imp__sub_8255AC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8255AC08;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8255ac50
	if (!ctx.cr0.eq) goto loc_8255AC50;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8255AC28:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8255ac3c
	if (!ctx.cr6.lt) goto loc_8255AC3C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8255ac44
	goto loc_8255AC44;
loc_8255AC3C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8255AC44:
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8255ac28
	if (ctx.cr0.eq) goto loc_8255AC28;
loc_8255AC50:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8255ac70
	if (ctx.cr6.eq) goto loc_8255AC70;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8255accc
	if (!ctx.cr6.lt) goto loc_8255ACCC;
loc_8255AC70:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82691500
	ctx.lr = 0x8255AC7C;
	sub_82691500(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8255acd8
	if (ctx.cr0.eq) goto loc_8255ACD8;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r6,12
	ctx.xer.ca = ctx.r6.u32 > 4294967283;
	ctx.r11.s64 = ctx.r6.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stb r10,20(r6)
	PPC_STORE_U8(ctx.r6.u32 + 20, ctx.r10.u8);
	// stb r10,21(r6)
	PPC_STORE_U8(ctx.r6.u32 + 21, ctx.r10.u8);
	// beq 0x8255acb8
	if (ctx.cr0.eq) goto loc_8255ACB8;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8255ACB8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255ad78
	ctx.lr = 0x8255ACC8;
	sub_8255AD78(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8255ACCC:
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8255ACD8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x8255ACF4;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_8255ACF4"))) PPC_WEAK_FUNC(sub_8255ACF4);
PPC_FUNC_IMPL(__imp__sub_8255ACF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255ACF8"))) PPC_WEAK_FUNC(sub_8255ACF8);
PPC_FUNC_IMPL(__imp__sub_8255ACF8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8255ad34
	goto loc_8255AD34;
loc_8255AD1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825cbfb8
	ctx.lr = 0x8255AD28;
	sub_825CBFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82691540
	ctx.lr = 0x8255AD34;
	sub_82691540(ctx, base);
loc_8255AD34:
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255ad1c
	if (ctx.cr0.eq) goto loc_8255AD1C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
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
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8255AD78"))) PPC_WEAK_FUNC(sub_8255AD78);
PPC_FUNC_IMPL(__imp__sub_8255AD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8255AD80;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255adc4
	if (!ctx.cr6.eq) goto loc_8255ADC4;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_8255ADAC:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8255ADB0:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8255ADBC:
	// bl 0x82381dc8
	ctx.lr = 0x8255ADC0;
	sub_82381DC8(ctx, base);
	// b 0x8255aee0
	goto loc_8255AEE0;
loc_8255ADC4:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255adec
	if (!ctx.cr6.eq) goto loc_8255ADEC;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8255aec4
	if (!ctx.cr6.lt) goto loc_8255AEC4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x8255adac
	goto loc_8255ADAC;
loc_8255ADEC:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8255ae10
	if (!ctx.cr6.eq) goto loc_8255AE10;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8255aec4
	if (!ctx.cr6.lt) goto loc_8255AEC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8255adb0
	goto loc_8255ADB0;
loc_8255AE10:
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r26,12(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8255ae74
	if (!ctx.cr6.gt) goto loc_8255AE74;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8285ed88
	ctx.lr = 0x8255AE2C;
	sub_8285ED88(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x8255ae70
	if (!ctx.cr6.lt) goto loc_8255AE70;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lbz r11,21(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255ae64
	if (ctx.cr0.eq) goto loc_8255AE64;
loc_8255AE5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8255adbc
	goto loc_8255ADBC;
loc_8255AE64:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_8255AE68:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8255adbc
	goto loc_8255ADBC;
loc_8255AE70:
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
loc_8255AE74:
	// bge cr6,0x8255aec4
	if (!ctx.cr6.lt) goto loc_8255AEC4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8285aa38
	ctx.lr = 0x8255AE84;
	sub_8285AA38(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8255aea0
	if (ctx.cr6.eq) goto loc_8255AEA0;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8255aec4
	if (!ctx.cr6.lt) goto loc_8255AEC4;
loc_8255AEA0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,21(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255ae68
	if (ctx.cr0.eq) goto loc_8255AE68;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x8255ae5c
	goto loc_8255AE5C;
loc_8255AEC4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82278440
	ctx.lr = 0x8255AED4;
	sub_82278440(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8255AEE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255AEEC"))) PPC_WEAK_FUNC(sub_8255AEEC);
PPC_FUNC_IMPL(__imp__sub_8255AEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255AEF0"))) PPC_WEAK_FUNC(sub_8255AEF0);
PPC_FUNC_IMPL(__imp__sub_8255AEF0) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-5456
	ctx.r31.s64 = ctx.r11.s64 + -5456;
	// lbz r11,-380(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -380);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8255b008
	if (!ctx.cr0.eq) goto loc_8255B008;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,-424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -424);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,-380(r31)
	PPC_STORE_U8(ctx.r31.u32 + -380, ctx.r11.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// beq cr6,0x8255af48
	if (ctx.cr6.eq) goto loc_8255AF48;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,-388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -388);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255AF48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8255AF48:
	// lwz r11,-384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255aff4
	if (ctx.cr6.eq) goto loc_8255AFF4;
	// lwz r10,-396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -396);
	// lwz r9,-392(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -392);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8255aff4
	if (ctx.cr6.eq) goto loc_8255AFF4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8255afa0
	if (!ctx.cr6.eq) goto loc_8255AFA0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8255afa4
	if (!ctx.cr6.gt) goto loc_8255AFA4;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8255af94
	if (!ctx.cr6.gt) goto loc_8255AF94;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8255aff0
	if (ctx.cr6.eq) goto loc_8255AFF0;
loc_8255AF94:
	// addi r10,r9,5
	ctx.r10.s64 = ctx.r9.s64 + 5;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x8255afd8
	goto loc_8255AFD8;
loc_8255AFA0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
loc_8255AFA4:
	// bne cr6,0x8255aff0
	if (!ctx.cr6.eq) goto loc_8255AFF0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8255aff0
	if (!ctx.cr6.gt) goto loc_8255AFF0;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8255afd0
	if (!ctx.cr6.gt) goto loc_8255AFD0;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8255aff0
	if (ctx.cr6.eq) goto loc_8255AFF0;
loc_8255AFD0:
	// addi r10,r9,5
	ctx.r10.s64 = ctx.r9.s64 + 5;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8255AFD8:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r10,-396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -396);
loc_8255AFF0:
	// stw r10,-392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -392, ctx.r10.u32);
loc_8255AFF4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r10,-380(r31)
	PPC_STORE_U8(ctx.r31.u32 + -380, ctx.r10.u8);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_8255B008:
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

__attribute__((alias("__imp__sub_8255B01C"))) PPC_WEAK_FUNC(sub_8255B01C);
PPC_FUNC_IMPL(__imp__sub_8255B01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B020"))) PPC_WEAK_FUNC(sub_8255B020);
PPC_FUNC_IMPL(__imp__sub_8255B020) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8255b094
	if (!ctx.cr6.eq) goto loc_8255B094;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r11,r11,-5892
	ctx.r11.s64 = ctx.r11.s64 + -5892;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255b058
	if (ctx.cr6.eq) goto loc_8255B058;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8255B058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8255B058:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8255b148
	ctx.lr = 0x8255B064;
	sub_8255B148(ctx, base);
	// bl 0x825b0ea0
	ctx.lr = 0x8255B068;
	sub_825B0EA0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8255b088
	if (ctx.cr6.eq) goto loc_8255B088;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255B088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8255B088:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x8255b148
	ctx.lr = 0x8255B094;
	sub_8255B148(ctx, base);
loc_8255B094:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B0A4"))) PPC_WEAK_FUNC(sub_8255B0A4);
PPC_FUNC_IMPL(__imp__sub_8255B0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B0A8"))) PPC_WEAK_FUNC(sub_8255B0A8);
PPC_FUNC_IMPL(__imp__sub_8255B0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,-5892
	ctx.r10.s64 = ctx.r11.s64 + -5892;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r8,r10,24448
	ctx.r8.s64 = ctx.r10.s64 + 24448;
	// addi r9,r8,44
	ctx.r9.s64 = ctx.r8.s64 + 44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8255B0D8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255b13c
	if (ctx.cr6.eq) goto loc_8255B13C;
	// lwz r10,240(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 240);
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8255b100
	if (ctx.cr6.eq) goto loc_8255B100;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8255b13c
	if (ctx.cr6.eq) goto loc_8255B13C;
loc_8255B100:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8255b120
	if (!ctx.cr6.gt) goto loc_8255B120;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8255b13c
	if (ctx.cr6.eq) goto loc_8255B13C;
loc_8255B120:
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// li r7,3
	ctx.r7.s64 = 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_8255B13C:
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// bdnz 0x8255b0d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8255B0D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B148"))) PPC_WEAK_FUNC(sub_8255B148);
PPC_FUNC_IMPL(__imp__sub_8255B148) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-5832
	ctx.r11.s64 = ctx.r11.s64 + -5832;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255b180
	if (ctx.cr6.eq) goto loc_8255B180;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255B178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255b184
	goto loc_8255B184;
loc_8255B180:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255B184:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B194"))) PPC_WEAK_FUNC(sub_8255B194);
PPC_FUNC_IMPL(__imp__sub_8255B194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B198"))) PPC_WEAK_FUNC(sub_8255B198);
PPC_FUNC_IMPL(__imp__sub_8255B198) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82546708
	ctx.lr = 0x8255B1CC;
	sub_82546708(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8255B1E8"))) PPC_WEAK_FUNC(sub_8255B1E8);
PPC_FUNC_IMPL(__imp__sub_8255B1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8255B1F0;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8282b5c0
	ctx.lr = 0x8255B218;
	sub_8282B5C0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8282b258
	ctx.lr = 0x8255B220;
	sub_8282B258(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r3,512
	ctx.r3.s64 = ctx.r3.s64 + 512;
	// bl 0x82547c40
	ctx.lr = 0x8255B22C;
	sub_82547C40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,488
	ctx.r3.s64 = 488;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82824f88
	ctx.lr = 0x8255B23C;
	sub_82824F88(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8255b2c8
	if (ctx.cr0.eq) goto loc_8255B2C8;
	// addi r4,r28,496
	ctx.r4.s64 = ctx.r28.s64 + 496;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82824e58
	ctx.lr = 0x8255B250;
	sub_82824E58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255b26c
	if (ctx.cr0.eq) goto loc_8255B26C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82825070
	ctx.lr = 0x8255B264;
	sub_82825070(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8255b270
	goto loc_8255B270;
loc_8255B26C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8255B270:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82825788
	ctx.lr = 0x8255B288;
	sub_82825788(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,31612
	ctx.r11.s64 = ctx.r11.s64 + 31612;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255b2a8
	if (ctx.cr6.eq) goto loc_8255B2A8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8255b2ac
	goto loc_8255B2AC;
loc_8255B2A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8255B2AC:
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// b 0x8255b2cc
	goto loc_8255B2CC;
loc_8255B2C8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8255B2CC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8255b314
	if (ctx.cr6.eq) goto loc_8255B314;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8283b970
	ctx.lr = 0x8255B2EC;
	sub_8283B970(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,472(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// addi r3,r11,13892
	ctx.r3.s64 = ctx.r11.s64 + 13892;
	// bl 0x8283b770
	ctx.lr = 0x8255B300;
	sub_8283B770(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r28,512
	ctx.r4.s64 = ctx.r28.s64 + 512;
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8282b2b8
	ctx.lr = 0x8255B314;
	sub_8282B2B8(ctx, base);
loc_8255B314:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255B328"))) PPC_WEAK_FUNC(sub_8255B328);
PPC_FUNC_IMPL(__imp__sub_8255B328) {
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
	// lwz r10,476(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,31612
	ctx.r11.s64 = ctx.r11.s64 + 31612;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8255b36c
	if (ctx.cr6.eq) goto loc_8255B36C;
	// lwz r3,480(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// bl 0x825469e0
	ctx.lr = 0x8255B364;
	sub_825469E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
loc_8255B36C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82825098
	ctx.lr = 0x8255B374;
	sub_82825098(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255b384
	if (ctx.cr0.eq) goto loc_8255B384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82824fd8
	ctx.lr = 0x8255B384;
	sub_82824FD8(ctx, base);
loc_8255B384:
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

__attribute__((alias("__imp__sub_8255B3A0"))) PPC_WEAK_FUNC(sub_8255B3A0);
PPC_FUNC_IMPL(__imp__sub_8255B3A0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x828253a8
	ctx.lr = 0x8255B3C4;
	sub_828253A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8255b408
	if (!ctx.cr6.eq) goto loc_8255B408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82825398
	ctx.lr = 0x8255B3D4;
	sub_82825398(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f31,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x8255b3f4
	if (ctx.cr6.lt) goto loc_8255B3F4;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x8282b3b8
	ctx.lr = 0x8255B3EC;
	sub_8282B3B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8255b428
	if (!ctx.cr6.eq) goto loc_8255B428;
loc_8255B3F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828253a0
	ctx.lr = 0x8255B3FC;
	sub_828253A0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8255b440
	if (!ctx.cr6.gt) goto loc_8255B440;
loc_8255B404:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8255B408:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_8255B428:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828253a0
	ctx.lr = 0x8255B430;
	sub_828253A0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lfs f0,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8255b404
	if (ctx.cr6.lt) goto loc_8255B404;
loc_8255B440:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8255b408
	goto loc_8255B408;
}

__attribute__((alias("__imp__sub_8255B448"))) PPC_WEAK_FUNC(sub_8255B448);
PPC_FUNC_IMPL(__imp__sub_8255B448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x828253a0
	ctx.lr = 0x8255B470;
	sub_828253A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x828254b0
	ctx.lr = 0x8255B47C;
	sub_828254B0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f29,f1
	ctx.cr6.compare(ctx.f29.f64, ctx.f1.f64);
	// beq cr6,0x8255b504
	if (ctx.cr6.eq) goto loc_8255B504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82825398
	ctx.lr = 0x8255B490;
	sub_82825398(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8255b4b0
	if (ctx.cr6.lt) goto loc_8255B4B0;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8282b3b8
	ctx.lr = 0x8255B4A8;
	sub_8282B3B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8255b4d4
	if (!ctx.cr6.eq) goto loc_8255B4D4;
loc_8255B4B0:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f29.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfs f0,520(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// fsel f0,f12,f30,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f30.f64 : ctx.f0.f64;
	// b 0x8255b4e8
	goto loc_8255B4E8;
loc_8255B4D4:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfs f0,524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fsel f0,f13,f0,f30
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f30.f64;
loc_8255B4E8:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// ble cr6,0x8255b528
	if (!ctx.cr6.gt) goto loc_8255B528;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8255b504
	if (ctx.cr6.lt) goto loc_8255B504;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x8255b508
	if (ctx.cr6.lt) goto loc_8255B508;
loc_8255B504:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255B508:
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
loc_8255B528:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8255b53c
	if (!ctx.cr6.lt) goto loc_8255B53C;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// li r3,0
	ctx.r3.s64 = 0;
	// bge cr6,0x8255b508
	if (!ctx.cr6.lt) goto loc_8255B508;
loc_8255B53C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255b508
	goto loc_8255B508;
}

__attribute__((alias("__imp__sub_8255B544"))) PPC_WEAK_FUNC(sub_8255B544);
PPC_FUNC_IMPL(__imp__sub_8255B544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B548"))) PPC_WEAK_FUNC(sub_8255B548);
PPC_FUNC_IMPL(__imp__sub_8255B548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8255b594
	if (ctx.cr6.lt) goto loc_8255B594;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,31512(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
loc_8255B594:
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lfs f0,11720(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11720);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B5C0"))) PPC_WEAK_FUNC(sub_8255B5C0);
PPC_FUNC_IMPL(__imp__sub_8255B5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lfs f0,-27104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-3728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3728);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f30,f2,f0
	ctx.f30.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lfs f31,-24756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fsubs f1,f31,f1
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x8255B5FC;
	sub_82FA30A8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fsel f1,f30,f13,f0
	ctx.f1.f64 = ctx.f30.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

