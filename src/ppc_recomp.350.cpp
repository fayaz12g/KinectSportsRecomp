#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83178744"))) PPC_WEAK_FUNC(sub_83178744);
PPC_FUNC_IMPL(__imp__sub_83178744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178748"))) PPC_WEAK_FUNC(sub_83178748);
PPC_FUNC_IMPL(__imp__sub_83178748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-23920
	ctx.r3.s64 = ctx.r11.s64 + -23920;
	// b 0x82d2bbb0
	sub_82D2BBB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83178754"))) PPC_WEAK_FUNC(sub_83178754);
PPC_FUNC_IMPL(__imp__sub_83178754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178758"))) PPC_WEAK_FUNC(sub_83178758);
PPC_FUNC_IMPL(__imp__sub_83178758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lwz r3,-23884(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23884);
	// b 0x831791f4
	__imp__KeTlsFree(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83178764"))) PPC_WEAK_FUNC(sub_83178764);
PPC_FUNC_IMPL(__imp__sub_83178764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178768"))) PPC_WEAK_FUNC(sub_83178768);
PPC_FUNC_IMPL(__imp__sub_83178768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lwz r3,-21784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21784);
	// b 0x831791f4
	__imp__KeTlsFree(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83178774"))) PPC_WEAK_FUNC(sub_83178774);
PPC_FUNC_IMPL(__imp__sub_83178774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178778"))) PPC_WEAK_FUNC(sub_83178778);
PPC_FUNC_IMPL(__imp__sub_83178778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lwz r3,-21668(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21668);
	// b 0x831791f4
	__imp__KeTlsFree(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83178784"))) PPC_WEAK_FUNC(sub_83178784);
PPC_FUNC_IMPL(__imp__sub_83178784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178788"))) PPC_WEAK_FUNC(sub_83178788);
PPC_FUNC_IMPL(__imp__sub_83178788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lwz r3,-21024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21024);
	// b 0x831791f4
	__imp__KeTlsFree(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83178794"))) PPC_WEAK_FUNC(sub_83178794);
PPC_FUNC_IMPL(__imp__sub_83178794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178798"))) PPC_WEAK_FUNC(sub_83178798);
PPC_FUNC_IMPL(__imp__sub_83178798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// addi r11,r11,29568
	ctx.r11.s64 = ctx.r11.s64 + 29568;
	// stw r11,-20512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20512, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831787AC"))) PPC_WEAK_FUNC(sub_831787AC);
PPC_FUNC_IMPL(__imp__sub_831787AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831787B0"))) PPC_WEAK_FUNC(sub_831787B0);
PPC_FUNC_IMPL(__imp__sub_831787B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r11,r11,10816
	ctx.r11.s64 = ctx.r11.s64 + 10816;
	// stw r11,14268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831787C4"))) PPC_WEAK_FUNC(sub_831787C4);
PPC_FUNC_IMPL(__imp__sub_831787C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831787C8"))) PPC_WEAK_FUNC(sub_831787C8);
PPC_FUNC_IMPL(__imp__sub_831787C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// addi r11,r11,10816
	ctx.r11.s64 = ctx.r11.s64 + 10816;
	// stw r11,-2352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831787DC"))) PPC_WEAK_FUNC(sub_831787DC);
PPC_FUNC_IMPL(__imp__sub_831787DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831787E0"))) PPC_WEAK_FUNC(sub_831787E0);
PPC_FUNC_IMPL(__imp__sub_831787E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// addi r11,r11,10816
	ctx.r11.s64 = ctx.r11.s64 + 10816;
	// stw r11,-2312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2312, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831787F4"))) PPC_WEAK_FUNC(sub_831787F4);
PPC_FUNC_IMPL(__imp__sub_831787F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831787F8"))) PPC_WEAK_FUNC(sub_831787F8);
PPC_FUNC_IMPL(__imp__sub_831787F8) {
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
	// addi r31,r11,-2032
	ctx.r31.s64 = ctx.r11.s64 + -2032;
	// addi r3,r31,636
	ctx.r3.s64 = ctx.r31.s64 + 636;
	// bl 0x82f258b0
	ctx.lr = 0x83178818;
	sub_82F258B0(ctx, base);
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// bl 0x82e8f0c8
	ctx.lr = 0x83178820;
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

__attribute__((alias("__imp__sub_83178834"))) PPC_WEAK_FUNC(sub_83178834);
PPC_FUNC_IMPL(__imp__sub_83178834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178838"))) PPC_WEAK_FUNC(sub_83178838);
PPC_FUNC_IMPL(__imp__sub_83178838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,7616
	ctx.r3.s64 = ctx.r11.s64 + 7616;
	// b 0x82f91530
	sub_82F91530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83178844"))) PPC_WEAK_FUNC(sub_83178844);
PPC_FUNC_IMPL(__imp__sub_83178844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178848"))) PPC_WEAK_FUNC(sub_83178848);
PPC_FUNC_IMPL(__imp__sub_83178848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,-24044
	ctx.r11.s64 = ctx.r11.s64 + -24044;
	// stw r11,-16936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16936, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317885C"))) PPC_WEAK_FUNC(sub_8317885C);
PPC_FUNC_IMPL(__imp__sub_8317885C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178860"))) PPC_WEAK_FUNC(sub_83178860);
PPC_FUNC_IMPL(__imp__sub_83178860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,-24044
	ctx.r11.s64 = ctx.r11.s64 + -24044;
	// stw r11,-16928(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16928, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178874"))) PPC_WEAK_FUNC(sub_83178874);
PPC_FUNC_IMPL(__imp__sub_83178874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178878"))) PPC_WEAK_FUNC(sub_83178878);
PPC_FUNC_IMPL(__imp__sub_83178878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,-24044
	ctx.r11.s64 = ctx.r11.s64 + -24044;
	// stw r11,-16920(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16920, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317888C"))) PPC_WEAK_FUNC(sub_8317888C);
PPC_FUNC_IMPL(__imp__sub_8317888C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178890"))) PPC_WEAK_FUNC(sub_83178890);
PPC_FUNC_IMPL(__imp__sub_83178890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,11128
	ctx.r3.s64 = ctx.r11.s64 + 11128;
	// b 0x82fa0a00
	sub_82FA0A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317889C"))) PPC_WEAK_FUNC(sub_8317889C);
PPC_FUNC_IMPL(__imp__sub_8317889C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831788A0"))) PPC_WEAK_FUNC(sub_831788A0);
PPC_FUNC_IMPL(__imp__sub_831788A0) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,11164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831788dc
	if (ctx.cr6.eq) goto loc_831788DC;
	// bl 0x822513f8
	ctx.lr = 0x831788C0;
	sub_822513F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x831788dc
	if (ctx.cr0.eq) goto loc_831788DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831788DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831788DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831788EC"))) PPC_WEAK_FUNC(sub_831788EC);
PPC_FUNC_IMPL(__imp__sub_831788EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831788F0"))) PPC_WEAK_FUNC(sub_831788F0);
PPC_FUNC_IMPL(__imp__sub_831788F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,11172
	ctx.r3.s64 = ctx.r11.s64 + 11172;
	// b 0x82fa0d88
	sub_82FA0D88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831788FC"))) PPC_WEAK_FUNC(sub_831788FC);
PPC_FUNC_IMPL(__imp__sub_831788FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178900"))) PPC_WEAK_FUNC(sub_83178900);
PPC_FUNC_IMPL(__imp__sub_83178900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,11312
	ctx.r3.s64 = ctx.r11.s64 + 11312;
	// b 0x82fa0a00
	sub_82FA0A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317890C"))) PPC_WEAK_FUNC(sub_8317890C);
PPC_FUNC_IMPL(__imp__sub_8317890C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178910"))) PPC_WEAK_FUNC(sub_83178910);
PPC_FUNC_IMPL(__imp__sub_83178910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,11313
	ctx.r3.s64 = ctx.r11.s64 + 11313;
	// b 0x82fa1f68
	sub_82FA1F68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317891C"))) PPC_WEAK_FUNC(sub_8317891C);
PPC_FUNC_IMPL(__imp__sub_8317891C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178920"))) PPC_WEAK_FUNC(sub_83178920);
PPC_FUNC_IMPL(__imp__sub_83178920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,15000
	ctx.r3.s64 = ctx.r11.s64 + 15000;
	// b 0x82fd9940
	sub_82FD9940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317892C"))) PPC_WEAK_FUNC(sub_8317892C);
PPC_FUNC_IMPL(__imp__sub_8317892C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178930"))) PPC_WEAK_FUNC(sub_83178930);
PPC_FUNC_IMPL(__imp__sub_83178930) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178934"))) PPC_WEAK_FUNC(sub_83178934);
PPC_FUNC_IMPL(__imp__sub_83178934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178938"))) PPC_WEAK_FUNC(sub_83178938);
PPC_FUNC_IMPL(__imp__sub_83178938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317893C"))) PPC_WEAK_FUNC(sub_8317893C);
PPC_FUNC_IMPL(__imp__sub_8317893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178940"))) PPC_WEAK_FUNC(sub_83178940);
PPC_FUNC_IMPL(__imp__sub_83178940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178944"))) PPC_WEAK_FUNC(sub_83178944);
PPC_FUNC_IMPL(__imp__sub_83178944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178948"))) PPC_WEAK_FUNC(sub_83178948);
PPC_FUNC_IMPL(__imp__sub_83178948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,15304
	ctx.r3.s64 = ctx.r11.s64 + 15304;
	// b 0x83047ea0
	sub_83047EA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83178954"))) PPC_WEAK_FUNC(sub_83178954);
PPC_FUNC_IMPL(__imp__sub_83178954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178958"))) PPC_WEAK_FUNC(sub_83178958);
PPC_FUNC_IMPL(__imp__sub_83178958) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317895C"))) PPC_WEAK_FUNC(sub_8317895C);
PPC_FUNC_IMPL(__imp__sub_8317895C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178960"))) PPC_WEAK_FUNC(sub_83178960);
PPC_FUNC_IMPL(__imp__sub_83178960) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178964"))) PPC_WEAK_FUNC(sub_83178964);
PPC_FUNC_IMPL(__imp__sub_83178964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178968"))) PPC_WEAK_FUNC(sub_83178968);
PPC_FUNC_IMPL(__imp__sub_83178968) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317896C"))) PPC_WEAK_FUNC(sub_8317896C);
PPC_FUNC_IMPL(__imp__sub_8317896C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178970"))) PPC_WEAK_FUNC(sub_83178970);
PPC_FUNC_IMPL(__imp__sub_83178970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178974"))) PPC_WEAK_FUNC(sub_83178974);
PPC_FUNC_IMPL(__imp__sub_83178974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178978"))) PPC_WEAK_FUNC(sub_83178978);
PPC_FUNC_IMPL(__imp__sub_83178978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317897C"))) PPC_WEAK_FUNC(sub_8317897C);
PPC_FUNC_IMPL(__imp__sub_8317897C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178980"))) PPC_WEAK_FUNC(sub_83178980);
PPC_FUNC_IMPL(__imp__sub_83178980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178984"))) PPC_WEAK_FUNC(sub_83178984);
PPC_FUNC_IMPL(__imp__sub_83178984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178988"))) PPC_WEAK_FUNC(sub_83178988);
PPC_FUNC_IMPL(__imp__sub_83178988) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317898C"))) PPC_WEAK_FUNC(sub_8317898C);
PPC_FUNC_IMPL(__imp__sub_8317898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178990"))) PPC_WEAK_FUNC(sub_83178990);
PPC_FUNC_IMPL(__imp__sub_83178990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178994"))) PPC_WEAK_FUNC(sub_83178994);
PPC_FUNC_IMPL(__imp__sub_83178994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178998"))) PPC_WEAK_FUNC(sub_83178998);
PPC_FUNC_IMPL(__imp__sub_83178998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317899C"))) PPC_WEAK_FUNC(sub_8317899C);
PPC_FUNC_IMPL(__imp__sub_8317899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831789A0"))) PPC_WEAK_FUNC(sub_831789A0);
PPC_FUNC_IMPL(__imp__sub_831789A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831789A4"))) PPC_WEAK_FUNC(sub_831789A4);
PPC_FUNC_IMPL(__imp__sub_831789A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831789A8"))) PPC_WEAK_FUNC(sub_831789A8);
PPC_FUNC_IMPL(__imp__sub_831789A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831789AC"))) PPC_WEAK_FUNC(sub_831789AC);
PPC_FUNC_IMPL(__imp__sub_831789AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831789B0"))) PPC_WEAK_FUNC(sub_831789B0);
PPC_FUNC_IMPL(__imp__sub_831789B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831789B4"))) PPC_WEAK_FUNC(sub_831789B4);
PPC_FUNC_IMPL(__imp__sub_831789B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831789B8"))) PPC_WEAK_FUNC(sub_831789B8);
PPC_FUNC_IMPL(__imp__sub_831789B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831789BC"))) PPC_WEAK_FUNC(sub_831789BC);
PPC_FUNC_IMPL(__imp__sub_831789BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831789C0"))) PPC_WEAK_FUNC(sub_831789C0);
PPC_FUNC_IMPL(__imp__sub_831789C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,-3784
	ctx.r11.s64 = ctx.r11.s64 + -3784;
	// stw r11,-11132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11132, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831789D4"))) PPC_WEAK_FUNC(sub_831789D4);
PPC_FUNC_IMPL(__imp__sub_831789D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831789D8"))) PPC_WEAK_FUNC(sub_831789D8);
PPC_FUNC_IMPL(__imp__sub_831789D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,-3784
	ctx.r11.s64 = ctx.r11.s64 + -3784;
	// stw r11,-11124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831789EC"))) PPC_WEAK_FUNC(sub_831789EC);
PPC_FUNC_IMPL(__imp__sub_831789EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831789F0"))) PPC_WEAK_FUNC(sub_831789F0);
PPC_FUNC_IMPL(__imp__sub_831789F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831789F4"))) PPC_WEAK_FUNC(sub_831789F4);
PPC_FUNC_IMPL(__imp__sub_831789F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831789F8"))) PPC_WEAK_FUNC(sub_831789F8);
PPC_FUNC_IMPL(__imp__sub_831789F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831789FC"))) PPC_WEAK_FUNC(sub_831789FC);
PPC_FUNC_IMPL(__imp__sub_831789FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178A00"))) PPC_WEAK_FUNC(sub_83178A00);
PPC_FUNC_IMPL(__imp__sub_83178A00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178A04"))) PPC_WEAK_FUNC(sub_83178A04);
PPC_FUNC_IMPL(__imp__sub_83178A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178A08"))) PPC_WEAK_FUNC(sub_83178A08);
PPC_FUNC_IMPL(__imp__sub_83178A08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178A0C"))) PPC_WEAK_FUNC(sub_83178A0C);
PPC_FUNC_IMPL(__imp__sub_83178A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178A10"))) PPC_WEAK_FUNC(sub_83178A10);
PPC_FUNC_IMPL(__imp__sub_83178A10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178A14"))) PPC_WEAK_FUNC(sub_83178A14);
PPC_FUNC_IMPL(__imp__sub_83178A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178A18"))) PPC_WEAK_FUNC(sub_83178A18);
PPC_FUNC_IMPL(__imp__sub_83178A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,18616
	ctx.r3.s64 = ctx.r11.s64 + 18616;
	// b 0x8308ce18
	sub_8308CE18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83178A24"))) PPC_WEAK_FUNC(sub_83178A24);
PPC_FUNC_IMPL(__imp__sub_83178A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178A28"))) PPC_WEAK_FUNC(sub_83178A28);
PPC_FUNC_IMPL(__imp__sub_83178A28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178A2C"))) PPC_WEAK_FUNC(sub_83178A2C);
PPC_FUNC_IMPL(__imp__sub_83178A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178A30"))) PPC_WEAK_FUNC(sub_83178A30);
PPC_FUNC_IMPL(__imp__sub_83178A30) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r31,r11,-10736
	ctx.r31.s64 = ctx.r11.s64 + -10736;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x83178a5c
	if (ctx.cr6.lt) goto loc_83178A5C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82691540
	ctx.lr = 0x83178A5C;
	sub_82691540(ctx, base);
loc_83178A5C:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83178A88"))) PPC_WEAK_FUNC(sub_83178A88);
PPC_FUNC_IMPL(__imp__sub_83178A88) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r31,r11,-10708
	ctx.r31.s64 = ctx.r11.s64 + -10708;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x83178ab4
	if (ctx.cr6.lt) goto loc_83178AB4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82691540
	ctx.lr = 0x83178AB4;
	sub_82691540(ctx, base);
loc_83178AB4:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83178AE0"))) PPC_WEAK_FUNC(sub_83178AE0);
PPC_FUNC_IMPL(__imp__sub_83178AE0) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r31,r11,-10668
	ctx.r31.s64 = ctx.r11.s64 + -10668;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x83178b0c
	if (ctx.cr6.lt) goto loc_83178B0C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82691540
	ctx.lr = 0x83178B0C;
	sub_82691540(ctx, base);
loc_83178B0C:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83178B38"))) PPC_WEAK_FUNC(sub_83178B38);
PPC_FUNC_IMPL(__imp__sub_83178B38) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r31,r11,-10640
	ctx.r31.s64 = ctx.r11.s64 + -10640;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x83178b64
	if (ctx.cr6.lt) goto loc_83178B64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82691540
	ctx.lr = 0x83178B64;
	sub_82691540(ctx, base);
loc_83178B64:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83178B90"))) PPC_WEAK_FUNC(sub_83178B90);
PPC_FUNC_IMPL(__imp__sub_83178B90) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r31,r11,-10600
	ctx.r31.s64 = ctx.r11.s64 + -10600;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x83178bbc
	if (ctx.cr6.lt) goto loc_83178BBC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82691540
	ctx.lr = 0x83178BBC;
	sub_82691540(ctx, base);
loc_83178BBC:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83178BE8"))) PPC_WEAK_FUNC(sub_83178BE8);
PPC_FUNC_IMPL(__imp__sub_83178BE8) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r31,r11,-10572
	ctx.r31.s64 = ctx.r11.s64 + -10572;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x83178c14
	if (ctx.cr6.lt) goto loc_83178C14;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82691540
	ctx.lr = 0x83178C14;
	sub_82691540(ctx, base);
loc_83178C14:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83178C40"))) PPC_WEAK_FUNC(sub_83178C40);
PPC_FUNC_IMPL(__imp__sub_83178C40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178C44"))) PPC_WEAK_FUNC(sub_83178C44);
PPC_FUNC_IMPL(__imp__sub_83178C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178C48"))) PPC_WEAK_FUNC(sub_83178C48);
PPC_FUNC_IMPL(__imp__sub_83178C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,-8172
	ctx.r11.s64 = ctx.r11.s64 + -8172;
	// addi r10,r10,-29696
	ctx.r10.s64 = ctx.r10.s64 + -29696;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83178C7C"))) PPC_WEAK_FUNC(sub_83178C7C);
PPC_FUNC_IMPL(__imp__sub_83178C7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178C80"))) PPC_WEAK_FUNC(sub_83178C80);
PPC_FUNC_IMPL(__imp__sub_83178C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,-29196
	ctx.r11.s64 = ctx.r11.s64 + -29196;
	// stw r11,-8132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8132, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83178C94"))) PPC_WEAK_FUNC(sub_83178C94);
PPC_FUNC_IMPL(__imp__sub_83178C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83178C98"))) PPC_WEAK_FUNC(sub_83178C98);
PPC_FUNC_IMPL(__imp__sub_83178C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,20360
	ctx.r3.s64 = ctx.r11.s64 + 20360;
	// b 0x830e8b18
	sub_830E8B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317A354"))) PPC_WEAK_FUNC(sub_8317A354);
PPC_FUNC_IMPL(__imp__sub_8317A354) {
	PPC_FUNC_PROLOGUE();
loc_8317A354:
	// b 0x8317a354
	goto loc_8317A354;
}

__attribute__((alias("__imp__sub_8317A358"))) PPC_WEAK_FUNC(sub_8317A358);
PPC_FUNC_IMPL(__imp__sub_8317A358) {
	PPC_FUNC_PROLOGUE();
	// .long 0x485645
}

__attribute__((alias("__imp__sub_8317A35C"))) PPC_WEAK_FUNC(sub_8317A35C);
PPC_FUNC_IMPL(__imp__sub_8317A35C) {
	PPC_FUNC_PROLOGUE();
loc_8317A35C:
	// b 0x8317a35c
	goto loc_8317A35C;
}

__attribute__((alias("__imp__sub_8317A360"))) PPC_WEAK_FUNC(sub_8317A360);
PPC_FUNC_IMPL(__imp__sub_8317A360) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317A364"))) PPC_WEAK_FUNC(sub_8317A364);
PPC_FUNC_IMPL(__imp__sub_8317A364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317A368"))) PPC_WEAK_FUNC(sub_8317A368);
PPC_FUNC_IMPL(__imp__sub_8317A368) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317A36C"))) PPC_WEAK_FUNC(sub_8317A36C);
PPC_FUNC_IMPL(__imp__sub_8317A36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8317A370"))) PPC_WEAK_FUNC(sub_8317A370);
PPC_FUNC_IMPL(__imp__sub_8317A370) {
	PPC_FUNC_PROLOGUE();
	// .long 0x3000
}

__attribute__((alias("__imp__sub_8317A374"))) PPC_WEAK_FUNC(sub_8317A374);
PPC_FUNC_IMPL(__imp__sub_8317A374) {
	PPC_FUNC_PROLOGUE();
	// attn 
	// .long 0xb1
}

__attribute__((alias("__imp__sub_8317A37C"))) PPC_WEAK_FUNC(sub_8317A37C);
PPC_FUNC_IMPL(__imp__sub_8317A37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1
}

__attribute__((alias("__imp__sub_8317A380"))) PPC_WEAK_FUNC(sub_8317A380);
PPC_FUNC_IMPL(__imp__sub_8317A380) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b0898
}

__attribute__((alias("__imp__sub_8317A384"))) PPC_WEAK_FUNC(sub_8317A384);
PPC_FUNC_IMPL(__imp__sub_8317A384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x742bd0
}

__attribute__((alias("__imp__sub_8317A388"))) PPC_WEAK_FUNC(sub_8317A388);
PPC_FUNC_IMPL(__imp__sub_8317A388) {
	PPC_FUNC_PROLOGUE();
	// .long 0x742c50
}

__attribute__((alias("__imp__sub_8317A38C"))) PPC_WEAK_FUNC(sub_8317A38C);
PPC_FUNC_IMPL(__imp__sub_8317A38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b44a8
}

__attribute__((alias("__imp__sub_8317A390"))) PPC_WEAK_FUNC(sub_8317A390);
PPC_FUNC_IMPL(__imp__sub_8317A390) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2421b0
}

__attribute__((alias("__imp__sub_8317A394"))) PPC_WEAK_FUNC(sub_8317A394);
PPC_FUNC_IMPL(__imp__sub_8317A394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x242158
}

__attribute__((alias("__imp__sub_8317A398"))) PPC_WEAK_FUNC(sub_8317A398);
PPC_FUNC_IMPL(__imp__sub_8317A398) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b5fb8
}

__attribute__((alias("__imp__sub_8317A39C"))) PPC_WEAK_FUNC(sub_8317A39C);
PPC_FUNC_IMPL(__imp__sub_8317A39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b5ef8
}

__attribute__((alias("__imp__sub_8317A3A0"))) PPC_WEAK_FUNC(sub_8317A3A0);
PPC_FUNC_IMPL(__imp__sub_8317A3A0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b02a8
}

__attribute__((alias("__imp__sub_8317A3A4"))) PPC_WEAK_FUNC(sub_8317A3A4);
PPC_FUNC_IMPL(__imp__sub_8317A3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b20f8
}

__attribute__((alias("__imp__sub_8317A3A8"))) PPC_WEAK_FUNC(sub_8317A3A8);
PPC_FUNC_IMPL(__imp__sub_8317A3A8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b4620
}

__attribute__((alias("__imp__sub_8317A3AC"))) PPC_WEAK_FUNC(sub_8317A3AC);
PPC_FUNC_IMPL(__imp__sub_8317A3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x241dc8
}

__attribute__((alias("__imp__sub_8317A3B0"))) PPC_WEAK_FUNC(sub_8317A3B0);
PPC_FUNC_IMPL(__imp__sub_8317A3B0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b02d8
}

__attribute__((alias("__imp__sub_8317A3B4"))) PPC_WEAK_FUNC(sub_8317A3B4);
PPC_FUNC_IMPL(__imp__sub_8317A3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b05f8
}

__attribute__((alias("__imp__sub_8317A3B8"))) PPC_WEAK_FUNC(sub_8317A3B8);
PPC_FUNC_IMPL(__imp__sub_8317A3B8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b0910
}

__attribute__((alias("__imp__sub_8317A3BC"))) PPC_WEAK_FUNC(sub_8317A3BC);
PPC_FUNC_IMPL(__imp__sub_8317A3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c9040
}

__attribute__((alias("__imp__sub_8317A3C0"))) PPC_WEAK_FUNC(sub_8317A3C0);
PPC_FUNC_IMPL(__imp__sub_8317A3C0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c8dd8
}

__attribute__((alias("__imp__sub_8317A3C4"))) PPC_WEAK_FUNC(sub_8317A3C4);
PPC_FUNC_IMPL(__imp__sub_8317A3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x241f38
}

__attribute__((alias("__imp__sub_8317A3C8"))) PPC_WEAK_FUNC(sub_8317A3C8);
PPC_FUNC_IMPL(__imp__sub_8317A3C8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x241f00
}

__attribute__((alias("__imp__sub_8317A3CC"))) PPC_WEAK_FUNC(sub_8317A3CC);
PPC_FUNC_IMPL(__imp__sub_8317A3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b30f8
}

__attribute__((alias("__imp__sub_8317A3D0"))) PPC_WEAK_FUNC(sub_8317A3D0);
PPC_FUNC_IMPL(__imp__sub_8317A3D0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b2ff0
}

__attribute__((alias("__imp__sub_8317A3D4"))) PPC_WEAK_FUNC(sub_8317A3D4);
PPC_FUNC_IMPL(__imp__sub_8317A3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b3070
}

__attribute__((alias("__imp__sub_8317A3D8"))) PPC_WEAK_FUNC(sub_8317A3D8);
PPC_FUNC_IMPL(__imp__sub_8317A3D8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b23c8
}

__attribute__((alias("__imp__sub_8317A3DC"))) PPC_WEAK_FUNC(sub_8317A3DC);
PPC_FUNC_IMPL(__imp__sub_8317A3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x242000
}

__attribute__((alias("__imp__sub_8317A3E0"))) PPC_WEAK_FUNC(sub_8317A3E0);
PPC_FUNC_IMPL(__imp__sub_8317A3E0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x7427e0
}

__attribute__((alias("__imp__sub_8317A3E4"))) PPC_WEAK_FUNC(sub_8317A3E4);
PPC_FUNC_IMPL(__imp__sub_8317A3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x242000
}

__attribute__((alias("__imp__sub_8317A3E8"))) PPC_WEAK_FUNC(sub_8317A3E8);
PPC_FUNC_IMPL(__imp__sub_8317A3E8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b4530
}

__attribute__((alias("__imp__sub_8317A3EC"))) PPC_WEAK_FUNC(sub_8317A3EC);
PPC_FUNC_IMPL(__imp__sub_8317A3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b93f0
}

__attribute__((alias("__imp__sub_8317A3F0"))) PPC_WEAK_FUNC(sub_8317A3F0);
PPC_FUNC_IMPL(__imp__sub_8317A3F0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b5ea0
}

__attribute__((alias("__imp__sub_8317A3F4"))) PPC_WEAK_FUNC(sub_8317A3F4);
PPC_FUNC_IMPL(__imp__sub_8317A3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6ddbf0
}

__attribute__((alias("__imp__sub_8317A3F8"))) PPC_WEAK_FUNC(sub_8317A3F8);
PPC_FUNC_IMPL(__imp__sub_8317A3F8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b27e0
}

__attribute__((alias("__imp__sub_8317A3FC"))) PPC_WEAK_FUNC(sub_8317A3FC);
PPC_FUNC_IMPL(__imp__sub_8317A3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b1970
}

__attribute__((alias("__imp__sub_8317A400"))) PPC_WEAK_FUNC(sub_8317A400);
PPC_FUNC_IMPL(__imp__sub_8317A400) {
	PPC_FUNC_PROLOGUE();
	// attn 
	// .long 0x6b46a8
}

__attribute__((alias("__imp__sub_8317A408"))) PPC_WEAK_FUNC(sub_8317A408);
PPC_FUNC_IMPL(__imp__sub_8317A408) {
	PPC_FUNC_PROLOGUE();
	// .long 0x241f70
}

__attribute__((alias("__imp__sub_8317A40C"))) PPC_WEAK_FUNC(sub_8317A40C);
PPC_FUNC_IMPL(__imp__sub_8317A40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b2428
}

__attribute__((alias("__imp__sub_8317A410"))) PPC_WEAK_FUNC(sub_8317A410);
PPC_FUNC_IMPL(__imp__sub_8317A410) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b2848
}

__attribute__((alias("__imp__sub_8317A414"))) PPC_WEAK_FUNC(sub_8317A414);
PPC_FUNC_IMPL(__imp__sub_8317A414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b3ad8
}

__attribute__((alias("__imp__sub_8317A418"))) PPC_WEAK_FUNC(sub_8317A418);
PPC_FUNC_IMPL(__imp__sub_8317A418) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b47b8
}

__attribute__((alias("__imp__sub_8317A41C"))) PPC_WEAK_FUNC(sub_8317A41C);
PPC_FUNC_IMPL(__imp__sub_8317A41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b3b50
}

__attribute__((alias("__imp__sub_8317A420"))) PPC_WEAK_FUNC(sub_8317A420);
PPC_FUNC_IMPL(__imp__sub_8317A420) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b4860
}

__attribute__((alias("__imp__sub_8317A424"))) PPC_WEAK_FUNC(sub_8317A424);
PPC_FUNC_IMPL(__imp__sub_8317A424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x12d7480
}

__attribute__((alias("__imp__sub_8317A428"))) PPC_WEAK_FUNC(sub_8317A428);
PPC_FUNC_IMPL(__imp__sub_8317A428) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2420c0
}

__attribute__((alias("__imp__sub_8317A42C"))) PPC_WEAK_FUNC(sub_8317A42C);
PPC_FUNC_IMPL(__imp__sub_8317A42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x241dc0
}

__attribute__((alias("__imp__sub_8317A430"))) PPC_WEAK_FUNC(sub_8317A430);
PPC_FUNC_IMPL(__imp__sub_8317A430) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2420b0
}

__attribute__((alias("__imp__sub_8317A434"))) PPC_WEAK_FUNC(sub_8317A434);
PPC_FUNC_IMPL(__imp__sub_8317A434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2420d0
}

__attribute__((alias("__imp__sub_8317A438"))) PPC_WEAK_FUNC(sub_8317A438);
PPC_FUNC_IMPL(__imp__sub_8317A438) {
	PPC_FUNC_PROLOGUE();
	// .long 0x241e20
}

__attribute__((alias("__imp__sub_8317A43C"))) PPC_WEAK_FUNC(sub_8317A43C);
PPC_FUNC_IMPL(__imp__sub_8317A43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x241e68
}

__attribute__((alias("__imp__sub_8317A440"))) PPC_WEAK_FUNC(sub_8317A440);
PPC_FUNC_IMPL(__imp__sub_8317A440) {
	PPC_FUNC_PROLOGUE();
	// .long 0x241fd8
}

__attribute__((alias("__imp__sub_8317A444"))) PPC_WEAK_FUNC(sub_8317A444);
PPC_FUNC_IMPL(__imp__sub_8317A444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2420e0
}

__attribute__((alias("__imp__sub_8317A448"))) PPC_WEAK_FUNC(sub_8317A448);
PPC_FUNC_IMPL(__imp__sub_8317A448) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b5228
}

__attribute__((alias("__imp__sub_8317A44C"))) PPC_WEAK_FUNC(sub_8317A44C);
PPC_FUNC_IMPL(__imp__sub_8317A44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b4df0
}

__attribute__((alias("__imp__sub_8317A450"))) PPC_WEAK_FUNC(sub_8317A450);
PPC_FUNC_IMPL(__imp__sub_8317A450) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b5018
}

__attribute__((alias("__imp__sub_8317A454"))) PPC_WEAK_FUNC(sub_8317A454);
PPC_FUNC_IMPL(__imp__sub_8317A454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b0338
}

__attribute__((alias("__imp__sub_8317A458"))) PPC_WEAK_FUNC(sub_8317A458);
PPC_FUNC_IMPL(__imp__sub_8317A458) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6bc1b0
}

__attribute__((alias("__imp__sub_8317A45C"))) PPC_WEAK_FUNC(sub_8317A45C);
PPC_FUNC_IMPL(__imp__sub_8317A45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b4080
}

__attribute__((alias("__imp__sub_8317A460"))) PPC_WEAK_FUNC(sub_8317A460);
PPC_FUNC_IMPL(__imp__sub_8317A460) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c2578
}

__attribute__((alias("__imp__sub_8317A464"))) PPC_WEAK_FUNC(sub_8317A464);
PPC_FUNC_IMPL(__imp__sub_8317A464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x7ae450
}

__attribute__((alias("__imp__sub_8317A468"))) PPC_WEAK_FUNC(sub_8317A468);
PPC_FUNC_IMPL(__imp__sub_8317A468) {
	PPC_FUNC_PROLOGUE();
	// .long 0x742468
}

__attribute__((alias("__imp__sub_8317A46C"))) PPC_WEAK_FUNC(sub_8317A46C);
PPC_FUNC_IMPL(__imp__sub_8317A46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b4348
}

__attribute__((alias("__imp__sub_8317A470"))) PPC_WEAK_FUNC(sub_8317A470);
PPC_FUNC_IMPL(__imp__sub_8317A470) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b4298
}

__attribute__((alias("__imp__sub_8317A474"))) PPC_WEAK_FUNC(sub_8317A474);
PPC_FUNC_IMPL(__imp__sub_8317A474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x77ab80
}

__attribute__((alias("__imp__sub_8317A478"))) PPC_WEAK_FUNC(sub_8317A478);
PPC_FUNC_IMPL(__imp__sub_8317A478) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b3940
}

__attribute__((alias("__imp__sub_8317A47C"))) PPC_WEAK_FUNC(sub_8317A47C);
PPC_FUNC_IMPL(__imp__sub_8317A47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b2f88
}

__attribute__((alias("__imp__sub_8317A480"))) PPC_WEAK_FUNC(sub_8317A480);
PPC_FUNC_IMPL(__imp__sub_8317A480) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b3bd0
}

__attribute__((alias("__imp__sub_8317A484"))) PPC_WEAK_FUNC(sub_8317A484);
PPC_FUNC_IMPL(__imp__sub_8317A484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x742730
}

__attribute__((alias("__imp__sub_8317A488"))) PPC_WEAK_FUNC(sub_8317A488);
PPC_FUNC_IMPL(__imp__sub_8317A488) {
	PPC_FUNC_PROLOGUE();
	// .long 0x742780
}

__attribute__((alias("__imp__sub_8317A48C"))) PPC_WEAK_FUNC(sub_8317A48C);
PPC_FUNC_IMPL(__imp__sub_8317A48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c8f88
}

__attribute__((alias("__imp__sub_8317A490"))) PPC_WEAK_FUNC(sub_8317A490);
PPC_FUNC_IMPL(__imp__sub_8317A490) {
	PPC_FUNC_PROLOGUE();
	// .long 0x12d7488
}

__attribute__((alias("__imp__sub_8317A494"))) PPC_WEAK_FUNC(sub_8317A494);
PPC_FUNC_IMPL(__imp__sub_8317A494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x7ae2a0
}

__attribute__((alias("__imp__sub_8317A498"))) PPC_WEAK_FUNC(sub_8317A498);
PPC_FUNC_IMPL(__imp__sub_8317A498) {
	PPC_FUNC_PROLOGUE();
	// .long 0x7ae7b8
}

__attribute__((alias("__imp__sub_8317A49C"))) PPC_WEAK_FUNC(sub_8317A49C);
PPC_FUNC_IMPL(__imp__sub_8317A49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x71f770
}

__attribute__((alias("__imp__sub_8317A4A0"))) PPC_WEAK_FUNC(sub_8317A4A0);
PPC_FUNC_IMPL(__imp__sub_8317A4A0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b4a08
}

__attribute__((alias("__imp__sub_8317A4A4"))) PPC_WEAK_FUNC(sub_8317A4A4);
PPC_FUNC_IMPL(__imp__sub_8317A4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b1bc8
}

__attribute__((alias("__imp__sub_8317A4A8"))) PPC_WEAK_FUNC(sub_8317A4A8);
PPC_FUNC_IMPL(__imp__sub_8317A4A8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c2430
}

__attribute__((alias("__imp__sub_8317A4AC"))) PPC_WEAK_FUNC(sub_8317A4AC);
PPC_FUNC_IMPL(__imp__sub_8317A4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c2898
}

__attribute__((alias("__imp__sub_8317A4B0"))) PPC_WEAK_FUNC(sub_8317A4B0);
PPC_FUNC_IMPL(__imp__sub_8317A4B0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b3610
}

__attribute__((alias("__imp__sub_8317A4B4"))) PPC_WEAK_FUNC(sub_8317A4B4);
PPC_FUNC_IMPL(__imp__sub_8317A4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b3488
}

__attribute__((alias("__imp__sub_8317A4B8"))) PPC_WEAK_FUNC(sub_8317A4B8);
PPC_FUNC_IMPL(__imp__sub_8317A4B8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x7424e0
}

__attribute__((alias("__imp__sub_8317A4BC"))) PPC_WEAK_FUNC(sub_8317A4BC);
PPC_FUNC_IMPL(__imp__sub_8317A4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x742080
}

__attribute__((alias("__imp__sub_8317A4C0"))) PPC_WEAK_FUNC(sub_8317A4C0);
PPC_FUNC_IMPL(__imp__sub_8317A4C0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x7aeb10
}

__attribute__((alias("__imp__sub_8317A4C4"))) PPC_WEAK_FUNC(sub_8317A4C4);
PPC_FUNC_IMPL(__imp__sub_8317A4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c2b78
}

__attribute__((alias("__imp__sub_8317A4C8"))) PPC_WEAK_FUNC(sub_8317A4C8);
PPC_FUNC_IMPL(__imp__sub_8317A4C8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b3cd0
}

__attribute__((alias("__imp__sub_8317A4CC"))) PPC_WEAK_FUNC(sub_8317A4CC);
PPC_FUNC_IMPL(__imp__sub_8317A4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b2f78
}

__attribute__((alias("__imp__sub_8317A4D0"))) PPC_WEAK_FUNC(sub_8317A4D0);
PPC_FUNC_IMPL(__imp__sub_8317A4D0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b3cd0
}

__attribute__((alias("__imp__sub_8317A4D4"))) PPC_WEAK_FUNC(sub_8317A4D4);
PPC_FUNC_IMPL(__imp__sub_8317A4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b3de8
}

__attribute__((alias("__imp__sub_8317A4D8"))) PPC_WEAK_FUNC(sub_8317A4D8);
PPC_FUNC_IMPL(__imp__sub_8317A4D8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b0848
}

__attribute__((alias("__imp__sub_8317A4DC"))) PPC_WEAK_FUNC(sub_8317A4DC);
PPC_FUNC_IMPL(__imp__sub_8317A4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6dd8e8
}

__attribute__((alias("__imp__sub_8317A4E0"))) PPC_WEAK_FUNC(sub_8317A4E0);
PPC_FUNC_IMPL(__imp__sub_8317A4E0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b3ce8
}

__attribute__((alias("__imp__sub_8317A4E4"))) PPC_WEAK_FUNC(sub_8317A4E4);
PPC_FUNC_IMPL(__imp__sub_8317A4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c2468
}

__attribute__((alias("__imp__sub_8317A4E8"))) PPC_WEAK_FUNC(sub_8317A4E8);
PPC_FUNC_IMPL(__imp__sub_8317A4E8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c8ac0
}

__attribute__((alias("__imp__sub_8317A4EC"))) PPC_WEAK_FUNC(sub_8317A4EC);
PPC_FUNC_IMPL(__imp__sub_8317A4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b24b0
}

__attribute__((alias("__imp__sub_8317A4F0"))) PPC_WEAK_FUNC(sub_8317A4F0);
PPC_FUNC_IMPL(__imp__sub_8317A4F0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x71f878
}

__attribute__((alias("__imp__sub_8317A4F4"))) PPC_WEAK_FUNC(sub_8317A4F4);
PPC_FUNC_IMPL(__imp__sub_8317A4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x7aea18
}

__attribute__((alias("__imp__sub_8317A4F8"))) PPC_WEAK_FUNC(sub_8317A4F8);
PPC_FUNC_IMPL(__imp__sub_8317A4F8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x7ae938
}

__attribute__((alias("__imp__sub_8317A4FC"))) PPC_WEAK_FUNC(sub_8317A4FC);
PPC_FUNC_IMPL(__imp__sub_8317A4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x7ae0e0
}

__attribute__((alias("__imp__sub_8317A500"))) PPC_WEAK_FUNC(sub_8317A500);
PPC_FUNC_IMPL(__imp__sub_8317A500) {
	PPC_FUNC_PROLOGUE();
	// .long 0x7ae578
}

__attribute__((alias("__imp__sub_8317A504"))) PPC_WEAK_FUNC(sub_8317A504);
PPC_FUNC_IMPL(__imp__sub_8317A504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x7422b0
}

__attribute__((alias("__imp__sub_8317A508"))) PPC_WEAK_FUNC(sub_8317A508);
PPC_FUNC_IMPL(__imp__sub_8317A508) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c26e0
}

__attribute__((alias("__imp__sub_8317A50C"))) PPC_WEAK_FUNC(sub_8317A50C);
PPC_FUNC_IMPL(__imp__sub_8317A50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c24c8
}

__attribute__((alias("__imp__sub_8317A510"))) PPC_WEAK_FUNC(sub_8317A510);
PPC_FUNC_IMPL(__imp__sub_8317A510) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b24d8
}

__attribute__((alias("__imp__sub_8317A514"))) PPC_WEAK_FUNC(sub_8317A514);
PPC_FUNC_IMPL(__imp__sub_8317A514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c2488
}

__attribute__((alias("__imp__sub_8317A518"))) PPC_WEAK_FUNC(sub_8317A518);
PPC_FUNC_IMPL(__imp__sub_8317A518) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c2498
}

__attribute__((alias("__imp__sub_8317A51C"))) PPC_WEAK_FUNC(sub_8317A51C);
PPC_FUNC_IMPL(__imp__sub_8317A51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c2490
}

__attribute__((alias("__imp__sub_8317A520"))) PPC_WEAK_FUNC(sub_8317A520);
PPC_FUNC_IMPL(__imp__sub_8317A520) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c24b0
}

__attribute__((alias("__imp__sub_8317A524"))) PPC_WEAK_FUNC(sub_8317A524);
PPC_FUNC_IMPL(__imp__sub_8317A524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b1b88
}

__attribute__((alias("__imp__sub_8317A528"))) PPC_WEAK_FUNC(sub_8317A528);
PPC_FUNC_IMPL(__imp__sub_8317A528) {
	PPC_FUNC_PROLOGUE();
	// .long 0x241f78
}

__attribute__((alias("__imp__sub_8317A52C"))) PPC_WEAK_FUNC(sub_8317A52C);
PPC_FUNC_IMPL(__imp__sub_8317A52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x242b00
}

__attribute__((alias("__imp__sub_8317A530"))) PPC_WEAK_FUNC(sub_8317A530);
PPC_FUNC_IMPL(__imp__sub_8317A530) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b24a0
}

__attribute__((alias("__imp__sub_8317A534"))) PPC_WEAK_FUNC(sub_8317A534);
PPC_FUNC_IMPL(__imp__sub_8317A534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b2f68
}

__attribute__((alias("__imp__sub_8317A538"))) PPC_WEAK_FUNC(sub_8317A538);
PPC_FUNC_IMPL(__imp__sub_8317A538) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b3938
}

__attribute__((alias("__imp__sub_8317A53C"))) PPC_WEAK_FUNC(sub_8317A53C);
PPC_FUNC_IMPL(__imp__sub_8317A53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b1da8
}

__attribute__((alias("__imp__sub_8317A540"))) PPC_WEAK_FUNC(sub_8317A540);
PPC_FUNC_IMPL(__imp__sub_8317A540) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b3c00
}

__attribute__((alias("__imp__sub_8317A544"))) PPC_WEAK_FUNC(sub_8317A544);
PPC_FUNC_IMPL(__imp__sub_8317A544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x77ab80
}

__attribute__((alias("__imp__sub_8317A548"))) PPC_WEAK_FUNC(sub_8317A548);
PPC_FUNC_IMPL(__imp__sub_8317A548) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b24c0
}

__attribute__((alias("__imp__sub_8317A54C"))) PPC_WEAK_FUNC(sub_8317A54C);
PPC_FUNC_IMPL(__imp__sub_8317A54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c2180
}

__attribute__((alias("__imp__sub_8317A550"))) PPC_WEAK_FUNC(sub_8317A550);
PPC_FUNC_IMPL(__imp__sub_8317A550) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c8ae8
}

__attribute__((alias("__imp__sub_8317A554"))) PPC_WEAK_FUNC(sub_8317A554);
PPC_FUNC_IMPL(__imp__sub_8317A554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x742338
}

__attribute__((alias("__imp__sub_8317A558"))) PPC_WEAK_FUNC(sub_8317A558);
PPC_FUNC_IMPL(__imp__sub_8317A558) {
	PPC_FUNC_PROLOGUE();
	// .long 0x742628
}

__attribute__((alias("__imp__sub_8317A55C"))) PPC_WEAK_FUNC(sub_8317A55C);
PPC_FUNC_IMPL(__imp__sub_8317A55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x742230
}

__attribute__((alias("__imp__sub_8317A560"))) PPC_WEAK_FUNC(sub_8317A560);
PPC_FUNC_IMPL(__imp__sub_8317A560) {
	PPC_FUNC_PROLOGUE();
	// .long 0x742138
}

__attribute__((alias("__imp__sub_8317A564"))) PPC_WEAK_FUNC(sub_8317A564);
PPC_FUNC_IMPL(__imp__sub_8317A564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b1d98
}

__attribute__((alias("__imp__sub_8317A568"))) PPC_WEAK_FUNC(sub_8317A568);
PPC_FUNC_IMPL(__imp__sub_8317A568) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b2088
}

__attribute__((alias("__imp__sub_8317A56C"))) PPC_WEAK_FUNC(sub_8317A56C);
PPC_FUNC_IMPL(__imp__sub_8317A56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b1fc8
}

__attribute__((alias("__imp__sub_8317A570"))) PPC_WEAK_FUNC(sub_8317A570);
PPC_FUNC_IMPL(__imp__sub_8317A570) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b1fd0
}

__attribute__((alias("__imp__sub_8317A574"))) PPC_WEAK_FUNC(sub_8317A574);
PPC_FUNC_IMPL(__imp__sub_8317A574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b39b8
}

__attribute__((alias("__imp__sub_8317A578"))) PPC_WEAK_FUNC(sub_8317A578);
PPC_FUNC_IMPL(__imp__sub_8317A578) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6ddbf0
}

__attribute__((alias("__imp__sub_8317A57C"))) PPC_WEAK_FUNC(sub_8317A57C);
PPC_FUNC_IMPL(__imp__sub_8317A57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c8e78
}

__attribute__((alias("__imp__sub_8317A580"))) PPC_WEAK_FUNC(sub_8317A580);
PPC_FUNC_IMPL(__imp__sub_8317A580) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6c24d8
}

__attribute__((alias("__imp__sub_8317A584"))) PPC_WEAK_FUNC(sub_8317A584);
PPC_FUNC_IMPL(__imp__sub_8317A584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b4598
}

__attribute__((alias("__imp__sub_8317A588"))) PPC_WEAK_FUNC(sub_8317A588);
PPC_FUNC_IMPL(__imp__sub_8317A588) {
	PPC_FUNC_PROLOGUE();
	// .long 0x7429e0
}

__attribute__((alias("__imp__sub_8317A58C"))) PPC_WEAK_FUNC(sub_8317A58C);
PPC_FUNC_IMPL(__imp__sub_8317A58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b19b0
}

__attribute__((alias("__imp__sub_8317A590"))) PPC_WEAK_FUNC(sub_8317A590);
PPC_FUNC_IMPL(__imp__sub_8317A590) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b1980
}

__attribute__((alias("__imp__sub_8317A594"))) PPC_WEAK_FUNC(sub_8317A594);
PPC_FUNC_IMPL(__imp__sub_8317A594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b4220
}

__attribute__((alias("__imp__sub_8317A598"))) PPC_WEAK_FUNC(sub_8317A598);
PPC_FUNC_IMPL(__imp__sub_8317A598) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b4710
}

__attribute__((alias("__imp__sub_8317A59C"))) PPC_WEAK_FUNC(sub_8317A59C);
PPC_FUNC_IMPL(__imp__sub_8317A59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b4168
}

__attribute__((alias("__imp__sub_8317A5A0"))) PPC_WEAK_FUNC(sub_8317A5A0);
PPC_FUNC_IMPL(__imp__sub_8317A5A0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b38e8
}

__attribute__((alias("__imp__sub_8317A5A4"))) PPC_WEAK_FUNC(sub_8317A5A4);
PPC_FUNC_IMPL(__imp__sub_8317A5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b2a78
}

__attribute__((alias("__imp__sub_8317A5A8"))) PPC_WEAK_FUNC(sub_8317A5A8);
PPC_FUNC_IMPL(__imp__sub_8317A5A8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x6b1fd8
}

__attribute__((alias("__imp__sub_8317A5AC"))) PPC_WEAK_FUNC(sub_8317A5AC);
PPC_FUNC_IMPL(__imp__sub_8317A5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x742520
}

__attribute__((alias("__imp__sub_8317A5B0"))) PPC_WEAK_FUNC(sub_8317A5B0);
PPC_FUNC_IMPL(__imp__sub_8317A5B0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x742850
}

