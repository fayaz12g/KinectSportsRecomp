#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D2BDCC"))) PPC_WEAK_FUNC(sub_82D2BDCC);
PPC_FUNC_IMPL(__imp__sub_82D2BDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2BDD0"))) PPC_WEAK_FUNC(sub_82D2BDD0);
PPC_FUNC_IMPL(__imp__sub_82D2BDD0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D2BE08"))) PPC_WEAK_FUNC(sub_82D2BE08);
PPC_FUNC_IMPL(__imp__sub_82D2BE08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2BE0C"))) PPC_WEAK_FUNC(sub_82D2BE0C);
PPC_FUNC_IMPL(__imp__sub_82D2BE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2BE10"))) PPC_WEAK_FUNC(sub_82D2BE10);
PPC_FUNC_IMPL(__imp__sub_82D2BE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,10816
	ctx.r3.s64 = ctx.r11.s64 + 10816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2BE1C"))) PPC_WEAK_FUNC(sub_82D2BE1C);
PPC_FUNC_IMPL(__imp__sub_82D2BE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2BE20"))) PPC_WEAK_FUNC(sub_82D2BE20);
PPC_FUNC_IMPL(__imp__sub_82D2BE20) {
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
	// bl 0x82d2d090
	ctx.lr = 0x82D2BE30;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D2BE48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82d2c4b8
	ctx.lr = 0x82D2BE54;
	sub_82D2C4B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2BE64"))) PPC_WEAK_FUNC(sub_82D2BE64);
PPC_FUNC_IMPL(__imp__sub_82D2BE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2BE68"))) PPC_WEAK_FUNC(sub_82D2BE68);
PPC_FUNC_IMPL(__imp__sub_82D2BE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lwz r11,-23888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23888);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2BE78"))) PPC_WEAK_FUNC(sub_82D2BE78);
PPC_FUNC_IMPL(__imp__sub_82D2BE78) {
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
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-23888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23888);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82d2bee0
	if (!ctx.cr6.eq) goto loc_82D2BEE0;
	// bl 0x82d2d090
	ctx.lr = 0x82D2BEA0;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D2BEB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82d2c4b8
	ctx.lr = 0x82D2BEC4;
	sub_82D2C4B8(ctx, base);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// bl 0x82d2c430
	ctx.lr = 0x82D2BECC;
	sub_82D2C430(ctx, base);
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
loc_82D2BEE0:
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82D2BEF8"))) PPC_WEAK_FUNC(sub_82D2BEF8);
PPC_FUNC_IMPL(__imp__sub_82D2BEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lwz r11,-23888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23888);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2BF08"))) PPC_WEAK_FUNC(sub_82D2BF08);
PPC_FUNC_IMPL(__imp__sub_82D2BF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82D2BF10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lis r30,-31960
	ctx.r30.s64 = -2094530560;
	// lwz r31,-23888(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23888);
	// lwz r3,-23884(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23884);
	// bl 0x831791e4
	ctx.lr = 0x82D2BF28;
	__imp__KeTlsGetValue(ctx, base);
	// lis r10,9183
	ctx.r10.s64 = 601817088;
	// ori r29,r10,17748
	ctx.r29.u64 = ctx.r10.u64 | 17748;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82d2bf4c
	if (!ctx.cr6.eq) goto loc_82D2BF4C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82D2BF4C:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x831791a4
	ctx.lr = 0x82D2BF54;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r3,-23884(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23884);
	// bl 0x83179204
	ctx.lr = 0x82D2BF68;
	__imp__KeTlsSetValue(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2BF70"))) PPC_WEAK_FUNC(sub_82D2BF70);
PPC_FUNC_IMPL(__imp__sub_82D2BF70) {
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
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lwz r31,-23888(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23888);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bgt 0x82d2bfb0
	if (ctx.cr0.gt) goto loc_82D2BFB0;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-23884(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23884);
	// bl 0x83179204
	ctx.lr = 0x82D2BFA8;
	__imp__KeTlsSetValue(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x831791b4
	ctx.lr = 0x82D2BFB0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82D2BFB0:
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

__attribute__((alias("__imp__sub_82D2BFC4"))) PPC_WEAK_FUNC(sub_82D2BFC4);
PPC_FUNC_IMPL(__imp__sub_82D2BFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2BFC8"))) PPC_WEAK_FUNC(sub_82D2BFC8);
PPC_FUNC_IMPL(__imp__sub_82D2BFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82D2BFD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d2c094
	if (ctx.cr6.eq) goto loc_82D2C094;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lwz r31,-23888(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23888);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82d2c088
	if (!ctx.cr6.eq) goto loc_82D2C088;
	// lis r29,-31960
	ctx.r29.s64 = -2094530560;
	// lwz r3,-23884(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23884);
	// bl 0x831791e4
	ctx.lr = 0x82D2C004;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,9183
	ctx.r11.s64 = 601817088;
	// ori r30,r11,17748
	ctx.r30.u64 = ctx.r11.u64 | 17748;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82d2c088
	if (ctx.cr6.eq) goto loc_82D2C088;
	// lwz r3,-23884(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23884);
	// bl 0x831791e4
	ctx.lr = 0x82D2C01C;
	__imp__KeTlsGetValue(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82d2c034
	if (!ctx.cr6.eq) goto loc_82D2C034;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82d2c050
	goto loc_82D2C050;
loc_82D2C034:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x831791a4
	ctx.lr = 0x82D2C03C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r3,-23884(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23884);
	// bl 0x83179204
	ctx.lr = 0x82D2C050;
	__imp__KeTlsSetValue(ctx, base);
loc_82D2C050:
	// lhz r11,6(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,6(r28)
	PPC_STORE_U16(ctx.r28.u32 + 6, ctx.r10.u16);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bgt 0x82d2c094
	if (ctx.cr0.gt) goto loc_82D2C094;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-23884(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23884);
	// bl 0x83179204
	ctx.lr = 0x82D2C078;
	__imp__KeTlsSetValue(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x831791b4
	ctx.lr = 0x82D2C080;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82D2C088:
	// lhz r11,6(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,6(r28)
	PPC_STORE_U16(ctx.r28.u32 + 6, ctx.r10.u16);
loc_82D2C094:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2C09C"))) PPC_WEAK_FUNC(sub_82D2C09C);
PPC_FUNC_IMPL(__imp__sub_82D2C09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C0A0"))) PPC_WEAK_FUNC(sub_82D2C0A0);
PPC_FUNC_IMPL(__imp__sub_82D2C0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82D2C0A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d2c19c
	if (ctx.cr6.eq) goto loc_82D2C19C;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82d2c0ec
	if (!ctx.cr6.eq) goto loc_82D2C0EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D2C0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82D2C0EC:
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lwz r31,-23888(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23888);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82d2c190
	if (!ctx.cr6.eq) goto loc_82D2C190;
	// lis r29,-31960
	ctx.r29.s64 = -2094530560;
	// lwz r3,-23884(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23884);
	// bl 0x831791e4
	ctx.lr = 0x82D2C10C;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,9183
	ctx.r11.s64 = 601817088;
	// ori r30,r11,17748
	ctx.r30.u64 = ctx.r11.u64 | 17748;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82d2c190
	if (ctx.cr6.eq) goto loc_82D2C190;
	// lwz r3,-23884(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23884);
	// bl 0x831791e4
	ctx.lr = 0x82D2C124;
	__imp__KeTlsGetValue(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82d2c13c
	if (!ctx.cr6.eq) goto loc_82D2C13C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82d2c158
	goto loc_82D2C158;
loc_82D2C13C:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x831791a4
	ctx.lr = 0x82D2C144;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r3,-23884(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23884);
	// bl 0x83179204
	ctx.lr = 0x82D2C158;
	__imp__KeTlsSetValue(ctx, base);
loc_82D2C158:
	// lhz r11,6(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// sth r10,6(r28)
	PPC_STORE_U16(ctx.r28.u32 + 6, ctx.r10.u16);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bgt 0x82d2c19c
	if (ctx.cr0.gt) goto loc_82D2C19C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-23884(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23884);
	// bl 0x83179204
	ctx.lr = 0x82D2C180;
	__imp__KeTlsSetValue(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x831791b4
	ctx.lr = 0x82D2C188;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82D2C190:
	// lhz r11,6(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// sth r10,6(r28)
	PPC_STORE_U16(ctx.r28.u32 + 6, ctx.r10.u16);
loc_82D2C19C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2C1A4"))) PPC_WEAK_FUNC(sub_82D2C1A4);
PPC_FUNC_IMPL(__imp__sub_82D2C1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C1A8"))) PPC_WEAK_FUNC(sub_82D2C1A8);
PPC_FUNC_IMPL(__imp__sub_82D2C1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82D2C1B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r30,-23888(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23888);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d2c288
	if (ctx.cr6.eq) goto loc_82D2C288;
	// lis r27,-31960
	ctx.r27.s64 = -2094530560;
	// lwz r3,-23884(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -23884);
	// bl 0x831791e4
	ctx.lr = 0x82D2C1E0;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,9183
	ctx.r11.s64 = 601817088;
	// ori r31,r11,17748
	ctx.r31.u64 = ctx.r11.u64 | 17748;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82d2c288
	if (ctx.cr6.eq) goto loc_82D2C288;
	// lwz r3,-23884(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -23884);
	// bl 0x831791e4
	ctx.lr = 0x82D2C1F8;
	__imp__KeTlsGetValue(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82d2c210
	if (!ctx.cr6.eq) goto loc_82D2C210;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x82d2c22c
	goto loc_82D2C22C;
loc_82D2C210:
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x831791a4
	ctx.lr = 0x82D2C218;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r3,-23884(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -23884);
	// bl 0x83179204
	ctx.lr = 0x82D2C22C;
	__imp__KeTlsSetValue(ctx, base);
loc_82D2C22C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82d2c25c
	if (!ctx.cr6.gt) goto loc_82D2C25C;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_82D2C238:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d2c254
	if (ctx.cr6.eq) goto loc_82D2C254;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
loc_82D2C254:
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// bdnz 0x82d2c238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D2C238;
loc_82D2C25C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bgt 0x82d2c2b8
	if (ctx.cr0.gt) goto loc_82D2C2B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-23884(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -23884);
	// bl 0x83179204
	ctx.lr = 0x82D2C278;
	__imp__KeTlsSetValue(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x831791b4
	ctx.lr = 0x82D2C280;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82D2C288:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82d2c2b8
	if (!ctx.cr6.gt) goto loc_82D2C2B8;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_82D2C294:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d2c2b0
	if (ctx.cr6.eq) goto loc_82D2C2B0;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
loc_82D2C2B0:
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// bdnz 0x82d2c294
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82D2C294;
loc_82D2C2B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2C2C0"))) PPC_WEAK_FUNC(sub_82D2C2C0);
PPC_FUNC_IMPL(__imp__sub_82D2C2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82D2C2C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r29,-23888(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23888);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82d2c3c4
	if (ctx.cr6.eq) goto loc_82D2C3C4;
	// lis r27,-31960
	ctx.r27.s64 = -2094530560;
	// lwz r3,-23884(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -23884);
	// bl 0x831791e4
	ctx.lr = 0x82D2C2F8;
	__imp__KeTlsGetValue(ctx, base);
	// lis r11,9183
	ctx.r11.s64 = 601817088;
	// ori r31,r11,17748
	ctx.r31.u64 = ctx.r11.u64 | 17748;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82d2c3c4
	if (ctx.cr6.eq) goto loc_82D2C3C4;
	// lwz r3,-23884(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -23884);
	// bl 0x831791e4
	ctx.lr = 0x82D2C310;
	__imp__KeTlsGetValue(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82d2c328
	if (!ctx.cr6.eq) goto loc_82D2C328;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// b 0x82d2c344
	goto loc_82D2C344;
loc_82D2C328:
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x831791a4
	ctx.lr = 0x82D2C330;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r3,-23884(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -23884);
	// bl 0x83179204
	ctx.lr = 0x82D2C344;
	__imp__KeTlsSetValue(ctx, base);
loc_82D2C344:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82d2c398
	if (!ctx.cr6.gt) goto loc_82D2C398;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82D2C350:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d2c38c
	if (ctx.cr6.eq) goto loc_82D2C38C;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82d2c38c
	if (!ctx.cr6.eq) goto loc_82D2C38C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D2C38C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D2C38C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bne 0x82d2c350
	if (!ctx.cr0.eq) goto loc_82D2C350;
loc_82D2C398:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// bgt 0x82d2c418
	if (ctx.cr0.gt) goto loc_82D2C418;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-23884(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -23884);
	// bl 0x83179204
	ctx.lr = 0x82D2C3B4;
	__imp__KeTlsSetValue(ctx, base);
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x831791b4
	ctx.lr = 0x82D2C3BC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82D2C3C4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82d2c418
	if (!ctx.cr6.gt) goto loc_82D2C418;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82D2C3D0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d2c40c
	if (ctx.cr6.eq) goto loc_82D2C40C;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82d2c40c
	if (!ctx.cr6.eq) goto loc_82D2C40C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D2C40C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D2C40C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bne 0x82d2c3d0
	if (!ctx.cr0.eq) goto loc_82D2C3D0;
loc_82D2C418:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2C420"))) PPC_WEAK_FUNC(sub_82D2C420);
PPC_FUNC_IMPL(__imp__sub_82D2C420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lwz r11,-23888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23888);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C430"))) PPC_WEAK_FUNC(sub_82D2C430);
PPC_FUNC_IMPL(__imp__sub_82D2C430) {
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
	// lis r31,-31960
	ctx.r31.s64 = -2094530560;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-23888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d2c498
	if (ctx.cr6.eq) goto loc_82D2C498;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d2c498
	if (ctx.cr6.eq) goto loc_82D2C498;
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r3,6
	ctx.r11.s64 = ctx.r3.s64 + 6;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82d2c498
	if (!ctx.cr6.eq) goto loc_82D2C498;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D2C498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D2C498:
	// stw r30,-23888(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23888, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82D2C4B4"))) PPC_WEAK_FUNC(sub_82D2C4B4);
PPC_FUNC_IMPL(__imp__sub_82D2C4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C4B8"))) PPC_WEAK_FUNC(sub_82D2C4B8);
PPC_FUNC_IMPL(__imp__sub_82D2C4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82D2C4C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,10840
	ctx.r10.s64 = ctx.r11.s64 + 10840;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r9,-47
	ctx.r9.s64 = -47;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// sth r28,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r28.u16);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// sth r29,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r29.u16);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// bl 0x82d363d8
	ctx.lr = 0x82D2C4FC;
	sub_82D363D8(ctx, base);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d39408
	ctx.lr = 0x82D2C508;
	sub_82D39408(ctx, base);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2C518"))) PPC_WEAK_FUNC(sub_82D2C518);
PPC_FUNC_IMPL(__imp__sub_82D2C518) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D2C52C"))) PPC_WEAK_FUNC(sub_82D2C52C);
PPC_FUNC_IMPL(__imp__sub_82D2C52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C530"))) PPC_WEAK_FUNC(sub_82D2C530);
PPC_FUNC_IMPL(__imp__sub_82D2C530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23832
	ctx.r3.s64 = ctx.r11.s64 + -23832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C53C"))) PPC_WEAK_FUNC(sub_82D2C53C);
PPC_FUNC_IMPL(__imp__sub_82D2C53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C540"))) PPC_WEAK_FUNC(sub_82D2C540);
PPC_FUNC_IMPL(__imp__sub_82D2C540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D2C554"))) PPC_WEAK_FUNC(sub_82D2C554);
PPC_FUNC_IMPL(__imp__sub_82D2C554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C558"))) PPC_WEAK_FUNC(sub_82D2C558);
PPC_FUNC_IMPL(__imp__sub_82D2C558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23768
	ctx.r3.s64 = ctx.r11.s64 + -23768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C564"))) PPC_WEAK_FUNC(sub_82D2C564);
PPC_FUNC_IMPL(__imp__sub_82D2C564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C568"))) PPC_WEAK_FUNC(sub_82D2C568);
PPC_FUNC_IMPL(__imp__sub_82D2C568) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r9,r10,11076
	ctx.r9.s64 = ctx.r10.s64 + 11076;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82d372b8
	sub_82D372B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2C588"))) PPC_WEAK_FUNC(sub_82D2C588);
PPC_FUNC_IMPL(__imp__sub_82D2C588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C58C"))) PPC_WEAK_FUNC(sub_82D2C58C);
PPC_FUNC_IMPL(__imp__sub_82D2C58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C590"))) PPC_WEAK_FUNC(sub_82D2C590);
PPC_FUNC_IMPL(__imp__sub_82D2C590) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,11076
	ctx.r10.s64 = ctx.r11.s64 + 11076;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x82D2C5B4;
	sub_82D372B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C5C8"))) PPC_WEAK_FUNC(sub_82D2C5C8);
PPC_FUNC_IMPL(__imp__sub_82D2C5C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r9,r10,11092
	ctx.r9.s64 = ctx.r10.s64 + 11092;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82d372b8
	sub_82D372B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2C5E8"))) PPC_WEAK_FUNC(sub_82D2C5E8);
PPC_FUNC_IMPL(__imp__sub_82D2C5E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C5EC"))) PPC_WEAK_FUNC(sub_82D2C5EC);
PPC_FUNC_IMPL(__imp__sub_82D2C5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C5F0"))) PPC_WEAK_FUNC(sub_82D2C5F0);
PPC_FUNC_IMPL(__imp__sub_82D2C5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,11092
	ctx.r10.s64 = ctx.r11.s64 + 11092;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x82D2C614;
	sub_82D372B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C628"))) PPC_WEAK_FUNC(sub_82D2C628);
PPC_FUNC_IMPL(__imp__sub_82D2C628) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d37568
	ctx.lr = 0x82D2C64C;
	sub_82D37568(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,10816
	ctx.r9.s64 = ctx.r11.s64 + 10816;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82d2c684
	if (ctx.cr6.eq) goto loc_82D2C684;
	// bl 0x82d2d090
	ctx.lr = 0x82D2C668;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D2C684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D2C684:
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

__attribute__((alias("__imp__sub_82D2C6A0"))) PPC_WEAK_FUNC(sub_82D2C6A0);
PPC_FUNC_IMPL(__imp__sub_82D2C6A0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C6A8"))) PPC_WEAK_FUNC(sub_82D2C6A8);
PPC_FUNC_IMPL(__imp__sub_82D2C6A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// rlwinm r3,r11,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C6B4"))) PPC_WEAK_FUNC(sub_82D2C6B4);
PPC_FUNC_IMPL(__imp__sub_82D2C6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C6B8"))) PPC_WEAK_FUNC(sub_82D2C6B8);
PPC_FUNC_IMPL(__imp__sub_82D2C6B8) {
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
	// bl 0x82d39850
	ctx.lr = 0x82D2C6D8;
	sub_82D39850(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d2c704
	if (ctx.cr6.eq) goto loc_82D2C704;
	// bl 0x82d2d090
	ctx.lr = 0x82D2C6E8;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D2C704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D2C704:
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

__attribute__((alias("__imp__sub_82D2C720"))) PPC_WEAK_FUNC(sub_82D2C720);
PPC_FUNC_IMPL(__imp__sub_82D2C720) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d39948
	sub_82D39948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2C72C"))) PPC_WEAK_FUNC(sub_82D2C72C);
PPC_FUNC_IMPL(__imp__sub_82D2C72C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C730"))) PPC_WEAK_FUNC(sub_82D2C730);
PPC_FUNC_IMPL(__imp__sub_82D2C730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23704
	ctx.r3.s64 = ctx.r11.s64 + -23704;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C73C"))) PPC_WEAK_FUNC(sub_82D2C73C);
PPC_FUNC_IMPL(__imp__sub_82D2C73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C740"))) PPC_WEAK_FUNC(sub_82D2C740);
PPC_FUNC_IMPL(__imp__sub_82D2C740) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d3e050
	sub_82D3E050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2C74C"))) PPC_WEAK_FUNC(sub_82D2C74C);
PPC_FUNC_IMPL(__imp__sub_82D2C74C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C750"))) PPC_WEAK_FUNC(sub_82D2C750);
PPC_FUNC_IMPL(__imp__sub_82D2C750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23656
	ctx.r3.s64 = ctx.r11.s64 + -23656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C75C"))) PPC_WEAK_FUNC(sub_82D2C75C);
PPC_FUNC_IMPL(__imp__sub_82D2C75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C760"))) PPC_WEAK_FUNC(sub_82D2C760);
PPC_FUNC_IMPL(__imp__sub_82D2C760) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C764"))) PPC_WEAK_FUNC(sub_82D2C764);
PPC_FUNC_IMPL(__imp__sub_82D2C764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C768"))) PPC_WEAK_FUNC(sub_82D2C768);
PPC_FUNC_IMPL(__imp__sub_82D2C768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23608
	ctx.r3.s64 = ctx.r11.s64 + -23608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C774"))) PPC_WEAK_FUNC(sub_82D2C774);
PPC_FUNC_IMPL(__imp__sub_82D2C774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C778"))) PPC_WEAK_FUNC(sub_82D2C778);
PPC_FUNC_IMPL(__imp__sub_82D2C778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23560
	ctx.r3.s64 = ctx.r11.s64 + -23560;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C784"))) PPC_WEAK_FUNC(sub_82D2C784);
PPC_FUNC_IMPL(__imp__sub_82D2C784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C788"))) PPC_WEAK_FUNC(sub_82D2C788);
PPC_FUNC_IMPL(__imp__sub_82D2C788) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D2C79C"))) PPC_WEAK_FUNC(sub_82D2C79C);
PPC_FUNC_IMPL(__imp__sub_82D2C79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C7A0"))) PPC_WEAK_FUNC(sub_82D2C7A0);
PPC_FUNC_IMPL(__imp__sub_82D2C7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23512
	ctx.r3.s64 = ctx.r11.s64 + -23512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C7AC"))) PPC_WEAK_FUNC(sub_82D2C7AC);
PPC_FUNC_IMPL(__imp__sub_82D2C7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C7B0"))) PPC_WEAK_FUNC(sub_82D2C7B0);
PPC_FUNC_IMPL(__imp__sub_82D2C7B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d372b8
	sub_82D372B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2C7BC"))) PPC_WEAK_FUNC(sub_82D2C7BC);
PPC_FUNC_IMPL(__imp__sub_82D2C7BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C7C0"))) PPC_WEAK_FUNC(sub_82D2C7C0);
PPC_FUNC_IMPL(__imp__sub_82D2C7C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82d37568
	sub_82D37568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2C7C8"))) PPC_WEAK_FUNC(sub_82D2C7C8);
PPC_FUNC_IMPL(__imp__sub_82D2C7C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d37568
	sub_82D37568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2C7CC"))) PPC_WEAK_FUNC(sub_82D2C7CC);
PPC_FUNC_IMPL(__imp__sub_82D2C7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C7D0"))) PPC_WEAK_FUNC(sub_82D2C7D0);
PPC_FUNC_IMPL(__imp__sub_82D2C7D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r10,r11,11568
	ctx.r10.s64 = ctx.r11.s64 + 11568;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C7E8"))) PPC_WEAK_FUNC(sub_82D2C7E8);
PPC_FUNC_IMPL(__imp__sub_82D2C7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,11568
	ctx.r3.s64 = ctx.r11.s64 + 11568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C7F4"))) PPC_WEAK_FUNC(sub_82D2C7F4);
PPC_FUNC_IMPL(__imp__sub_82D2C7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C7F8"))) PPC_WEAK_FUNC(sub_82D2C7F8);
PPC_FUNC_IMPL(__imp__sub_82D2C7F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d2c898
	sub_82D2C898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2C7FC"))) PPC_WEAK_FUNC(sub_82D2C7FC);
PPC_FUNC_IMPL(__imp__sub_82D2C7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C800"))) PPC_WEAK_FUNC(sub_82D2C800);
PPC_FUNC_IMPL(__imp__sub_82D2C800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82D2C808;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// bl 0x82d2d090
	ctx.lr = 0x82D2C818;
	sub_82D2D090(ctx, base);
	// lwz r30,12(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r29,8(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r28,16(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82d2c840
	if (!ctx.cr6.gt) goto loc_82D2C840;
loc_82D2C82C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d37568
	ctx.lr = 0x82D2C834;
	sub_82D37568(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x82d2c82c
	if (!ctx.cr0.eq) goto loc_82D2C82C;
loc_82D2C840:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d2c878
	if (!ctx.cr6.eq) goto loc_82D2C878;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D2C878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D2C878:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r11,10816
	ctx.r9.s64 = ctx.r11.s64 + 10816;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2C898"))) PPC_WEAK_FUNC(sub_82D2C898);
PPC_FUNC_IMPL(__imp__sub_82D2C898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82D2C8A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2d090
	ctx.lr = 0x82D2C8AC;
	sub_82D2D090(ctx, base);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,16(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82d2c8d8
	if (!ctx.cr6.gt) goto loc_82D2C8D8;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
loc_82D2C8C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d37568
	ctx.lr = 0x82D2C8CC;
	sub_82D37568(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x82d2c8c4
	if (!ctx.cr0.eq) goto loc_82D2C8C4;
loc_82D2C8D8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d2c910
	if (!ctx.cr6.eq) goto loc_82D2C910;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D2C910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D2C910:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2C924"))) PPC_WEAK_FUNC(sub_82D2C924);
PPC_FUNC_IMPL(__imp__sub_82D2C924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C928"))) PPC_WEAK_FUNC(sub_82D2C928);
PPC_FUNC_IMPL(__imp__sub_82D2C928) {
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
	// bl 0x82d2c800
	ctx.lr = 0x82D2C948;
	sub_82D2C800(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d2c974
	if (ctx.cr6.eq) goto loc_82D2C974;
	// bl 0x82d2d090
	ctx.lr = 0x82D2C958;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D2C974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D2C974:
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

__attribute__((alias("__imp__sub_82D2C990"))) PPC_WEAK_FUNC(sub_82D2C990);
PPC_FUNC_IMPL(__imp__sub_82D2C990) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D2C9A4"))) PPC_WEAK_FUNC(sub_82D2C9A4);
PPC_FUNC_IMPL(__imp__sub_82D2C9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C9A8"))) PPC_WEAK_FUNC(sub_82D2C9A8);
PPC_FUNC_IMPL(__imp__sub_82D2C9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23464
	ctx.r3.s64 = ctx.r11.s64 + -23464;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C9B4"))) PPC_WEAK_FUNC(sub_82D2C9B4);
PPC_FUNC_IMPL(__imp__sub_82D2C9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C9B8"))) PPC_WEAK_FUNC(sub_82D2C9B8);
PPC_FUNC_IMPL(__imp__sub_82D2C9B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,11852
	ctx.r9.s64 = ctx.r11.s64 + 11852;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C9D8"))) PPC_WEAK_FUNC(sub_82D2C9D8);
PPC_FUNC_IMPL(__imp__sub_82D2C9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,11852
	ctx.r3.s64 = ctx.r11.s64 + 11852;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2C9E4"))) PPC_WEAK_FUNC(sub_82D2C9E4);
PPC_FUNC_IMPL(__imp__sub_82D2C9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2C9E8"))) PPC_WEAK_FUNC(sub_82D2C9E8);
PPC_FUNC_IMPL(__imp__sub_82D2C9E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D2C9FC"))) PPC_WEAK_FUNC(sub_82D2C9FC);
PPC_FUNC_IMPL(__imp__sub_82D2C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CA00"))) PPC_WEAK_FUNC(sub_82D2CA00);
PPC_FUNC_IMPL(__imp__sub_82D2CA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23416
	ctx.r3.s64 = ctx.r11.s64 + -23416;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CA0C"))) PPC_WEAK_FUNC(sub_82D2CA0C);
PPC_FUNC_IMPL(__imp__sub_82D2CA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CA10"))) PPC_WEAK_FUNC(sub_82D2CA10);
PPC_FUNC_IMPL(__imp__sub_82D2CA10) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r10,r11,10824
	ctx.r10.s64 = ctx.r11.s64 + 10824;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CA28"))) PPC_WEAK_FUNC(sub_82D2CA28);
PPC_FUNC_IMPL(__imp__sub_82D2CA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,10824
	ctx.r3.s64 = ctx.r11.s64 + 10824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CA34"))) PPC_WEAK_FUNC(sub_82D2CA34);
PPC_FUNC_IMPL(__imp__sub_82D2CA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CA38"))) PPC_WEAK_FUNC(sub_82D2CA38);
PPC_FUNC_IMPL(__imp__sub_82D2CA38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CA3C"))) PPC_WEAK_FUNC(sub_82D2CA3C);
PPC_FUNC_IMPL(__imp__sub_82D2CA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CA40"))) PPC_WEAK_FUNC(sub_82D2CA40);
PPC_FUNC_IMPL(__imp__sub_82D2CA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23368
	ctx.r3.s64 = ctx.r11.s64 + -23368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CA4C"))) PPC_WEAK_FUNC(sub_82D2CA4C);
PPC_FUNC_IMPL(__imp__sub_82D2CA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CA50"))) PPC_WEAK_FUNC(sub_82D2CA50);
PPC_FUNC_IMPL(__imp__sub_82D2CA50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D2CA64"))) PPC_WEAK_FUNC(sub_82D2CA64);
PPC_FUNC_IMPL(__imp__sub_82D2CA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CA68"))) PPC_WEAK_FUNC(sub_82D2CA68);
PPC_FUNC_IMPL(__imp__sub_82D2CA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23320
	ctx.r3.s64 = ctx.r11.s64 + -23320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CA74"))) PPC_WEAK_FUNC(sub_82D2CA74);
PPC_FUNC_IMPL(__imp__sub_82D2CA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CA78"))) PPC_WEAK_FUNC(sub_82D2CA78);
PPC_FUNC_IMPL(__imp__sub_82D2CA78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,12092
	ctx.r9.s64 = ctx.r11.s64 + 12092;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CA98"))) PPC_WEAK_FUNC(sub_82D2CA98);
PPC_FUNC_IMPL(__imp__sub_82D2CA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,12092
	ctx.r3.s64 = ctx.r11.s64 + 12092;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CAA4"))) PPC_WEAK_FUNC(sub_82D2CAA4);
PPC_FUNC_IMPL(__imp__sub_82D2CAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CAA8"))) PPC_WEAK_FUNC(sub_82D2CAA8);
PPC_FUNC_IMPL(__imp__sub_82D2CAA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CAAC"))) PPC_WEAK_FUNC(sub_82D2CAAC);
PPC_FUNC_IMPL(__imp__sub_82D2CAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CAB0"))) PPC_WEAK_FUNC(sub_82D2CAB0);
PPC_FUNC_IMPL(__imp__sub_82D2CAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23272
	ctx.r3.s64 = ctx.r11.s64 + -23272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CABC"))) PPC_WEAK_FUNC(sub_82D2CABC);
PPC_FUNC_IMPL(__imp__sub_82D2CABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CAC0"))) PPC_WEAK_FUNC(sub_82D2CAC0);
PPC_FUNC_IMPL(__imp__sub_82D2CAC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CAC4"))) PPC_WEAK_FUNC(sub_82D2CAC4);
PPC_FUNC_IMPL(__imp__sub_82D2CAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CAC8"))) PPC_WEAK_FUNC(sub_82D2CAC8);
PPC_FUNC_IMPL(__imp__sub_82D2CAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23224
	ctx.r3.s64 = ctx.r11.s64 + -23224;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CAD4"))) PPC_WEAK_FUNC(sub_82D2CAD4);
PPC_FUNC_IMPL(__imp__sub_82D2CAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CAD8"))) PPC_WEAK_FUNC(sub_82D2CAD8);
PPC_FUNC_IMPL(__imp__sub_82D2CAD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CADC"))) PPC_WEAK_FUNC(sub_82D2CADC);
PPC_FUNC_IMPL(__imp__sub_82D2CADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CAE0"))) PPC_WEAK_FUNC(sub_82D2CAE0);
PPC_FUNC_IMPL(__imp__sub_82D2CAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23176
	ctx.r3.s64 = ctx.r11.s64 + -23176;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CAEC"))) PPC_WEAK_FUNC(sub_82D2CAEC);
PPC_FUNC_IMPL(__imp__sub_82D2CAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CAF0"))) PPC_WEAK_FUNC(sub_82D2CAF0);
PPC_FUNC_IMPL(__imp__sub_82D2CAF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CAF4"))) PPC_WEAK_FUNC(sub_82D2CAF4);
PPC_FUNC_IMPL(__imp__sub_82D2CAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CAF8"))) PPC_WEAK_FUNC(sub_82D2CAF8);
PPC_FUNC_IMPL(__imp__sub_82D2CAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23128
	ctx.r3.s64 = ctx.r11.s64 + -23128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CB04"))) PPC_WEAK_FUNC(sub_82D2CB04);
PPC_FUNC_IMPL(__imp__sub_82D2CB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CB08"))) PPC_WEAK_FUNC(sub_82D2CB08);
PPC_FUNC_IMPL(__imp__sub_82D2CB08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CB0C"))) PPC_WEAK_FUNC(sub_82D2CB0C);
PPC_FUNC_IMPL(__imp__sub_82D2CB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CB10"))) PPC_WEAK_FUNC(sub_82D2CB10);
PPC_FUNC_IMPL(__imp__sub_82D2CB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23080
	ctx.r3.s64 = ctx.r11.s64 + -23080;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CB1C"))) PPC_WEAK_FUNC(sub_82D2CB1C);
PPC_FUNC_IMPL(__imp__sub_82D2CB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CB20"))) PPC_WEAK_FUNC(sub_82D2CB20);
PPC_FUNC_IMPL(__imp__sub_82D2CB20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CB24"))) PPC_WEAK_FUNC(sub_82D2CB24);
PPC_FUNC_IMPL(__imp__sub_82D2CB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CB28"))) PPC_WEAK_FUNC(sub_82D2CB28);
PPC_FUNC_IMPL(__imp__sub_82D2CB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23032
	ctx.r3.s64 = ctx.r11.s64 + -23032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CB34"))) PPC_WEAK_FUNC(sub_82D2CB34);
PPC_FUNC_IMPL(__imp__sub_82D2CB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CB38"))) PPC_WEAK_FUNC(sub_82D2CB38);
PPC_FUNC_IMPL(__imp__sub_82D2CB38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CB3C"))) PPC_WEAK_FUNC(sub_82D2CB3C);
PPC_FUNC_IMPL(__imp__sub_82D2CB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CB40"))) PPC_WEAK_FUNC(sub_82D2CB40);
PPC_FUNC_IMPL(__imp__sub_82D2CB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22984
	ctx.r3.s64 = ctx.r11.s64 + -22984;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CB4C"))) PPC_WEAK_FUNC(sub_82D2CB4C);
PPC_FUNC_IMPL(__imp__sub_82D2CB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CB50"))) PPC_WEAK_FUNC(sub_82D2CB50);
PPC_FUNC_IMPL(__imp__sub_82D2CB50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CB54"))) PPC_WEAK_FUNC(sub_82D2CB54);
PPC_FUNC_IMPL(__imp__sub_82D2CB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CB58"))) PPC_WEAK_FUNC(sub_82D2CB58);
PPC_FUNC_IMPL(__imp__sub_82D2CB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22936
	ctx.r3.s64 = ctx.r11.s64 + -22936;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CB64"))) PPC_WEAK_FUNC(sub_82D2CB64);
PPC_FUNC_IMPL(__imp__sub_82D2CB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CB68"))) PPC_WEAK_FUNC(sub_82D2CB68);
PPC_FUNC_IMPL(__imp__sub_82D2CB68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CB6C"))) PPC_WEAK_FUNC(sub_82D2CB6C);
PPC_FUNC_IMPL(__imp__sub_82D2CB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CB70"))) PPC_WEAK_FUNC(sub_82D2CB70);
PPC_FUNC_IMPL(__imp__sub_82D2CB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22888
	ctx.r3.s64 = ctx.r11.s64 + -22888;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CB7C"))) PPC_WEAK_FUNC(sub_82D2CB7C);
PPC_FUNC_IMPL(__imp__sub_82D2CB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CB80"))) PPC_WEAK_FUNC(sub_82D2CB80);
PPC_FUNC_IMPL(__imp__sub_82D2CB80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CB84"))) PPC_WEAK_FUNC(sub_82D2CB84);
PPC_FUNC_IMPL(__imp__sub_82D2CB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CB88"))) PPC_WEAK_FUNC(sub_82D2CB88);
PPC_FUNC_IMPL(__imp__sub_82D2CB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22840
	ctx.r3.s64 = ctx.r11.s64 + -22840;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CB94"))) PPC_WEAK_FUNC(sub_82D2CB94);
PPC_FUNC_IMPL(__imp__sub_82D2CB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CB98"))) PPC_WEAK_FUNC(sub_82D2CB98);
PPC_FUNC_IMPL(__imp__sub_82D2CB98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CB9C"))) PPC_WEAK_FUNC(sub_82D2CB9C);
PPC_FUNC_IMPL(__imp__sub_82D2CB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CBA0"))) PPC_WEAK_FUNC(sub_82D2CBA0);
PPC_FUNC_IMPL(__imp__sub_82D2CBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22792
	ctx.r3.s64 = ctx.r11.s64 + -22792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CBAC"))) PPC_WEAK_FUNC(sub_82D2CBAC);
PPC_FUNC_IMPL(__imp__sub_82D2CBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CBB0"))) PPC_WEAK_FUNC(sub_82D2CBB0);
PPC_FUNC_IMPL(__imp__sub_82D2CBB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CBB4"))) PPC_WEAK_FUNC(sub_82D2CBB4);
PPC_FUNC_IMPL(__imp__sub_82D2CBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CBB8"))) PPC_WEAK_FUNC(sub_82D2CBB8);
PPC_FUNC_IMPL(__imp__sub_82D2CBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22744
	ctx.r3.s64 = ctx.r11.s64 + -22744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CBC4"))) PPC_WEAK_FUNC(sub_82D2CBC4);
PPC_FUNC_IMPL(__imp__sub_82D2CBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CBC8"))) PPC_WEAK_FUNC(sub_82D2CBC8);
PPC_FUNC_IMPL(__imp__sub_82D2CBC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CBCC"))) PPC_WEAK_FUNC(sub_82D2CBCC);
PPC_FUNC_IMPL(__imp__sub_82D2CBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CBD0"))) PPC_WEAK_FUNC(sub_82D2CBD0);
PPC_FUNC_IMPL(__imp__sub_82D2CBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22696
	ctx.r3.s64 = ctx.r11.s64 + -22696;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CBDC"))) PPC_WEAK_FUNC(sub_82D2CBDC);
PPC_FUNC_IMPL(__imp__sub_82D2CBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CBE0"))) PPC_WEAK_FUNC(sub_82D2CBE0);
PPC_FUNC_IMPL(__imp__sub_82D2CBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22648
	ctx.r3.s64 = ctx.r11.s64 + -22648;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CBEC"))) PPC_WEAK_FUNC(sub_82D2CBEC);
PPC_FUNC_IMPL(__imp__sub_82D2CBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CBF0"))) PPC_WEAK_FUNC(sub_82D2CBF0);
PPC_FUNC_IMPL(__imp__sub_82D2CBF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CBF4"))) PPC_WEAK_FUNC(sub_82D2CBF4);
PPC_FUNC_IMPL(__imp__sub_82D2CBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CBF8"))) PPC_WEAK_FUNC(sub_82D2CBF8);
PPC_FUNC_IMPL(__imp__sub_82D2CBF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d70b10
	sub_82D70B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2CBFC"))) PPC_WEAK_FUNC(sub_82D2CBFC);
PPC_FUNC_IMPL(__imp__sub_82D2CBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CC00"))) PPC_WEAK_FUNC(sub_82D2CC00);
PPC_FUNC_IMPL(__imp__sub_82D2CC00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CC04"))) PPC_WEAK_FUNC(sub_82D2CC04);
PPC_FUNC_IMPL(__imp__sub_82D2CC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CC08"))) PPC_WEAK_FUNC(sub_82D2CC08);
PPC_FUNC_IMPL(__imp__sub_82D2CC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22600
	ctx.r3.s64 = ctx.r11.s64 + -22600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CC14"))) PPC_WEAK_FUNC(sub_82D2CC14);
PPC_FUNC_IMPL(__imp__sub_82D2CC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CC18"))) PPC_WEAK_FUNC(sub_82D2CC18);
PPC_FUNC_IMPL(__imp__sub_82D2CC18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CC1C"))) PPC_WEAK_FUNC(sub_82D2CC1C);
PPC_FUNC_IMPL(__imp__sub_82D2CC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CC20"))) PPC_WEAK_FUNC(sub_82D2CC20);
PPC_FUNC_IMPL(__imp__sub_82D2CC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22552
	ctx.r3.s64 = ctx.r11.s64 + -22552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CC2C"))) PPC_WEAK_FUNC(sub_82D2CC2C);
PPC_FUNC_IMPL(__imp__sub_82D2CC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CC30"))) PPC_WEAK_FUNC(sub_82D2CC30);
PPC_FUNC_IMPL(__imp__sub_82D2CC30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CC34"))) PPC_WEAK_FUNC(sub_82D2CC34);
PPC_FUNC_IMPL(__imp__sub_82D2CC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CC38"))) PPC_WEAK_FUNC(sub_82D2CC38);
PPC_FUNC_IMPL(__imp__sub_82D2CC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22504
	ctx.r3.s64 = ctx.r11.s64 + -22504;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CC44"))) PPC_WEAK_FUNC(sub_82D2CC44);
PPC_FUNC_IMPL(__imp__sub_82D2CC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CC48"))) PPC_WEAK_FUNC(sub_82D2CC48);
PPC_FUNC_IMPL(__imp__sub_82D2CC48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CC4C"))) PPC_WEAK_FUNC(sub_82D2CC4C);
PPC_FUNC_IMPL(__imp__sub_82D2CC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CC50"))) PPC_WEAK_FUNC(sub_82D2CC50);
PPC_FUNC_IMPL(__imp__sub_82D2CC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22456
	ctx.r3.s64 = ctx.r11.s64 + -22456;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CC5C"))) PPC_WEAK_FUNC(sub_82D2CC5C);
PPC_FUNC_IMPL(__imp__sub_82D2CC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CC60"))) PPC_WEAK_FUNC(sub_82D2CC60);
PPC_FUNC_IMPL(__imp__sub_82D2CC60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CC64"))) PPC_WEAK_FUNC(sub_82D2CC64);
PPC_FUNC_IMPL(__imp__sub_82D2CC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CC68"))) PPC_WEAK_FUNC(sub_82D2CC68);
PPC_FUNC_IMPL(__imp__sub_82D2CC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22408
	ctx.r3.s64 = ctx.r11.s64 + -22408;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CC74"))) PPC_WEAK_FUNC(sub_82D2CC74);
PPC_FUNC_IMPL(__imp__sub_82D2CC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CC78"))) PPC_WEAK_FUNC(sub_82D2CC78);
PPC_FUNC_IMPL(__imp__sub_82D2CC78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CC7C"))) PPC_WEAK_FUNC(sub_82D2CC7C);
PPC_FUNC_IMPL(__imp__sub_82D2CC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CC80"))) PPC_WEAK_FUNC(sub_82D2CC80);
PPC_FUNC_IMPL(__imp__sub_82D2CC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22360
	ctx.r3.s64 = ctx.r11.s64 + -22360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CC8C"))) PPC_WEAK_FUNC(sub_82D2CC8C);
PPC_FUNC_IMPL(__imp__sub_82D2CC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CC90"))) PPC_WEAK_FUNC(sub_82D2CC90);
PPC_FUNC_IMPL(__imp__sub_82D2CC90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CC94"))) PPC_WEAK_FUNC(sub_82D2CC94);
PPC_FUNC_IMPL(__imp__sub_82D2CC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CC98"))) PPC_WEAK_FUNC(sub_82D2CC98);
PPC_FUNC_IMPL(__imp__sub_82D2CC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22312
	ctx.r3.s64 = ctx.r11.s64 + -22312;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CCA4"))) PPC_WEAK_FUNC(sub_82D2CCA4);
PPC_FUNC_IMPL(__imp__sub_82D2CCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CCA8"))) PPC_WEAK_FUNC(sub_82D2CCA8);
PPC_FUNC_IMPL(__imp__sub_82D2CCA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CCAC"))) PPC_WEAK_FUNC(sub_82D2CCAC);
PPC_FUNC_IMPL(__imp__sub_82D2CCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CCB0"))) PPC_WEAK_FUNC(sub_82D2CCB0);
PPC_FUNC_IMPL(__imp__sub_82D2CCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22264
	ctx.r3.s64 = ctx.r11.s64 + -22264;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CCBC"))) PPC_WEAK_FUNC(sub_82D2CCBC);
PPC_FUNC_IMPL(__imp__sub_82D2CCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CCC0"))) PPC_WEAK_FUNC(sub_82D2CCC0);
PPC_FUNC_IMPL(__imp__sub_82D2CCC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CCC4"))) PPC_WEAK_FUNC(sub_82D2CCC4);
PPC_FUNC_IMPL(__imp__sub_82D2CCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CCC8"))) PPC_WEAK_FUNC(sub_82D2CCC8);
PPC_FUNC_IMPL(__imp__sub_82D2CCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22216
	ctx.r3.s64 = ctx.r11.s64 + -22216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CCD4"))) PPC_WEAK_FUNC(sub_82D2CCD4);
PPC_FUNC_IMPL(__imp__sub_82D2CCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CCD8"))) PPC_WEAK_FUNC(sub_82D2CCD8);
PPC_FUNC_IMPL(__imp__sub_82D2CCD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CCDC"))) PPC_WEAK_FUNC(sub_82D2CCDC);
PPC_FUNC_IMPL(__imp__sub_82D2CCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CCE0"))) PPC_WEAK_FUNC(sub_82D2CCE0);
PPC_FUNC_IMPL(__imp__sub_82D2CCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22168
	ctx.r3.s64 = ctx.r11.s64 + -22168;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CCEC"))) PPC_WEAK_FUNC(sub_82D2CCEC);
PPC_FUNC_IMPL(__imp__sub_82D2CCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CCF0"))) PPC_WEAK_FUNC(sub_82D2CCF0);
PPC_FUNC_IMPL(__imp__sub_82D2CCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22120
	ctx.r3.s64 = ctx.r11.s64 + -22120;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CCFC"))) PPC_WEAK_FUNC(sub_82D2CCFC);
PPC_FUNC_IMPL(__imp__sub_82D2CCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CD00"))) PPC_WEAK_FUNC(sub_82D2CD00);
PPC_FUNC_IMPL(__imp__sub_82D2CD00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CD04"))) PPC_WEAK_FUNC(sub_82D2CD04);
PPC_FUNC_IMPL(__imp__sub_82D2CD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CD08"))) PPC_WEAK_FUNC(sub_82D2CD08);
PPC_FUNC_IMPL(__imp__sub_82D2CD08) {
	PPC_FUNC_PROLOGUE();
	// b 0x823af320
	sub_823AF320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2CD0C"))) PPC_WEAK_FUNC(sub_82D2CD0C);
PPC_FUNC_IMPL(__imp__sub_82D2CD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CD10"))) PPC_WEAK_FUNC(sub_82D2CD10);
PPC_FUNC_IMPL(__imp__sub_82D2CD10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CD14"))) PPC_WEAK_FUNC(sub_82D2CD14);
PPC_FUNC_IMPL(__imp__sub_82D2CD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CD18"))) PPC_WEAK_FUNC(sub_82D2CD18);
PPC_FUNC_IMPL(__imp__sub_82D2CD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22072
	ctx.r3.s64 = ctx.r11.s64 + -22072;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CD24"))) PPC_WEAK_FUNC(sub_82D2CD24);
PPC_FUNC_IMPL(__imp__sub_82D2CD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CD28"))) PPC_WEAK_FUNC(sub_82D2CD28);
PPC_FUNC_IMPL(__imp__sub_82D2CD28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CD2C"))) PPC_WEAK_FUNC(sub_82D2CD2C);
PPC_FUNC_IMPL(__imp__sub_82D2CD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CD30"))) PPC_WEAK_FUNC(sub_82D2CD30);
PPC_FUNC_IMPL(__imp__sub_82D2CD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-22024
	ctx.r3.s64 = ctx.r11.s64 + -22024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CD3C"))) PPC_WEAK_FUNC(sub_82D2CD3C);
PPC_FUNC_IMPL(__imp__sub_82D2CD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CD40"))) PPC_WEAK_FUNC(sub_82D2CD40);
PPC_FUNC_IMPL(__imp__sub_82D2CD40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CD44"))) PPC_WEAK_FUNC(sub_82D2CD44);
PPC_FUNC_IMPL(__imp__sub_82D2CD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CD48"))) PPC_WEAK_FUNC(sub_82D2CD48);
PPC_FUNC_IMPL(__imp__sub_82D2CD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-21976
	ctx.r3.s64 = ctx.r11.s64 + -21976;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CD54"))) PPC_WEAK_FUNC(sub_82D2CD54);
PPC_FUNC_IMPL(__imp__sub_82D2CD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CD58"))) PPC_WEAK_FUNC(sub_82D2CD58);
PPC_FUNC_IMPL(__imp__sub_82D2CD58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CD5C"))) PPC_WEAK_FUNC(sub_82D2CD5C);
PPC_FUNC_IMPL(__imp__sub_82D2CD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CD60"))) PPC_WEAK_FUNC(sub_82D2CD60);
PPC_FUNC_IMPL(__imp__sub_82D2CD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-21928
	ctx.r3.s64 = ctx.r11.s64 + -21928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CD6C"))) PPC_WEAK_FUNC(sub_82D2CD6C);
PPC_FUNC_IMPL(__imp__sub_82D2CD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CD70"))) PPC_WEAK_FUNC(sub_82D2CD70);
PPC_FUNC_IMPL(__imp__sub_82D2CD70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,15395
	ctx.r10.s64 = 1008926720;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// ori r8,r10,55050
	ctx.r8.u64 = ctx.r10.u64 | 55050;
	// addi r6,r11,19816
	ctx.r6.s64 = ctx.r11.s64 + 19816;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// bge cr6,0x82d2cd9c
	if (!ctx.cr6.lt) goto loc_82D2CD9C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_82D2CD9C:
	// lis r8,17240
	ctx.r8.s64 = 1129840640;
	// addi r11,r6,1024
	ctx.r11.s64 = ctx.r6.s64 + 1024;
	// ori r7,r8,52429
	ctx.r7.u64 = ctx.r8.u64 | 52429;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82d2cdb8
	if (!ctx.cr6.gt) goto loc_82D2CDB8;
	// addi r10,r6,512
	ctx.r10.s64 = ctx.r6.s64 + 512;
	// b 0x82d2cdbc
	goto loc_82D2CDBC;
loc_82D2CDB8:
	// addi r11,r6,512
	ctx.r11.s64 = ctx.r6.s64 + 512;
loc_82D2CDBC:
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82d2cddc
	if (!ctx.cr6.gt) goto loc_82D2CDDC;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82d2cde0
	goto loc_82D2CDE0;
loc_82D2CDDC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82D2CDE0:
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82d2ce00
	if (!ctx.cr6.gt) goto loc_82D2CE00;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82d2ce04
	goto loc_82D2CE04;
loc_82D2CE00:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82D2CE04:
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82d2ce24
	if (!ctx.cr6.gt) goto loc_82D2CE24;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82d2ce28
	goto loc_82D2CE28;
loc_82D2CE24:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82D2CE28:
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82d2ce48
	if (!ctx.cr6.gt) goto loc_82D2CE48;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82d2ce4c
	goto loc_82D2CE4C;
loc_82D2CE48:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82D2CE4C:
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82d2ce6c
	if (!ctx.cr6.gt) goto loc_82D2CE6C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82d2ce70
	goto loc_82D2CE70;
loc_82D2CE6C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82D2CE70:
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82d2ce90
	if (!ctx.cr6.gt) goto loc_82D2CE90;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82d2ce94
	goto loc_82D2CE94;
loc_82D2CE90:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82D2CE94:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82d2cebc
	if (!ctx.cr6.gt) goto loc_82D2CEBC;
	// addi r10,r6,1020
	ctx.r10.s64 = ctx.r6.s64 + 1020;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82d2cebc
	if (!ctx.cr6.lt) goto loc_82D2CEBC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82D2CEBC:
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CECC"))) PPC_WEAK_FUNC(sub_82D2CECC);
PPC_FUNC_IMPL(__imp__sub_82D2CECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CED0"))) PPC_WEAK_FUNC(sub_82D2CED0);
PPC_FUNC_IMPL(__imp__sub_82D2CED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82D2CED8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r30,r4,r5
	ctx.r30.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D2CEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// andc r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// subf r6,r3,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r3.s64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r29,-16(r7)
	PPC_STORE_U32(ctx.r7.u32 + -16, ctx.r29.u32);
	// stw r30,-12(r7)
	PPC_STORE_U32(ctx.r7.u32 + -12, ctx.r30.u32);
	// stw r6,-8(r7)
	PPC_STORE_U32(ctx.r7.u32 + -8, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2CF28"))) PPC_WEAK_FUNC(sub_82D2CF28);
PPC_FUNC_IMPL(__imp__sub_82D2CF28) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -12);
	// lwz r9,-8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + -8);
	// stw r10,-16(r4)
	PPC_STORE_U32(ctx.r4.u32 + -16, ctx.r10.u32);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r4,r9,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r9.s64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D2CF58"))) PPC_WEAK_FUNC(sub_82D2CF58);
PPC_FUNC_IMPL(__imp__sub_82D2CF58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CF5C"))) PPC_WEAK_FUNC(sub_82D2CF5C);
PPC_FUNC_IMPL(__imp__sub_82D2CF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CF60"))) PPC_WEAK_FUNC(sub_82D2CF60);
PPC_FUNC_IMPL(__imp__sub_82D2CF60) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D2CF90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82D2CFB8"))) PPC_WEAK_FUNC(sub_82D2CFB8);
PPC_FUNC_IMPL(__imp__sub_82D2CFB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,-12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -12);
	// addi r4,r4,-16
	ctx.r4.s64 = ctx.r4.s64 + -16;
	// stw r9,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r9.u32);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D2CFE8"))) PPC_WEAK_FUNC(sub_82D2CFE8);
PPC_FUNC_IMPL(__imp__sub_82D2CFE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2CFEC"))) PPC_WEAK_FUNC(sub_82D2CFEC);
PPC_FUNC_IMPL(__imp__sub_82D2CFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2CFF0"))) PPC_WEAK_FUNC(sub_82D2CFF0);
PPC_FUNC_IMPL(__imp__sub_82D2CFF0) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D2D018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D2D02C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82D2D040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82D2D054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D2D068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82D2D07C"))) PPC_WEAK_FUNC(sub_82D2D07C);
PPC_FUNC_IMPL(__imp__sub_82D2D07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2D080"))) PPC_WEAK_FUNC(sub_82D2D080);
PPC_FUNC_IMPL(__imp__sub_82D2D080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-21784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21784);
	// b 0x83179204
	__imp__KeTlsSetValue(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2D090"))) PPC_WEAK_FUNC(sub_82D2D090);
PPC_FUNC_IMPL(__imp__sub_82D2D090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lwz r3,-21784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21784);
	// b 0x831791e4
	__imp__KeTlsGetValue(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2D09C"))) PPC_WEAK_FUNC(sub_82D2D09C);
PPC_FUNC_IMPL(__imp__sub_82D2D09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2D0A0"))) PPC_WEAK_FUNC(sub_82D2D0A0);
PPC_FUNC_IMPL(__imp__sub_82D2D0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lwz r3,-21784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21784);
	// b 0x831791e4
	__imp__KeTlsGetValue(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2D0AC"))) PPC_WEAK_FUNC(sub_82D2D0AC);
PPC_FUNC_IMPL(__imp__sub_82D2D0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2D0B0"))) PPC_WEAK_FUNC(sub_82D2D0B0);
PPC_FUNC_IMPL(__imp__sub_82D2D0B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2D0D8"))) PPC_WEAK_FUNC(sub_82D2D0D8);
PPC_FUNC_IMPL(__imp__sub_82D2D0D8) {
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
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82d2d124
	if (ctx.cr6.lt) goto loc_82D2D124;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82d2d110
	if (ctx.cr6.gt) goto loc_82D2D110;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,24440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24440);
	ctx.f0.f64 = double(temp.f32);
loc_82D2D110:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D2D124:
	// bl 0x82fa3ec8
	ctx.lr = 0x82D2D128;
	sub_82FA3EC8(ctx, base);
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

__attribute__((alias("__imp__sub_82D2D13C"))) PPC_WEAK_FUNC(sub_82D2D13C);
PPC_FUNC_IMPL(__imp__sub_82D2D13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2D140"))) PPC_WEAK_FUNC(sub_82D2D140);
PPC_FUNC_IMPL(__imp__sub_82D2D140) {
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
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82d2d188
	if (ctx.cr6.lt) goto loc_82D2D188;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82d2d190
	if (ctx.cr6.gt) goto loc_82D2D190;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f13,24440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24440);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82d2d190
	goto loc_82D2D190;
loc_82D2D188:
	// bl 0x82fa3ec8
	ctx.lr = 0x82D2D18C;
	sub_82FA3EC8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
loc_82D2D190:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,21500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21500);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2D1AC"))) PPC_WEAK_FUNC(sub_82D2D1AC);
PPC_FUNC_IMPL(__imp__sub_82D2D1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2D1B0"))) PPC_WEAK_FUNC(sub_82D2D1B0);
PPC_FUNC_IMPL(__imp__sub_82D2D1B0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,11556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa28d0
	ctx.lr = 0x82D2D1E4;
	sub_82FA28D0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa29b0
	ctx.lr = 0x82D2D20C;
	sub_82FA29B0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2D230"))) PPC_WEAK_FUNC(sub_82D2D230);
PPC_FUNC_IMPL(__imp__sub_82D2D230) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d2e0e0
	ctx.lr = 0x82D2D250;
	sub_82D2E0E0(ctx, base);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vmsum4fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stvewx v13,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,24436(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f0,-23580(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x82d2d28c
	if (ctx.cr6.lt) goto loc_82D2D28C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D2D28C:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82d2d2a8
	if (ctx.cr6.eq) goto loc_82D2D2A8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82d2d2ac
	if (!ctx.cr6.eq) goto loc_82D2D2AC;
loc_82D2D2A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D2D2AC:
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82D2D2CC"))) PPC_WEAK_FUNC(sub_82D2D2CC);
PPC_FUNC_IMPL(__imp__sub_82D2D2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2D2D0"))) PPC_WEAK_FUNC(sub_82D2D2D0);
PPC_FUNC_IMPL(__imp__sub_82D2D2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82D2D2D8;
	__savegprlr_28(ctx, base);
	// lfs f13,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82d2d36c
	if (!ctx.cr6.gt) goto loc_82D2D36C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f13,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// fadds f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,11556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fsqrts f3,f6
	ctx.f3.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f1,-52(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// fmuls f0,f10,f2
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fmuls f13,f7,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// stfs f13,-60(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fmuls f12,f4,f2
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// stfs f12,-56(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82D2D36C:
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r11.u32);
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// stw r9,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r9.u32);
	// ble cr6,0x82d2d390
	if (!ctx.cr6.gt) goto loc_82D2D390;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D2D390:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82d2d3ac
	if (!ctx.cr6.gt) goto loc_82D2D3AC;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82D2D3AC:
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lwzx r10,r7,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r31,-32233
	ctx.r31.s64 = -2112421888;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,11556(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// add r28,r7,r10
	ctx.r28.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfsx f12,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,24436(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// add r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r9,r8,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lfsx f11,r30,r4
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// add r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lfsx f9,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f7,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r31,r1,-64
	ctx.r31.s64 = ctx.r1.s64 + -64;
	// lfsx f6,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r1,-64
	ctx.r5.s64 = ctx.r1.s64 + -64;
	// lfsx f5,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fadds f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// lfsx f3,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f1,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,-64
	ctx.r4.s64 = ctx.r1.s64 + -64;
	// fadds f11,f3,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// fsubs f10,f12,f8
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fadds f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f6,r7,r31
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// fmuls f5,f4,f7
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// stfs f5,-52(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// fmuls f4,f2,f7
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// stfsx f4,r8,r5
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// fmuls f3,f11,f7
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfsx f3,r6,r4
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2D4AC"))) PPC_WEAK_FUNC(sub_82D2D4AC);
PPC_FUNC_IMPL(__imp__sub_82D2D4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2D4B0"))) PPC_WEAK_FUNC(sub_82D2D4B0);
PPC_FUNC_IMPL(__imp__sub_82D2D4B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d2d2d0
	sub_82D2D2D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D2D4B4"))) PPC_WEAK_FUNC(sub_82D2D4B4);
PPC_FUNC_IMPL(__imp__sub_82D2D4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2D4B8"))) PPC_WEAK_FUNC(sub_82D2D4B8);
PPC_FUNC_IMPL(__imp__sub_82D2D4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// li r9,2
	ctx.r9.s64 = 2;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82d2d4f0
	if (!ctx.cr6.lt) goto loc_82D2D4F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82D2D4F0:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82d2d4fc
	if (!ctx.cr6.lt) goto loc_82D2D4FC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82D2D4FC:
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// vspltisw v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// vor v12,v11,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// vxor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_setzero_si128());
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfsx f0,r8,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r9,22016
	ctx.r4.s64 = ctx.r9.s64 + 22016;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stvx128 v10,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// stfsx f13,r8,r5
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfsx f12,r6,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lvx128 v8,r0,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v9,v8,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vrsqrtefp v0,v9
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v9.f32))));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v6,v9,v13
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)));
	// lfs f0,5184(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// vcmpeqfp v7,v11,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vor v9,v6,v6
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// vnmsubfp v6,v6,v10,v13
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v6,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v9,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v12,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw v5,v13,0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v4,v8,v5
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v5.f32)));
	// stvx128 v4,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,-4(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lvx128 v3,r0,r7
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v3,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D2D5AC"))) PPC_WEAK_FUNC(sub_82D2D5AC);
PPC_FUNC_IMPL(__imp__sub_82D2D5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2D5B0"))) PPC_WEAK_FUNC(sub_82D2D5B0);
PPC_FUNC_IMPL(__imp__sub_82D2D5B0) {
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
	// bl 0x82d2d2d0
	ctx.lr = 0x82D2D5C8;
	sub_82D2D2D0(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// vspltisw v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r11,22016
	ctx.r10.s64 = ctx.r11.s64 + 22016;
	// vor v12,v11,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// lvx128 v6,r0,r3
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v5,v6,v6
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v5
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v5.f32))));
	// vmulfp128 v9,v5,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp v8,v11,v5
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v7,v9,v10,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v9,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v12,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw v4,v13,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v3,v6,v4
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v4.f32)));
	// stvx128 v3,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82D2D62C"))) PPC_WEAK_FUNC(sub_82D2D62C);
PPC_FUNC_IMPL(__imp__sub_82D2D62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D2D630"))) PPC_WEAK_FUNC(sub_82D2D630);
PPC_FUNC_IMPL(__imp__sub_82D2D630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82D2D638;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fa8d28
	ctx.lr = 0x82D2D640;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vmsum4fp128 v13,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stvewx v13,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,5184(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f30.f64 = double(temp.f32);
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82d2d694
	if (!ctx.cr6.lt) goto loc_82D2D694;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f31,f31
	ctx.f31.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lfs f29,5180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f29.f64 = double(temp.f32);
loc_82D2D694:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,21888(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82d2d714
	if (!ctx.cr6.lt) goto loc_82D2D714;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d2d0d8
	ctx.lr = 0x82D2D6AC;
	sub_82D2D0D8(ctx, base);
	// fnmsubs f0,f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f31.f64 - ctx.f30.f64)));
	// fmuls f31,f1,f28
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// fdivs f30,f30,f13
	ctx.f30.f64 = double(float(ctx.f30.f64 / ctx.f13.f64));
	// bl 0x82fa28d0
	ctx.lr = 0x82D2D6C4;
	sub_82FA28D0(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82fa28d0
	ctx.lr = 0x82D2D6D8;
	sub_82FA28D0(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvlx v12,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// fmuls f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// vmulfp128 v13,v13,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// fmuls f8,f9,f29
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v10,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v10,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// vmaddfp v8,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// b 0x82d2d744
	goto loc_82D2D744;
loc_82D2D714:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// fmuls f0,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fsubs f13,f30,f28
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f28.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v0,v0,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmaddfp v8,v12,v13,v0
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
loc_82D2D744:
	// vmsum4fp128 v11,v8,v8
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// vspltisw v10,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r11,22016
	ctx.r10.s64 = ctx.r11.s64 + 22016;
	// vor v12,v10,v10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v11
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v11.f32))));
	// vmulfp128 v6,v11,v13
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp v7,v10,v11
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vor v10,v6,v6
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// vnmsubfp v6,v6,v9,v13
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v6,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v12,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw v5,v13,0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v4,v8,v5
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v5.f32)));
	// stvx128 v4,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fa8d74
	ctx.lr = 0x82D2D7A0;
	__restfpr_28(ctx, base);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

