#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83160540"))) PPC_WEAK_FUNC(sub_83160540);
PPC_FUNC_IMPL(__imp__sub_83160540) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a781f0
	ctx.lr = 0x83160554;
	sub_82A781F0(ctx, base);
	// lis r6,-31962
	ctx.r6.s64 = -2094661632;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r3,r6,-9576
	ctx.r3.s64 = ctx.r6.s64 + -9576;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfd f0,22472(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22472);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfd f0,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.f0.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfd f0,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.f0.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfd f0,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.f0.u64);
	// std r11,-9576(r6)
	PPC_STORE_U64(ctx.r6.u32 + -9576, ctx.r11.u64);
	// lfd f13,22528(r4)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + 22528);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// std r9,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r9.u64);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fdiv f0,f13,f12
	ctx.f0.f64 = ctx.f13.f64 / ctx.f12.f64;
	// stfd f0,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f0.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831605C0"))) PPC_WEAK_FUNC(sub_831605C0);
PPC_FUNC_IMPL(__imp__sub_831605C0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a781f0
	ctx.lr = 0x831605D4;
	sub_82A781F0(ctx, base);
	// lis r6,-31962
	ctx.r6.s64 = -2094661632;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r3,r6,-9704
	ctx.r3.s64 = ctx.r6.s64 + -9704;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfd f0,22472(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22472);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfd f0,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.f0.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfd f0,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.f0.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfd f0,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.f0.u64);
	// std r11,-9704(r6)
	PPC_STORE_U64(ctx.r6.u32 + -9704, ctx.r11.u64);
	// lfd f13,22528(r4)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + 22528);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// std r9,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r9.u64);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fdiv f0,f13,f12
	ctx.f0.f64 = ctx.f13.f64 / ctx.f12.f64;
	// stfd f0,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f0.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160640"))) PPC_WEAK_FUNC(sub_83160640);
PPC_FUNC_IMPL(__imp__sub_83160640) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a781f0
	ctx.lr = 0x83160654;
	sub_82A781F0(ctx, base);
	// lis r6,-31962
	ctx.r6.s64 = -2094661632;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r3,r6,-9896
	ctx.r3.s64 = ctx.r6.s64 + -9896;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfd f0,22472(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22472);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfd f0,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.f0.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfd f0,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.f0.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfd f0,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.f0.u64);
	// std r11,-9896(r6)
	PPC_STORE_U64(ctx.r6.u32 + -9896, ctx.r11.u64);
	// lfd f13,22528(r4)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + 22528);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// std r9,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r9.u64);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fdiv f0,f13,f12
	ctx.f0.f64 = ctx.f13.f64 / ctx.f12.f64;
	// stfd f0,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f0.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831606C0"))) PPC_WEAK_FUNC(sub_831606C0);
PPC_FUNC_IMPL(__imp__sub_831606C0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a781f0
	ctx.lr = 0x831606D4;
	sub_82A781F0(ctx, base);
	// lis r6,-31962
	ctx.r6.s64 = -2094661632;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r3,r6,-9640
	ctx.r3.s64 = ctx.r6.s64 + -9640;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfd f0,22472(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22472);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfd f0,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.f0.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfd f0,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.f0.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfd f0,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.f0.u64);
	// std r11,-9640(r6)
	PPC_STORE_U64(ctx.r6.u32 + -9640, ctx.r11.u64);
	// lfd f13,22528(r4)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + 22528);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// std r9,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r9.u64);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fdiv f0,f13,f12
	ctx.f0.f64 = ctx.f13.f64 / ctx.f12.f64;
	// stfd f0,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f0.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160740"))) PPC_WEAK_FUNC(sub_83160740);
PPC_FUNC_IMPL(__imp__sub_83160740) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a781f0
	ctx.lr = 0x83160754;
	sub_82A781F0(ctx, base);
	// lis r6,-31962
	ctx.r6.s64 = -2094661632;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r3,r6,-9768
	ctx.r3.s64 = ctx.r6.s64 + -9768;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfd f0,22472(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22472);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfd f0,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.f0.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfd f0,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.f0.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfd f0,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.f0.u64);
	// std r11,-9768(r6)
	PPC_STORE_U64(ctx.r6.u32 + -9768, ctx.r11.u64);
	// lfd f13,22528(r4)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + 22528);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// std r9,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r9.u64);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fdiv f0,f13,f12
	ctx.f0.f64 = ctx.f13.f64 / ctx.f12.f64;
	// stfd f0,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f0.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831607C0"))) PPC_WEAK_FUNC(sub_831607C0);
PPC_FUNC_IMPL(__imp__sub_831607C0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a781f0
	ctx.lr = 0x831607D4;
	sub_82A781F0(ctx, base);
	// lis r6,-31962
	ctx.r6.s64 = -2094661632;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r3,r6,-9832
	ctx.r3.s64 = ctx.r6.s64 + -9832;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfd f0,22472(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22472);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfd f0,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.f0.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfd f0,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.f0.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfd f0,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.f0.u64);
	// std r11,-9832(r6)
	PPC_STORE_U64(ctx.r6.u32 + -9832, ctx.r11.u64);
	// lfd f13,22528(r4)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + 22528);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// std r9,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r9.u64);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fdiv f0,f13,f12
	ctx.f0.f64 = ctx.f13.f64 / ctx.f12.f64;
	// stfd f0,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f0.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160840"))) PPC_WEAK_FUNC(sub_83160840);
