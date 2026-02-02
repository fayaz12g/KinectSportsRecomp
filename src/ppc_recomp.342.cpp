#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8316D918"))) PPC_WEAK_FUNC(sub_8316D918);
PPC_FUNC_IMPL(__imp__sub_8316D918) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-18420
	ctx.r10.s64 = ctx.r11.s64 + -18420;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82d372b8
	ctx.lr = 0x8316D944;
	sub_82D372B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82d372b8
	ctx.lr = 0x8316D950;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r8,r9,-4100
	ctx.r8.s64 = ctx.r9.s64 + -4100;
	// addi r11,r11,-18408
	ctx.r11.s64 = ctx.r11.s64 + -18408;
	// lis r10,-32028
	ctx.r10.s64 = -2098987008;
	// stw r11,-4100(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4100, ctx.r11.u32);
	// lis r9,-32028
	ctx.r9.s64 = -2098987008;
	// addi r10,r10,27632
	ctx.r10.s64 = ctx.r10.s64 + 27632;
	// addi r9,r9,27488
	ctx.r9.s64 = ctx.r9.s64 + 27488;
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316D998"))) PPC_WEAK_FUNC(sub_8316D998);
PPC_FUNC_IMPL(__imp__sub_8316D998) {
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
	// addi r6,r10,-18472
	ctx.r6.s64 = ctx.r10.s64 + -18472;
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
	// addi r4,r8,-18384
	ctx.r4.s64 = ctx.r8.s64 + -18384;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-4084
	ctx.r3.s64 = ctx.r7.s64 + -4084;
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
	ctx.lr = 0x8316DA04;
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

__attribute__((alias("__imp__sub_8316DA18"))) PPC_WEAK_FUNC(sub_8316DA18);
PPC_FUNC_IMPL(__imp__sub_8316DA18) {
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
	// bl 0x82e49968
	ctx.lr = 0x8316DA30;
	sub_82E49968(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r8,r9,-4036
	ctx.r8.s64 = ctx.r9.s64 + -4036;
	// addi r11,r11,-18384
	ctx.r11.s64 = ctx.r11.s64 + -18384;
	// lis r10,-32028
	ctx.r10.s64 = -2098987008;
	// stw r11,-4036(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4036, ctx.r11.u32);
	// lis r9,-32028
	ctx.r9.s64 = -2098987008;
	// addi r10,r10,27528
	ctx.r10.s64 = ctx.r10.s64 + 27528;
	// addi r9,r9,27544
	ctx.r9.s64 = ctx.r9.s64 + 27544;
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

__attribute__((alias("__imp__sub_8316DA74"))) PPC_WEAK_FUNC(sub_8316DA74);
PPC_FUNC_IMPL(__imp__sub_8316DA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316DA78"))) PPC_WEAK_FUNC(sub_8316DA78);
PPC_FUNC_IMPL(__imp__sub_8316DA78) {
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
	// addi r6,r10,-18344
	ctx.r6.s64 = ctx.r10.s64 + -18344;
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
	// addi r4,r8,-18232
	ctx.r4.s64 = ctx.r8.s64 + -18232;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-4020
	ctx.r3.s64 = ctx.r7.s64 + -4020;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
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
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x82d32af0
	ctx.lr = 0x8316DAE4;
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

__attribute__((alias("__imp__sub_8316DAF8"))) PPC_WEAK_FUNC(sub_8316DAF8);
PPC_FUNC_IMPL(__imp__sub_8316DAF8) {
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
	// addi r7,r10,-18160
	ctx.r7.s64 = ctx.r10.s64 + -18160;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-17928
	ctx.r4.s64 = ctx.r9.s64 + -17928;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-3972
	ctx.r3.s64 = ctx.r8.s64 + -3972;
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
	ctx.lr = 0x8316DB58;
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

__attribute__((alias("__imp__sub_8316DB68"))) PPC_WEAK_FUNC(sub_8316DB68);
PPC_FUNC_IMPL(__imp__sub_8316DB68) {
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
	// addi r6,r10,-18112
	ctx.r6.s64 = ctx.r10.s64 + -18112;
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
	// addi r4,r8,-17904
	ctx.r4.s64 = ctx.r8.s64 + -17904;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-3924
	ctx.r3.s64 = ctx.r7.s64 + -3924;
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
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82d32af0
	ctx.lr = 0x8316DBD0;
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

__attribute__((alias("__imp__sub_8316DBE4"))) PPC_WEAK_FUNC(sub_8316DBE4);
PPC_FUNC_IMPL(__imp__sub_8316DBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316DBE8"))) PPC_WEAK_FUNC(sub_8316DBE8);
PPC_FUNC_IMPL(__imp__sub_8316DBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-17940
	ctx.r10.s64 = ctx.r11.s64 + -17940;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82d372b8
	ctx.lr = 0x8316DC14;
	sub_82D372B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d372b8
	ctx.lr = 0x8316DC20;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r8,r9,-3876
	ctx.r8.s64 = ctx.r9.s64 + -3876;
	// addi r11,r11,-17904
	ctx.r11.s64 = ctx.r11.s64 + -17904;
	// lis r10,-32028
	ctx.r10.s64 = -2098987008;
	// stw r11,-3876(r9)
	PPC_STORE_U32(ctx.r9.u32 + -3876, ctx.r11.u32);
	// lis r9,-32028
	ctx.r9.s64 = -2098987008;
	// addi r10,r10,28536
	ctx.r10.s64 = ctx.r10.s64 + 28536;
	// addi r9,r9,28488
	ctx.r9.s64 = ctx.r9.s64 + 28488;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316DC68"))) PPC_WEAK_FUNC(sub_8316DC68);
PPC_FUNC_IMPL(__imp__sub_8316DC68) {
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
	// addi r6,r10,-17880
	ctx.r6.s64 = ctx.r10.s64 + -17880;
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
	// addi r4,r8,-17816
	ctx.r4.s64 = ctx.r8.s64 + -17816;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-3860
	ctx.r3.s64 = ctx.r7.s64 + -3860;
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
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82d32af0
	ctx.lr = 0x8316DCD0;
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

__attribute__((alias("__imp__sub_8316DCE4"))) PPC_WEAK_FUNC(sub_8316DCE4);
PPC_FUNC_IMPL(__imp__sub_8316DCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316DCE8"))) PPC_WEAK_FUNC(sub_8316DCE8);
PPC_FUNC_IMPL(__imp__sub_8316DCE8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-17828
	ctx.r10.s64 = ctx.r11.s64 + -17828;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x8316DD0C;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r8,r9,-3812
	ctx.r8.s64 = ctx.r9.s64 + -3812;
	// addi r11,r11,-17816
	ctx.r11.s64 = ctx.r11.s64 + -17816;
	// lis r10,-32028
	ctx.r10.s64 = -2098987008;
	// stw r11,-3812(r9)
	PPC_STORE_U32(ctx.r9.u32 + -3812, ctx.r11.u32);
	// lis r9,-32028
	ctx.r9.s64 = -2098987008;
	// addi r10,r10,28856
	ctx.r10.s64 = ctx.r10.s64 + 28856;
	// addi r9,r9,28816
	ctx.r9.s64 = ctx.r9.s64 + 28816;
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

__attribute__((alias("__imp__sub_8316DD50"))) PPC_WEAK_FUNC(sub_8316DD50);
PPC_FUNC_IMPL(__imp__sub_8316DD50) {
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
	// addi r11,r11,-17640
	ctx.r11.s64 = ctx.r11.s64 + -17640;
	// li r3,13
	ctx.r3.s64 = 13;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r6,r11,312
	ctx.r6.s64 = ctx.r11.s64 + 312;
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
	// addi r4,r8,-17212
	ctx.r4.s64 = ctx.r8.s64 + -17212;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r7,-3796
	ctx.r3.s64 = ctx.r7.s64 + -3796;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82d32af0
	ctx.lr = 0x8316DDB8;
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

__attribute__((alias("__imp__sub_8316DDC8"))) PPC_WEAK_FUNC(sub_8316DDC8);
PPC_FUNC_IMPL(__imp__sub_8316DDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-17224
	ctx.r10.s64 = ctx.r11.s64 + -17224;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d372b8
	ctx.lr = 0x8316DDF4;
	sub_82D372B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82d372b8
	ctx.lr = 0x8316DE00;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r8,r9,-3748
	ctx.r8.s64 = ctx.r9.s64 + -3748;
	// addi r11,r11,-17212
	ctx.r11.s64 = ctx.r11.s64 + -17212;
	// lis r10,-32028
	ctx.r10.s64 = -2098987008;
	// stw r11,-3748(r9)
	PPC_STORE_U32(ctx.r9.u32 + -3748, ctx.r11.u32);
	// lis r9,-32028
	ctx.r9.s64 = -2098987008;
	// addi r10,r10,29264
	ctx.r10.s64 = ctx.r10.s64 + 29264;
	// addi r9,r9,29224
	ctx.r9.s64 = ctx.r9.s64 + 29224;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316DE48"))) PPC_WEAK_FUNC(sub_8316DE48);
PPC_FUNC_IMPL(__imp__sub_8316DE48) {
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
	// addi r6,r10,-17152
	ctx.r6.s64 = ctx.r10.s64 + -17152;
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
	// addi r4,r8,-17040
	ctx.r4.s64 = ctx.r8.s64 + -17040;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-3732
	ctx.r3.s64 = ctx.r7.s64 + -3732;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
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
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82d32af0
	ctx.lr = 0x8316DEB4;
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

__attribute__((alias("__imp__sub_8316DEC8"))) PPC_WEAK_FUNC(sub_8316DEC8);
PPC_FUNC_IMPL(__imp__sub_8316DEC8) {
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
	// addi r6,r10,-17008
	ctx.r6.s64 = ctx.r10.s64 + -17008;
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
	// addi r4,r8,-16944
	ctx.r4.s64 = ctx.r8.s64 + -16944;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-3684
	ctx.r3.s64 = ctx.r7.s64 + -3684;
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
	ctx.lr = 0x8316DF34;
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

__attribute__((alias("__imp__sub_8316DF48"))) PPC_WEAK_FUNC(sub_8316DF48);
PPC_FUNC_IMPL(__imp__sub_8316DF48) {
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
	// addi r6,r10,-16912
	ctx.r6.s64 = ctx.r10.s64 + -16912;
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
	// addi r4,r8,-16864
	ctx.r4.s64 = ctx.r8.s64 + -16864;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-3636
	ctx.r3.s64 = ctx.r7.s64 + -3636;
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
	ctx.lr = 0x8316DFB4;
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

__attribute__((alias("__imp__sub_8316DFC8"))) PPC_WEAK_FUNC(sub_8316DFC8);
PPC_FUNC_IMPL(__imp__sub_8316DFC8) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r3,r9,-16832
	ctx.r3.s64 = ctx.r9.s64 + -16832;
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
	// addi r4,r7,-16768
	ctx.r4.s64 = ctx.r7.s64 + -16768;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-3588
	ctx.r3.s64 = ctx.r6.s64 + -3588;
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
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82d32af0
	ctx.lr = 0x8316E02C;
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

__attribute__((alias("__imp__sub_8316E03C"))) PPC_WEAK_FUNC(sub_8316E03C);
PPC_FUNC_IMPL(__imp__sub_8316E03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316E040"))) PPC_WEAK_FUNC(sub_8316E040);
PPC_FUNC_IMPL(__imp__sub_8316E040) {
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
	// addi r6,r10,-16704
	ctx.r6.s64 = ctx.r10.s64 + -16704;
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
	// addi r4,r8,-16616
	ctx.r4.s64 = ctx.r8.s64 + -16616;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-3540
	ctx.r3.s64 = ctx.r7.s64 + -3540;
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
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82d32af0
	ctx.lr = 0x8316E0AC;
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

__attribute__((alias("__imp__sub_8316E0C0"))) PPC_WEAK_FUNC(sub_8316E0C0);
PPC_FUNC_IMPL(__imp__sub_8316E0C0) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-16628
	ctx.r10.s64 = ctx.r11.s64 + -16628;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d372b8
	ctx.lr = 0x8316E0EC;
	sub_82D372B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82d372b8
	ctx.lr = 0x8316E0F8;
	sub_82D372B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d372b8
	ctx.lr = 0x8316E104;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r8,r9,-3492
	ctx.r8.s64 = ctx.r9.s64 + -3492;
	// addi r11,r11,-16616
	ctx.r11.s64 = ctx.r11.s64 + -16616;
	// lis r10,-32028
	ctx.r10.s64 = -2098987008;
	// stw r11,-3492(r9)
	PPC_STORE_U32(ctx.r9.u32 + -3492, ctx.r11.u32);
	// lis r9,-32028
	ctx.r9.s64 = -2098987008;
	// addi r10,r10,30824
	ctx.r10.s64 = ctx.r10.s64 + 30824;
	// addi r9,r9,30784
	ctx.r9.s64 = ctx.r9.s64 + 30784;
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E14C"))) PPC_WEAK_FUNC(sub_8316E14C);
PPC_FUNC_IMPL(__imp__sub_8316E14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316E150"))) PPC_WEAK_FUNC(sub_8316E150);
PPC_FUNC_IMPL(__imp__sub_8316E150) {
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
	// addi r6,r10,-16584
	ctx.r6.s64 = ctx.r10.s64 + -16584;
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
	// addi r4,r8,-16472
	ctx.r4.s64 = ctx.r8.s64 + -16472;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-3476
	ctx.r3.s64 = ctx.r7.s64 + -3476;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
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
	ctx.lr = 0x8316E1BC;
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

__attribute__((alias("__imp__sub_8316E1D0"))) PPC_WEAK_FUNC(sub_8316E1D0);
PPC_FUNC_IMPL(__imp__sub_8316E1D0) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-16484
	ctx.r10.s64 = ctx.r11.s64 + -16484;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82d372b8
	ctx.lr = 0x8316E1FC;
	sub_82D372B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82d372b8
	ctx.lr = 0x8316E208;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r8,r9,-3428
	ctx.r8.s64 = ctx.r9.s64 + -3428;
	// addi r11,r11,-16472
	ctx.r11.s64 = ctx.r11.s64 + -16472;
	// lis r10,-32028
	ctx.r10.s64 = -2098987008;
	// stw r11,-3428(r9)
	PPC_STORE_U32(ctx.r9.u32 + -3428, ctx.r11.u32);
	// lis r9,-32028
	ctx.r9.s64 = -2098987008;
	// addi r10,r10,31168
	ctx.r10.s64 = ctx.r10.s64 + 31168;
	// addi r9,r9,31128
	ctx.r9.s64 = ctx.r9.s64 + 31128;
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E250"))) PPC_WEAK_FUNC(sub_8316E250);
PPC_FUNC_IMPL(__imp__sub_8316E250) {
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
	// addi r3,r9,-16432
	ctx.r3.s64 = ctx.r9.s64 + -16432;
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
	// addi r4,r7,-16392
	ctx.r4.s64 = ctx.r7.s64 + -16392;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-3412
	ctx.r3.s64 = ctx.r6.s64 + -3412;
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
	ctx.lr = 0x8316E2B4;
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

__attribute__((alias("__imp__sub_8316E2C4"))) PPC_WEAK_FUNC(sub_8316E2C4);
PPC_FUNC_IMPL(__imp__sub_8316E2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316E2C8"))) PPC_WEAK_FUNC(sub_8316E2C8);
PPC_FUNC_IMPL(__imp__sub_8316E2C8) {
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
	// addi r7,r10,-16208
	ctx.r7.s64 = ctx.r10.s64 + -16208;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,11
	ctx.r6.s64 = 11;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-15896
	ctx.r4.s64 = ctx.r9.s64 + -15896;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-3364
	ctx.r3.s64 = ctx.r8.s64 + -3364;
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
	// li r6,84
	ctx.r6.s64 = 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316E328;
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

__attribute__((alias("__imp__sub_8316E338"))) PPC_WEAK_FUNC(sub_8316E338);
PPC_FUNC_IMPL(__imp__sub_8316E338) {
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
	// addi r6,r10,-15944
	ctx.r6.s64 = ctx.r10.s64 + -15944;
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
	// addi r4,r8,-15868
	ctx.r4.s64 = ctx.r8.s64 + -15868;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-3316
	ctx.r3.s64 = ctx.r7.s64 + -3316;
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
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82d32af0
	ctx.lr = 0x8316E3A4;
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

__attribute__((alias("__imp__sub_8316E3B8"))) PPC_WEAK_FUNC(sub_8316E3B8);
PPC_FUNC_IMPL(__imp__sub_8316E3B8) {
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
	// bl 0x82e4ac40
	ctx.lr = 0x8316E3D0;
	sub_82E4AC40(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r8,r9,-3268
	ctx.r8.s64 = ctx.r9.s64 + -3268;
	// addi r11,r11,-15868
	ctx.r11.s64 = ctx.r11.s64 + -15868;
	// lis r10,-32028
	ctx.r10.s64 = -2098987008;
	// stw r11,-3268(r9)
	PPC_STORE_U32(ctx.r9.u32 + -3268, ctx.r11.u32);
	// lis r9,-32028
	ctx.r9.s64 = -2098987008;
	// addi r10,r10,31672
	ctx.r10.s64 = ctx.r10.s64 + 31672;
	// addi r9,r9,31688
	ctx.r9.s64 = ctx.r9.s64 + 31688;
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

__attribute__((alias("__imp__sub_8316E414"))) PPC_WEAK_FUNC(sub_8316E414);
PPC_FUNC_IMPL(__imp__sub_8316E414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316E418"))) PPC_WEAK_FUNC(sub_8316E418);
PPC_FUNC_IMPL(__imp__sub_8316E418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,30556
	ctx.r9.s64 = ctx.r10.s64 + 30556;
	// lwz r11,30536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30536);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E430"))) PPC_WEAK_FUNC(sub_8316E430);
PPC_FUNC_IMPL(__imp__sub_8316E430) {
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
	// addi r5,r10,30556
	ctx.r5.s64 = ctx.r10.s64 + 30556;
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
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// addi r4,r7,-15732
	ctx.r4.s64 = ctx.r7.s64 + -15732;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-3252
	ctx.r3.s64 = ctx.r6.s64 + -3252;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,-15768
	ctx.r9.s64 = ctx.r9.s64 + -15768;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82d32af0
	ctx.lr = 0x8316E49C;
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

__attribute__((alias("__imp__sub_8316E4AC"))) PPC_WEAK_FUNC(sub_8316E4AC);
PPC_FUNC_IMPL(__imp__sub_8316E4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316E4B0"))) PPC_WEAK_FUNC(sub_8316E4B0);
PPC_FUNC_IMPL(__imp__sub_8316E4B0) {
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
	// addi r3,r9,-15688
	ctx.r3.s64 = ctx.r9.s64 + -15688;
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
	// addi r4,r7,-15648
	ctx.r4.s64 = ctx.r7.s64 + -15648;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-3204
	ctx.r3.s64 = ctx.r6.s64 + -3204;
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
	ctx.lr = 0x8316E514;
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

__attribute__((alias("__imp__sub_8316E524"))) PPC_WEAK_FUNC(sub_8316E524);
PPC_FUNC_IMPL(__imp__sub_8316E524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316E528"))) PPC_WEAK_FUNC(sub_8316E528);
PPC_FUNC_IMPL(__imp__sub_8316E528) {
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
	// addi r3,r9,-15604
	ctx.r3.s64 = ctx.r9.s64 + -15604;
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
	// addi r4,r7,-15564
	ctx.r4.s64 = ctx.r7.s64 + -15564;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-3156
	ctx.r3.s64 = ctx.r6.s64 + -3156;
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
	ctx.lr = 0x8316E58C;
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

__attribute__((alias("__imp__sub_8316E59C"))) PPC_WEAK_FUNC(sub_8316E59C);
PPC_FUNC_IMPL(__imp__sub_8316E59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316E5A0"))) PPC_WEAK_FUNC(sub_8316E5A0);
PPC_FUNC_IMPL(__imp__sub_8316E5A0) {
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
	// addi r3,r9,-15516
	ctx.r3.s64 = ctx.r9.s64 + -15516;
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
	// addi r4,r7,-15476
	ctx.r4.s64 = ctx.r7.s64 + -15476;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-3108
	ctx.r3.s64 = ctx.r6.s64 + -3108;
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
	ctx.lr = 0x8316E604;
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

__attribute__((alias("__imp__sub_8316E614"))) PPC_WEAK_FUNC(sub_8316E614);
PPC_FUNC_IMPL(__imp__sub_8316E614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316E618"))) PPC_WEAK_FUNC(sub_8316E618);
PPC_FUNC_IMPL(__imp__sub_8316E618) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r11,-15300
	ctx.r9.s64 = ctx.r11.s64 + -15300;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// addi r7,r9,20
	ctx.r7.s64 = ctx.r9.s64 + 20;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r10,-15232
	ctx.r4.s64 = ctx.r10.s64 + -15232;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-3060
	ctx.r3.s64 = ctx.r8.s64 + -3060;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316E678;
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

__attribute__((alias("__imp__sub_8316E688"))) PPC_WEAK_FUNC(sub_8316E688);
PPC_FUNC_IMPL(__imp__sub_8316E688) {
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
	// addi r7,r10,-15216
	ctx.r7.s64 = ctx.r10.s64 + -15216;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-15168
	ctx.r4.s64 = ctx.r9.s64 + -15168;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-3012
	ctx.r3.s64 = ctx.r8.s64 + -3012;
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
	ctx.lr = 0x8316E6E8;
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

__attribute__((alias("__imp__sub_8316E6F8"))) PPC_WEAK_FUNC(sub_8316E6F8);
PPC_FUNC_IMPL(__imp__sub_8316E6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r9,-31973
	ctx.r9.s64 = -2095382528;
	// addi r8,r9,30896
	ctx.r8.s64 = ctx.r9.s64 + 30896;
	// lwz r11,30856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30856);
	// lwz r10,30860(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30860);
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// stw r10,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316E71C"))) PPC_WEAK_FUNC(sub_8316E71C);
PPC_FUNC_IMPL(__imp__sub_8316E71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316E720"))) PPC_WEAK_FUNC(sub_8316E720);
PPC_FUNC_IMPL(__imp__sub_8316E720) {
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
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r7,r10,30896
	ctx.r7.s64 = ctx.r10.s64 + 30896;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,-14588
	ctx.r4.s64 = ctx.r9.s64 + -14588;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-2964
	ctx.r3.s64 = ctx.r8.s64 + -2964;
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
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316E784;
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

__attribute__((alias("__imp__sub_8316E794"))) PPC_WEAK_FUNC(sub_8316E794);
PPC_FUNC_IMPL(__imp__sub_8316E794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316E798"))) PPC_WEAK_FUNC(sub_8316E798);
PPC_FUNC_IMPL(__imp__sub_8316E798) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-14672
	ctx.r9.s64 = ctx.r11.s64 + -14672;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r6,r9,40
	ctx.r6.s64 = ctx.r9.s64 + 40;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r4,r8,-14556
	ctx.r4.s64 = ctx.r8.s64 + -14556;
	// addi r3,r7,-2916
	ctx.r3.s64 = ctx.r7.s64 + -2916;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
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
	ctx.lr = 0x8316E7F8;
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

__attribute__((alias("__imp__sub_8316E808"))) PPC_WEAK_FUNC(sub_8316E808);
PPC_FUNC_IMPL(__imp__sub_8316E808) {
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
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-13408
	ctx.r9.s64 = ctx.r10.s64 + -13408;
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r4,r7,-13168
	ctx.r4.s64 = ctx.r7.s64 + -13168;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-2868
	ctx.r3.s64 = ctx.r6.s64 + -2868;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
	ctx.lr = 0x8316E864;
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

__attribute__((alias("__imp__sub_8316E874"))) PPC_WEAK_FUNC(sub_8316E874);
PPC_FUNC_IMPL(__imp__sub_8316E874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316E878"))) PPC_WEAK_FUNC(sub_8316E878);
PPC_FUNC_IMPL(__imp__sub_8316E878) {
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
	// addi r5,r10,-2868
	ctx.r5.s64 = ctx.r10.s64 + -2868;
	// addi r4,r9,-13152
	ctx.r4.s64 = ctx.r9.s64 + -13152;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-2820
	ctx.r3.s64 = ctx.r8.s64 + -2820;
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
	ctx.lr = 0x8316E8D0;
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

__attribute__((alias("__imp__sub_8316E8E0"))) PPC_WEAK_FUNC(sub_8316E8E0);
PPC_FUNC_IMPL(__imp__sub_8316E8E0) {
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
	// addi r5,r10,-2868
	ctx.r5.s64 = ctx.r10.s64 + -2868;
	// addi r4,r9,-13132
	ctx.r4.s64 = ctx.r9.s64 + -13132;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-2772
	ctx.r3.s64 = ctx.r8.s64 + -2772;
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
	ctx.lr = 0x8316E938;
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

__attribute__((alias("__imp__sub_8316E948"))) PPC_WEAK_FUNC(sub_8316E948);
PPC_FUNC_IMPL(__imp__sub_8316E948) {
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
	// addi r7,r10,-13388
	ctx.r7.s64 = ctx.r10.s64 + -13388;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,-13112
	ctx.r4.s64 = ctx.r9.s64 + -13112;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-2724
	ctx.r3.s64 = ctx.r8.s64 + -2724;
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
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316E9AC;
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

__attribute__((alias("__imp__sub_8316E9BC"))) PPC_WEAK_FUNC(sub_8316E9BC);
PPC_FUNC_IMPL(__imp__sub_8316E9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316E9C0"))) PPC_WEAK_FUNC(sub_8316E9C0);
PPC_FUNC_IMPL(__imp__sub_8316E9C0) {
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
	// addi r6,r10,-13336
	ctx.r6.s64 = ctx.r10.s64 + -13336;
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
	// addi r5,r9,-2820
	ctx.r5.s64 = ctx.r9.s64 + -2820;
	// addi r4,r8,-13076
	ctx.r4.s64 = ctx.r8.s64 + -13076;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-2676
	ctx.r3.s64 = ctx.r7.s64 + -2676;
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
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82d32af0
	ctx.lr = 0x8316EA2C;
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

__attribute__((alias("__imp__sub_8316EA40"))) PPC_WEAK_FUNC(sub_8316EA40);
PPC_FUNC_IMPL(__imp__sub_8316EA40) {
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
	// bl 0x82e59158
	ctx.lr = 0x8316EA58;
	sub_82E59158(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r8,r9,-2628
	ctx.r8.s64 = ctx.r9.s64 + -2628;
	// addi r11,r11,-13076
	ctx.r11.s64 = ctx.r11.s64 + -13076;
	// lis r10,-32027
	ctx.r10.s64 = -2098921472;
	// stw r11,-2628(r9)
	PPC_STORE_U32(ctx.r9.u32 + -2628, ctx.r11.u32);
	// lis r9,-32027
	ctx.r9.s64 = -2098921472;
	// addi r10,r10,-13872
	ctx.r10.s64 = ctx.r10.s64 + -13872;
	// addi r9,r9,-13856
	ctx.r9.s64 = ctx.r9.s64 + -13856;
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

__attribute__((alias("__imp__sub_8316EA9C"))) PPC_WEAK_FUNC(sub_8316EA9C);
PPC_FUNC_IMPL(__imp__sub_8316EA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316EAA0"))) PPC_WEAK_FUNC(sub_8316EAA0);
PPC_FUNC_IMPL(__imp__sub_8316EAA0) {
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
	// addi r6,r10,-13264
	ctx.r6.s64 = ctx.r10.s64 + -13264;
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
	// addi r5,r9,-2772
	ctx.r5.s64 = ctx.r9.s64 + -2772;
	// addi r4,r8,-13052
	ctx.r4.s64 = ctx.r8.s64 + -13052;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-2612
	ctx.r3.s64 = ctx.r7.s64 + -2612;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
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
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x82d32af0
	ctx.lr = 0x8316EB0C;
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

__attribute__((alias("__imp__sub_8316EB20"))) PPC_WEAK_FUNC(sub_8316EB20);
PPC_FUNC_IMPL(__imp__sub_8316EB20) {
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
	// bl 0x82e59370
	ctx.lr = 0x8316EB38;
	sub_82E59370(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r8,r9,-2564
	ctx.r8.s64 = ctx.r9.s64 + -2564;
	// addi r11,r11,-13052
	ctx.r11.s64 = ctx.r11.s64 + -13052;
	// lis r10,-32027
	ctx.r10.s64 = -2098921472;
	// stw r11,-2564(r9)
	PPC_STORE_U32(ctx.r9.u32 + -2564, ctx.r11.u32);
	// lis r9,-32027
	ctx.r9.s64 = -2098921472;
	// addi r10,r10,-13768
	ctx.r10.s64 = ctx.r10.s64 + -13768;
	// addi r9,r9,-13752
	ctx.r9.s64 = ctx.r9.s64 + -13752;
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

__attribute__((alias("__imp__sub_8316EB7C"))) PPC_WEAK_FUNC(sub_8316EB7C);
PPC_FUNC_IMPL(__imp__sub_8316EB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316EB80"))) PPC_WEAK_FUNC(sub_8316EB80);
PPC_FUNC_IMPL(__imp__sub_8316EB80) {
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
	// addi r7,r10,-12840
	ctx.r7.s64 = ctx.r10.s64 + -12840;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,11
	ctx.r6.s64 = 11;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-12576
	ctx.r4.s64 = ctx.r9.s64 + -12576;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-2548
	ctx.r3.s64 = ctx.r8.s64 + -2548;
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
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316EBE0;
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

__attribute__((alias("__imp__sub_8316EBF0"))) PPC_WEAK_FUNC(sub_8316EBF0);
PPC_FUNC_IMPL(__imp__sub_8316EBF0) {
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
	// addi r7,r10,-12408
	ctx.r7.s64 = ctx.r10.s64 + -12408;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-12192
	ctx.r4.s64 = ctx.r9.s64 + -12192;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-2500
	ctx.r3.s64 = ctx.r8.s64 + -2500;
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
	ctx.lr = 0x8316EC50;
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

__attribute__((alias("__imp__sub_8316EC60"))) PPC_WEAK_FUNC(sub_8316EC60);
PPC_FUNC_IMPL(__imp__sub_8316EC60) {
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
	// addi r7,r10,-12152
	ctx.r7.s64 = ctx.r10.s64 + -12152;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-12056
	ctx.r4.s64 = ctx.r9.s64 + -12056;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-2452
	ctx.r3.s64 = ctx.r8.s64 + -2452;
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
	ctx.lr = 0x8316ECC0;
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

__attribute__((alias("__imp__sub_8316ECD0"))) PPC_WEAK_FUNC(sub_8316ECD0);
PPC_FUNC_IMPL(__imp__sub_8316ECD0) {
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
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r7,r10,-12080
	ctx.r7.s64 = ctx.r10.s64 + -12080;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-2168
	ctx.r4.s64 = ctx.r9.s64 + -2168;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-2404
	ctx.r3.s64 = ctx.r8.s64 + -2404;
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
	ctx.lr = 0x8316ED30;
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

__attribute__((alias("__imp__sub_8316ED40"))) PPC_WEAK_FUNC(sub_8316ED40);
PPC_FUNC_IMPL(__imp__sub_8316ED40) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r11,-12020
	ctx.r6.s64 = ctx.r11.s64 + -12020;
	// addi r4,r10,23528
	ctx.r4.s64 = ctx.r10.s64 + 23528;
	// addi r3,r9,-2352
	ctx.r3.s64 = ctx.r9.s64 + -2352;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x82e59be0
	ctx.lr = 0x8316ED6C;
	sub_82E59BE0(ctx, base);
	// lis r8,-31976
	ctx.r8.s64 = -2095579136;
	// addi r3,r8,-30776
	ctx.r3.s64 = ctx.r8.s64 + -30776;
	// bl 0x82fa2318
	ctx.lr = 0x8316ED78;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316ED88"))) PPC_WEAK_FUNC(sub_8316ED88);
PPC_FUNC_IMPL(__imp__sub_8316ED88) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r8,-31973
	ctx.r8.s64 = -2095382528;
	// addi r7,r8,31740
	ctx.r7.s64 = ctx.r8.s64 + 31740;
	// lwz r11,-21088(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21088);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r7,-21088(r9)
	PPC_STORE_U32(ctx.r9.u32 + -21088, ctx.r7.u32);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EDA8"))) PPC_WEAK_FUNC(sub_8316EDA8);
PPC_FUNC_IMPL(__imp__sub_8316EDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r8,-31973
	ctx.r8.s64 = -2095382528;
	// addi r7,r8,32648
	ctx.r7.s64 = ctx.r8.s64 + 32648;
	// lwz r11,-21088(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21088);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r7,-21088(r9)
	PPC_STORE_U32(ctx.r9.u32 + -21088, ctx.r7.u32);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EDC8"))) PPC_WEAK_FUNC(sub_8316EDC8);
PPC_FUNC_IMPL(__imp__sub_8316EDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// addi r9,r10,-32540
	ctx.r9.s64 = ctx.r10.s64 + -32540;
	// lwz r11,-7792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7792);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stb r11,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EDEC"))) PPC_WEAK_FUNC(sub_8316EDEC);
PPC_FUNC_IMPL(__imp__sub_8316EDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316EDF0"))) PPC_WEAK_FUNC(sub_8316EDF0);
PPC_FUNC_IMPL(__imp__sub_8316EDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// addi r10,r10,-32288
	ctx.r10.s64 = ctx.r10.s64 + -32288;
	// lwz r11,-32488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32488);
	// stw r11,544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 544, ctx.r11.u32);
	// stw r11,580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 580, ctx.r11.u32);
	// stw r11,616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 616, ctx.r11.u32);
	// stw r11,652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 652, ctx.r11.u32);
	// stw r11,688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 688, ctx.r11.u32);
	// stw r11,724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 724, ctx.r11.u32);
	// stw r11,760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 760, ctx.r11.u32);
	// stw r11,796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 796, ctx.r11.u32);
	// stw r11,832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 832, ctx.r11.u32);
	// stw r11,868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 868, ctx.r11.u32);
	// stw r11,904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 904, ctx.r11.u32);
	// stw r11,940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 940, ctx.r11.u32);
	// stw r11,976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 976, ctx.r11.u32);
	// stw r11,1012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1012, ctx.r11.u32);
	// stw r11,1048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1048, ctx.r11.u32);
	// stw r11,1084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1084, ctx.r11.u32);
	// stw r11,1120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1120, ctx.r11.u32);
	// stw r11,1156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1156, ctx.r11.u32);
	// stw r11,1192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1192, ctx.r11.u32);
	// stw r11,1228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1228, ctx.r11.u32);
	// stw r11,1264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1264, ctx.r11.u32);
	// stw r11,1300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1300, ctx.r11.u32);
	// stw r11,1336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1336, ctx.r11.u32);
	// stw r11,1372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1372, ctx.r11.u32);
	// stw r11,1408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1408, ctx.r11.u32);
	// stw r11,1444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1444, ctx.r11.u32);
	// stw r11,1480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1480, ctx.r11.u32);
	// stw r11,1516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1516, ctx.r11.u32);
	// stw r11,1552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1552, ctx.r11.u32);
	// stw r11,1588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1588, ctx.r11.u32);
	// stw r11,1624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1624, ctx.r11.u32);
	// stw r11,1660(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1660, ctx.r11.u32);
	// stw r11,1696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1696, ctx.r11.u32);
	// stw r11,1732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1732, ctx.r11.u32);
	// stw r11,1768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1768, ctx.r11.u32);
	// stw r11,1804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1804, ctx.r11.u32);
	// stw r11,1840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1840, ctx.r11.u32);
	// stw r11,1876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1876, ctx.r11.u32);
	// stw r11,1912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1912, ctx.r11.u32);
	// stw r11,1948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1948, ctx.r11.u32);
	// stw r11,1984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1984, ctx.r11.u32);
	// stw r11,2020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2020, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EEAC"))) PPC_WEAK_FUNC(sub_8316EEAC);
PPC_FUNC_IMPL(__imp__sub_8316EEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316EEB0"))) PPC_WEAK_FUNC(sub_8316EEB0);
PPC_FUNC_IMPL(__imp__sub_8316EEB0) {
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
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-2032
	ctx.r3.s64 = ctx.r11.s64 + -2032;
	// bl 0x82ea3e48
	ctx.lr = 0x8316EEC8;
	sub_82EA3E48(ctx, base);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30728
	ctx.r3.s64 = ctx.r11.s64 + -30728;
	// bl 0x82fa2318
	ctx.lr = 0x8316EED4;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EEE4"))) PPC_WEAK_FUNC(sub_8316EEE4);
PPC_FUNC_IMPL(__imp__sub_8316EEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316EEE8"))) PPC_WEAK_FUNC(sub_8316EEE8);
PPC_FUNC_IMPL(__imp__sub_8316EEE8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,31048
	ctx.r3.s64 = ctx.r11.s64 + 31048;
	// bl 0x82fa3bb8
	ctx.lr = 0x8316EF00;
	sub_82FA3BB8(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// sth r3,4292(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4292, ctx.r3.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EF18"))) PPC_WEAK_FUNC(sub_8316EF18);
PPC_FUNC_IMPL(__imp__sub_8316EF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,4336
	ctx.r11.s64 = ctx.r11.s64 + 4336;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EF34"))) PPC_WEAK_FUNC(sub_8316EF34);
PPC_FUNC_IMPL(__imp__sub_8316EF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316EF38"))) PPC_WEAK_FUNC(sub_8316EF38);
PPC_FUNC_IMPL(__imp__sub_8316EF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,4352
	ctx.r10.s64 = ctx.r10.s64 + 4352;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EF54"))) PPC_WEAK_FUNC(sub_8316EF54);
PPC_FUNC_IMPL(__imp__sub_8316EF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316EF58"))) PPC_WEAK_FUNC(sub_8316EF58);
PPC_FUNC_IMPL(__imp__sub_8316EF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,4368
	ctx.r11.s64 = ctx.r11.s64 + 4368;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EF98"))) PPC_WEAK_FUNC(sub_8316EF98);
PPC_FUNC_IMPL(__imp__sub_8316EF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EFB4"))) PPC_WEAK_FUNC(sub_8316EFB4);
PPC_FUNC_IMPL(__imp__sub_8316EFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316EFB8"))) PPC_WEAK_FUNC(sub_8316EFB8);
PPC_FUNC_IMPL(__imp__sub_8316EFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,4448
	ctx.r10.s64 = ctx.r10.s64 + 4448;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316EFD4"))) PPC_WEAK_FUNC(sub_8316EFD4);
PPC_FUNC_IMPL(__imp__sub_8316EFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316EFD8"))) PPC_WEAK_FUNC(sub_8316EFD8);
PPC_FUNC_IMPL(__imp__sub_8316EFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,4464
	ctx.r11.s64 = ctx.r11.s64 + 4464;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F018"))) PPC_WEAK_FUNC(sub_8316F018);
PPC_FUNC_IMPL(__imp__sub_8316F018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,4544
	ctx.r11.s64 = ctx.r11.s64 + 4544;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F034"))) PPC_WEAK_FUNC(sub_8316F034);
PPC_FUNC_IMPL(__imp__sub_8316F034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F038"))) PPC_WEAK_FUNC(sub_8316F038);
PPC_FUNC_IMPL(__imp__sub_8316F038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,4560
	ctx.r10.s64 = ctx.r10.s64 + 4560;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F054"))) PPC_WEAK_FUNC(sub_8316F054);
PPC_FUNC_IMPL(__imp__sub_8316F054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F058"))) PPC_WEAK_FUNC(sub_8316F058);
PPC_FUNC_IMPL(__imp__sub_8316F058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,4576
	ctx.r11.s64 = ctx.r11.s64 + 4576;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F098"))) PPC_WEAK_FUNC(sub_8316F098);
PPC_FUNC_IMPL(__imp__sub_8316F098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,7424
	ctx.r11.s64 = ctx.r11.s64 + 7424;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F0B4"))) PPC_WEAK_FUNC(sub_8316F0B4);
PPC_FUNC_IMPL(__imp__sub_8316F0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F0B8"))) PPC_WEAK_FUNC(sub_8316F0B8);
PPC_FUNC_IMPL(__imp__sub_8316F0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,7440
	ctx.r10.s64 = ctx.r10.s64 + 7440;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F0D4"))) PPC_WEAK_FUNC(sub_8316F0D4);
PPC_FUNC_IMPL(__imp__sub_8316F0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F0D8"))) PPC_WEAK_FUNC(sub_8316F0D8);
PPC_FUNC_IMPL(__imp__sub_8316F0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,7456
	ctx.r11.s64 = ctx.r11.s64 + 7456;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F118"))) PPC_WEAK_FUNC(sub_8316F118);
PPC_FUNC_IMPL(__imp__sub_8316F118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,7520
	ctx.r11.s64 = ctx.r11.s64 + 7520;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F134"))) PPC_WEAK_FUNC(sub_8316F134);
PPC_FUNC_IMPL(__imp__sub_8316F134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F138"))) PPC_WEAK_FUNC(sub_8316F138);
PPC_FUNC_IMPL(__imp__sub_8316F138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,7536
	ctx.r10.s64 = ctx.r10.s64 + 7536;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F154"))) PPC_WEAK_FUNC(sub_8316F154);
PPC_FUNC_IMPL(__imp__sub_8316F154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F158"))) PPC_WEAK_FUNC(sub_8316F158);
PPC_FUNC_IMPL(__imp__sub_8316F158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,7552
	ctx.r11.s64 = ctx.r11.s64 + 7552;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F198"))) PPC_WEAK_FUNC(sub_8316F198);
PPC_FUNC_IMPL(__imp__sub_8316F198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,7648
	ctx.r11.s64 = ctx.r11.s64 + 7648;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F1B4"))) PPC_WEAK_FUNC(sub_8316F1B4);
PPC_FUNC_IMPL(__imp__sub_8316F1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F1B8"))) PPC_WEAK_FUNC(sub_8316F1B8);
PPC_FUNC_IMPL(__imp__sub_8316F1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,7664
	ctx.r10.s64 = ctx.r10.s64 + 7664;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F1D4"))) PPC_WEAK_FUNC(sub_8316F1D4);
PPC_FUNC_IMPL(__imp__sub_8316F1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F1D8"))) PPC_WEAK_FUNC(sub_8316F1D8);
PPC_FUNC_IMPL(__imp__sub_8316F1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,7680
	ctx.r11.s64 = ctx.r11.s64 + 7680;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F218"))) PPC_WEAK_FUNC(sub_8316F218);
PPC_FUNC_IMPL(__imp__sub_8316F218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,7776
	ctx.r11.s64 = ctx.r11.s64 + 7776;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F258"))) PPC_WEAK_FUNC(sub_8316F258);
PPC_FUNC_IMPL(__imp__sub_8316F258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,7840
	ctx.r11.s64 = ctx.r11.s64 + 7840;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F274"))) PPC_WEAK_FUNC(sub_8316F274);
PPC_FUNC_IMPL(__imp__sub_8316F274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F278"))) PPC_WEAK_FUNC(sub_8316F278);
PPC_FUNC_IMPL(__imp__sub_8316F278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,7856
	ctx.r10.s64 = ctx.r10.s64 + 7856;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F294"))) PPC_WEAK_FUNC(sub_8316F294);
PPC_FUNC_IMPL(__imp__sub_8316F294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F298"))) PPC_WEAK_FUNC(sub_8316F298);
PPC_FUNC_IMPL(__imp__sub_8316F298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,7872
	ctx.r11.s64 = ctx.r11.s64 + 7872;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F2B4"))) PPC_WEAK_FUNC(sub_8316F2B4);
PPC_FUNC_IMPL(__imp__sub_8316F2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F2B8"))) PPC_WEAK_FUNC(sub_8316F2B8);
PPC_FUNC_IMPL(__imp__sub_8316F2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,7888
	ctx.r10.s64 = ctx.r10.s64 + 7888;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F2D4"))) PPC_WEAK_FUNC(sub_8316F2D4);
PPC_FUNC_IMPL(__imp__sub_8316F2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F2D8"))) PPC_WEAK_FUNC(sub_8316F2D8);
PPC_FUNC_IMPL(__imp__sub_8316F2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,7904
	ctx.r11.s64 = ctx.r11.s64 + 7904;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F318"))) PPC_WEAK_FUNC(sub_8316F318);
PPC_FUNC_IMPL(__imp__sub_8316F318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,7968
	ctx.r11.s64 = ctx.r11.s64 + 7968;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F334"))) PPC_WEAK_FUNC(sub_8316F334);
PPC_FUNC_IMPL(__imp__sub_8316F334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F338"))) PPC_WEAK_FUNC(sub_8316F338);
PPC_FUNC_IMPL(__imp__sub_8316F338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,7984
	ctx.r10.s64 = ctx.r10.s64 + 7984;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F354"))) PPC_WEAK_FUNC(sub_8316F354);
PPC_FUNC_IMPL(__imp__sub_8316F354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F358"))) PPC_WEAK_FUNC(sub_8316F358);
PPC_FUNC_IMPL(__imp__sub_8316F358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,8000
	ctx.r11.s64 = ctx.r11.s64 + 8000;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F398"))) PPC_WEAK_FUNC(sub_8316F398);
PPC_FUNC_IMPL(__imp__sub_8316F398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,8064
	ctx.r11.s64 = ctx.r11.s64 + 8064;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F3B4"))) PPC_WEAK_FUNC(sub_8316F3B4);
PPC_FUNC_IMPL(__imp__sub_8316F3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F3B8"))) PPC_WEAK_FUNC(sub_8316F3B8);
PPC_FUNC_IMPL(__imp__sub_8316F3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,8080
	ctx.r10.s64 = ctx.r10.s64 + 8080;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F3D4"))) PPC_WEAK_FUNC(sub_8316F3D4);
PPC_FUNC_IMPL(__imp__sub_8316F3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F3D8"))) PPC_WEAK_FUNC(sub_8316F3D8);
PPC_FUNC_IMPL(__imp__sub_8316F3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,8096
	ctx.r11.s64 = ctx.r11.s64 + 8096;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F418"))) PPC_WEAK_FUNC(sub_8316F418);
PPC_FUNC_IMPL(__imp__sub_8316F418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,8160
	ctx.r11.s64 = ctx.r11.s64 + 8160;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F434"))) PPC_WEAK_FUNC(sub_8316F434);
PPC_FUNC_IMPL(__imp__sub_8316F434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F438"))) PPC_WEAK_FUNC(sub_8316F438);
PPC_FUNC_IMPL(__imp__sub_8316F438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,8176
	ctx.r10.s64 = ctx.r10.s64 + 8176;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F454"))) PPC_WEAK_FUNC(sub_8316F454);
PPC_FUNC_IMPL(__imp__sub_8316F454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F458"))) PPC_WEAK_FUNC(sub_8316F458);
PPC_FUNC_IMPL(__imp__sub_8316F458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,8192
	ctx.r11.s64 = ctx.r11.s64 + 8192;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F498"))) PPC_WEAK_FUNC(sub_8316F498);
PPC_FUNC_IMPL(__imp__sub_8316F498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,8256
	ctx.r11.s64 = ctx.r11.s64 + 8256;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F4B4"))) PPC_WEAK_FUNC(sub_8316F4B4);
PPC_FUNC_IMPL(__imp__sub_8316F4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F4B8"))) PPC_WEAK_FUNC(sub_8316F4B8);
PPC_FUNC_IMPL(__imp__sub_8316F4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,8272
	ctx.r10.s64 = ctx.r10.s64 + 8272;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F4D4"))) PPC_WEAK_FUNC(sub_8316F4D4);
PPC_FUNC_IMPL(__imp__sub_8316F4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F4D8"))) PPC_WEAK_FUNC(sub_8316F4D8);
PPC_FUNC_IMPL(__imp__sub_8316F4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,8288
	ctx.r11.s64 = ctx.r11.s64 + 8288;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F518"))) PPC_WEAK_FUNC(sub_8316F518);
PPC_FUNC_IMPL(__imp__sub_8316F518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,8368
	ctx.r11.s64 = ctx.r11.s64 + 8368;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F534"))) PPC_WEAK_FUNC(sub_8316F534);
PPC_FUNC_IMPL(__imp__sub_8316F534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F538"))) PPC_WEAK_FUNC(sub_8316F538);
PPC_FUNC_IMPL(__imp__sub_8316F538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,8384
	ctx.r10.s64 = ctx.r10.s64 + 8384;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F554"))) PPC_WEAK_FUNC(sub_8316F554);
PPC_FUNC_IMPL(__imp__sub_8316F554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F558"))) PPC_WEAK_FUNC(sub_8316F558);
PPC_FUNC_IMPL(__imp__sub_8316F558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,8400
	ctx.r11.s64 = ctx.r11.s64 + 8400;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F598"))) PPC_WEAK_FUNC(sub_8316F598);
PPC_FUNC_IMPL(__imp__sub_8316F598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,8624
	ctx.r11.s64 = ctx.r11.s64 + 8624;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F5B4"))) PPC_WEAK_FUNC(sub_8316F5B4);
PPC_FUNC_IMPL(__imp__sub_8316F5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F5B8"))) PPC_WEAK_FUNC(sub_8316F5B8);
PPC_FUNC_IMPL(__imp__sub_8316F5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,8640
	ctx.r10.s64 = ctx.r10.s64 + 8640;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F5D4"))) PPC_WEAK_FUNC(sub_8316F5D4);
PPC_FUNC_IMPL(__imp__sub_8316F5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F5D8"))) PPC_WEAK_FUNC(sub_8316F5D8);
PPC_FUNC_IMPL(__imp__sub_8316F5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,8656
	ctx.r11.s64 = ctx.r11.s64 + 8656;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F618"))) PPC_WEAK_FUNC(sub_8316F618);
PPC_FUNC_IMPL(__imp__sub_8316F618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,8720
	ctx.r11.s64 = ctx.r11.s64 + 8720;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F658"))) PPC_WEAK_FUNC(sub_8316F658);
PPC_FUNC_IMPL(__imp__sub_8316F658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,8784
	ctx.r11.s64 = ctx.r11.s64 + 8784;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F674"))) PPC_WEAK_FUNC(sub_8316F674);
PPC_FUNC_IMPL(__imp__sub_8316F674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F678"))) PPC_WEAK_FUNC(sub_8316F678);
PPC_FUNC_IMPL(__imp__sub_8316F678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,8800
	ctx.r10.s64 = ctx.r10.s64 + 8800;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F694"))) PPC_WEAK_FUNC(sub_8316F694);
PPC_FUNC_IMPL(__imp__sub_8316F694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F698"))) PPC_WEAK_FUNC(sub_8316F698);
PPC_FUNC_IMPL(__imp__sub_8316F698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,8848
	ctx.r11.s64 = ctx.r11.s64 + 8848;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F6B4"))) PPC_WEAK_FUNC(sub_8316F6B4);
PPC_FUNC_IMPL(__imp__sub_8316F6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F6B8"))) PPC_WEAK_FUNC(sub_8316F6B8);
PPC_FUNC_IMPL(__imp__sub_8316F6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,8864
	ctx.r10.s64 = ctx.r10.s64 + 8864;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F6D4"))) PPC_WEAK_FUNC(sub_8316F6D4);
PPC_FUNC_IMPL(__imp__sub_8316F6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F6D8"))) PPC_WEAK_FUNC(sub_8316F6D8);
PPC_FUNC_IMPL(__imp__sub_8316F6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,8880
	ctx.r11.s64 = ctx.r11.s64 + 8880;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F718"))) PPC_WEAK_FUNC(sub_8316F718);
PPC_FUNC_IMPL(__imp__sub_8316F718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82fa8d1c
	ctx.lr = 0x8316F72C;
	__savefpr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r31,r10,8944
	ctx.r31.s64 = ctx.r10.s64 + 8944;
	// lfs f31,5180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F754;
	sub_830AFA30(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F768;
	sub_830AFA30(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lfs f28,-24644(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24644);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,24440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24440);
	ctx.f29.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F78C;
	sub_830AFA30(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F7A0;
	sub_830AFA30(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lfs f27,-24648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24648);
	ctx.f27.f64 = double(temp.f32);
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F7BC;
	sub_830AFA30(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// lfs f30,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f30.f64 = double(temp.f32);
	// lfs f26,-24652(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24652);
	ctx.f26.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F7E0;
	sub_830AFA30(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lfs f25,-9868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	ctx.f25.f64 = double(temp.f32);
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F7FC;
	sub_830AFA30(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F810;
	sub_830AFA30(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F824;
	sub_830AFA30(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F838;
	sub_830AFA30(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F84C;
	sub_830AFA30(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F860;
	sub_830AFA30(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lfs f29,-20216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20216);
	ctx.f29.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lfs f27,-24656(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24656);
	ctx.f27.f64 = double(temp.f32);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F884;
	sub_830AFA30(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lfs f26,-24660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24660);
	ctx.f26.f64 = double(temp.f32);
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F8A0;
	sub_830AFA30(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// lfs f25,-24664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24664);
	ctx.f25.f64 = double(temp.f32);
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F8BC;
	sub_830AFA30(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F8D0;
	sub_830AFA30(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F8E4;
	sub_830AFA30(ctx, base);
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F8F8;
	sub_830AFA30(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F90C;
	sub_830AFA30(ctx, base);
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F920;
	sub_830AFA30(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82fa8d68
	ctx.lr = 0x8316F92C;
	__restfpr_25(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316F93C"))) PPC_WEAK_FUNC(sub_8316F93C);
PPC_FUNC_IMPL(__imp__sub_8316F93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316F940"))) PPC_WEAK_FUNC(sub_8316F940);
PPC_FUNC_IMPL(__imp__sub_8316F940) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r31,r10,9184
	ctx.r31.s64 = ctx.r10.s64 + 9184;
	// lfs f31,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F980;
	sub_830AFA30(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F994;
	sub_830AFA30(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lfs f30,11556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f30.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F9B0;
	sub_830AFA30(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F9C4;
	sub_830AFA30(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F9D8;
	sub_830AFA30(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// lfs f29,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f29.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316F9F4;
	sub_830AFA30(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316FA08;
	sub_830AFA30(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316FA1C;
	sub_830AFA30(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316FA30;
	sub_830AFA30(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316FA44;
	sub_830AFA30(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316FA58;
	sub_830AFA30(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316FA6C;
	sub_830AFA30(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316FA80;
	sub_830AFA30(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316FA94;
	sub_830AFA30(ctx, base);
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x830afa30
	ctx.lr = 0x8316FAA8;
	sub_830AFA30(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316FABC;
	sub_830AFA30(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316FAD0;
	sub_830AFA30(ctx, base);
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316FAE4;
	sub_830AFA30(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316FAF8;
	sub_830AFA30(ctx, base);
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x8316FB0C;
	sub_830AFA30(ctx, base);
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
}

__attribute__((alias("__imp__sub_8316FB2C"))) PPC_WEAK_FUNC(sub_8316FB2C);
PPC_FUNC_IMPL(__imp__sub_8316FB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FB30"))) PPC_WEAK_FUNC(sub_8316FB30);
PPC_FUNC_IMPL(__imp__sub_8316FB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,11556
	ctx.r11.s64 = ctx.r11.s64 + 11556;
	// addi r10,r10,10752
	ctx.r10.s64 = ctx.r10.s64 + 10752;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FB50"))) PPC_WEAK_FUNC(sub_8316FB50);
PPC_FUNC_IMPL(__imp__sub_8316FB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,10816
	ctx.r11.s64 = ctx.r11.s64 + 10816;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FB6C"))) PPC_WEAK_FUNC(sub_8316FB6C);
PPC_FUNC_IMPL(__imp__sub_8316FB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FB70"))) PPC_WEAK_FUNC(sub_8316FB70);
PPC_FUNC_IMPL(__imp__sub_8316FB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,10832
	ctx.r10.s64 = ctx.r10.s64 + 10832;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FB8C"))) PPC_WEAK_FUNC(sub_8316FB8C);
PPC_FUNC_IMPL(__imp__sub_8316FB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FB90"))) PPC_WEAK_FUNC(sub_8316FB90);
PPC_FUNC_IMPL(__imp__sub_8316FB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,10848
	ctx.r11.s64 = ctx.r11.s64 + 10848;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FBD0"))) PPC_WEAK_FUNC(sub_8316FBD0);
PPC_FUNC_IMPL(__imp__sub_8316FBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,10912
	ctx.r11.s64 = ctx.r11.s64 + 10912;
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
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FBEC"))) PPC_WEAK_FUNC(sub_8316FBEC);
PPC_FUNC_IMPL(__imp__sub_8316FBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FBF0"))) PPC_WEAK_FUNC(sub_8316FBF0);
PPC_FUNC_IMPL(__imp__sub_8316FBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,10928
	ctx.r10.s64 = ctx.r10.s64 + 10928;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FC0C"))) PPC_WEAK_FUNC(sub_8316FC0C);
PPC_FUNC_IMPL(__imp__sub_8316FC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FC10"))) PPC_WEAK_FUNC(sub_8316FC10);
PPC_FUNC_IMPL(__imp__sub_8316FC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,10944
	ctx.r11.s64 = ctx.r11.s64 + 10944;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FC50"))) PPC_WEAK_FUNC(sub_8316FC50);
PPC_FUNC_IMPL(__imp__sub_8316FC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30648
	ctx.r3.s64 = ctx.r11.s64 + -30648;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FC5C"))) PPC_WEAK_FUNC(sub_8316FC5C);
PPC_FUNC_IMPL(__imp__sub_8316FC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FC60"))) PPC_WEAK_FUNC(sub_8316FC60);
PPC_FUNC_IMPL(__imp__sub_8316FC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30624
	ctx.r3.s64 = ctx.r11.s64 + -30624;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FC6C"))) PPC_WEAK_FUNC(sub_8316FC6C);
PPC_FUNC_IMPL(__imp__sub_8316FC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FC70"))) PPC_WEAK_FUNC(sub_8316FC70);
PPC_FUNC_IMPL(__imp__sub_8316FC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30600
	ctx.r3.s64 = ctx.r11.s64 + -30600;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FC7C"))) PPC_WEAK_FUNC(sub_8316FC7C);
PPC_FUNC_IMPL(__imp__sub_8316FC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FC80"))) PPC_WEAK_FUNC(sub_8316FC80);
PPC_FUNC_IMPL(__imp__sub_8316FC80) {
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
	// addi r3,r11,11128
	ctx.r3.s64 = ctx.r11.s64 + 11128;
	// bl 0x82fa0990
	ctx.lr = 0x8316FC98;
	sub_82FA0990(ctx, base);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30576
	ctx.r3.s64 = ctx.r11.s64 + -30576;
	// bl 0x82fa2318
	ctx.lr = 0x8316FCA4;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FCB4"))) PPC_WEAK_FUNC(sub_8316FCB4);
PPC_FUNC_IMPL(__imp__sub_8316FCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FCB8"))) PPC_WEAK_FUNC(sub_8316FCB8);
PPC_FUNC_IMPL(__imp__sub_8316FCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30480
	ctx.r3.s64 = ctx.r11.s64 + -30480;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FCC4"))) PPC_WEAK_FUNC(sub_8316FCC4);
PPC_FUNC_IMPL(__imp__sub_8316FCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FCC8"))) PPC_WEAK_FUNC(sub_8316FCC8);
PPC_FUNC_IMPL(__imp__sub_8316FCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30560
	ctx.r3.s64 = ctx.r11.s64 + -30560;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FCD4"))) PPC_WEAK_FUNC(sub_8316FCD4);
PPC_FUNC_IMPL(__imp__sub_8316FCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FCD8"))) PPC_WEAK_FUNC(sub_8316FCD8);
PPC_FUNC_IMPL(__imp__sub_8316FCD8) {
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
	// addi r3,r11,11312
	ctx.r3.s64 = ctx.r11.s64 + 11312;
	// bl 0x82fa0990
	ctx.lr = 0x8316FCF0;
	sub_82FA0990(ctx, base);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30464
	ctx.r3.s64 = ctx.r11.s64 + -30464;
	// bl 0x82fa2318
	ctx.lr = 0x8316FCFC;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FD0C"))) PPC_WEAK_FUNC(sub_8316FD0C);
PPC_FUNC_IMPL(__imp__sub_8316FD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FD10"))) PPC_WEAK_FUNC(sub_8316FD10);
PPC_FUNC_IMPL(__imp__sub_8316FD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30448
	ctx.r3.s64 = ctx.r11.s64 + -30448;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FD1C"))) PPC_WEAK_FUNC(sub_8316FD1C);
PPC_FUNC_IMPL(__imp__sub_8316FD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FD20"))) PPC_WEAK_FUNC(sub_8316FD20);
PPC_FUNC_IMPL(__imp__sub_8316FD20) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f1,22080(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22080);
	// bl 0x82fa3ed0
	ctx.lr = 0x8316FD38;
	sub_82FA3ED0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// lfd f0,-808(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -808);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// stfd f0,14936(r9)
	PPC_STORE_U64(ctx.r9.u32 + 14936, ctx.f0.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FD5C"))) PPC_WEAK_FUNC(sub_8316FD5C);
PPC_FUNC_IMPL(__imp__sub_8316FD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FD60"))) PPC_WEAK_FUNC(sub_8316FD60);
PPC_FUNC_IMPL(__imp__sub_8316FD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30416
	ctx.r3.s64 = ctx.r11.s64 + -30416;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FD6C"))) PPC_WEAK_FUNC(sub_8316FD6C);
PPC_FUNC_IMPL(__imp__sub_8316FD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FD70"))) PPC_WEAK_FUNC(sub_8316FD70);
PPC_FUNC_IMPL(__imp__sub_8316FD70) {
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
	// addi r3,r11,15000
	ctx.r3.s64 = ctx.r11.s64 + 15000;
	// bl 0x82fd9948
	ctx.lr = 0x8316FD88;
	sub_82FD9948(ctx, base);
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// addi r3,r10,-30432
	ctx.r3.s64 = ctx.r10.s64 + -30432;
	// bl 0x82fa2318
	ctx.lr = 0x8316FD94;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FDA4"))) PPC_WEAK_FUNC(sub_8316FDA4);
PPC_FUNC_IMPL(__imp__sub_8316FDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FDA8"))) PPC_WEAK_FUNC(sub_8316FDA8);
PPC_FUNC_IMPL(__imp__sub_8316FDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30408
	ctx.r3.s64 = ctx.r11.s64 + -30408;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FDB4"))) PPC_WEAK_FUNC(sub_8316FDB4);
PPC_FUNC_IMPL(__imp__sub_8316FDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FDB8"))) PPC_WEAK_FUNC(sub_8316FDB8);
PPC_FUNC_IMPL(__imp__sub_8316FDB8) {
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
	// addi r3,r11,15276
	ctx.r3.s64 = ctx.r11.s64 + 15276;
	// bl 0x831791c4
	ctx.lr = 0x8316FDD0;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// addi r3,r10,-30400
	ctx.r3.s64 = ctx.r10.s64 + -30400;
	// bl 0x82fa2318
	ctx.lr = 0x8316FDDC;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FDEC"))) PPC_WEAK_FUNC(sub_8316FDEC);
PPC_FUNC_IMPL(__imp__sub_8316FDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FDF0"))) PPC_WEAK_FUNC(sub_8316FDF0);
PPC_FUNC_IMPL(__imp__sub_8316FDF0) {
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
	// addi r3,r11,15304
	ctx.r3.s64 = ctx.r11.s64 + 15304;
	// bl 0x83047e78
	ctx.lr = 0x8316FE08;
	sub_83047E78(ctx, base);
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// addi r3,r10,-30392
	ctx.r3.s64 = ctx.r10.s64 + -30392;
	// bl 0x82fa2318
	ctx.lr = 0x8316FE14;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FE24"))) PPC_WEAK_FUNC(sub_8316FE24);
PPC_FUNC_IMPL(__imp__sub_8316FE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FE28"))) PPC_WEAK_FUNC(sub_8316FE28);
PPC_FUNC_IMPL(__imp__sub_8316FE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30360
	ctx.r3.s64 = ctx.r11.s64 + -30360;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FE34"))) PPC_WEAK_FUNC(sub_8316FE34);
PPC_FUNC_IMPL(__imp__sub_8316FE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FE38"))) PPC_WEAK_FUNC(sub_8316FE38);
PPC_FUNC_IMPL(__imp__sub_8316FE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30328
	ctx.r3.s64 = ctx.r11.s64 + -30328;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FE44"))) PPC_WEAK_FUNC(sub_8316FE44);
PPC_FUNC_IMPL(__imp__sub_8316FE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FE48"))) PPC_WEAK_FUNC(sub_8316FE48);
PPC_FUNC_IMPL(__imp__sub_8316FE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30352
	ctx.r3.s64 = ctx.r11.s64 + -30352;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FE54"))) PPC_WEAK_FUNC(sub_8316FE54);
PPC_FUNC_IMPL(__imp__sub_8316FE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FE58"))) PPC_WEAK_FUNC(sub_8316FE58);
PPC_FUNC_IMPL(__imp__sub_8316FE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30344
	ctx.r3.s64 = ctx.r11.s64 + -30344;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FE64"))) PPC_WEAK_FUNC(sub_8316FE64);
PPC_FUNC_IMPL(__imp__sub_8316FE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FE68"))) PPC_WEAK_FUNC(sub_8316FE68);
PPC_FUNC_IMPL(__imp__sub_8316FE68) {
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
	// addi r3,r11,15468
	ctx.r3.s64 = ctx.r11.s64 + 15468;
	// bl 0x831791c4
	ctx.lr = 0x8316FE80;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// addi r3,r10,-30368
	ctx.r3.s64 = ctx.r10.s64 + -30368;
	// bl 0x82fa2318
	ctx.lr = 0x8316FE8C;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FE9C"))) PPC_WEAK_FUNC(sub_8316FE9C);
PPC_FUNC_IMPL(__imp__sub_8316FE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FEA0"))) PPC_WEAK_FUNC(sub_8316FEA0);
PPC_FUNC_IMPL(__imp__sub_8316FEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,24
	ctx.r10.s64 = 24;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,15512
	ctx.r11.s64 = ctx.r11.s64 + 15512;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8316FEB8:
	// stwu r10,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8316feb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8316FEB8;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30336
	ctx.r3.s64 = ctx.r11.s64 + -30336;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FECC"))) PPC_WEAK_FUNC(sub_8316FECC);
PPC_FUNC_IMPL(__imp__sub_8316FECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FED0"))) PPC_WEAK_FUNC(sub_8316FED0);
PPC_FUNC_IMPL(__imp__sub_8316FED0) {
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
	// addi r3,r11,15800
	ctx.r3.s64 = ctx.r11.s64 + 15800;
	// bl 0x831791c4
	ctx.lr = 0x8316FEE8;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// addi r3,r10,-30320
	ctx.r3.s64 = ctx.r10.s64 + -30320;
	// bl 0x82fa2318
	ctx.lr = 0x8316FEF4;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FF04"))) PPC_WEAK_FUNC(sub_8316FF04);
PPC_FUNC_IMPL(__imp__sub_8316FF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FF08"))) PPC_WEAK_FUNC(sub_8316FF08);
PPC_FUNC_IMPL(__imp__sub_8316FF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30304
	ctx.r3.s64 = ctx.r11.s64 + -30304;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FF14"))) PPC_WEAK_FUNC(sub_8316FF14);
PPC_FUNC_IMPL(__imp__sub_8316FF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FF18"))) PPC_WEAK_FUNC(sub_8316FF18);
PPC_FUNC_IMPL(__imp__sub_8316FF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30296
	ctx.r3.s64 = ctx.r11.s64 + -30296;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FF24"))) PPC_WEAK_FUNC(sub_8316FF24);
PPC_FUNC_IMPL(__imp__sub_8316FF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FF28"))) PPC_WEAK_FUNC(sub_8316FF28);
PPC_FUNC_IMPL(__imp__sub_8316FF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30288
	ctx.r3.s64 = ctx.r11.s64 + -30288;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FF34"))) PPC_WEAK_FUNC(sub_8316FF34);
PPC_FUNC_IMPL(__imp__sub_8316FF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FF38"))) PPC_WEAK_FUNC(sub_8316FF38);
PPC_FUNC_IMPL(__imp__sub_8316FF38) {
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
	// addi r3,r11,15840
	ctx.r3.s64 = ctx.r11.s64 + 15840;
	// bl 0x831791c4
	ctx.lr = 0x8316FF50;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// addi r3,r10,-30312
	ctx.r3.s64 = ctx.r10.s64 + -30312;
	// bl 0x82fa2318
	ctx.lr = 0x8316FF5C;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FF6C"))) PPC_WEAK_FUNC(sub_8316FF6C);
PPC_FUNC_IMPL(__imp__sub_8316FF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FF70"))) PPC_WEAK_FUNC(sub_8316FF70);
PPC_FUNC_IMPL(__imp__sub_8316FF70) {
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
	// addi r3,r11,15892
	ctx.r3.s64 = ctx.r11.s64 + 15892;
	// bl 0x831791c4
	ctx.lr = 0x8316FF88;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// addi r3,r10,-30280
	ctx.r3.s64 = ctx.r10.s64 + -30280;
	// bl 0x82fa2318
	ctx.lr = 0x8316FF94;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316FFA4"))) PPC_WEAK_FUNC(sub_8316FFA4);
PPC_FUNC_IMPL(__imp__sub_8316FFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FFA8"))) PPC_WEAK_FUNC(sub_8316FFA8);
PPC_FUNC_IMPL(__imp__sub_8316FFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30272
	ctx.r3.s64 = ctx.r11.s64 + -30272;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FFB4"))) PPC_WEAK_FUNC(sub_8316FFB4);
PPC_FUNC_IMPL(__imp__sub_8316FFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FFB8"))) PPC_WEAK_FUNC(sub_8316FFB8);
PPC_FUNC_IMPL(__imp__sub_8316FFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30248
	ctx.r3.s64 = ctx.r11.s64 + -30248;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FFC4"))) PPC_WEAK_FUNC(sub_8316FFC4);
PPC_FUNC_IMPL(__imp__sub_8316FFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FFC8"))) PPC_WEAK_FUNC(sub_8316FFC8);
PPC_FUNC_IMPL(__imp__sub_8316FFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30224
	ctx.r3.s64 = ctx.r11.s64 + -30224;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FFD4"))) PPC_WEAK_FUNC(sub_8316FFD4);
PPC_FUNC_IMPL(__imp__sub_8316FFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FFD8"))) PPC_WEAK_FUNC(sub_8316FFD8);
PPC_FUNC_IMPL(__imp__sub_8316FFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30216
	ctx.r3.s64 = ctx.r11.s64 + -30216;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FFE4"))) PPC_WEAK_FUNC(sub_8316FFE4);
PPC_FUNC_IMPL(__imp__sub_8316FFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FFE8"))) PPC_WEAK_FUNC(sub_8316FFE8);
PPC_FUNC_IMPL(__imp__sub_8316FFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30208
	ctx.r3.s64 = ctx.r11.s64 + -30208;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8316FFF4"))) PPC_WEAK_FUNC(sub_8316FFF4);
PPC_FUNC_IMPL(__imp__sub_8316FFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8316FFF8"))) PPC_WEAK_FUNC(sub_8316FFF8);
PPC_FUNC_IMPL(__imp__sub_8316FFF8) {
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
	// addi r3,r11,18184
	ctx.r3.s64 = ctx.r11.s64 + 18184;
	// bl 0x831791c4
	ctx.lr = 0x83170010;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// addi r3,r10,-30200
	ctx.r3.s64 = ctx.r10.s64 + -30200;
	// bl 0x82fa2318
	ctx.lr = 0x8317001C;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317002C"))) PPC_WEAK_FUNC(sub_8317002C);
PPC_FUNC_IMPL(__imp__sub_8317002C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170030"))) PPC_WEAK_FUNC(sub_83170030);
PPC_FUNC_IMPL(__imp__sub_83170030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30192
	ctx.r3.s64 = ctx.r11.s64 + -30192;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317003C"))) PPC_WEAK_FUNC(sub_8317003C);
PPC_FUNC_IMPL(__imp__sub_8317003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170040"))) PPC_WEAK_FUNC(sub_83170040);
PPC_FUNC_IMPL(__imp__sub_83170040) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-4760
	ctx.r4.s64 = ctx.r11.s64 + -4760;
	// addi r3,r10,-10736
	ctx.r3.s64 = ctx.r10.s64 + -10736;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x82240328
	ctx.lr = 0x83170064;
	sub_82240328(ctx, base);
	// lis r9,-31976
	ctx.r9.s64 = -2095579136;
	// addi r3,r9,-30160
	ctx.r3.s64 = ctx.r9.s64 + -30160;
	// bl 0x82fa2318
	ctx.lr = 0x83170070;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170080"))) PPC_WEAK_FUNC(sub_83170080);
PPC_FUNC_IMPL(__imp__sub_83170080) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-4736
	ctx.r4.s64 = ctx.r11.s64 + -4736;
	// addi r3,r10,-10708
	ctx.r3.s64 = ctx.r10.s64 + -10708;
	// li r5,22
	ctx.r5.s64 = 22;
	// bl 0x82240328
	ctx.lr = 0x831700A4;
	sub_82240328(ctx, base);
	// lis r9,-31976
	ctx.r9.s64 = -2095579136;
	// addi r3,r9,-30072
	ctx.r3.s64 = ctx.r9.s64 + -30072;
	// bl 0x82fa2318
	ctx.lr = 0x831700B0;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831700C0"))) PPC_WEAK_FUNC(sub_831700C0);
PPC_FUNC_IMPL(__imp__sub_831700C0) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-4456
	ctx.r4.s64 = ctx.r11.s64 + -4456;
	// addi r3,r10,-10668
	ctx.r3.s64 = ctx.r10.s64 + -10668;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x82240328
	ctx.lr = 0x831700E4;
	sub_82240328(ctx, base);
	// lis r9,-31976
	ctx.r9.s64 = -2095579136;
	// addi r3,r9,-29984
	ctx.r3.s64 = ctx.r9.s64 + -29984;
	// bl 0x82fa2318
	ctx.lr = 0x831700F0;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170100"))) PPC_WEAK_FUNC(sub_83170100);
PPC_FUNC_IMPL(__imp__sub_83170100) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-4432
	ctx.r4.s64 = ctx.r11.s64 + -4432;
	// addi r3,r10,-10640
	ctx.r3.s64 = ctx.r10.s64 + -10640;
	// li r5,22
	ctx.r5.s64 = 22;
	// bl 0x82240328
	ctx.lr = 0x83170124;
	sub_82240328(ctx, base);
	// lis r9,-31976
	ctx.r9.s64 = -2095579136;
	// addi r3,r9,-29896
	ctx.r3.s64 = ctx.r9.s64 + -29896;
	// bl 0x82fa2318
	ctx.lr = 0x83170130;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170140"))) PPC_WEAK_FUNC(sub_83170140);
PPC_FUNC_IMPL(__imp__sub_83170140) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-4200
	ctx.r4.s64 = ctx.r11.s64 + -4200;
	// addi r3,r10,-10600
	ctx.r3.s64 = ctx.r10.s64 + -10600;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x82240328
	ctx.lr = 0x83170164;
	sub_82240328(ctx, base);
	// lis r9,-31976
	ctx.r9.s64 = -2095579136;
	// addi r3,r9,-29808
	ctx.r3.s64 = ctx.r9.s64 + -29808;
	// bl 0x82fa2318
	ctx.lr = 0x83170170;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170180"))) PPC_WEAK_FUNC(sub_83170180);
PPC_FUNC_IMPL(__imp__sub_83170180) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-4176
	ctx.r4.s64 = ctx.r11.s64 + -4176;
	// addi r3,r10,-10572
	ctx.r3.s64 = ctx.r10.s64 + -10572;
	// li r5,22
	ctx.r5.s64 = 22;
	// bl 0x82240328
	ctx.lr = 0x831701A4;
	sub_82240328(ctx, base);
	// lis r9,-31976
	ctx.r9.s64 = -2095579136;
	// addi r3,r9,-29720
	ctx.r3.s64 = ctx.r9.s64 + -29720;
	// bl 0x82fa2318
	ctx.lr = 0x831701B0;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831701C0"))) PPC_WEAK_FUNC(sub_831701C0);
PPC_FUNC_IMPL(__imp__sub_831701C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// lwz r9,18652(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18652);
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r10,r11,-3636
	ctx.r10.s64 = ctx.r11.s64 + -3636;
	// ori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 | 1;
	// stw r11,18652(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18652, ctx.r11.u32);
	// stw r10,18648(r7)
	PPC_STORE_U32(ctx.r7.u32 + 18648, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831701EC"))) PPC_WEAK_FUNC(sub_831701EC);
PPC_FUNC_IMPL(__imp__sub_831701EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831701F0"))) PPC_WEAK_FUNC(sub_831701F0);
PPC_FUNC_IMPL(__imp__sub_831701F0) {
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
	// bl 0x8309ae20
	ctx.lr = 0x83170200;
	sub_8309AE20(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// stw r3,18660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170218"))) PPC_WEAK_FUNC(sub_83170218);
PPC_FUNC_IMPL(__imp__sub_83170218) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lfs f3,5180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lfs f2,24436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24436);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82f94430
	ctx.lr = 0x83170244;
	sub_82F94430(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,19744
	ctx.r11.s64 = ctx.r11.s64 + 19744;
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170260"))) PPC_WEAK_FUNC(sub_83170260);
PPC_FUNC_IMPL(__imp__sub_83170260) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f3,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lfs f1,5180(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5180);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f94430
	ctx.lr = 0x8317028C;
	sub_82F94430(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,19760
	ctx.r11.s64 = ctx.r11.s64 + 19760;
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831702A8"))) PPC_WEAK_FUNC(sub_831702A8);
PPC_FUNC_IMPL(__imp__sub_831702A8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// addi r7,r8,-10160
	ctx.r7.s64 = ctx.r8.s64 + -10160;
	// lwz r11,-21088(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21088);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r7,-21088(r9)
	PPC_STORE_U32(ctx.r9.u32 + -21088, ctx.r7.u32);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831702C8"))) PPC_WEAK_FUNC(sub_831702C8);
PPC_FUNC_IMPL(__imp__sub_831702C8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// addi r7,r8,-10144
	ctx.r7.s64 = ctx.r8.s64 + -10144;
	// lwz r11,-21088(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21088);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r7,-21088(r9)
	PPC_STORE_U32(ctx.r9.u32 + -21088, ctx.r7.u32);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831702E8"))) PPC_WEAK_FUNC(sub_831702E8);
PPC_FUNC_IMPL(__imp__sub_831702E8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// addi r7,r8,-10128
	ctx.r7.s64 = ctx.r8.s64 + -10128;
	// lwz r11,-21088(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21088);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r7,-21088(r9)
	PPC_STORE_U32(ctx.r9.u32 + -21088, ctx.r7.u32);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170308"))) PPC_WEAK_FUNC(sub_83170308);
PPC_FUNC_IMPL(__imp__sub_83170308) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// addi r7,r8,-10112
	ctx.r7.s64 = ctx.r8.s64 + -10112;
	// lwz r11,-21088(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21088);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r7,-21088(r9)
	PPC_STORE_U32(ctx.r9.u32 + -21088, ctx.r7.u32);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170328"))) PPC_WEAK_FUNC(sub_83170328);
PPC_FUNC_IMPL(__imp__sub_83170328) {
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
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,31488
	ctx.r7.s64 = ctx.r10.s64 + 31488;
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,13904
	ctx.r4.s64 = ctx.r9.s64 + 13904;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,19808
	ctx.r3.s64 = ctx.r8.s64 + 19808;
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
	ctx.lr = 0x83170388;
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

__attribute__((alias("__imp__sub_83170398"))) PPC_WEAK_FUNC(sub_83170398);
PPC_FUNC_IMPL(__imp__sub_83170398) {
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
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,31656
	ctx.r7.s64 = ctx.r10.s64 + 31656;
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,13904
	ctx.r4.s64 = ctx.r9.s64 + 13904;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,19856
	ctx.r3.s64 = ctx.r8.s64 + 19856;
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
	ctx.lr = 0x831703F8;
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

__attribute__((alias("__imp__sub_83170408"))) PPC_WEAK_FUNC(sub_83170408);
PPC_FUNC_IMPL(__imp__sub_83170408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r9,r10,-10080
	ctx.r9.s64 = ctx.r10.s64 + -10080;
	// lwz r11,-10096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10096);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83170424"))) PPC_WEAK_FUNC(sub_83170424);
PPC_FUNC_IMPL(__imp__sub_83170424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170428"))) PPC_WEAK_FUNC(sub_83170428);
PPC_FUNC_IMPL(__imp__sub_83170428) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-10080
	ctx.r6.s64 = ctx.r10.s64 + -10080;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,15184
	ctx.r4.s64 = ctx.r8.s64 + 15184;
	// addi r3,r7,19904
	ctx.r3.s64 = ctx.r7.s64 + 19904;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,32192
	ctx.r9.s64 = ctx.r9.s64 + 32192;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8317048C;
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

__attribute__((alias("__imp__sub_8317049C"))) PPC_WEAK_FUNC(sub_8317049C);
PPC_FUNC_IMPL(__imp__sub_8317049C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831704A0"))) PPC_WEAK_FUNC(sub_831704A0);
PPC_FUNC_IMPL(__imp__sub_831704A0) {
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
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,32252
	ctx.r7.s64 = ctx.r10.s64 + 32252;
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,13996
	ctx.r4.s64 = ctx.r9.s64 + 13996;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,19952
	ctx.r3.s64 = ctx.r8.s64 + 19952;
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
	ctx.lr = 0x83170500;
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

__attribute__((alias("__imp__sub_83170510"))) PPC_WEAK_FUNC(sub_83170510);
PPC_FUNC_IMPL(__imp__sub_83170510) {
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
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,32300
	ctx.r7.s64 = ctx.r10.s64 + 32300;
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,14012
	ctx.r4.s64 = ctx.r9.s64 + 14012;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,20000
	ctx.r3.s64 = ctx.r8.s64 + 20000;
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
	ctx.lr = 0x83170570;
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

