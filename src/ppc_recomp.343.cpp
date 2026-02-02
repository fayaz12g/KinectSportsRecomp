#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83170580"))) PPC_WEAK_FUNC(sub_83170580);
PPC_FUNC_IMPL(__imp__sub_83170580) {
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
	// addi r7,r10,32368
	ctx.r7.s64 = ctx.r10.s64 + 32368;
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,13904
	ctx.r4.s64 = ctx.r9.s64 + 13904;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,20048
	ctx.r3.s64 = ctx.r8.s64 + 20048;
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
	ctx.lr = 0x831705E0;
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

__attribute__((alias("__imp__sub_831705F0"))) PPC_WEAK_FUNC(sub_831705F0);
PPC_FUNC_IMPL(__imp__sub_831705F0) {
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
	// addi r7,r10,32608
	ctx.r7.s64 = ctx.r10.s64 + 32608;
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,13904
	ctx.r4.s64 = ctx.r9.s64 + 13904;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,20096
	ctx.r3.s64 = ctx.r8.s64 + 20096;
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
	ctx.lr = 0x83170650;
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

__attribute__((alias("__imp__sub_83170660"))) PPC_WEAK_FUNC(sub_83170660);
PPC_FUNC_IMPL(__imp__sub_83170660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r9,r10,-9872
	ctx.r9.s64 = ctx.r10.s64 + -9872;
	// lwz r11,-9888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9888);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317067C"))) PPC_WEAK_FUNC(sub_8317067C);
PPC_FUNC_IMPL(__imp__sub_8317067C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170680"))) PPC_WEAK_FUNC(sub_83170680);
PPC_FUNC_IMPL(__imp__sub_83170680) {
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
	// addi r6,r10,-9872
	ctx.r6.s64 = ctx.r10.s64 + -9872;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,15184
	ctx.r4.s64 = ctx.r8.s64 + 15184;
	// addi r3,r7,20144
	ctx.r3.s64 = ctx.r7.s64 + 20144;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,-32320
	ctx.r9.s64 = ctx.r9.s64 + -32320;
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
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x831706E4;
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

__attribute__((alias("__imp__sub_831706F4"))) PPC_WEAK_FUNC(sub_831706F4);
PPC_FUNC_IMPL(__imp__sub_831706F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831706F8"))) PPC_WEAK_FUNC(sub_831706F8);
PPC_FUNC_IMPL(__imp__sub_831706F8) {
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
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-32260
	ctx.r7.s64 = ctx.r10.s64 + -32260;
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
	// addi r3,r8,20192
	ctx.r3.s64 = ctx.r8.s64 + 20192;
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
	ctx.lr = 0x83170758;
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

__attribute__((alias("__imp__sub_83170768"))) PPC_WEAK_FUNC(sub_83170768);
PPC_FUNC_IMPL(__imp__sub_83170768) {
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
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-32208
	ctx.r7.s64 = ctx.r10.s64 + -32208;
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,14012
	ctx.r4.s64 = ctx.r9.s64 + 14012;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,20240
	ctx.r3.s64 = ctx.r8.s64 + 20240;
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
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x831707C8;
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

__attribute__((alias("__imp__sub_831707D8"))) PPC_WEAK_FUNC(sub_831707D8);
PPC_FUNC_IMPL(__imp__sub_831707D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-29624
	ctx.r3.s64 = ctx.r11.s64 + -29624;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831707E4"))) PPC_WEAK_FUNC(sub_831707E4);
PPC_FUNC_IMPL(__imp__sub_831707E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831707E8"))) PPC_WEAK_FUNC(sub_831707E8);
PPC_FUNC_IMPL(__imp__sub_831707E8) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r11,r11,-8132
	ctx.r11.s64 = ctx.r11.s64 + -8132;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x831791c4
	ctx.lr = 0x83170804;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-29568
	ctx.r3.s64 = ctx.r11.s64 + -29568;
	// bl 0x82fa2318
	ctx.lr = 0x83170810;
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

__attribute__((alias("__imp__sub_83170820"))) PPC_WEAK_FUNC(sub_83170820);
PPC_FUNC_IMPL(__imp__sub_83170820) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,20360
	ctx.r3.s64 = ctx.r11.s64 + 20360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830e7f48
	ctx.lr = 0x83170840;
	sub_830E7F48(ctx, base);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-29544
	ctx.r3.s64 = ctx.r11.s64 + -29544;
	// bl 0x82fa2318
	ctx.lr = 0x8317084C;
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

__attribute__((alias("__imp__sub_8317085C"))) PPC_WEAK_FUNC(sub_8317085C);
PPC_FUNC_IMPL(__imp__sub_8317085C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170860"))) PPC_WEAK_FUNC(sub_83170860);
PPC_FUNC_IMPL(__imp__sub_83170860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,6116
	ctx.r3.s64 = ctx.r11.s64 + 6116;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170874"))) PPC_WEAK_FUNC(sub_83170874);
PPC_FUNC_IMPL(__imp__sub_83170874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170878"))) PPC_WEAK_FUNC(sub_83170878);
PPC_FUNC_IMPL(__imp__sub_83170878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,6088
	ctx.r3.s64 = ctx.r11.s64 + 6088;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317088C"))) PPC_WEAK_FUNC(sub_8317088C);
PPC_FUNC_IMPL(__imp__sub_8317088C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170890"))) PPC_WEAK_FUNC(sub_83170890);
PPC_FUNC_IMPL(__imp__sub_83170890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,5800
	ctx.r3.s64 = ctx.r11.s64 + 5800;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831708A4"))) PPC_WEAK_FUNC(sub_831708A4);
PPC_FUNC_IMPL(__imp__sub_831708A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831708A8"))) PPC_WEAK_FUNC(sub_831708A8);
PPC_FUNC_IMPL(__imp__sub_831708A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,5828
	ctx.r3.s64 = ctx.r11.s64 + 5828;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831708BC"))) PPC_WEAK_FUNC(sub_831708BC);
PPC_FUNC_IMPL(__imp__sub_831708BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831708C0"))) PPC_WEAK_FUNC(sub_831708C0);
PPC_FUNC_IMPL(__imp__sub_831708C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,5940
	ctx.r3.s64 = ctx.r11.s64 + 5940;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831708D4"))) PPC_WEAK_FUNC(sub_831708D4);
PPC_FUNC_IMPL(__imp__sub_831708D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831708D8"))) PPC_WEAK_FUNC(sub_831708D8);
PPC_FUNC_IMPL(__imp__sub_831708D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,6032
	ctx.r3.s64 = ctx.r11.s64 + 6032;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831708EC"))) PPC_WEAK_FUNC(sub_831708EC);
PPC_FUNC_IMPL(__imp__sub_831708EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831708F0"))) PPC_WEAK_FUNC(sub_831708F0);
PPC_FUNC_IMPL(__imp__sub_831708F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,6144
	ctx.r3.s64 = ctx.r11.s64 + 6144;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170904"))) PPC_WEAK_FUNC(sub_83170904);
PPC_FUNC_IMPL(__imp__sub_83170904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170908"))) PPC_WEAK_FUNC(sub_83170908);
PPC_FUNC_IMPL(__imp__sub_83170908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,6172
	ctx.r3.s64 = ctx.r11.s64 + 6172;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317091C"))) PPC_WEAK_FUNC(sub_8317091C);
PPC_FUNC_IMPL(__imp__sub_8317091C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170920"))) PPC_WEAK_FUNC(sub_83170920);
PPC_FUNC_IMPL(__imp__sub_83170920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,5912
	ctx.r3.s64 = ctx.r11.s64 + 5912;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170934"))) PPC_WEAK_FUNC(sub_83170934);
PPC_FUNC_IMPL(__imp__sub_83170934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170938"))) PPC_WEAK_FUNC(sub_83170938);
PPC_FUNC_IMPL(__imp__sub_83170938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,5856
	ctx.r3.s64 = ctx.r11.s64 + 5856;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317094C"))) PPC_WEAK_FUNC(sub_8317094C);
PPC_FUNC_IMPL(__imp__sub_8317094C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170950"))) PPC_WEAK_FUNC(sub_83170950);
PPC_FUNC_IMPL(__imp__sub_83170950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,5996
	ctx.r3.s64 = ctx.r11.s64 + 5996;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170964"))) PPC_WEAK_FUNC(sub_83170964);
PPC_FUNC_IMPL(__imp__sub_83170964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170968"))) PPC_WEAK_FUNC(sub_83170968);
PPC_FUNC_IMPL(__imp__sub_83170968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,5884
	ctx.r3.s64 = ctx.r11.s64 + 5884;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317097C"))) PPC_WEAK_FUNC(sub_8317097C);
PPC_FUNC_IMPL(__imp__sub_8317097C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170980"))) PPC_WEAK_FUNC(sub_83170980);
PPC_FUNC_IMPL(__imp__sub_83170980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,6204
	ctx.r3.s64 = ctx.r11.s64 + 6204;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170994"))) PPC_WEAK_FUNC(sub_83170994);
PPC_FUNC_IMPL(__imp__sub_83170994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170998"))) PPC_WEAK_FUNC(sub_83170998);
PPC_FUNC_IMPL(__imp__sub_83170998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,6060
	ctx.r3.s64 = ctx.r11.s64 + 6060;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831709AC"))) PPC_WEAK_FUNC(sub_831709AC);
PPC_FUNC_IMPL(__imp__sub_831709AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831709B0"))) PPC_WEAK_FUNC(sub_831709B0);
PPC_FUNC_IMPL(__imp__sub_831709B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,5968
	ctx.r3.s64 = ctx.r11.s64 + 5968;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831709C4"))) PPC_WEAK_FUNC(sub_831709C4);
PPC_FUNC_IMPL(__imp__sub_831709C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831709C8"))) PPC_WEAK_FUNC(sub_831709C8);
PPC_FUNC_IMPL(__imp__sub_831709C8) {
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
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// lwz r3,6232(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831709f0
	if (ctx.cr6.eq) goto loc_831709F0;
	// bl 0x82691540
	ctx.lr = 0x831709F0;
	sub_82691540(ctx, base);
loc_831709F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_83170A1C"))) PPC_WEAK_FUNC(sub_83170A1C);
PPC_FUNC_IMPL(__imp__sub_83170A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170A20"))) PPC_WEAK_FUNC(sub_83170A20);
PPC_FUNC_IMPL(__imp__sub_83170A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4432
	ctx.r3.s64 = ctx.r11.s64 + -4432;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170A34"))) PPC_WEAK_FUNC(sub_83170A34);
PPC_FUNC_IMPL(__imp__sub_83170A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170A38"))) PPC_WEAK_FUNC(sub_83170A38);
PPC_FUNC_IMPL(__imp__sub_83170A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4460
	ctx.r3.s64 = ctx.r11.s64 + -4460;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170A4C"))) PPC_WEAK_FUNC(sub_83170A4C);
PPC_FUNC_IMPL(__imp__sub_83170A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170A50"))) PPC_WEAK_FUNC(sub_83170A50);
PPC_FUNC_IMPL(__imp__sub_83170A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4488
	ctx.r3.s64 = ctx.r11.s64 + -4488;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170A64"))) PPC_WEAK_FUNC(sub_83170A64);
PPC_FUNC_IMPL(__imp__sub_83170A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170A68"))) PPC_WEAK_FUNC(sub_83170A68);
PPC_FUNC_IMPL(__imp__sub_83170A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4516
	ctx.r3.s64 = ctx.r11.s64 + -4516;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170A7C"))) PPC_WEAK_FUNC(sub_83170A7C);
PPC_FUNC_IMPL(__imp__sub_83170A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170A80"))) PPC_WEAK_FUNC(sub_83170A80);
PPC_FUNC_IMPL(__imp__sub_83170A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-4544
	ctx.r3.s64 = ctx.r11.s64 + -4544;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170A94"))) PPC_WEAK_FUNC(sub_83170A94);
PPC_FUNC_IMPL(__imp__sub_83170A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170A98"))) PPC_WEAK_FUNC(sub_83170A98);
PPC_FUNC_IMPL(__imp__sub_83170A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,6264
	ctx.r3.s64 = ctx.r11.s64 + 6264;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170AAC"))) PPC_WEAK_FUNC(sub_83170AAC);
PPC_FUNC_IMPL(__imp__sub_83170AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170AB0"))) PPC_WEAK_FUNC(sub_83170AB0);
PPC_FUNC_IMPL(__imp__sub_83170AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r9,-27980
	ctx.r10.s64 = ctx.r9.s64 + -27980;
	// addi r11,r11,32200
	ctx.r11.s64 = ctx.r11.s64 + 32200;
	// addi r3,r10,292
	ctx.r3.s64 = ctx.r10.s64 + 292;
	// stw r11,-27980(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27980, ctx.r11.u32);
	// b 0x82243198
	sub_82243198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170ACC"))) PPC_WEAK_FUNC(sub_83170ACC);
PPC_FUNC_IMPL(__imp__sub_83170ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170AD0"))) PPC_WEAK_FUNC(sub_83170AD0);
PPC_FUNC_IMPL(__imp__sub_83170AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,6292
	ctx.r3.s64 = ctx.r11.s64 + 6292;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170AE4"))) PPC_WEAK_FUNC(sub_83170AE4);
PPC_FUNC_IMPL(__imp__sub_83170AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170AE8"))) PPC_WEAK_FUNC(sub_83170AE8);
PPC_FUNC_IMPL(__imp__sub_83170AE8) {
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
	ctx.lr = 0x83170AFC;
	sub_8254DC90(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,6416
	ctx.r31.s64 = ctx.r11.s64 + 6416;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8254ddd0
	ctx.lr = 0x83170B0C;
	sub_8254DDD0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822402c8
	ctx.lr = 0x83170B1C;
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

__attribute__((alias("__imp__sub_83170B30"))) PPC_WEAK_FUNC(sub_83170B30);
PPC_FUNC_IMPL(__imp__sub_83170B30) {
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
	// addi r31,r30,6472
	ctx.r31.s64 = ctx.r30.s64 + 6472;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x822402c8
	ctx.lr = 0x83170B5C;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82249190
	ctx.lr = 0x83170B64;
	sub_82249190(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,6472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6472, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83170B94"))) PPC_WEAK_FUNC(sub_83170B94);
PPC_FUNC_IMPL(__imp__sub_83170B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170B98"))) PPC_WEAK_FUNC(sub_83170B98);
PPC_FUNC_IMPL(__imp__sub_83170B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,6544
	ctx.r3.s64 = ctx.r11.s64 + 6544;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170BA4"))) PPC_WEAK_FUNC(sub_83170BA4);
PPC_FUNC_IMPL(__imp__sub_83170BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170BA8"))) PPC_WEAK_FUNC(sub_83170BA8);
PPC_FUNC_IMPL(__imp__sub_83170BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,6632
	ctx.r3.s64 = ctx.r11.s64 + 6632;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170BB4"))) PPC_WEAK_FUNC(sub_83170BB4);
PPC_FUNC_IMPL(__imp__sub_83170BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170BB8"))) PPC_WEAK_FUNC(sub_83170BB8);
PPC_FUNC_IMPL(__imp__sub_83170BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,6720
	ctx.r3.s64 = ctx.r11.s64 + 6720;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170BC4"))) PPC_WEAK_FUNC(sub_83170BC4);
PPC_FUNC_IMPL(__imp__sub_83170BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170BC8"))) PPC_WEAK_FUNC(sub_83170BC8);
PPC_FUNC_IMPL(__imp__sub_83170BC8) {
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
	// addi r31,r11,6808
	ctx.r31.s64 = ctx.r11.s64 + 6808;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83170BEC;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83170BF8;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83170C00;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83170C10;
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

__attribute__((alias("__imp__sub_83170C28"))) PPC_WEAK_FUNC(sub_83170C28);
PPC_FUNC_IMPL(__imp__sub_83170C28) {
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
	// addi r31,r11,6896
	ctx.r31.s64 = ctx.r11.s64 + 6896;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83170C4C;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83170C58;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83170C60;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83170C70;
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

__attribute__((alias("__imp__sub_83170C88"))) PPC_WEAK_FUNC(sub_83170C88);
PPC_FUNC_IMPL(__imp__sub_83170C88) {
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
	// addi r31,r11,6984
	ctx.r31.s64 = ctx.r11.s64 + 6984;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83170CAC;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83170CB8;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83170CC0;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83170CD0;
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

__attribute__((alias("__imp__sub_83170CE8"))) PPC_WEAK_FUNC(sub_83170CE8);
PPC_FUNC_IMPL(__imp__sub_83170CE8) {
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
	// addi r31,r11,7072
	ctx.r31.s64 = ctx.r11.s64 + 7072;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83170D0C;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83170D18;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83170D20;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83170D30;
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

__attribute__((alias("__imp__sub_83170D48"))) PPC_WEAK_FUNC(sub_83170D48);
PPC_FUNC_IMPL(__imp__sub_83170D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,7160
	ctx.r3.s64 = ctx.r11.s64 + 7160;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170D5C"))) PPC_WEAK_FUNC(sub_83170D5C);
PPC_FUNC_IMPL(__imp__sub_83170D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170D60"))) PPC_WEAK_FUNC(sub_83170D60);
PPC_FUNC_IMPL(__imp__sub_83170D60) {
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
	ctx.lr = 0x83170D74;
	sub_8254DC90(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,7188
	ctx.r31.s64 = ctx.r11.s64 + 7188;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8254ddd0
	ctx.lr = 0x83170D84;
	sub_8254DDD0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822402c8
	ctx.lr = 0x83170D94;
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

__attribute__((alias("__imp__sub_83170DA8"))) PPC_WEAK_FUNC(sub_83170DA8);
PPC_FUNC_IMPL(__imp__sub_83170DA8) {
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
	// addi r31,r30,7344
	ctx.r31.s64 = ctx.r30.s64 + 7344;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x822402c8
	ctx.lr = 0x83170DD4;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82249190
	ctx.lr = 0x83170DDC;
	sub_82249190(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,7344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7344, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83170E0C"))) PPC_WEAK_FUNC(sub_83170E0C);
PPC_FUNC_IMPL(__imp__sub_83170E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170E10"))) PPC_WEAK_FUNC(sub_83170E10);
PPC_FUNC_IMPL(__imp__sub_83170E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,7416
	ctx.r3.s64 = ctx.r11.s64 + 7416;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170E1C"))) PPC_WEAK_FUNC(sub_83170E1C);
PPC_FUNC_IMPL(__imp__sub_83170E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170E20"))) PPC_WEAK_FUNC(sub_83170E20);
PPC_FUNC_IMPL(__imp__sub_83170E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,7504
	ctx.r3.s64 = ctx.r11.s64 + 7504;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170E2C"))) PPC_WEAK_FUNC(sub_83170E2C);
PPC_FUNC_IMPL(__imp__sub_83170E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170E30"))) PPC_WEAK_FUNC(sub_83170E30);
PPC_FUNC_IMPL(__imp__sub_83170E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,7592
	ctx.r3.s64 = ctx.r11.s64 + 7592;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170E3C"))) PPC_WEAK_FUNC(sub_83170E3C);
PPC_FUNC_IMPL(__imp__sub_83170E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170E40"))) PPC_WEAK_FUNC(sub_83170E40);
PPC_FUNC_IMPL(__imp__sub_83170E40) {
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
	// addi r31,r11,7680
	ctx.r31.s64 = ctx.r11.s64 + 7680;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83170E64;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83170E70;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83170E78;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83170E88;
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

__attribute__((alias("__imp__sub_83170EA0"))) PPC_WEAK_FUNC(sub_83170EA0);
PPC_FUNC_IMPL(__imp__sub_83170EA0) {
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
	// addi r31,r11,7768
	ctx.r31.s64 = ctx.r11.s64 + 7768;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83170EC4;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83170ED0;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83170ED8;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83170EE8;
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

__attribute__((alias("__imp__sub_83170F00"))) PPC_WEAK_FUNC(sub_83170F00);
PPC_FUNC_IMPL(__imp__sub_83170F00) {
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
	// addi r31,r11,7856
	ctx.r31.s64 = ctx.r11.s64 + 7856;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83170F24;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83170F30;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83170F38;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83170F48;
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

__attribute__((alias("__imp__sub_83170F60"))) PPC_WEAK_FUNC(sub_83170F60);
PPC_FUNC_IMPL(__imp__sub_83170F60) {
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
	// addi r31,r11,7944
	ctx.r31.s64 = ctx.r11.s64 + 7944;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x83170F84;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83170F90;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83170F98;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83170FA8;
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

__attribute__((alias("__imp__sub_83170FC0"))) PPC_WEAK_FUNC(sub_83170FC0);
PPC_FUNC_IMPL(__imp__sub_83170FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,8032
	ctx.r3.s64 = ctx.r11.s64 + 8032;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83170FD4"))) PPC_WEAK_FUNC(sub_83170FD4);
PPC_FUNC_IMPL(__imp__sub_83170FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83170FD8"))) PPC_WEAK_FUNC(sub_83170FD8);
PPC_FUNC_IMPL(__imp__sub_83170FD8) {
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
	ctx.lr = 0x83170FEC;
	sub_8254DC90(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,8160
	ctx.r31.s64 = ctx.r11.s64 + 8160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8254ddd0
	ctx.lr = 0x83170FFC;
	sub_8254DDD0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822402c8
	ctx.lr = 0x8317100C;
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

__attribute__((alias("__imp__sub_83171020"))) PPC_WEAK_FUNC(sub_83171020);
PPC_FUNC_IMPL(__imp__sub_83171020) {
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
	// addi r31,r30,8216
	ctx.r31.s64 = ctx.r30.s64 + 8216;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x822402c8
	ctx.lr = 0x8317104C;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82249190
	ctx.lr = 0x83171054;
	sub_82249190(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8216, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83171084"))) PPC_WEAK_FUNC(sub_83171084);
PPC_FUNC_IMPL(__imp__sub_83171084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171088"))) PPC_WEAK_FUNC(sub_83171088);
PPC_FUNC_IMPL(__imp__sub_83171088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,8288
	ctx.r3.s64 = ctx.r11.s64 + 8288;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83171094"))) PPC_WEAK_FUNC(sub_83171094);
PPC_FUNC_IMPL(__imp__sub_83171094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83171098"))) PPC_WEAK_FUNC(sub_83171098);
PPC_FUNC_IMPL(__imp__sub_83171098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,8376
	ctx.r3.s64 = ctx.r11.s64 + 8376;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831710A4"))) PPC_WEAK_FUNC(sub_831710A4);
PPC_FUNC_IMPL(__imp__sub_831710A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831710A8"))) PPC_WEAK_FUNC(sub_831710A8);
PPC_FUNC_IMPL(__imp__sub_831710A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,8464
	ctx.r3.s64 = ctx.r11.s64 + 8464;
	// b 0x82245878
	sub_82245878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831710B4"))) PPC_WEAK_FUNC(sub_831710B4);
PPC_FUNC_IMPL(__imp__sub_831710B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831710B8"))) PPC_WEAK_FUNC(sub_831710B8);
PPC_FUNC_IMPL(__imp__sub_831710B8) {
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
	// addi r31,r11,8552
	ctx.r31.s64 = ctx.r11.s64 + 8552;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x831710DC;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x831710E8;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x831710F0;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83171100;
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

__attribute__((alias("__imp__sub_83171118"))) PPC_WEAK_FUNC(sub_83171118);
PPC_FUNC_IMPL(__imp__sub_83171118) {
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
	// addi r31,r11,8640
	ctx.r31.s64 = ctx.r11.s64 + 8640;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x8317113C;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83171148;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83171150;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83171160;
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

__attribute__((alias("__imp__sub_83171178"))) PPC_WEAK_FUNC(sub_83171178);
PPC_FUNC_IMPL(__imp__sub_83171178) {
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
	// addi r31,r11,8728
	ctx.r31.s64 = ctx.r11.s64 + 8728;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x8317119C;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x831711A8;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x831711B0;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x831711C0;
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

__attribute__((alias("__imp__sub_831711D8"))) PPC_WEAK_FUNC(sub_831711D8);
PPC_FUNC_IMPL(__imp__sub_831711D8) {
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
	// addi r31,r11,8816
	ctx.r31.s64 = ctx.r11.s64 + 8816;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x831711FC;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83171208;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83171210;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83171220;
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

__attribute__((alias("__imp__sub_83171238"))) PPC_WEAK_FUNC(sub_83171238);
PPC_FUNC_IMPL(__imp__sub_83171238) {
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
	// addi r31,r11,8904
	ctx.r31.s64 = ctx.r11.s64 + 8904;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82550908
	ctx.lr = 0x8317125C;
	sub_82550908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82550c58
	ctx.lr = 0x83171268;
	sub_82550C58(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f91940
	ctx.lr = 0x83171270;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x83171280;
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

__attribute__((alias("__imp__sub_83171298"))) PPC_WEAK_FUNC(sub_83171298);
PPC_FUNC_IMPL(__imp__sub_83171298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,8992
	ctx.r3.s64 = ctx.r11.s64 + 8992;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831712AC"))) PPC_WEAK_FUNC(sub_831712AC);
PPC_FUNC_IMPL(__imp__sub_831712AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831712B0"))) PPC_WEAK_FUNC(sub_831712B0);
PPC_FUNC_IMPL(__imp__sub_831712B0) {
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
	ctx.lr = 0x831712C4;
	sub_8254DC90(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,9120
	ctx.r31.s64 = ctx.r11.s64 + 9120;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8254ddd0
	ctx.lr = 0x831712D4;
	sub_8254DDD0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822402c8
	ctx.lr = 0x831712E4;
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

__attribute__((alias("__imp__sub_831712F8"))) PPC_WEAK_FUNC(sub_831712F8);
PPC_FUNC_IMPL(__imp__sub_831712F8) {
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
	// addi r31,r30,9176
	ctx.r31.s64 = ctx.r30.s64 + 9176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x822402c8
	ctx.lr = 0x83171324;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82249190
	ctx.lr = 0x8317132C;
	sub_82249190(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,9176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9176, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8317135C"))) PPC_WEAK_FUNC(sub_8317135C);
PPC_FUNC_IMPL(__imp__sub_8317135C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

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