PPC_FUNC_IMPL(__imp__sub_83160840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-31975
	ctx.r8.s64 = -2095513600;
	// lfs f0,11556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,24436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,-9536(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + -9536, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316086C"))) PPC_WEAK_FUNC(sub_8316086C);
PPC_FUNC_IMPL(__imp__sub_8316086C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160870"))) PPC_WEAK_FUNC(sub_83160870);
PPC_FUNC_IMPL(__imp__sub_83160870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r11,r11,-9448
	ctx.r11.s64 = ctx.r11.s64 + -9448;
	// addi r7,r10,-8384
	ctx.r7.s64 = ctx.r10.s64 + -8384;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160890:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160890;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_831608AC:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x831608ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831608AC;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,72
	ctx.r9.s64 = ctx.r11.s64 + 72;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_831608C8:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x831608c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831608C8;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 + 112;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_831608E4:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x831608e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831608E4;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,152
	ctx.r9.s64 = ctx.r11.s64 + 152;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160900:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160900;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,192
	ctx.r9.s64 = ctx.r11.s64 + 192;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8316091C:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8316091c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8316091C;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,232
	ctx.r9.s64 = ctx.r11.s64 + 232;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160938:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160938
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160938;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,272
	ctx.r9.s64 = ctx.r11.s64 + 272;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160954:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160954
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160954;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,312
	ctx.r9.s64 = ctx.r11.s64 + 312;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160970:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160970;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,352
	ctx.r9.s64 = ctx.r11.s64 + 352;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8316098C:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8316098c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8316098C;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,392
	ctx.r9.s64 = ctx.r11.s64 + 392;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_831609A8:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x831609a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831609A8;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,432
	ctx.r9.s64 = ctx.r11.s64 + 432;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_831609C4:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x831609c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831609C4;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r6,r10,-8344
	ctx.r6.s64 = ctx.r10.s64 + -8344;
	// addi r9,r11,472
	ctx.r9.s64 = ctx.r11.s64 + 472;
	// addi r10,r6,-8
	ctx.r10.s64 = ctx.r6.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_831609E8:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x831609e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831609E8;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,512
	ctx.r9.s64 = ctx.r11.s64 + 512;
	// addi r10,r6,-8
	ctx.r10.s64 = ctx.r6.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160A04:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160a04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160A04;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,552
	ctx.r9.s64 = ctx.r11.s64 + 552;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160A20:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160a20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160A20;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,592
	ctx.r9.s64 = ctx.r11.s64 + 592;
	// addi r10,r6,-8
	ctx.r10.s64 = ctx.r6.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160A3C:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160a3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160A3C;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,632
	ctx.r9.s64 = ctx.r11.s64 + 632;
	// addi r10,r6,-8
	ctx.r10.s64 = ctx.r6.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160A58:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160a58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160A58;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,672
	ctx.r9.s64 = ctx.r11.s64 + 672;
	// addi r10,r6,-8
	ctx.r10.s64 = ctx.r6.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160A74:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160a74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160A74;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,712
	ctx.r9.s64 = ctx.r11.s64 + 712;
	// addi r10,r6,-8
	ctx.r10.s64 = ctx.r6.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160A90:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160A90;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,752
	ctx.r9.s64 = ctx.r11.s64 + 752;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160AAC:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160aac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160AAC;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,792
	ctx.r9.s64 = ctx.r11.s64 + 792;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160AC8:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160ac8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160AC8;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,832
	ctx.r9.s64 = ctx.r11.s64 + 832;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160AE4:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160ae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160AE4;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,872
	ctx.r9.s64 = ctx.r11.s64 + 872;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160B00:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160b00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160B00;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,912
	ctx.r9.s64 = ctx.r11.s64 + 912;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160B1C:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160b1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160B1C;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,952
	ctx.r9.s64 = ctx.r11.s64 + 952;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160B38:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160b38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160B38;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,992
	ctx.r9.s64 = ctx.r11.s64 + 992;
	// addi r10,r6,-8
	ctx.r10.s64 = ctx.r6.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160B54:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160b54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160B54;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,1032
	ctx.r9.s64 = ctx.r11.s64 + 1032;
	// addi r10,r6,-8
	ctx.r10.s64 = ctx.r6.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160B70:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160b70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160B70;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,1072
	ctx.r9.s64 = ctx.r11.s64 + 1072;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160B8C:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160b8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160B8C;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,1112
	ctx.r9.s64 = ctx.r11.s64 + 1112;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160BA8:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160ba8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160BA8;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,1152
	ctx.r9.s64 = ctx.r11.s64 + 1152;
	// addi r10,r6,-8
	ctx.r10.s64 = ctx.r6.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160BC4:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160bc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160BC4;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r9,r11,1192
	ctx.r9.s64 = ctx.r11.s64 + 1192;
	// addi r10,r6,-8
	ctx.r10.s64 = ctx.r6.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83160BE0:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83160be0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83160BE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1240
	ctx.r9.s64 = ctx.r11.s64 + 1240;
	// std r10,1240(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1240, ctx.r10.u64);
	// std r10,1248(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1248, ctx.r10.u64);
	// std r10,1256(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1256, ctx.r10.u64);
	// std r10,1264(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1264, ctx.r10.u64);
	// std r10,1272(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1272, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160C0C"))) PPC_WEAK_FUNC(sub_83160C0C);
PPC_FUNC_IMPL(__imp__sub_83160C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160C10"))) PPC_WEAK_FUNC(sub_83160C10);
PPC_FUNC_IMPL(__imp__sub_83160C10) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r3,r11,-7456
	ctx.r3.s64 = ctx.r11.s64 + -7456;
	// bl 0x82a8d250
	ctx.lr = 0x83160C28;
	sub_82A8D250(ctx, base);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30968
	ctx.r3.s64 = ctx.r11.s64 + -30968;
	// bl 0x82fa2318
	ctx.lr = 0x83160C34;
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

__attribute__((alias("__imp__sub_83160C44"))) PPC_WEAK_FUNC(sub_83160C44);
PPC_FUNC_IMPL(__imp__sub_83160C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83160C48"))) PPC_WEAK_FUNC(sub_83160C48);
PPC_FUNC_IMPL(__imp__sub_83160C48) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r5,504
	ctx.r5.s64 = 504;
	// addi r31,r11,-5760
	ctx.r31.s64 = ctx.r11.s64 + -5760;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82fa7cf0
	ctx.lr = 0x83160C70;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-2768
	ctx.r4.s64 = ctx.r11.s64 + -2768;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82fa77c0
	ctx.lr = 0x83160C84;
	sub_82FA77C0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82fa7cf0
	ctx.lr = 0x83160C94;
	sub_82FA7CF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83160CD8"))) PPC_WEAK_FUNC(sub_83160CD8);
PPC_FUNC_IMPL(__imp__sub_83160CD8) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r5,502
	ctx.r5.s64 = 502;
	// addi r31,r11,-4688
	ctx.r31.s64 = ctx.r11.s64 + -4688;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,26
	ctx.r3.s64 = ctx.r31.s64 + 26;
	// bl 0x82fa7cf0
	ctx.lr = 0x83160D00;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-2768
	ctx.r4.s64 = ctx.r11.s64 + -2768;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82fa77c0
	ctx.lr = 0x83160D14;
	sub_82FA77C0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82fa7cf0
	ctx.lr = 0x83160D24;
	sub_82FA7CF0(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83160D68"))) PPC_WEAK_FUNC(sub_83160D68);
PPC_FUNC_IMPL(__imp__sub_83160D68) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,-3616
	ctx.r31.s64 = ctx.r11.s64 + -3616;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bl 0x82fa7cf0
	ctx.lr = 0x83160D90;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-2768
	ctx.r4.s64 = ctx.r11.s64 + -2768;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82fa77c0
	ctx.lr = 0x83160DA4;
	sub_82FA77C0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82fa7cf0
	ctx.lr = 0x83160DB4;
	sub_82FA7CF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83160DF8"))) PPC_WEAK_FUNC(sub_83160DF8);
PPC_FUNC_IMPL(__imp__sub_83160DF8) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r5,480
	ctx.r5.s64 = 480;
	// addi r31,r11,-2544
	ctx.r31.s64 = ctx.r11.s64 + -2544;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82fa7cf0
	ctx.lr = 0x83160E20;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-2768
	ctx.r4.s64 = ctx.r11.s64 + -2768;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82fa77c0
	ctx.lr = 0x83160E34;
	sub_82FA77C0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82fa7cf0
	ctx.lr = 0x83160E44;
	sub_82FA7CF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83160E88"))) PPC_WEAK_FUNC(sub_83160E88);
PPC_FUNC_IMPL(__imp__sub_83160E88) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r5,484
	ctx.r5.s64 = 484;
	// addi r31,r11,-1472
	ctx.r31.s64 = ctx.r11.s64 + -1472;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x82fa7cf0
	ctx.lr = 0x83160EB0;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-2768
	ctx.r4.s64 = ctx.r11.s64 + -2768;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82fa77c0
	ctx.lr = 0x83160EC4;
	sub_82FA77C0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82fa7cf0
	ctx.lr = 0x83160ED4;
	sub_82FA7CF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83160F18"))) PPC_WEAK_FUNC(sub_83160F18);
PPC_FUNC_IMPL(__imp__sub_83160F18) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r5,488
	ctx.r5.s64 = 488;
	// addi r31,r11,-400
	ctx.r31.s64 = ctx.r11.s64 + -400;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82fa7cf0
	ctx.lr = 0x83160F40;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-2768
	ctx.r4.s64 = ctx.r11.s64 + -2768;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82fa77c0
	ctx.lr = 0x83160F54;
	sub_82FA77C0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82fa7cf0
	ctx.lr = 0x83160F64;
	sub_82FA7CF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83160FA8"))) PPC_WEAK_FUNC(sub_83160FA8);
PPC_FUNC_IMPL(__imp__sub_83160FA8) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,672
	ctx.r31.s64 = ctx.r11.s64 + 672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bl 0x82fa7cf0
	ctx.lr = 0x83160FD0;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-2768
	ctx.r4.s64 = ctx.r11.s64 + -2768;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82fa77c0
	ctx.lr = 0x83160FE4;
	sub_82FA77C0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82fa7cf0
	ctx.lr = 0x83160FF4;
	sub_82FA7CF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83161038"))) PPC_WEAK_FUNC(sub_83161038);
PPC_FUNC_IMPL(__imp__sub_83161038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-31975
	ctx.r8.s64 = -2095513600;
	// lfd f0,21528(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 21528);
	// addi r11,r8,2728
	ctx.r11.s64 = ctx.r8.s64 + 2728;
	// fsqrt f12,f0
	ctx.f12.f64 = sqrt(ctx.f0.f64);
	// lfd f0,31408(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 31408);
	// lfd f13,1600(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1600);
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fsqrts f0,f13
	ctx.f0.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83161074"))) PPC_WEAK_FUNC(sub_83161074);
PPC_FUNC_IMPL(__imp__sub_83161074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83161078"))) PPC_WEAK_FUNC(sub_83161078);
PPC_FUNC_IMPL(__imp__sub_83161078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// lfd f0,11528(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 11528);
	// fsqrt f13,f0
	ctx.f13.f64 = sqrt(ctx.f0.f64);
	// lfd f0,22528(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22528);
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,-26024(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -26024, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831610A0"))) PPC_WEAK_FUNC(sub_831610A0);
PPC_FUNC_IMPL(__imp__sub_831610A0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f2,-24648(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -24648);
	// lfd f1,11528(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11528);
	// bl 0x82fa30a8
	ctx.lr = 0x831610C0;
	sub_82FA30A8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lfd f0,22528(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22528);
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,-26028(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -26028, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831610EC"))) PPC_WEAK_FUNC(sub_831610EC);
PPC_FUNC_IMPL(__imp__sub_831610EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831610F0"))) PPC_WEAK_FUNC(sub_831610F0);
PPC_FUNC_IMPL(__imp__sub_831610F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-31975
	ctx.r8.s64 = -2095513600;
	// lfd f0,21528(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 21528);
	// addi r11,r8,2740
	ctx.r11.s64 = ctx.r8.s64 + 2740;
	// fsqrt f12,f0
	ctx.f12.f64 = sqrt(ctx.f0.f64);
	// lfd f0,31408(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 31408);
	// lfd f13,1600(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1600);
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fsqrts f0,f13
	ctx.f0.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316112C"))) PPC_WEAK_FUNC(sub_8316112C);
PPC_FUNC_IMPL(__imp__sub_8316112C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83161130"))) PPC_WEAK_FUNC(sub_83161130);
PPC_FUNC_IMPL(__imp__sub_83161130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// lfd f0,11528(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 11528);
	// fsqrt f13,f0
	ctx.f13.f64 = sqrt(ctx.f0.f64);
	// lfd f0,22528(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22528);
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,-25960(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -25960, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83161158"))) PPC_WEAK_FUNC(sub_83161158);
PPC_FUNC_IMPL(__imp__sub_83161158) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f2,-24648(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -24648);
	// lfd f1,11528(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11528);
	// bl 0x82fa30a8
	ctx.lr = 0x83161178;
	sub_82FA30A8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lfd f0,22528(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22528);
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,-25964(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -25964, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831611A4"))) PPC_WEAK_FUNC(sub_831611A4);
PPC_FUNC_IMPL(__imp__sub_831611A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831611A8"))) PPC_WEAK_FUNC(sub_831611A8);
PPC_FUNC_IMPL(__imp__sub_831611A8) {
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
	// lis r31,-31961
	ctx.r31.s64 = -2094596096;
	// addi r3,r31,-25952
	ctx.r3.s64 = ctx.r31.s64 + -25952;
	// bl 0x82aebb10
	ctx.lr = 0x831611C4;
	sub_82AEBB10(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// addi r11,r11,31556
	ctx.r11.s64 = ctx.r11.s64 + 31556;
	// addi r3,r10,-30952
	ctx.r3.s64 = ctx.r10.s64 + -30952;
	// stw r11,-25952(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25952, ctx.r11.u32);
	// bl 0x82fa2318
	ctx.lr = 0x831611DC;
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

__attribute__((alias("__imp__sub_831611F0"))) PPC_WEAK_FUNC(sub_831611F0);
PPC_FUNC_IMPL(__imp__sub_831611F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r4,114
	ctx.r4.s64 = 114;
	// addi r3,r11,-24036
	ctx.r3.s64 = ctx.r11.s64 + -24036;
	// b 0x82bdfb80
	sub_82BDFB80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83161200"))) PPC_WEAK_FUNC(sub_83161200);
PPC_FUNC_IMPL(__imp__sub_83161200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24036
	ctx.r4.s64 = ctx.r11.s64 + -24036;
	// addi r3,r10,-23992
	ctx.r3.s64 = ctx.r10.s64 + -23992;
	// b 0x82be0880
	sub_82BE0880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83161214"))) PPC_WEAK_FUNC(sub_83161214);
PPC_FUNC_IMPL(__imp__sub_83161214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83161218"))) PPC_WEAK_FUNC(sub_83161218);
PPC_FUNC_IMPL(__imp__sub_83161218) {
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
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// li r5,504
	ctx.r5.s64 = 504;
	// addi r31,r11,12448
	ctx.r31.s64 = ctx.r11.s64 + 12448;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82fa7cf0
	ctx.lr = 0x83161240;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,-2768
	ctx.r4.s64 = ctx.r11.s64 + -2768;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82fa77c0
	ctx.lr = 0x83161254;
	sub_82FA77C0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82fa7cf0
	ctx.lr = 0x83161264;
	sub_82FA7CF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831612A8"))) PPC_WEAK_FUNC(sub_831612A8);
PPC_FUNC_IMPL(__imp__sub_831612A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-27184
	ctx.r3.s64 = ctx.r11.s64 + -27184;
	// b 0x82d27a48
	sub_82D27A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831612B4"))) PPC_WEAK_FUNC(sub_831612B4);
PPC_FUNC_IMPL(__imp__sub_831612B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831612B8"))) PPC_WEAK_FUNC(sub_831612B8);
PPC_FUNC_IMPL(__imp__sub_831612B8) {
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
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// addi r11,r11,32676
	ctx.r11.s64 = ctx.r11.s64 + 32676;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x831791c4
	ctx.lr = 0x831612D4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30928
	ctx.r3.s64 = ctx.r11.s64 + -30928;
	// bl 0x82fa2318
	ctx.lr = 0x831612E0;
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

__attribute__((alias("__imp__sub_831612F0"))) PPC_WEAK_FUNC(sub_831612F0);
PPC_FUNC_IMPL(__imp__sub_831612F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,-24000
	ctx.r3.s64 = ctx.r11.s64 + -24000;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82fa7cf0
	sub_82FA7CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83161304"))) PPC_WEAK_FUNC(sub_83161304);
PPC_FUNC_IMPL(__imp__sub_83161304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83161308"))) PPC_WEAK_FUNC(sub_83161308);
PPC_FUNC_IMPL(__imp__sub_83161308) {
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
	// addi r3,r11,-23920
	ctx.r3.s64 = ctx.r11.s64 + -23920;
	// bl 0x82d2bc40
	ctx.lr = 0x83161320;
	sub_82D2BC40(ctx, base);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-30904
	ctx.r3.s64 = ctx.r11.s64 + -30904;
	// bl 0x82fa2318
	ctx.lr = 0x8316132C;
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

__attribute__((alias("__imp__sub_8316133C"))) PPC_WEAK_FUNC(sub_8316133C);
PPC_FUNC_IMPL(__imp__sub_8316133C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83161340"))) PPC_WEAK_FUNC(sub_83161340);
PPC_FUNC_IMPL(__imp__sub_83161340) {
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
	// bl 0x831791d4
	ctx.lr = 0x83161350;
	__imp__KeTlsAlloc(ctx, base);
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31976
	ctx.r9.s64 = -2095579136;
	// addi r3,r9,-30888
	ctx.r3.s64 = ctx.r9.s64 + -30888;
	// stw r11,-23884(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23884, ctx.r11.u32);
	// bl 0x82fa2318
	ctx.lr = 0x83161368;
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

__attribute__((alias("__imp__sub_83161378"))) PPC_WEAK_FUNC(sub_83161378);
PPC_FUNC_IMPL(__imp__sub_83161378) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r8,-31973
	ctx.r8.s64 = -2095382528;
	// addi r7,r8,-2744
	ctx.r7.s64 = ctx.r8.s64 + -2744;
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

__attribute__((alias("__imp__sub_83161398"))) PPC_WEAK_FUNC(sub_83161398);
PPC_FUNC_IMPL(__imp__sub_83161398) {
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
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// addi r4,r9,11148
	ctx.r4.s64 = ctx.r9.s64 + 11148;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-23880
	ctx.r3.s64 = ctx.r8.s64 + -23880;
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
	ctx.lr = 0x831613F0;
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

__attribute__((alias("__imp__sub_83161400"))) PPC_WEAK_FUNC(sub_83161400);
PPC_FUNC_IMPL(__imp__sub_83161400) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,10928
	ctx.r6.s64 = ctx.r10.s64 + 10928;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,11164
	ctx.r4.s64 = ctx.r8.s64 + 11164;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-23832
	ctx.r3.s64 = ctx.r7.s64 + -23832;
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
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82d32af0
	ctx.lr = 0x83161468;
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

__attribute__((alias("__imp__sub_8316147C"))) PPC_WEAK_FUNC(sub_8316147C);
PPC_FUNC_IMPL(__imp__sub_8316147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83161480"))) PPC_WEAK_FUNC(sub_83161480);
PPC_FUNC_IMPL(__imp__sub_83161480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,11076
	ctx.r10.s64 = ctx.r11.s64 + 11076;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x831614A4;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r8,r9,-23784
	ctx.r8.s64 = ctx.r9.s64 + -23784;
	// addi r11,r11,11164
	ctx.r11.s64 = ctx.r11.s64 + 11164;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// stw r11,-23784(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23784, ctx.r11.u32);
	// lis r9,-32045
	ctx.r9.s64 = -2100101120;
	// addi r10,r10,-15000
	ctx.r10.s64 = ctx.r10.s64 + -15000;
	// addi r9,r9,-15080
	ctx.r9.s64 = ctx.r9.s64 + -15080;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831614E8"))) PPC_WEAK_FUNC(sub_831614E8);
PPC_FUNC_IMPL(__imp__sub_831614E8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,10952
	ctx.r6.s64 = ctx.r10.s64 + 10952;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23880
	ctx.r5.s64 = ctx.r9.s64 + -23880;
	// addi r4,r8,11184
	ctx.r4.s64 = ctx.r8.s64 + 11184;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-23768
	ctx.r3.s64 = ctx.r7.s64 + -23768;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
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
	ctx.lr = 0x83161554;
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

__attribute__((alias("__imp__sub_83161568"))) PPC_WEAK_FUNC(sub_83161568);
PPC_FUNC_IMPL(__imp__sub_83161568) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,11092
	ctx.r10.s64 = ctx.r11.s64 + 11092;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x8316158C;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r8,r9,-23720
	ctx.r8.s64 = ctx.r9.s64 + -23720;
	// addi r11,r11,11184
	ctx.r11.s64 = ctx.r11.s64 + 11184;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// stw r11,-23720(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23720, ctx.r11.u32);
	// lis r9,-32045
	ctx.r9.s64 = -2100101120;
	// addi r10,r10,-14904
	ctx.r10.s64 = ctx.r10.s64 + -14904;
	// addi r9,r9,-15040
	ctx.r9.s64 = ctx.r9.s64 + -15040;
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

__attribute__((alias("__imp__sub_831615D0"))) PPC_WEAK_FUNC(sub_831615D0);
PPC_FUNC_IMPL(__imp__sub_831615D0) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,11400
	ctx.r7.s64 = ctx.r10.s64 + 11400;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,11580
	ctx.r4.s64 = ctx.r9.s64 + 11580;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-23704
	ctx.r3.s64 = ctx.r8.s64 + -23704;
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
	ctx.lr = 0x83161630;
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

__attribute__((alias("__imp__sub_83161640"))) PPC_WEAK_FUNC(sub_83161640);
PPC_FUNC_IMPL(__imp__sub_83161640) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,11448
	ctx.r7.s64 = ctx.r10.s64 + 11448;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,11616
	ctx.r4.s64 = ctx.r9.s64 + 11616;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-23656
	ctx.r3.s64 = ctx.r8.s64 + -23656;
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
	ctx.lr = 0x831616A0;
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

__attribute__((alias("__imp__sub_831616B0"))) PPC_WEAK_FUNC(sub_831616B0);
PPC_FUNC_IMPL(__imp__sub_831616B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,-2544
	ctx.r9.s64 = ctx.r10.s64 + -2544;
	// lwz r11,-2632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2632);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831616C8"))) PPC_WEAK_FUNC(sub_831616C8);
PPC_FUNC_IMPL(__imp__sub_831616C8) {
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
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-2544
	ctx.r6.s64 = ctx.r10.s64 + -2544;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,11724
	ctx.r4.s64 = ctx.r8.s64 + 11724;
	// addi r3,r7,-23608
	ctx.r3.s64 = ctx.r7.s64 + -23608;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,11496
	ctx.r9.s64 = ctx.r9.s64 + 11496;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
	ctx.lr = 0x8316172C;
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

__attribute__((alias("__imp__sub_8316173C"))) PPC_WEAK_FUNC(sub_8316173C);
PPC_FUNC_IMPL(__imp__sub_8316173C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83161740"))) PPC_WEAK_FUNC(sub_83161740);
PPC_FUNC_IMPL(__imp__sub_83161740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,-2328
	ctx.r9.s64 = ctx.r10.s64 + -2328;
	// lwz r11,-816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -816);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83161758"))) PPC_WEAK_FUNC(sub_83161758);
PPC_FUNC_IMPL(__imp__sub_83161758) {
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
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-2328
	ctx.r7.s64 = ctx.r10.s64 + -2328;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,11752
	ctx.r4.s64 = ctx.r9.s64 + 11752;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-23560
	ctx.r3.s64 = ctx.r8.s64 + -23560;
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
	ctx.lr = 0x831617B8;
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

__attribute__((alias("__imp__sub_831617C8"))) PPC_WEAK_FUNC(sub_831617C8);
PPC_FUNC_IMPL(__imp__sub_831617C8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,11516
	ctx.r6.s64 = ctx.r10.s64 + 11516;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,11788
	ctx.r4.s64 = ctx.r8.s64 + 11788;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-23512
	ctx.r3.s64 = ctx.r7.s64 + -23512;
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
	ctx.lr = 0x83161830;
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

__attribute__((alias("__imp__sub_83161844"))) PPC_WEAK_FUNC(sub_83161844);
PPC_FUNC_IMPL(__imp__sub_83161844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83161848"))) PPC_WEAK_FUNC(sub_83161848);
PPC_FUNC_IMPL(__imp__sub_83161848) {
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
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,11824
	ctx.r3.s64 = ctx.r9.s64 + 11824;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
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
	// addi r4,r7,11864
	ctx.r4.s64 = ctx.r7.s64 + 11864;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-23464
	ctx.r3.s64 = ctx.r6.s64 + -23464;
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
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82d32af0
	ctx.lr = 0x831618AC;
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

__attribute__((alias("__imp__sub_831618BC"))) PPC_WEAK_FUNC(sub_831618BC);
PPC_FUNC_IMPL(__imp__sub_831618BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831618C0"))) PPC_WEAK_FUNC(sub_831618C0);
PPC_FUNC_IMPL(__imp__sub_831618C0) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,11908
	ctx.r6.s64 = ctx.r10.s64 + 11908;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-21880
	ctx.r5.s64 = ctx.r9.s64 + -21880;
	// addi r4,r8,11956
	ctx.r4.s64 = ctx.r8.s64 + 11956;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-23416
	ctx.r3.s64 = ctx.r7.s64 + -23416;
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
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d32af0
	ctx.lr = 0x83161928;
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

__attribute__((alias("__imp__sub_8316193C"))) PPC_WEAK_FUNC(sub_8316193C);
PPC_FUNC_IMPL(__imp__sub_8316193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83161940"))) PPC_WEAK_FUNC(sub_83161940);
PPC_FUNC_IMPL(__imp__sub_83161940) {
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
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r6,r9,11992
	ctx.r6.s64 = ctx.r9.s64 + 11992;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r4,r8,12104
	ctx.r4.s64 = ctx.r8.s64 + 12104;
	// addi r3,r7,-23368
	ctx.r3.s64 = ctx.r7.s64 + -23368;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
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
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x831619A0;
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

__attribute__((alias("__imp__sub_831619B0"))) PPC_WEAK_FUNC(sub_831619B0);
PPC_FUNC_IMPL(__imp__sub_831619B0) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,12016
	ctx.r6.s64 = ctx.r10.s64 + 12016;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-23416
	ctx.r5.s64 = ctx.r9.s64 + -23416;
	// addi r4,r8,12124
	ctx.r4.s64 = ctx.r8.s64 + 12124;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-23320
	ctx.r3.s64 = ctx.r7.s64 + -23320;
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
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82d32af0
	ctx.lr = 0x83161A1C;
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

__attribute__((alias("__imp__sub_83161A30"))) PPC_WEAK_FUNC(sub_83161A30);
PPC_FUNC_IMPL(__imp__sub_83161A30) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,12208
	ctx.r7.s64 = ctx.r10.s64 + 12208;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,12400
	ctx.r4.s64 = ctx.r9.s64 + 12400;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-23272
	ctx.r3.s64 = ctx.r8.s64 + -23272;
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
	ctx.lr = 0x83161A90;
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

__attribute__((alias("__imp__sub_83161AA0"))) PPC_WEAK_FUNC(sub_83161AA0);
PPC_FUNC_IMPL(__imp__sub_83161AA0) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,12256
	ctx.r7.s64 = ctx.r10.s64 + 12256;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,12408
	ctx.r4.s64 = ctx.r9.s64 + 12408;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-23224
	ctx.r3.s64 = ctx.r8.s64 + -23224;
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
	ctx.lr = 0x83161B00;
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

__attribute__((alias("__imp__sub_83161B10"))) PPC_WEAK_FUNC(sub_83161B10);
PPC_FUNC_IMPL(__imp__sub_83161B10) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,12688
	ctx.r7.s64 = ctx.r10.s64 + 12688;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,13248
	ctx.r4.s64 = ctx.r9.s64 + 13248;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-23176
	ctx.r3.s64 = ctx.r8.s64 + -23176;
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
	ctx.lr = 0x83161B70;
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

__attribute__((alias("__imp__sub_83161B80"))) PPC_WEAK_FUNC(sub_83161B80);
PPC_FUNC_IMPL(__imp__sub_83161B80) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,12784
	ctx.r7.s64 = ctx.r10.s64 + 12784;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,13272
	ctx.r4.s64 = ctx.r9.s64 + 13272;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-23128
	ctx.r3.s64 = ctx.r8.s64 + -23128;
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
	ctx.lr = 0x83161BE0;
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

__attribute__((alias("__imp__sub_83161BF0"))) PPC_WEAK_FUNC(sub_83161BF0);
PPC_FUNC_IMPL(__imp__sub_83161BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,-1840
	ctx.r9.s64 = ctx.r10.s64 + -1840;
	// lwz r11,-2040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2040);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83161C08"))) PPC_WEAK_FUNC(sub_83161C08);
PPC_FUNC_IMPL(__imp__sub_83161C08) {
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
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-1840
	ctx.r6.s64 = ctx.r10.s64 + -1840;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r4,r8,13344
	ctx.r4.s64 = ctx.r8.s64 + 13344;
	// addi r3,r7,-23080
	ctx.r3.s64 = ctx.r7.s64 + -23080;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,8
	ctx.r31.s64 = 8;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,12904
	ctx.r9.s64 = ctx.r9.s64 + 12904;
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
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x83161C74;
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

__attribute__((alias("__imp__sub_83161C88"))) PPC_WEAK_FUNC(sub_83161C88);
PPC_FUNC_IMPL(__imp__sub_83161C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,-1648
	ctx.r9.s64 = ctx.r10.s64 + -1648;
	// lwz r11,-2036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2036);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83161CA0"))) PPC_WEAK_FUNC(sub_83161CA0);
PPC_FUNC_IMPL(__imp__sub_83161CA0) {
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
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-1648
	ctx.r6.s64 = ctx.r10.s64 + -1648;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,13360
	ctx.r4.s64 = ctx.r8.s64 + 13360;
	// addi r3,r7,-23032
	ctx.r3.s64 = ctx.r7.s64 + -23032;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,12956
	ctx.r9.s64 = ctx.r9.s64 + 12956;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
	ctx.lr = 0x83161D04;
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

__attribute__((alias("__imp__sub_83161D14"))) PPC_WEAK_FUNC(sub_83161D14);
PPC_FUNC_IMPL(__imp__sub_83161D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83161D18"))) PPC_WEAK_FUNC(sub_83161D18);
PPC_FUNC_IMPL(__imp__sub_83161D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,-1576
	ctx.r9.s64 = ctx.r10.s64 + -1576;
	// lwz r11,-2032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83161D30"))) PPC_WEAK_FUNC(sub_83161D30);
PPC_FUNC_IMPL(__imp__sub_83161D30) {
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
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-1576
	ctx.r6.s64 = ctx.r10.s64 + -1576;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,13380
	ctx.r4.s64 = ctx.r8.s64 + 13380;
	// addi r3,r7,-22984
	ctx.r3.s64 = ctx.r7.s64 + -22984;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,12992
	ctx.r9.s64 = ctx.r9.s64 + 12992;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x83161D94;
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

__attribute__((alias("__imp__sub_83161DA4"))) PPC_WEAK_FUNC(sub_83161DA4);
PPC_FUNC_IMPL(__imp__sub_83161DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83161DA8"))) PPC_WEAK_FUNC(sub_83161DA8);
PPC_FUNC_IMPL(__imp__sub_83161DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,-1552
	ctx.r9.s64 = ctx.r10.s64 + -1552;
	// lwz r11,-2028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2028);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83161DC0"))) PPC_WEAK_FUNC(sub_83161DC0);
PPC_FUNC_IMPL(__imp__sub_83161DC0) {
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
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-1552
	ctx.r6.s64 = ctx.r10.s64 + -1552;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,13408
	ctx.r4.s64 = ctx.r8.s64 + 13408;
	// addi r3,r7,-22936
	ctx.r3.s64 = ctx.r7.s64 + -22936;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,13052
	ctx.r9.s64 = ctx.r9.s64 + 13052;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x83161E24;
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

__attribute__((alias("__imp__sub_83161E34"))) PPC_WEAK_FUNC(sub_83161E34);
PPC_FUNC_IMPL(__imp__sub_83161E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83161E38"))) PPC_WEAK_FUNC(sub_83161E38);
PPC_FUNC_IMPL(__imp__sub_83161E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,-1528
	ctx.r9.s64 = ctx.r10.s64 + -1528;
	// lwz r11,-2024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2024);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83161E50"))) PPC_WEAK_FUNC(sub_83161E50);
PPC_FUNC_IMPL(__imp__sub_83161E50) {
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
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-1528
	ctx.r6.s64 = ctx.r10.s64 + -1528;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,13424
	ctx.r4.s64 = ctx.r8.s64 + 13424;
	// addi r3,r7,-22888
	ctx.r3.s64 = ctx.r7.s64 + -22888;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,13112
	ctx.r9.s64 = ctx.r9.s64 + 13112;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x83161EB4;
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

__attribute__((alias("__imp__sub_83161EC4"))) PPC_WEAK_FUNC(sub_83161EC4);
PPC_FUNC_IMPL(__imp__sub_83161EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83161EC8"))) PPC_WEAK_FUNC(sub_83161EC8);
PPC_FUNC_IMPL(__imp__sub_83161EC8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,13132
	ctx.r7.s64 = ctx.r10.s64 + 13132;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,13448
	ctx.r4.s64 = ctx.r9.s64 + 13448;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-22840
	ctx.r3.s64 = ctx.r8.s64 + -22840;
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
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x83161F28;
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

__attribute__((alias("__imp__sub_83161F38"))) PPC_WEAK_FUNC(sub_83161F38);
PPC_FUNC_IMPL(__imp__sub_83161F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,-1504
	ctx.r9.s64 = ctx.r10.s64 + -1504;
	// lwz r11,-2020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2020);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83161F50"))) PPC_WEAK_FUNC(sub_83161F50);
PPC_FUNC_IMPL(__imp__sub_83161F50) {
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
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-1504
	ctx.r6.s64 = ctx.r10.s64 + -1504;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,13472
	ctx.r4.s64 = ctx.r8.s64 + 13472;
	// addi r3,r7,-22792
	ctx.r3.s64 = ctx.r7.s64 + -22792;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,13180
	ctx.r9.s64 = ctx.r9.s64 + 13180;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x83161FB4;
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

__attribute__((alias("__imp__sub_83161FC4"))) PPC_WEAK_FUNC(sub_83161FC4);
PPC_FUNC_IMPL(__imp__sub_83161FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83161FC8"))) PPC_WEAK_FUNC(sub_83161FC8);
PPC_FUNC_IMPL(__imp__sub_83161FC8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,13200
	ctx.r7.s64 = ctx.r10.s64 + 13200;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,13496
	ctx.r4.s64 = ctx.r9.s64 + 13496;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-22744
	ctx.r3.s64 = ctx.r8.s64 + -22744;
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
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x83162028;
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

__attribute__((alias("__imp__sub_83162038"))) PPC_WEAK_FUNC(sub_83162038);
PPC_FUNC_IMPL(__imp__sub_83162038) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,13224
	ctx.r7.s64 = ctx.r10.s64 + 13224;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,13524
	ctx.r4.s64 = ctx.r9.s64 + 13524;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-22696
	ctx.r3.s64 = ctx.r8.s64 + -22696;
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
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x83162098;
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

__attribute__((alias("__imp__sub_831620A8"))) PPC_WEAK_FUNC(sub_831620A8);
PPC_FUNC_IMPL(__imp__sub_831620A8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,13568
	ctx.r7.s64 = ctx.r10.s64 + 13568;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,13616
	ctx.r4.s64 = ctx.r9.s64 + 13616;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-22648
	ctx.r3.s64 = ctx.r8.s64 + -22648;
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
	ctx.lr = 0x83162108;
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

__attribute__((alias("__imp__sub_83162118"))) PPC_WEAK_FUNC(sub_83162118);
PPC_FUNC_IMPL(__imp__sub_83162118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,-1440
	ctx.r9.s64 = ctx.r10.s64 + -1440;
	// lwz r11,-1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1460);
	// stw r11,200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83162130"))) PPC_WEAK_FUNC(sub_83162130);
PPC_FUNC_IMPL(__imp__sub_83162130) {
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
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-1440
	ctx.r6.s64 = ctx.r10.s64 + -1440;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,13904
	ctx.r4.s64 = ctx.r8.s64 + 13904;
	// addi r3,r7,-22600
	ctx.r3.s64 = ctx.r7.s64 + -22600;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,13844
	ctx.r9.s64 = ctx.r9.s64 + 13844;
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
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x83162194;
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

__attribute__((alias("__imp__sub_831621A4"))) PPC_WEAK_FUNC(sub_831621A4);
PPC_FUNC_IMPL(__imp__sub_831621A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831621A8"))) PPC_WEAK_FUNC(sub_831621A8);
PPC_FUNC_IMPL(__imp__sub_831621A8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,13948
	ctx.r7.s64 = ctx.r10.s64 + 13948;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
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
	// addi r3,r8,-22552
	ctx.r3.s64 = ctx.r8.s64 + -22552;
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
	ctx.lr = 0x83162208;
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

__attribute__((alias("__imp__sub_83162218"))) PPC_WEAK_FUNC(sub_83162218);
PPC_FUNC_IMPL(__imp__sub_83162218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,-1160
	ctx.r9.s64 = ctx.r10.s64 + -1160;
	// lwz r11,-1200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1200);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83162230"))) PPC_WEAK_FUNC(sub_83162230);
PPC_FUNC_IMPL(__imp__sub_83162230) {
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
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-1160
	ctx.r6.s64 = ctx.r10.s64 + -1160;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,14012
	ctx.r4.s64 = ctx.r8.s64 + 14012;
	// addi r3,r7,-22504
	ctx.r3.s64 = ctx.r7.s64 + -22504;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,13928
	ctx.r9.s64 = ctx.r9.s64 + 13928;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
	ctx.lr = 0x83162294;
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

__attribute__((alias("__imp__sub_831622A4"))) PPC_WEAK_FUNC(sub_831622A4);
PPC_FUNC_IMPL(__imp__sub_831622A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831622A8"))) PPC_WEAK_FUNC(sub_831622A8);
PPC_FUNC_IMPL(__imp__sub_831622A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r9,-31973
	ctx.r9.s64 = -2095382528;
	// addi r8,r9,-1032
	ctx.r8.s64 = ctx.r9.s64 + -1032;
	// lwz r11,-1064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1064);
	// lwz r10,-1060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1060);
	// stw r11,80(r8)
	PPC_STORE_U32(ctx.r8.u32 + 80, ctx.r11.u32);
	// stw r11,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r11.u32);
	// stw r10,152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 152, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831622D0"))) PPC_WEAK_FUNC(sub_831622D0);
PPC_FUNC_IMPL(__imp__sub_831622D0) {
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
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-1032
	ctx.r6.s64 = ctx.r10.s64 + -1032;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,15184
	ctx.r4.s64 = ctx.r8.s64 + 15184;
	// addi r3,r7,-22456
	ctx.r3.s64 = ctx.r7.s64 + -22456;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,15104
	ctx.r9.s64 = ctx.r9.s64 + 15104;
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
	ctx.lr = 0x83162334;
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

__attribute__((alias("__imp__sub_83162344"))) PPC_WEAK_FUNC(sub_83162344);
PPC_FUNC_IMPL(__imp__sub_83162344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83162348"))) PPC_WEAK_FUNC(sub_83162348);
PPC_FUNC_IMPL(__imp__sub_83162348) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,17976
	ctx.r9.s64 = ctx.r10.s64 + 17976;
	// addi r4,r8,17996
	ctx.r4.s64 = ctx.r8.s64 + 17996;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-22408
	ctx.r3.s64 = ctx.r7.s64 + -22408;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x831623A0;
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

__attribute__((alias("__imp__sub_831623B0"))) PPC_WEAK_FUNC(sub_831623B0);
PPC_FUNC_IMPL(__imp__sub_831623B0) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,18024
	ctx.r7.s64 = ctx.r10.s64 + 18024;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,18072
	ctx.r4.s64 = ctx.r9.s64 + 18072;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-22360
	ctx.r3.s64 = ctx.r8.s64 + -22360;
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
	ctx.lr = 0x83162410;
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

__attribute__((alias("__imp__sub_83162420"))) PPC_WEAK_FUNC(sub_83162420);
PPC_FUNC_IMPL(__imp__sub_83162420) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,18296
	ctx.r6.s64 = ctx.r10.s64 + 18296;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,18416
	ctx.r4.s64 = ctx.r8.s64 + 18416;
	// addi r3,r7,-22312
	ctx.r3.s64 = ctx.r7.s64 + -22312;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,18272
	ctx.r9.s64 = ctx.r9.s64 + 18272;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
	ctx.lr = 0x83162484;
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

__attribute__((alias("__imp__sub_83162494"))) PPC_WEAK_FUNC(sub_83162494);
PPC_FUNC_IMPL(__imp__sub_83162494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83162498"))) PPC_WEAK_FUNC(sub_83162498);
PPC_FUNC_IMPL(__imp__sub_83162498) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,18440
	ctx.r7.s64 = ctx.r10.s64 + 18440;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,18512
	ctx.r4.s64 = ctx.r9.s64 + 18512;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-22264
	ctx.r3.s64 = ctx.r8.s64 + -22264;
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
	ctx.lr = 0x831624F8;
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

__attribute__((alias("__imp__sub_83162508"))) PPC_WEAK_FUNC(sub_83162508);
PPC_FUNC_IMPL(__imp__sub_83162508) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,18488
	ctx.r7.s64 = ctx.r10.s64 + 18488;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,18540
	ctx.r4.s64 = ctx.r9.s64 + 18540;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-22216
	ctx.r3.s64 = ctx.r8.s64 + -22216;
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
	ctx.lr = 0x83162568;
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

__attribute__((alias("__imp__sub_83162578"))) PPC_WEAK_FUNC(sub_83162578);
PPC_FUNC_IMPL(__imp__sub_83162578) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,18600
	ctx.r7.s64 = ctx.r10.s64 + 18600;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,18744
	ctx.r4.s64 = ctx.r9.s64 + 18744;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-22168
	ctx.r3.s64 = ctx.r8.s64 + -22168;
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
	ctx.lr = 0x831625D8;
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

__attribute__((alias("__imp__sub_831625E8"))) PPC_WEAK_FUNC(sub_831625E8);
PPC_FUNC_IMPL(__imp__sub_831625E8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,18696
	ctx.r7.s64 = ctx.r10.s64 + 18696;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,18764
	ctx.r4.s64 = ctx.r9.s64 + 18764;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-22120
	ctx.r3.s64 = ctx.r8.s64 + -22120;
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
	ctx.lr = 0x83162648;
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

__attribute__((alias("__imp__sub_83162658"))) PPC_WEAK_FUNC(sub_83162658);
PPC_FUNC_IMPL(__imp__sub_83162658) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,18912
	ctx.r7.s64 = ctx.r10.s64 + 18912;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,19128
	ctx.r4.s64 = ctx.r9.s64 + 19128;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-22072
	ctx.r3.s64 = ctx.r8.s64 + -22072;
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
	// li r6,176
	ctx.r6.s64 = 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x831626B8;
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

__attribute__((alias("__imp__sub_831626C8"))) PPC_WEAK_FUNC(sub_831626C8);
PPC_FUNC_IMPL(__imp__sub_831626C8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,19360
	ctx.r6.s64 = ctx.r10.s64 + 19360;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,19432
	ctx.r4.s64 = ctx.r8.s64 + 19432;
	// addi r3,r7,-22024
	ctx.r3.s64 = ctx.r7.s64 + -22024;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r9,19320
	ctx.r9.s64 = ctx.r9.s64 + 19320;
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
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316272C;
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

__attribute__((alias("__imp__sub_8316273C"))) PPC_WEAK_FUNC(sub_8316273C);
PPC_FUNC_IMPL(__imp__sub_8316273C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83162740"))) PPC_WEAK_FUNC(sub_83162740);
PPC_FUNC_IMPL(__imp__sub_83162740) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,19452
	ctx.r7.s64 = ctx.r10.s64 + 19452;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,19476
	ctx.r4.s64 = ctx.r9.s64 + 19476;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-21976
	ctx.r3.s64 = ctx.r8.s64 + -21976;
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
	ctx.lr = 0x831627A0;
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

__attribute__((alias("__imp__sub_831627B0"))) PPC_WEAK_FUNC(sub_831627B0);
PPC_FUNC_IMPL(__imp__sub_831627B0) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,19568
	ctx.r7.s64 = ctx.r10.s64 + 19568;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,19688
	ctx.r4.s64 = ctx.r9.s64 + 19688;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-21928
	ctx.r3.s64 = ctx.r8.s64 + -21928;
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
	ctx.lr = 0x83162810;
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

__attribute__((alias("__imp__sub_83162820"))) PPC_WEAK_FUNC(sub_83162820);
PPC_FUNC_IMPL(__imp__sub_83162820) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,10852
	ctx.r4.s64 = ctx.r10.s64 + 10852;
	// addi r3,r9,-21880
	ctx.r3.s64 = ctx.r9.s64 + -21880;
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
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x83162874;
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

__attribute__((alias("__imp__sub_83162884"))) PPC_WEAK_FUNC(sub_83162884);
PPC_FUNC_IMPL(__imp__sub_83162884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83162888"))) PPC_WEAK_FUNC(sub_83162888);
PPC_FUNC_IMPL(__imp__sub_83162888) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,19780
	ctx.r9.s64 = ctx.r10.s64 + 19780;
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r4,r7,19800
	ctx.r4.s64 = ctx.r7.s64 + 19800;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r6,-21832
	ctx.r3.s64 = ctx.r6.s64 + -21832;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
	ctx.lr = 0x831628E8;
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

__attribute__((alias("__imp__sub_831628F8"))) PPC_WEAK_FUNC(sub_831628F8);
PPC_FUNC_IMPL(__imp__sub_831628F8) {
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
	// bl 0x831791d4
	ctx.lr = 0x83162908;
	__imp__KeTlsAlloc(ctx, base);
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31976
	ctx.r9.s64 = -2095579136;
	// addi r3,r9,-30872
	ctx.r3.s64 = ctx.r9.s64 + -30872;
	// stw r11,-21784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21784, ctx.r11.u32);
	// bl 0x82fa2318
	ctx.lr = 0x83162920;
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

__attribute__((alias("__imp__sub_83162930"))) PPC_WEAK_FUNC(sub_83162930);
PPC_FUNC_IMPL(__imp__sub_83162930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// addi r9,r11,-29904
	ctx.r9.s64 = ctx.r11.s64 + -29904;
	// addi r8,r10,-21776
	ctx.r8.s64 = ctx.r10.s64 + -21776;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316294C"))) PPC_WEAK_FUNC(sub_8316294C);
PPC_FUNC_IMPL(__imp__sub_8316294C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83162950"))) PPC_WEAK_FUNC(sub_83162950);
PPC_FUNC_IMPL(__imp__sub_83162950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// addi r9,r11,21904
	ctx.r9.s64 = ctx.r11.s64 + 21904;
	// addi r8,r10,-21760
	ctx.r8.s64 = ctx.r10.s64 + -21760;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316296C"))) PPC_WEAK_FUNC(sub_8316296C);
PPC_FUNC_IMPL(__imp__sub_8316296C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83162970"))) PPC_WEAK_FUNC(sub_83162970);
PPC_FUNC_IMPL(__imp__sub_83162970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// addi r9,r11,-576
	ctx.r9.s64 = ctx.r11.s64 + -576;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r10,-21744
	ctx.r5.s64 = ctx.r10.s64 + -21744;
	// li r4,16
	ctx.r4.s64 = 16;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r3,32
	ctx.r3.s64 = 32;
	// lvx128 v13,r9,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v12,r9,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r9,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r5,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r5,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r5,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831629BC"))) PPC_WEAK_FUNC(sub_831629BC);
PPC_FUNC_IMPL(__imp__sub_831629BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831629C0"))) PPC_WEAK_FUNC(sub_831629C0);
PPC_FUNC_IMPL(__imp__sub_831629C0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r8,-31973
	ctx.r8.s64 = -2095382528;
	// addi r7,r8,-260
	ctx.r7.s64 = ctx.r8.s64 + -260;
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

__attribute__((alias("__imp__sub_831629E0"))) PPC_WEAK_FUNC(sub_831629E0);
PPC_FUNC_IMPL(__imp__sub_831629E0) {
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
	// bl 0x831791d4
	ctx.lr = 0x831629F0;
	__imp__KeTlsAlloc(ctx, base);
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31976
	ctx.r9.s64 = -2095579136;
	// addi r3,r9,-30856
	ctx.r3.s64 = ctx.r9.s64 + -30856;
	// stw r11,-21668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21668, ctx.r11.u32);
	// bl 0x82fa2318
	ctx.lr = 0x83162A08;
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

__attribute__((alias("__imp__sub_83162A18"))) PPC_WEAK_FUNC(sub_83162A18);
PPC_FUNC_IMPL(__imp__sub_83162A18) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x83162A20;
	__savegprlr_20(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// stw r10,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r10.u32);
	// addi r8,r1,-208
	ctx.r8.s64 = ctx.r1.s64 + -208;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// stw r10,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// addi r30,r1,-144
	ctx.r30.s64 = ctx.r1.s64 + -144;
	// stw r10,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r10.u32);
	// addi r27,r1,-128
	ctx.r27.s64 = ctx.r1.s64 + -128;
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// addi r4,r6,-21664
	ctx.r4.s64 = ctx.r6.s64 + -21664;
	// stw r11,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// li r29,48
	ctx.r29.s64 = 48;
	// stw r10,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// addi r28,r1,-208
	ctx.r28.s64 = ctx.r1.s64 + -208;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r26,r1,-224
	ctx.r26.s64 = ctx.r1.s64 + -224;
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
	// li r25,64
	ctx.r25.s64 = 64;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// li r24,80
	ctx.r24.s64 = 80;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// addi r23,r1,-192
	ctx.r23.s64 = ctx.r1.s64 + -192;
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// li r22,96
	ctx.r22.s64 = 96;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// li r21,112
	ctx.r21.s64 = 112;
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// li r20,128
	ctx.r20.s64 = 128;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r10,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r10.u32);
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r10.u32);
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r11,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r11.u32);
	// stvx128 v13,r4,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r10.u32);
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r11.u32);
	// stw r11,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r11.u32);
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// stvx128 v12,r4,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r11.u32);
	// stw r10,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r10.u32);
	// lvx128 v10,r0,r26
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// stvx128 v0,r4,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r10,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// stvx128 v13,r4,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
	// lvx128 v12,r0,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// stvx128 v12,r4,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// lvx128 v13,r0,r23
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// li r3,144
	ctx.r3.s64 = 144;
	// stvx128 v0,r4,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// stvx128 v11,r4,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,160
	ctx.r9.s64 = 160;
	// stw r11,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r11.u32);
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// stvx128 v13,r4,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,-144
	ctx.r3.s64 = ctx.r1.s64 + -144;
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// lvx128 v11,r0,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// stvx128 v10,r4,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// li r9,176
	ctx.r9.s64 = 176;
	// stw r11,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r11.u32);
	// li r6,192
	ctx.r6.s64 = 192;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// li r31,224
	ctx.r31.s64 = 224;
	// stw r11,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r11.u32);
	// li r8,240
	ctx.r8.s64 = 240;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// stw r11,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r11.u32);
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// lvx128 v10,r0,r5
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// li r5,208
	ctx.r5.s64 = 208;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// lvx128 v12,r0,r3
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r4,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r4,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r4,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83162C30"))) PPC_WEAK_FUNC(sub_83162C30);
PPC_FUNC_IMPL(__imp__sub_83162C30) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x83162C38;
	__savegprlr_20(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// stw r11,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r11.u32);
	// addi r8,r1,-208
	ctx.r8.s64 = ctx.r1.s64 + -208;
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r11.u32);
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// stw r11,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r11.u32);
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// stw r11,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r11.u32);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// addi r30,r1,-144
	ctx.r30.s64 = ctx.r1.s64 + -144;
	// stw r11,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r11.u32);
	// addi r27,r1,-128
	ctx.r27.s64 = ctx.r1.s64 + -128;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// addi r4,r6,-21408
	ctx.r4.s64 = ctx.r6.s64 + -21408;
	// stw r10,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// li r29,48
	ctx.r29.s64 = 48;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// addi r28,r1,-208
	ctx.r28.s64 = ctx.r1.s64 + -208;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// addi r26,r1,-224
	ctx.r26.s64 = ctx.r1.s64 + -224;
	// stw r10,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r10.u32);
	// li r25,64
	ctx.r25.s64 = 64;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// li r24,80
	ctx.r24.s64 = 80;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r23,r1,-192
	ctx.r23.s64 = ctx.r1.s64 + -192;
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// li r22,96
	ctx.r22.s64 = 96;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// li r21,112
	ctx.r21.s64 = 112;
	// stw r11,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r11.u32);
	// li r20,128
	ctx.r20.s64 = 128;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r11,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r11.u32);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r11.u32);
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r10,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r10.u32);
	// stvx128 v13,r4,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r11.u32);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// stw r10,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stvx128 v12,r4,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// stw r11,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r11.u32);
	// lvx128 v10,r0,r26
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// stvx128 v0,r4,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// stw r11,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r11.u32);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// stw r10,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// stvx128 v13,r4,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r10.u32);
	// lvx128 v12,r0,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// stvx128 v12,r4,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// lvx128 v13,r0,r23
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// li r3,144
	ctx.r3.s64 = 144;
	// stvx128 v0,r4,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// stvx128 v11,r4,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,160
	ctx.r9.s64 = 160;
	// stw r10,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r10.u32);
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// stvx128 v13,r4,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,-144
	ctx.r3.s64 = ctx.r1.s64 + -144;
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r11,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r11.u32);
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// lvx128 v11,r0,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// stvx128 v10,r4,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// li r9,176
	ctx.r9.s64 = 176;
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// li r6,192
	ctx.r6.s64 = 192;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// li r31,224
	ctx.r31.s64 = 224;
	// stw r10,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r10.u32);
	// li r8,240
	ctx.r8.s64 = 240;
	// stw r10,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r10.u32);
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// lvx128 v10,r0,r5
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// li r5,208
	ctx.r5.s64 = 208;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r11,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r11.u32);
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// lvx128 v12,r0,r3
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r4,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r4,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r4,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83162E48"))) PPC_WEAK_FUNC(sub_83162E48);
PPC_FUNC_IMPL(__imp__sub_83162E48) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,11864
	ctx.r4.s64 = ctx.r10.s64 + 11864;
	// addi r3,r9,-21152
	ctx.r3.s64 = ctx.r9.s64 + -21152;
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
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x83162E9C;
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

__attribute__((alias("__imp__sub_83162EAC"))) PPC_WEAK_FUNC(sub_83162EAC);
PPC_FUNC_IMPL(__imp__sub_83162EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83162EB0"))) PPC_WEAK_FUNC(sub_83162EB0);
PPC_FUNC_IMPL(__imp__sub_83162EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r8,-31973
	ctx.r8.s64 = -2095382528;
	// addi r7,r8,40
	ctx.r7.s64 = ctx.r8.s64 + 40;
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

__attribute__((alias("__imp__sub_83162ED0"))) PPC_WEAK_FUNC(sub_83162ED0);
PPC_FUNC_IMPL(__imp__sub_83162ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// addi r9,r11,432
	ctx.r9.s64 = ctx.r11.s64 + 432;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r10,-21072
	ctx.r6.s64 = ctx.r10.s64 + -21072;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r9,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r9,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r6,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r6,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83162F0C"))) PPC_WEAK_FUNC(sub_83162F0C);
PPC_FUNC_IMPL(__imp__sub_83162F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83162F10"))) PPC_WEAK_FUNC(sub_83162F10);
PPC_FUNC_IMPL(__imp__sub_83162F10) {
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
	// bl 0x831791d4
	ctx.lr = 0x83162F20;
	__imp__KeTlsAlloc(ctx, base);
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31976
	ctx.r9.s64 = -2095579136;
	// addi r3,r9,-30840
	ctx.r3.s64 = ctx.r9.s64 + -30840;
	// stw r11,-21024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21024, ctx.r11.u32);
	// bl 0x82fa2318
	ctx.lr = 0x83162F38;
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

__attribute__((alias("__imp__sub_83162F48"))) PPC_WEAK_FUNC(sub_83162F48);
PPC_FUNC_IMPL(__imp__sub_83162F48) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r8,-31973
	ctx.r8.s64 = -2095382528;
	// addi r7,r8,480
	ctx.r7.s64 = ctx.r8.s64 + 480;
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

__attribute__((alias("__imp__sub_83162F68"))) PPC_WEAK_FUNC(sub_83162F68);
PPC_FUNC_IMPL(__imp__sub_83162F68) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,26412
	ctx.r4.s64 = ctx.r10.s64 + 26412;
	// addi r3,r9,-21016
	ctx.r3.s64 = ctx.r9.s64 + -21016;
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
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x83162FBC;
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

__attribute__((alias("__imp__sub_83162FCC"))) PPC_WEAK_FUNC(sub_83162FCC);
PPC_FUNC_IMPL(__imp__sub_83162FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83162FD0"))) PPC_WEAK_FUNC(sub_83162FD0);
PPC_FUNC_IMPL(__imp__sub_83162FD0) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,27296
	ctx.r4.s64 = ctx.r10.s64 + 27296;
	// addi r3,r9,-20964
	ctx.r3.s64 = ctx.r9.s64 + -20964;
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
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x83163024;
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

__attribute__((alias("__imp__sub_83163034"))) PPC_WEAK_FUNC(sub_83163034);
PPC_FUNC_IMPL(__imp__sub_83163034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163038"))) PPC_WEAK_FUNC(sub_83163038);
PPC_FUNC_IMPL(__imp__sub_83163038) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r8,-31973
	ctx.r8.s64 = -2095382528;
	// addi r7,r8,1512
	ctx.r7.s64 = ctx.r8.s64 + 1512;
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

__attribute__((alias("__imp__sub_83163058"))) PPC_WEAK_FUNC(sub_83163058);
PPC_FUNC_IMPL(__imp__sub_83163058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// addi r9,r11,1616
	ctx.r9.s64 = ctx.r11.s64 + 1616;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r10,-20896
	ctx.r5.s64 = ctx.r10.s64 + -20896;
	// li r4,16
	ctx.r4.s64 = 16;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r3,32
	ctx.r3.s64 = 32;
	// lvx128 v13,r9,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v12,r9,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r9,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r5,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r5,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r5,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831630A4"))) PPC_WEAK_FUNC(sub_831630A4);
PPC_FUNC_IMPL(__imp__sub_831630A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831630A8"))) PPC_WEAK_FUNC(sub_831630A8);
PPC_FUNC_IMPL(__imp__sub_831630A8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,27776
	ctx.r6.s64 = ctx.r10.s64 + 27776;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-20624
	ctx.r5.s64 = ctx.r9.s64 + -20624;
	// addi r4,r8,27908
	ctx.r4.s64 = ctx.r8.s64 + 27908;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-20832
	ctx.r3.s64 = ctx.r7.s64 + -20832;
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
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82d32af0
	ctx.lr = 0x83163110;
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

__attribute__((alias("__imp__sub_83163124"))) PPC_WEAK_FUNC(sub_83163124);
PPC_FUNC_IMPL(__imp__sub_83163124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163128"))) PPC_WEAK_FUNC(sub_83163128);
PPC_FUNC_IMPL(__imp__sub_83163128) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,27876
	ctx.r10.s64 = ctx.r11.s64 + 27876;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x8316314C;
	sub_82D372B8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r8,r9,-20784
	ctx.r8.s64 = ctx.r9.s64 + -20784;
	// addi r11,r11,27908
	ctx.r11.s64 = ctx.r11.s64 + 27908;
	// lis r10,-32043
	ctx.r10.s64 = -2099970048;
	// stw r11,-20784(r9)
	PPC_STORE_U32(ctx.r9.u32 + -20784, ctx.r11.u32);
	// lis r9,-32043
	ctx.r9.s64 = -2099970048;
	// addi r10,r10,-21680
	ctx.r10.s64 = ctx.r10.s64 + -21680;
	// addi r9,r9,-21720
	ctx.r9.s64 = ctx.r9.s64 + -21720;
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

__attribute__((alias("__imp__sub_83163190"))) PPC_WEAK_FUNC(sub_83163190);
PPC_FUNC_IMPL(__imp__sub_83163190) {
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
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23416
	ctx.r5.s64 = ctx.r10.s64 + -23416;
	// addi r4,r9,28392
	ctx.r4.s64 = ctx.r9.s64 + 28392;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-20768
	ctx.r3.s64 = ctx.r8.s64 + -20768;
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
	ctx.lr = 0x831631E8;
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

__attribute__((alias("__imp__sub_831631F8"))) PPC_WEAK_FUNC(sub_831631F8);
PPC_FUNC_IMPL(__imp__sub_831631F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r9,-31973
	ctx.r9.s64 = -2095382528;
	// addi r8,r9,1792
	ctx.r8.s64 = ctx.r9.s64 + 1792;
	// lwz r11,1748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1748);
	// lwz r10,1744(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1744);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r10,128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 128, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316321C"))) PPC_WEAK_FUNC(sub_8316321C);
PPC_FUNC_IMPL(__imp__sub_8316321C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163220"))) PPC_WEAK_FUNC(sub_83163220);
PPC_FUNC_IMPL(__imp__sub_83163220) {
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
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,1792
	ctx.r6.s64 = ctx.r10.s64 + 1792;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r4,r8,28508
	ctx.r4.s64 = ctx.r8.s64 + 28508;
	// addi r3,r7,-20720
	ctx.r3.s64 = ctx.r7.s64 + -20720;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,10
	ctx.r31.s64 = 10;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,28316
	ctx.r9.s64 = ctx.r9.s64 + 28316;
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
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316328C;
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

__attribute__((alias("__imp__sub_831632A0"))) PPC_WEAK_FUNC(sub_831632A0);
PPC_FUNC_IMPL(__imp__sub_831632A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r9,-31973
	ctx.r9.s64 = -2095382528;
	// addi r8,r9,2032
	ctx.r8.s64 = ctx.r9.s64 + 2032;
	// lwz r11,1748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1748);
	// lwz r10,1744(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1744);
	// stw r11,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r11.u32);
	// stw r10,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831632C4"))) PPC_WEAK_FUNC(sub_831632C4);
PPC_FUNC_IMPL(__imp__sub_831632C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831632C8"))) PPC_WEAK_FUNC(sub_831632C8);
PPC_FUNC_IMPL(__imp__sub_831632C8) {
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
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,2032
	ctx.r7.s64 = ctx.r10.s64 + 2032;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,28524
	ctx.r4.s64 = ctx.r9.s64 + 28524;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-20672
	ctx.r3.s64 = ctx.r8.s64 + -20672;
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
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316332C;
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

__attribute__((alias("__imp__sub_8316333C"))) PPC_WEAK_FUNC(sub_8316333C);
PPC_FUNC_IMPL(__imp__sub_8316333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163340"))) PPC_WEAK_FUNC(sub_83163340);
PPC_FUNC_IMPL(__imp__sub_83163340) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,28372
	ctx.r9.s64 = ctx.r10.s64 + 28372;
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r4,r7,28544
	ctx.r4.s64 = ctx.r7.s64 + 28544;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-20624
	ctx.r3.s64 = ctx.r6.s64 + -20624;
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
	ctx.lr = 0x8316339C;
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

__attribute__((alias("__imp__sub_831633AC"))) PPC_WEAK_FUNC(sub_831633AC);
PPC_FUNC_IMPL(__imp__sub_831633AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831633B0"))) PPC_WEAK_FUNC(sub_831633B0);
PPC_FUNC_IMPL(__imp__sub_831633B0) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,28776
	ctx.r9.s64 = ctx.r10.s64 + 28776;
	// addi r5,r8,-23416
	ctx.r5.s64 = ctx.r8.s64 + -23416;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r4,r7,28816
	ctx.r4.s64 = ctx.r7.s64 + 28816;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-20576
	ctx.r3.s64 = ctx.r6.s64 + -20576;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
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
	ctx.lr = 0x8316340C;
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

__attribute__((alias("__imp__sub_8316341C"))) PPC_WEAK_FUNC(sub_8316341C);
PPC_FUNC_IMPL(__imp__sub_8316341C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163420"))) PPC_WEAK_FUNC(sub_83163420);
PPC_FUNC_IMPL(__imp__sub_83163420) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,30636
	ctx.r6.s64 = ctx.r10.s64 + 30636;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-16956
	ctx.r5.s64 = ctx.r9.s64 + -16956;
	// addi r4,r8,30788
	ctx.r4.s64 = ctx.r8.s64 + 30788;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-20476
	ctx.r3.s64 = ctx.r7.s64 + -20476;
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
	ctx.lr = 0x83163488;
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

__attribute__((alias("__imp__sub_8316349C"))) PPC_WEAK_FUNC(sub_8316349C);
PPC_FUNC_IMPL(__imp__sub_8316349C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831634A0"))) PPC_WEAK_FUNC(sub_831634A0);
PPC_FUNC_IMPL(__imp__sub_831634A0) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,30832
	ctx.r6.s64 = ctx.r10.s64 + 30832;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-16620
	ctx.r5.s64 = ctx.r9.s64 + -16620;
	// addi r4,r8,30992
	ctx.r4.s64 = ctx.r8.s64 + 30992;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-20428
	ctx.r3.s64 = ctx.r7.s64 + -20428;
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
	ctx.lr = 0x83163508;
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

__attribute__((alias("__imp__sub_8316351C"))) PPC_WEAK_FUNC(sub_8316351C);
PPC_FUNC_IMPL(__imp__sub_8316351C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163520"))) PPC_WEAK_FUNC(sub_83163520);
PPC_FUNC_IMPL(__imp__sub_83163520) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// addi r5,r10,31112
	ctx.r5.s64 = ctx.r10.s64 + 31112;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-16956
	ctx.r5.s64 = ctx.r8.s64 + -16956;
	// addi r4,r7,31236
	ctx.r4.s64 = ctx.r7.s64 + 31236;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-20380
	ctx.r3.s64 = ctx.r6.s64 + -20380;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r9,31092
	ctx.r9.s64 = ctx.r9.s64 + 31092;
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
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82d32af0
	ctx.lr = 0x8316358C;
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

__attribute__((alias("__imp__sub_831635A0"))) PPC_WEAK_FUNC(sub_831635A0);
PPC_FUNC_IMPL(__imp__sub_831635A0) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// addi r6,r10,31272
	ctx.r6.s64 = ctx.r10.s64 + 31272;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-17052
	ctx.r5.s64 = ctx.r9.s64 + -17052;
	// addi r4,r8,31496
	ctx.r4.s64 = ctx.r8.s64 + 31496;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-20332
	ctx.r3.s64 = ctx.r7.s64 + -20332;
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
	// li r6,60
	ctx.r6.s64 = 60;
	// bl 0x82d32af0
	ctx.lr = 0x83163608;
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

__attribute__((alias("__imp__sub_8316361C"))) PPC_WEAK_FUNC(sub_8316361C);
PPC_FUNC_IMPL(__imp__sub_8316361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163620"))) PPC_WEAK_FUNC(sub_83163620);
PPC_FUNC_IMPL(__imp__sub_83163620) {
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
	// bl 0x82d7d148
	ctx.lr = 0x83163638;
	sub_82D7D148(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r8,r9,-20284
	ctx.r8.s64 = ctx.r9.s64 + -20284;
	// addi r11,r11,31496
	ctx.r11.s64 = ctx.r11.s64 + 31496;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r11,-20284(r9)
	PPC_STORE_U32(ctx.r9.u32 + -20284, ctx.r11.u32);
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r10,r10,-12208
	ctx.r10.s64 = ctx.r10.s64 + -12208;
	// addi r9,r9,-12248
	ctx.r9.s64 = ctx.r9.s64 + -12248;
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

__attribute__((alias("__imp__sub_8316367C"))) PPC_WEAK_FUNC(sub_8316367C);
PPC_FUNC_IMPL(__imp__sub_8316367C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163680"))) PPC_WEAK_FUNC(sub_83163680);
PPC_FUNC_IMPL(__imp__sub_83163680) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,31912
	ctx.r7.s64 = ctx.r10.s64 + 31912;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,32456
	ctx.r4.s64 = ctx.r9.s64 + 32456;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-20268
	ctx.r3.s64 = ctx.r8.s64 + -20268;
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
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x831636E4;
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

__attribute__((alias("__imp__sub_831636F4"))) PPC_WEAK_FUNC(sub_831636F4);
PPC_FUNC_IMPL(__imp__sub_831636F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831636F8"))) PPC_WEAK_FUNC(sub_831636F8);
PPC_FUNC_IMPL(__imp__sub_831636F8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,32104
	ctx.r7.s64 = ctx.r10.s64 + 32104;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,32484
	ctx.r4.s64 = ctx.r9.s64 + 32484;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-20220
	ctx.r3.s64 = ctx.r8.s64 + -20220;
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
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x8316375C;
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

__attribute__((alias("__imp__sub_8316376C"))) PPC_WEAK_FUNC(sub_8316376C);
PPC_FUNC_IMPL(__imp__sub_8316376C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163770"))) PPC_WEAK_FUNC(sub_83163770);
PPC_FUNC_IMPL(__imp__sub_83163770) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,32224
	ctx.r7.s64 = ctx.r10.s64 + 32224;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,32520
	ctx.r4.s64 = ctx.r9.s64 + 32520;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-20172
	ctx.r3.s64 = ctx.r8.s64 + -20172;
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
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x831637D4;
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

__attribute__((alias("__imp__sub_831637E4"))) PPC_WEAK_FUNC(sub_831637E4);
PPC_FUNC_IMPL(__imp__sub_831637E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831637E8"))) PPC_WEAK_FUNC(sub_831637E8);
PPC_FUNC_IMPL(__imp__sub_831637E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r9,-31973
	ctx.r9.s64 = -2095382528;
	// addi r8,r9,5176
	ctx.r8.s64 = ctx.r9.s64 + 5176;
	// lwz r11,9220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9220);
	// lwz r10,5120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5120);
	// stw r11,128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 128, ctx.r11.u32);
	// stw r10,152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 152, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316380C"))) PPC_WEAK_FUNC(sub_8316380C);
PPC_FUNC_IMPL(__imp__sub_8316380C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163810"))) PPC_WEAK_FUNC(sub_83163810);
PPC_FUNC_IMPL(__imp__sub_83163810) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r11,31888
	ctx.r9.s64 = ctx.r11.s64 + 31888;
	// addi r4,r10,5176
	ctx.r4.s64 = ctx.r10.s64 + 5176;
	// addi r5,r9,480
	ctx.r5.s64 = ctx.r9.s64 + 480;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// li r10,21
	ctx.r10.s64 = 21;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-16572
	ctx.r5.s64 = ctx.r8.s64 + -16572;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,32748
	ctx.r4.s64 = ctx.r7.s64 + 32748;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-20124
	ctx.r3.s64 = ctx.r6.s64 + -20124;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// bl 0x82d32af0
	ctx.lr = 0x83163880;
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

__attribute__((alias("__imp__sub_83163890"))) PPC_WEAK_FUNC(sub_83163890);
PPC_FUNC_IMPL(__imp__sub_83163890) {
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
	// bl 0x82d89c08
	ctx.lr = 0x831638A8;
	sub_82D89C08(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r8,r9,-20076
	ctx.r8.s64 = ctx.r9.s64 + -20076;
	// addi r11,r11,32748
	ctx.r11.s64 = ctx.r11.s64 + 32748;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r11,-20076(r9)
	PPC_STORE_U32(ctx.r9.u32 + -20076, ctx.r11.u32);
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r10,r10,-11600
	ctx.r10.s64 = ctx.r10.s64 + -11600;
	// addi r9,r9,-11640
	ctx.r9.s64 = ctx.r9.s64 + -11640;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831638EC"))) PPC_WEAK_FUNC(sub_831638EC);
PPC_FUNC_IMPL(__imp__sub_831638EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831638F0"))) PPC_WEAK_FUNC(sub_831638F0);
PPC_FUNC_IMPL(__imp__sub_831638F0) {
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
	// addi r6,r10,-32736
	ctx.r6.s64 = ctx.r10.s64 + -32736;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-16668
	ctx.r5.s64 = ctx.r9.s64 + -16668;
	// addi r4,r8,-32512
	ctx.r4.s64 = ctx.r8.s64 + -32512;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-20060
	ctx.r3.s64 = ctx.r7.s64 + -20060;
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
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82d32af0
	ctx.lr = 0x83163958;
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

__attribute__((alias("__imp__sub_8316396C"))) PPC_WEAK_FUNC(sub_8316396C);
PPC_FUNC_IMPL(__imp__sub_8316396C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163970"))) PPC_WEAK_FUNC(sub_83163970);
PPC_FUNC_IMPL(__imp__sub_83163970) {
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
	// addi r6,r10,-32368
	ctx.r6.s64 = ctx.r10.s64 + -32368;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-16956
	ctx.r5.s64 = ctx.r9.s64 + -16956;
	// addi r4,r8,-32140
	ctx.r4.s64 = ctx.r8.s64 + -32140;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-20012
	ctx.r3.s64 = ctx.r7.s64 + -20012;
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
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82d32af0
	ctx.lr = 0x831639D8;
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

__attribute__((alias("__imp__sub_831639EC"))) PPC_WEAK_FUNC(sub_831639EC);
PPC_FUNC_IMPL(__imp__sub_831639EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831639F0"))) PPC_WEAK_FUNC(sub_831639F0);
PPC_FUNC_IMPL(__imp__sub_831639F0) {
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
	// addi r6,r10,-32088
	ctx.r6.s64 = ctx.r10.s64 + -32088;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-16572
	ctx.r5.s64 = ctx.r9.s64 + -16572;
	// addi r4,r8,-31840
	ctx.r4.s64 = ctx.r8.s64 + -31840;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-19964
	ctx.r3.s64 = ctx.r7.s64 + -19964;
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
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82d32af0
	ctx.lr = 0x83163A58;
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

__attribute__((alias("__imp__sub_83163A6C"))) PPC_WEAK_FUNC(sub_83163A6C);
PPC_FUNC_IMPL(__imp__sub_83163A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163A70"))) PPC_WEAK_FUNC(sub_83163A70);
PPC_FUNC_IMPL(__imp__sub_83163A70) {
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
	// bl 0x82d7d908
	ctx.lr = 0x83163A88;
	sub_82D7D908(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r8,r9,-19916
	ctx.r8.s64 = ctx.r9.s64 + -19916;
	// addi r11,r11,-31840
	ctx.r11.s64 = ctx.r11.s64 + -31840;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r11,-19916(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19916, ctx.r11.u32);
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r10,r10,-10176
	ctx.r10.s64 = ctx.r10.s64 + -10176;
	// addi r9,r9,-10216
	ctx.r9.s64 = ctx.r9.s64 + -10216;
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

__attribute__((alias("__imp__sub_83163ACC"))) PPC_WEAK_FUNC(sub_83163ACC);
PPC_FUNC_IMPL(__imp__sub_83163ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163AD0"))) PPC_WEAK_FUNC(sub_83163AD0);
PPC_FUNC_IMPL(__imp__sub_83163AD0) {
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
	// addi r6,r10,-31816
	ctx.r6.s64 = ctx.r10.s64 + -31816;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-16908
	ctx.r5.s64 = ctx.r9.s64 + -16908;
	// addi r4,r8,-31636
	ctx.r4.s64 = ctx.r8.s64 + -31636;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-19900
	ctx.r3.s64 = ctx.r7.s64 + -19900;
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
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82d32af0
	ctx.lr = 0x83163B38;
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

__attribute__((alias("__imp__sub_83163B4C"))) PPC_WEAK_FUNC(sub_83163B4C);
PPC_FUNC_IMPL(__imp__sub_83163B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163B50"))) PPC_WEAK_FUNC(sub_83163B50);
PPC_FUNC_IMPL(__imp__sub_83163B50) {
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
	// addi r6,r10,-31600
	ctx.r6.s64 = ctx.r10.s64 + -31600;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-16908
	ctx.r5.s64 = ctx.r9.s64 + -16908;
	// addi r4,r8,-31500
	ctx.r4.s64 = ctx.r8.s64 + -31500;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-19852
	ctx.r3.s64 = ctx.r7.s64 + -19852;
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
	ctx.lr = 0x83163BB8;
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

__attribute__((alias("__imp__sub_83163BCC"))) PPC_WEAK_FUNC(sub_83163BCC);
PPC_FUNC_IMPL(__imp__sub_83163BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163BD0"))) PPC_WEAK_FUNC(sub_83163BD0);
PPC_FUNC_IMPL(__imp__sub_83163BD0) {
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
	// addi r6,r10,-31440
	ctx.r6.s64 = ctx.r10.s64 + -31440;
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
	// addi r4,r8,-31372
	ctx.r4.s64 = ctx.r8.s64 + -31372;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-19804
	ctx.r3.s64 = ctx.r7.s64 + -19804;
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
	ctx.lr = 0x83163C38;
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

__attribute__((alias("__imp__sub_83163C4C"))) PPC_WEAK_FUNC(sub_83163C4C);
PPC_FUNC_IMPL(__imp__sub_83163C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163C50"))) PPC_WEAK_FUNC(sub_83163C50);
PPC_FUNC_IMPL(__imp__sub_83163C50) {
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
	// addi r7,r10,-31264
	ctx.r7.s64 = ctx.r10.s64 + -31264;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-31024
	ctx.r4.s64 = ctx.r9.s64 + -31024;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-19756
	ctx.r3.s64 = ctx.r8.s64 + -19756;
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
	ctx.lr = 0x83163CB0;
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

__attribute__((alias("__imp__sub_83163CC0"))) PPC_WEAK_FUNC(sub_83163CC0);
PPC_FUNC_IMPL(__imp__sub_83163CC0) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r6,r10,-31192
	ctx.r6.s64 = ctx.r10.s64 + -31192;
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-16956
	ctx.r5.s64 = ctx.r9.s64 + -16956;
	// addi r4,r8,-4456
	ctx.r4.s64 = ctx.r8.s64 + -4456;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-19708
	ctx.r3.s64 = ctx.r7.s64 + -19708;
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
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82d32af0
	ctx.lr = 0x83163D2C;
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

__attribute__((alias("__imp__sub_83163D40"))) PPC_WEAK_FUNC(sub_83163D40);
PPC_FUNC_IMPL(__imp__sub_83163D40) {
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
	ctx.lr = 0x83163D58;
	sub_82D828C8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r8,r9,-19660
	ctx.r8.s64 = ctx.r9.s64 + -19660;
	// addi r11,r11,-4456
	ctx.r11.s64 = ctx.r11.s64 + -4456;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r11,-19660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19660, ctx.r11.u32);
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r10,r10,-8752
	ctx.r10.s64 = ctx.r10.s64 + -8752;
	// addi r9,r9,-8792
	ctx.r9.s64 = ctx.r9.s64 + -8792;
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

__attribute__((alias("__imp__sub_83163D9C"))) PPC_WEAK_FUNC(sub_83163D9C);
PPC_FUNC_IMPL(__imp__sub_83163D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163DA0"))) PPC_WEAK_FUNC(sub_83163DA0);
PPC_FUNC_IMPL(__imp__sub_83163DA0) {
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
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r9,r11,-30656
	ctx.r9.s64 = ctx.r11.s64 + -30656;
	// addi r4,r10,-30608
	ctx.r4.s64 = ctx.r10.s64 + -30608;
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
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-16956
	ctx.r5.s64 = ctx.r8.s64 + -16956;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-30464
	ctx.r4.s64 = ctx.r7.s64 + -30464;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-19644
	ctx.r3.s64 = ctx.r6.s64 + -19644;
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
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82d32af0
	ctx.lr = 0x83163E0C;
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

__attribute__((alias("__imp__sub_83163E1C"))) PPC_WEAK_FUNC(sub_83163E1C);
PPC_FUNC_IMPL(__imp__sub_83163E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163E20"))) PPC_WEAK_FUNC(sub_83163E20);
PPC_FUNC_IMPL(__imp__sub_83163E20) {
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
	ctx.lr = 0x83163E38;
	sub_82D84DD8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r8,r9,-19596
	ctx.r8.s64 = ctx.r9.s64 + -19596;
	// addi r11,r11,-30464
	ctx.r11.s64 = ctx.r11.s64 + -30464;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r11,-19596(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19596, ctx.r11.u32);
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r10,r10,-8648
	ctx.r10.s64 = ctx.r10.s64 + -8648;
	// addi r9,r9,-8688
	ctx.r9.s64 = ctx.r9.s64 + -8688;
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

__attribute__((alias("__imp__sub_83163E7C"))) PPC_WEAK_FUNC(sub_83163E7C);
PPC_FUNC_IMPL(__imp__sub_83163E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163E80"))) PPC_WEAK_FUNC(sub_83163E80);
PPC_FUNC_IMPL(__imp__sub_83163E80) {
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
	// addi r5,r10,-17004
	ctx.r5.s64 = ctx.r10.s64 + -17004;
	// addi r4,r9,-30424
	ctx.r4.s64 = ctx.r9.s64 + -30424;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-19580
	ctx.r3.s64 = ctx.r8.s64 + -19580;
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
	ctx.lr = 0x83163ED8;
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

__attribute__((alias("__imp__sub_83163EE8"))) PPC_WEAK_FUNC(sub_83163EE8);
PPC_FUNC_IMPL(__imp__sub_83163EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r9,-31973
	ctx.r9.s64 = -2095382528;
	// addi r8,r9,6424
	ctx.r8.s64 = ctx.r9.s64 + 6424;
	// lwz r11,6312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6312);
	// lwz r10,6308(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6308);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r10,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83163F0C"))) PPC_WEAK_FUNC(sub_83163F0C);
PPC_FUNC_IMPL(__imp__sub_83163F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83163F10"))) PPC_WEAK_FUNC(sub_83163F10);
PPC_FUNC_IMPL(__imp__sub_83163F10) {
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
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,6424
	ctx.r7.s64 = ctx.r10.s64 + 6424;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-29528
	ctx.r4.s64 = ctx.r9.s64 + -29528;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-19532
	ctx.r3.s64 = ctx.r8.s64 + -19532;
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
	ctx.lr = 0x83163F70;
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

__attribute__((alias("__imp__sub_83163F80"))) PPC_WEAK_FUNC(sub_83163F80);
PPC_FUNC_IMPL(__imp__sub_83163F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,6616
	ctx.r9.s64 = ctx.r10.s64 + 6616;
	// lwz r11,6304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6304);
	// stw r11,176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83163F98"))) PPC_WEAK_FUNC(sub_83163F98);
PPC_FUNC_IMPL(__imp__sub_83163F98) {
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
	// lis r9,-31973
	ctx.r9.s64 = -2095382528;
	// addi r5,r10,-29756
	ctx.r5.s64 = ctx.r10.s64 + -29756;
	// addi r4,r9,6616
	ctx.r4.s64 = ctx.r9.s64 + 6616;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-19532
	ctx.r5.s64 = ctx.r8.s64 + -19532;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-29460
	ctx.r4.s64 = ctx.r7.s64 + -29460;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r6,-19484
	ctx.r3.s64 = ctx.r6.s64 + -19484;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82d32af0
	ctx.lr = 0x83164008;
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

__attribute__((alias("__imp__sub_83164018"))) PPC_WEAK_FUNC(sub_83164018);
PPC_FUNC_IMPL(__imp__sub_83164018) {
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
	// addi r6,r10,-29704
	ctx.r6.s64 = ctx.r10.s64 + -29704;
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
	// addi r5,r9,-19532
	ctx.r5.s64 = ctx.r9.s64 + -19532;
	// addi r4,r8,-29420
	ctx.r4.s64 = ctx.r8.s64 + -29420;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r7,-19436
	ctx.r3.s64 = ctx.r7.s64 + -19436;
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
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82d32af0
	ctx.lr = 0x83164084;
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

__attribute__((alias("__imp__sub_83164098"))) PPC_WEAK_FUNC(sub_83164098);
PPC_FUNC_IMPL(__imp__sub_83164098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,6880
	ctx.r9.s64 = ctx.r10.s64 + 6880;
	// lwz r11,9220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9220);
	// stw r11,200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831640B0"))) PPC_WEAK_FUNC(sub_831640B0);
PPC_FUNC_IMPL(__imp__sub_831640B0) {
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
	// lis r9,-31973
	ctx.r9.s64 = -2095382528;
	// addi r10,r10,6316
	ctx.r10.s64 = ctx.r10.s64 + 6316;
	// addi r9,r9,6880
	ctx.r9.s64 = ctx.r9.s64 + 6880;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// li r10,13
	ctx.r10.s64 = 13;
	// lis r3,-31960
	ctx.r3.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r9,r8,-29816
	ctx.r9.s64 = ctx.r8.s64 + -29816;
	// addi r5,r7,-16572
	ctx.r5.s64 = ctx.r7.s64 + -16572;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r4,r6,-7328
	ctx.r4.s64 = ctx.r6.s64 + -7328;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r3,-19388
	ctx.r3.s64 = ctx.r3.s64 + -19388;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,240
	ctx.r6.s64 = 240;
	// bl 0x82d32af0
	ctx.lr = 0x83164124;
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

__attribute__((alias("__imp__sub_83164134"))) PPC_WEAK_FUNC(sub_83164134);
PPC_FUNC_IMPL(__imp__sub_83164134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83164138"))) PPC_WEAK_FUNC(sub_83164138);
PPC_FUNC_IMPL(__imp__sub_83164138) {
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
	ctx.lr = 0x83164150;
	sub_82D87590(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r8,r9,-19340
	ctx.r8.s64 = ctx.r9.s64 + -19340;
	// addi r11,r11,-7328
	ctx.r11.s64 = ctx.r11.s64 + -7328;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r11,-19340(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19340, ctx.r11.u32);
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r10,r10,-8424
	ctx.r10.s64 = ctx.r10.s64 + -8424;
	// addi r9,r9,-8408
	ctx.r9.s64 = ctx.r9.s64 + -8408;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83164194"))) PPC_WEAK_FUNC(sub_83164194);
PPC_FUNC_IMPL(__imp__sub_83164194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83164198"))) PPC_WEAK_FUNC(sub_83164198);
PPC_FUNC_IMPL(__imp__sub_83164198) {
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
	// addi r5,r10,-19036
	ctx.r5.s64 = ctx.r10.s64 + -19036;
	// addi r4,r9,-29216
	ctx.r4.s64 = ctx.r9.s64 + -29216;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-19324
	ctx.r3.s64 = ctx.r8.s64 + -19324;
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
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82d32af0
	ctx.lr = 0x831641F0;
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

__attribute__((alias("__imp__sub_83164200"))) PPC_WEAK_FUNC(sub_83164200);
PPC_FUNC_IMPL(__imp__sub_83164200) {
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
	ctx.lr = 0x83164218;
	sub_82D8EDA8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,-29216
	ctx.r11.s64 = ctx.r11.s64 + -29216;
	// addi r6,r9,-19276
	ctx.r6.s64 = ctx.r9.s64 + -19276;
	// lis r7,-32040
	ctx.r7.s64 = -2099773440;
	// stw r11,-19276(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19276, ctx.r11.u32);
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r9,r10,-29272
	ctx.r9.s64 = ctx.r10.s64 + -29272;
	// addi r10,r7,-8256
	ctx.r10.s64 = ctx.r7.s64 + -8256;
	// addi r11,r8,-8296
	ctx.r11.s64 = ctx.r8.s64 + -8296;
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

__attribute__((alias("__imp__sub_83164260"))) PPC_WEAK_FUNC(sub_83164260);
PPC_FUNC_IMPL(__imp__sub_83164260) {
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
	// addi r6,r10,-29144
	ctx.r6.s64 = ctx.r10.s64 + -29144;
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
	// addi r4,r8,-28996
	ctx.r4.s64 = ctx.r8.s64 + -28996;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-19260
	ctx.r3.s64 = ctx.r7.s64 + -19260;
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
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x82d32af0
	ctx.lr = 0x831642C8;
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

__attribute__((alias("__imp__sub_831642DC"))) PPC_WEAK_FUNC(sub_831642DC);
PPC_FUNC_IMPL(__imp__sub_831642DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831642E0"))) PPC_WEAK_FUNC(sub_831642E0);
PPC_FUNC_IMPL(__imp__sub_831642E0) {
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
	ctx.lr = 0x831642F8;
	sub_82D7E200(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r8,r9,-19212
	ctx.r8.s64 = ctx.r9.s64 + -19212;
	// addi r11,r11,-28996
	ctx.r11.s64 = ctx.r11.s64 + -28996;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r11,-19212(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19212, ctx.r11.u32);
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r10,r10,-7744
	ctx.r10.s64 = ctx.r10.s64 + -7744;
	// addi r9,r9,-7784
	ctx.r9.s64 = ctx.r9.s64 + -7784;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8316433C"))) PPC_WEAK_FUNC(sub_8316433C);
PPC_FUNC_IMPL(__imp__sub_8316433C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83164340"))) PPC_WEAK_FUNC(sub_83164340);
PPC_FUNC_IMPL(__imp__sub_83164340) {
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
	// addi r7,r10,-28760
	ctx.r7.s64 = ctx.r10.s64 + -28760;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-28520
	ctx.r4.s64 = ctx.r9.s64 + -28520;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-19196
	ctx.r3.s64 = ctx.r8.s64 + -19196;
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
	ctx.lr = 0x831643A0;
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

__attribute__((alias("__imp__sub_831643B0"))) PPC_WEAK_FUNC(sub_831643B0);
PPC_FUNC_IMPL(__imp__sub_831643B0) {
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
	// addi r9,r11,-28784
	ctx.r9.s64 = ctx.r11.s64 + -28784;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// addi r6,r9,120
	ctx.r6.s64 = ctx.r9.s64 + 120;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r5,r10,-16572
	ctx.r5.s64 = ctx.r10.s64 + -16572;
	// addi r4,r8,-28496
	ctx.r4.s64 = ctx.r8.s64 + -28496;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-19148
	ctx.r3.s64 = ctx.r7.s64 + -19148;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r31,6
	ctx.r31.s64 = 6;
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
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82d32af0
	ctx.lr = 0x83164418;
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

__attribute__((alias("__imp__sub_8316442C"))) PPC_WEAK_FUNC(sub_8316442C);
PPC_FUNC_IMPL(__imp__sub_8316442C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83164430"))) PPC_WEAK_FUNC(sub_83164430);
PPC_FUNC_IMPL(__imp__sub_83164430) {
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
	ctx.lr = 0x83164448;
	sub_82D81A58(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r8,r9,-19100
	ctx.r8.s64 = ctx.r9.s64 + -19100;
	// addi r11,r11,-28496
	ctx.r11.s64 = ctx.r11.s64 + -28496;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r11,-19100(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19100, ctx.r11.u32);
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r10,r10,-7352
	ctx.r10.s64 = ctx.r10.s64 + -7352;
	// addi r9,r9,-7392
	ctx.r9.s64 = ctx.r9.s64 + -7392;
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

__attribute__((alias("__imp__sub_8316448C"))) PPC_WEAK_FUNC(sub_8316448C);
PPC_FUNC_IMPL(__imp__sub_8316448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83164490"))) PPC_WEAK_FUNC(sub_83164490);
PPC_FUNC_IMPL(__imp__sub_83164490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r9,-31973
	ctx.r9.s64 = -2095382528;
	// addi r8,r9,7328
	ctx.r8.s64 = ctx.r9.s64 + 7328;
	// lwz r11,7304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7304);
	// lwz r10,7308(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7308);
	// stw r11,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r11.u32);
	// stw r10,128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 128, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831644B4"))) PPC_WEAK_FUNC(sub_831644B4);
PPC_FUNC_IMPL(__imp__sub_831644B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831644B8"))) PPC_WEAK_FUNC(sub_831644B8);
PPC_FUNC_IMPL(__imp__sub_831644B8) {
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
	// lis r9,-31973
	ctx.r9.s64 = -2095382528;
	// addi r6,r10,-28296
	ctx.r6.s64 = ctx.r10.s64 + -28296;
	// addi r5,r9,7328
	ctx.r5.s64 = ctx.r9.s64 + 7328;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,-28184
	ctx.r4.s64 = ctx.r8.s64 + -28184;
	// addi r3,r7,-19084
	ctx.r3.s64 = ctx.r7.s64 + -19084;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r31,15
	ctx.r31.s64 = 15;
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
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x83164524;
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

__attribute__((alias("__imp__sub_83164538"))) PPC_WEAK_FUNC(sub_83164538);
PPC_FUNC_IMPL(__imp__sub_83164538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,7688
	ctx.r9.s64 = ctx.r10.s64 + 7688;
	// lwz r11,9220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9220);
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83164550"))) PPC_WEAK_FUNC(sub_83164550);
PPC_FUNC_IMPL(__imp__sub_83164550) {
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
	// addi r9,r11,-28336
	ctx.r9.s64 = ctx.r11.s64 + -28336;
	// addi r4,r10,7688
	ctx.r4.s64 = ctx.r10.s64 + 7688;
	// addi r5,r9,104
	ctx.r5.s64 = ctx.r9.s64 + 104;
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
	// li r10,7
	ctx.r10.s64 = 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-16572
	ctx.r5.s64 = ctx.r8.s64 + -16572;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-28160
	ctx.r4.s64 = ctx.r7.s64 + -28160;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-19036
	ctx.r3.s64 = ctx.r6.s64 + -19036;
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
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82d32af0
	ctx.lr = 0x831645BC;
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

__attribute__((alias("__imp__sub_831645CC"))) PPC_WEAK_FUNC(sub_831645CC);
PPC_FUNC_IMPL(__imp__sub_831645CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831645D0"))) PPC_WEAK_FUNC(sub_831645D0);
PPC_FUNC_IMPL(__imp__sub_831645D0) {
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
	ctx.lr = 0x831645E8;
	sub_82D8EDA8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r8,r9,-18988
	ctx.r8.s64 = ctx.r9.s64 + -18988;
	// addi r11,r11,-28160
	ctx.r11.s64 = ctx.r11.s64 + -28160;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r11,-18988(r9)
	PPC_STORE_U32(ctx.r9.u32 + -18988, ctx.r11.u32);
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r10,r10,-7264
	ctx.r10.s64 = ctx.r10.s64 + -7264;
	// addi r9,r9,-7248
	ctx.r9.s64 = ctx.r9.s64 + -7248;
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

__attribute__((alias("__imp__sub_8316462C"))) PPC_WEAK_FUNC(sub_8316462C);
PPC_FUNC_IMPL(__imp__sub_8316462C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83164630"))) PPC_WEAK_FUNC(sub_83164630);
PPC_FUNC_IMPL(__imp__sub_83164630) {
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
	// addi r6,r10,-28072
	ctx.r6.s64 = ctx.r10.s64 + -28072;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-17148
	ctx.r5.s64 = ctx.r9.s64 + -17148;
	// addi r4,r8,-27748
	ctx.r4.s64 = ctx.r8.s64 + -27748;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-18972
	ctx.r3.s64 = ctx.r7.s64 + -18972;
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
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82d32af0
	ctx.lr = 0x83164698;
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

__attribute__((alias("__imp__sub_831646AC"))) PPC_WEAK_FUNC(sub_831646AC);
PPC_FUNC_IMPL(__imp__sub_831646AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831646B0"))) PPC_WEAK_FUNC(sub_831646B0);
PPC_FUNC_IMPL(__imp__sub_831646B0) {
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
	// addi r6,r10,-27976
	ctx.r6.s64 = ctx.r10.s64 + -27976;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18972
	ctx.r5.s64 = ctx.r9.s64 + -18972;
	// addi r4,r8,-27724
	ctx.r4.s64 = ctx.r8.s64 + -27724;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-18924
	ctx.r3.s64 = ctx.r7.s64 + -18924;
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
	ctx.lr = 0x83164718;
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

__attribute__((alias("__imp__sub_8316472C"))) PPC_WEAK_FUNC(sub_8316472C);
PPC_FUNC_IMPL(__imp__sub_8316472C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83164730"))) PPC_WEAK_FUNC(sub_83164730);
PPC_FUNC_IMPL(__imp__sub_83164730) {
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
	ctx.lr = 0x83164748;
	sub_82D7E4F8(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r8,r9,-18876
	ctx.r8.s64 = ctx.r9.s64 + -18876;
	// addi r11,r11,-27724
	ctx.r11.s64 = ctx.r11.s64 + -27724;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r11,-18876(r9)
	PPC_STORE_U32(ctx.r9.u32 + -18876, ctx.r11.u32);
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r10,r10,-7120
	ctx.r10.s64 = ctx.r10.s64 + -7120;
	// addi r9,r9,-7160
	ctx.r9.s64 = ctx.r9.s64 + -7160;
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

__attribute__((alias("__imp__sub_8316478C"))) PPC_WEAK_FUNC(sub_8316478C);
PPC_FUNC_IMPL(__imp__sub_8316478C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83164790"))) PPC_WEAK_FUNC(sub_83164790);
PPC_FUNC_IMPL(__imp__sub_83164790) {
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
	// addi r7,r10,-27668
	ctx.r7.s64 = ctx.r10.s64 + -27668;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-27524
	ctx.r4.s64 = ctx.r9.s64 + -27524;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-18860
	ctx.r3.s64 = ctx.r8.s64 + -18860;
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
	ctx.lr = 0x831647F0;
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

__attribute__((alias("__imp__sub_83164800"))) PPC_WEAK_FUNC(sub_83164800);
PPC_FUNC_IMPL(__imp__sub_83164800) {
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
	// addi r6,r10,-27620
	ctx.r6.s64 = ctx.r10.s64 + -27620;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-16620
	ctx.r5.s64 = ctx.r9.s64 + -16620;
	// addi r4,r8,-27504
	ctx.r4.s64 = ctx.r8.s64 + -27504;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-18812
	ctx.r3.s64 = ctx.r7.s64 + -18812;
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
	ctx.lr = 0x83164868;
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

__attribute__((alias("__imp__sub_8316487C"))) PPC_WEAK_FUNC(sub_8316487C);
PPC_FUNC_IMPL(__imp__sub_8316487C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83164880"))) PPC_WEAK_FUNC(sub_83164880);
PPC_FUNC_IMPL(__imp__sub_83164880) {
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
	// addi r6,r10,-27464
	ctx.r6.s64 = ctx.r10.s64 + -27464;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-16476
	ctx.r5.s64 = ctx.r9.s64 + -16476;
	// addi r4,r8,-27360
	ctx.r4.s64 = ctx.r8.s64 + -27360;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-18764
	ctx.r3.s64 = ctx.r7.s64 + -18764;
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
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82d32af0
	ctx.lr = 0x831648E8;
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

__attribute__((alias("__imp__sub_831648FC"))) PPC_WEAK_FUNC(sub_831648FC);
PPC_FUNC_IMPL(__imp__sub_831648FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83164900"))) PPC_WEAK_FUNC(sub_83164900);
PPC_FUNC_IMPL(__imp__sub_83164900) {
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
	// addi r5,r10,-17052
	ctx.r5.s64 = ctx.r10.s64 + -17052;
	// addi r4,r9,-27268
	ctx.r4.s64 = ctx.r9.s64 + -27268;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,-18716
	ctx.r3.s64 = ctx.r8.s64 + -18716;
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
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82d32af0
	ctx.lr = 0x83164958;
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

__attribute__((alias("__imp__sub_83164968"))) PPC_WEAK_FUNC(sub_83164968);
PPC_FUNC_IMPL(__imp__sub_83164968) {
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
	ctx.lr = 0x83164980;
	sub_82D7E868(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r8,r9,-18668
	ctx.r8.s64 = ctx.r9.s64 + -18668;
	// addi r11,r11,-27268
	ctx.r11.s64 = ctx.r11.s64 + -27268;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r11,-18668(r9)
	PPC_STORE_U32(ctx.r9.u32 + -18668, ctx.r11.u32);
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r10,r10,-6104
	ctx.r10.s64 = ctx.r10.s64 + -6104;
	// addi r9,r9,-6144
	ctx.r9.s64 = ctx.r9.s64 + -6144;
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

__attribute__((alias("__imp__sub_831649C4"))) PPC_WEAK_FUNC(sub_831649C4);
PPC_FUNC_IMPL(__imp__sub_831649C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831649C8"))) PPC_WEAK_FUNC(sub_831649C8);
PPC_FUNC_IMPL(__imp__sub_831649C8) {
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
	// addi r6,r10,-27232
	ctx.r6.s64 = ctx.r10.s64 + -27232;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31960
	ctx.r7.s64 = -2094530560;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-16860
	ctx.r5.s64 = ctx.r9.s64 + -16860;
	// addi r4,r8,-27104
	ctx.r4.s64 = ctx.r8.s64 + -27104;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-18652
	ctx.r3.s64 = ctx.r7.s64 + -18652;
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
	ctx.lr = 0x83164A30;
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

__attribute__((alias("__imp__sub_83164A44"))) PPC_WEAK_FUNC(sub_83164A44);
PPC_FUNC_IMPL(__imp__sub_83164A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83164A48"))) PPC_WEAK_FUNC(sub_83164A48);
PPC_FUNC_IMPL(__imp__sub_83164A48) {
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
	// addi r6,r10,-27056
	ctx.r6.s64 = ctx.r10.s64 + -27056;
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
	// addi r4,r8,-26960
	ctx.r4.s64 = ctx.r8.s64 + -26960;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-18604
	ctx.r3.s64 = ctx.r7.s64 + -18604;
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
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82d32af0
	ctx.lr = 0x83164AB0;
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

__attribute__((alias("__imp__sub_83164AC4"))) PPC_WEAK_FUNC(sub_83164AC4);
PPC_FUNC_IMPL(__imp__sub_83164AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83164AC8"))) PPC_WEAK_FUNC(sub_83164AC8);
PPC_FUNC_IMPL(__imp__sub_83164AC8) {
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
	// addi r6,r10,-26848
	ctx.r6.s64 = ctx.r10.s64 + -26848;
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
	// addi r4,r8,-26688
	ctx.r4.s64 = ctx.r8.s64 + -26688;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r7,-18556
	ctx.r3.s64 = ctx.r7.s64 + -18556;
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
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82d32af0
	ctx.lr = 0x83164B30;
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

__attribute__((alias("__imp__sub_83164B44"))) PPC_WEAK_FUNC(sub_83164B44);
PPC_FUNC_IMPL(__imp__sub_83164B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83164B48"))) PPC_WEAK_FUNC(sub_83164B48);
PPC_FUNC_IMPL(__imp__sub_83164B48) {
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
	// addi r7,r10,-26656
	ctx.r7.s64 = ctx.r10.s64 + -26656;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r9,-26448
	ctx.r4.s64 = ctx.r9.s64 + -26448;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-18508
	ctx.r3.s64 = ctx.r8.s64 + -18508;
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
	ctx.lr = 0x83164BA8;
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

__attribute__((alias("__imp__sub_83164BB8"))) PPC_WEAK_FUNC(sub_83164BB8);
PPC_FUNC_IMPL(__imp__sub_83164BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r9,r10,8352
	ctx.r9.s64 = ctx.r10.s64 + 8352;
	// lwz r11,9220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9220);
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83164BD0"))) PPC_WEAK_FUNC(sub_83164BD0);
PPC_FUNC_IMPL(__imp__sub_83164BD0) {
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
	// lis r9,-31973
	ctx.r9.s64 = -2095382528;
	// addi r5,r10,-26560
	ctx.r5.s64 = ctx.r10.s64 + -26560;
	// addi r4,r9,8352
	ctx.r4.s64 = ctx.r9.s64 + 8352;
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31960
	ctx.r6.s64 = -2094530560;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-16572
	ctx.r5.s64 = ctx.r8.s64 + -16572;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-26420
	ctx.r4.s64 = ctx.r7.s64 + -26420;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r6,-18460
	ctx.r3.s64 = ctx.r6.s64 + -18460;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,68
	ctx.r6.s64 = 68;
	// bl 0x82d32af0
	ctx.lr = 0x83164C3C;
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

__attribute__((alias("__imp__sub_83164C4C"))) PPC_WEAK_FUNC(sub_83164C4C);
PPC_FUNC_IMPL(__imp__sub_83164C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83164C50"))) PPC_WEAK_FUNC(sub_83164C50);
PPC_FUNC_IMPL(__imp__sub_83164C50) {
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
	ctx.lr = 0x83164C68;
	sub_82D7ECD0(ctx, base);
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r8,r9,-18412
	ctx.r8.s64 = ctx.r9.s64 + -18412;
	// addi r11,r11,-26420
	ctx.r11.s64 = ctx.r11.s64 + -26420;
	// lis r10,-32040
	ctx.r10.s64 = -2099773440;
	// stw r11,-18412(r9)
	PPC_STORE_U32(ctx.r9.u32 + -18412, ctx.r11.u32);
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r10,r10,-4976
	ctx.r10.s64 = ctx.r10.s64 + -4976;
	// addi r9,r9,-5016
	ctx.r9.s64 = ctx.r9.s64 + -5016;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83164CAC"))) PPC_WEAK_FUNC(sub_83164CAC);
PPC_FUNC_IMPL(__imp__sub_83164CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83164CB0"))) PPC_WEAK_FUNC(sub_83164CB0);
PPC_FUNC_IMPL(__imp__sub_83164CB0) {
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
	// lis r9,-31960
	ctx.r9.s64 = -2094530560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,-26376
	ctx.r4.s64 = ctx.r10.s64 + -26376;
	// addi r3,r9,-18396
	ctx.r3.s64 = ctx.r9.s64 + -18396;
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
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d32af0
	ctx.lr = 0x83164D04;
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

__attribute__((alias("__imp__sub_83164D14"))) PPC_WEAK_FUNC(sub_83164D14);
PPC_FUNC_IMPL(__imp__sub_83164D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

