#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83172E90"))) PPC_WEAK_FUNC(sub_83172E90);
PPC_FUNC_IMPL(__imp__sub_83172E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,30388
	ctx.r10.s64 = ctx.r11.s64 + 30388;
	// lwz r3,30388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30388);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172EA4"))) PPC_WEAK_FUNC(sub_83172EA4);
PPC_FUNC_IMPL(__imp__sub_83172EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172EA8"))) PPC_WEAK_FUNC(sub_83172EA8);
PPC_FUNC_IMPL(__imp__sub_83172EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,30496
	ctx.r3.s64 = ctx.r11.s64 + 30496;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172EBC"))) PPC_WEAK_FUNC(sub_83172EBC);
PPC_FUNC_IMPL(__imp__sub_83172EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172EC0"))) PPC_WEAK_FUNC(sub_83172EC0);
PPC_FUNC_IMPL(__imp__sub_83172EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,30624
	ctx.r3.s64 = ctx.r11.s64 + 30624;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172ED4"))) PPC_WEAK_FUNC(sub_83172ED4);
PPC_FUNC_IMPL(__imp__sub_83172ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172ED8"))) PPC_WEAK_FUNC(sub_83172ED8);
PPC_FUNC_IMPL(__imp__sub_83172ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,30752
	ctx.r3.s64 = ctx.r11.s64 + 30752;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172EEC"))) PPC_WEAK_FUNC(sub_83172EEC);
PPC_FUNC_IMPL(__imp__sub_83172EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172EF0"))) PPC_WEAK_FUNC(sub_83172EF0);
PPC_FUNC_IMPL(__imp__sub_83172EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,30880
	ctx.r3.s64 = ctx.r11.s64 + 30880;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172F04"))) PPC_WEAK_FUNC(sub_83172F04);
PPC_FUNC_IMPL(__imp__sub_83172F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172F08"))) PPC_WEAK_FUNC(sub_83172F08);
PPC_FUNC_IMPL(__imp__sub_83172F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,31008
	ctx.r3.s64 = ctx.r11.s64 + 31008;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172F1C"))) PPC_WEAK_FUNC(sub_83172F1C);
PPC_FUNC_IMPL(__imp__sub_83172F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172F20"))) PPC_WEAK_FUNC(sub_83172F20);
PPC_FUNC_IMPL(__imp__sub_83172F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,31036
	ctx.r3.s64 = ctx.r11.s64 + 31036;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172F34"))) PPC_WEAK_FUNC(sub_83172F34);
PPC_FUNC_IMPL(__imp__sub_83172F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172F38"))) PPC_WEAK_FUNC(sub_83172F38);
PPC_FUNC_IMPL(__imp__sub_83172F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,31064
	ctx.r3.s64 = ctx.r11.s64 + 31064;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172F4C"))) PPC_WEAK_FUNC(sub_83172F4C);
PPC_FUNC_IMPL(__imp__sub_83172F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172F50"))) PPC_WEAK_FUNC(sub_83172F50);
PPC_FUNC_IMPL(__imp__sub_83172F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,31092
	ctx.r3.s64 = ctx.r11.s64 + 31092;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172F64"))) PPC_WEAK_FUNC(sub_83172F64);
PPC_FUNC_IMPL(__imp__sub_83172F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172F68"))) PPC_WEAK_FUNC(sub_83172F68);
PPC_FUNC_IMPL(__imp__sub_83172F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,31120
	ctx.r3.s64 = ctx.r11.s64 + 31120;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172F7C"))) PPC_WEAK_FUNC(sub_83172F7C);
PPC_FUNC_IMPL(__imp__sub_83172F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172F80"))) PPC_WEAK_FUNC(sub_83172F80);
PPC_FUNC_IMPL(__imp__sub_83172F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,31248
	ctx.r3.s64 = ctx.r11.s64 + 31248;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172F94"))) PPC_WEAK_FUNC(sub_83172F94);
PPC_FUNC_IMPL(__imp__sub_83172F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172F98"))) PPC_WEAK_FUNC(sub_83172F98);
PPC_FUNC_IMPL(__imp__sub_83172F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,31376
	ctx.r3.s64 = ctx.r11.s64 + 31376;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172FAC"))) PPC_WEAK_FUNC(sub_83172FAC);
PPC_FUNC_IMPL(__imp__sub_83172FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172FB0"))) PPC_WEAK_FUNC(sub_83172FB0);
PPC_FUNC_IMPL(__imp__sub_83172FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,31504
	ctx.r3.s64 = ctx.r11.s64 + 31504;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172FC4"))) PPC_WEAK_FUNC(sub_83172FC4);
PPC_FUNC_IMPL(__imp__sub_83172FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172FC8"))) PPC_WEAK_FUNC(sub_83172FC8);
PPC_FUNC_IMPL(__imp__sub_83172FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,31632
	ctx.r3.s64 = ctx.r11.s64 + 31632;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172FDC"))) PPC_WEAK_FUNC(sub_83172FDC);
PPC_FUNC_IMPL(__imp__sub_83172FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172FE0"))) PPC_WEAK_FUNC(sub_83172FE0);
PPC_FUNC_IMPL(__imp__sub_83172FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,31660
	ctx.r10.s64 = ctx.r11.s64 + 31660;
	// lwz r3,31660(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31660);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83172FF4"))) PPC_WEAK_FUNC(sub_83172FF4);
PPC_FUNC_IMPL(__imp__sub_83172FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83172FF8"))) PPC_WEAK_FUNC(sub_83172FF8);
PPC_FUNC_IMPL(__imp__sub_83172FF8) {
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
	// addi r11,r11,31672
	ctx.r11.s64 = ctx.r11.s64 + 31672;
	// addi r31,r11,7368
	ctx.r31.s64 = ctx.r11.s64 + 7368;
loc_8317301C:
	// addi r31,r31,-1056
	ctx.r31.s64 = ctx.r31.s64 + -1056;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822402c8
	ctx.lr = 0x83173030;
	sub_822402C8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8317301c
	if (!ctx.cr0.lt) goto loc_8317301C;
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

__attribute__((alias("__imp__sub_83173050"))) PPC_WEAK_FUNC(sub_83173050);
PPC_FUNC_IMPL(__imp__sub_83173050) {
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
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-27480
	ctx.r11.s64 = ctx.r11.s64 + -27480;
	// addi r31,r11,7368
	ctx.r31.s64 = ctx.r11.s64 + 7368;
loc_83173074:
	// addi r31,r31,-1056
	ctx.r31.s64 = ctx.r31.s64 + -1056;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822402c8
	ctx.lr = 0x83173088;
	sub_822402C8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x83173074
	if (!ctx.cr0.lt) goto loc_83173074;
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

__attribute__((alias("__imp__sub_831730A8"))) PPC_WEAK_FUNC(sub_831730A8);
PPC_FUNC_IMPL(__imp__sub_831730A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21080
	ctx.r3.s64 = ctx.r11.s64 + -21080;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831730BC"))) PPC_WEAK_FUNC(sub_831730BC);
PPC_FUNC_IMPL(__imp__sub_831730BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831730C0"))) PPC_WEAK_FUNC(sub_831730C0);
PPC_FUNC_IMPL(__imp__sub_831730C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-20848
	ctx.r3.s64 = ctx.r11.s64 + -20848;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831730D4"))) PPC_WEAK_FUNC(sub_831730D4);
PPC_FUNC_IMPL(__imp__sub_831730D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831730D8"))) PPC_WEAK_FUNC(sub_831730D8);
PPC_FUNC_IMPL(__imp__sub_831730D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-20820
	ctx.r3.s64 = ctx.r11.s64 + -20820;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831730EC"))) PPC_WEAK_FUNC(sub_831730EC);
PPC_FUNC_IMPL(__imp__sub_831730EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831730F0"))) PPC_WEAK_FUNC(sub_831730F0);
PPC_FUNC_IMPL(__imp__sub_831730F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-20688
	ctx.r3.s64 = ctx.r11.s64 + -20688;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173104"))) PPC_WEAK_FUNC(sub_83173104);
PPC_FUNC_IMPL(__imp__sub_83173104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173108"))) PPC_WEAK_FUNC(sub_83173108);
PPC_FUNC_IMPL(__imp__sub_83173108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,-20660
	ctx.r10.s64 = ctx.r11.s64 + -20660;
	// lwz r3,-20660(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20660);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317311C"))) PPC_WEAK_FUNC(sub_8317311C);
PPC_FUNC_IMPL(__imp__sub_8317311C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173120"))) PPC_WEAK_FUNC(sub_83173120);
PPC_FUNC_IMPL(__imp__sub_83173120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-20652
	ctx.r3.s64 = ctx.r11.s64 + -20652;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173134"))) PPC_WEAK_FUNC(sub_83173134);
PPC_FUNC_IMPL(__imp__sub_83173134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173138"))) PPC_WEAK_FUNC(sub_83173138);
PPC_FUNC_IMPL(__imp__sub_83173138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-20624
	ctx.r3.s64 = ctx.r11.s64 + -20624;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317314C"))) PPC_WEAK_FUNC(sub_8317314C);
PPC_FUNC_IMPL(__imp__sub_8317314C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173150"))) PPC_WEAK_FUNC(sub_83173150);
PPC_FUNC_IMPL(__imp__sub_83173150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-20496
	ctx.r3.s64 = ctx.r11.s64 + -20496;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173164"))) PPC_WEAK_FUNC(sub_83173164);
PPC_FUNC_IMPL(__imp__sub_83173164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173168"))) PPC_WEAK_FUNC(sub_83173168);
PPC_FUNC_IMPL(__imp__sub_83173168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-20468
	ctx.r3.s64 = ctx.r11.s64 + -20468;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317317C"))) PPC_WEAK_FUNC(sub_8317317C);
PPC_FUNC_IMPL(__imp__sub_8317317C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173180"))) PPC_WEAK_FUNC(sub_83173180);
PPC_FUNC_IMPL(__imp__sub_83173180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-20440
	ctx.r3.s64 = ctx.r11.s64 + -20440;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173194"))) PPC_WEAK_FUNC(sub_83173194);
PPC_FUNC_IMPL(__imp__sub_83173194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173198"))) PPC_WEAK_FUNC(sub_83173198);
PPC_FUNC_IMPL(__imp__sub_83173198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-20412
	ctx.r3.s64 = ctx.r11.s64 + -20412;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831731AC"))) PPC_WEAK_FUNC(sub_831731AC);
PPC_FUNC_IMPL(__imp__sub_831731AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831731B0"))) PPC_WEAK_FUNC(sub_831731B0);
PPC_FUNC_IMPL(__imp__sub_831731B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-20288
	ctx.r3.s64 = ctx.r11.s64 + -20288;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831731C4"))) PPC_WEAK_FUNC(sub_831731C4);
PPC_FUNC_IMPL(__imp__sub_831731C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831731C8"))) PPC_WEAK_FUNC(sub_831731C8);
PPC_FUNC_IMPL(__imp__sub_831731C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-20160
	ctx.r3.s64 = ctx.r11.s64 + -20160;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831731DC"))) PPC_WEAK_FUNC(sub_831731DC);
PPC_FUNC_IMPL(__imp__sub_831731DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831731E0"))) PPC_WEAK_FUNC(sub_831731E0);
PPC_FUNC_IMPL(__imp__sub_831731E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-20032
	ctx.r3.s64 = ctx.r11.s64 + -20032;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831731F4"))) PPC_WEAK_FUNC(sub_831731F4);
PPC_FUNC_IMPL(__imp__sub_831731F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831731F8"))) PPC_WEAK_FUNC(sub_831731F8);
PPC_FUNC_IMPL(__imp__sub_831731F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-19808
	ctx.r3.s64 = ctx.r11.s64 + -19808;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317320C"))) PPC_WEAK_FUNC(sub_8317320C);
PPC_FUNC_IMPL(__imp__sub_8317320C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173210"))) PPC_WEAK_FUNC(sub_83173210);
PPC_FUNC_IMPL(__imp__sub_83173210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-19780
	ctx.r3.s64 = ctx.r11.s64 + -19780;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173224"))) PPC_WEAK_FUNC(sub_83173224);
PPC_FUNC_IMPL(__imp__sub_83173224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173228"))) PPC_WEAK_FUNC(sub_83173228);
PPC_FUNC_IMPL(__imp__sub_83173228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-19648
	ctx.r3.s64 = ctx.r11.s64 + -19648;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317323C"))) PPC_WEAK_FUNC(sub_8317323C);
PPC_FUNC_IMPL(__imp__sub_8317323C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173240"))) PPC_WEAK_FUNC(sub_83173240);
PPC_FUNC_IMPL(__imp__sub_83173240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-19520
	ctx.r3.s64 = ctx.r11.s64 + -19520;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173254"))) PPC_WEAK_FUNC(sub_83173254);
PPC_FUNC_IMPL(__imp__sub_83173254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173258"))) PPC_WEAK_FUNC(sub_83173258);
PPC_FUNC_IMPL(__imp__sub_83173258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-19200
	ctx.r3.s64 = ctx.r11.s64 + -19200;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317326C"))) PPC_WEAK_FUNC(sub_8317326C);
PPC_FUNC_IMPL(__imp__sub_8317326C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173270"))) PPC_WEAK_FUNC(sub_83173270);
PPC_FUNC_IMPL(__imp__sub_83173270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-19072
	ctx.r3.s64 = ctx.r11.s64 + -19072;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173284"))) PPC_WEAK_FUNC(sub_83173284);
PPC_FUNC_IMPL(__imp__sub_83173284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173288"))) PPC_WEAK_FUNC(sub_83173288);
PPC_FUNC_IMPL(__imp__sub_83173288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-19044
	ctx.r3.s64 = ctx.r11.s64 + -19044;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317329C"))) PPC_WEAK_FUNC(sub_8317329C);
PPC_FUNC_IMPL(__imp__sub_8317329C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831732A0"))) PPC_WEAK_FUNC(sub_831732A0);
PPC_FUNC_IMPL(__imp__sub_831732A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-19016
	ctx.r3.s64 = ctx.r11.s64 + -19016;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831732B4"))) PPC_WEAK_FUNC(sub_831732B4);
PPC_FUNC_IMPL(__imp__sub_831732B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831732B8"))) PPC_WEAK_FUNC(sub_831732B8);
PPC_FUNC_IMPL(__imp__sub_831732B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-18988
	ctx.r3.s64 = ctx.r11.s64 + -18988;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831732CC"))) PPC_WEAK_FUNC(sub_831732CC);
PPC_FUNC_IMPL(__imp__sub_831732CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831732D0"))) PPC_WEAK_FUNC(sub_831732D0);
PPC_FUNC_IMPL(__imp__sub_831732D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-18960
	ctx.r3.s64 = ctx.r11.s64 + -18960;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831732E4"))) PPC_WEAK_FUNC(sub_831732E4);
PPC_FUNC_IMPL(__imp__sub_831732E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831732E8"))) PPC_WEAK_FUNC(sub_831732E8);
PPC_FUNC_IMPL(__imp__sub_831732E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-18932
	ctx.r3.s64 = ctx.r11.s64 + -18932;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831732FC"))) PPC_WEAK_FUNC(sub_831732FC);
PPC_FUNC_IMPL(__imp__sub_831732FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173300"))) PPC_WEAK_FUNC(sub_83173300);
PPC_FUNC_IMPL(__imp__sub_83173300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-18904
	ctx.r3.s64 = ctx.r11.s64 + -18904;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173314"))) PPC_WEAK_FUNC(sub_83173314);
PPC_FUNC_IMPL(__imp__sub_83173314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173318"))) PPC_WEAK_FUNC(sub_83173318);
PPC_FUNC_IMPL(__imp__sub_83173318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-18768
	ctx.r3.s64 = ctx.r11.s64 + -18768;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317332C"))) PPC_WEAK_FUNC(sub_8317332C);
PPC_FUNC_IMPL(__imp__sub_8317332C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173330"))) PPC_WEAK_FUNC(sub_83173330);
PPC_FUNC_IMPL(__imp__sub_83173330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-18740
	ctx.r3.s64 = ctx.r11.s64 + -18740;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173344"))) PPC_WEAK_FUNC(sub_83173344);
PPC_FUNC_IMPL(__imp__sub_83173344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173348"))) PPC_WEAK_FUNC(sub_83173348);
PPC_FUNC_IMPL(__imp__sub_83173348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-18512
	ctx.r3.s64 = ctx.r11.s64 + -18512;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317335C"))) PPC_WEAK_FUNC(sub_8317335C);
PPC_FUNC_IMPL(__imp__sub_8317335C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173360"))) PPC_WEAK_FUNC(sub_83173360);
PPC_FUNC_IMPL(__imp__sub_83173360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,-18484
	ctx.r10.s64 = ctx.r11.s64 + -18484;
	// lwz r3,-18484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18484);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173374"))) PPC_WEAK_FUNC(sub_83173374);
PPC_FUNC_IMPL(__imp__sub_83173374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173378"))) PPC_WEAK_FUNC(sub_83173378);
PPC_FUNC_IMPL(__imp__sub_83173378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-18272
	ctx.r3.s64 = ctx.r11.s64 + -18272;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317338C"))) PPC_WEAK_FUNC(sub_8317338C);
PPC_FUNC_IMPL(__imp__sub_8317338C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173390"))) PPC_WEAK_FUNC(sub_83173390);
PPC_FUNC_IMPL(__imp__sub_83173390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-18048
	ctx.r3.s64 = ctx.r11.s64 + -18048;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831733A4"))) PPC_WEAK_FUNC(sub_831733A4);
PPC_FUNC_IMPL(__imp__sub_831733A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831733A8"))) PPC_WEAK_FUNC(sub_831733A8);
PPC_FUNC_IMPL(__imp__sub_831733A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-18020
	ctx.r3.s64 = ctx.r11.s64 + -18020;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831733BC"))) PPC_WEAK_FUNC(sub_831733BC);
PPC_FUNC_IMPL(__imp__sub_831733BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831733C0"))) PPC_WEAK_FUNC(sub_831733C0);
PPC_FUNC_IMPL(__imp__sub_831733C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-17776
	ctx.r3.s64 = ctx.r11.s64 + -17776;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831733D4"))) PPC_WEAK_FUNC(sub_831733D4);
PPC_FUNC_IMPL(__imp__sub_831733D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831733D8"))) PPC_WEAK_FUNC(sub_831733D8);
PPC_FUNC_IMPL(__imp__sub_831733D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-17648
	ctx.r3.s64 = ctx.r11.s64 + -17648;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831733EC"))) PPC_WEAK_FUNC(sub_831733EC);
PPC_FUNC_IMPL(__imp__sub_831733EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831733F0"))) PPC_WEAK_FUNC(sub_831733F0);
PPC_FUNC_IMPL(__imp__sub_831733F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,-28324
	ctx.r3.s64 = ctx.r11.s64 + -28324;
	// b 0x822a4748
	sub_822A4748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831733FC"))) PPC_WEAK_FUNC(sub_831733FC);
PPC_FUNC_IMPL(__imp__sub_831733FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173400"))) PPC_WEAK_FUNC(sub_83173400);
PPC_FUNC_IMPL(__imp__sub_83173400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,32660
	ctx.r3.s64 = ctx.r11.s64 + 32660;
	// b 0x822a4748
	sub_822A4748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317340C"))) PPC_WEAK_FUNC(sub_8317340C);
PPC_FUNC_IMPL(__imp__sub_8317340C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173410"))) PPC_WEAK_FUNC(sub_83173410);
PPC_FUNC_IMPL(__imp__sub_83173410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,32636
	ctx.r3.s64 = ctx.r11.s64 + 32636;
	// b 0x822a4748
	sub_822A4748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317341C"))) PPC_WEAK_FUNC(sub_8317341C);
PPC_FUNC_IMPL(__imp__sub_8317341C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173420"))) PPC_WEAK_FUNC(sub_83173420);
PPC_FUNC_IMPL(__imp__sub_83173420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,32612
	ctx.r3.s64 = ctx.r11.s64 + 32612;
	// b 0x822a4748
	sub_822A4748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317342C"))) PPC_WEAK_FUNC(sub_8317342C);
PPC_FUNC_IMPL(__imp__sub_8317342C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173430"))) PPC_WEAK_FUNC(sub_83173430);
PPC_FUNC_IMPL(__imp__sub_83173430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,-28348
	ctx.r3.s64 = ctx.r11.s64 + -28348;
	// b 0x822a4748
	sub_822A4748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317343C"))) PPC_WEAK_FUNC(sub_8317343C);
PPC_FUNC_IMPL(__imp__sub_8317343C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173440"))) PPC_WEAK_FUNC(sub_83173440);
PPC_FUNC_IMPL(__imp__sub_83173440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-17620
	ctx.r3.s64 = ctx.r11.s64 + -17620;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173454"))) PPC_WEAK_FUNC(sub_83173454);
PPC_FUNC_IMPL(__imp__sub_83173454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173458"))) PPC_WEAK_FUNC(sub_83173458);
PPC_FUNC_IMPL(__imp__sub_83173458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-17592
	ctx.r3.s64 = ctx.r11.s64 + -17592;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317346C"))) PPC_WEAK_FUNC(sub_8317346C);
PPC_FUNC_IMPL(__imp__sub_8317346C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173470"))) PPC_WEAK_FUNC(sub_83173470);
PPC_FUNC_IMPL(__imp__sub_83173470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-17564
	ctx.r3.s64 = ctx.r11.s64 + -17564;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173484"))) PPC_WEAK_FUNC(sub_83173484);
PPC_FUNC_IMPL(__imp__sub_83173484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173488"))) PPC_WEAK_FUNC(sub_83173488);
PPC_FUNC_IMPL(__imp__sub_83173488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-17536
	ctx.r3.s64 = ctx.r11.s64 + -17536;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317349C"))) PPC_WEAK_FUNC(sub_8317349C);
PPC_FUNC_IMPL(__imp__sub_8317349C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831734A0"))) PPC_WEAK_FUNC(sub_831734A0);
PPC_FUNC_IMPL(__imp__sub_831734A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-17508
	ctx.r3.s64 = ctx.r11.s64 + -17508;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831734B4"))) PPC_WEAK_FUNC(sub_831734B4);
PPC_FUNC_IMPL(__imp__sub_831734B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831734B8"))) PPC_WEAK_FUNC(sub_831734B8);
PPC_FUNC_IMPL(__imp__sub_831734B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831734CC"))) PPC_WEAK_FUNC(sub_831734CC);
PPC_FUNC_IMPL(__imp__sub_831734CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831734D0"))) PPC_WEAK_FUNC(sub_831734D0);
PPC_FUNC_IMPL(__imp__sub_831734D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-17248
	ctx.r3.s64 = ctx.r11.s64 + -17248;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831734E4"))) PPC_WEAK_FUNC(sub_831734E4);
PPC_FUNC_IMPL(__imp__sub_831734E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831734E8"))) PPC_WEAK_FUNC(sub_831734E8);
PPC_FUNC_IMPL(__imp__sub_831734E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-17220
	ctx.r3.s64 = ctx.r11.s64 + -17220;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831734FC"))) PPC_WEAK_FUNC(sub_831734FC);
PPC_FUNC_IMPL(__imp__sub_831734FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173500"))) PPC_WEAK_FUNC(sub_83173500);
PPC_FUNC_IMPL(__imp__sub_83173500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-17192
	ctx.r3.s64 = ctx.r11.s64 + -17192;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173514"))) PPC_WEAK_FUNC(sub_83173514);
PPC_FUNC_IMPL(__imp__sub_83173514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173518"))) PPC_WEAK_FUNC(sub_83173518);
PPC_FUNC_IMPL(__imp__sub_83173518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-17164
	ctx.r3.s64 = ctx.r11.s64 + -17164;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317352C"))) PPC_WEAK_FUNC(sub_8317352C);
PPC_FUNC_IMPL(__imp__sub_8317352C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173530"))) PPC_WEAK_FUNC(sub_83173530);
PPC_FUNC_IMPL(__imp__sub_83173530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-17040
	ctx.r3.s64 = ctx.r11.s64 + -17040;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173544"))) PPC_WEAK_FUNC(sub_83173544);
PPC_FUNC_IMPL(__imp__sub_83173544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173548"))) PPC_WEAK_FUNC(sub_83173548);
PPC_FUNC_IMPL(__imp__sub_83173548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,-17008
	ctx.r10.s64 = ctx.r11.s64 + -17008;
	// lwz r3,-17008(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17008);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317355C"))) PPC_WEAK_FUNC(sub_8317355C);
PPC_FUNC_IMPL(__imp__sub_8317355C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173560"))) PPC_WEAK_FUNC(sub_83173560);
PPC_FUNC_IMPL(__imp__sub_83173560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,-17000
	ctx.r10.s64 = ctx.r11.s64 + -17000;
	// lwz r3,-17000(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17000);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173574"))) PPC_WEAK_FUNC(sub_83173574);
PPC_FUNC_IMPL(__imp__sub_83173574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173578"))) PPC_WEAK_FUNC(sub_83173578);
PPC_FUNC_IMPL(__imp__sub_83173578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-16896
	ctx.r3.s64 = ctx.r11.s64 + -16896;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317358C"))) PPC_WEAK_FUNC(sub_8317358C);
PPC_FUNC_IMPL(__imp__sub_8317358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173590"))) PPC_WEAK_FUNC(sub_83173590);
PPC_FUNC_IMPL(__imp__sub_83173590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,-16868
	ctx.r10.s64 = ctx.r11.s64 + -16868;
	// lwz r3,-16868(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16868);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831735A4"))) PPC_WEAK_FUNC(sub_831735A4);
PPC_FUNC_IMPL(__imp__sub_831735A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831735A8"))) PPC_WEAK_FUNC(sub_831735A8);
PPC_FUNC_IMPL(__imp__sub_831735A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-16860
	ctx.r3.s64 = ctx.r11.s64 + -16860;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831735BC"))) PPC_WEAK_FUNC(sub_831735BC);
PPC_FUNC_IMPL(__imp__sub_831735BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831735C0"))) PPC_WEAK_FUNC(sub_831735C0);
PPC_FUNC_IMPL(__imp__sub_831735C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-16640
	ctx.r3.s64 = ctx.r11.s64 + -16640;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831735D4"))) PPC_WEAK_FUNC(sub_831735D4);
PPC_FUNC_IMPL(__imp__sub_831735D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831735D8"))) PPC_WEAK_FUNC(sub_831735D8);
PPC_FUNC_IMPL(__imp__sub_831735D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,-16612
	ctx.r10.s64 = ctx.r11.s64 + -16612;
	// lwz r3,-16612(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16612);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831735EC"))) PPC_WEAK_FUNC(sub_831735EC);
PPC_FUNC_IMPL(__imp__sub_831735EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831735F0"))) PPC_WEAK_FUNC(sub_831735F0);
PPC_FUNC_IMPL(__imp__sub_831735F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-16604
	ctx.r3.s64 = ctx.r11.s64 + -16604;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173604"))) PPC_WEAK_FUNC(sub_83173604);
PPC_FUNC_IMPL(__imp__sub_83173604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173608"))) PPC_WEAK_FUNC(sub_83173608);
PPC_FUNC_IMPL(__imp__sub_83173608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-16384
	ctx.r3.s64 = ctx.r11.s64 + -16384;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317361C"))) PPC_WEAK_FUNC(sub_8317361C);
PPC_FUNC_IMPL(__imp__sub_8317361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173620"))) PPC_WEAK_FUNC(sub_83173620);
PPC_FUNC_IMPL(__imp__sub_83173620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,-16356
	ctx.r10.s64 = ctx.r11.s64 + -16356;
	// lwz r3,-16356(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16356);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173634"))) PPC_WEAK_FUNC(sub_83173634);
PPC_FUNC_IMPL(__imp__sub_83173634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173638"))) PPC_WEAK_FUNC(sub_83173638);
PPC_FUNC_IMPL(__imp__sub_83173638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-16348
	ctx.r3.s64 = ctx.r11.s64 + -16348;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317364C"))) PPC_WEAK_FUNC(sub_8317364C);
PPC_FUNC_IMPL(__imp__sub_8317364C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173650"))) PPC_WEAK_FUNC(sub_83173650);
PPC_FUNC_IMPL(__imp__sub_83173650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-16128
	ctx.r3.s64 = ctx.r11.s64 + -16128;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173664"))) PPC_WEAK_FUNC(sub_83173664);
PPC_FUNC_IMPL(__imp__sub_83173664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173668"))) PPC_WEAK_FUNC(sub_83173668);
PPC_FUNC_IMPL(__imp__sub_83173668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,-16096
	ctx.r3.s64 = ctx.r11.s64 + -16096;
	// b 0x82f91940
	sub_82F91940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173674"))) PPC_WEAK_FUNC(sub_83173674);
PPC_FUNC_IMPL(__imp__sub_83173674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173678"))) PPC_WEAK_FUNC(sub_83173678);
PPC_FUNC_IMPL(__imp__sub_83173678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,-16072
	ctx.r10.s64 = ctx.r11.s64 + -16072;
	// lwz r3,-16072(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16072);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317368C"))) PPC_WEAK_FUNC(sub_8317368C);
PPC_FUNC_IMPL(__imp__sub_8317368C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173690"))) PPC_WEAK_FUNC(sub_83173690);
PPC_FUNC_IMPL(__imp__sub_83173690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,-16064
	ctx.r10.s64 = ctx.r11.s64 + -16064;
	// lwz r3,-16064(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16064);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831736A4"))) PPC_WEAK_FUNC(sub_831736A4);
PPC_FUNC_IMPL(__imp__sub_831736A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831736A8"))) PPC_WEAK_FUNC(sub_831736A8);
PPC_FUNC_IMPL(__imp__sub_831736A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-15952
	ctx.r3.s64 = ctx.r11.s64 + -15952;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831736BC"))) PPC_WEAK_FUNC(sub_831736BC);
PPC_FUNC_IMPL(__imp__sub_831736BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831736C0"))) PPC_WEAK_FUNC(sub_831736C0);
PPC_FUNC_IMPL(__imp__sub_831736C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-15824
	ctx.r3.s64 = ctx.r11.s64 + -15824;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831736D4"))) PPC_WEAK_FUNC(sub_831736D4);
PPC_FUNC_IMPL(__imp__sub_831736D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831736D8"))) PPC_WEAK_FUNC(sub_831736D8);
PPC_FUNC_IMPL(__imp__sub_831736D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-15696
	ctx.r3.s64 = ctx.r11.s64 + -15696;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831736EC"))) PPC_WEAK_FUNC(sub_831736EC);
PPC_FUNC_IMPL(__imp__sub_831736EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831736F0"))) PPC_WEAK_FUNC(sub_831736F0);
PPC_FUNC_IMPL(__imp__sub_831736F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,32584
	ctx.r3.s64 = ctx.r11.s64 + 32584;
	// b 0x822a4748
	sub_822A4748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831736FC"))) PPC_WEAK_FUNC(sub_831736FC);
PPC_FUNC_IMPL(__imp__sub_831736FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173700"))) PPC_WEAK_FUNC(sub_83173700);
PPC_FUNC_IMPL(__imp__sub_83173700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-15568
	ctx.r3.s64 = ctx.r11.s64 + -15568;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173714"))) PPC_WEAK_FUNC(sub_83173714);
PPC_FUNC_IMPL(__imp__sub_83173714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173718"))) PPC_WEAK_FUNC(sub_83173718);
PPC_FUNC_IMPL(__imp__sub_83173718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-15524
	ctx.r3.s64 = ctx.r11.s64 + -15524;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317372C"))) PPC_WEAK_FUNC(sub_8317372C);
PPC_FUNC_IMPL(__imp__sub_8317372C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173730"))) PPC_WEAK_FUNC(sub_83173730);
PPC_FUNC_IMPL(__imp__sub_83173730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-15296
	ctx.r3.s64 = ctx.r11.s64 + -15296;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173744"))) PPC_WEAK_FUNC(sub_83173744);
PPC_FUNC_IMPL(__imp__sub_83173744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173748"))) PPC_WEAK_FUNC(sub_83173748);
PPC_FUNC_IMPL(__imp__sub_83173748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-15168
	ctx.r3.s64 = ctx.r11.s64 + -15168;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317375C"))) PPC_WEAK_FUNC(sub_8317375C);
PPC_FUNC_IMPL(__imp__sub_8317375C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173760"))) PPC_WEAK_FUNC(sub_83173760);
PPC_FUNC_IMPL(__imp__sub_83173760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-15040
	ctx.r3.s64 = ctx.r11.s64 + -15040;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173774"))) PPC_WEAK_FUNC(sub_83173774);
PPC_FUNC_IMPL(__imp__sub_83173774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173778"))) PPC_WEAK_FUNC(sub_83173778);
PPC_FUNC_IMPL(__imp__sub_83173778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-14912
	ctx.r3.s64 = ctx.r11.s64 + -14912;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317378C"))) PPC_WEAK_FUNC(sub_8317378C);
PPC_FUNC_IMPL(__imp__sub_8317378C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173790"))) PPC_WEAK_FUNC(sub_83173790);
PPC_FUNC_IMPL(__imp__sub_83173790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-14784
	ctx.r3.s64 = ctx.r11.s64 + -14784;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831737A4"))) PPC_WEAK_FUNC(sub_831737A4);
PPC_FUNC_IMPL(__imp__sub_831737A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831737A8"))) PPC_WEAK_FUNC(sub_831737A8);
PPC_FUNC_IMPL(__imp__sub_831737A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-14656
	ctx.r3.s64 = ctx.r11.s64 + -14656;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831737BC"))) PPC_WEAK_FUNC(sub_831737BC);
PPC_FUNC_IMPL(__imp__sub_831737BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831737C0"))) PPC_WEAK_FUNC(sub_831737C0);
PPC_FUNC_IMPL(__imp__sub_831737C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,-14628
	ctx.r10.s64 = ctx.r11.s64 + -14628;
	// lwz r3,-14628(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14628);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831737D4"))) PPC_WEAK_FUNC(sub_831737D4);
PPC_FUNC_IMPL(__imp__sub_831737D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831737D8"))) PPC_WEAK_FUNC(sub_831737D8);
PPC_FUNC_IMPL(__imp__sub_831737D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-14620
	ctx.r3.s64 = ctx.r11.s64 + -14620;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831737EC"))) PPC_WEAK_FUNC(sub_831737EC);
PPC_FUNC_IMPL(__imp__sub_831737EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831737F0"))) PPC_WEAK_FUNC(sub_831737F0);
PPC_FUNC_IMPL(__imp__sub_831737F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,-14496
	ctx.r10.s64 = ctx.r11.s64 + -14496;
	// lwz r3,-14496(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14496);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173804"))) PPC_WEAK_FUNC(sub_83173804);
PPC_FUNC_IMPL(__imp__sub_83173804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173808"))) PPC_WEAK_FUNC(sub_83173808);
PPC_FUNC_IMPL(__imp__sub_83173808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-14384
	ctx.r3.s64 = ctx.r11.s64 + -14384;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317381C"))) PPC_WEAK_FUNC(sub_8317381C);
PPC_FUNC_IMPL(__imp__sub_8317381C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173820"))) PPC_WEAK_FUNC(sub_83173820);
PPC_FUNC_IMPL(__imp__sub_83173820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,-14488
	ctx.r10.s64 = ctx.r11.s64 + -14488;
	// lwz r3,-14488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14488);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173834"))) PPC_WEAK_FUNC(sub_83173834);
PPC_FUNC_IMPL(__imp__sub_83173834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173838"))) PPC_WEAK_FUNC(sub_83173838);
PPC_FUNC_IMPL(__imp__sub_83173838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-14256
	ctx.r3.s64 = ctx.r11.s64 + -14256;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317384C"))) PPC_WEAK_FUNC(sub_8317384C);
PPC_FUNC_IMPL(__imp__sub_8317384C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173850"))) PPC_WEAK_FUNC(sub_83173850);
PPC_FUNC_IMPL(__imp__sub_83173850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,-14228
	ctx.r10.s64 = ctx.r11.s64 + -14228;
	// lwz r3,-14228(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14228);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173864"))) PPC_WEAK_FUNC(sub_83173864);
PPC_FUNC_IMPL(__imp__sub_83173864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173868"))) PPC_WEAK_FUNC(sub_83173868);
PPC_FUNC_IMPL(__imp__sub_83173868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-14220
	ctx.r3.s64 = ctx.r11.s64 + -14220;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317387C"))) PPC_WEAK_FUNC(sub_8317387C);
PPC_FUNC_IMPL(__imp__sub_8317387C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173880"))) PPC_WEAK_FUNC(sub_83173880);
PPC_FUNC_IMPL(__imp__sub_83173880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,-14096
	ctx.r10.s64 = ctx.r11.s64 + -14096;
	// lwz r3,-14096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14096);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173894"))) PPC_WEAK_FUNC(sub_83173894);
PPC_FUNC_IMPL(__imp__sub_83173894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173898"))) PPC_WEAK_FUNC(sub_83173898);
PPC_FUNC_IMPL(__imp__sub_83173898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-13984
	ctx.r3.s64 = ctx.r11.s64 + -13984;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831738AC"))) PPC_WEAK_FUNC(sub_831738AC);
PPC_FUNC_IMPL(__imp__sub_831738AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831738B0"))) PPC_WEAK_FUNC(sub_831738B0);
PPC_FUNC_IMPL(__imp__sub_831738B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,-14088
	ctx.r10.s64 = ctx.r11.s64 + -14088;
	// lwz r3,-14088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14088);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82262600
	sub_82262600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831738C4"))) PPC_WEAK_FUNC(sub_831738C4);
PPC_FUNC_IMPL(__imp__sub_831738C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831738C8"))) PPC_WEAK_FUNC(sub_831738C8);
PPC_FUNC_IMPL(__imp__sub_831738C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-13856
	ctx.r3.s64 = ctx.r11.s64 + -13856;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831738DC"))) PPC_WEAK_FUNC(sub_831738DC);
PPC_FUNC_IMPL(__imp__sub_831738DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831738E0"))) PPC_WEAK_FUNC(sub_831738E0);
PPC_FUNC_IMPL(__imp__sub_831738E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-13728
	ctx.r3.s64 = ctx.r11.s64 + -13728;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831738F4"))) PPC_WEAK_FUNC(sub_831738F4);
PPC_FUNC_IMPL(__imp__sub_831738F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831738F8"))) PPC_WEAK_FUNC(sub_831738F8);
PPC_FUNC_IMPL(__imp__sub_831738F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-13600
	ctx.r3.s64 = ctx.r11.s64 + -13600;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317390C"))) PPC_WEAK_FUNC(sub_8317390C);
PPC_FUNC_IMPL(__imp__sub_8317390C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173910"))) PPC_WEAK_FUNC(sub_83173910);
PPC_FUNC_IMPL(__imp__sub_83173910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-13472
	ctx.r3.s64 = ctx.r11.s64 + -13472;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173924"))) PPC_WEAK_FUNC(sub_83173924);
PPC_FUNC_IMPL(__imp__sub_83173924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173928"))) PPC_WEAK_FUNC(sub_83173928);
PPC_FUNC_IMPL(__imp__sub_83173928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-13344
	ctx.r3.s64 = ctx.r11.s64 + -13344;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317393C"))) PPC_WEAK_FUNC(sub_8317393C);
PPC_FUNC_IMPL(__imp__sub_8317393C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173940"))) PPC_WEAK_FUNC(sub_83173940);
PPC_FUNC_IMPL(__imp__sub_83173940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-13216
	ctx.r3.s64 = ctx.r11.s64 + -13216;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173954"))) PPC_WEAK_FUNC(sub_83173954);
PPC_FUNC_IMPL(__imp__sub_83173954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173958"))) PPC_WEAK_FUNC(sub_83173958);
PPC_FUNC_IMPL(__imp__sub_83173958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-13088
	ctx.r3.s64 = ctx.r11.s64 + -13088;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317396C"))) PPC_WEAK_FUNC(sub_8317396C);
PPC_FUNC_IMPL(__imp__sub_8317396C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173970"))) PPC_WEAK_FUNC(sub_83173970);
PPC_FUNC_IMPL(__imp__sub_83173970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12960
	ctx.r3.s64 = ctx.r11.s64 + -12960;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173984"))) PPC_WEAK_FUNC(sub_83173984);
PPC_FUNC_IMPL(__imp__sub_83173984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173988"))) PPC_WEAK_FUNC(sub_83173988);
PPC_FUNC_IMPL(__imp__sub_83173988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12832
	ctx.r3.s64 = ctx.r11.s64 + -12832;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317399C"))) PPC_WEAK_FUNC(sub_8317399C);
PPC_FUNC_IMPL(__imp__sub_8317399C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831739A0"))) PPC_WEAK_FUNC(sub_831739A0);
PPC_FUNC_IMPL(__imp__sub_831739A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12704
	ctx.r3.s64 = ctx.r11.s64 + -12704;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831739B4"))) PPC_WEAK_FUNC(sub_831739B4);
PPC_FUNC_IMPL(__imp__sub_831739B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831739B8"))) PPC_WEAK_FUNC(sub_831739B8);
PPC_FUNC_IMPL(__imp__sub_831739B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12576
	ctx.r3.s64 = ctx.r11.s64 + -12576;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831739CC"))) PPC_WEAK_FUNC(sub_831739CC);
PPC_FUNC_IMPL(__imp__sub_831739CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831739D0"))) PPC_WEAK_FUNC(sub_831739D0);
PPC_FUNC_IMPL(__imp__sub_831739D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12448
	ctx.r3.s64 = ctx.r11.s64 + -12448;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831739E4"))) PPC_WEAK_FUNC(sub_831739E4);
PPC_FUNC_IMPL(__imp__sub_831739E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831739E8"))) PPC_WEAK_FUNC(sub_831739E8);
PPC_FUNC_IMPL(__imp__sub_831739E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12420
	ctx.r3.s64 = ctx.r11.s64 + -12420;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831739FC"))) PPC_WEAK_FUNC(sub_831739FC);
PPC_FUNC_IMPL(__imp__sub_831739FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173A00"))) PPC_WEAK_FUNC(sub_83173A00);
PPC_FUNC_IMPL(__imp__sub_83173A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12288
	ctx.r3.s64 = ctx.r11.s64 + -12288;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173A14"))) PPC_WEAK_FUNC(sub_83173A14);
PPC_FUNC_IMPL(__imp__sub_83173A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173A18"))) PPC_WEAK_FUNC(sub_83173A18);
PPC_FUNC_IMPL(__imp__sub_83173A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12160
	ctx.r3.s64 = ctx.r11.s64 + -12160;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173A2C"))) PPC_WEAK_FUNC(sub_83173A2C);
PPC_FUNC_IMPL(__imp__sub_83173A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173A30"))) PPC_WEAK_FUNC(sub_83173A30);
PPC_FUNC_IMPL(__imp__sub_83173A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12032
	ctx.r3.s64 = ctx.r11.s64 + -12032;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173A44"))) PPC_WEAK_FUNC(sub_83173A44);
PPC_FUNC_IMPL(__imp__sub_83173A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173A48"))) PPC_WEAK_FUNC(sub_83173A48);
PPC_FUNC_IMPL(__imp__sub_83173A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11904
	ctx.r3.s64 = ctx.r11.s64 + -11904;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173A5C"))) PPC_WEAK_FUNC(sub_83173A5C);
PPC_FUNC_IMPL(__imp__sub_83173A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173A60"))) PPC_WEAK_FUNC(sub_83173A60);
PPC_FUNC_IMPL(__imp__sub_83173A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11776
	ctx.r3.s64 = ctx.r11.s64 + -11776;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173A74"))) PPC_WEAK_FUNC(sub_83173A74);
PPC_FUNC_IMPL(__imp__sub_83173A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173A78"))) PPC_WEAK_FUNC(sub_83173A78);
PPC_FUNC_IMPL(__imp__sub_83173A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11648
	ctx.r3.s64 = ctx.r11.s64 + -11648;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173A8C"))) PPC_WEAK_FUNC(sub_83173A8C);
PPC_FUNC_IMPL(__imp__sub_83173A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173A90"))) PPC_WEAK_FUNC(sub_83173A90);
PPC_FUNC_IMPL(__imp__sub_83173A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11520
	ctx.r3.s64 = ctx.r11.s64 + -11520;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173AA4"))) PPC_WEAK_FUNC(sub_83173AA4);
PPC_FUNC_IMPL(__imp__sub_83173AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173AA8"))) PPC_WEAK_FUNC(sub_83173AA8);
PPC_FUNC_IMPL(__imp__sub_83173AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11392
	ctx.r3.s64 = ctx.r11.s64 + -11392;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173ABC"))) PPC_WEAK_FUNC(sub_83173ABC);
PPC_FUNC_IMPL(__imp__sub_83173ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173AC0"))) PPC_WEAK_FUNC(sub_83173AC0);
PPC_FUNC_IMPL(__imp__sub_83173AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11264
	ctx.r3.s64 = ctx.r11.s64 + -11264;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173AD4"))) PPC_WEAK_FUNC(sub_83173AD4);
PPC_FUNC_IMPL(__imp__sub_83173AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83173AD8"))) PPC_WEAK_FUNC(sub_83173AD8);
PPC_FUNC_IMPL(__imp__sub_83173AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11236
	ctx.r3.s64 = ctx.r11.s64 + -11236;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83173AEC"))) PPC_WEAK_FUNC(sub_83173AEC);
PPC_FUNC_IMPL(__imp__sub_83173AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

