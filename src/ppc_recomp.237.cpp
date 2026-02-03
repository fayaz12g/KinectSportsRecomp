#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82DC348C"))) PPC_WEAK_FUNC(sub_82DC348C);
PPC_FUNC_IMPL(__imp__sub_82DC348C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3490"))) PPC_WEAK_FUNC(sub_82DC3490);
PPC_FUNC_IMPL(__imp__sub_82DC3490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13104
	ctx.r3.s64 = ctx.r11.s64 + -13104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC349C"))) PPC_WEAK_FUNC(sub_82DC349C);
PPC_FUNC_IMPL(__imp__sub_82DC349C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC34A0"))) PPC_WEAK_FUNC(sub_82DC34A0);
PPC_FUNC_IMPL(__imp__sub_82DC34A0) {
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

__attribute__((alias("__imp__sub_82DC34B4"))) PPC_WEAK_FUNC(sub_82DC34B4);
PPC_FUNC_IMPL(__imp__sub_82DC34B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC34B8"))) PPC_WEAK_FUNC(sub_82DC34B8);
PPC_FUNC_IMPL(__imp__sub_82DC34B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13056
	ctx.r3.s64 = ctx.r11.s64 + -13056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC34C4"))) PPC_WEAK_FUNC(sub_82DC34C4);
PPC_FUNC_IMPL(__imp__sub_82DC34C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC34C8"))) PPC_WEAK_FUNC(sub_82DC34C8);
PPC_FUNC_IMPL(__imp__sub_82DC34C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC34CC"))) PPC_WEAK_FUNC(sub_82DC34CC);
PPC_FUNC_IMPL(__imp__sub_82DC34CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC34D0"))) PPC_WEAK_FUNC(sub_82DC34D0);
PPC_FUNC_IMPL(__imp__sub_82DC34D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-4596
	ctx.r10.s64 = ctx.r11.s64 + -4596;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC34E8"))) PPC_WEAK_FUNC(sub_82DC34E8);
PPC_FUNC_IMPL(__imp__sub_82DC34E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-4596
	ctx.r3.s64 = ctx.r11.s64 + -4596;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC34F4"))) PPC_WEAK_FUNC(sub_82DC34F4);
PPC_FUNC_IMPL(__imp__sub_82DC34F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC34F8"))) PPC_WEAK_FUNC(sub_82DC34F8);
PPC_FUNC_IMPL(__imp__sub_82DC34F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC34FC"))) PPC_WEAK_FUNC(sub_82DC34FC);
PPC_FUNC_IMPL(__imp__sub_82DC34FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3500"))) PPC_WEAK_FUNC(sub_82DC3500);
PPC_FUNC_IMPL(__imp__sub_82DC3500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13008
	ctx.r3.s64 = ctx.r11.s64 + -13008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC350C"))) PPC_WEAK_FUNC(sub_82DC350C);
PPC_FUNC_IMPL(__imp__sub_82DC350C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3510"))) PPC_WEAK_FUNC(sub_82DC3510);
PPC_FUNC_IMPL(__imp__sub_82DC3510) {
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

__attribute__((alias("__imp__sub_82DC3524"))) PPC_WEAK_FUNC(sub_82DC3524);
PPC_FUNC_IMPL(__imp__sub_82DC3524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3528"))) PPC_WEAK_FUNC(sub_82DC3528);
PPC_FUNC_IMPL(__imp__sub_82DC3528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12960
	ctx.r3.s64 = ctx.r11.s64 + -12960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3534"))) PPC_WEAK_FUNC(sub_82DC3534);
PPC_FUNC_IMPL(__imp__sub_82DC3534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3538"))) PPC_WEAK_FUNC(sub_82DC3538);
PPC_FUNC_IMPL(__imp__sub_82DC3538) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC353C"))) PPC_WEAK_FUNC(sub_82DC353C);
PPC_FUNC_IMPL(__imp__sub_82DC353C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3540"))) PPC_WEAK_FUNC(sub_82DC3540);
PPC_FUNC_IMPL(__imp__sub_82DC3540) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dc3588
	if (ctx.cr6.eq) goto loc_82DC3588;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,-4044
	ctx.r10.s64 = ctx.r11.s64 + -4044;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82dc3588
	if (ctx.cr6.eq) goto loc_82DC3588;
	// lbz r11,278(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 278);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc3588
	if (ctx.cr6.eq) goto loc_82DC3588;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x82ddb260
	ctx.lr = 0x82DC3588;
	sub_82DDB260(ctx, base);
loc_82DC3588:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3598"))) PPC_WEAK_FUNC(sub_82DC3598);
PPC_FUNC_IMPL(__imp__sub_82DC3598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-4044
	ctx.r3.s64 = ctx.r11.s64 + -4044;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC35A4"))) PPC_WEAK_FUNC(sub_82DC35A4);
PPC_FUNC_IMPL(__imp__sub_82DC35A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC35A8"))) PPC_WEAK_FUNC(sub_82DC35A8);
PPC_FUNC_IMPL(__imp__sub_82DC35A8) {
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
	// bl 0x82ddb798
	ctx.lr = 0x82DC35C8;
	sub_82DDB798(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc35f4
	if (ctx.cr6.eq) goto loc_82DC35F4;
	// bl 0x82d2d090
	ctx.lr = 0x82DC35D8;
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
	ctx.lr = 0x82DC35F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC35F4:
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

__attribute__((alias("__imp__sub_82DC3610"))) PPC_WEAK_FUNC(sub_82DC3610);
PPC_FUNC_IMPL(__imp__sub_82DC3610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3614"))) PPC_WEAK_FUNC(sub_82DC3614);
PPC_FUNC_IMPL(__imp__sub_82DC3614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3618"))) PPC_WEAK_FUNC(sub_82DC3618);
PPC_FUNC_IMPL(__imp__sub_82DC3618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12912
	ctx.r3.s64 = ctx.r11.s64 + -12912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3624"))) PPC_WEAK_FUNC(sub_82DC3624);
PPC_FUNC_IMPL(__imp__sub_82DC3624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3628"))) PPC_WEAK_FUNC(sub_82DC3628);
PPC_FUNC_IMPL(__imp__sub_82DC3628) {
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

__attribute__((alias("__imp__sub_82DC363C"))) PPC_WEAK_FUNC(sub_82DC363C);
PPC_FUNC_IMPL(__imp__sub_82DC363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3640"))) PPC_WEAK_FUNC(sub_82DC3640);
PPC_FUNC_IMPL(__imp__sub_82DC3640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12864
	ctx.r3.s64 = ctx.r11.s64 + -12864;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC364C"))) PPC_WEAK_FUNC(sub_82DC364C);
PPC_FUNC_IMPL(__imp__sub_82DC364C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3650"))) PPC_WEAK_FUNC(sub_82DC3650);
PPC_FUNC_IMPL(__imp__sub_82DC3650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3654"))) PPC_WEAK_FUNC(sub_82DC3654);
PPC_FUNC_IMPL(__imp__sub_82DC3654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3658"))) PPC_WEAK_FUNC(sub_82DC3658);
PPC_FUNC_IMPL(__imp__sub_82DC3658) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dc36a0
	if (ctx.cr6.eq) goto loc_82DC36A0;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,-3748
	ctx.r10.s64 = ctx.r11.s64 + -3748;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82dc36a0
	if (ctx.cr6.eq) goto loc_82DC36A0;
	// lbz r11,154(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 154);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc36a0
	if (ctx.cr6.eq) goto loc_82DC36A0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x82de5a90
	ctx.lr = 0x82DC36A0;
	sub_82DE5A90(ctx, base);
loc_82DC36A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC36B0"))) PPC_WEAK_FUNC(sub_82DC36B0);
PPC_FUNC_IMPL(__imp__sub_82DC36B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-3748
	ctx.r3.s64 = ctx.r11.s64 + -3748;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC36BC"))) PPC_WEAK_FUNC(sub_82DC36BC);
PPC_FUNC_IMPL(__imp__sub_82DC36BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC36C0"))) PPC_WEAK_FUNC(sub_82DC36C0);
PPC_FUNC_IMPL(__imp__sub_82DC36C0) {
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

__attribute__((alias("__imp__sub_82DC36D4"))) PPC_WEAK_FUNC(sub_82DC36D4);
PPC_FUNC_IMPL(__imp__sub_82DC36D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC36D8"))) PPC_WEAK_FUNC(sub_82DC36D8);
PPC_FUNC_IMPL(__imp__sub_82DC36D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12816
	ctx.r3.s64 = ctx.r11.s64 + -12816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC36E4"))) PPC_WEAK_FUNC(sub_82DC36E4);
PPC_FUNC_IMPL(__imp__sub_82DC36E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC36E8"))) PPC_WEAK_FUNC(sub_82DC36E8);
PPC_FUNC_IMPL(__imp__sub_82DC36E8) {
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
	// beq cr6,0x82dc3714
	if (ctx.cr6.eq) goto loc_82DC3714;
	// bl 0x82dc5750
	ctx.lr = 0x82DC3708;
	sub_82DC5750(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-3628
	ctx.r10.s64 = ctx.r11.s64 + -3628;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82DC3714:
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

__attribute__((alias("__imp__sub_82DC3728"))) PPC_WEAK_FUNC(sub_82DC3728);
PPC_FUNC_IMPL(__imp__sub_82DC3728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc5750
	ctx.lr = 0x82DC3740;
	sub_82DC5750(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-3628
	ctx.r3.s64 = ctx.r11.s64 + -3628;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3758"))) PPC_WEAK_FUNC(sub_82DC3758);
PPC_FUNC_IMPL(__imp__sub_82DC3758) {
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
	// bl 0x82dc5de0
	ctx.lr = 0x82DC3778;
	sub_82DC5DE0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc37a4
	if (ctx.cr6.eq) goto loc_82DC37A4;
	// bl 0x82d2d090
	ctx.lr = 0x82DC3788;
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
	ctx.lr = 0x82DC37A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC37A4:
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

__attribute__((alias("__imp__sub_82DC37C0"))) PPC_WEAK_FUNC(sub_82DC37C0);
PPC_FUNC_IMPL(__imp__sub_82DC37C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC37C4"))) PPC_WEAK_FUNC(sub_82DC37C4);
PPC_FUNC_IMPL(__imp__sub_82DC37C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC37C8"))) PPC_WEAK_FUNC(sub_82DC37C8);
PPC_FUNC_IMPL(__imp__sub_82DC37C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12752
	ctx.r3.s64 = ctx.r11.s64 + -12752;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC37D4"))) PPC_WEAK_FUNC(sub_82DC37D4);
PPC_FUNC_IMPL(__imp__sub_82DC37D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC37D8"))) PPC_WEAK_FUNC(sub_82DC37D8);
PPC_FUNC_IMPL(__imp__sub_82DC37D8) {
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

__attribute__((alias("__imp__sub_82DC37EC"))) PPC_WEAK_FUNC(sub_82DC37EC);
PPC_FUNC_IMPL(__imp__sub_82DC37EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC37F0"))) PPC_WEAK_FUNC(sub_82DC37F0);
PPC_FUNC_IMPL(__imp__sub_82DC37F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12704
	ctx.r3.s64 = ctx.r11.s64 + -12704;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC37FC"))) PPC_WEAK_FUNC(sub_82DC37FC);
PPC_FUNC_IMPL(__imp__sub_82DC37FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3800"))) PPC_WEAK_FUNC(sub_82DC3800);
PPC_FUNC_IMPL(__imp__sub_82DC3800) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3804"))) PPC_WEAK_FUNC(sub_82DC3804);
PPC_FUNC_IMPL(__imp__sub_82DC3804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3808"))) PPC_WEAK_FUNC(sub_82DC3808);
PPC_FUNC_IMPL(__imp__sub_82DC3808) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-3508
	ctx.r10.s64 = ctx.r11.s64 + -3508;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3820"))) PPC_WEAK_FUNC(sub_82DC3820);
PPC_FUNC_IMPL(__imp__sub_82DC3820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-3508
	ctx.r3.s64 = ctx.r11.s64 + -3508;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC382C"))) PPC_WEAK_FUNC(sub_82DC382C);
PPC_FUNC_IMPL(__imp__sub_82DC382C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3830"))) PPC_WEAK_FUNC(sub_82DC3830);
PPC_FUNC_IMPL(__imp__sub_82DC3830) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3834"))) PPC_WEAK_FUNC(sub_82DC3834);
PPC_FUNC_IMPL(__imp__sub_82DC3834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3838"))) PPC_WEAK_FUNC(sub_82DC3838);
PPC_FUNC_IMPL(__imp__sub_82DC3838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12656
	ctx.r3.s64 = ctx.r11.s64 + -12656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3844"))) PPC_WEAK_FUNC(sub_82DC3844);
PPC_FUNC_IMPL(__imp__sub_82DC3844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3848"))) PPC_WEAK_FUNC(sub_82DC3848);
PPC_FUNC_IMPL(__imp__sub_82DC3848) {
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

__attribute__((alias("__imp__sub_82DC385C"))) PPC_WEAK_FUNC(sub_82DC385C);
PPC_FUNC_IMPL(__imp__sub_82DC385C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3860"))) PPC_WEAK_FUNC(sub_82DC3860);
PPC_FUNC_IMPL(__imp__sub_82DC3860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12608
	ctx.r3.s64 = ctx.r11.s64 + -12608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC386C"))) PPC_WEAK_FUNC(sub_82DC386C);
PPC_FUNC_IMPL(__imp__sub_82DC386C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3870"))) PPC_WEAK_FUNC(sub_82DC3870);
PPC_FUNC_IMPL(__imp__sub_82DC3870) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82dc38b0
	sub_82DC38B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC387C"))) PPC_WEAK_FUNC(sub_82DC387C);
PPC_FUNC_IMPL(__imp__sub_82DC387C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3880"))) PPC_WEAK_FUNC(sub_82DC3880);
PPC_FUNC_IMPL(__imp__sub_82DC3880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc38b0
	ctx.lr = 0x82DC3898;
	sub_82DC38B0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC38AC"))) PPC_WEAK_FUNC(sub_82DC38AC);
PPC_FUNC_IMPL(__imp__sub_82DC38AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC38B0"))) PPC_WEAK_FUNC(sub_82DC38B0);
PPC_FUNC_IMPL(__imp__sub_82DC38B0) {
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
	// bl 0x82dd7bd0
	ctx.lr = 0x82DC38C8;
	sub_82DD7BD0(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r8,r9,-3292
	ctx.r8.s64 = ctx.r9.s64 + -3292;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82DC3918"))) PPC_WEAK_FUNC(sub_82DC3918);
PPC_FUNC_IMPL(__imp__sub_82DC3918) {
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
	// bl 0x82de67f8
	ctx.lr = 0x82DC3938;
	sub_82DE67F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc3964
	if (ctx.cr6.eq) goto loc_82DC3964;
	// bl 0x82d2d090
	ctx.lr = 0x82DC3948;
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
	ctx.lr = 0x82DC3964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC3964:
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

__attribute__((alias("__imp__sub_82DC3980"))) PPC_WEAK_FUNC(sub_82DC3980);
PPC_FUNC_IMPL(__imp__sub_82DC3980) {
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

__attribute__((alias("__imp__sub_82DC3994"))) PPC_WEAK_FUNC(sub_82DC3994);
PPC_FUNC_IMPL(__imp__sub_82DC3994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3998"))) PPC_WEAK_FUNC(sub_82DC3998);
PPC_FUNC_IMPL(__imp__sub_82DC3998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12544
	ctx.r3.s64 = ctx.r11.s64 + -12544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC39A4"))) PPC_WEAK_FUNC(sub_82DC39A4);
PPC_FUNC_IMPL(__imp__sub_82DC39A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC39A8"))) PPC_WEAK_FUNC(sub_82DC39A8);
PPC_FUNC_IMPL(__imp__sub_82DC39A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-2788
	ctx.r10.s64 = ctx.r11.s64 + -2788;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC39C0"))) PPC_WEAK_FUNC(sub_82DC39C0);
PPC_FUNC_IMPL(__imp__sub_82DC39C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-2788
	ctx.r3.s64 = ctx.r11.s64 + -2788;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC39CC"))) PPC_WEAK_FUNC(sub_82DC39CC);
PPC_FUNC_IMPL(__imp__sub_82DC39CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC39D0"))) PPC_WEAK_FUNC(sub_82DC39D0);
PPC_FUNC_IMPL(__imp__sub_82DC39D0) {
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
	// bl 0x82de6ca0
	ctx.lr = 0x82DC39F0;
	sub_82DE6CA0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc3a1c
	if (ctx.cr6.eq) goto loc_82DC3A1C;
	// bl 0x82d2d090
	ctx.lr = 0x82DC3A00;
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
	ctx.lr = 0x82DC3A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC3A1C:
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

__attribute__((alias("__imp__sub_82DC3A38"))) PPC_WEAK_FUNC(sub_82DC3A38);
PPC_FUNC_IMPL(__imp__sub_82DC3A38) {
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

__attribute__((alias("__imp__sub_82DC3A4C"))) PPC_WEAK_FUNC(sub_82DC3A4C);
PPC_FUNC_IMPL(__imp__sub_82DC3A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3A50"))) PPC_WEAK_FUNC(sub_82DC3A50);
PPC_FUNC_IMPL(__imp__sub_82DC3A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12496
	ctx.r3.s64 = ctx.r11.s64 + -12496;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3A5C"))) PPC_WEAK_FUNC(sub_82DC3A5C);
PPC_FUNC_IMPL(__imp__sub_82DC3A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3A60"))) PPC_WEAK_FUNC(sub_82DC3A60);
PPC_FUNC_IMPL(__imp__sub_82DC3A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,-13028
	ctx.r10.s64 = ctx.r11.s64 + -13028;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82dc3a94
	if (ctx.cr6.eq) goto loc_82DC3A94;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// srawi r9,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 16;
	// sth r9,286(r3)
	PPC_STORE_U16(ctx.r3.u32 + 286, ctx.r9.u16);
loc_82DC3A94:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-2596
	ctx.r10.s64 = ctx.r11.s64 + -2596;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3AA4"))) PPC_WEAK_FUNC(sub_82DC3AA4);
PPC_FUNC_IMPL(__imp__sub_82DC3AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3AA8"))) PPC_WEAK_FUNC(sub_82DC3AA8);
PPC_FUNC_IMPL(__imp__sub_82DC3AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-2596
	ctx.r3.s64 = ctx.r11.s64 + -2596;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3AB4"))) PPC_WEAK_FUNC(sub_82DC3AB4);
PPC_FUNC_IMPL(__imp__sub_82DC3AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3AB8"))) PPC_WEAK_FUNC(sub_82DC3AB8);
PPC_FUNC_IMPL(__imp__sub_82DC3AB8) {
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

__attribute__((alias("__imp__sub_82DC3ACC"))) PPC_WEAK_FUNC(sub_82DC3ACC);
PPC_FUNC_IMPL(__imp__sub_82DC3ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3AD0"))) PPC_WEAK_FUNC(sub_82DC3AD0);
PPC_FUNC_IMPL(__imp__sub_82DC3AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12448
	ctx.r3.s64 = ctx.r11.s64 + -12448;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3ADC"))) PPC_WEAK_FUNC(sub_82DC3ADC);
PPC_FUNC_IMPL(__imp__sub_82DC3ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3AE0"))) PPC_WEAK_FUNC(sub_82DC3AE0);
PPC_FUNC_IMPL(__imp__sub_82DC3AE0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-2392
	ctx.r10.s64 = ctx.r11.s64 + -2392;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3AF8"))) PPC_WEAK_FUNC(sub_82DC3AF8);
PPC_FUNC_IMPL(__imp__sub_82DC3AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-2392
	ctx.r3.s64 = ctx.r11.s64 + -2392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3B04"))) PPC_WEAK_FUNC(sub_82DC3B04);
PPC_FUNC_IMPL(__imp__sub_82DC3B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3B08"))) PPC_WEAK_FUNC(sub_82DC3B08);
PPC_FUNC_IMPL(__imp__sub_82DC3B08) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,10816
	ctx.r9.s64 = ctx.r11.s64 + 10816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82dc3b54
	if (ctx.cr6.eq) goto loc_82DC3B54;
	// bl 0x82d2d090
	ctx.lr = 0x82DC3B38;
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
	ctx.lr = 0x82DC3B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC3B54:
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

__attribute__((alias("__imp__sub_82DC3B6C"))) PPC_WEAK_FUNC(sub_82DC3B6C);
PPC_FUNC_IMPL(__imp__sub_82DC3B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3B70"))) PPC_WEAK_FUNC(sub_82DC3B70);
PPC_FUNC_IMPL(__imp__sub_82DC3B70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3B74"))) PPC_WEAK_FUNC(sub_82DC3B74);
PPC_FUNC_IMPL(__imp__sub_82DC3B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3B78"))) PPC_WEAK_FUNC(sub_82DC3B78);
PPC_FUNC_IMPL(__imp__sub_82DC3B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12400
	ctx.r3.s64 = ctx.r11.s64 + -12400;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3B84"))) PPC_WEAK_FUNC(sub_82DC3B84);
PPC_FUNC_IMPL(__imp__sub_82DC3B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3B88"))) PPC_WEAK_FUNC(sub_82DC3B88);
PPC_FUNC_IMPL(__imp__sub_82DC3B88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82de96d0
	sub_82DE96D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3B94"))) PPC_WEAK_FUNC(sub_82DC3B94);
PPC_FUNC_IMPL(__imp__sub_82DC3B94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3B98"))) PPC_WEAK_FUNC(sub_82DC3B98);
PPC_FUNC_IMPL(__imp__sub_82DC3B98) {
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

__attribute__((alias("__imp__sub_82DC3BAC"))) PPC_WEAK_FUNC(sub_82DC3BAC);
PPC_FUNC_IMPL(__imp__sub_82DC3BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3BB0"))) PPC_WEAK_FUNC(sub_82DC3BB0);
PPC_FUNC_IMPL(__imp__sub_82DC3BB0) {
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
	// bl 0x82de96d0
	ctx.lr = 0x82DC3BC8;
	sub_82DE96D0(ctx, base);
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

__attribute__((alias("__imp__sub_82DC3BDC"))) PPC_WEAK_FUNC(sub_82DC3BDC);
PPC_FUNC_IMPL(__imp__sub_82DC3BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3BE0"))) PPC_WEAK_FUNC(sub_82DC3BE0);
PPC_FUNC_IMPL(__imp__sub_82DC3BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12352
	ctx.r3.s64 = ctx.r11.s64 + -12352;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3BEC"))) PPC_WEAK_FUNC(sub_82DC3BEC);
PPC_FUNC_IMPL(__imp__sub_82DC3BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3BF0"))) PPC_WEAK_FUNC(sub_82DC3BF0);
PPC_FUNC_IMPL(__imp__sub_82DC3BF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3BF4"))) PPC_WEAK_FUNC(sub_82DC3BF4);
PPC_FUNC_IMPL(__imp__sub_82DC3BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3BF8"))) PPC_WEAK_FUNC(sub_82DC3BF8);
PPC_FUNC_IMPL(__imp__sub_82DC3BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12288
	ctx.r3.s64 = ctx.r11.s64 + -12288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3C04"))) PPC_WEAK_FUNC(sub_82DC3C04);
PPC_FUNC_IMPL(__imp__sub_82DC3C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3C08"))) PPC_WEAK_FUNC(sub_82DC3C08);
PPC_FUNC_IMPL(__imp__sub_82DC3C08) {
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

__attribute__((alias("__imp__sub_82DC3C1C"))) PPC_WEAK_FUNC(sub_82DC3C1C);
PPC_FUNC_IMPL(__imp__sub_82DC3C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3C20"))) PPC_WEAK_FUNC(sub_82DC3C20);
PPC_FUNC_IMPL(__imp__sub_82DC3C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12240
	ctx.r3.s64 = ctx.r11.s64 + -12240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3C2C"))) PPC_WEAK_FUNC(sub_82DC3C2C);
PPC_FUNC_IMPL(__imp__sub_82DC3C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3C30"))) PPC_WEAK_FUNC(sub_82DC3C30);
PPC_FUNC_IMPL(__imp__sub_82DC3C30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3C34"))) PPC_WEAK_FUNC(sub_82DC3C34);
PPC_FUNC_IMPL(__imp__sub_82DC3C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3C38"))) PPC_WEAK_FUNC(sub_82DC3C38);
PPC_FUNC_IMPL(__imp__sub_82DC3C38) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-1988
	ctx.r10.s64 = ctx.r11.s64 + -1988;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3C50"))) PPC_WEAK_FUNC(sub_82DC3C50);
PPC_FUNC_IMPL(__imp__sub_82DC3C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-1988
	ctx.r3.s64 = ctx.r11.s64 + -1988;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3C5C"))) PPC_WEAK_FUNC(sub_82DC3C5C);
PPC_FUNC_IMPL(__imp__sub_82DC3C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3C60"))) PPC_WEAK_FUNC(sub_82DC3C60);
PPC_FUNC_IMPL(__imp__sub_82DC3C60) {
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

__attribute__((alias("__imp__sub_82DC3C74"))) PPC_WEAK_FUNC(sub_82DC3C74);
PPC_FUNC_IMPL(__imp__sub_82DC3C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3C78"))) PPC_WEAK_FUNC(sub_82DC3C78);
PPC_FUNC_IMPL(__imp__sub_82DC3C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12192
	ctx.r3.s64 = ctx.r11.s64 + -12192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3C84"))) PPC_WEAK_FUNC(sub_82DC3C84);
PPC_FUNC_IMPL(__imp__sub_82DC3C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3C88"))) PPC_WEAK_FUNC(sub_82DC3C88);
PPC_FUNC_IMPL(__imp__sub_82DC3C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,-13028
	ctx.r10.s64 = ctx.r11.s64 + -13028;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82dc3cbc
	if (ctx.cr6.eq) goto loc_82DC3CBC;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// srawi r9,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 16;
	// sth r9,286(r3)
	PPC_STORE_U16(ctx.r3.u32 + 286, ctx.r9.u16);
loc_82DC3CBC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-1852
	ctx.r10.s64 = ctx.r11.s64 + -1852;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3CCC"))) PPC_WEAK_FUNC(sub_82DC3CCC);
PPC_FUNC_IMPL(__imp__sub_82DC3CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3CD0"))) PPC_WEAK_FUNC(sub_82DC3CD0);
PPC_FUNC_IMPL(__imp__sub_82DC3CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-1852
	ctx.r3.s64 = ctx.r11.s64 + -1852;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3CDC"))) PPC_WEAK_FUNC(sub_82DC3CDC);
PPC_FUNC_IMPL(__imp__sub_82DC3CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3CE0"))) PPC_WEAK_FUNC(sub_82DC3CE0);
PPC_FUNC_IMPL(__imp__sub_82DC3CE0) {
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

__attribute__((alias("__imp__sub_82DC3CF4"))) PPC_WEAK_FUNC(sub_82DC3CF4);
PPC_FUNC_IMPL(__imp__sub_82DC3CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3CF8"))) PPC_WEAK_FUNC(sub_82DC3CF8);
PPC_FUNC_IMPL(__imp__sub_82DC3CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12144
	ctx.r3.s64 = ctx.r11.s64 + -12144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3D04"))) PPC_WEAK_FUNC(sub_82DC3D04);
PPC_FUNC_IMPL(__imp__sub_82DC3D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3D08"))) PPC_WEAK_FUNC(sub_82DC3D08);
PPC_FUNC_IMPL(__imp__sub_82DC3D08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-1596
	ctx.r10.s64 = ctx.r11.s64 + -1596;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3D20"))) PPC_WEAK_FUNC(sub_82DC3D20);
PPC_FUNC_IMPL(__imp__sub_82DC3D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-1596
	ctx.r3.s64 = ctx.r11.s64 + -1596;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3D2C"))) PPC_WEAK_FUNC(sub_82DC3D2C);
PPC_FUNC_IMPL(__imp__sub_82DC3D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3D30"))) PPC_WEAK_FUNC(sub_82DC3D30);
PPC_FUNC_IMPL(__imp__sub_82DC3D30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3D34"))) PPC_WEAK_FUNC(sub_82DC3D34);
PPC_FUNC_IMPL(__imp__sub_82DC3D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3D38"))) PPC_WEAK_FUNC(sub_82DC3D38);
PPC_FUNC_IMPL(__imp__sub_82DC3D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12096
	ctx.r3.s64 = ctx.r11.s64 + -12096;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3D44"))) PPC_WEAK_FUNC(sub_82DC3D44);
PPC_FUNC_IMPL(__imp__sub_82DC3D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3D48"))) PPC_WEAK_FUNC(sub_82DC3D48);
PPC_FUNC_IMPL(__imp__sub_82DC3D48) {
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

__attribute__((alias("__imp__sub_82DC3D5C"))) PPC_WEAK_FUNC(sub_82DC3D5C);
PPC_FUNC_IMPL(__imp__sub_82DC3D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3D60"))) PPC_WEAK_FUNC(sub_82DC3D60);
PPC_FUNC_IMPL(__imp__sub_82DC3D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12048
	ctx.r3.s64 = ctx.r11.s64 + -12048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3D6C"))) PPC_WEAK_FUNC(sub_82DC3D6C);
PPC_FUNC_IMPL(__imp__sub_82DC3D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3D70"))) PPC_WEAK_FUNC(sub_82DC3D70);
PPC_FUNC_IMPL(__imp__sub_82DC3D70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3D74"))) PPC_WEAK_FUNC(sub_82DC3D74);
PPC_FUNC_IMPL(__imp__sub_82DC3D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3D78"))) PPC_WEAK_FUNC(sub_82DC3D78);
PPC_FUNC_IMPL(__imp__sub_82DC3D78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-1092
	ctx.r10.s64 = ctx.r11.s64 + -1092;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3D90"))) PPC_WEAK_FUNC(sub_82DC3D90);
PPC_FUNC_IMPL(__imp__sub_82DC3D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-1092
	ctx.r3.s64 = ctx.r11.s64 + -1092;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3D9C"))) PPC_WEAK_FUNC(sub_82DC3D9C);
PPC_FUNC_IMPL(__imp__sub_82DC3D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3DA0"))) PPC_WEAK_FUNC(sub_82DC3DA0);
PPC_FUNC_IMPL(__imp__sub_82DC3DA0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82dcb6c0
	sub_82DCB6C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3DAC"))) PPC_WEAK_FUNC(sub_82DC3DAC);
PPC_FUNC_IMPL(__imp__sub_82DC3DAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3DB0"))) PPC_WEAK_FUNC(sub_82DC3DB0);
PPC_FUNC_IMPL(__imp__sub_82DC3DB0) {
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

__attribute__((alias("__imp__sub_82DC3DC4"))) PPC_WEAK_FUNC(sub_82DC3DC4);
PPC_FUNC_IMPL(__imp__sub_82DC3DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3DC8"))) PPC_WEAK_FUNC(sub_82DC3DC8);
PPC_FUNC_IMPL(__imp__sub_82DC3DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dcb6c0
	ctx.lr = 0x82DC3DE0;
	sub_82DCB6C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3DF4"))) PPC_WEAK_FUNC(sub_82DC3DF4);
PPC_FUNC_IMPL(__imp__sub_82DC3DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3DF8"))) PPC_WEAK_FUNC(sub_82DC3DF8);
PPC_FUNC_IMPL(__imp__sub_82DC3DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12000
	ctx.r3.s64 = ctx.r11.s64 + -12000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3E04"))) PPC_WEAK_FUNC(sub_82DC3E04);
PPC_FUNC_IMPL(__imp__sub_82DC3E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3E08"))) PPC_WEAK_FUNC(sub_82DC3E08);
PPC_FUNC_IMPL(__imp__sub_82DC3E08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82dd2420
	sub_82DD2420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3E14"))) PPC_WEAK_FUNC(sub_82DC3E14);
PPC_FUNC_IMPL(__imp__sub_82DC3E14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3E18"))) PPC_WEAK_FUNC(sub_82DC3E18);
PPC_FUNC_IMPL(__imp__sub_82DC3E18) {
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

__attribute__((alias("__imp__sub_82DC3E2C"))) PPC_WEAK_FUNC(sub_82DC3E2C);
PPC_FUNC_IMPL(__imp__sub_82DC3E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3E30"))) PPC_WEAK_FUNC(sub_82DC3E30);
PPC_FUNC_IMPL(__imp__sub_82DC3E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dd2420
	ctx.lr = 0x82DC3E48;
	sub_82DD2420(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3E5C"))) PPC_WEAK_FUNC(sub_82DC3E5C);
PPC_FUNC_IMPL(__imp__sub_82DC3E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3E60"))) PPC_WEAK_FUNC(sub_82DC3E60);
PPC_FUNC_IMPL(__imp__sub_82DC3E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11936
	ctx.r3.s64 = ctx.r11.s64 + -11936;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3E6C"))) PPC_WEAK_FUNC(sub_82DC3E6C);
PPC_FUNC_IMPL(__imp__sub_82DC3E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3E70"))) PPC_WEAK_FUNC(sub_82DC3E70);
PPC_FUNC_IMPL(__imp__sub_82DC3E70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3E74"))) PPC_WEAK_FUNC(sub_82DC3E74);
PPC_FUNC_IMPL(__imp__sub_82DC3E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3E78"))) PPC_WEAK_FUNC(sub_82DC3E78);
PPC_FUNC_IMPL(__imp__sub_82DC3E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11872
	ctx.r3.s64 = ctx.r11.s64 + -11872;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3E84"))) PPC_WEAK_FUNC(sub_82DC3E84);
PPC_FUNC_IMPL(__imp__sub_82DC3E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3E88"))) PPC_WEAK_FUNC(sub_82DC3E88);
PPC_FUNC_IMPL(__imp__sub_82DC3E88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82de9b20
	sub_82DE9B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3E94"))) PPC_WEAK_FUNC(sub_82DC3E94);
PPC_FUNC_IMPL(__imp__sub_82DC3E94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3E98"))) PPC_WEAK_FUNC(sub_82DC3E98);
PPC_FUNC_IMPL(__imp__sub_82DC3E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11824
	ctx.r3.s64 = ctx.r11.s64 + -11824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3EA4"))) PPC_WEAK_FUNC(sub_82DC3EA4);
PPC_FUNC_IMPL(__imp__sub_82DC3EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3EA8"))) PPC_WEAK_FUNC(sub_82DC3EA8);
PPC_FUNC_IMPL(__imp__sub_82DC3EA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82dc3eb0
	sub_82DC3EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3EAC"))) PPC_WEAK_FUNC(sub_82DC3EAC);
PPC_FUNC_IMPL(__imp__sub_82DC3EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3EB0"))) PPC_WEAK_FUNC(sub_82DC3EB0);
PPC_FUNC_IMPL(__imp__sub_82DC3EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82DC3EB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,52
	ctx.r31.s64 = ctx.r3.s64 + 52;
	// bl 0x82d2d090
	ctx.lr = 0x82DC3EC8;
	sub_82D2D090(ctx, base);
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r29,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dc3f00
	if (!ctx.cr6.eq) goto loc_82DC3F00;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DC3F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC3F00:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r30,r28,40
	ctx.r30.s64 = ctx.r28.s64 + 40;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82DC3F14;
	sub_82D2D090(ctx, base);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r29,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dc3f48
	if (!ctx.cr6.eq) goto loc_82DC3F48;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DC3F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC3F48:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r31,r28,28
	ctx.r31.s64 = ctx.r28.s64 + 28;
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82DC3F58;
	sub_82D2D090(ctx, base);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r29,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dc3f8c
	if (!ctx.cr6.eq) goto loc_82DC3F8C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DC3F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC3F8C:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r30,r28,16
	ctx.r30.s64 = ctx.r28.s64 + 16;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82DC3F9C;
	sub_82D2D090(ctx, base);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dc3fd0
	if (!ctx.cr6.eq) goto loc_82DC3FD0;
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
	ctx.lr = 0x82DC3FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC3FD0:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3FE0"))) PPC_WEAK_FUNC(sub_82DC3FE0);
PPC_FUNC_IMPL(__imp__sub_82DC3FE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3FE4"))) PPC_WEAK_FUNC(sub_82DC3FE4);
PPC_FUNC_IMPL(__imp__sub_82DC3FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3FE8"))) PPC_WEAK_FUNC(sub_82DC3FE8);
PPC_FUNC_IMPL(__imp__sub_82DC3FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11776
	ctx.r3.s64 = ctx.r11.s64 + -11776;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3FF4"))) PPC_WEAK_FUNC(sub_82DC3FF4);
PPC_FUNC_IMPL(__imp__sub_82DC3FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3FF8"))) PPC_WEAK_FUNC(sub_82DC3FF8);
PPC_FUNC_IMPL(__imp__sub_82DC3FF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3FFC"))) PPC_WEAK_FUNC(sub_82DC3FFC);
PPC_FUNC_IMPL(__imp__sub_82DC3FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4000"))) PPC_WEAK_FUNC(sub_82DC4000);
PPC_FUNC_IMPL(__imp__sub_82DC4000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4004"))) PPC_WEAK_FUNC(sub_82DC4004);
PPC_FUNC_IMPL(__imp__sub_82DC4004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4008"))) PPC_WEAK_FUNC(sub_82DC4008);
PPC_FUNC_IMPL(__imp__sub_82DC4008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11728
	ctx.r3.s64 = ctx.r11.s64 + -11728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4014"))) PPC_WEAK_FUNC(sub_82DC4014);
PPC_FUNC_IMPL(__imp__sub_82DC4014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4018"))) PPC_WEAK_FUNC(sub_82DC4018);
PPC_FUNC_IMPL(__imp__sub_82DC4018) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC401C"))) PPC_WEAK_FUNC(sub_82DC401C);
PPC_FUNC_IMPL(__imp__sub_82DC401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4020"))) PPC_WEAK_FUNC(sub_82DC4020);
PPC_FUNC_IMPL(__imp__sub_82DC4020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11680
	ctx.r3.s64 = ctx.r11.s64 + -11680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC402C"))) PPC_WEAK_FUNC(sub_82DC402C);
PPC_FUNC_IMPL(__imp__sub_82DC402C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4030"))) PPC_WEAK_FUNC(sub_82DC4030);
PPC_FUNC_IMPL(__imp__sub_82DC4030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4034"))) PPC_WEAK_FUNC(sub_82DC4034);
PPC_FUNC_IMPL(__imp__sub_82DC4034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4038"))) PPC_WEAK_FUNC(sub_82DC4038);
PPC_FUNC_IMPL(__imp__sub_82DC4038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC403C"))) PPC_WEAK_FUNC(sub_82DC403C);
PPC_FUNC_IMPL(__imp__sub_82DC403C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4040"))) PPC_WEAK_FUNC(sub_82DC4040);
PPC_FUNC_IMPL(__imp__sub_82DC4040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11632
	ctx.r3.s64 = ctx.r11.s64 + -11632;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC404C"))) PPC_WEAK_FUNC(sub_82DC404C);
PPC_FUNC_IMPL(__imp__sub_82DC404C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4050"))) PPC_WEAK_FUNC(sub_82DC4050);
PPC_FUNC_IMPL(__imp__sub_82DC4050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4054"))) PPC_WEAK_FUNC(sub_82DC4054);
PPC_FUNC_IMPL(__imp__sub_82DC4054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4058"))) PPC_WEAK_FUNC(sub_82DC4058);
PPC_FUNC_IMPL(__imp__sub_82DC4058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11584
	ctx.r3.s64 = ctx.r11.s64 + -11584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4064"))) PPC_WEAK_FUNC(sub_82DC4064);
PPC_FUNC_IMPL(__imp__sub_82DC4064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4068"))) PPC_WEAK_FUNC(sub_82DC4068);
PPC_FUNC_IMPL(__imp__sub_82DC4068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC406C"))) PPC_WEAK_FUNC(sub_82DC406C);
PPC_FUNC_IMPL(__imp__sub_82DC406C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4070"))) PPC_WEAK_FUNC(sub_82DC4070);
PPC_FUNC_IMPL(__imp__sub_82DC4070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11536
	ctx.r3.s64 = ctx.r11.s64 + -11536;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC407C"))) PPC_WEAK_FUNC(sub_82DC407C);
PPC_FUNC_IMPL(__imp__sub_82DC407C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4080"))) PPC_WEAK_FUNC(sub_82DC4080);
PPC_FUNC_IMPL(__imp__sub_82DC4080) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82de3a70
	sub_82DE3A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC408C"))) PPC_WEAK_FUNC(sub_82DC408C);
PPC_FUNC_IMPL(__imp__sub_82DC408C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4090"))) PPC_WEAK_FUNC(sub_82DC4090);
PPC_FUNC_IMPL(__imp__sub_82DC4090) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4094"))) PPC_WEAK_FUNC(sub_82DC4094);
PPC_FUNC_IMPL(__imp__sub_82DC4094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4098"))) PPC_WEAK_FUNC(sub_82DC4098);
PPC_FUNC_IMPL(__imp__sub_82DC4098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11488
	ctx.r3.s64 = ctx.r11.s64 + -11488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC40A4"))) PPC_WEAK_FUNC(sub_82DC40A4);
PPC_FUNC_IMPL(__imp__sub_82DC40A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC40A8"))) PPC_WEAK_FUNC(sub_82DC40A8);
PPC_FUNC_IMPL(__imp__sub_82DC40A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC40AC"))) PPC_WEAK_FUNC(sub_82DC40AC);
PPC_FUNC_IMPL(__imp__sub_82DC40AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC40B0"))) PPC_WEAK_FUNC(sub_82DC40B0);
PPC_FUNC_IMPL(__imp__sub_82DC40B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11440
	ctx.r3.s64 = ctx.r11.s64 + -11440;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC40BC"))) PPC_WEAK_FUNC(sub_82DC40BC);
PPC_FUNC_IMPL(__imp__sub_82DC40BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC40C0"))) PPC_WEAK_FUNC(sub_82DC40C0);
PPC_FUNC_IMPL(__imp__sub_82DC40C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC40C4"))) PPC_WEAK_FUNC(sub_82DC40C4);
PPC_FUNC_IMPL(__imp__sub_82DC40C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC40C8"))) PPC_WEAK_FUNC(sub_82DC40C8);
PPC_FUNC_IMPL(__imp__sub_82DC40C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11392
	ctx.r3.s64 = ctx.r11.s64 + -11392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC40D4"))) PPC_WEAK_FUNC(sub_82DC40D4);
PPC_FUNC_IMPL(__imp__sub_82DC40D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC40D8"))) PPC_WEAK_FUNC(sub_82DC40D8);
PPC_FUNC_IMPL(__imp__sub_82DC40D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC40DC"))) PPC_WEAK_FUNC(sub_82DC40DC);
PPC_FUNC_IMPL(__imp__sub_82DC40DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC40E0"))) PPC_WEAK_FUNC(sub_82DC40E0);
PPC_FUNC_IMPL(__imp__sub_82DC40E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11344
	ctx.r3.s64 = ctx.r11.s64 + -11344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC40EC"))) PPC_WEAK_FUNC(sub_82DC40EC);
PPC_FUNC_IMPL(__imp__sub_82DC40EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC40F0"))) PPC_WEAK_FUNC(sub_82DC40F0);
PPC_FUNC_IMPL(__imp__sub_82DC40F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC40F4"))) PPC_WEAK_FUNC(sub_82DC40F4);
PPC_FUNC_IMPL(__imp__sub_82DC40F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC40F8"))) PPC_WEAK_FUNC(sub_82DC40F8);
PPC_FUNC_IMPL(__imp__sub_82DC40F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11296
	ctx.r3.s64 = ctx.r11.s64 + -11296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4104"))) PPC_WEAK_FUNC(sub_82DC4104);
PPC_FUNC_IMPL(__imp__sub_82DC4104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4108"))) PPC_WEAK_FUNC(sub_82DC4108);
PPC_FUNC_IMPL(__imp__sub_82DC4108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC410C"))) PPC_WEAK_FUNC(sub_82DC410C);
PPC_FUNC_IMPL(__imp__sub_82DC410C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4110"))) PPC_WEAK_FUNC(sub_82DC4110);
PPC_FUNC_IMPL(__imp__sub_82DC4110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11248
	ctx.r3.s64 = ctx.r11.s64 + -11248;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC411C"))) PPC_WEAK_FUNC(sub_82DC411C);
PPC_FUNC_IMPL(__imp__sub_82DC411C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4120"))) PPC_WEAK_FUNC(sub_82DC4120);
PPC_FUNC_IMPL(__imp__sub_82DC4120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4124"))) PPC_WEAK_FUNC(sub_82DC4124);
PPC_FUNC_IMPL(__imp__sub_82DC4124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4128"))) PPC_WEAK_FUNC(sub_82DC4128);
PPC_FUNC_IMPL(__imp__sub_82DC4128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11200
	ctx.r3.s64 = ctx.r11.s64 + -11200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4134"))) PPC_WEAK_FUNC(sub_82DC4134);
PPC_FUNC_IMPL(__imp__sub_82DC4134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4138"))) PPC_WEAK_FUNC(sub_82DC4138);
PPC_FUNC_IMPL(__imp__sub_82DC4138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC413C"))) PPC_WEAK_FUNC(sub_82DC413C);
PPC_FUNC_IMPL(__imp__sub_82DC413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4140"))) PPC_WEAK_FUNC(sub_82DC4140);
PPC_FUNC_IMPL(__imp__sub_82DC4140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11152
	ctx.r3.s64 = ctx.r11.s64 + -11152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC414C"))) PPC_WEAK_FUNC(sub_82DC414C);
PPC_FUNC_IMPL(__imp__sub_82DC414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4150"))) PPC_WEAK_FUNC(sub_82DC4150);
PPC_FUNC_IMPL(__imp__sub_82DC4150) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4154"))) PPC_WEAK_FUNC(sub_82DC4154);
PPC_FUNC_IMPL(__imp__sub_82DC4154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4158"))) PPC_WEAK_FUNC(sub_82DC4158);
PPC_FUNC_IMPL(__imp__sub_82DC4158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11104
	ctx.r3.s64 = ctx.r11.s64 + -11104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4164"))) PPC_WEAK_FUNC(sub_82DC4164);
PPC_FUNC_IMPL(__imp__sub_82DC4164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4168"))) PPC_WEAK_FUNC(sub_82DC4168);
PPC_FUNC_IMPL(__imp__sub_82DC4168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC416C"))) PPC_WEAK_FUNC(sub_82DC416C);
PPC_FUNC_IMPL(__imp__sub_82DC416C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4170"))) PPC_WEAK_FUNC(sub_82DC4170);
PPC_FUNC_IMPL(__imp__sub_82DC4170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11056
	ctx.r3.s64 = ctx.r11.s64 + -11056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC417C"))) PPC_WEAK_FUNC(sub_82DC417C);
PPC_FUNC_IMPL(__imp__sub_82DC417C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4180"))) PPC_WEAK_FUNC(sub_82DC4180);
PPC_FUNC_IMPL(__imp__sub_82DC4180) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4184"))) PPC_WEAK_FUNC(sub_82DC4184);
PPC_FUNC_IMPL(__imp__sub_82DC4184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4188"))) PPC_WEAK_FUNC(sub_82DC4188);
PPC_FUNC_IMPL(__imp__sub_82DC4188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11008
	ctx.r3.s64 = ctx.r11.s64 + -11008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4194"))) PPC_WEAK_FUNC(sub_82DC4194);
PPC_FUNC_IMPL(__imp__sub_82DC4194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4198"))) PPC_WEAK_FUNC(sub_82DC4198);
PPC_FUNC_IMPL(__imp__sub_82DC4198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC419C"))) PPC_WEAK_FUNC(sub_82DC419C);
PPC_FUNC_IMPL(__imp__sub_82DC419C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC41A0"))) PPC_WEAK_FUNC(sub_82DC41A0);
PPC_FUNC_IMPL(__imp__sub_82DC41A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10960
	ctx.r3.s64 = ctx.r11.s64 + -10960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC41AC"))) PPC_WEAK_FUNC(sub_82DC41AC);
PPC_FUNC_IMPL(__imp__sub_82DC41AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

