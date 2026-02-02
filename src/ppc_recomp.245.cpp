#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82DC2CC0"))) PPC_WEAK_FUNC(sub_82DC2CC0);
PPC_FUNC_IMPL(__imp__sub_82DC2CC0) {
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

__attribute__((alias("__imp__sub_82DC2CD4"))) PPC_WEAK_FUNC(sub_82DC2CD4);
PPC_FUNC_IMPL(__imp__sub_82DC2CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2CD8"))) PPC_WEAK_FUNC(sub_82DC2CD8);
PPC_FUNC_IMPL(__imp__sub_82DC2CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13824
	ctx.r3.s64 = ctx.r11.s64 + -13824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2CE4"))) PPC_WEAK_FUNC(sub_82DC2CE4);
PPC_FUNC_IMPL(__imp__sub_82DC2CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2CE8"))) PPC_WEAK_FUNC(sub_82DC2CE8);
PPC_FUNC_IMPL(__imp__sub_82DC2CE8) {
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
	// beq cr6,0x82dc2d1c
	if (ctx.cr6.eq) goto loc_82DC2D1C;
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
loc_82DC2D1C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-8644
	ctx.r10.s64 = ctx.r11.s64 + -8644;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2D2C"))) PPC_WEAK_FUNC(sub_82DC2D2C);
PPC_FUNC_IMPL(__imp__sub_82DC2D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2D30"))) PPC_WEAK_FUNC(sub_82DC2D30);
PPC_FUNC_IMPL(__imp__sub_82DC2D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-8644
	ctx.r3.s64 = ctx.r11.s64 + -8644;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2D3C"))) PPC_WEAK_FUNC(sub_82DC2D3C);
PPC_FUNC_IMPL(__imp__sub_82DC2D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2D40"))) PPC_WEAK_FUNC(sub_82DC2D40);
PPC_FUNC_IMPL(__imp__sub_82DC2D40) {
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
	// beq cr6,0x82dc2d74
	if (ctx.cr6.eq) goto loc_82DC2D74;
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
loc_82DC2D74:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-7700
	ctx.r10.s64 = ctx.r11.s64 + -7700;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2D84"))) PPC_WEAK_FUNC(sub_82DC2D84);
PPC_FUNC_IMPL(__imp__sub_82DC2D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2D88"))) PPC_WEAK_FUNC(sub_82DC2D88);
PPC_FUNC_IMPL(__imp__sub_82DC2D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-7700
	ctx.r3.s64 = ctx.r11.s64 + -7700;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2D94"))) PPC_WEAK_FUNC(sub_82DC2D94);
PPC_FUNC_IMPL(__imp__sub_82DC2D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2D98"))) PPC_WEAK_FUNC(sub_82DC2D98);
PPC_FUNC_IMPL(__imp__sub_82DC2D98) {
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
	// bl 0x82de0f88
	ctx.lr = 0x82DC2DB8;
	sub_82DE0F88(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc2de4
	if (ctx.cr6.eq) goto loc_82DC2DE4;
	// bl 0x82d2d090
	ctx.lr = 0x82DC2DC8;
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
	ctx.lr = 0x82DC2DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC2DE4:
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

__attribute__((alias("__imp__sub_82DC2E00"))) PPC_WEAK_FUNC(sub_82DC2E00);
PPC_FUNC_IMPL(__imp__sub_82DC2E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2E04"))) PPC_WEAK_FUNC(sub_82DC2E04);
PPC_FUNC_IMPL(__imp__sub_82DC2E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2E08"))) PPC_WEAK_FUNC(sub_82DC2E08);
PPC_FUNC_IMPL(__imp__sub_82DC2E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13776
	ctx.r3.s64 = ctx.r11.s64 + -13776;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2E14"))) PPC_WEAK_FUNC(sub_82DC2E14);
PPC_FUNC_IMPL(__imp__sub_82DC2E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2E18"))) PPC_WEAK_FUNC(sub_82DC2E18);
PPC_FUNC_IMPL(__imp__sub_82DC2E18) {
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

__attribute__((alias("__imp__sub_82DC2E2C"))) PPC_WEAK_FUNC(sub_82DC2E2C);
PPC_FUNC_IMPL(__imp__sub_82DC2E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2E30"))) PPC_WEAK_FUNC(sub_82DC2E30);
PPC_FUNC_IMPL(__imp__sub_82DC2E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13728
	ctx.r3.s64 = ctx.r11.s64 + -13728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2E3C"))) PPC_WEAK_FUNC(sub_82DC2E3C);
PPC_FUNC_IMPL(__imp__sub_82DC2E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2E40"))) PPC_WEAK_FUNC(sub_82DC2E40);
PPC_FUNC_IMPL(__imp__sub_82DC2E40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2E44"))) PPC_WEAK_FUNC(sub_82DC2E44);
PPC_FUNC_IMPL(__imp__sub_82DC2E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2E48"))) PPC_WEAK_FUNC(sub_82DC2E48);
PPC_FUNC_IMPL(__imp__sub_82DC2E48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-7300
	ctx.r10.s64 = ctx.r11.s64 + -7300;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2E60"))) PPC_WEAK_FUNC(sub_82DC2E60);
PPC_FUNC_IMPL(__imp__sub_82DC2E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-7300
	ctx.r3.s64 = ctx.r11.s64 + -7300;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2E6C"))) PPC_WEAK_FUNC(sub_82DC2E6C);
PPC_FUNC_IMPL(__imp__sub_82DC2E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2E70"))) PPC_WEAK_FUNC(sub_82DC2E70);
PPC_FUNC_IMPL(__imp__sub_82DC2E70) {
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
	// bl 0x82dd6d28
	ctx.lr = 0x82DC2E90;
	sub_82DD6D28(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc2ebc
	if (ctx.cr6.eq) goto loc_82DC2EBC;
	// bl 0x82d2d090
	ctx.lr = 0x82DC2EA0;
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
	ctx.lr = 0x82DC2EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC2EBC:
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

__attribute__((alias("__imp__sub_82DC2ED8"))) PPC_WEAK_FUNC(sub_82DC2ED8);
PPC_FUNC_IMPL(__imp__sub_82DC2ED8) {
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

__attribute__((alias("__imp__sub_82DC2EEC"))) PPC_WEAK_FUNC(sub_82DC2EEC);
PPC_FUNC_IMPL(__imp__sub_82DC2EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2EF0"))) PPC_WEAK_FUNC(sub_82DC2EF0);
PPC_FUNC_IMPL(__imp__sub_82DC2EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13680
	ctx.r3.s64 = ctx.r11.s64 + -13680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2EFC"))) PPC_WEAK_FUNC(sub_82DC2EFC);
PPC_FUNC_IMPL(__imp__sub_82DC2EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2F00"))) PPC_WEAK_FUNC(sub_82DC2F00);
PPC_FUNC_IMPL(__imp__sub_82DC2F00) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-6964
	ctx.r10.s64 = ctx.r11.s64 + -6964;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2F18"))) PPC_WEAK_FUNC(sub_82DC2F18);
PPC_FUNC_IMPL(__imp__sub_82DC2F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-6964
	ctx.r3.s64 = ctx.r11.s64 + -6964;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2F24"))) PPC_WEAK_FUNC(sub_82DC2F24);
PPC_FUNC_IMPL(__imp__sub_82DC2F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2F28"))) PPC_WEAK_FUNC(sub_82DC2F28);
PPC_FUNC_IMPL(__imp__sub_82DC2F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82DC2F30;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 + 44;
	// bl 0x82d2d090
	ctx.lr = 0x82DC2F40;
	sub_82D2D090(ctx, base);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r29,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dc2f78
	if (!ctx.cr6.eq) goto loc_82DC2F78;
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
	ctx.lr = 0x82DC2F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC2F78:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r31,r28,32
	ctx.r31.s64 = ctx.r28.s64 + 32;
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82DC2F8C;
	sub_82D2D090(ctx, base);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r29,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dc2fc0
	if (!ctx.cr6.eq) goto loc_82DC2FC0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DC2FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC2FC0:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// addi r10,r11,10816
	ctx.r10.s64 = ctx.r11.s64 + 10816;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC2FDC"))) PPC_WEAK_FUNC(sub_82DC2FDC);
PPC_FUNC_IMPL(__imp__sub_82DC2FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2FE0"))) PPC_WEAK_FUNC(sub_82DC2FE0);
PPC_FUNC_IMPL(__imp__sub_82DC2FE0) {
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
	// bl 0x82dc2f28
	ctx.lr = 0x82DC3000;
	sub_82DC2F28(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc302c
	if (ctx.cr6.eq) goto loc_82DC302C;
	// bl 0x82d2d090
	ctx.lr = 0x82DC3010;
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
	ctx.lr = 0x82DC302C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC302C:
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

__attribute__((alias("__imp__sub_82DC3048"))) PPC_WEAK_FUNC(sub_82DC3048);
PPC_FUNC_IMPL(__imp__sub_82DC3048) {
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

__attribute__((alias("__imp__sub_82DC305C"))) PPC_WEAK_FUNC(sub_82DC305C);
PPC_FUNC_IMPL(__imp__sub_82DC305C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3060"))) PPC_WEAK_FUNC(sub_82DC3060);
PPC_FUNC_IMPL(__imp__sub_82DC3060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13632
	ctx.r3.s64 = ctx.r11.s64 + -13632;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC306C"))) PPC_WEAK_FUNC(sub_82DC306C);
PPC_FUNC_IMPL(__imp__sub_82DC306C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3070"))) PPC_WEAK_FUNC(sub_82DC3070);
PPC_FUNC_IMPL(__imp__sub_82DC3070) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82ddc6f0
	sub_82DDC6F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC307C"))) PPC_WEAK_FUNC(sub_82DC307C);
PPC_FUNC_IMPL(__imp__sub_82DC307C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3080"))) PPC_WEAK_FUNC(sub_82DC3080);
PPC_FUNC_IMPL(__imp__sub_82DC3080) {
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
	// bl 0x82ddc6f0
	ctx.lr = 0x82DC3098;
	sub_82DDC6F0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC30AC"))) PPC_WEAK_FUNC(sub_82DC30AC);
PPC_FUNC_IMPL(__imp__sub_82DC30AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC30B0"))) PPC_WEAK_FUNC(sub_82DC30B0);
PPC_FUNC_IMPL(__imp__sub_82DC30B0) {
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

__attribute__((alias("__imp__sub_82DC30C4"))) PPC_WEAK_FUNC(sub_82DC30C4);
PPC_FUNC_IMPL(__imp__sub_82DC30C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC30C8"))) PPC_WEAK_FUNC(sub_82DC30C8);
PPC_FUNC_IMPL(__imp__sub_82DC30C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13568
	ctx.r3.s64 = ctx.r11.s64 + -13568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC30D4"))) PPC_WEAK_FUNC(sub_82DC30D4);
PPC_FUNC_IMPL(__imp__sub_82DC30D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC30D8"))) PPC_WEAK_FUNC(sub_82DC30D8);
PPC_FUNC_IMPL(__imp__sub_82DC30D8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// addi r9,r10,-6532
	ctx.r9.s64 = ctx.r10.s64 + -6532;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82d372b8
	sub_82D372B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC30F8"))) PPC_WEAK_FUNC(sub_82DC30F8);
PPC_FUNC_IMPL(__imp__sub_82DC30F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC30FC"))) PPC_WEAK_FUNC(sub_82DC30FC);
PPC_FUNC_IMPL(__imp__sub_82DC30FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3100"))) PPC_WEAK_FUNC(sub_82DC3100);
PPC_FUNC_IMPL(__imp__sub_82DC3100) {
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
	ctx.lr = 0x82DC3124;
	sub_82D372B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3138"))) PPC_WEAK_FUNC(sub_82DC3138);
PPC_FUNC_IMPL(__imp__sub_82DC3138) {
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
	// bl 0x82dd8a88
	ctx.lr = 0x82DC3158;
	sub_82DD8A88(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc3184
	if (ctx.cr6.eq) goto loc_82DC3184;
	// bl 0x82d2d090
	ctx.lr = 0x82DC3168;
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
	ctx.lr = 0x82DC3184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC3184:
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

__attribute__((alias("__imp__sub_82DC31A0"))) PPC_WEAK_FUNC(sub_82DC31A0);
PPC_FUNC_IMPL(__imp__sub_82DC31A0) {
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

__attribute__((alias("__imp__sub_82DC31B4"))) PPC_WEAK_FUNC(sub_82DC31B4);
PPC_FUNC_IMPL(__imp__sub_82DC31B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC31B8"))) PPC_WEAK_FUNC(sub_82DC31B8);
PPC_FUNC_IMPL(__imp__sub_82DC31B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13504
	ctx.r3.s64 = ctx.r11.s64 + -13504;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC31C4"))) PPC_WEAK_FUNC(sub_82DC31C4);
PPC_FUNC_IMPL(__imp__sub_82DC31C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC31C8"))) PPC_WEAK_FUNC(sub_82DC31C8);
PPC_FUNC_IMPL(__imp__sub_82DC31C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r9,r10,-6212
	ctx.r9.s64 = ctx.r10.s64 + -6212;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82de3a50
	sub_82DE3A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC31F4"))) PPC_WEAK_FUNC(sub_82DC31F4);
PPC_FUNC_IMPL(__imp__sub_82DC31F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC31F8"))) PPC_WEAK_FUNC(sub_82DC31F8);
PPC_FUNC_IMPL(__imp__sub_82DC31F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-6212
	ctx.r3.s64 = ctx.r11.s64 + -6212;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3204"))) PPC_WEAK_FUNC(sub_82DC3204);
PPC_FUNC_IMPL(__imp__sub_82DC3204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3208"))) PPC_WEAK_FUNC(sub_82DC3208);
PPC_FUNC_IMPL(__imp__sub_82DC3208) {
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
	// bl 0x82de41c8
	ctx.lr = 0x82DC3228;
	sub_82DE41C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc3254
	if (ctx.cr6.eq) goto loc_82DC3254;
	// bl 0x82d2d090
	ctx.lr = 0x82DC3238;
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
	ctx.lr = 0x82DC3254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC3254:
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

__attribute__((alias("__imp__sub_82DC3270"))) PPC_WEAK_FUNC(sub_82DC3270);
PPC_FUNC_IMPL(__imp__sub_82DC3270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3274"))) PPC_WEAK_FUNC(sub_82DC3274);
PPC_FUNC_IMPL(__imp__sub_82DC3274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3278"))) PPC_WEAK_FUNC(sub_82DC3278);
PPC_FUNC_IMPL(__imp__sub_82DC3278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13456
	ctx.r3.s64 = ctx.r11.s64 + -13456;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3284"))) PPC_WEAK_FUNC(sub_82DC3284);
PPC_FUNC_IMPL(__imp__sub_82DC3284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3288"))) PPC_WEAK_FUNC(sub_82DC3288);
PPC_FUNC_IMPL(__imp__sub_82DC3288) {
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

__attribute__((alias("__imp__sub_82DC329C"))) PPC_WEAK_FUNC(sub_82DC329C);
PPC_FUNC_IMPL(__imp__sub_82DC329C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC32A0"))) PPC_WEAK_FUNC(sub_82DC32A0);
PPC_FUNC_IMPL(__imp__sub_82DC32A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13408
	ctx.r3.s64 = ctx.r11.s64 + -13408;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC32AC"))) PPC_WEAK_FUNC(sub_82DC32AC);
PPC_FUNC_IMPL(__imp__sub_82DC32AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC32B0"))) PPC_WEAK_FUNC(sub_82DC32B0);
PPC_FUNC_IMPL(__imp__sub_82DC32B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC32B4"))) PPC_WEAK_FUNC(sub_82DC32B4);
PPC_FUNC_IMPL(__imp__sub_82DC32B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC32B8"))) PPC_WEAK_FUNC(sub_82DC32B8);
PPC_FUNC_IMPL(__imp__sub_82DC32B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-6020
	ctx.r10.s64 = ctx.r11.s64 + -6020;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC32D0"))) PPC_WEAK_FUNC(sub_82DC32D0);
PPC_FUNC_IMPL(__imp__sub_82DC32D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-6020
	ctx.r3.s64 = ctx.r11.s64 + -6020;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC32DC"))) PPC_WEAK_FUNC(sub_82DC32DC);
PPC_FUNC_IMPL(__imp__sub_82DC32DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC32E0"))) PPC_WEAK_FUNC(sub_82DC32E0);
PPC_FUNC_IMPL(__imp__sub_82DC32E0) {
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

__attribute__((alias("__imp__sub_82DC32F4"))) PPC_WEAK_FUNC(sub_82DC32F4);
PPC_FUNC_IMPL(__imp__sub_82DC32F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC32F8"))) PPC_WEAK_FUNC(sub_82DC32F8);
PPC_FUNC_IMPL(__imp__sub_82DC32F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13360
	ctx.r3.s64 = ctx.r11.s64 + -13360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3304"))) PPC_WEAK_FUNC(sub_82DC3304);
PPC_FUNC_IMPL(__imp__sub_82DC3304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3308"))) PPC_WEAK_FUNC(sub_82DC3308);
PPC_FUNC_IMPL(__imp__sub_82DC3308) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-5724
	ctx.r10.s64 = ctx.r11.s64 + -5724;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3320"))) PPC_WEAK_FUNC(sub_82DC3320);
PPC_FUNC_IMPL(__imp__sub_82DC3320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-5724
	ctx.r3.s64 = ctx.r11.s64 + -5724;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC332C"))) PPC_WEAK_FUNC(sub_82DC332C);
PPC_FUNC_IMPL(__imp__sub_82DC332C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3330"))) PPC_WEAK_FUNC(sub_82DC3330);
PPC_FUNC_IMPL(__imp__sub_82DC3330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3334"))) PPC_WEAK_FUNC(sub_82DC3334);
PPC_FUNC_IMPL(__imp__sub_82DC3334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3338"))) PPC_WEAK_FUNC(sub_82DC3338);
PPC_FUNC_IMPL(__imp__sub_82DC3338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13312
	ctx.r3.s64 = ctx.r11.s64 + -13312;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3344"))) PPC_WEAK_FUNC(sub_82DC3344);
PPC_FUNC_IMPL(__imp__sub_82DC3344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3348"))) PPC_WEAK_FUNC(sub_82DC3348);
PPC_FUNC_IMPL(__imp__sub_82DC3348) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82de4e68
	sub_82DE4E68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3354"))) PPC_WEAK_FUNC(sub_82DC3354);
PPC_FUNC_IMPL(__imp__sub_82DC3354) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3358"))) PPC_WEAK_FUNC(sub_82DC3358);
PPC_FUNC_IMPL(__imp__sub_82DC3358) {
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

__attribute__((alias("__imp__sub_82DC336C"))) PPC_WEAK_FUNC(sub_82DC336C);
PPC_FUNC_IMPL(__imp__sub_82DC336C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3370"))) PPC_WEAK_FUNC(sub_82DC3370);
PPC_FUNC_IMPL(__imp__sub_82DC3370) {
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
	// bl 0x82de4e68
	ctx.lr = 0x82DC3388;
	sub_82DE4E68(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC339C"))) PPC_WEAK_FUNC(sub_82DC339C);
PPC_FUNC_IMPL(__imp__sub_82DC339C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC33A0"))) PPC_WEAK_FUNC(sub_82DC33A0);
PPC_FUNC_IMPL(__imp__sub_82DC33A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13264
	ctx.r3.s64 = ctx.r11.s64 + -13264;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC33AC"))) PPC_WEAK_FUNC(sub_82DC33AC);
PPC_FUNC_IMPL(__imp__sub_82DC33AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC33B0"))) PPC_WEAK_FUNC(sub_82DC33B0);
PPC_FUNC_IMPL(__imp__sub_82DC33B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC33B4"))) PPC_WEAK_FUNC(sub_82DC33B4);
PPC_FUNC_IMPL(__imp__sub_82DC33B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC33B8"))) PPC_WEAK_FUNC(sub_82DC33B8);
PPC_FUNC_IMPL(__imp__sub_82DC33B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13200
	ctx.r3.s64 = ctx.r11.s64 + -13200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC33C4"))) PPC_WEAK_FUNC(sub_82DC33C4);
PPC_FUNC_IMPL(__imp__sub_82DC33C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC33C8"))) PPC_WEAK_FUNC(sub_82DC33C8);
PPC_FUNC_IMPL(__imp__sub_82DC33C8) {
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

__attribute__((alias("__imp__sub_82DC33DC"))) PPC_WEAK_FUNC(sub_82DC33DC);
PPC_FUNC_IMPL(__imp__sub_82DC33DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC33E0"))) PPC_WEAK_FUNC(sub_82DC33E0);
PPC_FUNC_IMPL(__imp__sub_82DC33E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13152
	ctx.r3.s64 = ctx.r11.s64 + -13152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC33EC"))) PPC_WEAK_FUNC(sub_82DC33EC);
PPC_FUNC_IMPL(__imp__sub_82DC33EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC33F0"))) PPC_WEAK_FUNC(sub_82DC33F0);
PPC_FUNC_IMPL(__imp__sub_82DC33F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC33F4"))) PPC_WEAK_FUNC(sub_82DC33F4);
PPC_FUNC_IMPL(__imp__sub_82DC33F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC33F8"))) PPC_WEAK_FUNC(sub_82DC33F8);
PPC_FUNC_IMPL(__imp__sub_82DC33F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-4820
	ctx.r10.s64 = ctx.r11.s64 + -4820;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3410"))) PPC_WEAK_FUNC(sub_82DC3410);
PPC_FUNC_IMPL(__imp__sub_82DC3410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-4820
	ctx.r3.s64 = ctx.r11.s64 + -4820;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC341C"))) PPC_WEAK_FUNC(sub_82DC341C);
PPC_FUNC_IMPL(__imp__sub_82DC341C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3420"))) PPC_WEAK_FUNC(sub_82DC3420);
PPC_FUNC_IMPL(__imp__sub_82DC3420) {
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
	// bl 0x82ddab90
	ctx.lr = 0x82DC3440;
	sub_82DDAB90(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc346c
	if (ctx.cr6.eq) goto loc_82DC346C;
	// bl 0x82d2d090
	ctx.lr = 0x82DC3450;
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
	ctx.lr = 0x82DC346C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC346C:
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

__attribute__((alias("__imp__sub_82DC3488"))) PPC_WEAK_FUNC(sub_82DC3488);
PPC_FUNC_IMPL(__imp__sub_82DC3488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

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

