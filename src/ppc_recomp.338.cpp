#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8315E3C0"))) PPC_WEAK_FUNC(sub_8315E3C0);
PPC_FUNC_IMPL(__imp__sub_8315E3C0) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r3,r11,14712
	ctx.r3.s64 = ctx.r11.s64 + 14712;
	// bl 0x8283b590
	ctx.lr = 0x8315E3D8;
	sub_8283B590(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,28016
	ctx.r3.s64 = ctx.r11.s64 + 28016;
	// bl 0x82fa2318
	ctx.lr = 0x8315E3E4;
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

__attribute__((alias("__imp__sub_8315E3F4"))) PPC_WEAK_FUNC(sub_8315E3F4);
PPC_FUNC_IMPL(__imp__sub_8315E3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E3F8"))) PPC_WEAK_FUNC(sub_8315E3F8);
PPC_FUNC_IMPL(__imp__sub_8315E3F8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31204
	ctx.r4.s64 = ctx.r11.s64 + 31204;
	// addi r3,r10,-24012
	ctx.r3.s64 = ctx.r10.s64 + -24012;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82240328
	ctx.lr = 0x8315E41C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,28232
	ctx.r3.s64 = ctx.r9.s64 + 28232;
	// bl 0x82fa2318
	ctx.lr = 0x8315E428;
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

__attribute__((alias("__imp__sub_8315E438"))) PPC_WEAK_FUNC(sub_8315E438);
PPC_FUNC_IMPL(__imp__sub_8315E438) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31216
	ctx.r4.s64 = ctx.r11.s64 + 31216;
	// addi r3,r10,-23984
	ctx.r3.s64 = ctx.r10.s64 + -23984;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82240328
	ctx.lr = 0x8315E45C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,28320
	ctx.r3.s64 = ctx.r9.s64 + 28320;
	// bl 0x82fa2318
	ctx.lr = 0x8315E468;
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

__attribute__((alias("__imp__sub_8315E478"))) PPC_WEAK_FUNC(sub_8315E478);
PPC_FUNC_IMPL(__imp__sub_8315E478) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31228
	ctx.r4.s64 = ctx.r11.s64 + 31228;
	// addi r3,r10,-23956
	ctx.r3.s64 = ctx.r10.s64 + -23956;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x82240328
	ctx.lr = 0x8315E49C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,28408
	ctx.r3.s64 = ctx.r9.s64 + 28408;
	// bl 0x82fa2318
	ctx.lr = 0x8315E4A8;
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

__attribute__((alias("__imp__sub_8315E4B8"))) PPC_WEAK_FUNC(sub_8315E4B8);
PPC_FUNC_IMPL(__imp__sub_8315E4B8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31236
	ctx.r4.s64 = ctx.r11.s64 + 31236;
	// addi r3,r10,-23928
	ctx.r3.s64 = ctx.r10.s64 + -23928;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82240328
	ctx.lr = 0x8315E4DC;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,28496
	ctx.r3.s64 = ctx.r9.s64 + 28496;
	// bl 0x82fa2318
	ctx.lr = 0x8315E4E8;
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

__attribute__((alias("__imp__sub_8315E4F8"))) PPC_WEAK_FUNC(sub_8315E4F8);
PPC_FUNC_IMPL(__imp__sub_8315E4F8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31248
	ctx.r4.s64 = ctx.r11.s64 + 31248;
	// addi r3,r10,-23900
	ctx.r3.s64 = ctx.r10.s64 + -23900;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x82240328
	ctx.lr = 0x8315E51C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,28584
	ctx.r3.s64 = ctx.r9.s64 + 28584;
	// bl 0x82fa2318
	ctx.lr = 0x8315E528;
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

__attribute__((alias("__imp__sub_8315E538"))) PPC_WEAK_FUNC(sub_8315E538);
PPC_FUNC_IMPL(__imp__sub_8315E538) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31264
	ctx.r4.s64 = ctx.r11.s64 + 31264;
	// addi r3,r10,-23872
	ctx.r3.s64 = ctx.r10.s64 + -23872;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x82240328
	ctx.lr = 0x8315E55C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,28672
	ctx.r3.s64 = ctx.r9.s64 + 28672;
	// bl 0x82fa2318
	ctx.lr = 0x8315E568;
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

__attribute__((alias("__imp__sub_8315E578"))) PPC_WEAK_FUNC(sub_8315E578);
PPC_FUNC_IMPL(__imp__sub_8315E578) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31276
	ctx.r4.s64 = ctx.r11.s64 + 31276;
	// addi r3,r10,-23844
	ctx.r3.s64 = ctx.r10.s64 + -23844;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x82240328
	ctx.lr = 0x8315E59C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,28760
	ctx.r3.s64 = ctx.r9.s64 + 28760;
	// bl 0x82fa2318
	ctx.lr = 0x8315E5A8;
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

__attribute__((alias("__imp__sub_8315E5B8"))) PPC_WEAK_FUNC(sub_8315E5B8);
PPC_FUNC_IMPL(__imp__sub_8315E5B8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31292
	ctx.r4.s64 = ctx.r11.s64 + 31292;
	// addi r3,r10,-23816
	ctx.r3.s64 = ctx.r10.s64 + -23816;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x82240328
	ctx.lr = 0x8315E5DC;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,28848
	ctx.r3.s64 = ctx.r9.s64 + 28848;
	// bl 0x82fa2318
	ctx.lr = 0x8315E5E8;
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

__attribute__((alias("__imp__sub_8315E5F8"))) PPC_WEAK_FUNC(sub_8315E5F8);
PPC_FUNC_IMPL(__imp__sub_8315E5F8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31304
	ctx.r4.s64 = ctx.r11.s64 + 31304;
	// addi r3,r10,-23788
	ctx.r3.s64 = ctx.r10.s64 + -23788;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x82240328
	ctx.lr = 0x8315E61C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,28936
	ctx.r3.s64 = ctx.r9.s64 + 28936;
	// bl 0x82fa2318
	ctx.lr = 0x8315E628;
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

__attribute__((alias("__imp__sub_8315E638"))) PPC_WEAK_FUNC(sub_8315E638);
PPC_FUNC_IMPL(__imp__sub_8315E638) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31316
	ctx.r4.s64 = ctx.r11.s64 + 31316;
	// addi r3,r10,-23760
	ctx.r3.s64 = ctx.r10.s64 + -23760;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x82240328
	ctx.lr = 0x8315E65C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,29024
	ctx.r3.s64 = ctx.r9.s64 + 29024;
	// bl 0x82fa2318
	ctx.lr = 0x8315E668;
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

__attribute__((alias("__imp__sub_8315E678"))) PPC_WEAK_FUNC(sub_8315E678);
PPC_FUNC_IMPL(__imp__sub_8315E678) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31324
	ctx.r4.s64 = ctx.r11.s64 + 31324;
	// addi r3,r10,-23732
	ctx.r3.s64 = ctx.r10.s64 + -23732;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x82240328
	ctx.lr = 0x8315E69C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,29112
	ctx.r3.s64 = ctx.r9.s64 + 29112;
	// bl 0x82fa2318
	ctx.lr = 0x8315E6A8;
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

__attribute__((alias("__imp__sub_8315E6B8"))) PPC_WEAK_FUNC(sub_8315E6B8);
PPC_FUNC_IMPL(__imp__sub_8315E6B8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31336
	ctx.r4.s64 = ctx.r11.s64 + 31336;
	// addi r3,r10,-23704
	ctx.r3.s64 = ctx.r10.s64 + -23704;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x82240328
	ctx.lr = 0x8315E6DC;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,29200
	ctx.r3.s64 = ctx.r9.s64 + 29200;
	// bl 0x82fa2318
	ctx.lr = 0x8315E6E8;
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

__attribute__((alias("__imp__sub_8315E6F8"))) PPC_WEAK_FUNC(sub_8315E6F8);
PPC_FUNC_IMPL(__imp__sub_8315E6F8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31352
	ctx.r4.s64 = ctx.r11.s64 + 31352;
	// addi r3,r10,-23676
	ctx.r3.s64 = ctx.r10.s64 + -23676;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82240328
	ctx.lr = 0x8315E71C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,29288
	ctx.r3.s64 = ctx.r9.s64 + 29288;
	// bl 0x82fa2318
	ctx.lr = 0x8315E728;
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

__attribute__((alias("__imp__sub_8315E738"))) PPC_WEAK_FUNC(sub_8315E738);
PPC_FUNC_IMPL(__imp__sub_8315E738) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31368
	ctx.r4.s64 = ctx.r11.s64 + 31368;
	// addi r3,r10,-23648
	ctx.r3.s64 = ctx.r10.s64 + -23648;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x82240328
	ctx.lr = 0x8315E75C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,29376
	ctx.r3.s64 = ctx.r9.s64 + 29376;
	// bl 0x82fa2318
	ctx.lr = 0x8315E768;
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

__attribute__((alias("__imp__sub_8315E778"))) PPC_WEAK_FUNC(sub_8315E778);
PPC_FUNC_IMPL(__imp__sub_8315E778) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31380
	ctx.r4.s64 = ctx.r11.s64 + 31380;
	// addi r3,r10,-23620
	ctx.r3.s64 = ctx.r10.s64 + -23620;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x82240328
	ctx.lr = 0x8315E79C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,29464
	ctx.r3.s64 = ctx.r9.s64 + 29464;
	// bl 0x82fa2318
	ctx.lr = 0x8315E7A8;
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

__attribute__((alias("__imp__sub_8315E7B8"))) PPC_WEAK_FUNC(sub_8315E7B8);
PPC_FUNC_IMPL(__imp__sub_8315E7B8) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,17480
	ctx.r4.s64 = ctx.r11.s64 + 17480;
	// addi r3,r10,-23580
	ctx.r3.s64 = ctx.r10.s64 + -23580;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// bl 0x8291fc28
	ctx.lr = 0x8315E7DC;
	sub_8291FC28(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,29632
	ctx.r3.s64 = ctx.r9.s64 + 29632;
	// bl 0x82fa2318
	ctx.lr = 0x8315E7E8;
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

__attribute__((alias("__imp__sub_8315E7F8"))) PPC_WEAK_FUNC(sub_8315E7F8);
PPC_FUNC_IMPL(__imp__sub_8315E7F8) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,15432
	ctx.r4.s64 = ctx.r11.s64 + 15432;
	// addi r3,r10,-23540
	ctx.r3.s64 = ctx.r10.s64 + -23540;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// bl 0x8291fc28
	ctx.lr = 0x8315E81C;
	sub_8291FC28(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,29720
	ctx.r3.s64 = ctx.r9.s64 + 29720;
	// bl 0x82fa2318
	ctx.lr = 0x8315E828;
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

__attribute__((alias("__imp__sub_8315E838"))) PPC_WEAK_FUNC(sub_8315E838);
PPC_FUNC_IMPL(__imp__sub_8315E838) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,19584
	ctx.r3.s64 = ctx.r11.s64 + 19584;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828f8f20
	ctx.lr = 0x8315E858;
	sub_828F8F20(ctx, base);
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r3,r10,29808
	ctx.r3.s64 = ctx.r10.s64 + 29808;
	// bl 0x82fa2318
	ctx.lr = 0x8315E864;
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

__attribute__((alias("__imp__sub_8315E874"))) PPC_WEAK_FUNC(sub_8315E874);
PPC_FUNC_IMPL(__imp__sub_8315E874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E878"))) PPC_WEAK_FUNC(sub_8315E878);
PPC_FUNC_IMPL(__imp__sub_8315E878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,29952
	ctx.r3.s64 = ctx.r11.s64 + 29952;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E884"))) PPC_WEAK_FUNC(sub_8315E884);
PPC_FUNC_IMPL(__imp__sub_8315E884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E888"))) PPC_WEAK_FUNC(sub_8315E888);
PPC_FUNC_IMPL(__imp__sub_8315E888) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31204
	ctx.r4.s64 = ctx.r11.s64 + 31204;
	// addi r3,r10,-23084
	ctx.r3.s64 = ctx.r10.s64 + -23084;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82240328
	ctx.lr = 0x8315E8AC;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,30400
	ctx.r3.s64 = ctx.r9.s64 + 30400;
	// bl 0x82fa2318
	ctx.lr = 0x8315E8B8;
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

__attribute__((alias("__imp__sub_8315E8C8"))) PPC_WEAK_FUNC(sub_8315E8C8);
PPC_FUNC_IMPL(__imp__sub_8315E8C8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31216
	ctx.r4.s64 = ctx.r11.s64 + 31216;
	// addi r3,r10,-23056
	ctx.r3.s64 = ctx.r10.s64 + -23056;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82240328
	ctx.lr = 0x8315E8EC;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,30488
	ctx.r3.s64 = ctx.r9.s64 + 30488;
	// bl 0x82fa2318
	ctx.lr = 0x8315E8F8;
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

__attribute__((alias("__imp__sub_8315E908"))) PPC_WEAK_FUNC(sub_8315E908);
PPC_FUNC_IMPL(__imp__sub_8315E908) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31228
	ctx.r4.s64 = ctx.r11.s64 + 31228;
	// addi r3,r10,-23028
	ctx.r3.s64 = ctx.r10.s64 + -23028;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x82240328
	ctx.lr = 0x8315E92C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,30576
	ctx.r3.s64 = ctx.r9.s64 + 30576;
	// bl 0x82fa2318
	ctx.lr = 0x8315E938;
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

__attribute__((alias("__imp__sub_8315E948"))) PPC_WEAK_FUNC(sub_8315E948);
PPC_FUNC_IMPL(__imp__sub_8315E948) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31236
	ctx.r4.s64 = ctx.r11.s64 + 31236;
	// addi r3,r10,-23000
	ctx.r3.s64 = ctx.r10.s64 + -23000;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82240328
	ctx.lr = 0x8315E96C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,30664
	ctx.r3.s64 = ctx.r9.s64 + 30664;
	// bl 0x82fa2318
	ctx.lr = 0x8315E978;
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

__attribute__((alias("__imp__sub_8315E988"))) PPC_WEAK_FUNC(sub_8315E988);
PPC_FUNC_IMPL(__imp__sub_8315E988) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31248
	ctx.r4.s64 = ctx.r11.s64 + 31248;
	// addi r3,r10,-22972
	ctx.r3.s64 = ctx.r10.s64 + -22972;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x82240328
	ctx.lr = 0x8315E9AC;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,30752
	ctx.r3.s64 = ctx.r9.s64 + 30752;
	// bl 0x82fa2318
	ctx.lr = 0x8315E9B8;
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

__attribute__((alias("__imp__sub_8315E9C8"))) PPC_WEAK_FUNC(sub_8315E9C8);
PPC_FUNC_IMPL(__imp__sub_8315E9C8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31264
	ctx.r4.s64 = ctx.r11.s64 + 31264;
	// addi r3,r10,-22944
	ctx.r3.s64 = ctx.r10.s64 + -22944;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x82240328
	ctx.lr = 0x8315E9EC;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,30840
	ctx.r3.s64 = ctx.r9.s64 + 30840;
	// bl 0x82fa2318
	ctx.lr = 0x8315E9F8;
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

__attribute__((alias("__imp__sub_8315EA08"))) PPC_WEAK_FUNC(sub_8315EA08);
PPC_FUNC_IMPL(__imp__sub_8315EA08) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31276
	ctx.r4.s64 = ctx.r11.s64 + 31276;
	// addi r3,r10,-22916
	ctx.r3.s64 = ctx.r10.s64 + -22916;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x82240328
	ctx.lr = 0x8315EA2C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,30928
	ctx.r3.s64 = ctx.r9.s64 + 30928;
	// bl 0x82fa2318
	ctx.lr = 0x8315EA38;
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

__attribute__((alias("__imp__sub_8315EA48"))) PPC_WEAK_FUNC(sub_8315EA48);
PPC_FUNC_IMPL(__imp__sub_8315EA48) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31292
	ctx.r4.s64 = ctx.r11.s64 + 31292;
	// addi r3,r10,-22888
	ctx.r3.s64 = ctx.r10.s64 + -22888;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x82240328
	ctx.lr = 0x8315EA6C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,31016
	ctx.r3.s64 = ctx.r9.s64 + 31016;
	// bl 0x82fa2318
	ctx.lr = 0x8315EA78;
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

__attribute__((alias("__imp__sub_8315EA88"))) PPC_WEAK_FUNC(sub_8315EA88);
PPC_FUNC_IMPL(__imp__sub_8315EA88) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31304
	ctx.r4.s64 = ctx.r11.s64 + 31304;
	// addi r3,r10,-22860
	ctx.r3.s64 = ctx.r10.s64 + -22860;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x82240328
	ctx.lr = 0x8315EAAC;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,31104
	ctx.r3.s64 = ctx.r9.s64 + 31104;
	// bl 0x82fa2318
	ctx.lr = 0x8315EAB8;
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

__attribute__((alias("__imp__sub_8315EAC8"))) PPC_WEAK_FUNC(sub_8315EAC8);
PPC_FUNC_IMPL(__imp__sub_8315EAC8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31316
	ctx.r4.s64 = ctx.r11.s64 + 31316;
	// addi r3,r10,-22832
	ctx.r3.s64 = ctx.r10.s64 + -22832;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x82240328
	ctx.lr = 0x8315EAEC;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,31192
	ctx.r3.s64 = ctx.r9.s64 + 31192;
	// bl 0x82fa2318
	ctx.lr = 0x8315EAF8;
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

__attribute__((alias("__imp__sub_8315EB08"))) PPC_WEAK_FUNC(sub_8315EB08);
PPC_FUNC_IMPL(__imp__sub_8315EB08) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31324
	ctx.r4.s64 = ctx.r11.s64 + 31324;
	// addi r3,r10,-22804
	ctx.r3.s64 = ctx.r10.s64 + -22804;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x82240328
	ctx.lr = 0x8315EB2C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,31280
	ctx.r3.s64 = ctx.r9.s64 + 31280;
	// bl 0x82fa2318
	ctx.lr = 0x8315EB38;
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

__attribute__((alias("__imp__sub_8315EB48"))) PPC_WEAK_FUNC(sub_8315EB48);
PPC_FUNC_IMPL(__imp__sub_8315EB48) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31336
	ctx.r4.s64 = ctx.r11.s64 + 31336;
	// addi r3,r10,-22776
	ctx.r3.s64 = ctx.r10.s64 + -22776;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x82240328
	ctx.lr = 0x8315EB6C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,31368
	ctx.r3.s64 = ctx.r9.s64 + 31368;
	// bl 0x82fa2318
	ctx.lr = 0x8315EB78;
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

__attribute__((alias("__imp__sub_8315EB88"))) PPC_WEAK_FUNC(sub_8315EB88);
PPC_FUNC_IMPL(__imp__sub_8315EB88) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31352
	ctx.r4.s64 = ctx.r11.s64 + 31352;
	// addi r3,r10,-22748
	ctx.r3.s64 = ctx.r10.s64 + -22748;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82240328
	ctx.lr = 0x8315EBAC;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,31456
	ctx.r3.s64 = ctx.r9.s64 + 31456;
	// bl 0x82fa2318
	ctx.lr = 0x8315EBB8;
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

__attribute__((alias("__imp__sub_8315EBC8"))) PPC_WEAK_FUNC(sub_8315EBC8);
PPC_FUNC_IMPL(__imp__sub_8315EBC8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31368
	ctx.r4.s64 = ctx.r11.s64 + 31368;
	// addi r3,r10,-22720
	ctx.r3.s64 = ctx.r10.s64 + -22720;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x82240328
	ctx.lr = 0x8315EBEC;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,31544
	ctx.r3.s64 = ctx.r9.s64 + 31544;
	// bl 0x82fa2318
	ctx.lr = 0x8315EBF8;
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

__attribute__((alias("__imp__sub_8315EC08"))) PPC_WEAK_FUNC(sub_8315EC08);
PPC_FUNC_IMPL(__imp__sub_8315EC08) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31380
	ctx.r4.s64 = ctx.r11.s64 + 31380;
	// addi r3,r10,-22692
	ctx.r3.s64 = ctx.r10.s64 + -22692;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x82240328
	ctx.lr = 0x8315EC2C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,31632
	ctx.r3.s64 = ctx.r9.s64 + 31632;
	// bl 0x82fa2318
	ctx.lr = 0x8315EC38;
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

__attribute__((alias("__imp__sub_8315EC48"))) PPC_WEAK_FUNC(sub_8315EC48);
PPC_FUNC_IMPL(__imp__sub_8315EC48) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,24960
	ctx.r3.s64 = ctx.r11.s64 + 24960;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828f8f20
	ctx.lr = 0x8315EC68;
	sub_828F8F20(ctx, base);
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r3,r10,31720
	ctx.r3.s64 = ctx.r10.s64 + 31720;
	// bl 0x82fa2318
	ctx.lr = 0x8315EC74;
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

__attribute__((alias("__imp__sub_8315EC84"))) PPC_WEAK_FUNC(sub_8315EC84);
PPC_FUNC_IMPL(__imp__sub_8315EC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315EC88"))) PPC_WEAK_FUNC(sub_8315EC88);
PPC_FUNC_IMPL(__imp__sub_8315EC88) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,24976
	ctx.r3.s64 = ctx.r31.s64 + 24976;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x8291afe0
	ctx.lr = 0x8315ECB8;
	sub_8291AFE0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r11,r11,22408
	ctx.r11.s64 = ctx.r11.s64 + 22408;
	// addi r3,r9,31864
	ctx.r3.s64 = ctx.r9.s64 + 31864;
	// stw r11,24976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24976, ctx.r11.u32);
	// bl 0x82fa2318
	ctx.lr = 0x8315ECD0;
	sub_82FA2318(ctx, base);
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

__attribute__((alias("__imp__sub_8315ECE4"))) PPC_WEAK_FUNC(sub_8315ECE4);
PPC_FUNC_IMPL(__imp__sub_8315ECE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315ECE8"))) PPC_WEAK_FUNC(sub_8315ECE8);
PPC_FUNC_IMPL(__imp__sub_8315ECE8) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,24992
	ctx.r3.s64 = ctx.r11.s64 + 24992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828d7528
	ctx.lr = 0x8315ED08;
	sub_828D7528(ctx, base);
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r3,r10,31960
	ctx.r3.s64 = ctx.r10.s64 + 31960;
	// bl 0x82fa2318
	ctx.lr = 0x8315ED14;
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

__attribute__((alias("__imp__sub_8315ED24"))) PPC_WEAK_FUNC(sub_8315ED24);
PPC_FUNC_IMPL(__imp__sub_8315ED24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315ED28"))) PPC_WEAK_FUNC(sub_8315ED28);
PPC_FUNC_IMPL(__imp__sub_8315ED28) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,25008
	ctx.r3.s64 = ctx.r11.s64 + 25008;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828d7528
	ctx.lr = 0x8315ED48;
	sub_828D7528(ctx, base);
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r3,r10,31792
	ctx.r3.s64 = ctx.r10.s64 + 31792;
	// bl 0x82fa2318
	ctx.lr = 0x8315ED54;
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

__attribute__((alias("__imp__sub_8315ED64"))) PPC_WEAK_FUNC(sub_8315ED64);
PPC_FUNC_IMPL(__imp__sub_8315ED64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315ED68"))) PPC_WEAK_FUNC(sub_8315ED68);
PPC_FUNC_IMPL(__imp__sub_8315ED68) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31216
	ctx.r4.s64 = ctx.r11.s64 + 31216;
	// addi r3,r10,-22412
	ctx.r3.s64 = ctx.r10.s64 + -22412;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82240328
	ctx.lr = 0x8315ED8C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,32120
	ctx.r3.s64 = ctx.r9.s64 + 32120;
	// bl 0x82fa2318
	ctx.lr = 0x8315ED98;
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

__attribute__((alias("__imp__sub_8315EDA8"))) PPC_WEAK_FUNC(sub_8315EDA8);
PPC_FUNC_IMPL(__imp__sub_8315EDA8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31228
	ctx.r4.s64 = ctx.r11.s64 + 31228;
	// addi r3,r10,-22384
	ctx.r3.s64 = ctx.r10.s64 + -22384;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x82240328
	ctx.lr = 0x8315EDCC;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,32208
	ctx.r3.s64 = ctx.r9.s64 + 32208;
	// bl 0x82fa2318
	ctx.lr = 0x8315EDD8;
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

__attribute__((alias("__imp__sub_8315EDE8"))) PPC_WEAK_FUNC(sub_8315EDE8);
PPC_FUNC_IMPL(__imp__sub_8315EDE8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31236
	ctx.r4.s64 = ctx.r11.s64 + 31236;
	// addi r3,r10,-22356
	ctx.r3.s64 = ctx.r10.s64 + -22356;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82240328
	ctx.lr = 0x8315EE0C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,32296
	ctx.r3.s64 = ctx.r9.s64 + 32296;
	// bl 0x82fa2318
	ctx.lr = 0x8315EE18;
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

__attribute__((alias("__imp__sub_8315EE28"))) PPC_WEAK_FUNC(sub_8315EE28);
PPC_FUNC_IMPL(__imp__sub_8315EE28) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31248
	ctx.r4.s64 = ctx.r11.s64 + 31248;
	// addi r3,r10,-22280
	ctx.r3.s64 = ctx.r10.s64 + -22280;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x82240328
	ctx.lr = 0x8315EE4C;
	sub_82240328(ctx, base);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,32384
	ctx.r3.s64 = ctx.r9.s64 + 32384;
	// bl 0x82fa2318
	ctx.lr = 0x8315EE58;
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

__attribute__((alias("__imp__sub_8315EE68"))) PPC_WEAK_FUNC(sub_8315EE68);
PPC_FUNC_IMPL(__imp__sub_8315EE68) {
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
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82920158
	ctx.lr = 0x8315EE7C;
	sub_82920158(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// stw r3,25264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EE94"))) PPC_WEAK_FUNC(sub_8315EE94);
PPC_FUNC_IMPL(__imp__sub_8315EE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315EE98"))) PPC_WEAK_FUNC(sub_8315EE98);
PPC_FUNC_IMPL(__imp__sub_8315EE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8315EEA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r11,25304
	ctx.r31.s64 = ctx.r11.s64 + 25304;
	// lis r5,-32113
	ctx.r5.s64 = -2104557568;
	// addi r9,r10,31496
	ctx.r9.s64 = ctx.r10.s64 + 31496;
	// li r30,31
	ctx.r30.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r10,31
	ctx.r10.s64 = 31;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,17048
	ctx.r5.s64 = ctx.r5.s64 + 17048;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e35f0
	ctx.lr = 0x8315EEE0;
	sub_828E35F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32113
	ctx.r3.s64 = -2104557568;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r4,31484
	ctx.r9.s64 = ctx.r4.s64 + 31484;
	// addi r5,r3,17120
	ctx.r5.s64 = ctx.r3.s64 + 17120;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x828e35f0
	ctx.lr = 0x8315EF10;
	sub_828E35F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r5,-32113
	ctx.r5.s64 = -2104557568;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r11,31472
	ctx.r9.s64 = ctx.r11.s64 + 31472;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,18752
	ctx.r5.s64 = ctx.r5.s64 + 18752;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x828e35f0
	ctx.lr = 0x8315EF40;
	sub_828E35F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32113
	ctx.r3.s64 = -2104557568;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r4,31460
	ctx.r9.s64 = ctx.r4.s64 + 31460;
	// addi r5,r3,18864
	ctx.r5.s64 = ctx.r3.s64 + 18864;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x828e35f0
	ctx.lr = 0x8315EF70;
	sub_828E35F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r5,-32113
	ctx.r5.s64 = -2104557568;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r11,31448
	ctx.r9.s64 = ctx.r11.s64 + 31448;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,19536
	ctx.r5.s64 = ctx.r5.s64 + 19536;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x828e35f0
	ctx.lr = 0x8315EFA0;
	sub_828E35F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32113
	ctx.r3.s64 = -2104557568;
	// addi r9,r4,31436
	ctx.r9.s64 = ctx.r4.s64 + 31436;
	// addi r5,r3,22728
	ctx.r5.s64 = ctx.r3.s64 + 22728;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x828e35f0
	ctx.lr = 0x8315EFD4;
	sub_828E35F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r5,-32113
	ctx.r5.s64 = -2104557568;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r11,31428
	ctx.r9.s64 = ctx.r11.s64 + 31428;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,17192
	ctx.r5.s64 = ctx.r5.s64 + 17192;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x828e35f0
	ctx.lr = 0x8315F004;
	sub_828E35F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32113
	ctx.r3.s64 = -2104557568;
	// addi r9,r4,31416
	ctx.r9.s64 = ctx.r4.s64 + 31416;
	// addi r5,r3,17304
	ctx.r5.s64 = ctx.r3.s64 + 17304;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x828e35f0
	ctx.lr = 0x8315F038;
	sub_828E35F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r5,-32113
	ctx.r5.s64 = -2104557568;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r11,31404
	ctx.r9.s64 = ctx.r11.s64 + 31404;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,19672
	ctx.r5.s64 = ctx.r5.s64 + 19672;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x828e35f0
	ctx.lr = 0x8315F068;
	sub_828E35F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32113
	ctx.r3.s64 = -2104557568;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r4,31388
	ctx.r9.s64 = ctx.r4.s64 + 31388;
	// addi r5,r3,20760
	ctx.r5.s64 = ctx.r3.s64 + 20760;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// bl 0x828e35f0
	ctx.lr = 0x8315F098;
	sub_828E35F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r5,-32113
	ctx.r5.s64 = -2104557568;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r11,31376
	ctx.r9.s64 = ctx.r11.s64 + 31376;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,17416
	ctx.r5.s64 = ctx.r5.s64 + 17416;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x828e35f0
	ctx.lr = 0x8315F0C8;
	sub_828E35F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32113
	ctx.r3.s64 = -2104557568;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r4,31364
	ctx.r9.s64 = ctx.r4.s64 + 31364;
	// addi r5,r3,21608
	ctx.r5.s64 = ctx.r3.s64 + 21608;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// bl 0x828e35f0
	ctx.lr = 0x8315F0F8;
	sub_828E35F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r5,-32113
	ctx.r5.s64 = -2104557568;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r11,31352
	ctx.r9.s64 = ctx.r11.s64 + 31352;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,19152
	ctx.r5.s64 = ctx.r5.s64 + 19152;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// bl 0x828e35f0
	ctx.lr = 0x8315F128;
	sub_828E35F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32113
	ctx.r3.s64 = -2104557568;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r4,31344
	ctx.r9.s64 = ctx.r4.s64 + 31344;
	// addi r5,r3,20888
	ctx.r5.s64 = ctx.r3.s64 + 20888;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x828e35f0
	ctx.lr = 0x8315F158;
	sub_828E35F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r5,-32113
	ctx.r5.s64 = -2104557568;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r11,31332
	ctx.r9.s64 = ctx.r11.s64 + 31332;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,20960
	ctx.r5.s64 = ctx.r5.s64 + 20960;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x828e35f0
	ctx.lr = 0x8315F188;
	sub_828E35F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32113
	ctx.r3.s64 = -2104557568;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r4,31316
	ctx.r9.s64 = ctx.r4.s64 + 31316;
	// addi r5,r3,17528
	ctx.r5.s64 = ctx.r3.s64 + 17528;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// bl 0x828e35f0
	ctx.lr = 0x8315F1B8;
	sub_828E35F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r5,-32113
	ctx.r5.s64 = -2104557568;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,31300
	ctx.r9.s64 = ctx.r11.s64 + 31300;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,20192
	ctx.r5.s64 = ctx.r5.s64 + 20192;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x828e35f0
	ctx.lr = 0x8315F1E8;
	sub_828E35F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32113
	ctx.r3.s64 = -2104557568;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r4,31288
	ctx.r9.s64 = ctx.r4.s64 + 31288;
	// addi r5,r3,17648
	ctx.r5.s64 = ctx.r3.s64 + 17648;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r3,r31,476
	ctx.r3.s64 = ctx.r31.s64 + 476;
	// bl 0x828e35f0
	ctx.lr = 0x8315F218;
	sub_828E35F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r5,-32113
	ctx.r5.s64 = -2104557568;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r11,31268
	ctx.r9.s64 = ctx.r11.s64 + 31268;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,20264
	ctx.r5.s64 = ctx.r5.s64 + 20264;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r31,504
	ctx.r3.s64 = ctx.r31.s64 + 504;
	// bl 0x828e35f0
	ctx.lr = 0x8315F248;
	sub_828E35F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32113
	ctx.r3.s64 = -2104557568;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r4,31248
	ctx.r9.s64 = ctx.r4.s64 + 31248;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r3,17720
	ctx.r5.s64 = ctx.r3.s64 + 17720;
	// li r4,19
	ctx.r4.s64 = 19;
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// bl 0x828e35f0
	ctx.lr = 0x8315F278;
	sub_828E35F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r5,-32113
	ctx.r5.s64 = -2104557568;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r11,31240
	ctx.r9.s64 = ctx.r11.s64 + 31240;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,21736
	ctx.r5.s64 = ctx.r5.s64 + 21736;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x828e35f0
	ctx.lr = 0x8315F2A8;
	sub_828E35F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32113
	ctx.r3.s64 = -2104557568;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r4,31228
	ctx.r9.s64 = ctx.r4.s64 + 31228;
	// addi r5,r3,17848
	ctx.r5.s64 = ctx.r3.s64 + 17848;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// bl 0x828e35f0
	ctx.lr = 0x8315F2D8;
	sub_828E35F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r5,-32113
	ctx.r5.s64 = -2104557568;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r11,31216
	ctx.r9.s64 = ctx.r11.s64 + 31216;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,17960
	ctx.r5.s64 = ctx.r5.s64 + 17960;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// bl 0x828e35f0
	ctx.lr = 0x8315F308;
	sub_828E35F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32113
	ctx.r3.s64 = -2104557568;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r4,31204
	ctx.r9.s64 = ctx.r4.s64 + 31204;
	// addi r5,r3,18032
	ctx.r5.s64 = ctx.r3.s64 + 18032;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// addi r3,r31,644
	ctx.r3.s64 = ctx.r31.s64 + 644;
	// bl 0x828e35f0
	ctx.lr = 0x8315F338;
	sub_828E35F0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r5,-32113
	ctx.r5.s64 = -2104557568;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r9,r11,-27604
	ctx.r9.s64 = ctx.r11.s64 + -27604;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,18144
	ctx.r5.s64 = ctx.r5.s64 + 18144;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// bl 0x828e35f0
	ctx.lr = 0x8315F368;
	sub_828E35F0(ctx, base);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32113
	ctx.r3.s64 = -2104557568;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r4,31192
	ctx.r9.s64 = ctx.r4.s64 + 31192;
	// addi r5,r3,18264
	ctx.r5.s64 = ctx.r3.s64 + 18264;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// addi r3,r31,700
	ctx.r3.s64 = ctx.r31.s64 + 700;
	// bl 0x828e35f0
	ctx.lr = 0x8315F398;
	sub_828E35F0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r5,-32113
	ctx.r5.s64 = -2104557568;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r11,23036
	ctx.r9.s64 = ctx.r11.s64 + 23036;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,18376
	ctx.r5.s64 = ctx.r5.s64 + 18376;
	// li r4,26
	ctx.r4.s64 = 26;
	// addi r3,r31,728
	ctx.r3.s64 = ctx.r31.s64 + 728;
	// bl 0x828e35f0
	ctx.lr = 0x8315F3C8;
	sub_828E35F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315F3D0"))) PPC_WEAK_FUNC(sub_8315F3D0);
PPC_FUNC_IMPL(__imp__sub_8315F3D0) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r3,r11,26060
	ctx.r3.s64 = ctx.r11.s64 + 26060;
	// bl 0x828fa760
	ctx.lr = 0x8315F3E8;
	sub_828FA760(ctx, base);
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r3,r10,32592
	ctx.r3.s64 = ctx.r10.s64 + 32592;
	// bl 0x82fa2318
	ctx.lr = 0x8315F3F4;
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

__attribute__((alias("__imp__sub_8315F404"))) PPC_WEAK_FUNC(sub_8315F404);
PPC_FUNC_IMPL(__imp__sub_8315F404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F408"))) PPC_WEAK_FUNC(sub_8315F408);
PPC_FUNC_IMPL(__imp__sub_8315F408) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,26088
	ctx.r3.s64 = ctx.r11.s64 + 26088;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826a9610
	ctx.lr = 0x8315F428;
	sub_826A9610(ctx, base);
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r3,r10,32608
	ctx.r3.s64 = ctx.r10.s64 + 32608;
	// bl 0x82fa2318
	ctx.lr = 0x8315F434;
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

__attribute__((alias("__imp__sub_8315F444"))) PPC_WEAK_FUNC(sub_8315F444);
PPC_FUNC_IMPL(__imp__sub_8315F444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F448"))) PPC_WEAK_FUNC(sub_8315F448);
PPC_FUNC_IMPL(__imp__sub_8315F448) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22052
	ctx.r4.s64 = ctx.r11.s64 + -22052;
	// bl 0x82c0e990
	ctx.lr = 0x8315F468;
	sub_82C0E990(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,26232
	ctx.r31.s64 = ctx.r11.s64 + 26232;
	// lis r7,-31964
	ctx.r7.s64 = -2094792704;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32112
	ctx.r8.s64 = -2104492032;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r8,r8,1112
	ctx.r8.s64 = ctx.r8.s64 + 1112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,26212(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bne cr6,0x8315f4b4
	if (!ctx.cr6.eq) goto loc_8315F4B4;
	// bl 0x829007b8
	ctx.lr = 0x8315F4B0;
	sub_829007B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8315F4B4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829004e0
	ctx.lr = 0x8315F4C4;
	sub_829004E0(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,32696
	ctx.r3.s64 = ctx.r11.s64 + 32696;
	// bl 0x82fa2318
	ctx.lr = 0x8315F4D0;
	sub_82FA2318(ctx, base);
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

__attribute__((alias("__imp__sub_8315F4E4"))) PPC_WEAK_FUNC(sub_8315F4E4);
PPC_FUNC_IMPL(__imp__sub_8315F4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F4E8"))) PPC_WEAK_FUNC(sub_8315F4E8);
PPC_FUNC_IMPL(__imp__sub_8315F4E8) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa0a80
	ctx.lr = 0x8315F504;
	sub_82FA0A80(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,11176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11176);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11176, ctx.r11.u32);
	// bl 0x82fa0ad0
	ctx.lr = 0x8315F520;
	sub_82FA0AD0(ctx, base);
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// stw r31,26256(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26256, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8315F53C"))) PPC_WEAK_FUNC(sub_8315F53C);
PPC_FUNC_IMPL(__imp__sub_8315F53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F540"))) PPC_WEAK_FUNC(sub_8315F540);
PPC_FUNC_IMPL(__imp__sub_8315F540) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa0a80
	ctx.lr = 0x8315F55C;
	sub_82FA0A80(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,11176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11176);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11176, ctx.r11.u32);
	// bl 0x82fa0ad0
	ctx.lr = 0x8315F578;
	sub_82FA0AD0(ctx, base);
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// stw r31,26260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26260, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8315F594"))) PPC_WEAK_FUNC(sub_8315F594);
PPC_FUNC_IMPL(__imp__sub_8315F594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F598"))) PPC_WEAK_FUNC(sub_8315F598);
PPC_FUNC_IMPL(__imp__sub_8315F598) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa0a80
	ctx.lr = 0x8315F5B4;
	sub_82FA0A80(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,11176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11176);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11176, ctx.r11.u32);
	// bl 0x82fa0ad0
	ctx.lr = 0x8315F5D0;
	sub_82FA0AD0(ctx, base);
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// stw r31,26264(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26264, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8315F5EC"))) PPC_WEAK_FUNC(sub_8315F5EC);
PPC_FUNC_IMPL(__imp__sub_8315F5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F5F0"))) PPC_WEAK_FUNC(sub_8315F5F0);
PPC_FUNC_IMPL(__imp__sub_8315F5F0) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31248
	ctx.r4.s64 = ctx.r11.s64 + 31248;
	// addi r3,r10,-21720
	ctx.r3.s64 = ctx.r10.s64 + -21720;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x82240328
	ctx.lr = 0x8315F614;
	sub_82240328(ctx, base);
	// lis r9,-31976
	ctx.r9.s64 = -2095579136;
	// addi r3,r9,-32520
	ctx.r3.s64 = ctx.r9.s64 + -32520;
	// bl 0x82fa2318
	ctx.lr = 0x8315F620;
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

__attribute__((alias("__imp__sub_8315F630"))) PPC_WEAK_FUNC(sub_8315F630);
PPC_FUNC_IMPL(__imp__sub_8315F630) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r4,r11,31204
	ctx.r4.s64 = ctx.r11.s64 + 31204;
	// addi r3,r10,-21692
	ctx.r3.s64 = ctx.r10.s64 + -21692;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82240328
	ctx.lr = 0x8315F654;
	sub_82240328(ctx, base);
	// lis r9,-31976
	ctx.r9.s64 = -2095579136;
	// addi r3,r9,-32432
	ctx.r3.s64 = ctx.r9.s64 + -32432;
	// bl 0x82fa2318
	ctx.lr = 0x8315F660;
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

__attribute__((alias("__imp__sub_8315F670"))) PPC_WEAK_FUNC(sub_8315F670);
PPC_FUNC_IMPL(__imp__sub_8315F670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-32344
	ctx.r3.s64 = ctx.r11.s64 + -32344;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315F67C"))) PPC_WEAK_FUNC(sub_8315F67C);
PPC_FUNC_IMPL(__imp__sub_8315F67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F680"))) PPC_WEAK_FUNC(sub_8315F680);
PPC_FUNC_IMPL(__imp__sub_8315F680) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21292
	ctx.r4.s64 = ctx.r11.s64 + -21292;
	// bl 0x82c0e990
	ctx.lr = 0x8315F6A0;
	sub_82C0E990(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,26336
	ctx.r31.s64 = ctx.r11.s64 + 26336;
	// lis r7,-31964
	ctx.r7.s64 = -2094792704;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32110
	ctx.r8.s64 = -2104360960;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r8,r8,-29688
	ctx.r8.s64 = ctx.r8.s64 + -29688;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,26212(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bne cr6,0x8315f6ec
	if (!ctx.cr6.eq) goto loc_8315F6EC;
	// bl 0x829007b8
	ctx.lr = 0x8315F6E8;
	sub_829007B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8315F6EC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829004e0
	ctx.lr = 0x8315F6FC;
	sub_829004E0(ctx, base);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-32152
	ctx.r3.s64 = ctx.r11.s64 + -32152;
	// bl 0x82fa2318
	ctx.lr = 0x8315F708;
	sub_82FA2318(ctx, base);
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

__attribute__((alias("__imp__sub_8315F71C"))) PPC_WEAK_FUNC(sub_8315F71C);
PPC_FUNC_IMPL(__imp__sub_8315F71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F720"))) PPC_WEAK_FUNC(sub_8315F720);
PPC_FUNC_IMPL(__imp__sub_8315F720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-32064
	ctx.r3.s64 = ctx.r11.s64 + -32064;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315F72C"))) PPC_WEAK_FUNC(sub_8315F72C);
PPC_FUNC_IMPL(__imp__sub_8315F72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F730"))) PPC_WEAK_FUNC(sub_8315F730);
PPC_FUNC_IMPL(__imp__sub_8315F730) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-21180
	ctx.r4.s64 = ctx.r11.s64 + -21180;
	// bl 0x82c0e990
	ctx.lr = 0x8315F750;
	sub_82C0E990(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,26456
	ctx.r31.s64 = ctx.r11.s64 + 26456;
	// lis r7,-31964
	ctx.r7.s64 = -2094792704;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32110
	ctx.r8.s64 = -2104360960;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r8,r8,-9696
	ctx.r8.s64 = ctx.r8.s64 + -9696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,26212(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bne cr6,0x8315f79c
	if (!ctx.cr6.eq) goto loc_8315F79C;
	// bl 0x829007b8
	ctx.lr = 0x8315F798;
	sub_829007B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8315F79C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829004e0
	ctx.lr = 0x8315F7AC;
	sub_829004E0(ctx, base);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-31880
	ctx.r3.s64 = ctx.r11.s64 + -31880;
	// bl 0x82fa2318
	ctx.lr = 0x8315F7B8;
	sub_82FA2318(ctx, base);
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

__attribute__((alias("__imp__sub_8315F7CC"))) PPC_WEAK_FUNC(sub_8315F7CC);
PPC_FUNC_IMPL(__imp__sub_8315F7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F7D0"))) PPC_WEAK_FUNC(sub_8315F7D0);
PPC_FUNC_IMPL(__imp__sub_8315F7D0) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,26580
	ctx.r3.s64 = ctx.r11.s64 + 26580;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82925cd0
	ctx.lr = 0x8315F7F0;
	sub_82925CD0(ctx, base);
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// addi r3,r10,-31048
	ctx.r3.s64 = ctx.r10.s64 + -31048;
	// bl 0x82fa2318
	ctx.lr = 0x8315F7FC;
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

__attribute__((alias("__imp__sub_8315F80C"))) PPC_WEAK_FUNC(sub_8315F80C);
PPC_FUNC_IMPL(__imp__sub_8315F80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F810"))) PPC_WEAK_FUNC(sub_8315F810);
PPC_FUNC_IMPL(__imp__sub_8315F810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r3,r11,23656
	ctx.r3.s64 = ctx.r11.s64 + 23656;
	// b 0x82a092d0
	sub_82A092D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315F81C"))) PPC_WEAK_FUNC(sub_8315F81C);
PPC_FUNC_IMPL(__imp__sub_8315F81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F820"))) PPC_WEAK_FUNC(sub_8315F820);
PPC_FUNC_IMPL(__imp__sub_8315F820) {
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r3,r11,24040
	ctx.r3.s64 = ctx.r11.s64 + 24040;
	// bl 0x82a13a30
	ctx.lr = 0x8315F838;
	sub_82A13A30(ctx, base);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30976
	ctx.r3.s64 = ctx.r11.s64 + -30976;
	// bl 0x82fa2318
	ctx.lr = 0x8315F844;
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

__attribute__((alias("__imp__sub_8315F854"))) PPC_WEAK_FUNC(sub_8315F854);
PPC_FUNC_IMPL(__imp__sub_8315F854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F858"))) PPC_WEAK_FUNC(sub_8315F858);
PPC_FUNC_IMPL(__imp__sub_8315F858) {
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
	// bl 0x82a23978
	ctx.lr = 0x8315F868;
	sub_82A23978(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// stfs f1,31480(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 31480, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F880"))) PPC_WEAK_FUNC(sub_8315F880);
PPC_FUNC_IMPL(__imp__sub_8315F880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,15856
	ctx.r11.s64 = ctx.r11.s64 + 15856;
	// addi r10,r10,-30912
	ctx.r10.s64 = ctx.r10.s64 + -30912;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F89C"))) PPC_WEAK_FUNC(sub_8315F89C);
PPC_FUNC_IMPL(__imp__sub_8315F89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F8A0"))) PPC_WEAK_FUNC(sub_8315F8A0);
PPC_FUNC_IMPL(__imp__sub_8315F8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-29680
	ctx.r11.s64 = ctx.r11.s64 + -29680;
	// addi r10,r10,-30896
	ctx.r10.s64 = ctx.r10.s64 + -30896;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F8BC"))) PPC_WEAK_FUNC(sub_8315F8BC);
PPC_FUNC_IMPL(__imp__sub_8315F8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F8C0"))) PPC_WEAK_FUNC(sub_8315F8C0);
PPC_FUNC_IMPL(__imp__sub_8315F8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,15840
	ctx.r11.s64 = ctx.r11.s64 + 15840;
	// addi r10,r10,-30880
	ctx.r10.s64 = ctx.r10.s64 + -30880;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F8DC"))) PPC_WEAK_FUNC(sub_8315F8DC);
PPC_FUNC_IMPL(__imp__sub_8315F8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F8E0"))) PPC_WEAK_FUNC(sub_8315F8E0);
PPC_FUNC_IMPL(__imp__sub_8315F8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-23024
	ctx.r11.s64 = ctx.r11.s64 + -23024;
	// addi r10,r10,-30864
	ctx.r10.s64 = ctx.r10.s64 + -30864;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F8FC"))) PPC_WEAK_FUNC(sub_8315F8FC);
PPC_FUNC_IMPL(__imp__sub_8315F8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F900"))) PPC_WEAK_FUNC(sub_8315F900);
PPC_FUNC_IMPL(__imp__sub_8315F900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-23008
	ctx.r11.s64 = ctx.r11.s64 + -23008;
	// addi r10,r10,-30848
	ctx.r10.s64 = ctx.r10.s64 + -30848;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F91C"))) PPC_WEAK_FUNC(sub_8315F91C);
PPC_FUNC_IMPL(__imp__sub_8315F91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F920"))) PPC_WEAK_FUNC(sub_8315F920);
PPC_FUNC_IMPL(__imp__sub_8315F920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-22992
	ctx.r11.s64 = ctx.r11.s64 + -22992;
	// addi r10,r10,-30832
	ctx.r10.s64 = ctx.r10.s64 + -30832;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F93C"))) PPC_WEAK_FUNC(sub_8315F93C);
PPC_FUNC_IMPL(__imp__sub_8315F93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F940"))) PPC_WEAK_FUNC(sub_8315F940);
PPC_FUNC_IMPL(__imp__sub_8315F940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-22976
	ctx.r11.s64 = ctx.r11.s64 + -22976;
	// addi r10,r10,-30816
	ctx.r10.s64 = ctx.r10.s64 + -30816;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F95C"))) PPC_WEAK_FUNC(sub_8315F95C);
PPC_FUNC_IMPL(__imp__sub_8315F95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F960"))) PPC_WEAK_FUNC(sub_8315F960);
PPC_FUNC_IMPL(__imp__sub_8315F960) {
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
	// bl 0x82a27510
	ctx.lr = 0x8315F970;
	sub_82A27510(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stfs f1,-30800(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -30800, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F988"))) PPC_WEAK_FUNC(sub_8315F988);
PPC_FUNC_IMPL(__imp__sub_8315F988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,26976
	ctx.r11.s64 = ctx.r11.s64 + 26976;
	// addi r10,r10,-30784
	ctx.r10.s64 = ctx.r10.s64 + -30784;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F9A4"))) PPC_WEAK_FUNC(sub_8315F9A4);
PPC_FUNC_IMPL(__imp__sub_8315F9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F9A8"))) PPC_WEAK_FUNC(sub_8315F9A8);
PPC_FUNC_IMPL(__imp__sub_8315F9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,26992
	ctx.r11.s64 = ctx.r11.s64 + 26992;
	// addi r10,r10,-30768
	ctx.r10.s64 = ctx.r10.s64 + -30768;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F9C4"))) PPC_WEAK_FUNC(sub_8315F9C4);
PPC_FUNC_IMPL(__imp__sub_8315F9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F9C8"))) PPC_WEAK_FUNC(sub_8315F9C8);
PPC_FUNC_IMPL(__imp__sub_8315F9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r11,-30752
	ctx.r11.s64 = ctx.r11.s64 + -30752;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F9DC"))) PPC_WEAK_FUNC(sub_8315F9DC);
PPC_FUNC_IMPL(__imp__sub_8315F9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315F9E0"))) PPC_WEAK_FUNC(sub_8315F9E0);
PPC_FUNC_IMPL(__imp__sub_8315F9E0) {
	PPC_FUNC_PROLOGUE();
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x1)));
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-30736
	ctx.r11.s64 = ctx.r11.s64 + -30736;
	// vcsxwfp128 v63,v63,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F9F8"))) PPC_WEAK_FUNC(sub_8315F9F8);
PPC_FUNC_IMPL(__imp__sub_8315F9F8) {
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
	// bl 0x82a283e0
	ctx.lr = 0x8315FA08;
	sub_82A283E0(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r3,-29000(r11)
	PPC_STORE_U32(ctx.r11.u32 + -29000, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FA20"))) PPC_WEAK_FUNC(sub_8315FA20);
PPC_FUNC_IMPL(__imp__sub_8315FA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-15136
	ctx.r11.s64 = ctx.r11.s64 + -15136;
	// addi r10,r10,-28992
	ctx.r10.s64 = ctx.r10.s64 + -28992;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FA3C"))) PPC_WEAK_FUNC(sub_8315FA3C);
PPC_FUNC_IMPL(__imp__sub_8315FA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FA40"))) PPC_WEAK_FUNC(sub_8315FA40);
PPC_FUNC_IMPL(__imp__sub_8315FA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-15120
	ctx.r11.s64 = ctx.r11.s64 + -15120;
	// addi r10,r10,-28976
	ctx.r10.s64 = ctx.r10.s64 + -28976;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FA5C"))) PPC_WEAK_FUNC(sub_8315FA5C);
PPC_FUNC_IMPL(__imp__sub_8315FA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FA60"))) PPC_WEAK_FUNC(sub_8315FA60);
PPC_FUNC_IMPL(__imp__sub_8315FA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-15088
	ctx.r11.s64 = ctx.r11.s64 + -15088;
	// addi r10,r10,-28944
	ctx.r10.s64 = ctx.r10.s64 + -28944;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FA7C"))) PPC_WEAK_FUNC(sub_8315FA7C);
PPC_FUNC_IMPL(__imp__sub_8315FA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FA80"))) PPC_WEAK_FUNC(sub_8315FA80);
PPC_FUNC_IMPL(__imp__sub_8315FA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-15072
	ctx.r11.s64 = ctx.r11.s64 + -15072;
	// addi r10,r10,-28928
	ctx.r10.s64 = ctx.r10.s64 + -28928;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FA9C"))) PPC_WEAK_FUNC(sub_8315FA9C);
PPC_FUNC_IMPL(__imp__sub_8315FA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FAA0"))) PPC_WEAK_FUNC(sub_8315FAA0);
PPC_FUNC_IMPL(__imp__sub_8315FAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r11,-28912
	ctx.r11.s64 = ctx.r11.s64 + -28912;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FAB4"))) PPC_WEAK_FUNC(sub_8315FAB4);
PPC_FUNC_IMPL(__imp__sub_8315FAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FAB8"))) PPC_WEAK_FUNC(sub_8315FAB8);
PPC_FUNC_IMPL(__imp__sub_8315FAB8) {
	PPC_FUNC_PROLOGUE();
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x1)));
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-28896
	ctx.r11.s64 = ctx.r11.s64 + -28896;
	// vcsxwfp128 v63,v63,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FAD0"))) PPC_WEAK_FUNC(sub_8315FAD0);
PPC_FUNC_IMPL(__imp__sub_8315FAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14960
	ctx.r11.s64 = ctx.r11.s64 + -14960;
	// addi r10,r10,-28880
	ctx.r10.s64 = ctx.r10.s64 + -28880;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FAEC"))) PPC_WEAK_FUNC(sub_8315FAEC);
PPC_FUNC_IMPL(__imp__sub_8315FAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FAF0"))) PPC_WEAK_FUNC(sub_8315FAF0);
PPC_FUNC_IMPL(__imp__sub_8315FAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14944
	ctx.r11.s64 = ctx.r11.s64 + -14944;
	// addi r10,r10,-28864
	ctx.r10.s64 = ctx.r10.s64 + -28864;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FB0C"))) PPC_WEAK_FUNC(sub_8315FB0C);
PPC_FUNC_IMPL(__imp__sub_8315FB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FB10"))) PPC_WEAK_FUNC(sub_8315FB10);
PPC_FUNC_IMPL(__imp__sub_8315FB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14640
	ctx.r11.s64 = ctx.r11.s64 + -14640;
	// addi r10,r10,-28848
	ctx.r10.s64 = ctx.r10.s64 + -28848;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FB2C"))) PPC_WEAK_FUNC(sub_8315FB2C);
PPC_FUNC_IMPL(__imp__sub_8315FB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FB30"))) PPC_WEAK_FUNC(sub_8315FB30);
PPC_FUNC_IMPL(__imp__sub_8315FB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14624
	ctx.r11.s64 = ctx.r11.s64 + -14624;
	// addi r10,r10,-28832
	ctx.r10.s64 = ctx.r10.s64 + -28832;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FB4C"))) PPC_WEAK_FUNC(sub_8315FB4C);
PPC_FUNC_IMPL(__imp__sub_8315FB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FB50"))) PPC_WEAK_FUNC(sub_8315FB50);
PPC_FUNC_IMPL(__imp__sub_8315FB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14608
	ctx.r11.s64 = ctx.r11.s64 + -14608;
	// addi r10,r10,-28816
	ctx.r10.s64 = ctx.r10.s64 + -28816;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FB6C"))) PPC_WEAK_FUNC(sub_8315FB6C);
PPC_FUNC_IMPL(__imp__sub_8315FB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FB70"))) PPC_WEAK_FUNC(sub_8315FB70);
PPC_FUNC_IMPL(__imp__sub_8315FB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14592
	ctx.r11.s64 = ctx.r11.s64 + -14592;
	// addi r10,r10,-28800
	ctx.r10.s64 = ctx.r10.s64 + -28800;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FB8C"))) PPC_WEAK_FUNC(sub_8315FB8C);
PPC_FUNC_IMPL(__imp__sub_8315FB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FB90"))) PPC_WEAK_FUNC(sub_8315FB90);
PPC_FUNC_IMPL(__imp__sub_8315FB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14576
	ctx.r11.s64 = ctx.r11.s64 + -14576;
	// addi r10,r10,-28784
	ctx.r10.s64 = ctx.r10.s64 + -28784;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FBAC"))) PPC_WEAK_FUNC(sub_8315FBAC);
PPC_FUNC_IMPL(__imp__sub_8315FBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FBB0"))) PPC_WEAK_FUNC(sub_8315FBB0);
PPC_FUNC_IMPL(__imp__sub_8315FBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14560
	ctx.r11.s64 = ctx.r11.s64 + -14560;
	// addi r10,r10,-28768
	ctx.r10.s64 = ctx.r10.s64 + -28768;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FBCC"))) PPC_WEAK_FUNC(sub_8315FBCC);
PPC_FUNC_IMPL(__imp__sub_8315FBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FBD0"))) PPC_WEAK_FUNC(sub_8315FBD0);
PPC_FUNC_IMPL(__imp__sub_8315FBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-11232
	ctx.r11.s64 = ctx.r11.s64 + -11232;
	// addi r10,r10,-28752
	ctx.r10.s64 = ctx.r10.s64 + -28752;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FBEC"))) PPC_WEAK_FUNC(sub_8315FBEC);
PPC_FUNC_IMPL(__imp__sub_8315FBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FBF0"))) PPC_WEAK_FUNC(sub_8315FBF0);
PPC_FUNC_IMPL(__imp__sub_8315FBF0) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-13920
	ctx.r11.s64 = ctx.r11.s64 + -13920;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_8315FC14:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
	// li r5,1344
	ctx.r5.s64 = 1344;
	// stw r10,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a75988
	ctx.lr = 0x8315FC34;
	sub_82A75988(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1360
	ctx.r31.s64 = ctx.r31.s64 + 1360;
	// bge 0x8315fc14
	if (!ctx.cr0.lt) goto loc_8315FC14;
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

__attribute__((alias("__imp__sub_8315FC58"))) PPC_WEAK_FUNC(sub_8315FC58);
PPC_FUNC_IMPL(__imp__sub_8315FC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14240
	ctx.r11.s64 = ctx.r11.s64 + -14240;
	// addi r10,r10,-11184
	ctx.r10.s64 = ctx.r10.s64 + -11184;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FC74"))) PPC_WEAK_FUNC(sub_8315FC74);
PPC_FUNC_IMPL(__imp__sub_8315FC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FC78"))) PPC_WEAK_FUNC(sub_8315FC78);
PPC_FUNC_IMPL(__imp__sub_8315FC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14224
	ctx.r11.s64 = ctx.r11.s64 + -14224;
	// addi r10,r10,-11168
	ctx.r10.s64 = ctx.r10.s64 + -11168;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FC94"))) PPC_WEAK_FUNC(sub_8315FC94);
PPC_FUNC_IMPL(__imp__sub_8315FC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FC98"))) PPC_WEAK_FUNC(sub_8315FC98);
PPC_FUNC_IMPL(__imp__sub_8315FC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14176
	ctx.r11.s64 = ctx.r11.s64 + -14176;
	// addi r10,r10,-11152
	ctx.r10.s64 = ctx.r10.s64 + -11152;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FCB4"))) PPC_WEAK_FUNC(sub_8315FCB4);
PPC_FUNC_IMPL(__imp__sub_8315FCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FCB8"))) PPC_WEAK_FUNC(sub_8315FCB8);
PPC_FUNC_IMPL(__imp__sub_8315FCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14160
	ctx.r11.s64 = ctx.r11.s64 + -14160;
	// addi r10,r10,-11136
	ctx.r10.s64 = ctx.r10.s64 + -11136;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FCD4"))) PPC_WEAK_FUNC(sub_8315FCD4);
PPC_FUNC_IMPL(__imp__sub_8315FCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FCD8"))) PPC_WEAK_FUNC(sub_8315FCD8);
PPC_FUNC_IMPL(__imp__sub_8315FCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14144
	ctx.r11.s64 = ctx.r11.s64 + -14144;
	// addi r10,r10,-11120
	ctx.r10.s64 = ctx.r10.s64 + -11120;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FCF4"))) PPC_WEAK_FUNC(sub_8315FCF4);
PPC_FUNC_IMPL(__imp__sub_8315FCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FCF8"))) PPC_WEAK_FUNC(sub_8315FCF8);
PPC_FUNC_IMPL(__imp__sub_8315FCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14128
	ctx.r11.s64 = ctx.r11.s64 + -14128;
	// addi r10,r10,-11104
	ctx.r10.s64 = ctx.r10.s64 + -11104;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FD14"))) PPC_WEAK_FUNC(sub_8315FD14);
PPC_FUNC_IMPL(__imp__sub_8315FD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FD18"))) PPC_WEAK_FUNC(sub_8315FD18);
PPC_FUNC_IMPL(__imp__sub_8315FD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14112
	ctx.r11.s64 = ctx.r11.s64 + -14112;
	// addi r10,r10,-11088
	ctx.r10.s64 = ctx.r10.s64 + -11088;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FD34"))) PPC_WEAK_FUNC(sub_8315FD34);
PPC_FUNC_IMPL(__imp__sub_8315FD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FD38"))) PPC_WEAK_FUNC(sub_8315FD38);
PPC_FUNC_IMPL(__imp__sub_8315FD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14096
	ctx.r11.s64 = ctx.r11.s64 + -14096;
	// addi r10,r10,-11072
	ctx.r10.s64 = ctx.r10.s64 + -11072;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FD54"))) PPC_WEAK_FUNC(sub_8315FD54);
PPC_FUNC_IMPL(__imp__sub_8315FD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FD58"))) PPC_WEAK_FUNC(sub_8315FD58);
PPC_FUNC_IMPL(__imp__sub_8315FD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14080
	ctx.r11.s64 = ctx.r11.s64 + -14080;
	// addi r10,r10,-11056
	ctx.r10.s64 = ctx.r10.s64 + -11056;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FD74"))) PPC_WEAK_FUNC(sub_8315FD74);
PPC_FUNC_IMPL(__imp__sub_8315FD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FD78"))) PPC_WEAK_FUNC(sub_8315FD78);
PPC_FUNC_IMPL(__imp__sub_8315FD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14064
	ctx.r11.s64 = ctx.r11.s64 + -14064;
	// addi r10,r10,-11040
	ctx.r10.s64 = ctx.r10.s64 + -11040;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FD94"))) PPC_WEAK_FUNC(sub_8315FD94);
PPC_FUNC_IMPL(__imp__sub_8315FD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FD98"))) PPC_WEAK_FUNC(sub_8315FD98);
PPC_FUNC_IMPL(__imp__sub_8315FD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14048
	ctx.r11.s64 = ctx.r11.s64 + -14048;
	// addi r10,r10,-11024
	ctx.r10.s64 = ctx.r10.s64 + -11024;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FDB4"))) PPC_WEAK_FUNC(sub_8315FDB4);
PPC_FUNC_IMPL(__imp__sub_8315FDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FDB8"))) PPC_WEAK_FUNC(sub_8315FDB8);
PPC_FUNC_IMPL(__imp__sub_8315FDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14032
	ctx.r11.s64 = ctx.r11.s64 + -14032;
	// addi r10,r10,-11008
	ctx.r10.s64 = ctx.r10.s64 + -11008;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FDD4"))) PPC_WEAK_FUNC(sub_8315FDD4);
PPC_FUNC_IMPL(__imp__sub_8315FDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FDD8"))) PPC_WEAK_FUNC(sub_8315FDD8);
PPC_FUNC_IMPL(__imp__sub_8315FDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14016
	ctx.r11.s64 = ctx.r11.s64 + -14016;
	// addi r10,r10,-10992
	ctx.r10.s64 = ctx.r10.s64 + -10992;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FDF4"))) PPC_WEAK_FUNC(sub_8315FDF4);
PPC_FUNC_IMPL(__imp__sub_8315FDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FDF8"))) PPC_WEAK_FUNC(sub_8315FDF8);
PPC_FUNC_IMPL(__imp__sub_8315FDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-14000
	ctx.r11.s64 = ctx.r11.s64 + -14000;
	// addi r10,r10,-10976
	ctx.r10.s64 = ctx.r10.s64 + -10976;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FE14"))) PPC_WEAK_FUNC(sub_8315FE14);
PPC_FUNC_IMPL(__imp__sub_8315FE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FE18"))) PPC_WEAK_FUNC(sub_8315FE18);
PPC_FUNC_IMPL(__imp__sub_8315FE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13984
	ctx.r11.s64 = ctx.r11.s64 + -13984;
	// addi r10,r10,-10960
	ctx.r10.s64 = ctx.r10.s64 + -10960;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FE34"))) PPC_WEAK_FUNC(sub_8315FE34);
PPC_FUNC_IMPL(__imp__sub_8315FE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FE38"))) PPC_WEAK_FUNC(sub_8315FE38);
PPC_FUNC_IMPL(__imp__sub_8315FE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// vspltisw128 v63,3
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x3)));
	// addi r11,r11,-10944
	ctx.r11.s64 = ctx.r11.s64 + -10944;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FE4C"))) PPC_WEAK_FUNC(sub_8315FE4C);
PPC_FUNC_IMPL(__imp__sub_8315FE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FE50"))) PPC_WEAK_FUNC(sub_8315FE50);
PPC_FUNC_IMPL(__imp__sub_8315FE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13952
	ctx.r11.s64 = ctx.r11.s64 + -13952;
	// addi r10,r10,-10912
	ctx.r10.s64 = ctx.r10.s64 + -10912;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FE6C"))) PPC_WEAK_FUNC(sub_8315FE6C);
PPC_FUNC_IMPL(__imp__sub_8315FE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FE70"))) PPC_WEAK_FUNC(sub_8315FE70);
PPC_FUNC_IMPL(__imp__sub_8315FE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13936
	ctx.r11.s64 = ctx.r11.s64 + -13936;
	// addi r10,r10,-10896
	ctx.r10.s64 = ctx.r10.s64 + -10896;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FE8C"))) PPC_WEAK_FUNC(sub_8315FE8C);
PPC_FUNC_IMPL(__imp__sub_8315FE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FE90"))) PPC_WEAK_FUNC(sub_8315FE90);
PPC_FUNC_IMPL(__imp__sub_8315FE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13856
	ctx.r11.s64 = ctx.r11.s64 + -13856;
	// addi r10,r10,-10880
	ctx.r10.s64 = ctx.r10.s64 + -10880;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FEAC"))) PPC_WEAK_FUNC(sub_8315FEAC);
PPC_FUNC_IMPL(__imp__sub_8315FEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FEB0"))) PPC_WEAK_FUNC(sub_8315FEB0);
PPC_FUNC_IMPL(__imp__sub_8315FEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13840
	ctx.r11.s64 = ctx.r11.s64 + -13840;
	// addi r10,r10,-10864
	ctx.r10.s64 = ctx.r10.s64 + -10864;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FECC"))) PPC_WEAK_FUNC(sub_8315FECC);
PPC_FUNC_IMPL(__imp__sub_8315FECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FED0"))) PPC_WEAK_FUNC(sub_8315FED0);
PPC_FUNC_IMPL(__imp__sub_8315FED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13824
	ctx.r11.s64 = ctx.r11.s64 + -13824;
	// addi r10,r10,-10848
	ctx.r10.s64 = ctx.r10.s64 + -10848;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FEEC"))) PPC_WEAK_FUNC(sub_8315FEEC);
PPC_FUNC_IMPL(__imp__sub_8315FEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FEF0"))) PPC_WEAK_FUNC(sub_8315FEF0);
PPC_FUNC_IMPL(__imp__sub_8315FEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13808
	ctx.r11.s64 = ctx.r11.s64 + -13808;
	// addi r10,r10,-10832
	ctx.r10.s64 = ctx.r10.s64 + -10832;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FF0C"))) PPC_WEAK_FUNC(sub_8315FF0C);
PPC_FUNC_IMPL(__imp__sub_8315FF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FF10"))) PPC_WEAK_FUNC(sub_8315FF10);
PPC_FUNC_IMPL(__imp__sub_8315FF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13792
	ctx.r11.s64 = ctx.r11.s64 + -13792;
	// addi r10,r10,-10816
	ctx.r10.s64 = ctx.r10.s64 + -10816;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FF2C"))) PPC_WEAK_FUNC(sub_8315FF2C);
PPC_FUNC_IMPL(__imp__sub_8315FF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FF30"))) PPC_WEAK_FUNC(sub_8315FF30);
PPC_FUNC_IMPL(__imp__sub_8315FF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13776
	ctx.r11.s64 = ctx.r11.s64 + -13776;
	// addi r10,r10,-10800
	ctx.r10.s64 = ctx.r10.s64 + -10800;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FF4C"))) PPC_WEAK_FUNC(sub_8315FF4C);
PPC_FUNC_IMPL(__imp__sub_8315FF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FF50"))) PPC_WEAK_FUNC(sub_8315FF50);
PPC_FUNC_IMPL(__imp__sub_8315FF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13760
	ctx.r11.s64 = ctx.r11.s64 + -13760;
	// addi r10,r10,-10784
	ctx.r10.s64 = ctx.r10.s64 + -10784;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FF6C"))) PPC_WEAK_FUNC(sub_8315FF6C);
PPC_FUNC_IMPL(__imp__sub_8315FF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FF70"))) PPC_WEAK_FUNC(sub_8315FF70);
PPC_FUNC_IMPL(__imp__sub_8315FF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13744
	ctx.r11.s64 = ctx.r11.s64 + -13744;
	// addi r10,r10,-10768
	ctx.r10.s64 = ctx.r10.s64 + -10768;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FF8C"))) PPC_WEAK_FUNC(sub_8315FF8C);
PPC_FUNC_IMPL(__imp__sub_8315FF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FF90"))) PPC_WEAK_FUNC(sub_8315FF90);
PPC_FUNC_IMPL(__imp__sub_8315FF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13728
	ctx.r11.s64 = ctx.r11.s64 + -13728;
	// addi r10,r10,-10752
	ctx.r10.s64 = ctx.r10.s64 + -10752;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FFAC"))) PPC_WEAK_FUNC(sub_8315FFAC);
PPC_FUNC_IMPL(__imp__sub_8315FFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FFB0"))) PPC_WEAK_FUNC(sub_8315FFB0);
PPC_FUNC_IMPL(__imp__sub_8315FFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13712
	ctx.r11.s64 = ctx.r11.s64 + -13712;
	// addi r10,r10,-10736
	ctx.r10.s64 = ctx.r10.s64 + -10736;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FFCC"))) PPC_WEAK_FUNC(sub_8315FFCC);
PPC_FUNC_IMPL(__imp__sub_8315FFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FFD0"))) PPC_WEAK_FUNC(sub_8315FFD0);
PPC_FUNC_IMPL(__imp__sub_8315FFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13696
	ctx.r11.s64 = ctx.r11.s64 + -13696;
	// addi r10,r10,-10720
	ctx.r10.s64 = ctx.r10.s64 + -10720;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FFEC"))) PPC_WEAK_FUNC(sub_8315FFEC);
PPC_FUNC_IMPL(__imp__sub_8315FFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315FFF0"))) PPC_WEAK_FUNC(sub_8315FFF0);
PPC_FUNC_IMPL(__imp__sub_8315FFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13680
	ctx.r11.s64 = ctx.r11.s64 + -13680;
	// addi r10,r10,-10704
	ctx.r10.s64 = ctx.r10.s64 + -10704;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316000C"))) PPC_WEAK_FUNC(sub_8316000C);
PPC_FUNC_IMPL(__imp__sub_8316000C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160010"))) PPC_WEAK_FUNC(sub_83160010);
PPC_FUNC_IMPL(__imp__sub_83160010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13664
	ctx.r11.s64 = ctx.r11.s64 + -13664;
	// addi r10,r10,-10688
	ctx.r10.s64 = ctx.r10.s64 + -10688;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316002C"))) PPC_WEAK_FUNC(sub_8316002C);
PPC_FUNC_IMPL(__imp__sub_8316002C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160030"))) PPC_WEAK_FUNC(sub_83160030);
PPC_FUNC_IMPL(__imp__sub_83160030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13648
	ctx.r11.s64 = ctx.r11.s64 + -13648;
	// addi r10,r10,-10672
	ctx.r10.s64 = ctx.r10.s64 + -10672;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316004C"))) PPC_WEAK_FUNC(sub_8316004C);
PPC_FUNC_IMPL(__imp__sub_8316004C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160050"))) PPC_WEAK_FUNC(sub_83160050);
PPC_FUNC_IMPL(__imp__sub_83160050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// vspltisw128 v63,3
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x3)));
	// addi r11,r11,-10656
	ctx.r11.s64 = ctx.r11.s64 + -10656;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160064"))) PPC_WEAK_FUNC(sub_83160064);
PPC_FUNC_IMPL(__imp__sub_83160064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160068"))) PPC_WEAK_FUNC(sub_83160068);
PPC_FUNC_IMPL(__imp__sub_83160068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13616
	ctx.r11.s64 = ctx.r11.s64 + -13616;
	// addi r10,r10,-10640
	ctx.r10.s64 = ctx.r10.s64 + -10640;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160084"))) PPC_WEAK_FUNC(sub_83160084);
PPC_FUNC_IMPL(__imp__sub_83160084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160088"))) PPC_WEAK_FUNC(sub_83160088);
PPC_FUNC_IMPL(__imp__sub_83160088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13600
	ctx.r11.s64 = ctx.r11.s64 + -13600;
	// addi r10,r10,-10624
	ctx.r10.s64 = ctx.r10.s64 + -10624;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831600A4"))) PPC_WEAK_FUNC(sub_831600A4);
PPC_FUNC_IMPL(__imp__sub_831600A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831600A8"))) PPC_WEAK_FUNC(sub_831600A8);
PPC_FUNC_IMPL(__imp__sub_831600A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13584
	ctx.r11.s64 = ctx.r11.s64 + -13584;
	// addi r10,r10,-10608
	ctx.r10.s64 = ctx.r10.s64 + -10608;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831600C4"))) PPC_WEAK_FUNC(sub_831600C4);
PPC_FUNC_IMPL(__imp__sub_831600C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831600C8"))) PPC_WEAK_FUNC(sub_831600C8);
PPC_FUNC_IMPL(__imp__sub_831600C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13568
	ctx.r11.s64 = ctx.r11.s64 + -13568;
	// addi r10,r10,-10592
	ctx.r10.s64 = ctx.r10.s64 + -10592;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831600E4"))) PPC_WEAK_FUNC(sub_831600E4);
PPC_FUNC_IMPL(__imp__sub_831600E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831600E8"))) PPC_WEAK_FUNC(sub_831600E8);
PPC_FUNC_IMPL(__imp__sub_831600E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13552
	ctx.r11.s64 = ctx.r11.s64 + -13552;
	// addi r10,r10,-10576
	ctx.r10.s64 = ctx.r10.s64 + -10576;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160104"))) PPC_WEAK_FUNC(sub_83160104);
PPC_FUNC_IMPL(__imp__sub_83160104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160108"))) PPC_WEAK_FUNC(sub_83160108);
PPC_FUNC_IMPL(__imp__sub_83160108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13536
	ctx.r11.s64 = ctx.r11.s64 + -13536;
	// addi r10,r10,-10560
	ctx.r10.s64 = ctx.r10.s64 + -10560;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160124"))) PPC_WEAK_FUNC(sub_83160124);
PPC_FUNC_IMPL(__imp__sub_83160124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160128"))) PPC_WEAK_FUNC(sub_83160128);
PPC_FUNC_IMPL(__imp__sub_83160128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13504
	ctx.r11.s64 = ctx.r11.s64 + -13504;
	// addi r10,r10,-10544
	ctx.r10.s64 = ctx.r10.s64 + -10544;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160144"))) PPC_WEAK_FUNC(sub_83160144);
PPC_FUNC_IMPL(__imp__sub_83160144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160148"))) PPC_WEAK_FUNC(sub_83160148);
PPC_FUNC_IMPL(__imp__sub_83160148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13488
	ctx.r11.s64 = ctx.r11.s64 + -13488;
	// addi r10,r10,-10528
	ctx.r10.s64 = ctx.r10.s64 + -10528;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160164"))) PPC_WEAK_FUNC(sub_83160164);
PPC_FUNC_IMPL(__imp__sub_83160164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160168"))) PPC_WEAK_FUNC(sub_83160168);
PPC_FUNC_IMPL(__imp__sub_83160168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13440
	ctx.r11.s64 = ctx.r11.s64 + -13440;
	// addi r10,r10,-10512
	ctx.r10.s64 = ctx.r10.s64 + -10512;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160184"))) PPC_WEAK_FUNC(sub_83160184);
PPC_FUNC_IMPL(__imp__sub_83160184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160188"))) PPC_WEAK_FUNC(sub_83160188);
PPC_FUNC_IMPL(__imp__sub_83160188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13424
	ctx.r11.s64 = ctx.r11.s64 + -13424;
	// addi r10,r10,-10496
	ctx.r10.s64 = ctx.r10.s64 + -10496;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831601A4"))) PPC_WEAK_FUNC(sub_831601A4);
PPC_FUNC_IMPL(__imp__sub_831601A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831601A8"))) PPC_WEAK_FUNC(sub_831601A8);
PPC_FUNC_IMPL(__imp__sub_831601A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13408
	ctx.r11.s64 = ctx.r11.s64 + -13408;
	// addi r10,r10,-10480
	ctx.r10.s64 = ctx.r10.s64 + -10480;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831601C4"))) PPC_WEAK_FUNC(sub_831601C4);
PPC_FUNC_IMPL(__imp__sub_831601C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831601C8"))) PPC_WEAK_FUNC(sub_831601C8);
PPC_FUNC_IMPL(__imp__sub_831601C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13392
	ctx.r11.s64 = ctx.r11.s64 + -13392;
	// addi r10,r10,-10464
	ctx.r10.s64 = ctx.r10.s64 + -10464;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831601E4"))) PPC_WEAK_FUNC(sub_831601E4);
PPC_FUNC_IMPL(__imp__sub_831601E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831601E8"))) PPC_WEAK_FUNC(sub_831601E8);
PPC_FUNC_IMPL(__imp__sub_831601E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13376
	ctx.r11.s64 = ctx.r11.s64 + -13376;
	// addi r10,r10,-10448
	ctx.r10.s64 = ctx.r10.s64 + -10448;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160204"))) PPC_WEAK_FUNC(sub_83160204);
PPC_FUNC_IMPL(__imp__sub_83160204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160208"))) PPC_WEAK_FUNC(sub_83160208);
PPC_FUNC_IMPL(__imp__sub_83160208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13360
	ctx.r11.s64 = ctx.r11.s64 + -13360;
	// addi r10,r10,-10432
	ctx.r10.s64 = ctx.r10.s64 + -10432;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160224"))) PPC_WEAK_FUNC(sub_83160224);
PPC_FUNC_IMPL(__imp__sub_83160224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160228"))) PPC_WEAK_FUNC(sub_83160228);
PPC_FUNC_IMPL(__imp__sub_83160228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13344
	ctx.r11.s64 = ctx.r11.s64 + -13344;
	// addi r10,r10,-10416
	ctx.r10.s64 = ctx.r10.s64 + -10416;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160244"))) PPC_WEAK_FUNC(sub_83160244);
PPC_FUNC_IMPL(__imp__sub_83160244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160248"))) PPC_WEAK_FUNC(sub_83160248);
PPC_FUNC_IMPL(__imp__sub_83160248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13328
	ctx.r11.s64 = ctx.r11.s64 + -13328;
	// addi r10,r10,-10400
	ctx.r10.s64 = ctx.r10.s64 + -10400;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160264"))) PPC_WEAK_FUNC(sub_83160264);
PPC_FUNC_IMPL(__imp__sub_83160264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160268"))) PPC_WEAK_FUNC(sub_83160268);
PPC_FUNC_IMPL(__imp__sub_83160268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13312
	ctx.r11.s64 = ctx.r11.s64 + -13312;
	// addi r10,r10,-10384
	ctx.r10.s64 = ctx.r10.s64 + -10384;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160284"))) PPC_WEAK_FUNC(sub_83160284);
PPC_FUNC_IMPL(__imp__sub_83160284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160288"))) PPC_WEAK_FUNC(sub_83160288);
PPC_FUNC_IMPL(__imp__sub_83160288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13296
	ctx.r11.s64 = ctx.r11.s64 + -13296;
	// addi r10,r10,-10368
	ctx.r10.s64 = ctx.r10.s64 + -10368;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831602A4"))) PPC_WEAK_FUNC(sub_831602A4);
PPC_FUNC_IMPL(__imp__sub_831602A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831602A8"))) PPC_WEAK_FUNC(sub_831602A8);
PPC_FUNC_IMPL(__imp__sub_831602A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13280
	ctx.r11.s64 = ctx.r11.s64 + -13280;
	// addi r10,r10,-10352
	ctx.r10.s64 = ctx.r10.s64 + -10352;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831602C4"))) PPC_WEAK_FUNC(sub_831602C4);
PPC_FUNC_IMPL(__imp__sub_831602C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831602C8"))) PPC_WEAK_FUNC(sub_831602C8);
PPC_FUNC_IMPL(__imp__sub_831602C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13264
	ctx.r11.s64 = ctx.r11.s64 + -13264;
	// addi r10,r10,-10336
	ctx.r10.s64 = ctx.r10.s64 + -10336;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831602E4"))) PPC_WEAK_FUNC(sub_831602E4);
PPC_FUNC_IMPL(__imp__sub_831602E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831602E8"))) PPC_WEAK_FUNC(sub_831602E8);
PPC_FUNC_IMPL(__imp__sub_831602E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-13248
	ctx.r11.s64 = ctx.r11.s64 + -13248;
	// addi r10,r10,-10320
	ctx.r10.s64 = ctx.r10.s64 + -10320;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160304"))) PPC_WEAK_FUNC(sub_83160304);
PPC_FUNC_IMPL(__imp__sub_83160304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160308"))) PPC_WEAK_FUNC(sub_83160308);
PPC_FUNC_IMPL(__imp__sub_83160308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// vspltisw128 v63,3
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x3)));
	// addi r11,r11,-10304
	ctx.r11.s64 = ctx.r11.s64 + -10304;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316031C"))) PPC_WEAK_FUNC(sub_8316031C);
PPC_FUNC_IMPL(__imp__sub_8316031C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160320"))) PPC_WEAK_FUNC(sub_83160320);
PPC_FUNC_IMPL(__imp__sub_83160320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// lis r8,-31975
	ctx.r8.s64 = -2095513600;
	// lis r7,-31975
	ctx.r7.s64 = -2095513600;
	// lis r6,-31962
	ctx.r6.s64 = -2094661632;
	// addi r11,r11,-11140
	ctx.r11.s64 = ctx.r11.s64 + -11140;
	// addi r10,r10,-11124
	ctx.r10.s64 = ctx.r10.s64 + -11124;
	// addi r9,r9,-11108
	ctx.r9.s64 = ctx.r9.s64 + -11108;
	// addi r8,r8,-11092
	ctx.r8.s64 = ctx.r8.s64 + -11092;
	// addi r7,r7,-11076
	ctx.r7.s64 = ctx.r7.s64 + -11076;
	// addi r5,r6,-10256
	ctx.r5.s64 = ctx.r6.s64 + -10256;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,-10256(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + -10256, temp.u32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f11,12(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// stfs f10,16(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316037C"))) PPC_WEAK_FUNC(sub_8316037C);
PPC_FUNC_IMPL(__imp__sub_8316037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160380"))) PPC_WEAK_FUNC(sub_83160380);
PPC_FUNC_IMPL(__imp__sub_83160380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// lis r8,-31975
	ctx.r8.s64 = -2095513600;
	// addi r11,r11,-11060
	ctx.r11.s64 = ctx.r11.s64 + -11060;
	// addi r10,r10,-11044
	ctx.r10.s64 = ctx.r10.s64 + -11044;
	// addi r9,r9,-11028
	ctx.r9.s64 = ctx.r9.s64 + -11028;
	// addi r8,r8,-11012
	ctx.r8.s64 = ctx.r8.s64 + -11012;
	// lis r7,-31962
	ctx.r7.s64 = -2094661632;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r6,r7,-10236
	ctx.r6.s64 = ctx.r7.s64 + -10236;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,-10236(r7)
	PPC_STORE_U32(ctx.r7.u32 + -10236, ctx.r11.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831603CC"))) PPC_WEAK_FUNC(sub_831603CC);
PPC_FUNC_IMPL(__imp__sub_831603CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831603D0"))) PPC_WEAK_FUNC(sub_831603D0);
PPC_FUNC_IMPL(__imp__sub_831603D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,-10996
	ctx.r11.s64 = ctx.r11.s64 + -10996;
	// addi r10,r10,-10980
	ctx.r10.s64 = ctx.r10.s64 + -10980;
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// lis r8,-31975
	ctx.r8.s64 = -2095513600;
	// lis r7,-31975
	ctx.r7.s64 = -2095513600;
	// lis r6,-31962
	ctx.r6.s64 = -2094661632;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,-10964
	ctx.r9.s64 = ctx.r9.s64 + -10964;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r8,-10948
	ctx.r8.s64 = ctx.r8.s64 + -10948;
	// addi r7,r7,-10932
	ctx.r7.s64 = ctx.r7.s64 + -10932;
	// addi r5,r6,-10220
	ctx.r5.s64 = ctx.r6.s64 + -10220;
	// stw r11,-10220(r6)
	PPC_STORE_U32(ctx.r6.u32 + -10220, ctx.r11.u32);
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stfs f13,12(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// stfs f12,16(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316042C"))) PPC_WEAK_FUNC(sub_8316042C);
PPC_FUNC_IMPL(__imp__sub_8316042C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160430"))) PPC_WEAK_FUNC(sub_83160430);
PPC_FUNC_IMPL(__imp__sub_83160430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// vspltish v0,3
	_mm_store_si128((__m128i*)ctx.v0.s16, _mm_set1_epi16(short(3)));
	// addi r11,r11,-10144
	ctx.r11.s64 = ctx.r11.s64 + -10144;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160444"))) PPC_WEAK_FUNC(sub_83160444);
PPC_FUNC_IMPL(__imp__sub_83160444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160448"))) PPC_WEAK_FUNC(sub_83160448);
PPC_FUNC_IMPL(__imp__sub_83160448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// vspltish v0,7
	_mm_store_si128((__m128i*)ctx.v0.s16, _mm_set1_epi16(short(7)));
	// addi r11,r11,-10128
	ctx.r11.s64 = ctx.r11.s64 + -10128;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316045C"))) PPC_WEAK_FUNC(sub_8316045C);
PPC_FUNC_IMPL(__imp__sub_8316045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160460"))) PPC_WEAK_FUNC(sub_83160460);
PPC_FUNC_IMPL(__imp__sub_83160460) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-10816
	ctx.r11.s64 = ctx.r11.s64 + -10816;
	// addi r10,r10,-10832
	ctx.r10.s64 = ctx.r10.s64 + -10832;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lvx128 v62,r0,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// addi r9,r9,-10864
	ctx.r9.s64 = ctx.r9.s64 + -10864;
	// addi r8,r8,-10880
	ctx.r8.s64 = ctx.r8.s64 + -10880;
	// addi r6,r6,-10912
	ctx.r6.s64 = ctx.r6.s64 + -10912;
	// addi r11,r5,-10848
	ctx.r11.s64 = ctx.r5.s64 + -10848;
	// addi r7,r7,-10896
	ctx.r7.s64 = ctx.r7.s64 + -10896;
	// addi r10,r4,-10928
	ctx.r10.s64 = ctx.r4.s64 + -10928;
	// lvx128 v61,r0,r9
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// lvx128 v60,r0,r8
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r31,-32248
	ctx.r31.s64 = -2113404928;
	// lvx128 v58,r0,r6
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lis r30,-31962
	ctx.r30.s64 = -2094661632;
	// lvx128 v57,r0,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r0,r7
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r9,r3,-10944
	ctx.r9.s64 = ctx.r3.s64 + -10944;
	// lvx128 v56,r0,r10
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r7,r30,-10112
	ctx.r7.s64 = ctx.r30.s64 + -10112;
	// addi r8,r31,-10960
	ctx.r8.s64 = ctx.r31.s64 + -10960;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v55,r0,r9
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r9,64
	ctx.r9.s64 = 64;
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v54,r0,r8
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r8,80
	ctx.r8.s64 = 80;
	// stvx128 v62,r7,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,96
	ctx.r5.s64 = 96;
	// stvx128 v61,r7,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,112
	ctx.r6.s64 = 112;
	// stvx128 v60,r7,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,128
	ctx.r11.s64 = 128;
	// li r10,144
	ctx.r10.s64 = 144;
	// stvx128 v59,r7,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r7,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r7,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r7,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r7,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r7,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

