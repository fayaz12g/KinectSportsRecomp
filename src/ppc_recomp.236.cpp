#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D7D908"))) PPC_WEAK_FUNC(sub_82D7D908);
PPC_FUNC_IMPL(__imp__sub_82D7D908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,30664
	ctx.r10.s64 = ctx.r11.s64 + 30664;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d7d924
	if (ctx.cr6.eq) goto loc_82D7D924;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82D7D924:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r8,r11,30884
	ctx.r8.s64 = ctx.r11.s64 + 30884;
	// addi r7,r10,-31980
	ctx.r7.s64 = ctx.r10.s64 + -31980;
	// addi r6,r9,-32012
	ctx.r6.s64 = ctx.r9.s64 + -32012;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// beq cr6,0x82d7d960
	if (ctx.cr6.eq) goto loc_82D7D960;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
loc_82D7D960:
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r8,r10,-31892
	ctx.r8.s64 = ctx.r10.s64 + -31892;
	// addi r7,r9,-31924
	ctx.r7.s64 = ctx.r9.s64 + -31924;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7D988"))) PPC_WEAK_FUNC(sub_82D7D988);
PPC_FUNC_IMPL(__imp__sub_82D7D988) {
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
	// bl 0x82d8d2c0
	ctx.lr = 0x82D7D9A8;
	sub_82D8D2C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7d9d4
	if (ctx.cr6.eq) goto loc_82D7D9D4;
	// bl 0x82d2d090
	ctx.lr = 0x82D7D9B8;
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
	ctx.lr = 0x82D7D9D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7D9D4:
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

__attribute__((alias("__imp__sub_82D7D9F0"))) PPC_WEAK_FUNC(sub_82D7D9F0);
PPC_FUNC_IMPL(__imp__sub_82D7D9F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82d7d988
	sub_82D7D988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7D9F8"))) PPC_WEAK_FUNC(sub_82D7D9F8);
PPC_FUNC_IMPL(__imp__sub_82D7D9F8) {
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

__attribute__((alias("__imp__sub_82D7DA0C"))) PPC_WEAK_FUNC(sub_82D7DA0C);
PPC_FUNC_IMPL(__imp__sub_82D7DA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DA10"))) PPC_WEAK_FUNC(sub_82D7DA10);
PPC_FUNC_IMPL(__imp__sub_82D7DA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-19900
	ctx.r3.s64 = ctx.r11.s64 + -19900;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DA1C"))) PPC_WEAK_FUNC(sub_82D7DA1C);
PPC_FUNC_IMPL(__imp__sub_82D7DA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DA20"))) PPC_WEAK_FUNC(sub_82D7DA20);
PPC_FUNC_IMPL(__imp__sub_82D7DA20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,30664
	ctx.r10.s64 = ctx.r11.s64 + 30664;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d7da44
	if (ctx.cr6.eq) goto loc_82D7DA44;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82D7DA44:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r9,r11,30916
	ctx.r9.s64 = ctx.r11.s64 + 30916;
	// addi r8,r10,-31708
	ctx.r8.s64 = ctx.r10.s64 + -31708;
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DA68"))) PPC_WEAK_FUNC(sub_82D7DA68);
PPC_FUNC_IMPL(__imp__sub_82D7DA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-31708
	ctx.r3.s64 = ctx.r11.s64 + -31708;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DA74"))) PPC_WEAK_FUNC(sub_82D7DA74);
PPC_FUNC_IMPL(__imp__sub_82D7DA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DA78"))) PPC_WEAK_FUNC(sub_82D7DA78);
PPC_FUNC_IMPL(__imp__sub_82D7DA78) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r30,r5,-96
	ctx.r30.s64 = ctx.r5.s64 + -96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D7DAAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82d7dabc
	if (!ctx.cr6.lt) goto loc_82D7DABC;
loc_82D7DAB4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82d7daec
	goto loc_82D7DAEC;
loc_82D7DABC:
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x82d7dab4
	if (ctx.cr6.gt) goto loc_82D7DAB4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82d7dae4
	if (!ctx.cr6.eq) goto loc_82D7DAE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x82d7daec
	goto loc_82D7DAEC;
loc_82D7DAE4:
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r3,96
	ctx.r3.s64 = 96;
loc_82D7DAEC:
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

__attribute__((alias("__imp__sub_82D7DB04"))) PPC_WEAK_FUNC(sub_82D7DB04);
PPC_FUNC_IMPL(__imp__sub_82D7DB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DB08"))) PPC_WEAK_FUNC(sub_82D7DB08);
PPC_FUNC_IMPL(__imp__sub_82D7DB08) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,30916
	ctx.r10.s64 = ctx.r11.s64 + 30916;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// beq cr6,0x82d7db40
	if (ctx.cr6.eq) goto loc_82D7DB40;
	// bl 0x82d2c0a0
	ctx.lr = 0x82D7DB40;
	sub_82D2C0A0(ctx, base);
loc_82D7DB40:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r9,r11,30884
	ctx.r9.s64 = ctx.r11.s64 + 30884;
	// addi r8,r10,10816
	ctx.r8.s64 = ctx.r10.s64 + 10816;
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82d7db84
	if (ctx.cr6.eq) goto loc_82D7DB84;
	// bl 0x82d2d090
	ctx.lr = 0x82D7DB68;
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
	ctx.lr = 0x82D7DB84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7DB84:
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

__attribute__((alias("__imp__sub_82D7DBA0"))) PPC_WEAK_FUNC(sub_82D7DBA0);
PPC_FUNC_IMPL(__imp__sub_82D7DBA0) {
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

__attribute__((alias("__imp__sub_82D7DBB4"))) PPC_WEAK_FUNC(sub_82D7DBB4);
PPC_FUNC_IMPL(__imp__sub_82D7DBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DBB8"))) PPC_WEAK_FUNC(sub_82D7DBB8);
PPC_FUNC_IMPL(__imp__sub_82D7DBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-19852
	ctx.r3.s64 = ctx.r11.s64 + -19852;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DBC4"))) PPC_WEAK_FUNC(sub_82D7DBC4);
PPC_FUNC_IMPL(__imp__sub_82D7DBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DBC8"))) PPC_WEAK_FUNC(sub_82D7DBC8);
PPC_FUNC_IMPL(__imp__sub_82D7DBC8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,30664
	ctx.r10.s64 = ctx.r11.s64 + 30664;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d7dbec
	if (ctx.cr6.eq) goto loc_82D7DBEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82D7DBEC:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r9,r11,30916
	ctx.r9.s64 = ctx.r11.s64 + 30916;
	// addi r8,r10,-31572
	ctx.r8.s64 = ctx.r10.s64 + -31572;
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DC10"))) PPC_WEAK_FUNC(sub_82D7DC10);
PPC_FUNC_IMPL(__imp__sub_82D7DC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-31572
	ctx.r3.s64 = ctx.r11.s64 + -31572;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DC1C"))) PPC_WEAK_FUNC(sub_82D7DC1C);
PPC_FUNC_IMPL(__imp__sub_82D7DC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DC20"))) PPC_WEAK_FUNC(sub_82D7DC20);
PPC_FUNC_IMPL(__imp__sub_82D7DC20) {
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

__attribute__((alias("__imp__sub_82D7DC34"))) PPC_WEAK_FUNC(sub_82D7DC34);
PPC_FUNC_IMPL(__imp__sub_82D7DC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DC38"))) PPC_WEAK_FUNC(sub_82D7DC38);
PPC_FUNC_IMPL(__imp__sub_82D7DC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-19804
	ctx.r3.s64 = ctx.r11.s64 + -19804;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DC44"))) PPC_WEAK_FUNC(sub_82D7DC44);
PPC_FUNC_IMPL(__imp__sub_82D7DC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DC48"))) PPC_WEAK_FUNC(sub_82D7DC48);
PPC_FUNC_IMPL(__imp__sub_82D7DC48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-31388
	ctx.r10.s64 = ctx.r11.s64 + -31388;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DC60"))) PPC_WEAK_FUNC(sub_82D7DC60);
PPC_FUNC_IMPL(__imp__sub_82D7DC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-31388
	ctx.r3.s64 = ctx.r11.s64 + -31388;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DC6C"))) PPC_WEAK_FUNC(sub_82D7DC6C);
PPC_FUNC_IMPL(__imp__sub_82D7DC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DC70"))) PPC_WEAK_FUNC(sub_82D7DC70);
PPC_FUNC_IMPL(__imp__sub_82D7DC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82D7DC78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// bl 0x82d2d090
	ctx.lr = 0x82D7DC88;
	sub_82D2D090(ctx, base);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r29,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7dcc0
	if (!ctx.cr6.eq) goto loc_82D7DCC0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D7DCC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7DCC0:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82D7DCD4;
	sub_82D2D090(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r29,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7dd08
	if (!ctx.cr6.eq) goto loc_82D7DD08;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D7DD08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7DD08:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// addi r10,r11,10816
	ctx.r10.s64 = ctx.r11.s64 + 10816;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DD24"))) PPC_WEAK_FUNC(sub_82D7DD24);
PPC_FUNC_IMPL(__imp__sub_82D7DD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DD28"))) PPC_WEAK_FUNC(sub_82D7DD28);
PPC_FUNC_IMPL(__imp__sub_82D7DD28) {
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
	// bl 0x82d7dc70
	ctx.lr = 0x82D7DD48;
	sub_82D7DC70(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7dd74
	if (ctx.cr6.eq) goto loc_82D7DD74;
	// bl 0x82d2d090
	ctx.lr = 0x82D7DD58;
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
	ctx.lr = 0x82D7DD74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7DD74:
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

__attribute__((alias("__imp__sub_82D7DD90"))) PPC_WEAK_FUNC(sub_82D7DD90);
PPC_FUNC_IMPL(__imp__sub_82D7DD90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DD94"))) PPC_WEAK_FUNC(sub_82D7DD94);
PPC_FUNC_IMPL(__imp__sub_82D7DD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DD98"))) PPC_WEAK_FUNC(sub_82D7DD98);
PPC_FUNC_IMPL(__imp__sub_82D7DD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-19756
	ctx.r3.s64 = ctx.r11.s64 + -19756;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DDA4"))) PPC_WEAK_FUNC(sub_82D7DDA4);
PPC_FUNC_IMPL(__imp__sub_82D7DDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DDA8"))) PPC_WEAK_FUNC(sub_82D7DDA8);
PPC_FUNC_IMPL(__imp__sub_82D7DDA8) {
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

__attribute__((alias("__imp__sub_82D7DDBC"))) PPC_WEAK_FUNC(sub_82D7DDBC);
PPC_FUNC_IMPL(__imp__sub_82D7DDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DDC0"))) PPC_WEAK_FUNC(sub_82D7DDC0);
PPC_FUNC_IMPL(__imp__sub_82D7DDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-19708
	ctx.r3.s64 = ctx.r11.s64 + -19708;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DDCC"))) PPC_WEAK_FUNC(sub_82D7DDCC);
PPC_FUNC_IMPL(__imp__sub_82D7DDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DDD0"))) PPC_WEAK_FUNC(sub_82D7DDD0);
PPC_FUNC_IMPL(__imp__sub_82D7DDD0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d828c8
	sub_82D828C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DDDC"))) PPC_WEAK_FUNC(sub_82D7DDDC);
PPC_FUNC_IMPL(__imp__sub_82D7DDDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DDE0"))) PPC_WEAK_FUNC(sub_82D7DDE0);
PPC_FUNC_IMPL(__imp__sub_82D7DDE0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d828c8
	ctx.lr = 0x82D7DDF8;
	sub_82D828C8(ctx, base);
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

__attribute__((alias("__imp__sub_82D7DE0C"))) PPC_WEAK_FUNC(sub_82D7DE0C);
PPC_FUNC_IMPL(__imp__sub_82D7DE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DE10"))) PPC_WEAK_FUNC(sub_82D7DE10);
PPC_FUNC_IMPL(__imp__sub_82D7DE10) {
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

__attribute__((alias("__imp__sub_82D7DE24"))) PPC_WEAK_FUNC(sub_82D7DE24);
PPC_FUNC_IMPL(__imp__sub_82D7DE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DE28"))) PPC_WEAK_FUNC(sub_82D7DE28);
PPC_FUNC_IMPL(__imp__sub_82D7DE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-19644
	ctx.r3.s64 = ctx.r11.s64 + -19644;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DE34"))) PPC_WEAK_FUNC(sub_82D7DE34);
PPC_FUNC_IMPL(__imp__sub_82D7DE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DE38"))) PPC_WEAK_FUNC(sub_82D7DE38);
PPC_FUNC_IMPL(__imp__sub_82D7DE38) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d84dd8
	sub_82D84DD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DE44"))) PPC_WEAK_FUNC(sub_82D7DE44);
PPC_FUNC_IMPL(__imp__sub_82D7DE44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DE48"))) PPC_WEAK_FUNC(sub_82D7DE48);
PPC_FUNC_IMPL(__imp__sub_82D7DE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d84dd8
	ctx.lr = 0x82D7DE60;
	sub_82D84DD8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DE74"))) PPC_WEAK_FUNC(sub_82D7DE74);
PPC_FUNC_IMPL(__imp__sub_82D7DE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DE78"))) PPC_WEAK_FUNC(sub_82D7DE78);
PPC_FUNC_IMPL(__imp__sub_82D7DE78) {
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

__attribute__((alias("__imp__sub_82D7DE8C"))) PPC_WEAK_FUNC(sub_82D7DE8C);
PPC_FUNC_IMPL(__imp__sub_82D7DE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DE90"))) PPC_WEAK_FUNC(sub_82D7DE90);
PPC_FUNC_IMPL(__imp__sub_82D7DE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-19580
	ctx.r3.s64 = ctx.r11.s64 + -19580;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DE9C"))) PPC_WEAK_FUNC(sub_82D7DE9C);
PPC_FUNC_IMPL(__imp__sub_82D7DE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DEA0"))) PPC_WEAK_FUNC(sub_82D7DEA0);
PPC_FUNC_IMPL(__imp__sub_82D7DEA0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-30440
	ctx.r10.s64 = ctx.r11.s64 + -30440;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DEB8"))) PPC_WEAK_FUNC(sub_82D7DEB8);
PPC_FUNC_IMPL(__imp__sub_82D7DEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-30440
	ctx.r3.s64 = ctx.r11.s64 + -30440;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DEC4"))) PPC_WEAK_FUNC(sub_82D7DEC4);
PPC_FUNC_IMPL(__imp__sub_82D7DEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DEC8"))) PPC_WEAK_FUNC(sub_82D7DEC8);
PPC_FUNC_IMPL(__imp__sub_82D7DEC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DECC"))) PPC_WEAK_FUNC(sub_82D7DECC);
PPC_FUNC_IMPL(__imp__sub_82D7DECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DED0"))) PPC_WEAK_FUNC(sub_82D7DED0);
PPC_FUNC_IMPL(__imp__sub_82D7DED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-19532
	ctx.r3.s64 = ctx.r11.s64 + -19532;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DEDC"))) PPC_WEAK_FUNC(sub_82D7DEDC);
PPC_FUNC_IMPL(__imp__sub_82D7DEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DEE0"))) PPC_WEAK_FUNC(sub_82D7DEE0);
PPC_FUNC_IMPL(__imp__sub_82D7DEE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DEE4"))) PPC_WEAK_FUNC(sub_82D7DEE4);
PPC_FUNC_IMPL(__imp__sub_82D7DEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DEE8"))) PPC_WEAK_FUNC(sub_82D7DEE8);
PPC_FUNC_IMPL(__imp__sub_82D7DEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-19484
	ctx.r3.s64 = ctx.r11.s64 + -19484;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DEF4"))) PPC_WEAK_FUNC(sub_82D7DEF4);
PPC_FUNC_IMPL(__imp__sub_82D7DEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DEF8"))) PPC_WEAK_FUNC(sub_82D7DEF8);
PPC_FUNC_IMPL(__imp__sub_82D7DEF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d86830
	sub_82D86830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DF04"))) PPC_WEAK_FUNC(sub_82D7DF04);
PPC_FUNC_IMPL(__imp__sub_82D7DF04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DF08"))) PPC_WEAK_FUNC(sub_82D7DF08);
PPC_FUNC_IMPL(__imp__sub_82D7DF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-19436
	ctx.r3.s64 = ctx.r11.s64 + -19436;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DF14"))) PPC_WEAK_FUNC(sub_82D7DF14);
PPC_FUNC_IMPL(__imp__sub_82D7DF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DF18"))) PPC_WEAK_FUNC(sub_82D7DF18);
PPC_FUNC_IMPL(__imp__sub_82D7DF18) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d87590
	sub_82D87590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DF24"))) PPC_WEAK_FUNC(sub_82D7DF24);
PPC_FUNC_IMPL(__imp__sub_82D7DF24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DF28"))) PPC_WEAK_FUNC(sub_82D7DF28);
PPC_FUNC_IMPL(__imp__sub_82D7DF28) {
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

__attribute__((alias("__imp__sub_82D7DF3C"))) PPC_WEAK_FUNC(sub_82D7DF3C);
PPC_FUNC_IMPL(__imp__sub_82D7DF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DF40"))) PPC_WEAK_FUNC(sub_82D7DF40);
PPC_FUNC_IMPL(__imp__sub_82D7DF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d87590
	ctx.lr = 0x82D7DF58;
	sub_82D87590(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DF6C"))) PPC_WEAK_FUNC(sub_82D7DF6C);
PPC_FUNC_IMPL(__imp__sub_82D7DF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DF70"))) PPC_WEAK_FUNC(sub_82D7DF70);
PPC_FUNC_IMPL(__imp__sub_82D7DF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-19388
	ctx.r3.s64 = ctx.r11.s64 + -19388;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DF7C"))) PPC_WEAK_FUNC(sub_82D7DF7C);
PPC_FUNC_IMPL(__imp__sub_82D7DF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DF80"))) PPC_WEAK_FUNC(sub_82D7DF80);
PPC_FUNC_IMPL(__imp__sub_82D7DF80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DF84"))) PPC_WEAK_FUNC(sub_82D7DF84);
PPC_FUNC_IMPL(__imp__sub_82D7DF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DF88"))) PPC_WEAK_FUNC(sub_82D7DF88);
PPC_FUNC_IMPL(__imp__sub_82D7DF88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DF8C"))) PPC_WEAK_FUNC(sub_82D7DF8C);
PPC_FUNC_IMPL(__imp__sub_82D7DF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DF90"))) PPC_WEAK_FUNC(sub_82D7DF90);
PPC_FUNC_IMPL(__imp__sub_82D7DF90) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d86cb0
	sub_82D86CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DF94"))) PPC_WEAK_FUNC(sub_82D7DF94);
PPC_FUNC_IMPL(__imp__sub_82D7DF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DF98"))) PPC_WEAK_FUNC(sub_82D7DF98);
PPC_FUNC_IMPL(__imp__sub_82D7DF98) {
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

__attribute__((alias("__imp__sub_82D7DFAC"))) PPC_WEAK_FUNC(sub_82D7DFAC);
PPC_FUNC_IMPL(__imp__sub_82D7DFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DFB0"))) PPC_WEAK_FUNC(sub_82D7DFB0);
PPC_FUNC_IMPL(__imp__sub_82D7DFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-19324
	ctx.r3.s64 = ctx.r11.s64 + -19324;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DFBC"))) PPC_WEAK_FUNC(sub_82D7DFBC);
PPC_FUNC_IMPL(__imp__sub_82D7DFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7DFC0"))) PPC_WEAK_FUNC(sub_82D7DFC0);
PPC_FUNC_IMPL(__imp__sub_82D7DFC0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d7e0c0
	sub_82D7E0C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7DFCC"))) PPC_WEAK_FUNC(sub_82D7DFCC);
PPC_FUNC_IMPL(__imp__sub_82D7DFCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DFD0"))) PPC_WEAK_FUNC(sub_82D7DFD0);
PPC_FUNC_IMPL(__imp__sub_82D7DFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7e0c0
	ctx.lr = 0x82D7DFE8;
	sub_82D7E0C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7DFFC"))) PPC_WEAK_FUNC(sub_82D7DFFC);
PPC_FUNC_IMPL(__imp__sub_82D7DFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E000"))) PPC_WEAK_FUNC(sub_82D7E000);
PPC_FUNC_IMPL(__imp__sub_82D7E000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82D7E008;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,64
	ctx.r30.s64 = ctx.r3.s64 + 64;
	// bl 0x82d2d090
	ctx.lr = 0x82D7E018;
	sub_82D2D090(ctx, base);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r28,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7e050
	if (!ctx.cr6.eq) goto loc_82D7E050;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D7E050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7E050:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r31,r29,52
	ctx.r31.s64 = ctx.r29.s64 + 52;
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82D7E064;
	sub_82D2D090(ctx, base);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r28,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7e098
	if (!ctx.cr6.eq) goto loc_82D7E098;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,56
	ctx.r6.s64 = 56;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D7E098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7E098:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// addi r9,r11,30884
	ctx.r9.s64 = ctx.r11.s64 + 30884;
	// addi r8,r10,10816
	ctx.r8.s64 = ctx.r10.s64 + 10816;
	// stw r9,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r9.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E0C0"))) PPC_WEAK_FUNC(sub_82D7E0C0);
PPC_FUNC_IMPL(__imp__sub_82D7E0C0) {
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
	// bl 0x82d8eda8
	ctx.lr = 0x82D7E0E0;
	sub_82D8EDA8(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r9,r11,-29272
	ctx.r9.s64 = ctx.r11.s64 + -29272;
	// addi r8,r10,-29304
	ctx.r8.s64 = ctx.r10.s64 + -29304;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82d7e10c
	if (ctx.cr6.eq) goto loc_82D7E10C;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82D7E10C:
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

__attribute__((alias("__imp__sub_82D7E124"))) PPC_WEAK_FUNC(sub_82D7E124);
PPC_FUNC_IMPL(__imp__sub_82D7E124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E128"))) PPC_WEAK_FUNC(sub_82D7E128);
PPC_FUNC_IMPL(__imp__sub_82D7E128) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82d7e130
	sub_82D7E130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E130"))) PPC_WEAK_FUNC(sub_82D7E130);
PPC_FUNC_IMPL(__imp__sub_82D7E130) {
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
	// bl 0x82d7e000
	ctx.lr = 0x82D7E150;
	sub_82D7E000(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7e17c
	if (ctx.cr6.eq) goto loc_82D7E17C;
	// bl 0x82d2d090
	ctx.lr = 0x82D7E160;
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
	ctx.lr = 0x82D7E17C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7E17C:
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

__attribute__((alias("__imp__sub_82D7E198"))) PPC_WEAK_FUNC(sub_82D7E198);
PPC_FUNC_IMPL(__imp__sub_82D7E198) {
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

__attribute__((alias("__imp__sub_82D7E1AC"))) PPC_WEAK_FUNC(sub_82D7E1AC);
PPC_FUNC_IMPL(__imp__sub_82D7E1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E1B0"))) PPC_WEAK_FUNC(sub_82D7E1B0);
PPC_FUNC_IMPL(__imp__sub_82D7E1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-19260
	ctx.r3.s64 = ctx.r11.s64 + -19260;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E1BC"))) PPC_WEAK_FUNC(sub_82D7E1BC);
PPC_FUNC_IMPL(__imp__sub_82D7E1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E1C0"))) PPC_WEAK_FUNC(sub_82D7E1C0);
PPC_FUNC_IMPL(__imp__sub_82D7E1C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d7e200
	sub_82D7E200(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E1CC"))) PPC_WEAK_FUNC(sub_82D7E1CC);
PPC_FUNC_IMPL(__imp__sub_82D7E1CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E1D0"))) PPC_WEAK_FUNC(sub_82D7E1D0);
PPC_FUNC_IMPL(__imp__sub_82D7E1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7e200
	ctx.lr = 0x82D7E1E8;
	sub_82D7E200(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E1FC"))) PPC_WEAK_FUNC(sub_82D7E1FC);
PPC_FUNC_IMPL(__imp__sub_82D7E1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E200"))) PPC_WEAK_FUNC(sub_82D7E200);
PPC_FUNC_IMPL(__imp__sub_82D7E200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r8,r11,31300
	ctx.r8.s64 = ctx.r11.s64 + 31300;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r6,r10,31324
	ctx.r6.s64 = ctx.r10.s64 + 31324;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r9,r9,31344
	ctx.r9.s64 = ctx.r9.s64 + 31344;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lis r5,-32236
	ctx.r5.s64 = -2112618496;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// addi r9,r8,-29004
	ctx.r9.s64 = ctx.r8.s64 + -29004;
	// addi r7,r7,31312
	ctx.r7.s64 = ctx.r7.s64 + 31312;
	// addi r5,r5,-29024
	ctx.r5.s64 = ctx.r5.s64 + -29024;
	// addi r11,r11,-29036
	ctx.r11.s64 = ctx.r11.s64 + -29036;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// addi r10,r10,-29056
	ctx.r10.s64 = ctx.r10.s64 + -29056;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// addi r8,r6,-29068
	ctx.r8.s64 = ctx.r6.s64 + -29068;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E280"))) PPC_WEAK_FUNC(sub_82D7E280);
PPC_FUNC_IMPL(__imp__sub_82D7E280) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82d7e2a0
	sub_82D7E2A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E288"))) PPC_WEAK_FUNC(sub_82D7E288);
PPC_FUNC_IMPL(__imp__sub_82D7E288) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82d7e2a0
	sub_82D7E2A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E290"))) PPC_WEAK_FUNC(sub_82D7E290);
PPC_FUNC_IMPL(__imp__sub_82D7E290) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82d7e2a0
	sub_82D7E2A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E298"))) PPC_WEAK_FUNC(sub_82D7E298);
PPC_FUNC_IMPL(__imp__sub_82D7E298) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82d7e2a0
	sub_82D7E2A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E2A0"))) PPC_WEAK_FUNC(sub_82D7E2A0);
PPC_FUNC_IMPL(__imp__sub_82D7E2A0) {
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
	// bl 0x82d8f2f8
	ctx.lr = 0x82D7E2C0;
	sub_82D8F2F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7e2ec
	if (ctx.cr6.eq) goto loc_82D7E2EC;
	// bl 0x82d2d090
	ctx.lr = 0x82D7E2D0;
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
	ctx.lr = 0x82D7E2EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7E2EC:
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

__attribute__((alias("__imp__sub_82D7E308"))) PPC_WEAK_FUNC(sub_82D7E308);
PPC_FUNC_IMPL(__imp__sub_82D7E308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E30C"))) PPC_WEAK_FUNC(sub_82D7E30C);
PPC_FUNC_IMPL(__imp__sub_82D7E30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E310"))) PPC_WEAK_FUNC(sub_82D7E310);
PPC_FUNC_IMPL(__imp__sub_82D7E310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-19196
	ctx.r3.s64 = ctx.r11.s64 + -19196;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E31C"))) PPC_WEAK_FUNC(sub_82D7E31C);
PPC_FUNC_IMPL(__imp__sub_82D7E31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E320"))) PPC_WEAK_FUNC(sub_82D7E320);
PPC_FUNC_IMPL(__imp__sub_82D7E320) {
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

__attribute__((alias("__imp__sub_82D7E334"))) PPC_WEAK_FUNC(sub_82D7E334);
PPC_FUNC_IMPL(__imp__sub_82D7E334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E338"))) PPC_WEAK_FUNC(sub_82D7E338);
PPC_FUNC_IMPL(__imp__sub_82D7E338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-19148
	ctx.r3.s64 = ctx.r11.s64 + -19148;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E344"))) PPC_WEAK_FUNC(sub_82D7E344);
PPC_FUNC_IMPL(__imp__sub_82D7E344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E348"))) PPC_WEAK_FUNC(sub_82D7E348);
PPC_FUNC_IMPL(__imp__sub_82D7E348) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d81a58
	sub_82D81A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E354"))) PPC_WEAK_FUNC(sub_82D7E354);
PPC_FUNC_IMPL(__imp__sub_82D7E354) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E358"))) PPC_WEAK_FUNC(sub_82D7E358);
PPC_FUNC_IMPL(__imp__sub_82D7E358) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d81a58
	ctx.lr = 0x82D7E370;
	sub_82D81A58(ctx, base);
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

__attribute__((alias("__imp__sub_82D7E384"))) PPC_WEAK_FUNC(sub_82D7E384);
PPC_FUNC_IMPL(__imp__sub_82D7E384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E388"))) PPC_WEAK_FUNC(sub_82D7E388);
PPC_FUNC_IMPL(__imp__sub_82D7E388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E38C"))) PPC_WEAK_FUNC(sub_82D7E38C);
PPC_FUNC_IMPL(__imp__sub_82D7E38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E390"))) PPC_WEAK_FUNC(sub_82D7E390);
PPC_FUNC_IMPL(__imp__sub_82D7E390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-19084
	ctx.r3.s64 = ctx.r11.s64 + -19084;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E39C"))) PPC_WEAK_FUNC(sub_82D7E39C);
PPC_FUNC_IMPL(__imp__sub_82D7E39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E3A0"))) PPC_WEAK_FUNC(sub_82D7E3A0);
PPC_FUNC_IMPL(__imp__sub_82D7E3A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d8eda8
	sub_82D8EDA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E3AC"))) PPC_WEAK_FUNC(sub_82D7E3AC);
PPC_FUNC_IMPL(__imp__sub_82D7E3AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E3B0"))) PPC_WEAK_FUNC(sub_82D7E3B0);
PPC_FUNC_IMPL(__imp__sub_82D7E3B0) {
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

__attribute__((alias("__imp__sub_82D7E3C4"))) PPC_WEAK_FUNC(sub_82D7E3C4);
PPC_FUNC_IMPL(__imp__sub_82D7E3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E3C8"))) PPC_WEAK_FUNC(sub_82D7E3C8);
PPC_FUNC_IMPL(__imp__sub_82D7E3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d8eda8
	ctx.lr = 0x82D7E3E0;
	sub_82D8EDA8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E3F4"))) PPC_WEAK_FUNC(sub_82D7E3F4);
PPC_FUNC_IMPL(__imp__sub_82D7E3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E3F8"))) PPC_WEAK_FUNC(sub_82D7E3F8);
PPC_FUNC_IMPL(__imp__sub_82D7E3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-19036
	ctx.r3.s64 = ctx.r11.s64 + -19036;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E404"))) PPC_WEAK_FUNC(sub_82D7E404);
PPC_FUNC_IMPL(__imp__sub_82D7E404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E408"))) PPC_WEAK_FUNC(sub_82D7E408);
PPC_FUNC_IMPL(__imp__sub_82D7E408) {
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

__attribute__((alias("__imp__sub_82D7E41C"))) PPC_WEAK_FUNC(sub_82D7E41C);
PPC_FUNC_IMPL(__imp__sub_82D7E41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E420"))) PPC_WEAK_FUNC(sub_82D7E420);
PPC_FUNC_IMPL(__imp__sub_82D7E420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-18924
	ctx.r3.s64 = ctx.r11.s64 + -18924;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E42C"))) PPC_WEAK_FUNC(sub_82D7E42C);
PPC_FUNC_IMPL(__imp__sub_82D7E42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E430"))) PPC_WEAK_FUNC(sub_82D7E430);
PPC_FUNC_IMPL(__imp__sub_82D7E430) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d7e4f8
	sub_82D7E4F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E43C"))) PPC_WEAK_FUNC(sub_82D7E43C);
PPC_FUNC_IMPL(__imp__sub_82D7E43C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E440"))) PPC_WEAK_FUNC(sub_82D7E440);
PPC_FUNC_IMPL(__imp__sub_82D7E440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7e4f8
	ctx.lr = 0x82D7E458;
	sub_82D7E4F8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E46C"))) PPC_WEAK_FUNC(sub_82D7E46C);
PPC_FUNC_IMPL(__imp__sub_82D7E46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E470"))) PPC_WEAK_FUNC(sub_82D7E470);
PPC_FUNC_IMPL(__imp__sub_82D7E470) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-27924
	ctx.r10.s64 = ctx.r11.s64 + -27924;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82d2c0a0
	ctx.lr = 0x82D7E4A0;
	sub_82D2C0A0(ctx, base);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,10816
	ctx.r7.s64 = ctx.r9.s64 + 10816;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// beq cr6,0x82d7e4d8
	if (ctx.cr6.eq) goto loc_82D7E4D8;
	// bl 0x82d2d090
	ctx.lr = 0x82D7E4BC;
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
	ctx.lr = 0x82D7E4D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7E4D8:
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

__attribute__((alias("__imp__sub_82D7E4F4"))) PPC_WEAK_FUNC(sub_82D7E4F4);
PPC_FUNC_IMPL(__imp__sub_82D7E4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E4F8"))) PPC_WEAK_FUNC(sub_82D7E4F8);
PPC_FUNC_IMPL(__imp__sub_82D7E4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,30664
	ctx.r9.s64 = ctx.r10.s64 + 30664;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82d7e514
	if (ctx.cr6.eq) goto loc_82D7E514;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82D7E514:
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r9,r10,-27864
	ctx.r9.s64 = ctx.r10.s64 + -27864;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82d7e538
	if (ctx.cr6.eq) goto loc_82D7E538;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stb r9,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r9.u8);
loc_82D7E538:
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r9,r10,-27924
	ctx.r9.s64 = ctx.r10.s64 + -27924;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82d7e550
	if (ctx.cr6.eq) goto loc_82D7E550;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
loc_82D7E550:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r9,r11,-27804
	ctx.r9.s64 = ctx.r11.s64 + -27804;
	// addi r8,r10,30916
	ctx.r8.s64 = ctx.r10.s64 + 30916;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E5A0"))) PPC_WEAK_FUNC(sub_82D7E5A0);
PPC_FUNC_IMPL(__imp__sub_82D7E5A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D7E5B4"))) PPC_WEAK_FUNC(sub_82D7E5B4);
PPC_FUNC_IMPL(__imp__sub_82D7E5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E5B8"))) PPC_WEAK_FUNC(sub_82D7E5B8);
PPC_FUNC_IMPL(__imp__sub_82D7E5B8) {
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
	// bl 0x82d8f758
	ctx.lr = 0x82D7E5D8;
	sub_82D8F758(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7e604
	if (ctx.cr6.eq) goto loc_82D7E604;
	// bl 0x82d2d090
	ctx.lr = 0x82D7E5E8;
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
	ctx.lr = 0x82D7E604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7E604:
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

__attribute__((alias("__imp__sub_82D7E620"))) PPC_WEAK_FUNC(sub_82D7E620);
PPC_FUNC_IMPL(__imp__sub_82D7E620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E624"))) PPC_WEAK_FUNC(sub_82D7E624);
PPC_FUNC_IMPL(__imp__sub_82D7E624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E628"))) PPC_WEAK_FUNC(sub_82D7E628);
PPC_FUNC_IMPL(__imp__sub_82D7E628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-18860
	ctx.r3.s64 = ctx.r11.s64 + -18860;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E634"))) PPC_WEAK_FUNC(sub_82D7E634);
PPC_FUNC_IMPL(__imp__sub_82D7E634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E638"))) PPC_WEAK_FUNC(sub_82D7E638);
PPC_FUNC_IMPL(__imp__sub_82D7E638) {
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

__attribute__((alias("__imp__sub_82D7E64C"))) PPC_WEAK_FUNC(sub_82D7E64C);
PPC_FUNC_IMPL(__imp__sub_82D7E64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E650"))) PPC_WEAK_FUNC(sub_82D7E650);
PPC_FUNC_IMPL(__imp__sub_82D7E650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-18812
	ctx.r3.s64 = ctx.r11.s64 + -18812;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E65C"))) PPC_WEAK_FUNC(sub_82D7E65C);
PPC_FUNC_IMPL(__imp__sub_82D7E65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E660"))) PPC_WEAK_FUNC(sub_82D7E660);
PPC_FUNC_IMPL(__imp__sub_82D7E660) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,30664
	ctx.r10.s64 = ctx.r11.s64 + 30664;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d7e684
	if (ctx.cr6.eq) goto loc_82D7E684;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82D7E684:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r10,25
	ctx.r10.s64 = 25;
	// addi r9,r11,-27568
	ctx.r9.s64 = ctx.r11.s64 + -27568;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E69C"))) PPC_WEAK_FUNC(sub_82D7E69C);
PPC_FUNC_IMPL(__imp__sub_82D7E69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E6A0"))) PPC_WEAK_FUNC(sub_82D7E6A0);
PPC_FUNC_IMPL(__imp__sub_82D7E6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-27568
	ctx.r3.s64 = ctx.r11.s64 + -27568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E6AC"))) PPC_WEAK_FUNC(sub_82D7E6AC);
PPC_FUNC_IMPL(__imp__sub_82D7E6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E6B0"))) PPC_WEAK_FUNC(sub_82D7E6B0);
PPC_FUNC_IMPL(__imp__sub_82D7E6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82D7E6B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// bl 0x82d2d090
	ctx.lr = 0x82D7E6C8;
	sub_82D2D090(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7e700
	if (!ctx.cr6.eq) goto loc_82D7E700;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,32
	ctx.r6.s64 = 32;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D7E700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7E700:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r11,10816
	ctx.r9.s64 = ctx.r11.s64 + 10816;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E720"))) PPC_WEAK_FUNC(sub_82D7E720);
PPC_FUNC_IMPL(__imp__sub_82D7E720) {
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
	// bl 0x82d7e6b0
	ctx.lr = 0x82D7E740;
	sub_82D7E6B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7e76c
	if (ctx.cr6.eq) goto loc_82D7E76C;
	// bl 0x82d2d090
	ctx.lr = 0x82D7E750;
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
	ctx.lr = 0x82D7E76C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7E76C:
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

__attribute__((alias("__imp__sub_82D7E788"))) PPC_WEAK_FUNC(sub_82D7E788);
PPC_FUNC_IMPL(__imp__sub_82D7E788) {
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

__attribute__((alias("__imp__sub_82D7E79C"))) PPC_WEAK_FUNC(sub_82D7E79C);
PPC_FUNC_IMPL(__imp__sub_82D7E79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E7A0"))) PPC_WEAK_FUNC(sub_82D7E7A0);
PPC_FUNC_IMPL(__imp__sub_82D7E7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-18764
	ctx.r3.s64 = ctx.r11.s64 + -18764;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E7AC"))) PPC_WEAK_FUNC(sub_82D7E7AC);
PPC_FUNC_IMPL(__imp__sub_82D7E7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E7B0"))) PPC_WEAK_FUNC(sub_82D7E7B0);
PPC_FUNC_IMPL(__imp__sub_82D7E7B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,30664
	ctx.r10.s64 = ctx.r11.s64 + 30664;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d7e7d4
	if (ctx.cr6.eq) goto loc_82D7E7D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82D7E7D4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r9,r11,-27412
	ctx.r9.s64 = ctx.r11.s64 + -27412;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E7EC"))) PPC_WEAK_FUNC(sub_82D7E7EC);
PPC_FUNC_IMPL(__imp__sub_82D7E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E7F0"))) PPC_WEAK_FUNC(sub_82D7E7F0);
PPC_FUNC_IMPL(__imp__sub_82D7E7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-27412
	ctx.r3.s64 = ctx.r11.s64 + -27412;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E7FC"))) PPC_WEAK_FUNC(sub_82D7E7FC);
PPC_FUNC_IMPL(__imp__sub_82D7E7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E800"))) PPC_WEAK_FUNC(sub_82D7E800);
PPC_FUNC_IMPL(__imp__sub_82D7E800) {
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

__attribute__((alias("__imp__sub_82D7E814"))) PPC_WEAK_FUNC(sub_82D7E814);
PPC_FUNC_IMPL(__imp__sub_82D7E814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E818"))) PPC_WEAK_FUNC(sub_82D7E818);
PPC_FUNC_IMPL(__imp__sub_82D7E818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-18716
	ctx.r3.s64 = ctx.r11.s64 + -18716;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E824"))) PPC_WEAK_FUNC(sub_82D7E824);
PPC_FUNC_IMPL(__imp__sub_82D7E824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E828"))) PPC_WEAK_FUNC(sub_82D7E828);
PPC_FUNC_IMPL(__imp__sub_82D7E828) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d7e868
	sub_82D7E868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E834"))) PPC_WEAK_FUNC(sub_82D7E834);
PPC_FUNC_IMPL(__imp__sub_82D7E834) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E838"))) PPC_WEAK_FUNC(sub_82D7E838);
PPC_FUNC_IMPL(__imp__sub_82D7E838) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7e868
	ctx.lr = 0x82D7E850;
	sub_82D7E868(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E864"))) PPC_WEAK_FUNC(sub_82D7E864);
PPC_FUNC_IMPL(__imp__sub_82D7E864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E868"))) PPC_WEAK_FUNC(sub_82D7E868);
PPC_FUNC_IMPL(__imp__sub_82D7E868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r8,r11,31300
	ctx.r8.s64 = ctx.r11.s64 + 31300;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r6,r10,31324
	ctx.r6.s64 = ctx.r10.s64 + 31324;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r9,r9,31344
	ctx.r9.s64 = ctx.r9.s64 + 31344;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lis r5,-32236
	ctx.r5.s64 = -2112618496;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// addi r9,r8,-27276
	ctx.r9.s64 = ctx.r8.s64 + -27276;
	// addi r7,r7,31312
	ctx.r7.s64 = ctx.r7.s64 + 31312;
	// addi r5,r5,-27292
	ctx.r5.s64 = ctx.r5.s64 + -27292;
	// addi r11,r11,-27304
	ctx.r11.s64 = ctx.r11.s64 + -27304;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// addi r10,r10,-27324
	ctx.r10.s64 = ctx.r10.s64 + -27324;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// addi r8,r6,-27336
	ctx.r8.s64 = ctx.r6.s64 + -27336;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E8E8"))) PPC_WEAK_FUNC(sub_82D7E8E8);
PPC_FUNC_IMPL(__imp__sub_82D7E8E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82d7e908
	sub_82D7E908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E8F0"))) PPC_WEAK_FUNC(sub_82D7E8F0);
PPC_FUNC_IMPL(__imp__sub_82D7E8F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82d7e908
	sub_82D7E908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E8F8"))) PPC_WEAK_FUNC(sub_82D7E8F8);
PPC_FUNC_IMPL(__imp__sub_82D7E8F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82d7e908
	sub_82D7E908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E900"))) PPC_WEAK_FUNC(sub_82D7E900);
PPC_FUNC_IMPL(__imp__sub_82D7E900) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82d7e908
	sub_82D7E908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7E908"))) PPC_WEAK_FUNC(sub_82D7E908);
PPC_FUNC_IMPL(__imp__sub_82D7E908) {
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
	// bl 0x82d908a0
	ctx.lr = 0x82D7E928;
	sub_82D908A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7e954
	if (ctx.cr6.eq) goto loc_82D7E954;
	// bl 0x82d2d090
	ctx.lr = 0x82D7E938;
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
	ctx.lr = 0x82D7E954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7E954:
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

__attribute__((alias("__imp__sub_82D7E970"))) PPC_WEAK_FUNC(sub_82D7E970);
PPC_FUNC_IMPL(__imp__sub_82D7E970) {
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

__attribute__((alias("__imp__sub_82D7E984"))) PPC_WEAK_FUNC(sub_82D7E984);
PPC_FUNC_IMPL(__imp__sub_82D7E984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E988"))) PPC_WEAK_FUNC(sub_82D7E988);
PPC_FUNC_IMPL(__imp__sub_82D7E988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-18652
	ctx.r3.s64 = ctx.r11.s64 + -18652;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E994"))) PPC_WEAK_FUNC(sub_82D7E994);
PPC_FUNC_IMPL(__imp__sub_82D7E994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E998"))) PPC_WEAK_FUNC(sub_82D7E998);
PPC_FUNC_IMPL(__imp__sub_82D7E998) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,30664
	ctx.r10.s64 = ctx.r11.s64 + 30664;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d7e9bc
	if (ctx.cr6.eq) goto loc_82D7E9BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82D7E9BC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r10,29
	ctx.r10.s64 = 29;
	// addi r9,r11,-27156
	ctx.r9.s64 = ctx.r11.s64 + -27156;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E9D4"))) PPC_WEAK_FUNC(sub_82D7E9D4);
PPC_FUNC_IMPL(__imp__sub_82D7E9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E9D8"))) PPC_WEAK_FUNC(sub_82D7E9D8);
PPC_FUNC_IMPL(__imp__sub_82D7E9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-27156
	ctx.r3.s64 = ctx.r11.s64 + -27156;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7E9E4"))) PPC_WEAK_FUNC(sub_82D7E9E4);
PPC_FUNC_IMPL(__imp__sub_82D7E9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7E9E8"))) PPC_WEAK_FUNC(sub_82D7E9E8);
PPC_FUNC_IMPL(__imp__sub_82D7E9E8) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-27004
	ctx.r9.s64 = ctx.r11.s64 + -27004;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82d7ea1c
	if (ctx.cr6.eq) goto loc_82D7EA1C;
	// bl 0x82691540
	ctx.lr = 0x82D7EA18;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D7EA1C:
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

__attribute__((alias("__imp__sub_82D7EA30"))) PPC_WEAK_FUNC(sub_82D7EA30);
PPC_FUNC_IMPL(__imp__sub_82D7EA30) {
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

__attribute__((alias("__imp__sub_82D7EA44"))) PPC_WEAK_FUNC(sub_82D7EA44);
PPC_FUNC_IMPL(__imp__sub_82D7EA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EA48"))) PPC_WEAK_FUNC(sub_82D7EA48);
PPC_FUNC_IMPL(__imp__sub_82D7EA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-18604
	ctx.r3.s64 = ctx.r11.s64 + -18604;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EA54"))) PPC_WEAK_FUNC(sub_82D7EA54);
PPC_FUNC_IMPL(__imp__sub_82D7EA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EA58"))) PPC_WEAK_FUNC(sub_82D7EA58);
PPC_FUNC_IMPL(__imp__sub_82D7EA58) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r8,r11,-27004
	ctx.r8.s64 = ctx.r11.s64 + -27004;
	// addi r7,r10,-26972
	ctx.r7.s64 = ctx.r10.s64 + -26972;
	// addi r6,r9,-26988
	ctx.r6.s64 = ctx.r9.s64 + -26988;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EA88"))) PPC_WEAK_FUNC(sub_82D7EA88);
PPC_FUNC_IMPL(__imp__sub_82D7EA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-26972
	ctx.r3.s64 = ctx.r11.s64 + -26972;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EA94"))) PPC_WEAK_FUNC(sub_82D7EA94);
PPC_FUNC_IMPL(__imp__sub_82D7EA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EA98"))) PPC_WEAK_FUNC(sub_82D7EA98);
PPC_FUNC_IMPL(__imp__sub_82D7EA98) {
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

__attribute__((alias("__imp__sub_82D7EAAC"))) PPC_WEAK_FUNC(sub_82D7EAAC);
PPC_FUNC_IMPL(__imp__sub_82D7EAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EAB0"))) PPC_WEAK_FUNC(sub_82D7EAB0);
PPC_FUNC_IMPL(__imp__sub_82D7EAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-18556
	ctx.r3.s64 = ctx.r11.s64 + -18556;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EABC"))) PPC_WEAK_FUNC(sub_82D7EABC);
PPC_FUNC_IMPL(__imp__sub_82D7EABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EAC0"))) PPC_WEAK_FUNC(sub_82D7EAC0);
PPC_FUNC_IMPL(__imp__sub_82D7EAC0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-26700
	ctx.r10.s64 = ctx.r11.s64 + -26700;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EAD8"))) PPC_WEAK_FUNC(sub_82D7EAD8);
PPC_FUNC_IMPL(__imp__sub_82D7EAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-26700
	ctx.r3.s64 = ctx.r11.s64 + -26700;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EAE4"))) PPC_WEAK_FUNC(sub_82D7EAE4);
PPC_FUNC_IMPL(__imp__sub_82D7EAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EAE8"))) PPC_WEAK_FUNC(sub_82D7EAE8);
PPC_FUNC_IMPL(__imp__sub_82D7EAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82D7EAF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,-26700
	ctx.r10.s64 = ctx.r11.s64 + -26700;
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82D7EB0C;
	sub_82D2D090(ctx, base);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r27,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r27.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82d7eb44
	if (!ctx.cr6.eq) goto loc_82D7EB44;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,64
	ctx.r6.s64 = 64;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D7EB44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7EB44:
	// lis r25,-32768
	ctx.r25.s64 = -2147483648;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// addi r31,r28,16
	ctx.r31.s64 = ctx.r28.s64 + 16;
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82D7EB58;
	sub_82D2D090(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r29,16(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r26,16(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82d7eb84
	if (!ctx.cr6.gt) goto loc_82D7EB84;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82D7EB70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d37568
	ctx.lr = 0x82D7EB78;
	sub_82D37568(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82d7eb70
	if (!ctx.cr0.eq) goto loc_82D7EB70;
loc_82D7EB84:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7ebb8
	if (!ctx.cr6.eq) goto loc_82D7EBB8;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D7EBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7EBB8:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82d7ebd0
	if (ctx.cr6.eq) goto loc_82D7EBD0;
	// bl 0x82d2c0a0
	ctx.lr = 0x82D7EBD0;
	sub_82D2C0A0(ctx, base);
loc_82D7EBD0:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
	// addi r10,r11,10816
	ctx.r10.s64 = ctx.r11.s64 + 10816;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EBE8"))) PPC_WEAK_FUNC(sub_82D7EBE8);
PPC_FUNC_IMPL(__imp__sub_82D7EBE8) {
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
	// bl 0x82d7eae8
	ctx.lr = 0x82D7EC08;
	sub_82D7EAE8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7ec34
	if (ctx.cr6.eq) goto loc_82D7EC34;
	// bl 0x82d2d090
	ctx.lr = 0x82D7EC18;
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
	ctx.lr = 0x82D7EC34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7EC34:
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

__attribute__((alias("__imp__sub_82D7EC50"))) PPC_WEAK_FUNC(sub_82D7EC50);
PPC_FUNC_IMPL(__imp__sub_82D7EC50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EC54"))) PPC_WEAK_FUNC(sub_82D7EC54);
PPC_FUNC_IMPL(__imp__sub_82D7EC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EC58"))) PPC_WEAK_FUNC(sub_82D7EC58);
PPC_FUNC_IMPL(__imp__sub_82D7EC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-18508
	ctx.r3.s64 = ctx.r11.s64 + -18508;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EC64"))) PPC_WEAK_FUNC(sub_82D7EC64);
PPC_FUNC_IMPL(__imp__sub_82D7EC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EC68"))) PPC_WEAK_FUNC(sub_82D7EC68);
PPC_FUNC_IMPL(__imp__sub_82D7EC68) {
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

__attribute__((alias("__imp__sub_82D7EC7C"))) PPC_WEAK_FUNC(sub_82D7EC7C);
PPC_FUNC_IMPL(__imp__sub_82D7EC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EC80"))) PPC_WEAK_FUNC(sub_82D7EC80);
PPC_FUNC_IMPL(__imp__sub_82D7EC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-18460
	ctx.r3.s64 = ctx.r11.s64 + -18460;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EC8C"))) PPC_WEAK_FUNC(sub_82D7EC8C);
PPC_FUNC_IMPL(__imp__sub_82D7EC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EC90"))) PPC_WEAK_FUNC(sub_82D7EC90);
PPC_FUNC_IMPL(__imp__sub_82D7EC90) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d7ecd0
	sub_82D7ECD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EC9C"))) PPC_WEAK_FUNC(sub_82D7EC9C);
PPC_FUNC_IMPL(__imp__sub_82D7EC9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7ECA0"))) PPC_WEAK_FUNC(sub_82D7ECA0);
PPC_FUNC_IMPL(__imp__sub_82D7ECA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7ecd0
	ctx.lr = 0x82D7ECB8;
	sub_82D7ECD0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7ECCC"))) PPC_WEAK_FUNC(sub_82D7ECCC);
PPC_FUNC_IMPL(__imp__sub_82D7ECCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ECD0"))) PPC_WEAK_FUNC(sub_82D7ECD0);
PPC_FUNC_IMPL(__imp__sub_82D7ECD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,30664
	ctx.r10.s64 = ctx.r11.s64 + 30664;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d7ecec
	if (ctx.cr6.eq) goto loc_82D7ECEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82D7ECEC:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r8,r11,30884
	ctx.r8.s64 = ctx.r11.s64 + 30884;
	// addi r7,r10,-31980
	ctx.r7.s64 = ctx.r10.s64 + -31980;
	// addi r6,r9,-32012
	ctx.r6.s64 = ctx.r9.s64 + -32012;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// beq cr6,0x82d7ed28
	if (ctx.cr6.eq) goto loc_82D7ED28;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
loc_82D7ED28:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r9,r11,-26500
	ctx.r9.s64 = ctx.r11.s64 + -26500;
	// addi r8,r10,-26532
	ctx.r8.s64 = ctx.r10.s64 + -26532;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7ED5C"))) PPC_WEAK_FUNC(sub_82D7ED5C);
PPC_FUNC_IMPL(__imp__sub_82D7ED5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7ED60"))) PPC_WEAK_FUNC(sub_82D7ED60);
PPC_FUNC_IMPL(__imp__sub_82D7ED60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82d7ee70
	sub_82D7EE70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7ED68"))) PPC_WEAK_FUNC(sub_82D7ED68);
PPC_FUNC_IMPL(__imp__sub_82D7ED68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82D7ED70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// bl 0x82d2d090
	ctx.lr = 0x82D7ED80;
	sub_82D2D090(ctx, base);
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r29,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7edb8
	if (!ctx.cr6.eq) goto loc_82D7EDB8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D7EDB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7EDB8:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r31,r28,36
	ctx.r31.s64 = ctx.r28.s64 + 36;
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82D7EDCC;
	sub_82D2D090(ctx, base);
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r29,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7ee00
	if (!ctx.cr6.eq) goto loc_82D7EE00;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D7EE00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7EE00:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r30,r28,24
	ctx.r30.s64 = ctx.r28.s64 + 24;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82D7EE10;
	sub_82D2D090(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r29,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82d7ee44
	if (!ctx.cr6.eq) goto loc_82D7EE44;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D7EE44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7EE44:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// addi r9,r11,30884
	ctx.r9.s64 = ctx.r11.s64 + 30884;
	// addi r8,r10,10816
	ctx.r8.s64 = ctx.r10.s64 + 10816;
	// stw r9,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r9.u32);
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EE6C"))) PPC_WEAK_FUNC(sub_82D7EE6C);
PPC_FUNC_IMPL(__imp__sub_82D7EE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EE70"))) PPC_WEAK_FUNC(sub_82D7EE70);
PPC_FUNC_IMPL(__imp__sub_82D7EE70) {
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
	// bl 0x82d7ed68
	ctx.lr = 0x82D7EE90;
	sub_82D7ED68(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82d7eebc
	if (ctx.cr6.eq) goto loc_82D7EEBC;
	// bl 0x82d2d090
	ctx.lr = 0x82D7EEA0;
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
	ctx.lr = 0x82D7EEBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82D7EEBC:
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

__attribute__((alias("__imp__sub_82D7EED8"))) PPC_WEAK_FUNC(sub_82D7EED8);
PPC_FUNC_IMPL(__imp__sub_82D7EED8) {
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

__attribute__((alias("__imp__sub_82D7EEEC"))) PPC_WEAK_FUNC(sub_82D7EEEC);
PPC_FUNC_IMPL(__imp__sub_82D7EEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EEF0"))) PPC_WEAK_FUNC(sub_82D7EEF0);
PPC_FUNC_IMPL(__imp__sub_82D7EEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-18348
	ctx.r3.s64 = ctx.r11.s64 + -18348;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EEFC"))) PPC_WEAK_FUNC(sub_82D7EEFC);
PPC_FUNC_IMPL(__imp__sub_82D7EEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EF00"))) PPC_WEAK_FUNC(sub_82D7EF00);
PPC_FUNC_IMPL(__imp__sub_82D7EF00) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r10,r11,30916
	ctx.r10.s64 = ctx.r11.s64 + 30916;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EF18"))) PPC_WEAK_FUNC(sub_82D7EF18);
PPC_FUNC_IMPL(__imp__sub_82D7EF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,30916
	ctx.r3.s64 = ctx.r11.s64 + 30916;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EF24"))) PPC_WEAK_FUNC(sub_82D7EF24);
PPC_FUNC_IMPL(__imp__sub_82D7EF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EF28"))) PPC_WEAK_FUNC(sub_82D7EF28);
PPC_FUNC_IMPL(__imp__sub_82D7EF28) {
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

__attribute__((alias("__imp__sub_82D7EF3C"))) PPC_WEAK_FUNC(sub_82D7EF3C);
PPC_FUNC_IMPL(__imp__sub_82D7EF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EF40"))) PPC_WEAK_FUNC(sub_82D7EF40);
PPC_FUNC_IMPL(__imp__sub_82D7EF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-18300
	ctx.r3.s64 = ctx.r11.s64 + -18300;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EF4C"))) PPC_WEAK_FUNC(sub_82D7EF4C);
PPC_FUNC_IMPL(__imp__sub_82D7EF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EF50"))) PPC_WEAK_FUNC(sub_82D7EF50);
PPC_FUNC_IMPL(__imp__sub_82D7EF50) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,30664
	ctx.r10.s64 = ctx.r11.s64 + 30664;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d7ef74
	if (ctx.cr6.eq) goto loc_82D7EF74;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82D7EF74:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-26292
	ctx.r9.s64 = ctx.r11.s64 + -26292;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EF8C"))) PPC_WEAK_FUNC(sub_82D7EF8C);
PPC_FUNC_IMPL(__imp__sub_82D7EF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EF90"))) PPC_WEAK_FUNC(sub_82D7EF90);
PPC_FUNC_IMPL(__imp__sub_82D7EF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-26292
	ctx.r3.s64 = ctx.r11.s64 + -26292;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EF9C"))) PPC_WEAK_FUNC(sub_82D7EF9C);
PPC_FUNC_IMPL(__imp__sub_82D7EF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EFA0"))) PPC_WEAK_FUNC(sub_82D7EFA0);
PPC_FUNC_IMPL(__imp__sub_82D7EFA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EFA4"))) PPC_WEAK_FUNC(sub_82D7EFA4);
PPC_FUNC_IMPL(__imp__sub_82D7EFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EFA8"))) PPC_WEAK_FUNC(sub_82D7EFA8);
PPC_FUNC_IMPL(__imp__sub_82D7EFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-18252
	ctx.r3.s64 = ctx.r11.s64 + -18252;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EFB4"))) PPC_WEAK_FUNC(sub_82D7EFB4);
PPC_FUNC_IMPL(__imp__sub_82D7EFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EFB8"))) PPC_WEAK_FUNC(sub_82D7EFB8);
PPC_FUNC_IMPL(__imp__sub_82D7EFB8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d91fa0
	sub_82D91FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7EFC4"))) PPC_WEAK_FUNC(sub_82D7EFC4);
PPC_FUNC_IMPL(__imp__sub_82D7EFC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7EFC8"))) PPC_WEAK_FUNC(sub_82D7EFC8);
PPC_FUNC_IMPL(__imp__sub_82D7EFC8) {
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

__attribute__((alias("__imp__sub_82D7EFDC"))) PPC_WEAK_FUNC(sub_82D7EFDC);
PPC_FUNC_IMPL(__imp__sub_82D7EFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7EFE0"))) PPC_WEAK_FUNC(sub_82D7EFE0);
PPC_FUNC_IMPL(__imp__sub_82D7EFE0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d91fa0
	ctx.lr = 0x82D7EFF8;
	sub_82D91FA0(ctx, base);
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

__attribute__((alias("__imp__sub_82D7F00C"))) PPC_WEAK_FUNC(sub_82D7F00C);
PPC_FUNC_IMPL(__imp__sub_82D7F00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F010"))) PPC_WEAK_FUNC(sub_82D7F010);
PPC_FUNC_IMPL(__imp__sub_82D7F010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-18204
	ctx.r3.s64 = ctx.r11.s64 + -18204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7F01C"))) PPC_WEAK_FUNC(sub_82D7F01C);
PPC_FUNC_IMPL(__imp__sub_82D7F01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D7F020"))) PPC_WEAK_FUNC(sub_82D7F020);
PPC_FUNC_IMPL(__imp__sub_82D7F020) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82d91920
	sub_82D91920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7F02C"))) PPC_WEAK_FUNC(sub_82D7F02C);
PPC_FUNC_IMPL(__imp__sub_82D7F02C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

