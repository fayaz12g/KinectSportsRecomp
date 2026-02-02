#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83169230"))) PPC_WEAK_FUNC(sub_83169230);
PPC_FUNC_IMPL(__imp__sub_83169230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,19712
	ctx.r9.s64 = ctx.r10.s64 + 19712;
	// lwz r11,19168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19168);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169248"))) PPC_WEAK_FUNC(sub_83169248);
PPC_FUNC_IMPL(__imp__sub_83169248) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r11,10428
	ctx.r9.s64 = ctx.r11.s64 + 10428;
	// addi r4,r10,19712
	ctx.r4.s64 = ctx.r10.s64 + 19712;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-11632
	ctx.r5.s64 = ctx.r8.s64 + -11632;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,11952
	ctx.r4.s64 = ctx.r7.s64 + 11952;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-10816
	ctx.r3.s64 = ctx.r6.s64 + -10816;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82d32af0
	ctx.lr = 0x831692B4;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831692C4"))) PPC_WEAK_FUNC(sub_831692C4);
PPC_FUNC_IMPL(__imp__sub_831692C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831692C8"))) PPC_WEAK_FUNC(sub_831692C8);
PPC_FUNC_IMPL(__imp__sub_831692C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,10488
	ctx.r6.s64 = ctx.r10.s64 + 10488;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-11632
	ctx.r5.s64 = ctx.r9.s64 + -11632;
	// addi r4,r8,11980
	ctx.r4.s64 = ctx.r8.s64 + 11980;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10768
	ctx.r3.s64 = ctx.r7.s64 + -10768;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82d32af0
	ctx.lr = 0x83169330;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169344"))) PPC_WEAK_FUNC(sub_83169344);
PPC_FUNC_IMPL(__imp__sub_83169344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83169348"))) PPC_WEAK_FUNC(sub_83169348);
PPC_FUNC_IMPL(__imp__sub_83169348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,10584
	ctx.r6.s64 = ctx.r10.s64 + 10584;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-11632
	ctx.r5.s64 = ctx.r9.s64 + -11632;
	// addi r4,r8,12012
	ctx.r4.s64 = ctx.r8.s64 + 12012;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10720
	ctx.r3.s64 = ctx.r7.s64 + -10720;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,7
	ctx.r31.s64 = 7;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82d32af0
	ctx.lr = 0x831693B0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831693C4"))) PPC_WEAK_FUNC(sub_831693C4);
PPC_FUNC_IMPL(__imp__sub_831693C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831693C8"))) PPC_WEAK_FUNC(sub_831693C8);
PPC_FUNC_IMPL(__imp__sub_831693C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,10752
	ctx.r6.s64 = ctx.r10.s64 + 10752;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-11632
	ctx.r5.s64 = ctx.r9.s64 + -11632;
	// addi r4,r8,12040
	ctx.r4.s64 = ctx.r8.s64 + 12040;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10672
	ctx.r3.s64 = ctx.r7.s64 + -10672;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82d32af0
	ctx.lr = 0x83169430;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169444"))) PPC_WEAK_FUNC(sub_83169444);
PPC_FUNC_IMPL(__imp__sub_83169444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83169448"))) PPC_WEAK_FUNC(sub_83169448);
PPC_FUNC_IMPL(__imp__sub_83169448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,10872
	ctx.r6.s64 = ctx.r10.s64 + 10872;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-11632
	ctx.r5.s64 = ctx.r9.s64 + -11632;
	// addi r4,r8,12072
	ctx.r4.s64 = ctx.r8.s64 + 12072;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10624
	ctx.r3.s64 = ctx.r7.s64 + -10624;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d32af0
	ctx.lr = 0x831694B0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831694C4"))) PPC_WEAK_FUNC(sub_831694C4);
PPC_FUNC_IMPL(__imp__sub_831694C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831694C8"))) PPC_WEAK_FUNC(sub_831694C8);
PPC_FUNC_IMPL(__imp__sub_831694C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,10944
	ctx.r6.s64 = ctx.r10.s64 + 10944;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-11632
	ctx.r5.s64 = ctx.r9.s64 + -11632;
	// addi r4,r8,12104
	ctx.r4.s64 = ctx.r8.s64 + 12104;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10576
	ctx.r3.s64 = ctx.r7.s64 + -10576;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,6
	ctx.r31.s64 = 6;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82d32af0
	ctx.lr = 0x83169530;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169544"))) PPC_WEAK_FUNC(sub_83169544);
PPC_FUNC_IMPL(__imp__sub_83169544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83169548"))) PPC_WEAK_FUNC(sub_83169548);
PPC_FUNC_IMPL(__imp__sub_83169548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,11088
	ctx.r6.s64 = ctx.r10.s64 + 11088;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-11632
	ctx.r5.s64 = ctx.r9.s64 + -11632;
	// addi r4,r8,12132
	ctx.r4.s64 = ctx.r8.s64 + 12132;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10528
	ctx.r3.s64 = ctx.r7.s64 + -10528;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82d32af0
	ctx.lr = 0x831695B0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831695C4"))) PPC_WEAK_FUNC(sub_831695C4);
PPC_FUNC_IMPL(__imp__sub_831695C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831695C8"))) PPC_WEAK_FUNC(sub_831695C8);
PPC_FUNC_IMPL(__imp__sub_831695C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,11184
	ctx.r6.s64 = ctx.r10.s64 + 11184;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-11632
	ctx.r5.s64 = ctx.r9.s64 + -11632;
	// addi r4,r8,12156
	ctx.r4.s64 = ctx.r8.s64 + 12156;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10480
	ctx.r3.s64 = ctx.r7.s64 + -10480;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82d32af0
	ctx.lr = 0x83169630;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169644"))) PPC_WEAK_FUNC(sub_83169644);
PPC_FUNC_IMPL(__imp__sub_83169644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83169648"))) PPC_WEAK_FUNC(sub_83169648);
PPC_FUNC_IMPL(__imp__sub_83169648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,11280
	ctx.r6.s64 = ctx.r10.s64 + 11280;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-10480
	ctx.r5.s64 = ctx.r9.s64 + -10480;
	// addi r4,r8,12184
	ctx.r4.s64 = ctx.r8.s64 + 12184;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10432
	ctx.r3.s64 = ctx.r7.s64 + -10432;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82d32af0
	ctx.lr = 0x831696B0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831696C4"))) PPC_WEAK_FUNC(sub_831696C4);
PPC_FUNC_IMPL(__imp__sub_831696C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831696C8"))) PPC_WEAK_FUNC(sub_831696C8);
PPC_FUNC_IMPL(__imp__sub_831696C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,11328
	ctx.r6.s64 = ctx.r10.s64 + 11328;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-10480
	ctx.r5.s64 = ctx.r9.s64 + -10480;
	// addi r4,r8,12224
	ctx.r4.s64 = ctx.r8.s64 + 12224;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-10384
	ctx.r3.s64 = ctx.r7.s64 + -10384;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82d32af0
	ctx.lr = 0x83169734;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169748"))) PPC_WEAK_FUNC(sub_83169748);
PPC_FUNC_IMPL(__imp__sub_83169748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,11376
	ctx.r6.s64 = ctx.r10.s64 + 11376;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-10480
	ctx.r5.s64 = ctx.r9.s64 + -10480;
	// addi r4,r8,12264
	ctx.r4.s64 = ctx.r8.s64 + 12264;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10336
	ctx.r3.s64 = ctx.r7.s64 + -10336;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82d32af0
	ctx.lr = 0x831697B0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831697C4"))) PPC_WEAK_FUNC(sub_831697C4);
PPC_FUNC_IMPL(__imp__sub_831697C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831697C8"))) PPC_WEAK_FUNC(sub_831697C8);
PPC_FUNC_IMPL(__imp__sub_831697C8) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-10480
	ctx.r5.s64 = ctx.r10.s64 + -10480;
	// addi r4,r9,12312
	ctx.r4.s64 = ctx.r9.s64 + 12312;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-10288
	ctx.r3.s64 = ctx.r8.s64 + -10288;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82d32af0
	ctx.lr = 0x83169820;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169830"))) PPC_WEAK_FUNC(sub_83169830);
PPC_FUNC_IMPL(__imp__sub_83169830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,11424
	ctx.r6.s64 = ctx.r10.s64 + 11424;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-10480
	ctx.r5.s64 = ctx.r9.s64 + -10480;
	// addi r4,r8,12352
	ctx.r4.s64 = ctx.r8.s64 + 12352;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10240
	ctx.r3.s64 = ctx.r7.s64 + -10240;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82d32af0
	ctx.lr = 0x83169898;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831698AC"))) PPC_WEAK_FUNC(sub_831698AC);
PPC_FUNC_IMPL(__imp__sub_831698AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831698B0"))) PPC_WEAK_FUNC(sub_831698B0);
PPC_FUNC_IMPL(__imp__sub_831698B0) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-10480
	ctx.r5.s64 = ctx.r10.s64 + -10480;
	// addi r4,r9,12392
	ctx.r4.s64 = ctx.r9.s64 + 12392;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-10192
	ctx.r3.s64 = ctx.r8.s64 + -10192;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82d32af0
	ctx.lr = 0x83169908;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169918"))) PPC_WEAK_FUNC(sub_83169918);
PPC_FUNC_IMPL(__imp__sub_83169918) {
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
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,12424
	ctx.r7.s64 = ctx.r10.s64 + 12424;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,12496
	ctx.r4.s64 = ctx.r9.s64 + 12496;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-10144
	ctx.r3.s64 = ctx.r8.s64 + -10144;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x83169978;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169988"))) PPC_WEAK_FUNC(sub_83169988);
PPC_FUNC_IMPL(__imp__sub_83169988) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// addi r4,r9,12532
	ctx.r4.s64 = ctx.r9.s64 + 12532;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r8,-10096
	ctx.r3.s64 = ctx.r8.s64 + -10096;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d32af0
	ctx.lr = 0x831699E4;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831699F4"))) PPC_WEAK_FUNC(sub_831699F4);
PPC_FUNC_IMPL(__imp__sub_831699F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831699F8"))) PPC_WEAK_FUNC(sub_831699F8);
PPC_FUNC_IMPL(__imp__sub_831699F8) {
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
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r5,r10,12604
	ctx.r5.s64 = ctx.r10.s64 + 12604;
	// addi r4,r9,12616
	ctx.r4.s64 = ctx.r9.s64 + 12616;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,12712
	ctx.r4.s64 = ctx.r7.s64 + 12712;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-10048
	ctx.r3.s64 = ctx.r6.s64 + -10048;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82d32af0
	ctx.lr = 0x83169A64;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169A74"))) PPC_WEAK_FUNC(sub_83169A74);
PPC_FUNC_IMPL(__imp__sub_83169A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83169A78"))) PPC_WEAK_FUNC(sub_83169A78);
PPC_FUNC_IMPL(__imp__sub_83169A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,12724
	ctx.r6.s64 = ctx.r10.s64 + 12724;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-10048
	ctx.r5.s64 = ctx.r9.s64 + -10048;
	// addi r4,r8,12748
	ctx.r4.s64 = ctx.r8.s64 + 12748;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-10000
	ctx.r3.s64 = ctx.r7.s64 + -10000;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82d32af0
	ctx.lr = 0x83169AE0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169AF4"))) PPC_WEAK_FUNC(sub_83169AF4);
PPC_FUNC_IMPL(__imp__sub_83169AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83169AF8"))) PPC_WEAK_FUNC(sub_83169AF8);
PPC_FUNC_IMPL(__imp__sub_83169AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,12860
	ctx.r6.s64 = ctx.r10.s64 + 12860;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-10048
	ctx.r5.s64 = ctx.r9.s64 + -10048;
	// addi r4,r8,12932
	ctx.r4.s64 = ctx.r8.s64 + 12932;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-9952
	ctx.r3.s64 = ctx.r7.s64 + -9952;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82d32af0
	ctx.lr = 0x83169B60;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169B74"))) PPC_WEAK_FUNC(sub_83169B74);
PPC_FUNC_IMPL(__imp__sub_83169B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83169B78"))) PPC_WEAK_FUNC(sub_83169B78);
PPC_FUNC_IMPL(__imp__sub_83169B78) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// addi r4,r9,12948
	ctx.r4.s64 = ctx.r9.s64 + 12948;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-9904
	ctx.r3.s64 = ctx.r8.s64 + -9904;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d32af0
	ctx.lr = 0x83169BD0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169BE0"))) PPC_WEAK_FUNC(sub_83169BE0);
PPC_FUNC_IMPL(__imp__sub_83169BE0) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-9808
	ctx.r5.s64 = ctx.r10.s64 + -9808;
	// addi r4,r9,12968
	ctx.r4.s64 = ctx.r9.s64 + 12968;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-9856
	ctx.r3.s64 = ctx.r8.s64 + -9856;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82d32af0
	ctx.lr = 0x83169C38;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169C48"))) PPC_WEAK_FUNC(sub_83169C48);
PPC_FUNC_IMPL(__imp__sub_83169C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// addi r9,r11,13816
	ctx.r9.s64 = ctx.r11.s64 + 13816;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// addi r6,r9,20
	ctx.r6.s64 = ctx.r9.s64 + 20;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// addi r4,r8,13860
	ctx.r4.s64 = ctx.r8.s64 + 13860;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-9808
	ctx.r3.s64 = ctx.r7.s64 + -9808;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82d32af0
	ctx.lr = 0x83169CB0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169CC4"))) PPC_WEAK_FUNC(sub_83169CC4);
PPC_FUNC_IMPL(__imp__sub_83169CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83169CC8"))) PPC_WEAK_FUNC(sub_83169CC8);
PPC_FUNC_IMPL(__imp__sub_83169CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,19980
	ctx.r9.s64 = ctx.r10.s64 + 19980;
	// lwz r11,19976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19976);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169CE0"))) PPC_WEAK_FUNC(sub_83169CE0);
PPC_FUNC_IMPL(__imp__sub_83169CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// addi r5,r10,19980
	ctx.r5.s64 = ctx.r10.s64 + 19980;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// addi r4,r7,14028
	ctx.r4.s64 = ctx.r7.s64 + 14028;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-9760
	ctx.r3.s64 = ctx.r6.s64 + -9760;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,14008
	ctx.r9.s64 = ctx.r9.s64 + 14008;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82d32af0
	ctx.lr = 0x83169D4C;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169D60"))) PPC_WEAK_FUNC(sub_83169D60);
PPC_FUNC_IMPL(__imp__sub_83169D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,14072
	ctx.r6.s64 = ctx.r10.s64 + 14072;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-9760
	ctx.r5.s64 = ctx.r9.s64 + -9760;
	// addi r4,r8,14120
	ctx.r4.s64 = ctx.r8.s64 + 14120;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-9712
	ctx.r3.s64 = ctx.r7.s64 + -9712;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82d32af0
	ctx.lr = 0x83169DC8;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169DDC"))) PPC_WEAK_FUNC(sub_83169DDC);
PPC_FUNC_IMPL(__imp__sub_83169DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83169DE0"))) PPC_WEAK_FUNC(sub_83169DE0);
PPC_FUNC_IMPL(__imp__sub_83169DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,20016
	ctx.r9.s64 = ctx.r10.s64 + 20016;
	// lwz r11,20008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20008);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169DF8"))) PPC_WEAK_FUNC(sub_83169DF8);
PPC_FUNC_IMPL(__imp__sub_83169DF8) {
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
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r10,20016
	ctx.r5.s64 = ctx.r10.s64 + 20016;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// li r10,12
	ctx.r10.s64 = 12;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// addi r4,r7,-9944
	ctx.r4.s64 = ctx.r7.s64 + -9944;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-9664
	ctx.r3.s64 = ctx.r6.s64 + -9664;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,14408
	ctx.r9.s64 = ctx.r9.s64 + 14408;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d32af0
	ctx.lr = 0x83169E64;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169E74"))) PPC_WEAK_FUNC(sub_83169E74);
PPC_FUNC_IMPL(__imp__sub_83169E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83169E78"))) PPC_WEAK_FUNC(sub_83169E78);
PPC_FUNC_IMPL(__imp__sub_83169E78) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// addi r4,r9,14652
	ctx.r4.s64 = ctx.r9.s64 + 14652;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-9616
	ctx.r3.s64 = ctx.r8.s64 + -9616;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d32af0
	ctx.lr = 0x83169ED0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169EE0"))) PPC_WEAK_FUNC(sub_83169EE0);
PPC_FUNC_IMPL(__imp__sub_83169EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,14692
	ctx.r6.s64 = ctx.r10.s64 + 14692;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-9424
	ctx.r5.s64 = ctx.r9.s64 + -9424;
	// addi r4,r8,14740
	ctx.r4.s64 = ctx.r8.s64 + 14740;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-9568
	ctx.r3.s64 = ctx.r7.s64 + -9568;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,164
	ctx.r6.s64 = 164;
	// bl 0x82d32af0
	ctx.lr = 0x83169F48;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169F5C"))) PPC_WEAK_FUNC(sub_83169F5C);
PPC_FUNC_IMPL(__imp__sub_83169F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83169F60"))) PPC_WEAK_FUNC(sub_83169F60);
PPC_FUNC_IMPL(__imp__sub_83169F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,14752
	ctx.r6.s64 = ctx.r10.s64 + 14752;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-9568
	ctx.r5.s64 = ctx.r9.s64 + -9568;
	// addi r4,r8,14776
	ctx.r4.s64 = ctx.r8.s64 + 14776;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-9520
	ctx.r3.s64 = ctx.r7.s64 + -9520;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,352
	ctx.r6.s64 = 352;
	// bl 0x82d32af0
	ctx.lr = 0x83169FC8;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83169FDC"))) PPC_WEAK_FUNC(sub_83169FDC);
PPC_FUNC_IMPL(__imp__sub_83169FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83169FE0"))) PPC_WEAK_FUNC(sub_83169FE0);
PPC_FUNC_IMPL(__imp__sub_83169FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,14812
	ctx.r6.s64 = ctx.r10.s64 + 14812;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-10048
	ctx.r5.s64 = ctx.r9.s64 + -10048;
	// addi r4,r8,14836
	ctx.r4.s64 = ctx.r8.s64 + 14836;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-9472
	ctx.r3.s64 = ctx.r7.s64 + -9472;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82d32af0
	ctx.lr = 0x8316A048;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A05C"))) PPC_WEAK_FUNC(sub_8316A05C);
PPC_FUNC_IMPL(__imp__sub_8316A05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A060"))) PPC_WEAK_FUNC(sub_8316A060);
PPC_FUNC_IMPL(__imp__sub_8316A060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// addi r5,r10,15240
	ctx.r5.s64 = ctx.r10.s64 + 15240;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// addi r4,r7,15432
	ctx.r4.s64 = ctx.r7.s64 + 15432;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-9424
	ctx.r3.s64 = ctx.r6.s64 + -9424;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,8
	ctx.r31.s64 = 8;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,15196
	ctx.r9.s64 = ctx.r9.s64 + 15196;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,140
	ctx.r6.s64 = 140;
	// bl 0x82d32af0
	ctx.lr = 0x8316A0CC;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A0E0"))) PPC_WEAK_FUNC(sub_8316A0E0);
PPC_FUNC_IMPL(__imp__sub_8316A0E0) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// addi r4,r9,18840
	ctx.r4.s64 = ctx.r9.s64 + 18840;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-9228
	ctx.r3.s64 = ctx.r8.s64 + -9228;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82d32af0
	ctx.lr = 0x8316A138;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A148"))) PPC_WEAK_FUNC(sub_8316A148);
PPC_FUNC_IMPL(__imp__sub_8316A148) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// addi r4,r9,19172
	ctx.r4.s64 = ctx.r9.s64 + 19172;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-9180
	ctx.r3.s64 = ctx.r8.s64 + -9180;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,108
	ctx.r6.s64 = 108;
	// bl 0x82d32af0
	ctx.lr = 0x8316A1A0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A1B0"))) PPC_WEAK_FUNC(sub_8316A1B0);
PPC_FUNC_IMPL(__imp__sub_8316A1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,21624
	ctx.r6.s64 = ctx.r10.s64 + 21624;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,21712
	ctx.r4.s64 = ctx.r8.s64 + 21712;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-9132
	ctx.r3.s64 = ctx.r7.s64 + -9132;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x82d32af0
	ctx.lr = 0x8316A218;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A22C"))) PPC_WEAK_FUNC(sub_8316A22C);
PPC_FUNC_IMPL(__imp__sub_8316A22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A230"))) PPC_WEAK_FUNC(sub_8316A230);
PPC_FUNC_IMPL(__imp__sub_8316A230) {
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
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,21864
	ctx.r7.s64 = ctx.r10.s64 + 21864;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,21988
	ctx.r4.s64 = ctx.r9.s64 + 21988;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-9084
	ctx.r3.s64 = ctx.r8.s64 + -9084;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316A290;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A2A0"))) PPC_WEAK_FUNC(sub_8316A2A0);
PPC_FUNC_IMPL(__imp__sub_8316A2A0) {
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
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,21948
	ctx.r7.s64 = ctx.r10.s64 + 21948;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,22020
	ctx.r4.s64 = ctx.r9.s64 + 22020;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-9036
	ctx.r3.s64 = ctx.r8.s64 + -9036;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316A300;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A310"))) PPC_WEAK_FUNC(sub_8316A310);
PPC_FUNC_IMPL(__imp__sub_8316A310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,23216
	ctx.r9.s64 = ctx.r10.s64 + 23216;
	// lwz r11,23160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23160);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A328"))) PPC_WEAK_FUNC(sub_8316A328);
PPC_FUNC_IMPL(__imp__sub_8316A328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// addi r5,r10,23216
	ctx.r5.s64 = ctx.r10.s64 + 23216;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// addi r4,r7,22040
	ctx.r4.s64 = ctx.r7.s64 + 22040;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-8988
	ctx.r3.s64 = ctx.r6.s64 + -8988;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,21928
	ctx.r9.s64 = ctx.r9.s64 + 21928;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82d32af0
	ctx.lr = 0x8316A394;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A3A8"))) PPC_WEAK_FUNC(sub_8316A3A8);
PPC_FUNC_IMPL(__imp__sub_8316A3A8) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// addi r4,r9,22664
	ctx.r4.s64 = ctx.r9.s64 + 22664;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-8936
	ctx.r3.s64 = ctx.r8.s64 + -8936;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82d32af0
	ctx.lr = 0x8316A400;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A410"))) PPC_WEAK_FUNC(sub_8316A410);
PPC_FUNC_IMPL(__imp__sub_8316A410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,23216
	ctx.r6.s64 = ctx.r10.s64 + 23216;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-9952
	ctx.r5.s64 = ctx.r9.s64 + -9952;
	// addi r4,r8,23360
	ctx.r4.s64 = ctx.r8.s64 + 23360;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8868
	ctx.r3.s64 = ctx.r7.s64 + -8868;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82d32af0
	ctx.lr = 0x8316A478;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A48C"))) PPC_WEAK_FUNC(sub_8316A48C);
PPC_FUNC_IMPL(__imp__sub_8316A48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A490"))) PPC_WEAK_FUNC(sub_8316A490);
PPC_FUNC_IMPL(__imp__sub_8316A490) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x8316A4B4;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,23360
	ctx.r11.s64 = ctx.r11.s64 + 23360;
	// addi r6,r9,-8884
	ctx.r6.s64 = ctx.r9.s64 + -8884;
	// lis r8,-32030
	ctx.r8.s64 = -2099118080;
	// stw r11,-8884(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8884, ctx.r11.u32);
	// lis r7,-32030
	ctx.r7.s64 = -2099118080;
	// addi r9,r10,23328
	ctx.r9.s64 = ctx.r10.s64 + 23328;
	// addi r10,r8,30488
	ctx.r10.s64 = ctx.r8.s64 + 30488;
	// addi r11,r7,30568
	ctx.r11.s64 = ctx.r7.s64 + 30568;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A4FC"))) PPC_WEAK_FUNC(sub_8316A4FC);
PPC_FUNC_IMPL(__imp__sub_8316A4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A500"))) PPC_WEAK_FUNC(sub_8316A500);
PPC_FUNC_IMPL(__imp__sub_8316A500) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r11,r11,23784
	ctx.r11.s64 = ctx.r11.s64 + 23784;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,168
	ctx.r6.s64 = ctx.r11.s64 + 168;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,-8452
	ctx.r5.s64 = ctx.r9.s64 + -8452;
	// addi r4,r8,24068
	ctx.r4.s64 = ctx.r8.s64 + 24068;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,-8820
	ctx.r3.s64 = ctx.r7.s64 + -8820;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82d32af0
	ctx.lr = 0x8316A564;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A574"))) PPC_WEAK_FUNC(sub_8316A574);
PPC_FUNC_IMPL(__imp__sub_8316A574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A578"))) PPC_WEAK_FUNC(sub_8316A578);
PPC_FUNC_IMPL(__imp__sub_8316A578) {
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
	// bl 0x82e32e70
	ctx.lr = 0x8316A590;
	sub_82E32E70(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r8,r9,-8772
	ctx.r8.s64 = ctx.r9.s64 + -8772;
	// addi r11,r11,24068
	ctx.r11.s64 = ctx.r11.s64 + 24068;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// stw r11,-8772(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8772, ctx.r11.u32);
	// lis r9,-32030
	ctx.r9.s64 = -2099118080;
	// addi r10,r10,30672
	ctx.r10.s64 = ctx.r10.s64 + 30672;
	// addi r9,r9,30688
	ctx.r9.s64 = ctx.r9.s64 + 30688;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A5D4"))) PPC_WEAK_FUNC(sub_8316A5D4);
PPC_FUNC_IMPL(__imp__sub_8316A5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A5D8"))) PPC_WEAK_FUNC(sub_8316A5D8);
PPC_FUNC_IMPL(__imp__sub_8316A5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,24128
	ctx.r6.s64 = ctx.r10.s64 + 24128;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-17052
	ctx.r5.s64 = ctx.r9.s64 + -17052;
	// addi r4,r8,24252
	ctx.r4.s64 = ctx.r8.s64 + 24252;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8756
	ctx.r3.s64 = ctx.r7.s64 + -8756;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,56
	ctx.r6.s64 = 56;
	// bl 0x82d32af0
	ctx.lr = 0x8316A640;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A654"))) PPC_WEAK_FUNC(sub_8316A654);
PPC_FUNC_IMPL(__imp__sub_8316A654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A658"))) PPC_WEAK_FUNC(sub_8316A658);
PPC_FUNC_IMPL(__imp__sub_8316A658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,24320
	ctx.r6.s64 = ctx.r10.s64 + 24320;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-9952
	ctx.r5.s64 = ctx.r9.s64 + -9952;
	// addi r4,r8,24452
	ctx.r4.s64 = ctx.r8.s64 + 24452;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8692
	ctx.r3.s64 = ctx.r7.s64 + -8692;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82d32af0
	ctx.lr = 0x8316A6C0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A6D4"))) PPC_WEAK_FUNC(sub_8316A6D4);
PPC_FUNC_IMPL(__imp__sub_8316A6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A6D8"))) PPC_WEAK_FUNC(sub_8316A6D8);
PPC_FUNC_IMPL(__imp__sub_8316A6D8) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x8316A6FC;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,24452
	ctx.r11.s64 = ctx.r11.s64 + 24452;
	// addi r6,r9,-8708
	ctx.r6.s64 = ctx.r9.s64 + -8708;
	// lis r8,-32030
	ctx.r8.s64 = -2099118080;
	// stw r11,-8708(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8708, ctx.r11.u32);
	// lis r7,-32030
	ctx.r7.s64 = -2099118080;
	// addi r9,r10,24420
	ctx.r9.s64 = ctx.r10.s64 + 24420;
	// addi r10,r8,31136
	ctx.r10.s64 = ctx.r8.s64 + 31136;
	// addi r11,r7,31216
	ctx.r11.s64 = ctx.r7.s64 + 31216;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A744"))) PPC_WEAK_FUNC(sub_8316A744);
PPC_FUNC_IMPL(__imp__sub_8316A744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A748"))) PPC_WEAK_FUNC(sub_8316A748);
PPC_FUNC_IMPL(__imp__sub_8316A748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,24528
	ctx.r6.s64 = ctx.r10.s64 + 24528;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-17052
	ctx.r5.s64 = ctx.r9.s64 + -17052;
	// addi r4,r8,24652
	ctx.r4.s64 = ctx.r8.s64 + 24652;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8644
	ctx.r3.s64 = ctx.r7.s64 + -8644;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82d32af0
	ctx.lr = 0x8316A7B0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A7C4"))) PPC_WEAK_FUNC(sub_8316A7C4);
PPC_FUNC_IMPL(__imp__sub_8316A7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A7C8"))) PPC_WEAK_FUNC(sub_8316A7C8);
PPC_FUNC_IMPL(__imp__sub_8316A7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,24848
	ctx.r6.s64 = ctx.r10.s64 + 24848;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,25064
	ctx.r4.s64 = ctx.r8.s64 + 25064;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-8596
	ctx.r3.s64 = ctx.r7.s64 + -8596;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82d32af0
	ctx.lr = 0x8316A834;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A848"))) PPC_WEAK_FUNC(sub_8316A848);
PPC_FUNC_IMPL(__imp__sub_8316A848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,24920
	ctx.r6.s64 = ctx.r10.s64 + 24920;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,25096
	ctx.r4.s64 = ctx.r8.s64 + 25096;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-8548
	ctx.r3.s64 = ctx.r7.s64 + -8548;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82d32af0
	ctx.lr = 0x8316A8B4;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A8C8"))) PPC_WEAK_FUNC(sub_8316A8C8);
PPC_FUNC_IMPL(__imp__sub_8316A8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,24968
	ctx.r6.s64 = ctx.r10.s64 + 24968;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,25132
	ctx.r4.s64 = ctx.r8.s64 + 25132;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-8500
	ctx.r3.s64 = ctx.r7.s64 + -8500;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82d32af0
	ctx.lr = 0x8316A934;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A948"))) PPC_WEAK_FUNC(sub_8316A948);
PPC_FUNC_IMPL(__imp__sub_8316A948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,24240
	ctx.r9.s64 = ctx.r10.s64 + 24240;
	// lwz r11,24192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24192);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A960"))) PPC_WEAK_FUNC(sub_8316A960);
PPC_FUNC_IMPL(__imp__sub_8316A960) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r11,25752
	ctx.r9.s64 = ctx.r11.s64 + 25752;
	// addi r4,r10,24240
	ctx.r4.s64 = ctx.r10.s64 + 24240;
	// addi r5,r9,80
	ctx.r5.s64 = ctx.r9.s64 + 80;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,25856
	ctx.r4.s64 = ctx.r7.s64 + 25856;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-8452
	ctx.r3.s64 = ctx.r6.s64 + -8452;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82d32af0
	ctx.lr = 0x8316A9CC;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316A9DC"))) PPC_WEAK_FUNC(sub_8316A9DC);
PPC_FUNC_IMPL(__imp__sub_8316A9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316A9E0"))) PPC_WEAK_FUNC(sub_8316A9E0);
PPC_FUNC_IMPL(__imp__sub_8316A9E0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e34670
	ctx.lr = 0x8316A9F8;
	sub_82E34670(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r8,r9,-8404
	ctx.r8.s64 = ctx.r9.s64 + -8404;
	// addi r11,r11,25856
	ctx.r11.s64 = ctx.r11.s64 + 25856;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// stw r11,-8404(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8404, ctx.r11.u32);
	// lis r9,-32030
	ctx.r9.s64 = -2099118080;
	// addi r10,r10,32720
	ctx.r10.s64 = ctx.r10.s64 + 32720;
	// addi r9,r9,32736
	ctx.r9.s64 = ctx.r9.s64 + 32736;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AA3C"))) PPC_WEAK_FUNC(sub_8316AA3C);
PPC_FUNC_IMPL(__imp__sub_8316AA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AA40"))) PPC_WEAK_FUNC(sub_8316AA40);
PPC_FUNC_IMPL(__imp__sub_8316AA40) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r11,r11,26360
	ctx.r11.s64 = ctx.r11.s64 + 26360;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,192
	ctx.r6.s64 = ctx.r11.s64 + 192;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,-8452
	ctx.r5.s64 = ctx.r9.s64 + -8452;
	// addi r4,r8,26784
	ctx.r4.s64 = ctx.r8.s64 + 26784;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,-8388
	ctx.r3.s64 = ctx.r7.s64 + -8388;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82d32af0
	ctx.lr = 0x8316AAA4;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AAB4"))) PPC_WEAK_FUNC(sub_8316AAB4);
PPC_FUNC_IMPL(__imp__sub_8316AAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AAB8"))) PPC_WEAK_FUNC(sub_8316AAB8);
PPC_FUNC_IMPL(__imp__sub_8316AAB8) {
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
	// bl 0x82e35208
	ctx.lr = 0x8316AAD0;
	sub_82E35208(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r8,r9,-8340
	ctx.r8.s64 = ctx.r9.s64 + -8340;
	// addi r11,r11,26784
	ctx.r11.s64 = ctx.r11.s64 + 26784;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// stw r11,-8340(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8340, ctx.r11.u32);
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// addi r10,r10,-32712
	ctx.r10.s64 = ctx.r10.s64 + -32712;
	// addi r9,r9,-32696
	ctx.r9.s64 = ctx.r9.s64 + -32696;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AB14"))) PPC_WEAK_FUNC(sub_8316AB14);
PPC_FUNC_IMPL(__imp__sub_8316AB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AB18"))) PPC_WEAK_FUNC(sub_8316AB18);
PPC_FUNC_IMPL(__imp__sub_8316AB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,26880
	ctx.r6.s64 = ctx.r10.s64 + 26880;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-17052
	ctx.r5.s64 = ctx.r9.s64 + -17052;
	// addi r4,r8,27000
	ctx.r4.s64 = ctx.r8.s64 + 27000;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8324
	ctx.r3.s64 = ctx.r7.s64 + -8324;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,180
	ctx.r6.s64 = 180;
	// bl 0x82d32af0
	ctx.lr = 0x8316AB80;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AB94"))) PPC_WEAK_FUNC(sub_8316AB94);
PPC_FUNC_IMPL(__imp__sub_8316AB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AB98"))) PPC_WEAK_FUNC(sub_8316AB98);
PPC_FUNC_IMPL(__imp__sub_8316AB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,27088
	ctx.r6.s64 = ctx.r10.s64 + 27088;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-9472
	ctx.r5.s64 = ctx.r9.s64 + -9472;
	// addi r4,r8,27220
	ctx.r4.s64 = ctx.r8.s64 + 27220;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8260
	ctx.r3.s64 = ctx.r7.s64 + -8260;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82d32af0
	ctx.lr = 0x8316AC00;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AC14"))) PPC_WEAK_FUNC(sub_8316AC14);
PPC_FUNC_IMPL(__imp__sub_8316AC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AC18"))) PPC_WEAK_FUNC(sub_8316AC18);
PPC_FUNC_IMPL(__imp__sub_8316AC18) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x8316AC3C;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,27220
	ctx.r11.s64 = ctx.r11.s64 + 27220;
	// addi r6,r9,-8276
	ctx.r6.s64 = ctx.r9.s64 + -8276;
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// stw r11,-8276(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8276, ctx.r11.u32);
	// lis r7,-32029
	ctx.r7.s64 = -2099052544;
	// addi r9,r10,27188
	ctx.r9.s64 = ctx.r10.s64 + 27188;
	// addi r10,r8,-32432
	ctx.r10.s64 = ctx.r8.s64 + -32432;
	// addi r11,r7,-32352
	ctx.r11.s64 = ctx.r7.s64 + -32352;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AC84"))) PPC_WEAK_FUNC(sub_8316AC84);
PPC_FUNC_IMPL(__imp__sub_8316AC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AC88"))) PPC_WEAK_FUNC(sub_8316AC88);
PPC_FUNC_IMPL(__imp__sub_8316AC88) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,27324
	ctx.r11.s64 = ctx.r11.s64 + 27324;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,-8820
	ctx.r5.s64 = ctx.r9.s64 + -8820;
	// addi r4,r8,27384
	ctx.r4.s64 = ctx.r8.s64 + 27384;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,-8212
	ctx.r3.s64 = ctx.r7.s64 + -8212;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82d32af0
	ctx.lr = 0x8316ACEC;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ACFC"))) PPC_WEAK_FUNC(sub_8316ACFC);
PPC_FUNC_IMPL(__imp__sub_8316ACFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AD00"))) PPC_WEAK_FUNC(sub_8316AD00);
PPC_FUNC_IMPL(__imp__sub_8316AD00) {
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
	// bl 0x82e35c78
	ctx.lr = 0x8316AD18;
	sub_82E35C78(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r8,r9,-8164
	ctx.r8.s64 = ctx.r9.s64 + -8164;
	// addi r11,r11,27384
	ctx.r11.s64 = ctx.r11.s64 + 27384;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// stw r11,-8164(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8164, ctx.r11.u32);
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// addi r10,r10,-32144
	ctx.r10.s64 = ctx.r10.s64 + -32144;
	// addi r9,r9,-32128
	ctx.r9.s64 = ctx.r9.s64 + -32128;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AD5C"))) PPC_WEAK_FUNC(sub_8316AD5C);
PPC_FUNC_IMPL(__imp__sub_8316AD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AD60"))) PPC_WEAK_FUNC(sub_8316AD60);
PPC_FUNC_IMPL(__imp__sub_8316AD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,27552
	ctx.r6.s64 = ctx.r10.s64 + 27552;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-9472
	ctx.r5.s64 = ctx.r9.s64 + -9472;
	// addi r4,r8,27780
	ctx.r4.s64 = ctx.r8.s64 + 27780;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8148
	ctx.r3.s64 = ctx.r7.s64 + -8148;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,8
	ctx.r31.s64 = 8;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82d32af0
	ctx.lr = 0x8316ADC8;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ADDC"))) PPC_WEAK_FUNC(sub_8316ADDC);
PPC_FUNC_IMPL(__imp__sub_8316ADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316ADE0"))) PPC_WEAK_FUNC(sub_8316ADE0);
PPC_FUNC_IMPL(__imp__sub_8316ADE0) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x8316AE04;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,27780
	ctx.r11.s64 = ctx.r11.s64 + 27780;
	// addi r6,r9,-8100
	ctx.r6.s64 = ctx.r9.s64 + -8100;
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// stw r11,-8100(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8100, ctx.r11.u32);
	// lis r7,-32029
	ctx.r7.s64 = -2099052544;
	// addi r9,r10,27748
	ctx.r9.s64 = ctx.r10.s64 + 27748;
	// addi r10,r8,-32000
	ctx.r10.s64 = ctx.r8.s64 + -32000;
	// addi r11,r7,-32040
	ctx.r11.s64 = ctx.r7.s64 + -32040;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AE4C"))) PPC_WEAK_FUNC(sub_8316AE4C);
PPC_FUNC_IMPL(__imp__sub_8316AE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AE50"))) PPC_WEAK_FUNC(sub_8316AE50);
PPC_FUNC_IMPL(__imp__sub_8316AE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,27856
	ctx.r6.s64 = ctx.r10.s64 + 27856;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,-3300
	ctx.r4.s64 = ctx.r8.s64 + -3300;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8084
	ctx.r3.s64 = ctx.r7.s64 + -8084;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82d32af0
	ctx.lr = 0x8316AEB8;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AECC"))) PPC_WEAK_FUNC(sub_8316AECC);
PPC_FUNC_IMPL(__imp__sub_8316AECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AED0"))) PPC_WEAK_FUNC(sub_8316AED0);
PPC_FUNC_IMPL(__imp__sub_8316AED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,27968
	ctx.r6.s64 = ctx.r10.s64 + 27968;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-13568
	ctx.r5.s64 = ctx.r9.s64 + -13568;
	// addi r4,r8,28016
	ctx.r4.s64 = ctx.r8.s64 + 28016;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-8020
	ctx.r3.s64 = ctx.r7.s64 + -8020;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82d32af0
	ctx.lr = 0x8316AF38;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AF4C"))) PPC_WEAK_FUNC(sub_8316AF4C);
PPC_FUNC_IMPL(__imp__sub_8316AF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AF50"))) PPC_WEAK_FUNC(sub_8316AF50);
PPC_FUNC_IMPL(__imp__sub_8316AF50) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-6532
	ctx.r10.s64 = ctx.r11.s64 + -6532;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x8316AF74;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,28016
	ctx.r11.s64 = ctx.r11.s64 + 28016;
	// addi r6,r9,-8036
	ctx.r6.s64 = ctx.r9.s64 + -8036;
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// stw r11,-8036(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8036, ctx.r11.u32);
	// lis r7,-32029
	ctx.r7.s64 = -2099052544;
	// addi r9,r10,27996
	ctx.r9.s64 = ctx.r10.s64 + 27996;
	// addi r10,r8,-31448
	ctx.r10.s64 = ctx.r8.s64 + -31448;
	// addi r11,r7,-31488
	ctx.r11.s64 = ctx.r7.s64 + -31488;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316AFBC"))) PPC_WEAK_FUNC(sub_8316AFBC);
PPC_FUNC_IMPL(__imp__sub_8316AFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316AFC0"))) PPC_WEAK_FUNC(sub_8316AFC0);
PPC_FUNC_IMPL(__imp__sub_8316AFC0) {
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
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,28176
	ctx.r7.s64 = ctx.r10.s64 + 28176;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,28384
	ctx.r4.s64 = ctx.r9.s64 + 28384;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-7876
	ctx.r3.s64 = ctx.r8.s64 + -7876;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316B020;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B030"))) PPC_WEAK_FUNC(sub_8316B030);
PPC_FUNC_IMPL(__imp__sub_8316B030) {
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
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,28224
	ctx.r7.s64 = ctx.r10.s64 + 28224;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,28412
	ctx.r4.s64 = ctx.r9.s64 + 28412;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-7924
	ctx.r3.s64 = ctx.r8.s64 + -7924;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316B090;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B0A0"))) PPC_WEAK_FUNC(sub_8316B0A0);
PPC_FUNC_IMPL(__imp__sub_8316B0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,28296
	ctx.r6.s64 = ctx.r10.s64 + 28296;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,-3284
	ctx.r4.s64 = ctx.r8.s64 + -3284;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-7972
	ctx.r3.s64 = ctx.r7.s64 + -7972;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x82d32af0
	ctx.lr = 0x8316B108;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B11C"))) PPC_WEAK_FUNC(sub_8316B11C);
PPC_FUNC_IMPL(__imp__sub_8316B11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316B120"))) PPC_WEAK_FUNC(sub_8316B120);
PPC_FUNC_IMPL(__imp__sub_8316B120) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r11,r11,28592
	ctx.r11.s64 = ctx.r11.s64 + 28592;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,144
	ctx.r6.s64 = ctx.r11.s64 + 144;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,-8452
	ctx.r5.s64 = ctx.r9.s64 + -8452;
	// addi r4,r8,28812
	ctx.r4.s64 = ctx.r8.s64 + 28812;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,-7828
	ctx.r3.s64 = ctx.r7.s64 + -7828;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82d32af0
	ctx.lr = 0x8316B184;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B194"))) PPC_WEAK_FUNC(sub_8316B194);
PPC_FUNC_IMPL(__imp__sub_8316B194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316B198"))) PPC_WEAK_FUNC(sub_8316B198);
PPC_FUNC_IMPL(__imp__sub_8316B198) {
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
	// bl 0x82e38450
	ctx.lr = 0x8316B1B0;
	sub_82E38450(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r8,r9,-7780
	ctx.r8.s64 = ctx.r9.s64 + -7780;
	// addi r11,r11,28812
	ctx.r11.s64 = ctx.r11.s64 + 28812;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// stw r11,-7780(r9)
	PPC_STORE_U32(ctx.r9.u32 + -7780, ctx.r11.u32);
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// addi r10,r10,-30968
	ctx.r10.s64 = ctx.r10.s64 + -30968;
	// addi r9,r9,-30952
	ctx.r9.s64 = ctx.r9.s64 + -30952;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B1F4"))) PPC_WEAK_FUNC(sub_8316B1F4);
PPC_FUNC_IMPL(__imp__sub_8316B1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316B1F8"))) PPC_WEAK_FUNC(sub_8316B1F8);
PPC_FUNC_IMPL(__imp__sub_8316B1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,28896
	ctx.r6.s64 = ctx.r10.s64 + 28896;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-9472
	ctx.r5.s64 = ctx.r9.s64 + -9472;
	// addi r4,r8,29028
	ctx.r4.s64 = ctx.r8.s64 + 29028;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-7748
	ctx.r3.s64 = ctx.r7.s64 + -7748;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82d32af0
	ctx.lr = 0x8316B260;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B274"))) PPC_WEAK_FUNC(sub_8316B274);
PPC_FUNC_IMPL(__imp__sub_8316B274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316B278"))) PPC_WEAK_FUNC(sub_8316B278);
PPC_FUNC_IMPL(__imp__sub_8316B278) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x8316B29C;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,29028
	ctx.r11.s64 = ctx.r11.s64 + 29028;
	// addi r6,r9,-7764
	ctx.r6.s64 = ctx.r9.s64 + -7764;
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// stw r11,-7764(r9)
	PPC_STORE_U32(ctx.r9.u32 + -7764, ctx.r11.u32);
	// lis r7,-32029
	ctx.r7.s64 = -2099052544;
	// addi r9,r10,28996
	ctx.r9.s64 = ctx.r10.s64 + 28996;
	// addi r10,r8,-30864
	ctx.r10.s64 = ctx.r8.s64 + -30864;
	// addi r11,r7,-30784
	ctx.r11.s64 = ctx.r7.s64 + -30784;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B2E4"))) PPC_WEAK_FUNC(sub_8316B2E4);
PPC_FUNC_IMPL(__imp__sub_8316B2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316B2E8"))) PPC_WEAK_FUNC(sub_8316B2E8);
PPC_FUNC_IMPL(__imp__sub_8316B2E8) {
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
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,29424
	ctx.r7.s64 = ctx.r10.s64 + 29424;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,29636
	ctx.r4.s64 = ctx.r9.s64 + 29636;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-7636
	ctx.r3.s64 = ctx.r8.s64 + -7636;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316B348;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B358"))) PPC_WEAK_FUNC(sub_8316B358);
PPC_FUNC_IMPL(__imp__sub_8316B358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,29472
	ctx.r6.s64 = ctx.r10.s64 + 29472;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-7636
	ctx.r5.s64 = ctx.r9.s64 + -7636;
	// addi r4,r8,29664
	ctx.r4.s64 = ctx.r8.s64 + 29664;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-7700
	ctx.r3.s64 = ctx.r7.s64 + -7700;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82d32af0
	ctx.lr = 0x8316B3C0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B3D4"))) PPC_WEAK_FUNC(sub_8316B3D4);
PPC_FUNC_IMPL(__imp__sub_8316B3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316B3D8"))) PPC_WEAK_FUNC(sub_8316B3D8);
PPC_FUNC_IMPL(__imp__sub_8316B3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,25128
	ctx.r9.s64 = ctx.r10.s64 + 25128;
	// lwz r11,25092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25092);
	// stw r11,128(r9)
	PPC_STORE_U32(ctx.r9.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B3F0"))) PPC_WEAK_FUNC(sub_8316B3F0);
PPC_FUNC_IMPL(__imp__sub_8316B3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// addi r5,r10,25128
	ctx.r5.s64 = ctx.r10.s64 + 25128;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// addi r4,r7,29788
	ctx.r4.s64 = ctx.r7.s64 + 29788;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-7588
	ctx.r3.s64 = ctx.r6.s64 + -7588;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,14
	ctx.r31.s64 = 14;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,29600
	ctx.r9.s64 = ctx.r9.s64 + 29600;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d32af0
	ctx.lr = 0x8316B45C;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B470"))) PPC_WEAK_FUNC(sub_8316B470);
PPC_FUNC_IMPL(__imp__sub_8316B470) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,29624
	ctx.r10.s64 = ctx.r11.s64 + 29624;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82de3a70
	ctx.lr = 0x8316B494;
	sub_82DE3A70(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r8,r9,-7652
	ctx.r8.s64 = ctx.r9.s64 + -7652;
	// addi r11,r11,29788
	ctx.r11.s64 = ctx.r11.s64 + 29788;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// stw r11,-7652(r9)
	PPC_STORE_U32(ctx.r9.u32 + -7652, ctx.r11.u32);
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// addi r10,r10,-30576
	ctx.r10.s64 = ctx.r10.s64 + -30576;
	// addi r9,r9,-30648
	ctx.r9.s64 = ctx.r9.s64 + -30648;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B4D8"))) PPC_WEAK_FUNC(sub_8316B4D8);
PPC_FUNC_IMPL(__imp__sub_8316B4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,29856
	ctx.r6.s64 = ctx.r10.s64 + 29856;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,29896
	ctx.r4.s64 = ctx.r8.s64 + 29896;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-7540
	ctx.r3.s64 = ctx.r7.s64 + -7540;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82d32af0
	ctx.lr = 0x8316B540;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B554"))) PPC_WEAK_FUNC(sub_8316B554);
PPC_FUNC_IMPL(__imp__sub_8316B554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316B558"))) PPC_WEAK_FUNC(sub_8316B558);
PPC_FUNC_IMPL(__imp__sub_8316B558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,29968
	ctx.r6.s64 = ctx.r10.s64 + 29968;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,30008
	ctx.r4.s64 = ctx.r8.s64 + 30008;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-7492
	ctx.r3.s64 = ctx.r7.s64 + -7492;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82d32af0
	ctx.lr = 0x8316B5C0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B5D4"))) PPC_WEAK_FUNC(sub_8316B5D4);
PPC_FUNC_IMPL(__imp__sub_8316B5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316B5D8"))) PPC_WEAK_FUNC(sub_8316B5D8);
PPC_FUNC_IMPL(__imp__sub_8316B5D8) {
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
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,30096
	ctx.r7.s64 = ctx.r10.s64 + 30096;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,30184
	ctx.r4.s64 = ctx.r9.s64 + 30184;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-7396
	ctx.r3.s64 = ctx.r8.s64 + -7396;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316B638;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B648"))) PPC_WEAK_FUNC(sub_8316B648);
PPC_FUNC_IMPL(__imp__sub_8316B648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,30144
	ctx.r6.s64 = ctx.r10.s64 + 30144;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,30240
	ctx.r4.s64 = ctx.r8.s64 + 30240;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-7444
	ctx.r3.s64 = ctx.r7.s64 + -7444;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82d32af0
	ctx.lr = 0x8316B6B0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B6C4"))) PPC_WEAK_FUNC(sub_8316B6C4);
PPC_FUNC_IMPL(__imp__sub_8316B6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316B6C8"))) PPC_WEAK_FUNC(sub_8316B6C8);
PPC_FUNC_IMPL(__imp__sub_8316B6C8) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r11,r11,30640
	ctx.r11.s64 = ctx.r11.s64 + 30640;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r11,192
	ctx.r6.s64 = ctx.r11.s64 + 192;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,-9952
	ctx.r5.s64 = ctx.r9.s64 + -9952;
	// addi r4,r8,30972
	ctx.r4.s64 = ctx.r8.s64 + 30972;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r7,-7332
	ctx.r3.s64 = ctx.r7.s64 + -7332;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82d32af0
	ctx.lr = 0x8316B72C;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B73C"))) PPC_WEAK_FUNC(sub_8316B73C);
PPC_FUNC_IMPL(__imp__sub_8316B73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316B740"))) PPC_WEAK_FUNC(sub_8316B740);
PPC_FUNC_IMPL(__imp__sub_8316B740) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x8316B764;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,30972
	ctx.r11.s64 = ctx.r11.s64 + 30972;
	// addi r6,r9,-7348
	ctx.r6.s64 = ctx.r9.s64 + -7348;
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// stw r11,-7348(r9)
	PPC_STORE_U32(ctx.r9.u32 + -7348, ctx.r11.u32);
	// lis r7,-32029
	ctx.r7.s64 = -2099052544;
	// addi r9,r10,30884
	ctx.r9.s64 = ctx.r10.s64 + 30884;
	// addi r10,r8,-29728
	ctx.r10.s64 = ctx.r8.s64 + -29728;
	// addi r11,r7,-29648
	ctx.r11.s64 = ctx.r7.s64 + -29648;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B7AC"))) PPC_WEAK_FUNC(sub_8316B7AC);
PPC_FUNC_IMPL(__imp__sub_8316B7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316B7B0"))) PPC_WEAK_FUNC(sub_8316B7B0);
PPC_FUNC_IMPL(__imp__sub_8316B7B0) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,31360
	ctx.r11.s64 = ctx.r11.s64 + 31360;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// addi r7,r11,456
	ctx.r7.s64 = ctx.r11.s64 + 456;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,19
	ctx.r6.s64 = 19;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r4,r9,31900
	ctx.r4.s64 = ctx.r9.s64 + 31900;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-7284
	ctx.r3.s64 = ctx.r8.s64 + -7284;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316B810;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B820"))) PPC_WEAK_FUNC(sub_8316B820);
PPC_FUNC_IMPL(__imp__sub_8316B820) {
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
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,32000
	ctx.r7.s64 = ctx.r10.s64 + 32000;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,32096
	ctx.r4.s64 = ctx.r9.s64 + 32096;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-7236
	ctx.r3.s64 = ctx.r8.s64 + -7236;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316B880;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B890"))) PPC_WEAK_FUNC(sub_8316B890);
PPC_FUNC_IMPL(__imp__sub_8316B890) {
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
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,-30840
	ctx.r3.s64 = ctx.r9.s64 + -30840;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// addi r4,r7,-30784
	ctx.r4.s64 = ctx.r7.s64 + -30784;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-7188
	ctx.r3.s64 = ctx.r6.s64 + -7188;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82d32af0
	ctx.lr = 0x8316B8F4;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B904"))) PPC_WEAK_FUNC(sub_8316B904);
PPC_FUNC_IMPL(__imp__sub_8316B904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316B908"))) PPC_WEAK_FUNC(sub_8316B908);
PPC_FUNC_IMPL(__imp__sub_8316B908) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r7,r10,-30632
	ctx.r7.s64 = ctx.r10.s64 + -30632;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-30400
	ctx.r4.s64 = ctx.r9.s64 + -30400;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-7140
	ctx.r3.s64 = ctx.r8.s64 + -7140;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316B968;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B978"))) PPC_WEAK_FUNC(sub_8316B978);
PPC_FUNC_IMPL(__imp__sub_8316B978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-30584
	ctx.r6.s64 = ctx.r10.s64 + -30584;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,-30380
	ctx.r4.s64 = ctx.r8.s64 + -30380;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-7092
	ctx.r3.s64 = ctx.r7.s64 + -7092;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82d32af0
	ctx.lr = 0x8316B9E0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316B9F4"))) PPC_WEAK_FUNC(sub_8316B9F4);
PPC_FUNC_IMPL(__imp__sub_8316B9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316B9F8"))) PPC_WEAK_FUNC(sub_8316B9F8);
PPC_FUNC_IMPL(__imp__sub_8316B9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-30512
	ctx.r6.s64 = ctx.r10.s64 + -30512;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,-30360
	ctx.r4.s64 = ctx.r8.s64 + -30360;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-7044
	ctx.r3.s64 = ctx.r7.s64 + -7044;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82d32af0
	ctx.lr = 0x8316BA60;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BA74"))) PPC_WEAK_FUNC(sub_8316BA74);
PPC_FUNC_IMPL(__imp__sub_8316BA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316BA78"))) PPC_WEAK_FUNC(sub_8316BA78);
PPC_FUNC_IMPL(__imp__sub_8316BA78) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r7,r10,-29840
	ctx.r7.s64 = ctx.r10.s64 + -29840;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-29044
	ctx.r4.s64 = ctx.r9.s64 + -29044;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-6996
	ctx.r3.s64 = ctx.r8.s64 + -6996;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316BAD8;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BAE8"))) PPC_WEAK_FUNC(sub_8316BAE8);
PPC_FUNC_IMPL(__imp__sub_8316BAE8) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-29600
	ctx.r11.s64 = ctx.r11.s64 + -29600;
	// li r3,19
	ctx.r3.s64 = 19;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r6,r11,456
	ctx.r6.s64 = ctx.r11.s64 + 456;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,-29008
	ctx.r4.s64 = ctx.r8.s64 + -29008;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r7,-6948
	ctx.r3.s64 = ctx.r7.s64 + -6948;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,416
	ctx.r6.s64 = 416;
	// bl 0x82d32af0
	ctx.lr = 0x8316BB50;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BB60"))) PPC_WEAK_FUNC(sub_8316BB60);
PPC_FUNC_IMPL(__imp__sub_8316BB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-28920
	ctx.r6.s64 = ctx.r10.s64 + -28920;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-5684
	ctx.r5.s64 = ctx.r9.s64 + -5684;
	// addi r4,r8,-28772
	ctx.r4.s64 = ctx.r8.s64 + -28772;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6900
	ctx.r3.s64 = ctx.r7.s64 + -6900;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82d32af0
	ctx.lr = 0x8316BBC8;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BBDC"))) PPC_WEAK_FUNC(sub_8316BBDC);
PPC_FUNC_IMPL(__imp__sub_8316BBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316BBE0"))) PPC_WEAK_FUNC(sub_8316BBE0);
PPC_FUNC_IMPL(__imp__sub_8316BBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-28608
	ctx.r6.s64 = ctx.r10.s64 + -28608;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-5540
	ctx.r5.s64 = ctx.r9.s64 + -5540;
	// addi r4,r8,-28360
	ctx.r4.s64 = ctx.r8.s64 + -28360;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6852
	ctx.r3.s64 = ctx.r7.s64 + -6852;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82d32af0
	ctx.lr = 0x8316BC48;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BC5C"))) PPC_WEAK_FUNC(sub_8316BC5C);
PPC_FUNC_IMPL(__imp__sub_8316BC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316BC60"))) PPC_WEAK_FUNC(sub_8316BC60);
PPC_FUNC_IMPL(__imp__sub_8316BC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-28512
	ctx.r6.s64 = ctx.r10.s64 + -28512;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-5492
	ctx.r5.s64 = ctx.r9.s64 + -5492;
	// addi r4,r8,-28324
	ctx.r4.s64 = ctx.r8.s64 + -28324;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6804
	ctx.r3.s64 = ctx.r7.s64 + -6804;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82d32af0
	ctx.lr = 0x8316BCC8;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BCDC"))) PPC_WEAK_FUNC(sub_8316BCDC);
PPC_FUNC_IMPL(__imp__sub_8316BCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316BCE0"))) PPC_WEAK_FUNC(sub_8316BCE0);
PPC_FUNC_IMPL(__imp__sub_8316BCE0) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r7,r10,-28168
	ctx.r7.s64 = ctx.r10.s64 + -28168;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-28028
	ctx.r4.s64 = ctx.r9.s64 + -28028;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-6756
	ctx.r3.s64 = ctx.r8.s64 + -6756;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316BD40;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BD50"))) PPC_WEAK_FUNC(sub_8316BD50);
PPC_FUNC_IMPL(__imp__sub_8316BD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-28096
	ctx.r6.s64 = ctx.r10.s64 + -28096;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-5636
	ctx.r5.s64 = ctx.r9.s64 + -5636;
	// addi r4,r8,-27980
	ctx.r4.s64 = ctx.r8.s64 + -27980;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6708
	ctx.r3.s64 = ctx.r7.s64 + -6708;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82d32af0
	ctx.lr = 0x8316BDB8;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BDCC"))) PPC_WEAK_FUNC(sub_8316BDCC);
PPC_FUNC_IMPL(__imp__sub_8316BDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316BDD0"))) PPC_WEAK_FUNC(sub_8316BDD0);
PPC_FUNC_IMPL(__imp__sub_8316BDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-27768
	ctx.r6.s64 = ctx.r10.s64 + -27768;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-5444
	ctx.r5.s64 = ctx.r9.s64 + -5444;
	// addi r4,r8,-27508
	ctx.r4.s64 = ctx.r8.s64 + -27508;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6660
	ctx.r3.s64 = ctx.r7.s64 + -6660;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,10
	ctx.r31.s64 = 10;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82d32af0
	ctx.lr = 0x8316BE38;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BE4C"))) PPC_WEAK_FUNC(sub_8316BE4C);
PPC_FUNC_IMPL(__imp__sub_8316BE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316BE50"))) PPC_WEAK_FUNC(sub_8316BE50);
PPC_FUNC_IMPL(__imp__sub_8316BE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-27416
	ctx.r6.s64 = ctx.r10.s64 + -27416;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-5396
	ctx.r5.s64 = ctx.r9.s64 + -5396;
	// addi r4,r8,-27320
	ctx.r4.s64 = ctx.r8.s64 + -27320;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6612
	ctx.r3.s64 = ctx.r7.s64 + -6612;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82d32af0
	ctx.lr = 0x8316BEB8;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BECC"))) PPC_WEAK_FUNC(sub_8316BECC);
PPC_FUNC_IMPL(__imp__sub_8316BECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316BED0"))) PPC_WEAK_FUNC(sub_8316BED0);
PPC_FUNC_IMPL(__imp__sub_8316BED0) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r7,r10,-27232
	ctx.r7.s64 = ctx.r10.s64 + -27232;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-27116
	ctx.r4.s64 = ctx.r9.s64 + -27116;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-6564
	ctx.r3.s64 = ctx.r8.s64 + -6564;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316BF30;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BF40"))) PPC_WEAK_FUNC(sub_8316BF40);
PPC_FUNC_IMPL(__imp__sub_8316BF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-27160
	ctx.r6.s64 = ctx.r10.s64 + -27160;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-5732
	ctx.r5.s64 = ctx.r9.s64 + -5732;
	// addi r4,r8,-27056
	ctx.r4.s64 = ctx.r8.s64 + -27056;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6516
	ctx.r3.s64 = ctx.r7.s64 + -6516;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82d32af0
	ctx.lr = 0x8316BFA8;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316BFBC"))) PPC_WEAK_FUNC(sub_8316BFBC);
PPC_FUNC_IMPL(__imp__sub_8316BFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316BFC0"))) PPC_WEAK_FUNC(sub_8316BFC0);
PPC_FUNC_IMPL(__imp__sub_8316BFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-26904
	ctx.r6.s64 = ctx.r10.s64 + -26904;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-5348
	ctx.r5.s64 = ctx.r9.s64 + -5348;
	// addi r4,r8,-26696
	ctx.r4.s64 = ctx.r8.s64 + -26696;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6468
	ctx.r3.s64 = ctx.r7.s64 + -6468;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,7
	ctx.r31.s64 = 7;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,52
	ctx.r6.s64 = 52;
	// bl 0x82d32af0
	ctx.lr = 0x8316C028;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C03C"))) PPC_WEAK_FUNC(sub_8316C03C);
PPC_FUNC_IMPL(__imp__sub_8316C03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316C040"))) PPC_WEAK_FUNC(sub_8316C040);
PPC_FUNC_IMPL(__imp__sub_8316C040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-26600
	ctx.r6.s64 = ctx.r10.s64 + -26600;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-5300
	ctx.r5.s64 = ctx.r9.s64 + -5300;
	// addi r4,r8,-26508
	ctx.r4.s64 = ctx.r8.s64 + -26508;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6420
	ctx.r3.s64 = ctx.r7.s64 + -6420;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82d32af0
	ctx.lr = 0x8316C0A8;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C0BC"))) PPC_WEAK_FUNC(sub_8316C0BC);
PPC_FUNC_IMPL(__imp__sub_8316C0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316C0C0"))) PPC_WEAK_FUNC(sub_8316C0C0);
PPC_FUNC_IMPL(__imp__sub_8316C0C0) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r7,r10,-25832
	ctx.r7.s64 = ctx.r10.s64 + -25832;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,-24756
	ctx.r4.s64 = ctx.r9.s64 + -24756;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-6372
	ctx.r3.s64 = ctx.r8.s64 + -6372;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316C124;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C134"))) PPC_WEAK_FUNC(sub_8316C134);
PPC_FUNC_IMPL(__imp__sub_8316C134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316C138"))) PPC_WEAK_FUNC(sub_8316C138);
PPC_FUNC_IMPL(__imp__sub_8316C138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-25424
	ctx.r6.s64 = ctx.r10.s64 + -25424;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-9472
	ctx.r5.s64 = ctx.r9.s64 + -9472;
	// addi r4,r8,-24728
	ctx.r4.s64 = ctx.r8.s64 + -24728;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6324
	ctx.r3.s64 = ctx.r7.s64 + -6324;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,25
	ctx.r31.s64 = 25;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,212
	ctx.r6.s64 = 212;
	// bl 0x82d32af0
	ctx.lr = 0x8316C1A0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C1B4"))) PPC_WEAK_FUNC(sub_8316C1B4);
PPC_FUNC_IMPL(__imp__sub_8316C1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316C1B8"))) PPC_WEAK_FUNC(sub_8316C1B8);
PPC_FUNC_IMPL(__imp__sub_8316C1B8) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x8316C1DC;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r11,r11,-24728
	ctx.r11.s64 = ctx.r11.s64 + -24728;
	// addi r6,r9,-6276
	ctx.r6.s64 = ctx.r9.s64 + -6276;
	// lis r8,-32028
	ctx.r8.s64 = -2098987008;
	// stw r11,-6276(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6276, ctx.r11.u32);
	// lis r7,-32028
	ctx.r7.s64 = -2098987008;
	// addi r9,r10,-24820
	ctx.r9.s64 = ctx.r10.s64 + -24820;
	// addi r10,r8,-10136
	ctx.r10.s64 = ctx.r8.s64 + -10136;
	// addi r11,r7,-10176
	ctx.r11.s64 = ctx.r7.s64 + -10176;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C224"))) PPC_WEAK_FUNC(sub_8316C224);
PPC_FUNC_IMPL(__imp__sub_8316C224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316C228"))) PPC_WEAK_FUNC(sub_8316C228);
PPC_FUNC_IMPL(__imp__sub_8316C228) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-5588
	ctx.r5.s64 = ctx.r10.s64 + -5588;
	// addi r4,r9,-24632
	ctx.r4.s64 = ctx.r9.s64 + -24632;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-6260
	ctx.r3.s64 = ctx.r8.s64 + -6260;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82d32af0
	ctx.lr = 0x8316C280;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C290"))) PPC_WEAK_FUNC(sub_8316C290);
PPC_FUNC_IMPL(__imp__sub_8316C290) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r7,r10,-24480
	ctx.r7.s64 = ctx.r10.s64 + -24480;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-24128
	ctx.r4.s64 = ctx.r9.s64 + -24128;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-6212
	ctx.r3.s64 = ctx.r8.s64 + -6212;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316C2F0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C300"))) PPC_WEAK_FUNC(sub_8316C300);
PPC_FUNC_IMPL(__imp__sub_8316C300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-24384
	ctx.r6.s64 = ctx.r10.s64 + -24384;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-5252
	ctx.r5.s64 = ctx.r9.s64 + -5252;
	// addi r4,r8,-24084
	ctx.r4.s64 = ctx.r8.s64 + -24084;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6164
	ctx.r3.s64 = ctx.r7.s64 + -6164;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,52
	ctx.r6.s64 = 52;
	// bl 0x82d32af0
	ctx.lr = 0x8316C368;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C37C"))) PPC_WEAK_FUNC(sub_8316C37C);
PPC_FUNC_IMPL(__imp__sub_8316C37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316C380"))) PPC_WEAK_FUNC(sub_8316C380);
PPC_FUNC_IMPL(__imp__sub_8316C380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-24028
	ctx.r6.s64 = ctx.r10.s64 + -24028;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,-24004
	ctx.r4.s64 = ctx.r8.s64 + -24004;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-6116
	ctx.r3.s64 = ctx.r7.s64 + -6116;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82d32af0
	ctx.lr = 0x8316C3E8;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C3FC"))) PPC_WEAK_FUNC(sub_8316C3FC);
PPC_FUNC_IMPL(__imp__sub_8316C3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316C400"))) PPC_WEAK_FUNC(sub_8316C400);
PPC_FUNC_IMPL(__imp__sub_8316C400) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-5588
	ctx.r5.s64 = ctx.r10.s64 + -5588;
	// addi r4,r9,-23936
	ctx.r4.s64 = ctx.r9.s64 + -23936;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-6068
	ctx.r3.s64 = ctx.r8.s64 + -6068;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82d32af0
	ctx.lr = 0x8316C458;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C468"))) PPC_WEAK_FUNC(sub_8316C468);
PPC_FUNC_IMPL(__imp__sub_8316C468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-23872
	ctx.r6.s64 = ctx.r10.s64 + -23872;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-5252
	ctx.r5.s64 = ctx.r9.s64 + -5252;
	// addi r4,r8,-23728
	ctx.r4.s64 = ctx.r8.s64 + -23728;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-6020
	ctx.r3.s64 = ctx.r7.s64 + -6020;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82d32af0
	ctx.lr = 0x8316C4D4;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C4E8"))) PPC_WEAK_FUNC(sub_8316C4E8);
PPC_FUNC_IMPL(__imp__sub_8316C4E8) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r7,r10,-23304
	ctx.r7.s64 = ctx.r10.s64 + -23304;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-22752
	ctx.r4.s64 = ctx.r9.s64 + -22752;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-5972
	ctx.r3.s64 = ctx.r8.s64 + -5972;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,100
	ctx.r6.s64 = 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316C548;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C558"))) PPC_WEAK_FUNC(sub_8316C558);
PPC_FUNC_IMPL(__imp__sub_8316C558) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r7,r10,-23064
	ctx.r7.s64 = ctx.r10.s64 + -23064;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-22704
	ctx.r4.s64 = ctx.r9.s64 + -22704;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-5924
	ctx.r3.s64 = ctx.r8.s64 + -5924;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,208
	ctx.r6.s64 = 208;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316C5B8;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C5C8"))) PPC_WEAK_FUNC(sub_8316C5C8);
PPC_FUNC_IMPL(__imp__sub_8316C5C8) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r7,r10,-22992
	ctx.r7.s64 = ctx.r10.s64 + -22992;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-22672
	ctx.r4.s64 = ctx.r9.s64 + -22672;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-5876
	ctx.r3.s64 = ctx.r8.s64 + -5876;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316C628;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C638"))) PPC_WEAK_FUNC(sub_8316C638);
PPC_FUNC_IMPL(__imp__sub_8316C638) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r7,r10,-22776
	ctx.r7.s64 = ctx.r10.s64 + -22776;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-22636
	ctx.r4.s64 = ctx.r9.s64 + -22636;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-5828
	ctx.r3.s64 = ctx.r8.s64 + -5828;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316C698;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C6A8"))) PPC_WEAK_FUNC(sub_8316C6A8);
PPC_FUNC_IMPL(__imp__sub_8316C6A8) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r7,r10,-22560
	ctx.r7.s64 = ctx.r10.s64 + -22560;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-22464
	ctx.r4.s64 = ctx.r9.s64 + -22464;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-5780
	ctx.r3.s64 = ctx.r8.s64 + -5780;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316C708;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C718"))) PPC_WEAK_FUNC(sub_8316C718);
PPC_FUNC_IMPL(__imp__sub_8316C718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-22488
	ctx.r6.s64 = ctx.r10.s64 + -22488;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,-22416
	ctx.r4.s64 = ctx.r8.s64 + -22416;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-5732
	ctx.r3.s64 = ctx.r7.s64 + -5732;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82d32af0
	ctx.lr = 0x8316C780;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C794"))) PPC_WEAK_FUNC(sub_8316C794);
PPC_FUNC_IMPL(__imp__sub_8316C794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316C798"))) PPC_WEAK_FUNC(sub_8316C798);
PPC_FUNC_IMPL(__imp__sub_8316C798) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// addi r4,r9,-22392
	ctx.r4.s64 = ctx.r9.s64 + -22392;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-5684
	ctx.r3.s64 = ctx.r8.s64 + -5684;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d32af0
	ctx.lr = 0x8316C7F0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C800"))) PPC_WEAK_FUNC(sub_8316C800);
PPC_FUNC_IMPL(__imp__sub_8316C800) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// addi r4,r9,-22368
	ctx.r4.s64 = ctx.r9.s64 + -22368;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-5636
	ctx.r3.s64 = ctx.r8.s64 + -5636;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d32af0
	ctx.lr = 0x8316C858;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C868"))) PPC_WEAK_FUNC(sub_8316C868);
PPC_FUNC_IMPL(__imp__sub_8316C868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-22336
	ctx.r6.s64 = ctx.r10.s64 + -22336;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-6116
	ctx.r5.s64 = ctx.r9.s64 + -6116;
	// addi r4,r8,-22312
	ctx.r4.s64 = ctx.r8.s64 + -22312;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-5588
	ctx.r3.s64 = ctx.r7.s64 + -5588;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82d32af0
	ctx.lr = 0x8316C8D0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C8E4"))) PPC_WEAK_FUNC(sub_8316C8E4);
PPC_FUNC_IMPL(__imp__sub_8316C8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316C8E8"))) PPC_WEAK_FUNC(sub_8316C8E8);
PPC_FUNC_IMPL(__imp__sub_8316C8E8) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// addi r4,r9,-22280
	ctx.r4.s64 = ctx.r9.s64 + -22280;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-5540
	ctx.r3.s64 = ctx.r8.s64 + -5540;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d32af0
	ctx.lr = 0x8316C940;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C950"))) PPC_WEAK_FUNC(sub_8316C950);
PPC_FUNC_IMPL(__imp__sub_8316C950) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// addi r4,r9,-22252
	ctx.r4.s64 = ctx.r9.s64 + -22252;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-5492
	ctx.r3.s64 = ctx.r8.s64 + -5492;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d32af0
	ctx.lr = 0x8316C9A8;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316C9B8"))) PPC_WEAK_FUNC(sub_8316C9B8);
PPC_FUNC_IMPL(__imp__sub_8316C9B8) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// addi r4,r9,-22228
	ctx.r4.s64 = ctx.r9.s64 + -22228;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-5444
	ctx.r3.s64 = ctx.r8.s64 + -5444;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d32af0
	ctx.lr = 0x8316CA10;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CA20"))) PPC_WEAK_FUNC(sub_8316CA20);
PPC_FUNC_IMPL(__imp__sub_8316CA20) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// addi r4,r9,-22208
	ctx.r4.s64 = ctx.r9.s64 + -22208;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-5396
	ctx.r3.s64 = ctx.r8.s64 + -5396;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d32af0
	ctx.lr = 0x8316CA78;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CA88"))) PPC_WEAK_FUNC(sub_8316CA88);
PPC_FUNC_IMPL(__imp__sub_8316CA88) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// addi r4,r9,-22188
	ctx.r4.s64 = ctx.r9.s64 + -22188;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-5348
	ctx.r3.s64 = ctx.r8.s64 + -5348;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d32af0
	ctx.lr = 0x8316CAE0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CAF0"))) PPC_WEAK_FUNC(sub_8316CAF0);
PPC_FUNC_IMPL(__imp__sub_8316CAF0) {
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
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// addi r4,r9,-22164
	ctx.r4.s64 = ctx.r9.s64 + -22164;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-5300
	ctx.r3.s64 = ctx.r8.s64 + -5300;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d32af0
	ctx.lr = 0x8316CB48;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CB58"))) PPC_WEAK_FUNC(sub_8316CB58);
PPC_FUNC_IMPL(__imp__sub_8316CB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// addi r9,r11,-21864
	ctx.r9.s64 = ctx.r11.s64 + -21864;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// addi r6,r9,20
	ctx.r6.s64 = ctx.r9.s64 + 20;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// addi r4,r8,-21796
	ctx.r4.s64 = ctx.r8.s64 + -21796;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-5252
	ctx.r3.s64 = ctx.r7.s64 + -5252;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82d32af0
	ctx.lr = 0x8316CBC0;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CBD4"))) PPC_WEAK_FUNC(sub_8316CBD4);
PPC_FUNC_IMPL(__imp__sub_8316CBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316CBD8"))) PPC_WEAK_FUNC(sub_8316CBD8);
PPC_FUNC_IMPL(__imp__sub_8316CBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r6,r10,-21416
	ctx.r6.s64 = ctx.r10.s64 + -21416;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,-21200
	ctx.r4.s64 = ctx.r8.s64 + -21200;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-5204
	ctx.r3.s64 = ctx.r7.s64 + -5204;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,9
	ctx.r31.s64 = 9;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82d32af0
	ctx.lr = 0x8316CC44;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CC58"))) PPC_WEAK_FUNC(sub_8316CC58);
PPC_FUNC_IMPL(__imp__sub_8316CC58) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e48230
	ctx.lr = 0x8316CC70;
	sub_82E48230(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r8,r9,-5156
	ctx.r8.s64 = ctx.r9.s64 + -5156;
	// addi r11,r11,-21200
	ctx.r11.s64 = ctx.r11.s64 + -21200;
	// lis r10,-32028
	ctx.r10.s64 = -2098987008;
	// stw r11,-5156(r9)
	PPC_STORE_U32(ctx.r9.u32 + -5156, ctx.r11.u32);
	// lis r9,-32028
	ctx.r9.s64 = -2098987008;
	// addi r10,r10,23472
	ctx.r10.s64 = ctx.r10.s64 + 23472;
	// addi r9,r9,23488
	ctx.r9.s64 = ctx.r9.s64 + 23488;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CCB4"))) PPC_WEAK_FUNC(sub_8316CCB4);
PPC_FUNC_IMPL(__imp__sub_8316CCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316CCB8"))) PPC_WEAK_FUNC(sub_8316CCB8);
PPC_FUNC_IMPL(__imp__sub_8316CCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,28656
	ctx.r9.s64 = ctx.r10.s64 + 28656;
	// lwz r11,30816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30816);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CCD0"))) PPC_WEAK_FUNC(sub_8316CCD0);
PPC_FUNC_IMPL(__imp__sub_8316CCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,28656
	ctx.r6.s64 = ctx.r10.s64 + 28656;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,-21140
	ctx.r4.s64 = ctx.r8.s64 + -21140;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-5140
	ctx.r3.s64 = ctx.r7.s64 + -5140;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82d32af0
	ctx.lr = 0x8316CD3C;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CD50"))) PPC_WEAK_FUNC(sub_8316CD50);
PPC_FUNC_IMPL(__imp__sub_8316CD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,28752
	ctx.r9.s64 = ctx.r10.s64 + 28752;
	// lwz r11,30816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30816);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CD68"))) PPC_WEAK_FUNC(sub_8316CD68);
PPC_FUNC_IMPL(__imp__sub_8316CD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,28752
	ctx.r6.s64 = ctx.r10.s64 + 28752;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,-21092
	ctx.r4.s64 = ctx.r8.s64 + -21092;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-5092
	ctx.r3.s64 = ctx.r7.s64 + -5092;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82d32af0
	ctx.lr = 0x8316CDD4;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CDE8"))) PPC_WEAK_FUNC(sub_8316CDE8);
PPC_FUNC_IMPL(__imp__sub_8316CDE8) {
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
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,-21060
	ctx.r3.s64 = ctx.r9.s64 + -21060;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// addi r4,r7,-21020
	ctx.r4.s64 = ctx.r7.s64 + -21020;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-5044
	ctx.r3.s64 = ctx.r6.s64 + -5044;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82d32af0
	ctx.lr = 0x8316CE4C;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CE5C"))) PPC_WEAK_FUNC(sub_8316CE5C);
PPC_FUNC_IMPL(__imp__sub_8316CE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316CE60"))) PPC_WEAK_FUNC(sub_8316CE60);
PPC_FUNC_IMPL(__imp__sub_8316CE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,28900
	ctx.r9.s64 = ctx.r10.s64 + 28900;
	// lwz r11,30816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30816);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CE78"))) PPC_WEAK_FUNC(sub_8316CE78);
PPC_FUNC_IMPL(__imp__sub_8316CE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,28900
	ctx.r6.s64 = ctx.r10.s64 + 28900;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,-20972
	ctx.r4.s64 = ctx.r8.s64 + -20972;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-4996
	ctx.r3.s64 = ctx.r7.s64 + -4996;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82d32af0
	ctx.lr = 0x8316CEE4;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CEF8"))) PPC_WEAK_FUNC(sub_8316CEF8);
PPC_FUNC_IMPL(__imp__sub_8316CEF8) {
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
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,-20936
	ctx.r3.s64 = ctx.r9.s64 + -20936;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// addi r4,r7,-20896
	ctx.r4.s64 = ctx.r7.s64 + -20896;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-4948
	ctx.r3.s64 = ctx.r6.s64 + -4948;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82d32af0
	ctx.lr = 0x8316CF5C;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CF6C"))) PPC_WEAK_FUNC(sub_8316CF6C);
PPC_FUNC_IMPL(__imp__sub_8316CF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316CF70"))) PPC_WEAK_FUNC(sub_8316CF70);
PPC_FUNC_IMPL(__imp__sub_8316CF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-20832
	ctx.r6.s64 = ctx.r10.s64 + -20832;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,-20648
	ctx.r4.s64 = ctx.r8.s64 + -20648;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-4900
	ctx.r3.s64 = ctx.r7.s64 + -4900;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,7
	ctx.r31.s64 = 7;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82d32af0
	ctx.lr = 0x8316CFDC;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316CFF0"))) PPC_WEAK_FUNC(sub_8316CFF0);
PPC_FUNC_IMPL(__imp__sub_8316CFF0) {
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
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,-20620
	ctx.r3.s64 = ctx.r9.s64 + -20620;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// addi r4,r7,-20580
	ctx.r4.s64 = ctx.r7.s64 + -20580;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-4852
	ctx.r3.s64 = ctx.r6.s64 + -4852;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82d32af0
	ctx.lr = 0x8316D054;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D064"))) PPC_WEAK_FUNC(sub_8316D064);
PPC_FUNC_IMPL(__imp__sub_8316D064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316D068"))) PPC_WEAK_FUNC(sub_8316D068);
PPC_FUNC_IMPL(__imp__sub_8316D068) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r7,r10,-20556
	ctx.r7.s64 = ctx.r10.s64 + -20556;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-20412
	ctx.r4.s64 = ctx.r9.s64 + -20412;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-4804
	ctx.r3.s64 = ctx.r8.s64 + -4804;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316D0C8;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D0D8"))) PPC_WEAK_FUNC(sub_8316D0D8);
PPC_FUNC_IMPL(__imp__sub_8316D0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-20508
	ctx.r6.s64 = ctx.r10.s64 + -20508;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,-20400
	ctx.r4.s64 = ctx.r8.s64 + -20400;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-4756
	ctx.r3.s64 = ctx.r7.s64 + -4756;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82d32af0
	ctx.lr = 0x8316D140;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D154"))) PPC_WEAK_FUNC(sub_8316D154);
PPC_FUNC_IMPL(__imp__sub_8316D154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316D158"))) PPC_WEAK_FUNC(sub_8316D158);
PPC_FUNC_IMPL(__imp__sub_8316D158) {
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
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,-20484
	ctx.r3.s64 = ctx.r9.s64 + -20484;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-3636
	ctx.r5.s64 = ctx.r8.s64 + -3636;
	// addi r4,r7,-20392
	ctx.r4.s64 = ctx.r7.s64 + -20392;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-4708
	ctx.r3.s64 = ctx.r6.s64 + -4708;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82d32af0
	ctx.lr = 0x8316D1BC;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D1CC"))) PPC_WEAK_FUNC(sub_8316D1CC);
PPC_FUNC_IMPL(__imp__sub_8316D1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316D1D0"))) PPC_WEAK_FUNC(sub_8316D1D0);
PPC_FUNC_IMPL(__imp__sub_8316D1D0) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r7,r10,-20368
	ctx.r7.s64 = ctx.r10.s64 + -20368;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-20296
	ctx.r4.s64 = ctx.r9.s64 + -20296;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-4660
	ctx.r3.s64 = ctx.r8.s64 + -4660;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316D230;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D240"))) PPC_WEAK_FUNC(sub_8316D240);
PPC_FUNC_IMPL(__imp__sub_8316D240) {
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
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,-20320
	ctx.r3.s64 = ctx.r9.s64 + -20320;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// addi r4,r7,-20272
	ctx.r4.s64 = ctx.r7.s64 + -20272;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-4612
	ctx.r3.s64 = ctx.r6.s64 + -4612;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82d32af0
	ctx.lr = 0x8316D2A4;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D2B4"))) PPC_WEAK_FUNC(sub_8316D2B4);
PPC_FUNC_IMPL(__imp__sub_8316D2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316D2B8"))) PPC_WEAK_FUNC(sub_8316D2B8);
PPC_FUNC_IMPL(__imp__sub_8316D2B8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e48b90
	ctx.lr = 0x8316D2D0;
	sub_82E48B90(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r8,r9,-4564
	ctx.r8.s64 = ctx.r9.s64 + -4564;
	// addi r11,r11,-20272
	ctx.r11.s64 = ctx.r11.s64 + -20272;
	// lis r10,-32028
	ctx.r10.s64 = -2098987008;
	// stw r11,-4564(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4564, ctx.r11.u32);
	// lis r9,-32028
	ctx.r9.s64 = -2098987008;
	// addi r10,r10,25624
	ctx.r10.s64 = ctx.r10.s64 + 25624;
	// addi r9,r9,25640
	ctx.r9.s64 = ctx.r9.s64 + 25640;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D314"))) PPC_WEAK_FUNC(sub_8316D314);
PPC_FUNC_IMPL(__imp__sub_8316D314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316D318"))) PPC_WEAK_FUNC(sub_8316D318);
PPC_FUNC_IMPL(__imp__sub_8316D318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,29288
	ctx.r9.s64 = ctx.r10.s64 + 29288;
	// lwz r11,29264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29264);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D330"))) PPC_WEAK_FUNC(sub_8316D330);
PPC_FUNC_IMPL(__imp__sub_8316D330) {
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
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,29288
	ctx.r5.s64 = ctx.r10.s64 + 29288;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// addi r4,r7,-20044
	ctx.r4.s64 = ctx.r7.s64 + -20044;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-4548
	ctx.r3.s64 = ctx.r6.s64 + -4548;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,-20100
	ctx.r9.s64 = ctx.r9.s64 + -20100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x82d32af0
	ctx.lr = 0x8316D39C;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D3AC"))) PPC_WEAK_FUNC(sub_8316D3AC);
PPC_FUNC_IMPL(__imp__sub_8316D3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316D3B0"))) PPC_WEAK_FUNC(sub_8316D3B0);
PPC_FUNC_IMPL(__imp__sub_8316D3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,29464
	ctx.r9.s64 = ctx.r10.s64 + 29464;
	// lwz r11,29440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29440);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D3C8"))) PPC_WEAK_FUNC(sub_8316D3C8);
PPC_FUNC_IMPL(__imp__sub_8316D3C8) {
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
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,29464
	ctx.r5.s64 = ctx.r10.s64 + 29464;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// addi r4,r7,-19912
	ctx.r4.s64 = ctx.r7.s64 + -19912;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-4500
	ctx.r3.s64 = ctx.r6.s64 + -4500;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,-19948
	ctx.r9.s64 = ctx.r9.s64 + -19948;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82d32af0
	ctx.lr = 0x8316D434;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D444"))) PPC_WEAK_FUNC(sub_8316D444);
PPC_FUNC_IMPL(__imp__sub_8316D444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316D448"))) PPC_WEAK_FUNC(sub_8316D448);
PPC_FUNC_IMPL(__imp__sub_8316D448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,29632
	ctx.r9.s64 = ctx.r10.s64 + 29632;
	// lwz r11,29608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29608);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D460"))) PPC_WEAK_FUNC(sub_8316D460);
PPC_FUNC_IMPL(__imp__sub_8316D460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31973
	ctx.r9.s64 = -2095382528;
	// addi r6,r10,-19452
	ctx.r6.s64 = ctx.r10.s64 + -19452;
	// addi r5,r9,29632
	ctx.r5.s64 = ctx.r9.s64 + 29632;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,-19208
	ctx.r4.s64 = ctx.r8.s64 + -19208;
	// addi r3,r7,-4452
	ctx.r3.s64 = ctx.r7.s64 + -4452;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316D4CC;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D4E0"))) PPC_WEAK_FUNC(sub_8316D4E0);
PPC_FUNC_IMPL(__imp__sub_8316D4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// addi r9,r11,-19472
	ctx.r9.s64 = ctx.r11.s64 + -19472;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// addi r6,r9,40
	ctx.r6.s64 = ctx.r9.s64 + 40;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r5,r10,-4948
	ctx.r5.s64 = ctx.r10.s64 + -4948;
	// addi r4,r8,-19184
	ctx.r4.s64 = ctx.r8.s64 + -19184;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-4404
	ctx.r3.s64 = ctx.r7.s64 + -4404;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,8
	ctx.r31.s64 = 8;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82d32af0
	ctx.lr = 0x8316D548;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D55C"))) PPC_WEAK_FUNC(sub_8316D55C);
PPC_FUNC_IMPL(__imp__sub_8316D55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316D560"))) PPC_WEAK_FUNC(sub_8316D560);
PPC_FUNC_IMPL(__imp__sub_8316D560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-19236
	ctx.r10.s64 = ctx.r11.s64 + -19236;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x8316D584;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r8,r9,-4356
	ctx.r8.s64 = ctx.r9.s64 + -4356;
	// addi r11,r11,-19184
	ctx.r11.s64 = ctx.r11.s64 + -19184;
	// lis r10,-32028
	ctx.r10.s64 = -2098987008;
	// stw r11,-4356(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4356, ctx.r11.u32);
	// lis r9,-32028
	ctx.r9.s64 = -2098987008;
	// addi r10,r10,26360
	ctx.r10.s64 = ctx.r10.s64 + 26360;
	// addi r9,r9,26248
	ctx.r9.s64 = ctx.r9.s64 + 26248;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D5C8"))) PPC_WEAK_FUNC(sub_8316D5C8);
PPC_FUNC_IMPL(__imp__sub_8316D5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,29744
	ctx.r9.s64 = ctx.r10.s64 + 29744;
	// lwz r11,29736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29736);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D5E0"))) PPC_WEAK_FUNC(sub_8316D5E0);
PPC_FUNC_IMPL(__imp__sub_8316D5E0) {
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
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,29744
	ctx.r5.s64 = ctx.r10.s64 + 29744;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// addi r4,r7,-18892
	ctx.r4.s64 = ctx.r7.s64 + -18892;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-4340
	ctx.r3.s64 = ctx.r6.s64 + -4340;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,-18928
	ctx.r9.s64 = ctx.r9.s64 + -18928;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82d32af0
	ctx.lr = 0x8316D64C;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D65C"))) PPC_WEAK_FUNC(sub_8316D65C);
PPC_FUNC_IMPL(__imp__sub_8316D65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316D660"))) PPC_WEAK_FUNC(sub_8316D660);
PPC_FUNC_IMPL(__imp__sub_8316D660) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-18904
	ctx.r10.s64 = ctx.r11.s64 + -18904;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x8316D684;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r8,r9,-4292
	ctx.r8.s64 = ctx.r9.s64 + -4292;
	// addi r11,r11,-18892
	ctx.r11.s64 = ctx.r11.s64 + -18892;
	// lis r10,-32028
	ctx.r10.s64 = -2098987008;
	// stw r11,-4292(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4292, ctx.r11.u32);
	// lis r9,-32028
	ctx.r9.s64 = -2098987008;
	// addi r10,r10,26600
	ctx.r10.s64 = ctx.r10.s64 + 26600;
	// addi r9,r9,26560
	ctx.r9.s64 = ctx.r9.s64 + 26560;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D6C8"))) PPC_WEAK_FUNC(sub_8316D6C8);
PPC_FUNC_IMPL(__imp__sub_8316D6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,29856
	ctx.r9.s64 = ctx.r10.s64 + 29856;
	// lwz r11,29848(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29848);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D6E0"))) PPC_WEAK_FUNC(sub_8316D6E0);
PPC_FUNC_IMPL(__imp__sub_8316D6E0) {
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
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,29856
	ctx.r5.s64 = ctx.r10.s64 + 29856;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// addi r4,r7,-18620
	ctx.r4.s64 = ctx.r7.s64 + -18620;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-4276
	ctx.r3.s64 = ctx.r6.s64 + -4276;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,-18704
	ctx.r9.s64 = ctx.r9.s64 + -18704;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x82d32af0
	ctx.lr = 0x8316D74C;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D75C"))) PPC_WEAK_FUNC(sub_8316D75C);
PPC_FUNC_IMPL(__imp__sub_8316D75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316D760"))) PPC_WEAK_FUNC(sub_8316D760);
PPC_FUNC_IMPL(__imp__sub_8316D760) {
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
	// bl 0x82e46990
	ctx.lr = 0x8316D778;
	sub_82E46990(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r8,r9,-4228
	ctx.r8.s64 = ctx.r9.s64 + -4228;
	// addi r11,r11,-18620
	ctx.r11.s64 = ctx.r11.s64 + -18620;
	// lis r10,-32028
	ctx.r10.s64 = -2098987008;
	// stw r11,-4228(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4228, ctx.r11.u32);
	// lis r9,-32028
	ctx.r9.s64 = -2098987008;
	// addi r10,r10,26960
	ctx.r10.s64 = ctx.r10.s64 + 26960;
	// addi r9,r9,26920
	ctx.r9.s64 = ctx.r9.s64 + 26920;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D7BC"))) PPC_WEAK_FUNC(sub_8316D7BC);
PPC_FUNC_IMPL(__imp__sub_8316D7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316D7C0"))) PPC_WEAK_FUNC(sub_8316D7C0);
PPC_FUNC_IMPL(__imp__sub_8316D7C0) {
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
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,-18600
	ctx.r3.s64 = ctx.r9.s64 + -18600;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// addi r4,r7,-18576
	ctx.r4.s64 = ctx.r7.s64 + -18576;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-4212
	ctx.r3.s64 = ctx.r6.s64 + -4212;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82d32af0
	ctx.lr = 0x8316D824;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D834"))) PPC_WEAK_FUNC(sub_8316D834);
PPC_FUNC_IMPL(__imp__sub_8316D834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316D838"))) PPC_WEAK_FUNC(sub_8316D838);
PPC_FUNC_IMPL(__imp__sub_8316D838) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e49520
	ctx.lr = 0x8316D850;
	sub_82E49520(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r8,r9,-4164
	ctx.r8.s64 = ctx.r9.s64 + -4164;
	// addi r11,r11,-18576
	ctx.r11.s64 = ctx.r11.s64 + -18576;
	// lis r10,-32028
	ctx.r10.s64 = -2098987008;
	// stw r11,-4164(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4164, ctx.r11.u32);
	// lis r9,-32028
	ctx.r9.s64 = -2098987008;
	// addi r10,r10,27384
	ctx.r10.s64 = ctx.r10.s64 + 27384;
	// addi r9,r9,27400
	ctx.r9.s64 = ctx.r9.s64 + 27400;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D894"))) PPC_WEAK_FUNC(sub_8316D894);
PPC_FUNC_IMPL(__imp__sub_8316D894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316D898"))) PPC_WEAK_FUNC(sub_8316D898);
PPC_FUNC_IMPL(__imp__sub_8316D898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,-18520
	ctx.r6.s64 = ctx.r10.s64 + -18520;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-4948
	ctx.r5.s64 = ctx.r9.s64 + -4948;
	// addi r4,r8,-18408
	ctx.r4.s64 = ctx.r8.s64 + -18408;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-4148
	ctx.r3.s64 = ctx.r7.s64 + -4148;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82d32af0
	ctx.lr = 0x8316D900;
	sub_82D32AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D914"))) PPC_WEAK_FUNC(sub_8316D914);
PPC_FUNC_IMPL(__imp__sub_8316D914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

