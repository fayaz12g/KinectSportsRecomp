#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83171360"))) PPC_WEAK_FUNC(sub_83171360);
PPC_FUNC_IMPL(__imp__sub_83171360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,9248
	ctx.r3.s64 = ctx.r11.s64 + 9248;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317136C"))) PPC_WEAK_FUNC(sub_8317136C);
PPC_FUNC_IMPL(__imp__sub_8317136C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171370"))) PPC_WEAK_FUNC(sub_83171370);
PPC_FUNC_IMPL(__imp__sub_83171370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,9336
	ctx.r3.s64 = ctx.r11.s64 + 9336;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317137C"))) PPC_WEAK_FUNC(sub_8317137C);
PPC_FUNC_IMPL(__imp__sub_8317137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171380"))) PPC_WEAK_FUNC(sub_83171380);
PPC_FUNC_IMPL(__imp__sub_83171380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,9424
	ctx.r3.s64 = ctx.r11.s64 + 9424;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317138C"))) PPC_WEAK_FUNC(sub_8317138C);
PPC_FUNC_IMPL(__imp__sub_8317138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171390"))) PPC_WEAK_FUNC(sub_83171390);
PPC_FUNC_IMPL(__imp__sub_83171390) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,9512
	ctx.r31.s64 = ctx.r11.s64 + 9512;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x831713B4;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x831713C0;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x831713C8;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x831713D8;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_831713F0"))) PPC_WEAK_FUNC(sub_831713F0);
PPC_FUNC_IMPL(__imp__sub_831713F0) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,9600
	ctx.r31.s64 = ctx.r11.s64 + 9600;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83171414;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83171420;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83171428;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83171438;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_83171450"))) PPC_WEAK_FUNC(sub_83171450);
PPC_FUNC_IMPL(__imp__sub_83171450) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,9688
	ctx.r31.s64 = ctx.r11.s64 + 9688;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83171474;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83171480;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83171488;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83171498;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_831714B0"))) PPC_WEAK_FUNC(sub_831714B0);
PPC_FUNC_IMPL(__imp__sub_831714B0) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,9776
	ctx.r31.s64 = ctx.r11.s64 + 9776;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x831714D4;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x831714E0;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x831714E8;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x831714F8;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_83171510"))) PPC_WEAK_FUNC(sub_83171510);
PPC_FUNC_IMPL(__imp__sub_83171510) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,9864
	ctx.r31.s64 = ctx.r11.s64 + 9864;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83171534;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83171540;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83171548;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83171558;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_83171570"))) PPC_WEAK_FUNC(sub_83171570);
PPC_FUNC_IMPL(__imp__sub_83171570) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,9952
	ctx.r31.s64 = ctx.r11.s64 + 9952;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83171594;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x831715A0;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x831715A8;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x831715B8;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_831715D0"))) PPC_WEAK_FUNC(sub_831715D0);
PPC_FUNC_IMPL(__imp__sub_831715D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10040
	ctx.r3.s64 = ctx.r11.s64 + 10040;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831715E4"))) PPC_WEAK_FUNC(sub_831715E4);
PPC_FUNC_IMPL(__imp__sub_831715E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831715E8"))) PPC_WEAK_FUNC(sub_831715E8);
PPC_FUNC_IMPL(__imp__sub_831715E8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x828d6eb8
	ctx.lr = 0x83171604;
	sub_828D6EB8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828f13a8
	ctx.lr = 0x8317160C;
	sub_828F13A8(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r31,r11,31512
	ctx.r31.s64 = ctx.r11.s64 + 31512;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83171624
	if (ctx.cr6.eq) goto loc_83171624;
	// bl 0x82241d18
	ctx.lr = 0x83171624;
	sub_82241D18(ctx, base);
loc_83171624:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x822c3ea8
	ctx.lr = 0x8317162C;
	sub_822C3EA8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,27340
	ctx.r11.s64 = ctx.r11.s64 + 27340;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8317164C"))) PPC_WEAK_FUNC(sub_8317164C);
PPC_FUNC_IMPL(__imp__sub_8317164C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171650"))) PPC_WEAK_FUNC(sub_83171650);
PPC_FUNC_IMPL(__imp__sub_83171650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10068
	ctx.r3.s64 = ctx.r11.s64 + 10068;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171664"))) PPC_WEAK_FUNC(sub_83171664);
PPC_FUNC_IMPL(__imp__sub_83171664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171668"))) PPC_WEAK_FUNC(sub_83171668);
PPC_FUNC_IMPL(__imp__sub_83171668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10096
	ctx.r3.s64 = ctx.r11.s64 + 10096;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317167C"))) PPC_WEAK_FUNC(sub_8317167C);
PPC_FUNC_IMPL(__imp__sub_8317167C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171680"))) PPC_WEAK_FUNC(sub_83171680);
PPC_FUNC_IMPL(__imp__sub_83171680) {
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
	// bl 0x8254dc90
	ctx.lr = 0x83171694;
	sub_8254DC90(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,10124
	ctx.r31.s64 = ctx.r11.s64 + 10124;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8254ddd0
	ctx.lr = 0x831716A4;
	sub_8254DDD0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822402c8
	ctx.lr = 0x831716B4;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_831716C8"))) PPC_WEAK_FUNC(sub_831716C8);
PPC_FUNC_IMPL(__imp__sub_831716C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,10208
	ctx.r3.s64 = ctx.r11.s64 + 10208;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831716D4"))) PPC_WEAK_FUNC(sub_831716D4);
PPC_FUNC_IMPL(__imp__sub_831716D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831716D8"))) PPC_WEAK_FUNC(sub_831716D8);
PPC_FUNC_IMPL(__imp__sub_831716D8) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,10296
	ctx.r31.s64 = ctx.r11.s64 + 10296;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x831716FC;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83171708;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83171710;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83171720;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_83171738"))) PPC_WEAK_FUNC(sub_83171738);
PPC_FUNC_IMPL(__imp__sub_83171738) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,10384
	ctx.r31.s64 = ctx.r11.s64 + 10384;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x8317175C;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83171768;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83171770;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83171780;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_83171798"))) PPC_WEAK_FUNC(sub_83171798);
PPC_FUNC_IMPL(__imp__sub_83171798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10472
	ctx.r3.s64 = ctx.r11.s64 + 10472;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831717AC"))) PPC_WEAK_FUNC(sub_831717AC);
PPC_FUNC_IMPL(__imp__sub_831717AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831717B0"))) PPC_WEAK_FUNC(sub_831717B0);
PPC_FUNC_IMPL(__imp__sub_831717B0) {
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
	// lis r30,-31956
	ctx.r30.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r30,10504
	ctx.r31.s64 = ctx.r30.s64 + 10504;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x822402c8
	ctx.lr = 0x831717DC;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82249190
	ctx.lr = 0x831717E4;
	sub_82249190(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,10504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10504, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_83171814"))) PPC_WEAK_FUNC(sub_83171814);
PPC_FUNC_IMPL(__imp__sub_83171814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171818"))) PPC_WEAK_FUNC(sub_83171818);
PPC_FUNC_IMPL(__imp__sub_83171818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10576
	ctx.r3.s64 = ctx.r11.s64 + 10576;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317182C"))) PPC_WEAK_FUNC(sub_8317182C);
PPC_FUNC_IMPL(__imp__sub_8317182C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171830"))) PPC_WEAK_FUNC(sub_83171830);
PPC_FUNC_IMPL(__imp__sub_83171830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,10704
	ctx.r10.s64 = ctx.r11.s64 + 10704;
	// lwz r3,10704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10704);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171844"))) PPC_WEAK_FUNC(sub_83171844);
PPC_FUNC_IMPL(__imp__sub_83171844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171848"))) PPC_WEAK_FUNC(sub_83171848);
PPC_FUNC_IMPL(__imp__sub_83171848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10712
	ctx.r3.s64 = ctx.r11.s64 + 10712;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317185C"))) PPC_WEAK_FUNC(sub_8317185C);
PPC_FUNC_IMPL(__imp__sub_8317185C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171860"))) PPC_WEAK_FUNC(sub_83171860);
PPC_FUNC_IMPL(__imp__sub_83171860) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,10744
	ctx.r31.s64 = ctx.r11.s64 + 10744;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83171884;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83171890;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83171898;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x831718A8;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_831718C0"))) PPC_WEAK_FUNC(sub_831718C0);
PPC_FUNC_IMPL(__imp__sub_831718C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10832
	ctx.r3.s64 = ctx.r11.s64 + 10832;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831718D4"))) PPC_WEAK_FUNC(sub_831718D4);
PPC_FUNC_IMPL(__imp__sub_831718D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831718D8"))) PPC_WEAK_FUNC(sub_831718D8);
PPC_FUNC_IMPL(__imp__sub_831718D8) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,10864
	ctx.r31.s64 = ctx.r11.s64 + 10864;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x831718FC;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83171908;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83171910;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83171920;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_83171938"))) PPC_WEAK_FUNC(sub_83171938);
PPC_FUNC_IMPL(__imp__sub_83171938) {
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
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r31,r11,31476
	ctx.r31.s64 = ctx.r11.s64 + 31476;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83171960
	if (ctx.cr6.eq) goto loc_83171960;
	// bl 0x82241d18
	ctx.lr = 0x83171960;
	sub_82241D18(ctx, base);
loc_83171960:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83171970
	if (ctx.cr6.eq) goto loc_83171970;
	// bl 0x82241d18
	ctx.lr = 0x83171970;
	sub_82241D18(ctx, base);
loc_83171970:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,27340
	ctx.r11.s64 = ctx.r11.s64 + 27340;
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

__attribute__((alias("__imp__sub_83171990"))) PPC_WEAK_FUNC(sub_83171990);
PPC_FUNC_IMPL(__imp__sub_83171990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10952
	ctx.r3.s64 = ctx.r11.s64 + 10952;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831719A4"))) PPC_WEAK_FUNC(sub_831719A4);
PPC_FUNC_IMPL(__imp__sub_831719A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831719A8"))) PPC_WEAK_FUNC(sub_831719A8);
PPC_FUNC_IMPL(__imp__sub_831719A8) {
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
	// bl 0x8254dc90
	ctx.lr = 0x831719BC;
	sub_8254DC90(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,11088
	ctx.r31.s64 = ctx.r11.s64 + 11088;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8254ddd0
	ctx.lr = 0x831719CC;
	sub_8254DDD0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822402c8
	ctx.lr = 0x831719DC;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_831719F0"))) PPC_WEAK_FUNC(sub_831719F0);
PPC_FUNC_IMPL(__imp__sub_831719F0) {
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
	// lis r30,-31956
	ctx.r30.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r30,11144
	ctx.r31.s64 = ctx.r30.s64 + 11144;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x822402c8
	ctx.lr = 0x83171A1C;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82249190
	ctx.lr = 0x83171A24;
	sub_82249190(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,11144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11144, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_83171A54"))) PPC_WEAK_FUNC(sub_83171A54);
PPC_FUNC_IMPL(__imp__sub_83171A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171A58"))) PPC_WEAK_FUNC(sub_83171A58);
PPC_FUNC_IMPL(__imp__sub_83171A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,11216
	ctx.r3.s64 = ctx.r11.s64 + 11216;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171A64"))) PPC_WEAK_FUNC(sub_83171A64);
PPC_FUNC_IMPL(__imp__sub_83171A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171A68"))) PPC_WEAK_FUNC(sub_83171A68);
PPC_FUNC_IMPL(__imp__sub_83171A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,11304
	ctx.r3.s64 = ctx.r11.s64 + 11304;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171A74"))) PPC_WEAK_FUNC(sub_83171A74);
PPC_FUNC_IMPL(__imp__sub_83171A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171A78"))) PPC_WEAK_FUNC(sub_83171A78);
PPC_FUNC_IMPL(__imp__sub_83171A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,11392
	ctx.r3.s64 = ctx.r11.s64 + 11392;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171A84"))) PPC_WEAK_FUNC(sub_83171A84);
PPC_FUNC_IMPL(__imp__sub_83171A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171A88"))) PPC_WEAK_FUNC(sub_83171A88);
PPC_FUNC_IMPL(__imp__sub_83171A88) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,11480
	ctx.r31.s64 = ctx.r11.s64 + 11480;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83171AAC;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83171AB8;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83171AC0;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83171AD0;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_83171AE8"))) PPC_WEAK_FUNC(sub_83171AE8);
PPC_FUNC_IMPL(__imp__sub_83171AE8) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,11568
	ctx.r31.s64 = ctx.r11.s64 + 11568;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83171B0C;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83171B18;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83171B20;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83171B30;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_83171B48"))) PPC_WEAK_FUNC(sub_83171B48);
PPC_FUNC_IMPL(__imp__sub_83171B48) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,11656
	ctx.r31.s64 = ctx.r11.s64 + 11656;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83171B6C;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83171B78;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83171B80;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83171B90;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_83171BA8"))) PPC_WEAK_FUNC(sub_83171BA8);
PPC_FUNC_IMPL(__imp__sub_83171BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,11744
	ctx.r3.s64 = ctx.r11.s64 + 11744;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171BBC"))) PPC_WEAK_FUNC(sub_83171BBC);
PPC_FUNC_IMPL(__imp__sub_83171BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171BC0"))) PPC_WEAK_FUNC(sub_83171BC0);
PPC_FUNC_IMPL(__imp__sub_83171BC0) {
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
	// bl 0x8254dc90
	ctx.lr = 0x83171BD4;
	sub_8254DC90(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,11872
	ctx.r31.s64 = ctx.r11.s64 + 11872;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8254ddd0
	ctx.lr = 0x83171BE4;
	sub_8254DDD0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822402c8
	ctx.lr = 0x83171BF4;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_83171C08"))) PPC_WEAK_FUNC(sub_83171C08);
PPC_FUNC_IMPL(__imp__sub_83171C08) {
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
	// lis r30,-31956
	ctx.r30.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r30,11928
	ctx.r31.s64 = ctx.r30.s64 + 11928;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x822402c8
	ctx.lr = 0x83171C34;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82249190
	ctx.lr = 0x83171C3C;
	sub_82249190(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,11928(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11928, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_83171C6C"))) PPC_WEAK_FUNC(sub_83171C6C);
PPC_FUNC_IMPL(__imp__sub_83171C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171C70"))) PPC_WEAK_FUNC(sub_83171C70);
PPC_FUNC_IMPL(__imp__sub_83171C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,12000
	ctx.r3.s64 = ctx.r11.s64 + 12000;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171C7C"))) PPC_WEAK_FUNC(sub_83171C7C);
PPC_FUNC_IMPL(__imp__sub_83171C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171C80"))) PPC_WEAK_FUNC(sub_83171C80);
PPC_FUNC_IMPL(__imp__sub_83171C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,12088
	ctx.r3.s64 = ctx.r11.s64 + 12088;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171C8C"))) PPC_WEAK_FUNC(sub_83171C8C);
PPC_FUNC_IMPL(__imp__sub_83171C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171C90"))) PPC_WEAK_FUNC(sub_83171C90);
PPC_FUNC_IMPL(__imp__sub_83171C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,12176
	ctx.r3.s64 = ctx.r11.s64 + 12176;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171C9C"))) PPC_WEAK_FUNC(sub_83171C9C);
PPC_FUNC_IMPL(__imp__sub_83171C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171CA0"))) PPC_WEAK_FUNC(sub_83171CA0);
PPC_FUNC_IMPL(__imp__sub_83171CA0) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,12264
	ctx.r31.s64 = ctx.r11.s64 + 12264;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83171CC4;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83171CD0;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83171CD8;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83171CE8;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_83171D00"))) PPC_WEAK_FUNC(sub_83171D00);
PPC_FUNC_IMPL(__imp__sub_83171D00) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,12352
	ctx.r31.s64 = ctx.r11.s64 + 12352;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83171D24;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83171D30;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83171D38;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83171D48;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_83171D60"))) PPC_WEAK_FUNC(sub_83171D60);
PPC_FUNC_IMPL(__imp__sub_83171D60) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,12440
	ctx.r31.s64 = ctx.r11.s64 + 12440;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83171D84;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83171D90;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83171D98;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83171DA8;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_83171DC0"))) PPC_WEAK_FUNC(sub_83171DC0);
PPC_FUNC_IMPL(__imp__sub_83171DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,12528
	ctx.r3.s64 = ctx.r11.s64 + 12528;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171DD4"))) PPC_WEAK_FUNC(sub_83171DD4);
PPC_FUNC_IMPL(__imp__sub_83171DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171DD8"))) PPC_WEAK_FUNC(sub_83171DD8);
PPC_FUNC_IMPL(__imp__sub_83171DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,12556
	ctx.r3.s64 = ctx.r11.s64 + 12556;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171DEC"))) PPC_WEAK_FUNC(sub_83171DEC);
PPC_FUNC_IMPL(__imp__sub_83171DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171DF0"))) PPC_WEAK_FUNC(sub_83171DF0);
PPC_FUNC_IMPL(__imp__sub_83171DF0) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,12584
	ctx.r11.s64 = ctx.r11.s64 + 12584;
	// addi r31,r11,112
	ctx.r31.s64 = ctx.r11.s64 + 112;
loc_83171E14:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822402c8
	ctx.lr = 0x83171E28;
	sub_822402C8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x83171e14
	if (!ctx.cr0.lt) goto loc_83171E14;
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

__attribute__((alias("__imp__sub_83171E48"))) PPC_WEAK_FUNC(sub_83171E48);
PPC_FUNC_IMPL(__imp__sub_83171E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,12696
	ctx.r3.s64 = ctx.r11.s64 + 12696;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171E5C"))) PPC_WEAK_FUNC(sub_83171E5C);
PPC_FUNC_IMPL(__imp__sub_83171E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171E60"))) PPC_WEAK_FUNC(sub_83171E60);
PPC_FUNC_IMPL(__imp__sub_83171E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,31464
	ctx.r3.s64 = ctx.r11.s64 + 31464;
	// b 0x828b2530
	sub_828B2530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171E6C"))) PPC_WEAK_FUNC(sub_83171E6C);
PPC_FUNC_IMPL(__imp__sub_83171E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171E70"))) PPC_WEAK_FUNC(sub_83171E70);
PPC_FUNC_IMPL(__imp__sub_83171E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,12724
	ctx.r3.s64 = ctx.r11.s64 + 12724;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171E84"))) PPC_WEAK_FUNC(sub_83171E84);
PPC_FUNC_IMPL(__imp__sub_83171E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171E88"))) PPC_WEAK_FUNC(sub_83171E88);
PPC_FUNC_IMPL(__imp__sub_83171E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,12752
	ctx.r3.s64 = ctx.r11.s64 + 12752;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171E9C"))) PPC_WEAK_FUNC(sub_83171E9C);
PPC_FUNC_IMPL(__imp__sub_83171E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171EA0"))) PPC_WEAK_FUNC(sub_83171EA0);
PPC_FUNC_IMPL(__imp__sub_83171EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,12880
	ctx.r3.s64 = ctx.r11.s64 + 12880;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171EB4"))) PPC_WEAK_FUNC(sub_83171EB4);
PPC_FUNC_IMPL(__imp__sub_83171EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171EB8"))) PPC_WEAK_FUNC(sub_83171EB8);
PPC_FUNC_IMPL(__imp__sub_83171EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,13200
	ctx.r3.s64 = ctx.r11.s64 + 13200;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171ECC"))) PPC_WEAK_FUNC(sub_83171ECC);
PPC_FUNC_IMPL(__imp__sub_83171ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171ED0"))) PPC_WEAK_FUNC(sub_83171ED0);
PPC_FUNC_IMPL(__imp__sub_83171ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,13424
	ctx.r3.s64 = ctx.r11.s64 + 13424;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171EE4"))) PPC_WEAK_FUNC(sub_83171EE4);
PPC_FUNC_IMPL(__imp__sub_83171EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171EE8"))) PPC_WEAK_FUNC(sub_83171EE8);
PPC_FUNC_IMPL(__imp__sub_83171EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,-26516
	ctx.r11.s64 = ctx.r11.s64 + -26516;
	// stw r11,32176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83171EFC"))) PPC_WEAK_FUNC(sub_83171EFC);
PPC_FUNC_IMPL(__imp__sub_83171EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171F00"))) PPC_WEAK_FUNC(sub_83171F00);
PPC_FUNC_IMPL(__imp__sub_83171F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,13648
	ctx.r3.s64 = ctx.r11.s64 + 13648;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171F14"))) PPC_WEAK_FUNC(sub_83171F14);
PPC_FUNC_IMPL(__imp__sub_83171F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171F18"))) PPC_WEAK_FUNC(sub_83171F18);
PPC_FUNC_IMPL(__imp__sub_83171F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,14080
	ctx.r3.s64 = ctx.r11.s64 + 14080;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171F2C"))) PPC_WEAK_FUNC(sub_83171F2C);
PPC_FUNC_IMPL(__imp__sub_83171F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171F30"))) PPC_WEAK_FUNC(sub_83171F30);
PPC_FUNC_IMPL(__imp__sub_83171F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,14208
	ctx.r3.s64 = ctx.r11.s64 + 14208;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171F44"))) PPC_WEAK_FUNC(sub_83171F44);
PPC_FUNC_IMPL(__imp__sub_83171F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171F48"))) PPC_WEAK_FUNC(sub_83171F48);
PPC_FUNC_IMPL(__imp__sub_83171F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,14336
	ctx.r3.s64 = ctx.r11.s64 + 14336;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171F5C"))) PPC_WEAK_FUNC(sub_83171F5C);
PPC_FUNC_IMPL(__imp__sub_83171F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171F60"))) PPC_WEAK_FUNC(sub_83171F60);
PPC_FUNC_IMPL(__imp__sub_83171F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,14560
	ctx.r3.s64 = ctx.r11.s64 + 14560;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171F74"))) PPC_WEAK_FUNC(sub_83171F74);
PPC_FUNC_IMPL(__imp__sub_83171F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171F78"))) PPC_WEAK_FUNC(sub_83171F78);
PPC_FUNC_IMPL(__imp__sub_83171F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,14784
	ctx.r3.s64 = ctx.r11.s64 + 14784;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171F8C"))) PPC_WEAK_FUNC(sub_83171F8C);
PPC_FUNC_IMPL(__imp__sub_83171F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171F90"))) PPC_WEAK_FUNC(sub_83171F90);
PPC_FUNC_IMPL(__imp__sub_83171F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,14912
	ctx.r3.s64 = ctx.r11.s64 + 14912;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171FA4"))) PPC_WEAK_FUNC(sub_83171FA4);
PPC_FUNC_IMPL(__imp__sub_83171FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171FA8"))) PPC_WEAK_FUNC(sub_83171FA8);
PPC_FUNC_IMPL(__imp__sub_83171FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,32740
	ctx.r3.s64 = ctx.r11.s64 + 32740;
	// b 0x822a4748
	sub_822A4748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171FB4"))) PPC_WEAK_FUNC(sub_83171FB4);
PPC_FUNC_IMPL(__imp__sub_83171FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171FB8"))) PPC_WEAK_FUNC(sub_83171FB8);
PPC_FUNC_IMPL(__imp__sub_83171FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,15040
	ctx.r3.s64 = ctx.r11.s64 + 15040;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171FCC"))) PPC_WEAK_FUNC(sub_83171FCC);
PPC_FUNC_IMPL(__imp__sub_83171FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171FD0"))) PPC_WEAK_FUNC(sub_83171FD0);
PPC_FUNC_IMPL(__imp__sub_83171FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,15168
	ctx.r3.s64 = ctx.r11.s64 + 15168;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171FE4"))) PPC_WEAK_FUNC(sub_83171FE4);
PPC_FUNC_IMPL(__imp__sub_83171FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171FE8"))) PPC_WEAK_FUNC(sub_83171FE8);
PPC_FUNC_IMPL(__imp__sub_83171FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,15196
	ctx.r10.s64 = ctx.r11.s64 + 15196;
	// lwz r3,15196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15196);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171FFC"))) PPC_WEAK_FUNC(sub_83171FFC);
PPC_FUNC_IMPL(__imp__sub_83171FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172000"))) PPC_WEAK_FUNC(sub_83172000);
PPC_FUNC_IMPL(__imp__sub_83172000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,15204
	ctx.r3.s64 = ctx.r11.s64 + 15204;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172014"))) PPC_WEAK_FUNC(sub_83172014);
PPC_FUNC_IMPL(__imp__sub_83172014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172018"))) PPC_WEAK_FUNC(sub_83172018);
PPC_FUNC_IMPL(__imp__sub_83172018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,15328
	ctx.r10.s64 = ctx.r11.s64 + 15328;
	// lwz r3,15328(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15328);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317202C"))) PPC_WEAK_FUNC(sub_8317202C);
PPC_FUNC_IMPL(__imp__sub_8317202C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172030"))) PPC_WEAK_FUNC(sub_83172030);
PPC_FUNC_IMPL(__imp__sub_83172030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,15440
	ctx.r3.s64 = ctx.r11.s64 + 15440;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172044"))) PPC_WEAK_FUNC(sub_83172044);
PPC_FUNC_IMPL(__imp__sub_83172044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172048"))) PPC_WEAK_FUNC(sub_83172048);
PPC_FUNC_IMPL(__imp__sub_83172048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,15336
	ctx.r10.s64 = ctx.r11.s64 + 15336;
	// lwz r3,15336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15336);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317205C"))) PPC_WEAK_FUNC(sub_8317205C);
PPC_FUNC_IMPL(__imp__sub_8317205C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172060"))) PPC_WEAK_FUNC(sub_83172060);
PPC_FUNC_IMPL(__imp__sub_83172060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,15568
	ctx.r3.s64 = ctx.r11.s64 + 15568;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172074"))) PPC_WEAK_FUNC(sub_83172074);
PPC_FUNC_IMPL(__imp__sub_83172074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172078"))) PPC_WEAK_FUNC(sub_83172078);
PPC_FUNC_IMPL(__imp__sub_83172078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,15596
	ctx.r10.s64 = ctx.r11.s64 + 15596;
	// lwz r3,15596(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15596);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317208C"))) PPC_WEAK_FUNC(sub_8317208C);
PPC_FUNC_IMPL(__imp__sub_8317208C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172090"))) PPC_WEAK_FUNC(sub_83172090);
PPC_FUNC_IMPL(__imp__sub_83172090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,15604
	ctx.r3.s64 = ctx.r11.s64 + 15604;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831720A4"))) PPC_WEAK_FUNC(sub_831720A4);
PPC_FUNC_IMPL(__imp__sub_831720A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831720A8"))) PPC_WEAK_FUNC(sub_831720A8);
PPC_FUNC_IMPL(__imp__sub_831720A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,15824
	ctx.r3.s64 = ctx.r11.s64 + 15824;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831720BC"))) PPC_WEAK_FUNC(sub_831720BC);
PPC_FUNC_IMPL(__imp__sub_831720BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831720C0"))) PPC_WEAK_FUNC(sub_831720C0);
PPC_FUNC_IMPL(__imp__sub_831720C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,15852
	ctx.r10.s64 = ctx.r11.s64 + 15852;
	// lwz r3,15852(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15852);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831720D4"))) PPC_WEAK_FUNC(sub_831720D4);
PPC_FUNC_IMPL(__imp__sub_831720D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831720D8"))) PPC_WEAK_FUNC(sub_831720D8);
PPC_FUNC_IMPL(__imp__sub_831720D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,15860
	ctx.r3.s64 = ctx.r11.s64 + 15860;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831720EC"))) PPC_WEAK_FUNC(sub_831720EC);
PPC_FUNC_IMPL(__imp__sub_831720EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831720F0"))) PPC_WEAK_FUNC(sub_831720F0);
PPC_FUNC_IMPL(__imp__sub_831720F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,15984
	ctx.r10.s64 = ctx.r11.s64 + 15984;
	// lwz r3,15984(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15984);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172104"))) PPC_WEAK_FUNC(sub_83172104);
PPC_FUNC_IMPL(__imp__sub_83172104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172108"))) PPC_WEAK_FUNC(sub_83172108);
PPC_FUNC_IMPL(__imp__sub_83172108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,16096
	ctx.r3.s64 = ctx.r11.s64 + 16096;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317211C"))) PPC_WEAK_FUNC(sub_8317211C);
PPC_FUNC_IMPL(__imp__sub_8317211C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172120"))) PPC_WEAK_FUNC(sub_83172120);
PPC_FUNC_IMPL(__imp__sub_83172120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,16224
	ctx.r3.s64 = ctx.r11.s64 + 16224;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172134"))) PPC_WEAK_FUNC(sub_83172134);
PPC_FUNC_IMPL(__imp__sub_83172134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172138"))) PPC_WEAK_FUNC(sub_83172138);
PPC_FUNC_IMPL(__imp__sub_83172138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,16352
	ctx.r3.s64 = ctx.r11.s64 + 16352;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317214C"))) PPC_WEAK_FUNC(sub_8317214C);
PPC_FUNC_IMPL(__imp__sub_8317214C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172150"))) PPC_WEAK_FUNC(sub_83172150);
PPC_FUNC_IMPL(__imp__sub_83172150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,16672
	ctx.r3.s64 = ctx.r11.s64 + 16672;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172164"))) PPC_WEAK_FUNC(sub_83172164);
PPC_FUNC_IMPL(__imp__sub_83172164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172168"))) PPC_WEAK_FUNC(sub_83172168);
PPC_FUNC_IMPL(__imp__sub_83172168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,17664
	ctx.r3.s64 = ctx.r11.s64 + 17664;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317217C"))) PPC_WEAK_FUNC(sub_8317217C);
PPC_FUNC_IMPL(__imp__sub_8317217C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172180"))) PPC_WEAK_FUNC(sub_83172180);
PPC_FUNC_IMPL(__imp__sub_83172180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,17792
	ctx.r3.s64 = ctx.r11.s64 + 17792;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172194"))) PPC_WEAK_FUNC(sub_83172194);
PPC_FUNC_IMPL(__imp__sub_83172194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172198"))) PPC_WEAK_FUNC(sub_83172198);
PPC_FUNC_IMPL(__imp__sub_83172198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,17920
	ctx.r3.s64 = ctx.r11.s64 + 17920;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831721AC"))) PPC_WEAK_FUNC(sub_831721AC);
PPC_FUNC_IMPL(__imp__sub_831721AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831721B0"))) PPC_WEAK_FUNC(sub_831721B0);
PPC_FUNC_IMPL(__imp__sub_831721B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,18048
	ctx.r3.s64 = ctx.r11.s64 + 18048;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831721C4"))) PPC_WEAK_FUNC(sub_831721C4);
PPC_FUNC_IMPL(__imp__sub_831721C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831721C8"))) PPC_WEAK_FUNC(sub_831721C8);
PPC_FUNC_IMPL(__imp__sub_831721C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,18076
	ctx.r10.s64 = ctx.r11.s64 + 18076;
	// lwz r3,18076(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18076);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831721DC"))) PPC_WEAK_FUNC(sub_831721DC);
PPC_FUNC_IMPL(__imp__sub_831721DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831721E0"))) PPC_WEAK_FUNC(sub_831721E0);
PPC_FUNC_IMPL(__imp__sub_831721E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,18084
	ctx.r3.s64 = ctx.r11.s64 + 18084;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831721F4"))) PPC_WEAK_FUNC(sub_831721F4);
PPC_FUNC_IMPL(__imp__sub_831721F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831721F8"))) PPC_WEAK_FUNC(sub_831721F8);
PPC_FUNC_IMPL(__imp__sub_831721F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,18208
	ctx.r10.s64 = ctx.r11.s64 + 18208;
	// lwz r3,18208(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18208);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317220C"))) PPC_WEAK_FUNC(sub_8317220C);
PPC_FUNC_IMPL(__imp__sub_8317220C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172210"))) PPC_WEAK_FUNC(sub_83172210);
PPC_FUNC_IMPL(__imp__sub_83172210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,18216
	ctx.r3.s64 = ctx.r11.s64 + 18216;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172224"))) PPC_WEAK_FUNC(sub_83172224);
PPC_FUNC_IMPL(__imp__sub_83172224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172228"))) PPC_WEAK_FUNC(sub_83172228);
PPC_FUNC_IMPL(__imp__sub_83172228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,18244
	ctx.r3.s64 = ctx.r11.s64 + 18244;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317223C"))) PPC_WEAK_FUNC(sub_8317223C);
PPC_FUNC_IMPL(__imp__sub_8317223C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172240"))) PPC_WEAK_FUNC(sub_83172240);
PPC_FUNC_IMPL(__imp__sub_83172240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,18272
	ctx.r3.s64 = ctx.r11.s64 + 18272;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172254"))) PPC_WEAK_FUNC(sub_83172254);
PPC_FUNC_IMPL(__imp__sub_83172254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172258"))) PPC_WEAK_FUNC(sub_83172258);
PPC_FUNC_IMPL(__imp__sub_83172258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,18300
	ctx.r3.s64 = ctx.r11.s64 + 18300;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317226C"))) PPC_WEAK_FUNC(sub_8317226C);
PPC_FUNC_IMPL(__imp__sub_8317226C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172270"))) PPC_WEAK_FUNC(sub_83172270);
PPC_FUNC_IMPL(__imp__sub_83172270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,18328
	ctx.r3.s64 = ctx.r11.s64 + 18328;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172284"))) PPC_WEAK_FUNC(sub_83172284);
PPC_FUNC_IMPL(__imp__sub_83172284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172288"))) PPC_WEAK_FUNC(sub_83172288);
PPC_FUNC_IMPL(__imp__sub_83172288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x83172290;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r31,r11,31976
	ctx.r31.s64 = ctx.r11.s64 + 31976;
	// lwz r30,128(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x831722f8
	if (ctx.cr6.eq) goto loc_831722F8;
loc_831722AC:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x831722cc
	if (ctx.cr6.eq) goto loc_831722CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82923748
	ctx.lr = 0x831722C0;
	sub_82923748(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82691540
	ctx.lr = 0x831722C8;
	sub_82691540(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_831722CC:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x831722ac
	if (!ctx.cr6.eq) goto loc_831722AC;
	// lwz r30,128(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x831722f8
	if (ctx.cr6.eq) goto loc_831722F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x831722F0;
	sub_82FA20F0(ctx, base);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// lwz r30,128(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
loc_831722F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83172308
	if (ctx.cr6.eq) goto loc_83172308;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x83172308;
	sub_82691540(ctx, base);
loc_83172308:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// beq cr6,0x83172330
	if (ctx.cr6.eq) goto loc_83172330;
	// bl 0x82691540
	ctx.lr = 0x83172330;
	sub_82691540(ctx, base);
loc_83172330:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172350"))) PPC_WEAK_FUNC(sub_83172350);
PPC_FUNC_IMPL(__imp__sub_83172350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,18356
	ctx.r3.s64 = ctx.r11.s64 + 18356;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172364"))) PPC_WEAK_FUNC(sub_83172364);
PPC_FUNC_IMPL(__imp__sub_83172364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172368"))) PPC_WEAK_FUNC(sub_83172368);
PPC_FUNC_IMPL(__imp__sub_83172368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,18480
	ctx.r3.s64 = ctx.r11.s64 + 18480;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317237C"))) PPC_WEAK_FUNC(sub_8317237C);
PPC_FUNC_IMPL(__imp__sub_8317237C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172380"))) PPC_WEAK_FUNC(sub_83172380);
PPC_FUNC_IMPL(__imp__sub_83172380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,18608
	ctx.r3.s64 = ctx.r11.s64 + 18608;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172394"))) PPC_WEAK_FUNC(sub_83172394);
PPC_FUNC_IMPL(__imp__sub_83172394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172398"))) PPC_WEAK_FUNC(sub_83172398);
PPC_FUNC_IMPL(__imp__sub_83172398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,18636
	ctx.r3.s64 = ctx.r11.s64 + 18636;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831723AC"))) PPC_WEAK_FUNC(sub_831723AC);
PPC_FUNC_IMPL(__imp__sub_831723AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831723B0"))) PPC_WEAK_FUNC(sub_831723B0);
PPC_FUNC_IMPL(__imp__sub_831723B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,18664
	ctx.r3.s64 = ctx.r11.s64 + 18664;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831723C4"))) PPC_WEAK_FUNC(sub_831723C4);
PPC_FUNC_IMPL(__imp__sub_831723C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831723C8"))) PPC_WEAK_FUNC(sub_831723C8);
PPC_FUNC_IMPL(__imp__sub_831723C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,18800
	ctx.r3.s64 = ctx.r11.s64 + 18800;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831723DC"))) PPC_WEAK_FUNC(sub_831723DC);
PPC_FUNC_IMPL(__imp__sub_831723DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831723E0"))) PPC_WEAK_FUNC(sub_831723E0);
PPC_FUNC_IMPL(__imp__sub_831723E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,19120
	ctx.r10.s64 = ctx.r11.s64 + 19120;
	// lwz r3,19120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19120);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831723F4"))) PPC_WEAK_FUNC(sub_831723F4);
PPC_FUNC_IMPL(__imp__sub_831723F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831723F8"))) PPC_WEAK_FUNC(sub_831723F8);
PPC_FUNC_IMPL(__imp__sub_831723F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,19128
	ctx.r10.s64 = ctx.r11.s64 + 19128;
	// lwz r3,19128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19128);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317240C"))) PPC_WEAK_FUNC(sub_8317240C);
PPC_FUNC_IMPL(__imp__sub_8317240C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172410"))) PPC_WEAK_FUNC(sub_83172410);
PPC_FUNC_IMPL(__imp__sub_83172410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,19328
	ctx.r10.s64 = ctx.r11.s64 + 19328;
	// lwz r3,19328(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19328);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172424"))) PPC_WEAK_FUNC(sub_83172424);
PPC_FUNC_IMPL(__imp__sub_83172424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172428"))) PPC_WEAK_FUNC(sub_83172428);
PPC_FUNC_IMPL(__imp__sub_83172428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,19336
	ctx.r10.s64 = ctx.r11.s64 + 19336;
	// lwz r3,19336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19336);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317243C"))) PPC_WEAK_FUNC(sub_8317243C);
PPC_FUNC_IMPL(__imp__sub_8317243C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172440"))) PPC_WEAK_FUNC(sub_83172440);
PPC_FUNC_IMPL(__imp__sub_83172440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,19536
	ctx.r10.s64 = ctx.r11.s64 + 19536;
	// lwz r3,19536(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19536);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172454"))) PPC_WEAK_FUNC(sub_83172454);
PPC_FUNC_IMPL(__imp__sub_83172454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172458"))) PPC_WEAK_FUNC(sub_83172458);
PPC_FUNC_IMPL(__imp__sub_83172458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,19544
	ctx.r10.s64 = ctx.r11.s64 + 19544;
	// lwz r3,19544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19544);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317246C"))) PPC_WEAK_FUNC(sub_8317246C);
PPC_FUNC_IMPL(__imp__sub_8317246C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172470"))) PPC_WEAK_FUNC(sub_83172470);
PPC_FUNC_IMPL(__imp__sub_83172470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,19744
	ctx.r10.s64 = ctx.r11.s64 + 19744;
	// lwz r3,19744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19744);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172484"))) PPC_WEAK_FUNC(sub_83172484);
PPC_FUNC_IMPL(__imp__sub_83172484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172488"))) PPC_WEAK_FUNC(sub_83172488);
PPC_FUNC_IMPL(__imp__sub_83172488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,19752
	ctx.r10.s64 = ctx.r11.s64 + 19752;
	// lwz r3,19752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19752);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317249C"))) PPC_WEAK_FUNC(sub_8317249C);
PPC_FUNC_IMPL(__imp__sub_8317249C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831724A0"))) PPC_WEAK_FUNC(sub_831724A0);
PPC_FUNC_IMPL(__imp__sub_831724A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,19952
	ctx.r10.s64 = ctx.r11.s64 + 19952;
	// lwz r3,19952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19952);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831724B4"))) PPC_WEAK_FUNC(sub_831724B4);
PPC_FUNC_IMPL(__imp__sub_831724B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831724B8"))) PPC_WEAK_FUNC(sub_831724B8);
PPC_FUNC_IMPL(__imp__sub_831724B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,19960
	ctx.r10.s64 = ctx.r11.s64 + 19960;
	// lwz r3,19960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19960);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831724CC"))) PPC_WEAK_FUNC(sub_831724CC);
PPC_FUNC_IMPL(__imp__sub_831724CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831724D0"))) PPC_WEAK_FUNC(sub_831724D0);
PPC_FUNC_IMPL(__imp__sub_831724D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,20160
	ctx.r10.s64 = ctx.r11.s64 + 20160;
	// lwz r3,20160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20160);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831724E4"))) PPC_WEAK_FUNC(sub_831724E4);
PPC_FUNC_IMPL(__imp__sub_831724E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831724E8"))) PPC_WEAK_FUNC(sub_831724E8);
PPC_FUNC_IMPL(__imp__sub_831724E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,20168
	ctx.r10.s64 = ctx.r11.s64 + 20168;
	// lwz r3,20168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20168);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831724FC"))) PPC_WEAK_FUNC(sub_831724FC);
PPC_FUNC_IMPL(__imp__sub_831724FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172500"))) PPC_WEAK_FUNC(sub_83172500);
PPC_FUNC_IMPL(__imp__sub_83172500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,20464
	ctx.r10.s64 = ctx.r11.s64 + 20464;
	// lwz r3,20464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20464);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172514"))) PPC_WEAK_FUNC(sub_83172514);
PPC_FUNC_IMPL(__imp__sub_83172514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172518"))) PPC_WEAK_FUNC(sub_83172518);
PPC_FUNC_IMPL(__imp__sub_83172518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,20472
	ctx.r10.s64 = ctx.r11.s64 + 20472;
	// lwz r3,20472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20472);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317252C"))) PPC_WEAK_FUNC(sub_8317252C);
PPC_FUNC_IMPL(__imp__sub_8317252C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172530"))) PPC_WEAK_FUNC(sub_83172530);
PPC_FUNC_IMPL(__imp__sub_83172530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,20672
	ctx.r10.s64 = ctx.r11.s64 + 20672;
	// lwz r3,20672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20672);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172544"))) PPC_WEAK_FUNC(sub_83172544);
PPC_FUNC_IMPL(__imp__sub_83172544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172548"))) PPC_WEAK_FUNC(sub_83172548);
PPC_FUNC_IMPL(__imp__sub_83172548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,20680
	ctx.r10.s64 = ctx.r11.s64 + 20680;
	// lwz r3,20680(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20680);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317255C"))) PPC_WEAK_FUNC(sub_8317255C);
PPC_FUNC_IMPL(__imp__sub_8317255C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172560"))) PPC_WEAK_FUNC(sub_83172560);
PPC_FUNC_IMPL(__imp__sub_83172560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,20880
	ctx.r10.s64 = ctx.r11.s64 + 20880;
	// lwz r3,20880(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20880);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172574"))) PPC_WEAK_FUNC(sub_83172574);
PPC_FUNC_IMPL(__imp__sub_83172574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172578"))) PPC_WEAK_FUNC(sub_83172578);
PPC_FUNC_IMPL(__imp__sub_83172578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,21088
	ctx.r10.s64 = ctx.r11.s64 + 21088;
	// lwz r3,21088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21088);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317258C"))) PPC_WEAK_FUNC(sub_8317258C);
PPC_FUNC_IMPL(__imp__sub_8317258C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172590"))) PPC_WEAK_FUNC(sub_83172590);
PPC_FUNC_IMPL(__imp__sub_83172590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,21096
	ctx.r10.s64 = ctx.r11.s64 + 21096;
	// lwz r3,21096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21096);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831725A4"))) PPC_WEAK_FUNC(sub_831725A4);
PPC_FUNC_IMPL(__imp__sub_831725A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831725A8"))) PPC_WEAK_FUNC(sub_831725A8);
PPC_FUNC_IMPL(__imp__sub_831725A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,21296
	ctx.r3.s64 = ctx.r11.s64 + 21296;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831725BC"))) PPC_WEAK_FUNC(sub_831725BC);
PPC_FUNC_IMPL(__imp__sub_831725BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831725C0"))) PPC_WEAK_FUNC(sub_831725C0);
PPC_FUNC_IMPL(__imp__sub_831725C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,21324
	ctx.r10.s64 = ctx.r11.s64 + 21324;
	// lwz r3,21324(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21324);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831725D4"))) PPC_WEAK_FUNC(sub_831725D4);
PPC_FUNC_IMPL(__imp__sub_831725D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831725D8"))) PPC_WEAK_FUNC(sub_831725D8);
PPC_FUNC_IMPL(__imp__sub_831725D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,21332
	ctx.r3.s64 = ctx.r11.s64 + 21332;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831725EC"))) PPC_WEAK_FUNC(sub_831725EC);
PPC_FUNC_IMPL(__imp__sub_831725EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831725F0"))) PPC_WEAK_FUNC(sub_831725F0);
PPC_FUNC_IMPL(__imp__sub_831725F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,21456
	ctx.r10.s64 = ctx.r11.s64 + 21456;
	// lwz r3,21456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21456);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172604"))) PPC_WEAK_FUNC(sub_83172604);
PPC_FUNC_IMPL(__imp__sub_83172604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172608"))) PPC_WEAK_FUNC(sub_83172608);
PPC_FUNC_IMPL(__imp__sub_83172608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,21464
	ctx.r10.s64 = ctx.r11.s64 + 21464;
	// lwz r3,21464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21464);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317261C"))) PPC_WEAK_FUNC(sub_8317261C);
PPC_FUNC_IMPL(__imp__sub_8317261C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172620"))) PPC_WEAK_FUNC(sub_83172620);
PPC_FUNC_IMPL(__imp__sub_83172620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,21664
	ctx.r3.s64 = ctx.r11.s64 + 21664;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172634"))) PPC_WEAK_FUNC(sub_83172634);
PPC_FUNC_IMPL(__imp__sub_83172634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172638"))) PPC_WEAK_FUNC(sub_83172638);
PPC_FUNC_IMPL(__imp__sub_83172638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,21692
	ctx.r10.s64 = ctx.r11.s64 + 21692;
	// lwz r3,21692(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21692);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317264C"))) PPC_WEAK_FUNC(sub_8317264C);
PPC_FUNC_IMPL(__imp__sub_8317264C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172650"))) PPC_WEAK_FUNC(sub_83172650);
PPC_FUNC_IMPL(__imp__sub_83172650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,21700
	ctx.r10.s64 = ctx.r11.s64 + 21700;
	// lwz r3,21700(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21700);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172664"))) PPC_WEAK_FUNC(sub_83172664);
PPC_FUNC_IMPL(__imp__sub_83172664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172668"))) PPC_WEAK_FUNC(sub_83172668);
PPC_FUNC_IMPL(__imp__sub_83172668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,21904
	ctx.r10.s64 = ctx.r11.s64 + 21904;
	// lwz r3,21904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21904);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317267C"))) PPC_WEAK_FUNC(sub_8317267C);
PPC_FUNC_IMPL(__imp__sub_8317267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172680"))) PPC_WEAK_FUNC(sub_83172680);
PPC_FUNC_IMPL(__imp__sub_83172680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,21912
	ctx.r10.s64 = ctx.r11.s64 + 21912;
	// lwz r3,21912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21912);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172694"))) PPC_WEAK_FUNC(sub_83172694);
PPC_FUNC_IMPL(__imp__sub_83172694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172698"))) PPC_WEAK_FUNC(sub_83172698);
PPC_FUNC_IMPL(__imp__sub_83172698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,22112
	ctx.r3.s64 = ctx.r11.s64 + 22112;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831726AC"))) PPC_WEAK_FUNC(sub_831726AC);
PPC_FUNC_IMPL(__imp__sub_831726AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831726B0"))) PPC_WEAK_FUNC(sub_831726B0);
PPC_FUNC_IMPL(__imp__sub_831726B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,22140
	ctx.r10.s64 = ctx.r11.s64 + 22140;
	// lwz r3,22140(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22140);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831726C4"))) PPC_WEAK_FUNC(sub_831726C4);
PPC_FUNC_IMPL(__imp__sub_831726C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831726C8"))) PPC_WEAK_FUNC(sub_831726C8);
PPC_FUNC_IMPL(__imp__sub_831726C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,22148
	ctx.r10.s64 = ctx.r11.s64 + 22148;
	// lwz r3,22148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22148);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831726DC"))) PPC_WEAK_FUNC(sub_831726DC);
PPC_FUNC_IMPL(__imp__sub_831726DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831726E0"))) PPC_WEAK_FUNC(sub_831726E0);
PPC_FUNC_IMPL(__imp__sub_831726E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,22352
	ctx.r3.s64 = ctx.r11.s64 + 22352;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831726F4"))) PPC_WEAK_FUNC(sub_831726F4);
PPC_FUNC_IMPL(__imp__sub_831726F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831726F8"))) PPC_WEAK_FUNC(sub_831726F8);
PPC_FUNC_IMPL(__imp__sub_831726F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,22380
	ctx.r10.s64 = ctx.r11.s64 + 22380;
	// lwz r3,22380(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22380);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317270C"))) PPC_WEAK_FUNC(sub_8317270C);
PPC_FUNC_IMPL(__imp__sub_8317270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172710"))) PPC_WEAK_FUNC(sub_83172710);
PPC_FUNC_IMPL(__imp__sub_83172710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,22388
	ctx.r3.s64 = ctx.r11.s64 + 22388;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172724"))) PPC_WEAK_FUNC(sub_83172724);
PPC_FUNC_IMPL(__imp__sub_83172724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172728"))) PPC_WEAK_FUNC(sub_83172728);
PPC_FUNC_IMPL(__imp__sub_83172728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,22512
	ctx.r10.s64 = ctx.r11.s64 + 22512;
	// lwz r3,22512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22512);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317273C"))) PPC_WEAK_FUNC(sub_8317273C);
PPC_FUNC_IMPL(__imp__sub_8317273C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172740"))) PPC_WEAK_FUNC(sub_83172740);
PPC_FUNC_IMPL(__imp__sub_83172740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,22624
	ctx.r3.s64 = ctx.r11.s64 + 22624;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172754"))) PPC_WEAK_FUNC(sub_83172754);
PPC_FUNC_IMPL(__imp__sub_83172754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172758"))) PPC_WEAK_FUNC(sub_83172758);
PPC_FUNC_IMPL(__imp__sub_83172758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,22520
	ctx.r10.s64 = ctx.r11.s64 + 22520;
	// lwz r3,22520(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22520);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822cfeb0
	sub_822CFEB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317276C"))) PPC_WEAK_FUNC(sub_8317276C);
PPC_FUNC_IMPL(__imp__sub_8317276C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172770"))) PPC_WEAK_FUNC(sub_83172770);
PPC_FUNC_IMPL(__imp__sub_83172770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,22752
	ctx.r3.s64 = ctx.r11.s64 + 22752;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172784"))) PPC_WEAK_FUNC(sub_83172784);
PPC_FUNC_IMPL(__imp__sub_83172784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

