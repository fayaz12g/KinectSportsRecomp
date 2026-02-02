#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8315D3C4"))) PPC_WEAK_FUNC(sub_8315D3C4);
PPC_FUNC_IMPL(__imp__sub_8315D3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D3C8"))) PPC_WEAK_FUNC(sub_8315D3C8);
PPC_FUNC_IMPL(__imp__sub_8315D3C8) {
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
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31292
	ctx.r4.s64 = ctx.r11.s64 + 31292;
	// addi r3,r10,29764
	ctx.r3.s64 = ctx.r10.s64 + 29764;
	// bl 0x822400d8
	ctx.lr = 0x8315D3E8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26440
	ctx.r3.s64 = ctx.r11.s64 + 26440;
	// bl 0x82fa2318
	ctx.lr = 0x8315D3F4;
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

__attribute__((alias("__imp__sub_8315D404"))) PPC_WEAK_FUNC(sub_8315D404);
PPC_FUNC_IMPL(__imp__sub_8315D404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D408"))) PPC_WEAK_FUNC(sub_8315D408);
PPC_FUNC_IMPL(__imp__sub_8315D408) {
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
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31304
	ctx.r4.s64 = ctx.r11.s64 + 31304;
	// addi r3,r10,29504
	ctx.r3.s64 = ctx.r10.s64 + 29504;
	// bl 0x822400d8
	ctx.lr = 0x8315D428;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26464
	ctx.r3.s64 = ctx.r11.s64 + 26464;
	// bl 0x82fa2318
	ctx.lr = 0x8315D434;
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

__attribute__((alias("__imp__sub_8315D444"))) PPC_WEAK_FUNC(sub_8315D444);
PPC_FUNC_IMPL(__imp__sub_8315D444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D448"))) PPC_WEAK_FUNC(sub_8315D448);
PPC_FUNC_IMPL(__imp__sub_8315D448) {
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
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31316
	ctx.r4.s64 = ctx.r11.s64 + 31316;
	// addi r3,r10,29448
	ctx.r3.s64 = ctx.r10.s64 + 29448;
	// bl 0x822400d8
	ctx.lr = 0x8315D468;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26488
	ctx.r3.s64 = ctx.r11.s64 + 26488;
	// bl 0x82fa2318
	ctx.lr = 0x8315D474;
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

__attribute__((alias("__imp__sub_8315D484"))) PPC_WEAK_FUNC(sub_8315D484);
PPC_FUNC_IMPL(__imp__sub_8315D484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D488"))) PPC_WEAK_FUNC(sub_8315D488);
PPC_FUNC_IMPL(__imp__sub_8315D488) {
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
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31324
	ctx.r4.s64 = ctx.r11.s64 + 31324;
	// addi r3,r10,29588
	ctx.r3.s64 = ctx.r10.s64 + 29588;
	// bl 0x822400d8
	ctx.lr = 0x8315D4A8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26512
	ctx.r3.s64 = ctx.r11.s64 + 26512;
	// bl 0x82fa2318
	ctx.lr = 0x8315D4B4;
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

__attribute__((alias("__imp__sub_8315D4C4"))) PPC_WEAK_FUNC(sub_8315D4C4);
PPC_FUNC_IMPL(__imp__sub_8315D4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D4C8"))) PPC_WEAK_FUNC(sub_8315D4C8);
PPC_FUNC_IMPL(__imp__sub_8315D4C8) {
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
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31336
	ctx.r4.s64 = ctx.r11.s64 + 31336;
	// addi r3,r10,29476
	ctx.r3.s64 = ctx.r10.s64 + 29476;
	// bl 0x822400d8
	ctx.lr = 0x8315D4E8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26536
	ctx.r3.s64 = ctx.r11.s64 + 26536;
	// bl 0x82fa2318
	ctx.lr = 0x8315D4F4;
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

__attribute__((alias("__imp__sub_8315D504"))) PPC_WEAK_FUNC(sub_8315D504);
PPC_FUNC_IMPL(__imp__sub_8315D504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D508"))) PPC_WEAK_FUNC(sub_8315D508);
PPC_FUNC_IMPL(__imp__sub_8315D508) {
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
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31352
	ctx.r4.s64 = ctx.r11.s64 + 31352;
	// addi r3,r10,29796
	ctx.r3.s64 = ctx.r10.s64 + 29796;
	// bl 0x822400d8
	ctx.lr = 0x8315D528;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26560
	ctx.r3.s64 = ctx.r11.s64 + 26560;
	// bl 0x82fa2318
	ctx.lr = 0x8315D534;
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

__attribute__((alias("__imp__sub_8315D544"))) PPC_WEAK_FUNC(sub_8315D544);
PPC_FUNC_IMPL(__imp__sub_8315D544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D548"))) PPC_WEAK_FUNC(sub_8315D548);
PPC_FUNC_IMPL(__imp__sub_8315D548) {
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
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31368
	ctx.r4.s64 = ctx.r11.s64 + 31368;
	// addi r3,r10,29652
	ctx.r3.s64 = ctx.r10.s64 + 29652;
	// bl 0x822400d8
	ctx.lr = 0x8315D568;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26584
	ctx.r3.s64 = ctx.r11.s64 + 26584;
	// bl 0x82fa2318
	ctx.lr = 0x8315D574;
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

__attribute__((alias("__imp__sub_8315D584"))) PPC_WEAK_FUNC(sub_8315D584);
PPC_FUNC_IMPL(__imp__sub_8315D584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D588"))) PPC_WEAK_FUNC(sub_8315D588);
PPC_FUNC_IMPL(__imp__sub_8315D588) {
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
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31380
	ctx.r4.s64 = ctx.r11.s64 + 31380;
	// addi r3,r10,29560
	ctx.r3.s64 = ctx.r10.s64 + 29560;
	// bl 0x822400d8
	ctx.lr = 0x8315D5A8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26608
	ctx.r3.s64 = ctx.r11.s64 + 26608;
	// bl 0x82fa2318
	ctx.lr = 0x8315D5B4;
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

__attribute__((alias("__imp__sub_8315D5C4"))) PPC_WEAK_FUNC(sub_8315D5C4);
PPC_FUNC_IMPL(__imp__sub_8315D5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D5C8"))) PPC_WEAK_FUNC(sub_8315D5C8);
PPC_FUNC_IMPL(__imp__sub_8315D5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,-10608
	ctx.r11.s64 = ctx.r11.s64 + -10608;
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// lis r9,-31967
	ctx.r9.s64 = -2094989312;
	// addi r9,r9,-29376
	ctx.r9.s64 = ctx.r9.s64 + -29376;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 848);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D660"))) PPC_WEAK_FUNC(sub_8315D660);
PPC_FUNC_IMPL(__imp__sub_8315D660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,-10560
	ctx.r11.s64 = ctx.r11.s64 + -10560;
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// lis r9,-31967
	ctx.r9.s64 = -2094989312;
	// addi r9,r9,-29520
	ctx.r9.s64 = ctx.r9.s64 + -29520;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 848);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D6F8"))) PPC_WEAK_FUNC(sub_8315D6F8);
PPC_FUNC_IMPL(__imp__sub_8315D6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,-10608
	ctx.r11.s64 = ctx.r11.s64 + -10608;
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// lis r9,-31967
	ctx.r9.s64 = -2094989312;
	// addi r9,r9,-29472
	ctx.r9.s64 = ctx.r9.s64 + -29472;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D790"))) PPC_WEAK_FUNC(sub_8315D790);
PPC_FUNC_IMPL(__imp__sub_8315D790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,-10560
	ctx.r11.s64 = ctx.r11.s64 + -10560;
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// lis r9,-31967
	ctx.r9.s64 = -2094989312;
	// addi r9,r9,-29424
	ctx.r9.s64 = ctx.r9.s64 + -29424;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D828"))) PPC_WEAK_FUNC(sub_8315D828);
PPC_FUNC_IMPL(__imp__sub_8315D828) {
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
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-25468
	ctx.r3.s64 = ctx.r11.s64 + -25468;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82690d60
	ctx.lr = 0x8315D848;
	sub_82690D60(ctx, base);
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r3,r10,26632
	ctx.r3.s64 = ctx.r10.s64 + 26632;
	// bl 0x82fa2318
	ctx.lr = 0x8315D854;
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

__attribute__((alias("__imp__sub_8315D864"))) PPC_WEAK_FUNC(sub_8315D864);
PPC_FUNC_IMPL(__imp__sub_8315D864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D868"))) PPC_WEAK_FUNC(sub_8315D868);
PPC_FUNC_IMPL(__imp__sub_8315D868) {
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
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-25444
	ctx.r3.s64 = ctx.r11.s64 + -25444;
	// bl 0x8269edb8
	ctx.lr = 0x8315D880;
	sub_8269EDB8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26648
	ctx.r3.s64 = ctx.r11.s64 + 26648;
	// bl 0x82fa2318
	ctx.lr = 0x8315D88C;
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

__attribute__((alias("__imp__sub_8315D89C"))) PPC_WEAK_FUNC(sub_8315D89C);
PPC_FUNC_IMPL(__imp__sub_8315D89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D8A0"))) PPC_WEAK_FUNC(sub_8315D8A0);
PPC_FUNC_IMPL(__imp__sub_8315D8A0) {
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
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-25424
	ctx.r3.s64 = ctx.r11.s64 + -25424;
	// bl 0x82693b98
	ctx.lr = 0x8315D8B8;
	sub_82693B98(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26688
	ctx.r3.s64 = ctx.r11.s64 + 26688;
	// bl 0x82fa2318
	ctx.lr = 0x8315D8C4;
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

__attribute__((alias("__imp__sub_8315D8D4"))) PPC_WEAK_FUNC(sub_8315D8D4);
PPC_FUNC_IMPL(__imp__sub_8315D8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D8D8"))) PPC_WEAK_FUNC(sub_8315D8D8);
PPC_FUNC_IMPL(__imp__sub_8315D8D8) {
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
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-25400
	ctx.r3.s64 = ctx.r11.s64 + -25400;
	// bl 0x82698e70
	ctx.lr = 0x8315D8F0;
	sub_82698E70(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26728
	ctx.r3.s64 = ctx.r11.s64 + 26728;
	// bl 0x82fa2318
	ctx.lr = 0x8315D8FC;
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

__attribute__((alias("__imp__sub_8315D90C"))) PPC_WEAK_FUNC(sub_8315D90C);
PPC_FUNC_IMPL(__imp__sub_8315D90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D910"))) PPC_WEAK_FUNC(sub_8315D910);
PPC_FUNC_IMPL(__imp__sub_8315D910) {
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
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-25380
	ctx.r3.s64 = ctx.r11.s64 + -25380;
	// bl 0x8269ec98
	ctx.lr = 0x8315D928;
	sub_8269EC98(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26768
	ctx.r3.s64 = ctx.r11.s64 + 26768;
	// bl 0x82fa2318
	ctx.lr = 0x8315D934;
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

__attribute__((alias("__imp__sub_8315D944"))) PPC_WEAK_FUNC(sub_8315D944);
PPC_FUNC_IMPL(__imp__sub_8315D944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D948"))) PPC_WEAK_FUNC(sub_8315D948);
PPC_FUNC_IMPL(__imp__sub_8315D948) {
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
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-25360
	ctx.r3.s64 = ctx.r11.s64 + -25360;
	// bl 0x8269ed78
	ctx.lr = 0x8315D960;
	sub_8269ED78(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26808
	ctx.r3.s64 = ctx.r11.s64 + 26808;
	// bl 0x82fa2318
	ctx.lr = 0x8315D96C;
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

__attribute__((alias("__imp__sub_8315D97C"))) PPC_WEAK_FUNC(sub_8315D97C);
PPC_FUNC_IMPL(__imp__sub_8315D97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D980"))) PPC_WEAK_FUNC(sub_8315D980);
PPC_FUNC_IMPL(__imp__sub_8315D980) {
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
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-25340
	ctx.r3.s64 = ctx.r11.s64 + -25340;
	// bl 0x8269ee90
	ctx.lr = 0x8315D998;
	sub_8269EE90(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26848
	ctx.r3.s64 = ctx.r11.s64 + 26848;
	// bl 0x82fa2318
	ctx.lr = 0x8315D9A4;
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

__attribute__((alias("__imp__sub_8315D9B4"))) PPC_WEAK_FUNC(sub_8315D9B4);
PPC_FUNC_IMPL(__imp__sub_8315D9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D9B8"))) PPC_WEAK_FUNC(sub_8315D9B8);
PPC_FUNC_IMPL(__imp__sub_8315D9B8) {
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
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-25228
	ctx.r3.s64 = ctx.r11.s64 + -25228;
	// bl 0x8269fd50
	ctx.lr = 0x8315D9D0;
	sub_8269FD50(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26888
	ctx.r3.s64 = ctx.r11.s64 + 26888;
	// bl 0x82fa2318
	ctx.lr = 0x8315D9DC;
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

__attribute__((alias("__imp__sub_8315D9EC"))) PPC_WEAK_FUNC(sub_8315D9EC);
PPC_FUNC_IMPL(__imp__sub_8315D9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D9F0"))) PPC_WEAK_FUNC(sub_8315D9F0);
PPC_FUNC_IMPL(__imp__sub_8315D9F0) {
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
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-25208
	ctx.r3.s64 = ctx.r11.s64 + -25208;
	// bl 0x8269fe30
	ctx.lr = 0x8315DA08;
	sub_8269FE30(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26928
	ctx.r3.s64 = ctx.r11.s64 + 26928;
	// bl 0x82fa2318
	ctx.lr = 0x8315DA14;
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

__attribute__((alias("__imp__sub_8315DA24"))) PPC_WEAK_FUNC(sub_8315DA24);
PPC_FUNC_IMPL(__imp__sub_8315DA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DA28"))) PPC_WEAK_FUNC(sub_8315DA28);
PPC_FUNC_IMPL(__imp__sub_8315DA28) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x8315DA30;
	__savegprlr_19(ctx, base);
	// lis r9,-31976
	ctx.r9.s64 = -2095579136;
	// lis r7,-31976
	ctx.r7.s64 = -2095579136;
	// addi r19,r9,19920
	ctx.r19.s64 = ctx.r9.s64 + 19920;
	// addi r11,r7,20224
	ctx.r11.s64 = ctx.r7.s64 + 20224;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r10,r11,288
	ctx.r10.s64 = ctx.r11.s64 + 288;
	// lwz r8,19920(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19920);
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lwz r6,20(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20);
	// lwz r5,24(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stw r6,20224(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20224, ctx.r6.u32);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// lwz r9,12(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	// lwz r7,16(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// lwz r4,28(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// lwz r3,32(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// lwz r31,36(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 36);
	// lwz r30,40(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// lwz r29,44(r19)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r19.u32 + 44);
	// lwz r28,48(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// lwz r27,52(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r26,56(r19)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r19.u32 + 56);
	// lwz r25,60(r19)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r19.u32 + 60);
	// lwz r24,68(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 68);
	// lwz r23,8(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// lwz r22,76(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + 76);
	// lwz r21,84(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 84);
	// lwz r10,64(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 64);
	// lwz r8,72(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 72);
	// lwz r6,80(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 80);
	// lwz r5,88(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 88);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// stw r3,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
	// stw r30,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r30.u32);
	// stw r29,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r29.u32);
	// stw r28,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r28.u32);
	// stw r27,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r27.u32);
	// stw r26,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r26.u32);
	// stw r25,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r25.u32);
	// stw r9,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r9.u32);
	// stw r24,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r24.u32);
	// stw r23,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r23.u32);
	// stw r22,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r22.u32);
	// stw r9,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r9.u32);
	// stw r21,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r21.u32);
	// stw r7,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r7.u32);
	// stw r10,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r10.u32);
	// stw r9,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r9.u32);
	// stw r8,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r8.u32);
	// stw r9,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r9.u32);
	// stw r6,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r6.u32);
	// stw r9,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r9.u32);
	// stw r5,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r5.u32);
	// stw r7,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r7.u32);
	// std r20,288(r11)
	PPC_STORE_U64(ctx.r11.u32 + 288, ctx.r20.u64);
	// std r20,296(r11)
	PPC_STORE_U64(ctx.r11.u32 + 296, ctx.r20.u64);
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DB40"))) PPC_WEAK_FUNC(sub_8315DB40);
PPC_FUNC_IMPL(__imp__sub_8315DB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,21684
	ctx.r3.s64 = ctx.r11.s64 + 21684;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DB4C"))) PPC_WEAK_FUNC(sub_8315DB4C);
PPC_FUNC_IMPL(__imp__sub_8315DB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DB50"))) PPC_WEAK_FUNC(sub_8315DB50);
PPC_FUNC_IMPL(__imp__sub_8315DB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,21708
	ctx.r3.s64 = ctx.r11.s64 + 21708;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DB5C"))) PPC_WEAK_FUNC(sub_8315DB5C);
PPC_FUNC_IMPL(__imp__sub_8315DB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DB60"))) PPC_WEAK_FUNC(sub_8315DB60);
PPC_FUNC_IMPL(__imp__sub_8315DB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,21732
	ctx.r3.s64 = ctx.r11.s64 + 21732;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DB6C"))) PPC_WEAK_FUNC(sub_8315DB6C);
PPC_FUNC_IMPL(__imp__sub_8315DB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DB70"))) PPC_WEAK_FUNC(sub_8315DB70);
PPC_FUNC_IMPL(__imp__sub_8315DB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,21756
	ctx.r3.s64 = ctx.r11.s64 + 21756;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DB7C"))) PPC_WEAK_FUNC(sub_8315DB7C);
PPC_FUNC_IMPL(__imp__sub_8315DB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DB80"))) PPC_WEAK_FUNC(sub_8315DB80);
PPC_FUNC_IMPL(__imp__sub_8315DB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,21780
	ctx.r3.s64 = ctx.r11.s64 + 21780;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DB8C"))) PPC_WEAK_FUNC(sub_8315DB8C);
PPC_FUNC_IMPL(__imp__sub_8315DB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DB90"))) PPC_WEAK_FUNC(sub_8315DB90);
PPC_FUNC_IMPL(__imp__sub_8315DB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,21804
	ctx.r3.s64 = ctx.r11.s64 + 21804;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DB9C"))) PPC_WEAK_FUNC(sub_8315DB9C);
PPC_FUNC_IMPL(__imp__sub_8315DB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DBA0"))) PPC_WEAK_FUNC(sub_8315DBA0);
PPC_FUNC_IMPL(__imp__sub_8315DBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,21828
	ctx.r3.s64 = ctx.r11.s64 + 21828;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DBAC"))) PPC_WEAK_FUNC(sub_8315DBAC);
PPC_FUNC_IMPL(__imp__sub_8315DBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DBB0"))) PPC_WEAK_FUNC(sub_8315DBB0);
PPC_FUNC_IMPL(__imp__sub_8315DBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,21852
	ctx.r3.s64 = ctx.r11.s64 + 21852;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DBBC"))) PPC_WEAK_FUNC(sub_8315DBBC);
PPC_FUNC_IMPL(__imp__sub_8315DBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DBC0"))) PPC_WEAK_FUNC(sub_8315DBC0);
PPC_FUNC_IMPL(__imp__sub_8315DBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,21876
	ctx.r3.s64 = ctx.r11.s64 + 21876;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DBCC"))) PPC_WEAK_FUNC(sub_8315DBCC);
PPC_FUNC_IMPL(__imp__sub_8315DBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DBD0"))) PPC_WEAK_FUNC(sub_8315DBD0);
PPC_FUNC_IMPL(__imp__sub_8315DBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,21900
	ctx.r3.s64 = ctx.r11.s64 + 21900;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DBDC"))) PPC_WEAK_FUNC(sub_8315DBDC);
PPC_FUNC_IMPL(__imp__sub_8315DBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DBE0"))) PPC_WEAK_FUNC(sub_8315DBE0);
PPC_FUNC_IMPL(__imp__sub_8315DBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,21924
	ctx.r3.s64 = ctx.r11.s64 + 21924;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DBEC"))) PPC_WEAK_FUNC(sub_8315DBEC);
PPC_FUNC_IMPL(__imp__sub_8315DBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DBF0"))) PPC_WEAK_FUNC(sub_8315DBF0);
PPC_FUNC_IMPL(__imp__sub_8315DBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,21948
	ctx.r3.s64 = ctx.r11.s64 + 21948;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DBFC"))) PPC_WEAK_FUNC(sub_8315DBFC);
PPC_FUNC_IMPL(__imp__sub_8315DBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DC00"))) PPC_WEAK_FUNC(sub_8315DC00);
PPC_FUNC_IMPL(__imp__sub_8315DC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,21972
	ctx.r3.s64 = ctx.r11.s64 + 21972;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DC0C"))) PPC_WEAK_FUNC(sub_8315DC0C);
PPC_FUNC_IMPL(__imp__sub_8315DC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DC10"))) PPC_WEAK_FUNC(sub_8315DC10);
PPC_FUNC_IMPL(__imp__sub_8315DC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22032
	ctx.r3.s64 = ctx.r11.s64 + 22032;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DC1C"))) PPC_WEAK_FUNC(sub_8315DC1C);
PPC_FUNC_IMPL(__imp__sub_8315DC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DC20"))) PPC_WEAK_FUNC(sub_8315DC20);
PPC_FUNC_IMPL(__imp__sub_8315DC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22056
	ctx.r3.s64 = ctx.r11.s64 + 22056;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DC2C"))) PPC_WEAK_FUNC(sub_8315DC2C);
PPC_FUNC_IMPL(__imp__sub_8315DC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DC30"))) PPC_WEAK_FUNC(sub_8315DC30);
PPC_FUNC_IMPL(__imp__sub_8315DC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22080
	ctx.r3.s64 = ctx.r11.s64 + 22080;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DC3C"))) PPC_WEAK_FUNC(sub_8315DC3C);
PPC_FUNC_IMPL(__imp__sub_8315DC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DC40"))) PPC_WEAK_FUNC(sub_8315DC40);
PPC_FUNC_IMPL(__imp__sub_8315DC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22104
	ctx.r3.s64 = ctx.r11.s64 + 22104;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DC4C"))) PPC_WEAK_FUNC(sub_8315DC4C);
PPC_FUNC_IMPL(__imp__sub_8315DC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DC50"))) PPC_WEAK_FUNC(sub_8315DC50);
PPC_FUNC_IMPL(__imp__sub_8315DC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22128
	ctx.r3.s64 = ctx.r11.s64 + 22128;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DC5C"))) PPC_WEAK_FUNC(sub_8315DC5C);
PPC_FUNC_IMPL(__imp__sub_8315DC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DC60"))) PPC_WEAK_FUNC(sub_8315DC60);
PPC_FUNC_IMPL(__imp__sub_8315DC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22152
	ctx.r3.s64 = ctx.r11.s64 + 22152;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DC6C"))) PPC_WEAK_FUNC(sub_8315DC6C);
PPC_FUNC_IMPL(__imp__sub_8315DC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DC70"))) PPC_WEAK_FUNC(sub_8315DC70);
PPC_FUNC_IMPL(__imp__sub_8315DC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22176
	ctx.r3.s64 = ctx.r11.s64 + 22176;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DC7C"))) PPC_WEAK_FUNC(sub_8315DC7C);
PPC_FUNC_IMPL(__imp__sub_8315DC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DC80"))) PPC_WEAK_FUNC(sub_8315DC80);
PPC_FUNC_IMPL(__imp__sub_8315DC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22200
	ctx.r3.s64 = ctx.r11.s64 + 22200;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DC8C"))) PPC_WEAK_FUNC(sub_8315DC8C);
PPC_FUNC_IMPL(__imp__sub_8315DC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DC90"))) PPC_WEAK_FUNC(sub_8315DC90);
PPC_FUNC_IMPL(__imp__sub_8315DC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22224
	ctx.r3.s64 = ctx.r11.s64 + 22224;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DC9C"))) PPC_WEAK_FUNC(sub_8315DC9C);
PPC_FUNC_IMPL(__imp__sub_8315DC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DCA0"))) PPC_WEAK_FUNC(sub_8315DCA0);
PPC_FUNC_IMPL(__imp__sub_8315DCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22248
	ctx.r3.s64 = ctx.r11.s64 + 22248;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DCAC"))) PPC_WEAK_FUNC(sub_8315DCAC);
PPC_FUNC_IMPL(__imp__sub_8315DCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DCB0"))) PPC_WEAK_FUNC(sub_8315DCB0);
PPC_FUNC_IMPL(__imp__sub_8315DCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22272
	ctx.r3.s64 = ctx.r11.s64 + 22272;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DCBC"))) PPC_WEAK_FUNC(sub_8315DCBC);
PPC_FUNC_IMPL(__imp__sub_8315DCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DCC0"))) PPC_WEAK_FUNC(sub_8315DCC0);
PPC_FUNC_IMPL(__imp__sub_8315DCC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22296
	ctx.r3.s64 = ctx.r11.s64 + 22296;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DCCC"))) PPC_WEAK_FUNC(sub_8315DCCC);
PPC_FUNC_IMPL(__imp__sub_8315DCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DCD0"))) PPC_WEAK_FUNC(sub_8315DCD0);
PPC_FUNC_IMPL(__imp__sub_8315DCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22320
	ctx.r3.s64 = ctx.r11.s64 + 22320;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DCDC"))) PPC_WEAK_FUNC(sub_8315DCDC);
PPC_FUNC_IMPL(__imp__sub_8315DCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DCE0"))) PPC_WEAK_FUNC(sub_8315DCE0);
PPC_FUNC_IMPL(__imp__sub_8315DCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22392
	ctx.r3.s64 = ctx.r11.s64 + 22392;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DCEC"))) PPC_WEAK_FUNC(sub_8315DCEC);
PPC_FUNC_IMPL(__imp__sub_8315DCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DCF0"))) PPC_WEAK_FUNC(sub_8315DCF0);
PPC_FUNC_IMPL(__imp__sub_8315DCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22416
	ctx.r3.s64 = ctx.r11.s64 + 22416;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DCFC"))) PPC_WEAK_FUNC(sub_8315DCFC);
PPC_FUNC_IMPL(__imp__sub_8315DCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DD00"))) PPC_WEAK_FUNC(sub_8315DD00);
PPC_FUNC_IMPL(__imp__sub_8315DD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22440
	ctx.r3.s64 = ctx.r11.s64 + 22440;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DD0C"))) PPC_WEAK_FUNC(sub_8315DD0C);
PPC_FUNC_IMPL(__imp__sub_8315DD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DD10"))) PPC_WEAK_FUNC(sub_8315DD10);
PPC_FUNC_IMPL(__imp__sub_8315DD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22464
	ctx.r3.s64 = ctx.r11.s64 + 22464;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DD1C"))) PPC_WEAK_FUNC(sub_8315DD1C);
PPC_FUNC_IMPL(__imp__sub_8315DD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DD20"))) PPC_WEAK_FUNC(sub_8315DD20);
PPC_FUNC_IMPL(__imp__sub_8315DD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22488
	ctx.r3.s64 = ctx.r11.s64 + 22488;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DD2C"))) PPC_WEAK_FUNC(sub_8315DD2C);
PPC_FUNC_IMPL(__imp__sub_8315DD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DD30"))) PPC_WEAK_FUNC(sub_8315DD30);
PPC_FUNC_IMPL(__imp__sub_8315DD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22512
	ctx.r3.s64 = ctx.r11.s64 + 22512;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DD3C"))) PPC_WEAK_FUNC(sub_8315DD3C);
PPC_FUNC_IMPL(__imp__sub_8315DD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DD40"))) PPC_WEAK_FUNC(sub_8315DD40);
PPC_FUNC_IMPL(__imp__sub_8315DD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22536
	ctx.r3.s64 = ctx.r11.s64 + 22536;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DD4C"))) PPC_WEAK_FUNC(sub_8315DD4C);
PPC_FUNC_IMPL(__imp__sub_8315DD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DD50"))) PPC_WEAK_FUNC(sub_8315DD50);
PPC_FUNC_IMPL(__imp__sub_8315DD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22560
	ctx.r3.s64 = ctx.r11.s64 + 22560;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DD5C"))) PPC_WEAK_FUNC(sub_8315DD5C);
PPC_FUNC_IMPL(__imp__sub_8315DD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DD60"))) PPC_WEAK_FUNC(sub_8315DD60);
PPC_FUNC_IMPL(__imp__sub_8315DD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22584
	ctx.r3.s64 = ctx.r11.s64 + 22584;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DD6C"))) PPC_WEAK_FUNC(sub_8315DD6C);
PPC_FUNC_IMPL(__imp__sub_8315DD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DD70"))) PPC_WEAK_FUNC(sub_8315DD70);
PPC_FUNC_IMPL(__imp__sub_8315DD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22608
	ctx.r3.s64 = ctx.r11.s64 + 22608;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DD7C"))) PPC_WEAK_FUNC(sub_8315DD7C);
PPC_FUNC_IMPL(__imp__sub_8315DD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DD80"))) PPC_WEAK_FUNC(sub_8315DD80);
PPC_FUNC_IMPL(__imp__sub_8315DD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,22632
	ctx.r3.s64 = ctx.r11.s64 + 22632;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DD8C"))) PPC_WEAK_FUNC(sub_8315DD8C);
PPC_FUNC_IMPL(__imp__sub_8315DD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DD90"))) PPC_WEAK_FUNC(sub_8315DD90);
PPC_FUNC_IMPL(__imp__sub_8315DD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26992
	ctx.r3.s64 = ctx.r11.s64 + 26992;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DD9C"))) PPC_WEAK_FUNC(sub_8315DD9C);
PPC_FUNC_IMPL(__imp__sub_8315DD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DDA0"))) PPC_WEAK_FUNC(sub_8315DDA0);
PPC_FUNC_IMPL(__imp__sub_8315DDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27016
	ctx.r3.s64 = ctx.r11.s64 + 27016;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DDAC"))) PPC_WEAK_FUNC(sub_8315DDAC);
PPC_FUNC_IMPL(__imp__sub_8315DDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DDB0"))) PPC_WEAK_FUNC(sub_8315DDB0);
PPC_FUNC_IMPL(__imp__sub_8315DDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27040
	ctx.r3.s64 = ctx.r11.s64 + 27040;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DDBC"))) PPC_WEAK_FUNC(sub_8315DDBC);
PPC_FUNC_IMPL(__imp__sub_8315DDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DDC0"))) PPC_WEAK_FUNC(sub_8315DDC0);
PPC_FUNC_IMPL(__imp__sub_8315DDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27080
	ctx.r3.s64 = ctx.r11.s64 + 27080;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DDCC"))) PPC_WEAK_FUNC(sub_8315DDCC);
PPC_FUNC_IMPL(__imp__sub_8315DDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DDD0"))) PPC_WEAK_FUNC(sub_8315DDD0);
PPC_FUNC_IMPL(__imp__sub_8315DDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27096
	ctx.r3.s64 = ctx.r11.s64 + 27096;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DDDC"))) PPC_WEAK_FUNC(sub_8315DDDC);
PPC_FUNC_IMPL(__imp__sub_8315DDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DDE0"))) PPC_WEAK_FUNC(sub_8315DDE0);
PPC_FUNC_IMPL(__imp__sub_8315DDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27120
	ctx.r3.s64 = ctx.r11.s64 + 27120;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DDEC"))) PPC_WEAK_FUNC(sub_8315DDEC);
PPC_FUNC_IMPL(__imp__sub_8315DDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DDF0"))) PPC_WEAK_FUNC(sub_8315DDF0);
PPC_FUNC_IMPL(__imp__sub_8315DDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27144
	ctx.r3.s64 = ctx.r11.s64 + 27144;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DDFC"))) PPC_WEAK_FUNC(sub_8315DDFC);
PPC_FUNC_IMPL(__imp__sub_8315DDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DE00"))) PPC_WEAK_FUNC(sub_8315DE00);
PPC_FUNC_IMPL(__imp__sub_8315DE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25492
	ctx.r3.s64 = ctx.r11.s64 + 25492;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DE0C"))) PPC_WEAK_FUNC(sub_8315DE0C);
PPC_FUNC_IMPL(__imp__sub_8315DE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DE10"))) PPC_WEAK_FUNC(sub_8315DE10);
PPC_FUNC_IMPL(__imp__sub_8315DE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25516
	ctx.r3.s64 = ctx.r11.s64 + 25516;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DE1C"))) PPC_WEAK_FUNC(sub_8315DE1C);
PPC_FUNC_IMPL(__imp__sub_8315DE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DE20"))) PPC_WEAK_FUNC(sub_8315DE20);
PPC_FUNC_IMPL(__imp__sub_8315DE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25540
	ctx.r3.s64 = ctx.r11.s64 + 25540;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DE2C"))) PPC_WEAK_FUNC(sub_8315DE2C);
PPC_FUNC_IMPL(__imp__sub_8315DE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DE30"))) PPC_WEAK_FUNC(sub_8315DE30);
PPC_FUNC_IMPL(__imp__sub_8315DE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25564
	ctx.r3.s64 = ctx.r11.s64 + 25564;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DE3C"))) PPC_WEAK_FUNC(sub_8315DE3C);
PPC_FUNC_IMPL(__imp__sub_8315DE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DE40"))) PPC_WEAK_FUNC(sub_8315DE40);
PPC_FUNC_IMPL(__imp__sub_8315DE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25588
	ctx.r3.s64 = ctx.r11.s64 + 25588;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DE4C"))) PPC_WEAK_FUNC(sub_8315DE4C);
PPC_FUNC_IMPL(__imp__sub_8315DE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DE50"))) PPC_WEAK_FUNC(sub_8315DE50);
PPC_FUNC_IMPL(__imp__sub_8315DE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25612
	ctx.r3.s64 = ctx.r11.s64 + 25612;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DE5C"))) PPC_WEAK_FUNC(sub_8315DE5C);
PPC_FUNC_IMPL(__imp__sub_8315DE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DE60"))) PPC_WEAK_FUNC(sub_8315DE60);
PPC_FUNC_IMPL(__imp__sub_8315DE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25636
	ctx.r3.s64 = ctx.r11.s64 + 25636;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DE6C"))) PPC_WEAK_FUNC(sub_8315DE6C);
PPC_FUNC_IMPL(__imp__sub_8315DE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DE70"))) PPC_WEAK_FUNC(sub_8315DE70);
PPC_FUNC_IMPL(__imp__sub_8315DE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25660
	ctx.r3.s64 = ctx.r11.s64 + 25660;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DE7C"))) PPC_WEAK_FUNC(sub_8315DE7C);
PPC_FUNC_IMPL(__imp__sub_8315DE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DE80"))) PPC_WEAK_FUNC(sub_8315DE80);
PPC_FUNC_IMPL(__imp__sub_8315DE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25684
	ctx.r3.s64 = ctx.r11.s64 + 25684;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DE8C"))) PPC_WEAK_FUNC(sub_8315DE8C);
PPC_FUNC_IMPL(__imp__sub_8315DE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DE90"))) PPC_WEAK_FUNC(sub_8315DE90);
PPC_FUNC_IMPL(__imp__sub_8315DE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25708
	ctx.r3.s64 = ctx.r11.s64 + 25708;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DE9C"))) PPC_WEAK_FUNC(sub_8315DE9C);
PPC_FUNC_IMPL(__imp__sub_8315DE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DEA0"))) PPC_WEAK_FUNC(sub_8315DEA0);
PPC_FUNC_IMPL(__imp__sub_8315DEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25732
	ctx.r3.s64 = ctx.r11.s64 + 25732;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DEAC"))) PPC_WEAK_FUNC(sub_8315DEAC);
PPC_FUNC_IMPL(__imp__sub_8315DEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DEB0"))) PPC_WEAK_FUNC(sub_8315DEB0);
PPC_FUNC_IMPL(__imp__sub_8315DEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25756
	ctx.r3.s64 = ctx.r11.s64 + 25756;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DEBC"))) PPC_WEAK_FUNC(sub_8315DEBC);
PPC_FUNC_IMPL(__imp__sub_8315DEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DEC0"))) PPC_WEAK_FUNC(sub_8315DEC0);
PPC_FUNC_IMPL(__imp__sub_8315DEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25780
	ctx.r3.s64 = ctx.r11.s64 + 25780;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DECC"))) PPC_WEAK_FUNC(sub_8315DECC);
PPC_FUNC_IMPL(__imp__sub_8315DECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DED0"))) PPC_WEAK_FUNC(sub_8315DED0);
PPC_FUNC_IMPL(__imp__sub_8315DED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25804
	ctx.r3.s64 = ctx.r11.s64 + 25804;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DEDC"))) PPC_WEAK_FUNC(sub_8315DEDC);
PPC_FUNC_IMPL(__imp__sub_8315DEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DEE0"))) PPC_WEAK_FUNC(sub_8315DEE0);
PPC_FUNC_IMPL(__imp__sub_8315DEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25828
	ctx.r3.s64 = ctx.r11.s64 + 25828;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DEEC"))) PPC_WEAK_FUNC(sub_8315DEEC);
PPC_FUNC_IMPL(__imp__sub_8315DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DEF0"))) PPC_WEAK_FUNC(sub_8315DEF0);
PPC_FUNC_IMPL(__imp__sub_8315DEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25852
	ctx.r3.s64 = ctx.r11.s64 + 25852;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DEFC"))) PPC_WEAK_FUNC(sub_8315DEFC);
PPC_FUNC_IMPL(__imp__sub_8315DEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DF00"))) PPC_WEAK_FUNC(sub_8315DF00);
PPC_FUNC_IMPL(__imp__sub_8315DF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25876
	ctx.r3.s64 = ctx.r11.s64 + 25876;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF0C"))) PPC_WEAK_FUNC(sub_8315DF0C);
PPC_FUNC_IMPL(__imp__sub_8315DF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DF10"))) PPC_WEAK_FUNC(sub_8315DF10);
PPC_FUNC_IMPL(__imp__sub_8315DF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25900
	ctx.r3.s64 = ctx.r11.s64 + 25900;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF1C"))) PPC_WEAK_FUNC(sub_8315DF1C);
PPC_FUNC_IMPL(__imp__sub_8315DF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DF20"))) PPC_WEAK_FUNC(sub_8315DF20);
PPC_FUNC_IMPL(__imp__sub_8315DF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25924
	ctx.r3.s64 = ctx.r11.s64 + 25924;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF2C"))) PPC_WEAK_FUNC(sub_8315DF2C);
PPC_FUNC_IMPL(__imp__sub_8315DF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DF30"))) PPC_WEAK_FUNC(sub_8315DF30);
PPC_FUNC_IMPL(__imp__sub_8315DF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25948
	ctx.r3.s64 = ctx.r11.s64 + 25948;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF3C"))) PPC_WEAK_FUNC(sub_8315DF3C);
PPC_FUNC_IMPL(__imp__sub_8315DF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DF40"))) PPC_WEAK_FUNC(sub_8315DF40);
PPC_FUNC_IMPL(__imp__sub_8315DF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25972
	ctx.r3.s64 = ctx.r11.s64 + 25972;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF4C"))) PPC_WEAK_FUNC(sub_8315DF4C);
PPC_FUNC_IMPL(__imp__sub_8315DF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DF50"))) PPC_WEAK_FUNC(sub_8315DF50);
PPC_FUNC_IMPL(__imp__sub_8315DF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,25996
	ctx.r3.s64 = ctx.r11.s64 + 25996;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF5C"))) PPC_WEAK_FUNC(sub_8315DF5C);
PPC_FUNC_IMPL(__imp__sub_8315DF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DF60"))) PPC_WEAK_FUNC(sub_8315DF60);
PPC_FUNC_IMPL(__imp__sub_8315DF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,26020
	ctx.r3.s64 = ctx.r11.s64 + 26020;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF6C"))) PPC_WEAK_FUNC(sub_8315DF6C);
PPC_FUNC_IMPL(__imp__sub_8315DF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DF70"))) PPC_WEAK_FUNC(sub_8315DF70);
PPC_FUNC_IMPL(__imp__sub_8315DF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,26044
	ctx.r3.s64 = ctx.r11.s64 + 26044;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF7C"))) PPC_WEAK_FUNC(sub_8315DF7C);
PPC_FUNC_IMPL(__imp__sub_8315DF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DF80"))) PPC_WEAK_FUNC(sub_8315DF80);
PPC_FUNC_IMPL(__imp__sub_8315DF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,26068
	ctx.r3.s64 = ctx.r11.s64 + 26068;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF8C"))) PPC_WEAK_FUNC(sub_8315DF8C);
PPC_FUNC_IMPL(__imp__sub_8315DF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DF90"))) PPC_WEAK_FUNC(sub_8315DF90);
PPC_FUNC_IMPL(__imp__sub_8315DF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,26092
	ctx.r3.s64 = ctx.r11.s64 + 26092;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF9C"))) PPC_WEAK_FUNC(sub_8315DF9C);
PPC_FUNC_IMPL(__imp__sub_8315DF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DFA0"))) PPC_WEAK_FUNC(sub_8315DFA0);
PPC_FUNC_IMPL(__imp__sub_8315DFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,26116
	ctx.r3.s64 = ctx.r11.s64 + 26116;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DFAC"))) PPC_WEAK_FUNC(sub_8315DFAC);
PPC_FUNC_IMPL(__imp__sub_8315DFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DFB0"))) PPC_WEAK_FUNC(sub_8315DFB0);
PPC_FUNC_IMPL(__imp__sub_8315DFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,26140
	ctx.r3.s64 = ctx.r11.s64 + 26140;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DFBC"))) PPC_WEAK_FUNC(sub_8315DFBC);
PPC_FUNC_IMPL(__imp__sub_8315DFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DFC0"))) PPC_WEAK_FUNC(sub_8315DFC0);
PPC_FUNC_IMPL(__imp__sub_8315DFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,26164
	ctx.r3.s64 = ctx.r11.s64 + 26164;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DFCC"))) PPC_WEAK_FUNC(sub_8315DFCC);
PPC_FUNC_IMPL(__imp__sub_8315DFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DFD0"))) PPC_WEAK_FUNC(sub_8315DFD0);
PPC_FUNC_IMPL(__imp__sub_8315DFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,26188
	ctx.r3.s64 = ctx.r11.s64 + 26188;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DFDC"))) PPC_WEAK_FUNC(sub_8315DFDC);
PPC_FUNC_IMPL(__imp__sub_8315DFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DFE0"))) PPC_WEAK_FUNC(sub_8315DFE0);
PPC_FUNC_IMPL(__imp__sub_8315DFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,26212
	ctx.r3.s64 = ctx.r11.s64 + 26212;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DFEC"))) PPC_WEAK_FUNC(sub_8315DFEC);
PPC_FUNC_IMPL(__imp__sub_8315DFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315DFF0"))) PPC_WEAK_FUNC(sub_8315DFF0);
PPC_FUNC_IMPL(__imp__sub_8315DFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,26236
	ctx.r3.s64 = ctx.r11.s64 + 26236;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DFFC"))) PPC_WEAK_FUNC(sub_8315DFFC);
PPC_FUNC_IMPL(__imp__sub_8315DFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E000"))) PPC_WEAK_FUNC(sub_8315E000);
PPC_FUNC_IMPL(__imp__sub_8315E000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,26260
	ctx.r3.s64 = ctx.r11.s64 + 26260;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E00C"))) PPC_WEAK_FUNC(sub_8315E00C);
PPC_FUNC_IMPL(__imp__sub_8315E00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E010"))) PPC_WEAK_FUNC(sub_8315E010);
PPC_FUNC_IMPL(__imp__sub_8315E010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,26284
	ctx.r3.s64 = ctx.r11.s64 + 26284;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E01C"))) PPC_WEAK_FUNC(sub_8315E01C);
PPC_FUNC_IMPL(__imp__sub_8315E01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E020"))) PPC_WEAK_FUNC(sub_8315E020);
PPC_FUNC_IMPL(__imp__sub_8315E020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,26308
	ctx.r3.s64 = ctx.r11.s64 + 26308;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E02C"))) PPC_WEAK_FUNC(sub_8315E02C);
PPC_FUNC_IMPL(__imp__sub_8315E02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E030"))) PPC_WEAK_FUNC(sub_8315E030);
PPC_FUNC_IMPL(__imp__sub_8315E030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,26332
	ctx.r3.s64 = ctx.r11.s64 + 26332;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E03C"))) PPC_WEAK_FUNC(sub_8315E03C);
PPC_FUNC_IMPL(__imp__sub_8315E03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E040"))) PPC_WEAK_FUNC(sub_8315E040);
PPC_FUNC_IMPL(__imp__sub_8315E040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,26356
	ctx.r3.s64 = ctx.r11.s64 + 26356;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E04C"))) PPC_WEAK_FUNC(sub_8315E04C);
PPC_FUNC_IMPL(__imp__sub_8315E04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E050"))) PPC_WEAK_FUNC(sub_8315E050);
PPC_FUNC_IMPL(__imp__sub_8315E050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,26380
	ctx.r3.s64 = ctx.r11.s64 + 26380;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E05C"))) PPC_WEAK_FUNC(sub_8315E05C);
PPC_FUNC_IMPL(__imp__sub_8315E05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E060"))) PPC_WEAK_FUNC(sub_8315E060);
PPC_FUNC_IMPL(__imp__sub_8315E060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27240
	ctx.r3.s64 = ctx.r11.s64 + 27240;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E06C"))) PPC_WEAK_FUNC(sub_8315E06C);
PPC_FUNC_IMPL(__imp__sub_8315E06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E070"))) PPC_WEAK_FUNC(sub_8315E070);
PPC_FUNC_IMPL(__imp__sub_8315E070) {
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
	// bl 0x826f1e28
	ctx.lr = 0x8315E084;
	sub_826F1E28(ctx, base);
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r31,r10,13672
	ctx.r31.s64 = ctx.r10.s64 + 13672;
	// stb r11,13672(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13672, ctx.r11.u8);
	// stfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f1.u64);
	// bl 0x826f1e28
	ctx.lr = 0x8315E09C;
	sub_826F1E28(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfd f1,24(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.f1.u64);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27320
	ctx.r3.s64 = ctx.r11.s64 + 27320;
	// bl 0x82fa2318
	ctx.lr = 0x8315E0B4;
	sub_82FA2318(ctx, base);
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

__attribute__((alias("__imp__sub_8315E0C8"))) PPC_WEAK_FUNC(sub_8315E0C8);
PPC_FUNC_IMPL(__imp__sub_8315E0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27400
	ctx.r3.s64 = ctx.r11.s64 + 27400;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E0D4"))) PPC_WEAK_FUNC(sub_8315E0D4);
PPC_FUNC_IMPL(__imp__sub_8315E0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E0D8"))) PPC_WEAK_FUNC(sub_8315E0D8);
PPC_FUNC_IMPL(__imp__sub_8315E0D8) {
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
	// bl 0x826f1e28
	ctx.lr = 0x8315E0EC;
	sub_826F1E28(ctx, base);
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r31,r10,13704
	ctx.r31.s64 = ctx.r10.s64 + 13704;
	// stb r11,13704(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13704, ctx.r11.u8);
	// stfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f1.u64);
	// bl 0x826f1e28
	ctx.lr = 0x8315E104;
	sub_826F1E28(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfd f1,24(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.f1.u64);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// bl 0x826f1e28
	ctx.lr = 0x8315E114;
	sub_826F1E28(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfd f1,40(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.f1.u64);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// bl 0x826f1e28
	ctx.lr = 0x8315E124;
	sub_826F1E28(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfd f1,56(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.f1.u64);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27480
	ctx.r3.s64 = ctx.r11.s64 + 27480;
	// bl 0x82fa2318
	ctx.lr = 0x8315E13C;
	sub_82FA2318(ctx, base);
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

__attribute__((alias("__imp__sub_8315E150"))) PPC_WEAK_FUNC(sub_8315E150);
PPC_FUNC_IMPL(__imp__sub_8315E150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27560
	ctx.r3.s64 = ctx.r11.s64 + 27560;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E15C"))) PPC_WEAK_FUNC(sub_8315E15C);
PPC_FUNC_IMPL(__imp__sub_8315E15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E160"))) PPC_WEAK_FUNC(sub_8315E160);
PPC_FUNC_IMPL(__imp__sub_8315E160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27584
	ctx.r3.s64 = ctx.r11.s64 + 27584;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E16C"))) PPC_WEAK_FUNC(sub_8315E16C);
PPC_FUNC_IMPL(__imp__sub_8315E16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E170"))) PPC_WEAK_FUNC(sub_8315E170);
PPC_FUNC_IMPL(__imp__sub_8315E170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27608
	ctx.r3.s64 = ctx.r11.s64 + 27608;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E17C"))) PPC_WEAK_FUNC(sub_8315E17C);
PPC_FUNC_IMPL(__imp__sub_8315E17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E180"))) PPC_WEAK_FUNC(sub_8315E180);
PPC_FUNC_IMPL(__imp__sub_8315E180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,28136
	ctx.r3.s64 = ctx.r11.s64 + 28136;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E18C"))) PPC_WEAK_FUNC(sub_8315E18C);
PPC_FUNC_IMPL(__imp__sub_8315E18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E190"))) PPC_WEAK_FUNC(sub_8315E190);
PPC_FUNC_IMPL(__imp__sub_8315E190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,28160
	ctx.r3.s64 = ctx.r11.s64 + 28160;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E19C"))) PPC_WEAK_FUNC(sub_8315E19C);
PPC_FUNC_IMPL(__imp__sub_8315E19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E1A0"))) PPC_WEAK_FUNC(sub_8315E1A0);
PPC_FUNC_IMPL(__imp__sub_8315E1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,28184
	ctx.r3.s64 = ctx.r11.s64 + 28184;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E1AC"))) PPC_WEAK_FUNC(sub_8315E1AC);
PPC_FUNC_IMPL(__imp__sub_8315E1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E1B0"))) PPC_WEAK_FUNC(sub_8315E1B0);
PPC_FUNC_IMPL(__imp__sub_8315E1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,28208
	ctx.r3.s64 = ctx.r11.s64 + 28208;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E1BC"))) PPC_WEAK_FUNC(sub_8315E1BC);
PPC_FUNC_IMPL(__imp__sub_8315E1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E1C0"))) PPC_WEAK_FUNC(sub_8315E1C0);
PPC_FUNC_IMPL(__imp__sub_8315E1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,28232
	ctx.r3.s64 = ctx.r11.s64 + 28232;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E1CC"))) PPC_WEAK_FUNC(sub_8315E1CC);
PPC_FUNC_IMPL(__imp__sub_8315E1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E1D0"))) PPC_WEAK_FUNC(sub_8315E1D0);
PPC_FUNC_IMPL(__imp__sub_8315E1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,28256
	ctx.r3.s64 = ctx.r11.s64 + 28256;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E1DC"))) PPC_WEAK_FUNC(sub_8315E1DC);
PPC_FUNC_IMPL(__imp__sub_8315E1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E1E0"))) PPC_WEAK_FUNC(sub_8315E1E0);
PPC_FUNC_IMPL(__imp__sub_8315E1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,28280
	ctx.r3.s64 = ctx.r11.s64 + 28280;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E1EC"))) PPC_WEAK_FUNC(sub_8315E1EC);
PPC_FUNC_IMPL(__imp__sub_8315E1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E1F0"))) PPC_WEAK_FUNC(sub_8315E1F0);
PPC_FUNC_IMPL(__imp__sub_8315E1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,28304
	ctx.r3.s64 = ctx.r11.s64 + 28304;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E1FC"))) PPC_WEAK_FUNC(sub_8315E1FC);
PPC_FUNC_IMPL(__imp__sub_8315E1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E200"))) PPC_WEAK_FUNC(sub_8315E200);
PPC_FUNC_IMPL(__imp__sub_8315E200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,28328
	ctx.r3.s64 = ctx.r11.s64 + 28328;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E20C"))) PPC_WEAK_FUNC(sub_8315E20C);
PPC_FUNC_IMPL(__imp__sub_8315E20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E210"))) PPC_WEAK_FUNC(sub_8315E210);
PPC_FUNC_IMPL(__imp__sub_8315E210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,28352
	ctx.r3.s64 = ctx.r11.s64 + 28352;
	// b 0x826c3080
	sub_826C3080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E21C"))) PPC_WEAK_FUNC(sub_8315E21C);
PPC_FUNC_IMPL(__imp__sub_8315E21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E220"))) PPC_WEAK_FUNC(sub_8315E220);
PPC_FUNC_IMPL(__imp__sub_8315E220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E22C"))) PPC_WEAK_FUNC(sub_8315E22C);
PPC_FUNC_IMPL(__imp__sub_8315E22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E230"))) PPC_WEAK_FUNC(sub_8315E230);
PPC_FUNC_IMPL(__imp__sub_8315E230) {
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
	// bl 0x826c89e0
	ctx.lr = 0x8315E240;
	sub_826C89E0(ctx, base);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,28380
	ctx.r11.s64 = ctx.r11.s64 + 28380;
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8315E258:
	// rlwinm r9,r10,13,0,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r9,r10,15,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8315e258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8315E258;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// li r9,7
	ctx.r9.s64 = 7;
	// ori r10,r10,34756
	ctx.r10.u64 = ctx.r10.u64 | 34756;
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E29C"))) PPC_WEAK_FUNC(sub_8315E29C);
PPC_FUNC_IMPL(__imp__sub_8315E29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E2A0"))) PPC_WEAK_FUNC(sub_8315E2A0);
PPC_FUNC_IMPL(__imp__sub_8315E2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27888
	ctx.r3.s64 = ctx.r11.s64 + 27888;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E2AC"))) PPC_WEAK_FUNC(sub_8315E2AC);
PPC_FUNC_IMPL(__imp__sub_8315E2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E2B0"))) PPC_WEAK_FUNC(sub_8315E2B0);
PPC_FUNC_IMPL(__imp__sub_8315E2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27912
	ctx.r3.s64 = ctx.r11.s64 + 27912;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E2BC"))) PPC_WEAK_FUNC(sub_8315E2BC);
PPC_FUNC_IMPL(__imp__sub_8315E2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E2C0"))) PPC_WEAK_FUNC(sub_8315E2C0);
PPC_FUNC_IMPL(__imp__sub_8315E2C0) {
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
	// bl 0x82661168
	ctx.lr = 0x8315E2D0;
	sub_82661168(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// stw r3,13856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13856, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E2E8"))) PPC_WEAK_FUNC(sub_8315E2E8);
PPC_FUNC_IMPL(__imp__sub_8315E2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27936
	ctx.r3.s64 = ctx.r11.s64 + 27936;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E2F4"))) PPC_WEAK_FUNC(sub_8315E2F4);
PPC_FUNC_IMPL(__imp__sub_8315E2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E2F8"))) PPC_WEAK_FUNC(sub_8315E2F8);
PPC_FUNC_IMPL(__imp__sub_8315E2F8) {
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
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,13892
	ctx.r3.s64 = ctx.r11.s64 + 13892;
	// bl 0x8283b590
	ctx.lr = 0x8315E310;
	sub_8283B590(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,27960
	ctx.r3.s64 = ctx.r11.s64 + 27960;
	// bl 0x82fa2318
	ctx.lr = 0x8315E31C;
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

__attribute__((alias("__imp__sub_8315E32C"))) PPC_WEAK_FUNC(sub_8315E32C);
PPC_FUNC_IMPL(__imp__sub_8315E32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E330"))) PPC_WEAK_FUNC(sub_8315E330);
PPC_FUNC_IMPL(__imp__sub_8315E330) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r31,r11,-14732
	ctx.r31.s64 = ctx.r11.s64 + -14732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828454d0
	ctx.lr = 0x8315E354;
	sub_828454D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r3,r10,28000
	ctx.r3.s64 = ctx.r10.s64 + 28000;
	// bl 0x82fa2318
	ctx.lr = 0x8315E368;
	sub_82FA2318(ctx, base);
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

__attribute__((alias("__imp__sub_8315E37C"))) PPC_WEAK_FUNC(sub_8315E37C);
PPC_FUNC_IMPL(__imp__sub_8315E37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315E380"))) PPC_WEAK_FUNC(sub_8315E380);
PPC_FUNC_IMPL(__imp__sub_8315E380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,-14688(r11)
	PPC_STORE_U64(ctx.r11.u32 + -14688, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E390"))) PPC_WEAK_FUNC(sub_8315E390);
PPC_FUNC_IMPL(__imp__sub_8315E390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,-14504(r11)
	PPC_STORE_U64(ctx.r11.u32 + -14504, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E3A0"))) PPC_WEAK_FUNC(sub_8315E3A0);
PPC_FUNC_IMPL(__imp__sub_8315E3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,-14512(r11)
	PPC_STORE_U64(ctx.r11.u32 + -14512, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E3B0"))) PPC_WEAK_FUNC(sub_8315E3B0);
PPC_FUNC_IMPL(__imp__sub_8315E3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r3,r11,14384
	ctx.r3.s64 = ctx.r11.s64 + 14384;
	// b 0x828979a0
	sub_828979A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E3BC"))) PPC_WEAK_FUNC(sub_8315E3BC);
PPC_FUNC_IMPL(__imp__sub_8315E3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

