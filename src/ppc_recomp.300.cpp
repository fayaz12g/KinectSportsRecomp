#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8306EA98"))) PPC_WEAK_FUNC(sub_8306EA98);
PPC_FUNC_IMPL(__imp__sub_8306EA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8306EAA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8306ead4
	if (ctx.cr6.eq) goto loc_8306EAD4;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_8306EABC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8306eafc
	if (ctx.cr6.eq) goto loc_8306EAFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8306eabc
	if (!ctx.cr6.eq) goto loc_8306EABC;
loc_8306EAD4:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r29,r11,29,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// bl 0x8305d3f0
	ctx.lr = 0x8306EAE4;
	sub_8305D3F0(ctx, base);
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306EAFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8306EAFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306EB04"))) PPC_WEAK_FUNC(sub_8306EB04);
PPC_FUNC_IMPL(__imp__sub_8306EB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306EB08"))) PPC_WEAK_FUNC(sub_8306EB08);
PPC_FUNC_IMPL(__imp__sub_8306EB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8306EB10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8306eb48
	if (ctx.cr6.eq) goto loc_8306EB48;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_8306EB30:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8306eb80
	if (ctx.cr6.eq) goto loc_8306EB80;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8306eb30
	if (!ctx.cr6.eq) goto loc_8306EB30;
loc_8306EB48:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r28,r11,29,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// bl 0x8305d3f0
	ctx.lr = 0x8306EB58;
	sub_8305D3F0(ctx, base);
	// lwz r9,180(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8306EB80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8306EB80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306EB88"))) PPC_WEAK_FUNC(sub_8306EB88);
PPC_FUNC_IMPL(__imp__sub_8306EB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f2,44(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f3,48(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EB9C"))) PPC_WEAK_FUNC(sub_8306EB9C);
PPC_FUNC_IMPL(__imp__sub_8306EB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306EBA0"))) PPC_WEAK_FUNC(sub_8306EBA0);
PPC_FUNC_IMPL(__imp__sub_8306EBA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r31.u32);
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stfs f12,48(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 48, temp.u32);
	// stfs f13,44(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 44, temp.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// stfs f0,40(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 40, temp.u32);
	// stw r11,52(r7)
	PPC_STORE_U32(ctx.r7.u32 + 52, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EC0C"))) PPC_WEAK_FUNC(sub_8306EC0C);
PPC_FUNC_IMPL(__imp__sub_8306EC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306EC10"))) PPC_WEAK_FUNC(sub_8306EC10);
PPC_FUNC_IMPL(__imp__sub_8306EC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// bl 0x8307e658
	ctx.lr = 0x8306EC28;
	sub_8307E658(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-8024
	ctx.r9.s64 = ctx.r11.s64 + -8024;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8306EC6C"))) PPC_WEAK_FUNC(sub_8306EC6C);
PPC_FUNC_IMPL(__imp__sub_8306EC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306EC70"))) PPC_WEAK_FUNC(sub_8306EC70);
PPC_FUNC_IMPL(__imp__sub_8306EC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8306EC78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8306EC94;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8306ecfc
	if (ctx.cr6.eq) goto loc_8306ECFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8307e658
	ctx.lr = 0x8306ECAC;
	sub_8307E658(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-8024
	ctx.r9.s64 = ctx.r11.s64 + -8024;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// bl 0x8307e6a8
	ctx.lr = 0x8306ECE0;
	sub_8307E6A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8306ed08
	if (ctx.cr6.eq) goto loc_8306ED08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306ECFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8306ECFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8306ED08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306ED14"))) PPC_WEAK_FUNC(sub_8306ED14);
PPC_FUNC_IMPL(__imp__sub_8306ED14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306ED18"))) PPC_WEAK_FUNC(sub_8306ED18);
PPC_FUNC_IMPL(__imp__sub_8306ED18) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-8024
	ctx.r10.s64 = ctx.r11.s64 + -8024;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8307e698
	ctx.lr = 0x8306ED44;
	sub_8307E698(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8306ed5c
	if (ctx.cr6.eq) goto loc_8306ED5C;
	// bl 0x82691540
	ctx.lr = 0x8306ED58;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8306ED5C:
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

__attribute__((alias("__imp__sub_8306ED74"))) PPC_WEAK_FUNC(sub_8306ED74);
PPC_FUNC_IMPL(__imp__sub_8306ED74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306ED78"))) PPC_WEAK_FUNC(sub_8306ED78);
PPC_FUNC_IMPL(__imp__sub_8306ED78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-7944
	ctx.r10.s64 = ctx.r11.s64 + -7944;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8307e698
	sub_8307E698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306ED88"))) PPC_WEAK_FUNC(sub_8306ED88);
PPC_FUNC_IMPL(__imp__sub_8306ED88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8306ED90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r29,r11,29,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// bl 0x8305d3f0
	ctx.lr = 0x8306EDA8;
	sub_8305D3F0(ctx, base);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306EDC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306EDC8"))) PPC_WEAK_FUNC(sub_8306EDC8);
PPC_FUNC_IMPL(__imp__sub_8306EDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8306EDD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r28,r11,29,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// bl 0x8305d3f0
	ctx.lr = 0x8306EDEC;
	sub_8305D3F0(ctx, base);
	// lwz r9,164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8306EE14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306EE1C"))) PPC_WEAK_FUNC(sub_8306EE1C);
PPC_FUNC_IMPL(__imp__sub_8306EE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306EE20"))) PPC_WEAK_FUNC(sub_8306EE20);
PPC_FUNC_IMPL(__imp__sub_8306EE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8306EE28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r29,r11,29,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// bl 0x8305d3f0
	ctx.lr = 0x8306EE40;
	sub_8305D3F0(ctx, base);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306EE58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306EE60"))) PPC_WEAK_FUNC(sub_8306EE60);
PPC_FUNC_IMPL(__imp__sub_8306EE60) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EE74"))) PPC_WEAK_FUNC(sub_8306EE74);
PPC_FUNC_IMPL(__imp__sub_8306EE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306EE78"))) PPC_WEAK_FUNC(sub_8306EE78);
PPC_FUNC_IMPL(__imp__sub_8306EE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8306EE80;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r28,r10,29,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1F;
	// bl 0x83031600
	ctx.lr = 0x8306EEA4;
	sub_83031600(ctx, base);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fadds f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// bl 0x8305d3f0
	ctx.lr = 0x8306EEB8;
	sub_8305D3F0(ctx, base);
	// lwz r9,164(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8306EEDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306EEE8"))) PPC_WEAK_FUNC(sub_8306EEE8);
PPC_FUNC_IMPL(__imp__sub_8306EEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8306EEF0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm r27,r10,29,27,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1F;
	// bl 0x83031600
	ctx.lr = 0x8306EF18;
	sub_83031600(ctx, base);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fadds f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// bl 0x8305d3f0
	ctx.lr = 0x8306EF2C;
	sub_8305D3F0(ctx, base);
	// lwz r9,164(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8306EF50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306EF5C"))) PPC_WEAK_FUNC(sub_8306EF5C);
PPC_FUNC_IMPL(__imp__sub_8306EF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306EF60"))) PPC_WEAK_FUNC(sub_8306EF60);
PPC_FUNC_IMPL(__imp__sub_8306EF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8306EF68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8306ef9c
	if (ctx.cr6.eq) goto loc_8306EF9C;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_8306EF84:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8306efc4
	if (ctx.cr6.eq) goto loc_8306EFC4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8306ef84
	if (!ctx.cr6.eq) goto loc_8306EF84;
loc_8306EF9C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r29,r11,29,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// bl 0x8305d3f0
	ctx.lr = 0x8306EFAC;
	sub_8305D3F0(ctx, base);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306EFC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8306EFC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306EFCC"))) PPC_WEAK_FUNC(sub_8306EFCC);
PPC_FUNC_IMPL(__imp__sub_8306EFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306EFD0"))) PPC_WEAK_FUNC(sub_8306EFD0);
PPC_FUNC_IMPL(__imp__sub_8306EFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8306EFD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8306f010
	if (ctx.cr6.eq) goto loc_8306F010;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_8306EFF8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8306f048
	if (ctx.cr6.eq) goto loc_8306F048;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8306eff8
	if (!ctx.cr6.eq) goto loc_8306EFF8;
loc_8306F010:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r28,r11,29,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// bl 0x8305d3f0
	ctx.lr = 0x8306F020;
	sub_8305D3F0(ctx, base);
	// lwz r9,164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8306F048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8306F048:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306F050"))) PPC_WEAK_FUNC(sub_8306F050);
PPC_FUNC_IMPL(__imp__sub_8306F050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f2,44(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f3,48(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F064"))) PPC_WEAK_FUNC(sub_8306F064);
PPC_FUNC_IMPL(__imp__sub_8306F064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F068"))) PPC_WEAK_FUNC(sub_8306F068);
PPC_FUNC_IMPL(__imp__sub_8306F068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r31.u32);
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stfs f12,48(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 48, temp.u32);
	// stfs f13,44(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 44, temp.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// stfs f0,40(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 40, temp.u32);
	// stw r11,52(r7)
	PPC_STORE_U32(ctx.r7.u32 + 52, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F0D4"))) PPC_WEAK_FUNC(sub_8306F0D4);
PPC_FUNC_IMPL(__imp__sub_8306F0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F0D8"))) PPC_WEAK_FUNC(sub_8306F0D8);
PPC_FUNC_IMPL(__imp__sub_8306F0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// bl 0x8307e658
	ctx.lr = 0x8306F0F0;
	sub_8307E658(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-7944
	ctx.r9.s64 = ctx.r11.s64 + -7944;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8306F134"))) PPC_WEAK_FUNC(sub_8306F134);
PPC_FUNC_IMPL(__imp__sub_8306F134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F138"))) PPC_WEAK_FUNC(sub_8306F138);
PPC_FUNC_IMPL(__imp__sub_8306F138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8306F140;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8306F15C;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8306f1c4
	if (ctx.cr6.eq) goto loc_8306F1C4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8307e658
	ctx.lr = 0x8306F174;
	sub_8307E658(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-7944
	ctx.r9.s64 = ctx.r11.s64 + -7944;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// bl 0x8307e6a8
	ctx.lr = 0x8306F1A8;
	sub_8307E6A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8306f1d0
	if (ctx.cr6.eq) goto loc_8306F1D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306F1C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8306F1C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8306F1D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306F1DC"))) PPC_WEAK_FUNC(sub_8306F1DC);
PPC_FUNC_IMPL(__imp__sub_8306F1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F1E0"))) PPC_WEAK_FUNC(sub_8306F1E0);
PPC_FUNC_IMPL(__imp__sub_8306F1E0) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-7944
	ctx.r10.s64 = ctx.r11.s64 + -7944;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8307e698
	ctx.lr = 0x8306F20C;
	sub_8307E698(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8306f224
	if (ctx.cr6.eq) goto loc_8306F224;
	// bl 0x82691540
	ctx.lr = 0x8306F220;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8306F224:
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

__attribute__((alias("__imp__sub_8306F23C"))) PPC_WEAK_FUNC(sub_8306F23C);
PPC_FUNC_IMPL(__imp__sub_8306F23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F240"))) PPC_WEAK_FUNC(sub_8306F240);
PPC_FUNC_IMPL(__imp__sub_8306F240) {
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
	// bl 0x8305d018
	ctx.lr = 0x8306F258;
	sub_8305D018(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,-7864
	ctx.r9.s64 = ctx.r11.s64 + -7864;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8306F284"))) PPC_WEAK_FUNC(sub_8306F284);
PPC_FUNC_IMPL(__imp__sub_8306F284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F288"))) PPC_WEAK_FUNC(sub_8306F288);
PPC_FUNC_IMPL(__imp__sub_8306F288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-7864
	ctx.r10.s64 = ctx.r11.s64 + -7864;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8305d278
	sub_8305D278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306F298"))) PPC_WEAK_FUNC(sub_8306F298);
PPC_FUNC_IMPL(__imp__sub_8306F298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8306F2A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8306F2BC;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8306f2fc
	if (ctx.cr6.eq) goto loc_8306F2FC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8305d018
	ctx.lr = 0x8306F2D4;
	sub_8305D018(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,-7864
	ctx.r9.s64 = ctx.r11.s64 + -7864;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x8305d368
	ctx.lr = 0x8306F2F0;
	sub_8305D368(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8306F2FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306F308"))) PPC_WEAK_FUNC(sub_8306F308);
PPC_FUNC_IMPL(__imp__sub_8306F308) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F314"))) PPC_WEAK_FUNC(sub_8306F314);
PPC_FUNC_IMPL(__imp__sub_8306F314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F318"))) PPC_WEAK_FUNC(sub_8306F318);
PPC_FUNC_IMPL(__imp__sub_8306F318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8306F320;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r11,r7,3,24,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 3) & 0xF8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF07);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// bl 0x8305d628
	ctx.lr = 0x8306F374;
	sub_8305D628(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8306f3d0
	if (!ctx.cr6.eq) goto loc_8306F3D0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306F398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8306f3bc
	if (!ctx.cr6.eq) goto loc_8306F3BC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306F3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8306F3BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r9.u32);
loc_8306F3D0:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306F3E4"))) PPC_WEAK_FUNC(sub_8306F3E4);
PPC_FUNC_IMPL(__imp__sub_8306F3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F3E8"))) PPC_WEAK_FUNC(sub_8306F3E8);
PPC_FUNC_IMPL(__imp__sub_8306F3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8306F3F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x830639c8
	ctx.lr = 0x8306F410;
	sub_830639C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8306f4d4
	if (ctx.cr6.eq) goto loc_8306F4D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8305d3f0
	ctx.lr = 0x8306F424;
	sub_8305D3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// li r9,1
	ctx.r9.s64 = 1;
	// ld r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r31,52(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stb r11,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r11.u8);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// std r5,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r5.u64);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stb r9,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, ctx.r9.u8);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r11,29,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8306F4B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8306F4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8306F4D4:
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306F4E0"))) PPC_WEAK_FUNC(sub_8306F4E0);
PPC_FUNC_IMPL(__imp__sub_8306F4E0) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-7864
	ctx.r10.s64 = ctx.r11.s64 + -7864;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8305d278
	ctx.lr = 0x8306F50C;
	sub_8305D278(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8306f524
	if (ctx.cr6.eq) goto loc_8306F524;
	// bl 0x82691540
	ctx.lr = 0x8306F520;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8306F524:
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

__attribute__((alias("__imp__sub_8306F53C"))) PPC_WEAK_FUNC(sub_8306F53C);
PPC_FUNC_IMPL(__imp__sub_8306F53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F540"))) PPC_WEAK_FUNC(sub_8306F540);
PPC_FUNC_IMPL(__imp__sub_8306F540) {
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
	// bl 0x8307e658
	ctx.lr = 0x8306F558;
	sub_8307E658(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-7816
	ctx.r10.s64 = ctx.r11.s64 + -7816;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8306F57C"))) PPC_WEAK_FUNC(sub_8306F57C);
PPC_FUNC_IMPL(__imp__sub_8306F57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F580"))) PPC_WEAK_FUNC(sub_8306F580);
PPC_FUNC_IMPL(__imp__sub_8306F580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-7816
	ctx.r10.s64 = ctx.r11.s64 + -7816;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8307e698
	sub_8307E698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306F590"))) PPC_WEAK_FUNC(sub_8306F590);
PPC_FUNC_IMPL(__imp__sub_8306F590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8306F598;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r29,r11,29,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// bl 0x8305d3f0
	ctx.lr = 0x8306F5B0;
	sub_8305D3F0(ctx, base);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306F5CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306F5D4"))) PPC_WEAK_FUNC(sub_8306F5D4);
PPC_FUNC_IMPL(__imp__sub_8306F5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F5D8"))) PPC_WEAK_FUNC(sub_8306F5D8);
PPC_FUNC_IMPL(__imp__sub_8306F5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8306F5E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r28,r11,29,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// bl 0x8305d3f0
	ctx.lr = 0x8306F5FC;
	sub_8305D3F0(ctx, base);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306F618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306F620"))) PPC_WEAK_FUNC(sub_8306F620);
PPC_FUNC_IMPL(__imp__sub_8306F620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8306F628;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r29,r11,29,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// bl 0x8305d3f0
	ctx.lr = 0x8306F640;
	sub_8305D3F0(ctx, base);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306F65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306F664"))) PPC_WEAK_FUNC(sub_8306F664);
PPC_FUNC_IMPL(__imp__sub_8306F664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F668"))) PPC_WEAK_FUNC(sub_8306F668);
PPC_FUNC_IMPL(__imp__sub_8306F668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8306F670;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r28,r11,29,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// bl 0x8305d3f0
	ctx.lr = 0x8306F68C;
	sub_8305D3F0(ctx, base);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306F6A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306F6B0"))) PPC_WEAK_FUNC(sub_8306F6B0);
PPC_FUNC_IMPL(__imp__sub_8306F6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8306F6B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r29,r11,29,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// bl 0x8305d3f0
	ctx.lr = 0x8306F6D0;
	sub_8305D3F0(ctx, base);
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306F6E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306F6F0"))) PPC_WEAK_FUNC(sub_8306F6F0);
PPC_FUNC_IMPL(__imp__sub_8306F6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8306F6F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8306F714;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8306f75c
	if (ctx.cr6.eq) goto loc_8306F75C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8307e658
	ctx.lr = 0x8306F72C;
	sub_8307E658(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-7816
	ctx.r10.s64 = ctx.r11.s64 + -7816;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8307e6a8
	ctx.lr = 0x8306F740;
	sub_8307E6A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8306f768
	if (ctx.cr6.eq) goto loc_8306F768;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306F75C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8306F75C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8306F768:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306F774"))) PPC_WEAK_FUNC(sub_8306F774);
PPC_FUNC_IMPL(__imp__sub_8306F774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F778"))) PPC_WEAK_FUNC(sub_8306F778);
PPC_FUNC_IMPL(__imp__sub_8306F778) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F78C"))) PPC_WEAK_FUNC(sub_8306F78C);
PPC_FUNC_IMPL(__imp__sub_8306F78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F790"))) PPC_WEAK_FUNC(sub_8306F790);
PPC_FUNC_IMPL(__imp__sub_8306F790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8306F798;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8306f7cc
	if (ctx.cr6.eq) goto loc_8306F7CC;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_8306F7B4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8306f7f4
	if (ctx.cr6.eq) goto loc_8306F7F4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8306f7b4
	if (!ctx.cr6.eq) goto loc_8306F7B4;
loc_8306F7CC:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r29,r11,29,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// bl 0x8305d3f0
	ctx.lr = 0x8306F7DC;
	sub_8305D3F0(ctx, base);
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306F7F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8306F7F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306F7FC"))) PPC_WEAK_FUNC(sub_8306F7FC);
PPC_FUNC_IMPL(__imp__sub_8306F7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F800"))) PPC_WEAK_FUNC(sub_8306F800);
PPC_FUNC_IMPL(__imp__sub_8306F800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8306F808;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8306f840
	if (ctx.cr6.eq) goto loc_8306F840;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_8306F828:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8306f86c
	if (ctx.cr6.eq) goto loc_8306F86C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8306f828
	if (!ctx.cr6.eq) goto loc_8306F828;
loc_8306F840:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r28,r11,29,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// bl 0x8305d3f0
	ctx.lr = 0x8306F850;
	sub_8305D3F0(ctx, base);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8306F86C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8306F86C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306F874"))) PPC_WEAK_FUNC(sub_8306F874);
PPC_FUNC_IMPL(__imp__sub_8306F874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F878"))) PPC_WEAK_FUNC(sub_8306F878);
PPC_FUNC_IMPL(__imp__sub_8306F878) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-7816
	ctx.r10.s64 = ctx.r11.s64 + -7816;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8307e698
	ctx.lr = 0x8306F8A4;
	sub_8307E698(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8306f8bc
	if (ctx.cr6.eq) goto loc_8306F8BC;
	// bl 0x82691540
	ctx.lr = 0x8306F8B8;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8306F8BC:
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

__attribute__((alias("__imp__sub_8306F8D4"))) PPC_WEAK_FUNC(sub_8306F8D4);
PPC_FUNC_IMPL(__imp__sub_8306F8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F8D8"))) PPC_WEAK_FUNC(sub_8306F8D8);
PPC_FUNC_IMPL(__imp__sub_8306F8D8) {
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
	// bl 0x83070658
	ctx.lr = 0x8306F8F0;
	sub_83070658(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-7736
	ctx.r10.s64 = ctx.r11.s64 + -7736;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8306F914"))) PPC_WEAK_FUNC(sub_8306F914);
PPC_FUNC_IMPL(__imp__sub_8306F914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306F918"))) PPC_WEAK_FUNC(sub_8306F918);
PPC_FUNC_IMPL(__imp__sub_8306F918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-7736
	ctx.r10.s64 = ctx.r11.s64 + -7736;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x830706a0
	sub_830706A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306F928"))) PPC_WEAK_FUNC(sub_8306F928);
PPC_FUNC_IMPL(__imp__sub_8306F928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8306F930;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8306F94C;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8306f984
	if (ctx.cr6.eq) goto loc_8306F984;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83070658
	ctx.lr = 0x8306F964;
	sub_83070658(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-7736
	ctx.r10.s64 = ctx.r11.s64 + -7736;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8305d368
	ctx.lr = 0x8306F978;
	sub_8305D368(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8306F984:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306F990"))) PPC_WEAK_FUNC(sub_8306F990);
PPC_FUNC_IMPL(__imp__sub_8306F990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8306F998;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,52(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// li r29,1
	ctx.r29.s64 = 1;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// cmpwi cr6,r11,12321
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12321, ctx.xer);
	// bgt cr6,0x8306fa38
	if (ctx.cr6.gt) goto loc_8306FA38;
	// cmpwi cr6,r11,12320
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12320, ctx.xer);
	// bge cr6,0x8306fa04
	if (!ctx.cr6.lt) goto loc_8306FA04;
	// cmpwi cr6,r11,12304
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12304, ctx.xer);
	// blt cr6,0x8306fa70
	if (ctx.cr6.lt) goto loc_8306FA70;
	// cmpwi cr6,r11,12305
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12305, ctx.xer);
	// bgt cr6,0x8306fa70
	if (ctx.cr6.gt) goto loc_8306FA70;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x830709a8
	ctx.lr = 0x8306F9DC;
	sub_830709A8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,15172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15172);
	// bl 0x83043890
	ctx.lr = 0x8306F9F8;
	sub_83043890(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8306FA04:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83070830
	ctx.lr = 0x8306FA14;
	sub_83070830(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,15172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15172);
	// bl 0x83043890
	ctx.lr = 0x8306FA2C;
	sub_83043890(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8306FA38:
	// cmpwi cr6,r11,12352
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12352, ctx.xer);
	// blt cr6,0x8306fa70
	if (ctx.cr6.lt) goto loc_8306FA70;
	// cmpwi cr6,r11,12353
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12353, ctx.xer);
	// bgt cr6,0x8306fa70
	if (ctx.cr6.gt) goto loc_8306FA70;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830706b0
	ctx.lr = 0x8306FA58;
	sub_830706B0(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// lbz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,15172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15172);
	// bl 0x83043a78
	ctx.lr = 0x8306FA70;
	sub_83043A78(ctx, base);
loc_8306FA70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306FA7C"))) PPC_WEAK_FUNC(sub_8306FA7C);
PPC_FUNC_IMPL(__imp__sub_8306FA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FA80"))) PPC_WEAK_FUNC(sub_8306FA80);
PPC_FUNC_IMPL(__imp__sub_8306FA80) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FA94"))) PPC_WEAK_FUNC(sub_8306FA94);
PPC_FUNC_IMPL(__imp__sub_8306FA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FA98"))) PPC_WEAK_FUNC(sub_8306FA98);
PPC_FUNC_IMPL(__imp__sub_8306FA98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r6,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, ctx.r6.u8);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FAD8"))) PPC_WEAK_FUNC(sub_8306FAD8);
PPC_FUNC_IMPL(__imp__sub_8306FAD8) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-7736
	ctx.r10.s64 = ctx.r11.s64 + -7736;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x830706a0
	ctx.lr = 0x8306FB04;
	sub_830706A0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8306fb1c
	if (ctx.cr6.eq) goto loc_8306FB1C;
	// bl 0x82691540
	ctx.lr = 0x8306FB18;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8306FB1C:
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

__attribute__((alias("__imp__sub_8306FB34"))) PPC_WEAK_FUNC(sub_8306FB34);
PPC_FUNC_IMPL(__imp__sub_8306FB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FB38"))) PPC_WEAK_FUNC(sub_8306FB38);
PPC_FUNC_IMPL(__imp__sub_8306FB38) {
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
	// bl 0x83070658
	ctx.lr = 0x8306FB50;
	sub_83070658(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-7684
	ctx.r9.s64 = ctx.r11.s64 + -7684;
	// stb r10,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8306FB7C"))) PPC_WEAK_FUNC(sub_8306FB7C);
PPC_FUNC_IMPL(__imp__sub_8306FB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FB80"))) PPC_WEAK_FUNC(sub_8306FB80);
PPC_FUNC_IMPL(__imp__sub_8306FB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-7684
	ctx.r10.s64 = ctx.r11.s64 + -7684;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x830706a0
	sub_830706A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306FB90"))) PPC_WEAK_FUNC(sub_8306FB90);
PPC_FUNC_IMPL(__imp__sub_8306FB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8306FB98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x8306FBB4;
	sub_82FD6B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8306fbf4
	if (ctx.cr6.eq) goto loc_8306FBF4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83070658
	ctx.lr = 0x8306FBCC;
	sub_83070658(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-7684
	ctx.r9.s64 = ctx.r11.s64 + -7684;
	// stb r10,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x8305d368
	ctx.lr = 0x8306FBE8;
	sub_8305D368(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8306FBF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306FC00"))) PPC_WEAK_FUNC(sub_8306FC00);
PPC_FUNC_IMPL(__imp__sub_8306FC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8306FC08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,52(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// li r29,1
	ctx.r29.s64 = 1;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// cmpwi cr6,r11,8225
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8225, ctx.xer);
	// bgt cr6,0x8306fca8
	if (ctx.cr6.gt) goto loc_8306FCA8;
	// cmpwi cr6,r11,8224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8224, ctx.xer);
	// bge cr6,0x8306fc74
	if (!ctx.cr6.lt) goto loc_8306FC74;
	// cmpwi cr6,r11,8208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8208, ctx.xer);
	// blt cr6,0x8306fce0
	if (ctx.cr6.lt) goto loc_8306FCE0;
	// cmpwi cr6,r11,8209
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8209, ctx.xer);
	// bgt cr6,0x8306fce0
	if (ctx.cr6.gt) goto loc_8306FCE0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830709a8
	ctx.lr = 0x8306FC4C;
	sub_830709A8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,15172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15172);
	// bl 0x83042788
	ctx.lr = 0x8306FC68;
	sub_83042788(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8306FC74:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83070830
	ctx.lr = 0x8306FC84;
	sub_83070830(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,15172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15172);
	// bl 0x83042788
	ctx.lr = 0x8306FC9C;
	sub_83042788(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8306FCA8:
	// cmpwi cr6,r11,8256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8256, ctx.xer);
	// blt cr6,0x8306fce0
	if (ctx.cr6.lt) goto loc_8306FCE0;
	// cmpwi cr6,r11,8257
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8257, ctx.xer);
	// bgt cr6,0x8306fce0
	if (ctx.cr6.gt) goto loc_8306FCE0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830706b0
	ctx.lr = 0x8306FCC8;
	sub_830706B0(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// lbz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,15172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15172);
	// bl 0x83042fe0
	ctx.lr = 0x8306FCE0;
	sub_83042FE0(ctx, base);
loc_8306FCE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306FCEC"))) PPC_WEAK_FUNC(sub_8306FCEC);
PPC_FUNC_IMPL(__imp__sub_8306FCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FCF0"))) PPC_WEAK_FUNC(sub_8306FCF0);
PPC_FUNC_IMPL(__imp__sub_8306FCF0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FD04"))) PPC_WEAK_FUNC(sub_8306FD04);
PPC_FUNC_IMPL(__imp__sub_8306FD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FD08"))) PPC_WEAK_FUNC(sub_8306FD08);
PPC_FUNC_IMPL(__imp__sub_8306FD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r6,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r6.u8);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FD48"))) PPC_WEAK_FUNC(sub_8306FD48);
PPC_FUNC_IMPL(__imp__sub_8306FD48) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-7684
	ctx.r10.s64 = ctx.r11.s64 + -7684;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x830706a0
	ctx.lr = 0x8306FD74;
	sub_830706A0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8306fd8c
	if (ctx.cr6.eq) goto loc_8306FD8C;
	// bl 0x82691540
	ctx.lr = 0x8306FD88;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8306FD8C:
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

__attribute__((alias("__imp__sub_8306FDA4"))) PPC_WEAK_FUNC(sub_8306FDA4);
PPC_FUNC_IMPL(__imp__sub_8306FDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FDA8"))) PPC_WEAK_FUNC(sub_8306FDA8);
PPC_FUNC_IMPL(__imp__sub_8306FDA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FDB0"))) PPC_WEAK_FUNC(sub_8306FDB0);
PPC_FUNC_IMPL(__imp__sub_8306FDB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FDB8"))) PPC_WEAK_FUNC(sub_8306FDB8);
PPC_FUNC_IMPL(__imp__sub_8306FDB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FDBC"))) PPC_WEAK_FUNC(sub_8306FDBC);
PPC_FUNC_IMPL(__imp__sub_8306FDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FDC0"))) PPC_WEAK_FUNC(sub_8306FDC0);
PPC_FUNC_IMPL(__imp__sub_8306FDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-14320
	ctx.r10.s64 = ctx.r11.s64 + -14320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FDD0"))) PPC_WEAK_FUNC(sub_8306FDD0);
PPC_FUNC_IMPL(__imp__sub_8306FDD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FDE4"))) PPC_WEAK_FUNC(sub_8306FDE4);
PPC_FUNC_IMPL(__imp__sub_8306FDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FDE8"))) PPC_WEAK_FUNC(sub_8306FDE8);
PPC_FUNC_IMPL(__imp__sub_8306FDE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,3,13,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7FFF8;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FDF8"))) PPC_WEAK_FUNC(sub_8306FDF8);
PPC_FUNC_IMPL(__imp__sub_8306FDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8306FE00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8306fe7c
	if (ctx.cr6.eq) goto loc_8306FE7C;
loc_8306FE20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8306fe6c
	if (!ctx.cr6.eq) goto loc_8306FE6C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8306fe5c
	if (!ctx.cr6.lt) goto loc_8306FE5C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82fa7c48
	ctx.lr = 0x8306FE5C;
	sub_82FA7C48(ctx, base);
loc_8306FE5C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x8306fe70
	goto loc_8306FE70;
loc_8306FE6C:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_8306FE70:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8306fe20
	if (!ctx.cr6.eq) goto loc_8306FE20;
loc_8306FE7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306FE84"))) PPC_WEAK_FUNC(sub_8306FE84);
PPC_FUNC_IMPL(__imp__sub_8306FE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FE88"))) PPC_WEAK_FUNC(sub_8306FE88);
PPC_FUNC_IMPL(__imp__sub_8306FE88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,3,13,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7FFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r5,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FE9C"))) PPC_WEAK_FUNC(sub_8306FE9C);
PPC_FUNC_IMPL(__imp__sub_8306FE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FEA0"))) PPC_WEAK_FUNC(sub_8306FEA0);
PPC_FUNC_IMPL(__imp__sub_8306FEA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,3,13,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7FFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FEB4"))) PPC_WEAK_FUNC(sub_8306FEB4);
PPC_FUNC_IMPL(__imp__sub_8306FEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FEB8"))) PPC_WEAK_FUNC(sub_8306FEB8);
PPC_FUNC_IMPL(__imp__sub_8306FEB8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8306FED0:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8306fed0
	if (!ctx.cr6.eq) goto loc_8306FED0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FEE8"))) PPC_WEAK_FUNC(sub_8306FEE8);
PPC_FUNC_IMPL(__imp__sub_8306FEE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8306ff10
	if (ctx.cr6.eq) goto loc_8306FF10;
loc_8306FEF8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8306ff18
	if (ctx.cr6.eq) goto loc_8306FF18;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8306fef8
	if (!ctx.cr6.eq) goto loc_8306FEF8;
loc_8306FF10:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8306FF18:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FF20"))) PPC_WEAK_FUNC(sub_8306FF20);
PPC_FUNC_IMPL(__imp__sub_8306FF20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8306ff58
	if (ctx.cr6.eq) goto loc_8306FF58;
loc_8306FF34:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8306ff60
	if (ctx.cr6.eq) goto loc_8306FF60;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne cr6,0x8306ff34
	if (!ctx.cr6.eq) goto loc_8306FF34;
loc_8306FF58:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8306FF60:
	// sth r10,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FF6C"))) PPC_WEAK_FUNC(sub_8306FF6C);
PPC_FUNC_IMPL(__imp__sub_8306FF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FF70"))) PPC_WEAK_FUNC(sub_8306FF70);
PPC_FUNC_IMPL(__imp__sub_8306FF70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-7632
	ctx.r9.s64 = ctx.r10.s64 + -7632;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FF90"))) PPC_WEAK_FUNC(sub_8306FF90);
PPC_FUNC_IMPL(__imp__sub_8306FF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-14320
	ctx.r10.s64 = ctx.r11.s64 + -14320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FFA0"))) PPC_WEAK_FUNC(sub_8306FFA0);
PPC_FUNC_IMPL(__imp__sub_8306FFA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FFB4"))) PPC_WEAK_FUNC(sub_8306FFB4);
PPC_FUNC_IMPL(__imp__sub_8306FFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FFB8"))) PPC_WEAK_FUNC(sub_8306FFB8);
PPC_FUNC_IMPL(__imp__sub_8306FFB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FFC8"))) PPC_WEAK_FUNC(sub_8306FFC8);
PPC_FUNC_IMPL(__imp__sub_8306FFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-7584
	ctx.r9.s64 = ctx.r10.s64 + -7584;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FFE8"))) PPC_WEAK_FUNC(sub_8306FFE8);
PPC_FUNC_IMPL(__imp__sub_8306FFE8) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82fe1098
	ctx.lr = 0x8307000C;
	sub_82FE1098(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83070020
	if (!ctx.cr6.eq) goto loc_83070020;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8307002c
	goto loc_8307002C;
loc_83070020:
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8307002C:
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

__attribute__((alias("__imp__sub_83070044"))) PPC_WEAK_FUNC(sub_83070044);
PPC_FUNC_IMPL(__imp__sub_83070044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070048"))) PPC_WEAK_FUNC(sub_83070048);
PPC_FUNC_IMPL(__imp__sub_83070048) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070054"))) PPC_WEAK_FUNC(sub_83070054);
PPC_FUNC_IMPL(__imp__sub_83070054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070058"))) PPC_WEAK_FUNC(sub_83070058);
PPC_FUNC_IMPL(__imp__sub_83070058) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83062990
	sub_83062990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83070060"))) PPC_WEAK_FUNC(sub_83070060);
PPC_FUNC_IMPL(__imp__sub_83070060) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307006C"))) PPC_WEAK_FUNC(sub_8307006C);
PPC_FUNC_IMPL(__imp__sub_8307006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070070"))) PPC_WEAK_FUNC(sub_83070070);
PPC_FUNC_IMPL(__imp__sub_83070070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8307009c
	if (ctx.cr6.eq) goto loc_8307009C;
loc_83070084:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8307009c
	if (ctx.cr6.eq) goto loc_8307009C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83070084
	if (!ctx.cr6.eq) goto loc_83070084;
loc_8307009C:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830700AC"))) PPC_WEAK_FUNC(sub_830700AC);
PPC_FUNC_IMPL(__imp__sub_830700AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830700B0"))) PPC_WEAK_FUNC(sub_830700B0);
PPC_FUNC_IMPL(__imp__sub_830700B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830700dc
	if (ctx.cr6.eq) goto loc_830700DC;
loc_830700C4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x830700dc
	if (ctx.cr6.eq) goto loc_830700DC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830700c4
	if (!ctx.cr6.eq) goto loc_830700C4;
loc_830700DC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830700fc
	if (ctx.cr6.eq) goto loc_830700FC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// sth r10,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
	// blr 
	return;
loc_830700FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070104"))) PPC_WEAK_FUNC(sub_83070104);
PPC_FUNC_IMPL(__imp__sub_83070104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070108"))) PPC_WEAK_FUNC(sub_83070108);
PPC_FUNC_IMPL(__imp__sub_83070108) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307014c
	if (ctx.cr6.eq) goto loc_8307014C;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lwz r3,-11272(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11272);
	// bl 0x82fd6cc8
	ctx.lr = 0x8307013C;
	sub_82FD6CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8307014C:
	// lwz r30,-11272(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11272);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8307017c
	if (ctx.cr6.eq) goto loc_8307017C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83070170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8307017C;
	sub_82FD6CC8(ctx, base);
loc_8307017C:
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

__attribute__((alias("__imp__sub_83070194"))) PPC_WEAK_FUNC(sub_83070194);
PPC_FUNC_IMPL(__imp__sub_83070194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070198"))) PPC_WEAK_FUNC(sub_83070198);
PPC_FUNC_IMPL(__imp__sub_83070198) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x830701dc
	if (ctx.cr6.eq) goto loc_830701DC;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lwz r3,-11272(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11272);
	// bl 0x82fd6cc8
	ctx.lr = 0x830701CC;
	sub_82FD6CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_830701DC:
	// lwz r30,-11272(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11272);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8307020c
	if (ctx.cr6.eq) goto loc_8307020C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83070200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8307020C;
	sub_82FD6CC8(ctx, base);
loc_8307020C:
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

__attribute__((alias("__imp__sub_83070224"))) PPC_WEAK_FUNC(sub_83070224);
PPC_FUNC_IMPL(__imp__sub_83070224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070228"))) PPC_WEAK_FUNC(sub_83070228);
PPC_FUNC_IMPL(__imp__sub_83070228) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83039c98
	ctx.lr = 0x83070244;
	sub_83039C98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83070250
	if (ctx.cr6.eq) goto loc_83070250;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_83070250:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_83070270"))) PPC_WEAK_FUNC(sub_83070270);
PPC_FUNC_IMPL(__imp__sub_83070270) {
	PPC_FUNC_PROLOGUE();
	// li r3,50
	ctx.r3.s64 = 50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070278"))) PPC_WEAK_FUNC(sub_83070278);
PPC_FUNC_IMPL(__imp__sub_83070278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83070280;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830702A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r8,344(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 344);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830702BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r7,65535
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 65535, ctx.xer);
	// blt cr6,0x830702d4
	if (ctx.cr6.lt) goto loc_830702D4;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_830702D4:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x83070308
	if (ctx.cr6.eq) goto loc_83070308;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// beq cr6,0x83070308
	if (ctx.cr6.eq) goto loc_83070308;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x83070308
	if (ctx.cr6.eq) goto loc_83070308;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x83070308
	if (ctx.cr6.eq) goto loc_83070308;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x83070308
	if (ctx.cr6.eq) goto loc_83070308;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_83070308:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83070320
	if (ctx.cr6.eq) goto loc_83070320;
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_83070320:
	// lwz r10,128(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r11,124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8307034c
	if (ctx.cr6.eq) goto loc_8307034C;
loc_83070334:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8307034c
	if (ctx.cr6.eq) goto loc_8307034C;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83070334
	if (!ctx.cr6.eq) goto loc_83070334;
loc_8307034C:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addic r7,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subfe r6,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r8
	ctx.r11.u64 = ctx.r3.u64 & ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8307037c
	if (ctx.cr6.eq) goto loc_8307037C;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8307037C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r3,23
	ctx.r3.s64 = 23;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83070390
	if (ctx.cr6.eq) goto loc_83070390;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83070390:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83070398"))) PPC_WEAK_FUNC(sub_83070398);
PPC_FUNC_IMPL(__imp__sub_83070398) {
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
	// bl 0x83033090
	ctx.lr = 0x830703B0;
	sub_83033090(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-7528
	ctx.r8.s64 = ctx.r10.s64 + -7528;
	// addi r7,r9,-14112
	ctx.r7.s64 = ctx.r9.s64 + -14112;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_830703F0"))) PPC_WEAK_FUNC(sub_830703F0);
PPC_FUNC_IMPL(__imp__sub_830703F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r9,r11,-9456
	ctx.r9.s64 = ctx.r11.s64 + -9456;
	// addi r8,r10,-14112
	ctx.r8.s64 = ctx.r10.s64 + -14112;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x82fe2260
	sub_82FE2260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307040C"))) PPC_WEAK_FUNC(sub_8307040C);
PPC_FUNC_IMPL(__imp__sub_8307040C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070410"))) PPC_WEAK_FUNC(sub_83070410);
PPC_FUNC_IMPL(__imp__sub_83070410) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r9,r11,-9456
	ctx.r9.s64 = ctx.r11.s64 + -9456;
	// addi r8,r10,-14112
	ctx.r8.s64 = ctx.r10.s64 + -14112;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82fe2260
	ctx.lr = 0x83070448;
	sub_82FE2260(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83070460
	if (ctx.cr6.eq) goto loc_83070460;
	// bl 0x82691540
	ctx.lr = 0x8307045C;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83070460:
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

__attribute__((alias("__imp__sub_83070478"))) PPC_WEAK_FUNC(sub_83070478);
PPC_FUNC_IMPL(__imp__sub_83070478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x83070480;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r4,48
	ctx.r28.s64 = ctx.r4.s64 + 48;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82fca1b0
	ctx.lr = 0x8307049C;
	sub_82FCA1B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83070644
	if (ctx.cr6.eq) goto loc_83070644;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_830704AC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_830704B0:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307060c
	if (ctx.cr6.eq) goto loc_8307060C;
loc_830704C0:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830704c0
	if (!ctx.cr6.eq) goto loc_830704C0;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8307060c
	if (!ctx.cr6.lt) goto loc_8307060C;
	// lhz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// add r11,r29,r6
	ctx.r11.u64 = ctx.r29.u64 + ctx.r6.u64;
	// add r7,r29,r6
	ctx.r7.u64 = ctx.r29.u64 + ctx.r6.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lhz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 268);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r5,r9,r27
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// lfsx f13,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r7,r28
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r4,r4,r6
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r11,r9,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// bge cr6,0x83070604
	if (!ctx.cr6.lt) goto loc_83070604;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x830705c8
	if (ctx.cr6.lt) goto loc_830705C8;
	// addi r8,r9,-12
	ctx.r8.s64 = ctx.r9.s64 + -12;
loc_83070568:
	// fadds f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f0,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f13,f12
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmadds f3,f7,f12,f8
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f2,f13,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// lfs f1,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f1,f4,f6
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f6.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmadds f11,f12,f2,f5
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f5.f64));
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// fadds f0,f13,f2
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x83070568
	if (ctx.cr6.lt) goto loc_83070568;
loc_830705C8:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83070604
	if (!ctx.cr6.lt) goto loc_83070604;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830705EC:
	// lfsu f12,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f0,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfsu f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x830705ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830705EC;
loc_83070604:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x830704b0
	goto loc_830704B0;
loc_8307060C:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r26,28
	ctx.r10.s64 = ctx.r26.s64 + 28;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8307061C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8307061c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8307061C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r26,r26,64
	ctx.r26.s64 = ctx.r26.s64 + 64;
	// bl 0x82fca1b0
	ctx.lr = 0x8307063C;
	sub_82FCA1B0(ctx, base);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x830704ac
	if (ctx.cr6.lt) goto loc_830704AC;
loc_83070644:
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// sth r11,270(r31)
	PPC_STORE_U16(ctx.r31.u32 + 270, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83070654"))) PPC_WEAK_FUNC(sub_83070654);
PPC_FUNC_IMPL(__imp__sub_83070654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070658"))) PPC_WEAK_FUNC(sub_83070658);
PPC_FUNC_IMPL(__imp__sub_83070658) {
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
	// bl 0x83070ac0
	ctx.lr = 0x83070670;
	sub_83070AC0(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-7176
	ctx.r9.s64 = ctx.r11.s64 + -7176;
	// stb r10,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8307069C"))) PPC_WEAK_FUNC(sub_8307069C);
PPC_FUNC_IMPL(__imp__sub_8307069C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830706A0"))) PPC_WEAK_FUNC(sub_830706A0);
PPC_FUNC_IMPL(__imp__sub_830706A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-7176
	ctx.r10.s64 = ctx.r11.s64 + -7176;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83070b20
	sub_83070B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830706B0"))) PPC_WEAK_FUNC(sub_830706B0);
PPC_FUNC_IMPL(__imp__sub_830706B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x830706B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8303ba38
	ctx.lr = 0x830706CC;
	sub_8303BA38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83070774
	if (ctx.cr6.eq) goto loc_83070774;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
	// rlwinm r7,r11,29,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stb r9,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r9.u8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x8305d3f0
	ctx.lr = 0x8307070C;
	sub_8305D3F0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x83070728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x830640b8
	ctx.lr = 0x8307072C;
	sub_830640B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83070760
	if (ctx.cr6.eq) goto loc_83070760;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307074C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83070760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83070760:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83070774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83070774:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307077C"))) PPC_WEAK_FUNC(sub_8307077C);
PPC_FUNC_IMPL(__imp__sub_8307077C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070780"))) PPC_WEAK_FUNC(sub_83070780);
PPC_FUNC_IMPL(__imp__sub_83070780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x83070788;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r3,r7,3,24,28
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 3) & 0xF8) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF07);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8305d628
	ctx.lr = 0x830707E0;
	sub_8305D628(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83070828
	if (!ctx.cr6.eq) goto loc_83070828;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83070804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83070828
	if (!ctx.cr6.eq) goto loc_83070828;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83070828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83070828:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83070830"))) PPC_WEAK_FUNC(sub_83070830);
PPC_FUNC_IMPL(__imp__sub_83070830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x83070838;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r28,r11,4868
	ctx.r28.s64 = ctx.r11.s64 + 4868;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x8307085C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r29,r28,28
	ctx.r29.s64 = ctx.r28.s64 + 28;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r31,28(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8307089c
	if (!ctx.cr6.eq) goto loc_8307089C;
loc_83070874:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,193
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 193, ctx.xer);
	// bge cr6,0x83070894
	if (!ctx.cr6.lt) goto loc_83070894;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83070874
	if (ctx.cr6.eq) goto loc_83070874;
	// b 0x8307089c
	goto loc_8307089C;
loc_83070894:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830708e0
	if (ctx.cr6.eq) goto loc_830708E0;
loc_8307089C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83046938
	ctx.lr = 0x830708AC;
	sub_83046938(ctx, base);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8307089c
	if (!ctx.cr6.eq) goto loc_8307089C;
loc_830708B8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,193
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 193, ctx.xer);
	// bge cr6,0x830708d8
	if (!ctx.cr6.lt) goto loc_830708D8;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830708b8
	if (ctx.cr6.eq) goto loc_830708B8;
	// b 0x8307089c
	goto loc_8307089C;
loc_830708D8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8307089c
	if (!ctx.cr6.eq) goto loc_8307089C;
loc_830708E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x830708E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x8303ba38
	ctx.lr = 0x830708EC;
	sub_8303BA38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307099c
	if (ctx.cr6.eq) goto loc_8307099C;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r10,40(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 40);
	// rlwinm r9,r11,29,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// stb r24,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r24.u8);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stb r10,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r10.u8);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// bl 0x8305d3f0
	ctx.lr = 0x83070924;
	sub_8305D3F0(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stb r5,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r5.u8);
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83070950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x830640b8
	ctx.lr = 0x83070954;
	sub_830640B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83070988
	if (ctx.cr6.eq) goto loc_83070988;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83070974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83070988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83070988:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307099C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8307099C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830709A4"))) PPC_WEAK_FUNC(sub_830709A4);
PPC_FUNC_IMPL(__imp__sub_830709A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830709A8"))) PPC_WEAK_FUNC(sub_830709A8);
PPC_FUNC_IMPL(__imp__sub_830709A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x830709B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15168);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x830639c8
	ctx.lr = 0x830709D4;
	sub_830639C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83070a54
	if (ctx.cr6.eq) goto loc_83070A54;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r8,r10,29,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1F;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stb r9,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r9.u8);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8305d3f0
	ctx.lr = 0x83070A14;
	sub_8305D3F0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83070A30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x83070A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_83070A54:
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83070A60"))) PPC_WEAK_FUNC(sub_83070A60);
PPC_FUNC_IMPL(__imp__sub_83070A60) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-7176
	ctx.r10.s64 = ctx.r11.s64 + -7176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83070b20
	ctx.lr = 0x83070A8C;
	sub_83070B20(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83070aa4
	if (ctx.cr6.eq) goto loc_83070AA4;
	// bl 0x82691540
	ctx.lr = 0x83070AA0;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83070AA4:
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

__attribute__((alias("__imp__sub_83070ABC"))) PPC_WEAK_FUNC(sub_83070ABC);
PPC_FUNC_IMPL(__imp__sub_83070ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070AC0"))) PPC_WEAK_FUNC(sub_83070AC0);
PPC_FUNC_IMPL(__imp__sub_83070AC0) {
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
	// bl 0x8305d018
	ctx.lr = 0x83070AD8;
	sub_8305D018(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-7124
	ctx.r9.s64 = ctx.r10.s64 + -7124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83070B0C"))) PPC_WEAK_FUNC(sub_83070B0C);
PPC_FUNC_IMPL(__imp__sub_83070B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070B10"))) PPC_WEAK_FUNC(sub_83070B10);
PPC_FUNC_IMPL(__imp__sub_83070B10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070B1C"))) PPC_WEAK_FUNC(sub_83070B1C);
PPC_FUNC_IMPL(__imp__sub_83070B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070B20"))) PPC_WEAK_FUNC(sub_83070B20);
PPC_FUNC_IMPL(__imp__sub_83070B20) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-7124
	ctx.r10.s64 = ctx.r11.s64 + -7124;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83070b6c
	if (ctx.cr6.eq) goto loc_83070B6C;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6cc8
	ctx.lr = 0x83070B5C;
	sub_82FD6CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_83070B6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305d278
	ctx.lr = 0x83070B74;
	sub_8305D278(ctx, base);
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

__attribute__((alias("__imp__sub_83070B88"))) PPC_WEAK_FUNC(sub_83070B88);
PPC_FUNC_IMPL(__imp__sub_83070B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83070bc8
	if (ctx.cr6.eq) goto loc_83070BC8;
loc_83070BB0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83070bc8
	if (ctx.cr6.eq) goto loc_83070BC8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83070bb0
	if (!ctx.cr6.eq) goto loc_83070BB0;
loc_83070BC8:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x83070bf8
	if (ctx.cr6.eq) goto loc_83070BF8;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_83070BF8:
	// bl 0x83035ce0
	ctx.lr = 0x83070BFC;
	sub_83035CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83070c08
	if (ctx.cr6.eq) goto loc_83070C08;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_83070C08:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_83070C28"))) PPC_WEAK_FUNC(sub_83070C28);
PPC_FUNC_IMPL(__imp__sub_83070C28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// b 0x83062990
	sub_83062990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83070C30"))) PPC_WEAK_FUNC(sub_83070C30);
PPC_FUNC_IMPL(__imp__sub_83070C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x83070C38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83070c80
	if (ctx.cr6.eq) goto loc_83070C80;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r4,r26,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x83070C6C;
	sub_82FD6B98(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x83070c80
	if (ctx.cr6.eq) goto loc_83070C80;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
loc_83070C80:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83070d00
	if (ctx.cr6.eq) goto loc_83070D00;
loc_83070C8C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r30,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83070cd0
	if (ctx.cr6.lt) goto loc_83070CD0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83039a98
	ctx.lr = 0x83070CC4;
	sub_83039A98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83070d0c
	if (ctx.cr6.eq) goto loc_83070D0C;
loc_83070CD0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83070d0c
	if (!ctx.cr6.lt) goto loc_83070D0C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x83070d0c
	if (ctx.cr6.eq) goto loc_83070D0C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x83070c8c
	if (ctx.cr6.lt) goto loc_83070C8C;
loc_83070D00:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_83070D0C:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83070D18"))) PPC_WEAK_FUNC(sub_83070D18);
PPC_FUNC_IMPL(__imp__sub_83070D18) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-7124
	ctx.r10.s64 = ctx.r11.s64 + -7124;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83070d6c
	if (ctx.cr6.eq) goto loc_83070D6C;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6cc8
	ctx.lr = 0x83070D5C;
	sub_82FD6CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_83070D6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8305d278
	ctx.lr = 0x83070D74;
	sub_8305D278(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83070d8c
	if (ctx.cr6.eq) goto loc_83070D8C;
	// bl 0x82691540
	ctx.lr = 0x83070D88;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83070D8C:
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

__attribute__((alias("__imp__sub_83070DA4"))) PPC_WEAK_FUNC(sub_83070DA4);
PPC_FUNC_IMPL(__imp__sub_83070DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070DA8"))) PPC_WEAK_FUNC(sub_83070DA8);
PPC_FUNC_IMPL(__imp__sub_83070DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x83070DB0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,28(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lhz r25,14(r3)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// subf r23,r10,r5
	ctx.r23.s64 = ctx.r5.s64 - ctx.r10.s64;
	// addi r24,r6,28
	ctx.r24.s64 = ctx.r6.s64 + 28;
	// addi r26,r3,14
	ctx.r26.s64 = ctx.r3.s64 + 14;
	// cmplw cr6,r23,r25
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r25.u32, ctx.xer);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// blt cr6,0x83070de0
	if (ctx.cr6.lt) goto loc_83070DE0;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_83070DE0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83070e04
	if (ctx.cr6.eq) goto loc_83070E04;
loc_83070DF0:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83070df0
	if (!ctx.cr6.eq) goto loc_83070DF0;
loc_83070E04:
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mullw r7,r10,r31
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mullw r6,r9,r31
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// li r9,8
	ctx.r9.s64 = 8;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
loc_83070E38:
	// dcbt r8,r11
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// bdnz 0x83070e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83070E38;
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r7,r9,18224
	ctx.r7.s64 = ctx.r9.s64 + 18224;
	// lwz r9,18240(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18240);
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x83070e74
	if (!ctx.cr6.eq) goto loc_83070E74;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r9,18240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18240, ctx.r9.u32);
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x83070e78
	goto loc_83070E78;
loc_83070E74:
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
loc_83070E78:
	// mullw r7,r31,r28
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r28.s32);
	// rlwinm r6,r7,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r8,r7,1,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFE0;
	// subf r4,r6,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r6.s64;
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83070fd4
	if (!ctx.cr6.eq) goto loc_83070FD4;
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83070f2c
	if (!ctx.cr6.eq) goto loc_83070F2C;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83071148
	if (!ctx.cr6.lt) goto loc_83071148;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// addi r8,r9,-7072
	ctx.r8.s64 = ctx.r9.s64 + -7072;
	// lvx128 v63,r0,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
loc_83070EB8:
	// li r9,1024
	ctx.r9.s64 = 1024;
	// dcbt r9,r11
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vmrghh v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// vmrglh v11,v13,v0
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_unpacklo_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vsraw128 v62,v12,v63
	ctx.v62.s32[0] = ctx.v12.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v62.s32[1] = ctx.v12.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v62.s32[2] = ctx.v12.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v62.s32[3] = ctx.v12.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vsraw128 v61,v11,v63
	ctx.v61.s32[0] = ctx.v11.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v61.s32[1] = ctx.v11.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v61.s32[2] = ctx.v11.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v61.s32[3] = ctx.v11.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vmrghh v10,v13,v0
	_mm_store_si128((__m128i*)ctx.v10.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// vmrglh v9,v13,v0
	_mm_store_si128((__m128i*)ctx.v9.u16, _mm_unpacklo_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// vcsxwfp128 v60,v62,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v59,v61,15
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsraw128 v58,v10,v63
	ctx.v58.s32[0] = ctx.v10.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v58.s32[1] = ctx.v10.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v58.s32[2] = ctx.v10.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v58.s32[3] = ctx.v10.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vsraw128 v57,v9,v63
	ctx.v57.s32[0] = ctx.v9.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v57.s32[1] = ctx.v9.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v57.s32[2] = ctx.v9.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v57.s32[3] = ctx.v9.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vcsxwfp128 v56,v58,15
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v55,v57,15
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// stvx128 v60,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v59,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v56,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v55,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x83070eb8
	if (ctx.cr6.lt) goto loc_83070EB8;
	// b 0x83071148
	goto loc_83071148;
loc_83070F2C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83070fd4
	if (!ctx.cr6.eq) goto loc_83070FD4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83071148
	if (!ctx.cr6.lt) goto loc_83071148;
	// lis r6,-32232
	ctx.r6.s64 = -2112356352;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// addi r5,r6,-7072
	ctx.r5.s64 = ctx.r6.s64 + -7072;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v63,r0,r5
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
loc_83070F50:
	// li r6,1024
	ctx.r6.s64 = 1024;
	// dcbt r6,r11
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r6,r8,-16
	ctx.r6.s64 = ctx.r8.s64 + -16;
	// vmrghh v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// addi r5,r8,16
	ctx.r5.s64 = ctx.r8.s64 + 16;
	// vmrglh v11,v13,v0
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_unpacklo_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vsraw128 v54,v12,v63
	ctx.v54.s32[0] = ctx.v12.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v54.s32[1] = ctx.v12.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v54.s32[2] = ctx.v12.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v54.s32[3] = ctx.v12.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vmrghh v10,v13,v0
	_mm_store_si128((__m128i*)ctx.v10.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// vsraw128 v53,v11,v63
	ctx.v53.s32[0] = ctx.v11.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v53.s32[1] = ctx.v11.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v53.s32[2] = ctx.v11.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v53.s32[3] = ctx.v11.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vmrglh v9,v13,v0
	_mm_store_si128((__m128i*)ctx.v9.u16, _mm_unpacklo_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// vcsxwfp128 v52,v54,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsraw128 v51,v10,v63
	ctx.v51.s32[0] = ctx.v10.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v51.s32[1] = ctx.v10.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v51.s32[2] = ctx.v10.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v51.s32[3] = ctx.v10.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vcsxwfp128 v50,v53,15
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsraw128 v49,v9,v63
	ctx.v49.s32[0] = ctx.v9.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v49.s32[1] = ctx.v9.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v49.s32[2] = ctx.v9.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v49.s32[3] = ctx.v9.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vcsxwfp128 v48,v51,15
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v47,v49,15
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// stvlx128 v52,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvrx128 v52,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvlx128 v50,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvrx128 v50,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v50.u8[i]);
	// stvlx128 v48,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvrx128 v48,r8,r9
	ea = ctx.r8.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v48.u8[i]);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvlx128 v47,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvrx128 v47,r5,r9
	ea = ctx.r5.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v47.u8[i]);
	// blt cr6,0x83070f50
	if (ctx.cr6.lt) goto loc_83070F50;
	// b 0x83071148
	goto loc_83071148;
loc_83070FD4:
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8307108c
	if (!ctx.cr6.eq) goto loc_8307108C;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83071148
	if (!ctx.cr6.lt) goto loc_83071148;
	// subf r8,r11,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r11.s64;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r8,r8,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// addi r7,r8,-7072
	ctx.r7.s64 = ctx.r8.s64 + -7072;
	// lvx128 v63,r0,r7
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
loc_8307100C:
	// li r8,1024
	ctx.r8.s64 = 1024;
	// dcbt r8,r11
	// lvrx128 v46,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lvlx128 v45,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// vor128 v13,v45,v46
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v46.u8)));
	// lvlx128 v44,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghh v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// lvrx128 v43,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vmrglh v11,v13,v0
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_unpacklo_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// vor128 v13,v44,v43
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v43.u8)));
	// vsraw128 v42,v12,v63
	ctx.v42.s32[0] = ctx.v12.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v42.s32[1] = ctx.v12.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v42.s32[2] = ctx.v12.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v42.s32[3] = ctx.v12.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vsraw128 v41,v11,v63
	ctx.v41.s32[0] = ctx.v11.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v41.s32[1] = ctx.v11.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v41.s32[2] = ctx.v11.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v41.s32[3] = ctx.v11.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vmrghh v10,v13,v0
	_mm_store_si128((__m128i*)ctx.v10.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// vmrglh v9,v13,v0
	_mm_store_si128((__m128i*)ctx.v9.u16, _mm_unpacklo_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// vcsxwfp128 v40,v42,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v42.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v39,v41,15
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v41.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsraw128 v38,v10,v63
	ctx.v38.s32[0] = ctx.v10.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v38.s32[1] = ctx.v10.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v38.s32[2] = ctx.v10.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v38.s32[3] = ctx.v10.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vsraw128 v37,v9,v63
	ctx.v37.s32[0] = ctx.v9.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v37.s32[1] = ctx.v9.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v37.s32[2] = ctx.v9.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v37.s32[3] = ctx.v9.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vcsxwfp128 v36,v38,15
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v38.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v35,v37,15
	_mm_store_ps(ctx.v35.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v37.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// stvx128 v40,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v39,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v36,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v35,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x8307100c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8307100C;
	// b 0x83071148
	goto loc_83071148;
loc_8307108C:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83071148
	if (!ctx.cr6.lt) goto loc_83071148;
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// rlwinm r7,r7,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// addi r6,r7,-7072
	ctx.r6.s64 = ctx.r7.s64 + -7072;
	// lvx128 v63,r0,r6
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
loc_830710BC:
	// li r7,1024
	ctx.r7.s64 = 1024;
	// dcbt r7,r11
	// lvrx128 v34,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v34.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lvlx128 v33,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// vor128 v13,v33,v34
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v34.u8)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lvlx128 v32,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r9,r7
	temp.u32 = ctx.r9.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vmrghh v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// vmrglh v11,v13,v0
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_unpacklo_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// vor128 v13,v32,v62
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// addi r7,r8,-16
	ctx.r7.s64 = ctx.r8.s64 + -16;
	// vsraw128 v61,v12,v63
	ctx.v61.s32[0] = ctx.v12.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v61.s32[1] = ctx.v12.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v61.s32[2] = ctx.v12.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v61.s32[3] = ctx.v12.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vmrghh v10,v13,v0
	_mm_store_si128((__m128i*)ctx.v10.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// vsraw128 v60,v11,v63
	ctx.v60.s32[0] = ctx.v11.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v60.s32[1] = ctx.v11.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v60.s32[2] = ctx.v11.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v60.s32[3] = ctx.v11.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vmrglh v9,v13,v0
	_mm_store_si128((__m128i*)ctx.v9.u16, _mm_unpacklo_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// vcsxwfp128 v59,v61,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsraw128 v58,v10,v63
	ctx.v58.s32[0] = ctx.v10.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v58.s32[1] = ctx.v10.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v58.s32[2] = ctx.v10.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v58.s32[3] = ctx.v10.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vcsxwfp128 v57,v60,15
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsraw128 v56,v9,v63
	ctx.v56.s32[0] = ctx.v9.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v56.s32[1] = ctx.v9.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v56.s32[2] = ctx.v9.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v56.s32[3] = ctx.v9.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vcsxwfp128 v55,v58,15
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v54,v56,15
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// stvlx128 v59,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvlx128 v57,r0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvrx128 v57,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v57.u8[i]);
	// stvlx128 v55,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvrx128 v55,r8,r9
	ea = ctx.r8.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v55.u8[i]);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvlx128 v54,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvrx128 v54,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v54.u8[i]);
	// bdnz 0x830710bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830710BC;
loc_83071148:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83071188
	if (ctx.cr6.eq) goto loc_83071188;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lfs f0,18084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18084);
	ctx.f0.f64 = double(temp.f32);
loc_83071160:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsu f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83071160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83071160;
loc_83071188:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x830711a4
	if (ctx.cr6.eq) goto loc_830711A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82fa7c48
	ctx.lr = 0x830711A4;
	sub_82FA7C48(ctx, base);
loc_830711A4:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// subf r9,r28,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r28.s64;
	// sth r9,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r9.u16);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r7,r28,r11
	ctx.r7.u64 = ctx.r28.u64 + ctx.r11.u64;
	// sth r7,14(r27)
	PPC_STORE_U16(ctx.r27.u32 + 14, ctx.r7.u16);
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// bne cr6,0x830711d4
	if (!ctx.cr6.eq) goto loc_830711D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830711dc
	goto loc_830711DC;
loc_830711D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_830711DC:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x830711f4
	if (!ctx.cr6.eq) goto loc_830711F4;
	// li r3,45
	ctx.r3.s64 = 45;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_830711F4:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307120C"))) PPC_WEAK_FUNC(sub_8307120C);
PPC_FUNC_IMPL(__imp__sub_8307120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071210"))) PPC_WEAK_FUNC(sub_83071210);
PPC_FUNC_IMPL(__imp__sub_83071210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x83071218;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,28(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r26,14(r3)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// subf r24,r9,r5
	ctx.r24.s64 = ctx.r5.s64 - ctx.r9.s64;
	// addi r25,r6,28
	ctx.r25.s64 = ctx.r6.s64 + 28;
	// addi r27,r3,14
	ctx.r27.s64 = ctx.r3.s64 + 14;
	// cmplw cr6,r24,r26
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r26.u32, ctx.xer);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// blt cr6,0x83071248
	if (ctx.cr6.lt) goto loc_83071248;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_83071248:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307126c
	if (ctx.cr6.eq) goto loc_8307126C;
loc_83071258:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83071258
	if (!ctx.cr6.eq) goto loc_83071258;
loc_8307126C:
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r6,r9,r5
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mullw r9,r5,r7
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8307129C:
	// dcbt r9,r11
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x8307129c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8307129C;
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r7,r9,18256
	ctx.r7.s64 = ctx.r9.s64 + 18256;
	// lwz r9,18272(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18272);
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x830712d8
	if (!ctx.cr6.eq) goto loc_830712D8;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r9,18272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18272, ctx.r9.u32);
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x830712dc
	goto loc_830712DC;
loc_830712D8:
	// lvx128 v63,r0,r7
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
loc_830712DC:
	// mullw r7,r5,r29
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// rlwinm r9,r7,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// subf r4,r9,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x830714a4
	if (!ctx.cr6.eq) goto loc_830714A4;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x830713c4
	if (!ctx.cr6.eq) goto loc_830713C4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83071658
	if (!ctx.cr6.lt) goto loc_83071658;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// lis r6,-32232
	ctx.r6.s64 = -2112356352;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lis r3,-32232
	ctx.r3.s64 = -2112356352;
	// addi r8,r8,-7008
	ctx.r8.s64 = ctx.r8.s64 + -7008;
	// addi r7,r7,-7024
	ctx.r7.s64 = ctx.r7.s64 + -7024;
	// addi r6,r6,-7040
	ctx.r6.s64 = ctx.r6.s64 + -7040;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r3,r3,-7056
	ctx.r3.s64 = ctx.r3.s64 + -7056;
	// addi r9,r9,15600
	ctx.r9.s64 = ctx.r9.s64 + 15600;
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r7
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r6
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r0,r9
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_8307135C:
	// li r9,1024
	ctx.r9.s64 = 1024;
	// dcbt r9,r11
	// lvx128 v62,r0,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vperm128 v60,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v59,v62,v63,v7
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v58,v62,v63,v6
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v57,v62,v63,v5
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vcuxwfp128 v56,v60,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v55,v59,7
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v54,v58,7
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v53,v57,7
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v52,v56,v61
	_mm_store_ps(ctx.v52.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v51,v55,v61
	_mm_store_ps(ctx.v51.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v50,v54,v61
	_mm_store_ps(ctx.v50.f32, _mm_sub_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v49,v53,v61
	_mm_store_ps(ctx.v49.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v61.f32)));
	// stvx128 v52,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v51,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v50,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v49,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x8307135c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8307135C;
	// b 0x83071658
	goto loc_83071658;
loc_830713C4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x830714a4
	if (!ctx.cr6.eq) goto loc_830714A4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83071658
	if (!ctx.cr6.lt) goto loc_83071658;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lis r6,-32232
	ctx.r6.s64 = -2112356352;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// lis r3,-32232
	ctx.r3.s64 = -2112356352;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lis r23,-32232
	ctx.r23.s64 = -2112356352;
	// addi r7,r7,-7008
	ctx.r7.s64 = ctx.r7.s64 + -7008;
	// addi r6,r6,-7024
	ctx.r6.s64 = ctx.r6.s64 + -7024;
	// addi r3,r3,-7040
	ctx.r3.s64 = ctx.r3.s64 + -7040;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r23,r23,-7056
	ctx.r23.s64 = ctx.r23.s64 + -7056;
	// addi r9,r9,15600
	ctx.r9.s64 = ctx.r9.s64 + 15600;
	// lvx128 v5,r0,r7
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r6
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// lvx128 v7,r0,r3
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r0,r9
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
loc_8307142C:
	// li r7,1024
	ctx.r7.s64 = 1024;
	// dcbt r7,r11
	// lvx128 v62,r0,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r8,-16
	ctx.r7.s64 = ctx.r8.s64 + -16;
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// vperm128 v48,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vperm128 v47,v62,v63,v7
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v46,v62,v63,v6
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v45,v62,v63,v5
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vcuxwfp128 v44,v48,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v43,v47,7
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v47.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v42,v46,7
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v46.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v41,v45,7
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v45.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v40,v44,v61
	_mm_store_ps(ctx.v40.f32, _mm_sub_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v39,v43,v61
	_mm_store_ps(ctx.v39.f32, _mm_sub_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v38,v42,v61
	_mm_store_ps(ctx.v38.f32, _mm_sub_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v37,v41,v61
	_mm_store_ps(ctx.v37.f32, _mm_sub_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v61.f32)));
	// stvlx128 v40,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// stvrx128 v40,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v40.u8[i]);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvlx128 v39,r0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvrx128 v39,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v39.u8[i]);
	// stvlx128 v38,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvrx128 v38,r8,r9
	ea = ctx.r8.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v38.u8[i]);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvlx128 v37,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvrx128 v37,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v37.u8[i]);
	// bdnz 0x8307142c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8307142C;
	// b 0x83071658
	goto loc_83071658;
loc_830714A4:
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8307157c
	if (!ctx.cr6.eq) goto loc_8307157C;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83071658
	if (!ctx.cr6.lt) goto loc_83071658;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lis r6,-32232
	ctx.r6.s64 = -2112356352;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// lis r3,-32232
	ctx.r3.s64 = -2112356352;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lis r23,-32232
	ctx.r23.s64 = -2112356352;
	// addi r7,r7,-7008
	ctx.r7.s64 = ctx.r7.s64 + -7008;
	// addi r6,r6,-7024
	ctx.r6.s64 = ctx.r6.s64 + -7024;
	// addi r3,r3,-7040
	ctx.r3.s64 = ctx.r3.s64 + -7040;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r23,r23,-7056
	ctx.r23.s64 = ctx.r23.s64 + -7056;
	// addi r8,r8,15600
	ctx.r8.s64 = ctx.r8.s64 + 15600;
	// lvx128 v5,r0,r7
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r6
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v7,r0,r3
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r0,r8
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
loc_8307150C:
	// li r8,1024
	ctx.r8.s64 = 1024;
	// dcbt r8,r11
	// lvrx128 v36,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v35,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vor128 v62,v35,v36
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v36.u8)));
	// vperm128 v34,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v33,v62,v63,v7
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v32,v62,v63,v6
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v62,v62,v63,v5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vcuxwfp128 v60,v34,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v34.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v59,v33,7
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v33.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v58,v32,7
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v32.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v57,v62,7
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v56,v60,v61
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v55,v59,v61
	_mm_store_ps(ctx.v55.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v54,v58,v61
	_mm_store_ps(ctx.v54.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v53,v57,v61
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v61.f32)));
	// stvx128 v56,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v55,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v54,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v53,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x8307150c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8307150C;
	// b 0x83071658
	goto loc_83071658;
loc_8307157C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83071658
	if (!ctx.cr6.lt) goto loc_83071658;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lis r6,-32232
	ctx.r6.s64 = -2112356352;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lis r3,-32232
	ctx.r3.s64 = -2112356352;
	// rlwinm r7,r7,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// lis r23,-32232
	ctx.r23.s64 = -2112356352;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lis r22,-32232
	ctx.r22.s64 = -2112356352;
	// addi r6,r6,-7008
	ctx.r6.s64 = ctx.r6.s64 + -7008;
	// addi r3,r3,-7024
	ctx.r3.s64 = ctx.r3.s64 + -7024;
	// addi r23,r23,-7040
	ctx.r23.s64 = ctx.r23.s64 + -7040;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// addi r22,r22,-7056
	ctx.r22.s64 = ctx.r22.s64 + -7056;
	// addi r7,r7,15600
	ctx.r7.s64 = ctx.r7.s64 + 15600;
	// lvx128 v5,r0,r6
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r3
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v7,r0,r23
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// lvx128 v0,r0,r22
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r0,r7
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
loc_830715DC:
	// li r7,1024
	ctx.r7.s64 = 1024;
	// dcbt r7,r11
	// lvrx128 v52,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r7,r8,-16
	ctx.r7.s64 = ctx.r8.s64 + -16;
	// lvlx128 v51,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// vor128 v62,v51,v52
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v52.u8)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vperm128 v50,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v49,v62,v63,v7
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v48,v62,v63,v6
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v47,v62,v63,v5
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vcuxwfp128 v46,v50,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v50.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v45,v49,7
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v49.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v44,v48,7
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v43,v47,7
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v47.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v42,v46,v61
	_mm_store_ps(ctx.v42.f32, _mm_sub_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v41,v45,v61
	_mm_store_ps(ctx.v41.f32, _mm_sub_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v40,v44,v61
	_mm_store_ps(ctx.v40.f32, _mm_sub_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v39,v43,v61
	_mm_store_ps(ctx.v39.f32, _mm_sub_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v61.f32)));
	// stvlx128 v42,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvrx128 v42,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v42.u8[i]);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvlx128 v41,r0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvrx128 v41,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v41.u8[i]);
	// stvlx128 v40,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// stvrx128 v40,r8,r9
	ea = ctx.r8.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v40.u8[i]);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvlx128 v39,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvrx128 v39,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v39.u8[i]);
	// bdnz 0x830715dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830715DC;
loc_83071658:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307169c
	if (ctx.cr6.eq) goto loc_8307169C;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lfs f13,24436(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,14224(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14224);
	ctx.f0.f64 = double(temp.f32);
loc_83071678:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmsubs f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfsu f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83071678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83071678;
loc_8307169C:
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x830716b0
	if (ctx.cr6.eq) goto loc_830716B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7c48
	ctx.lr = 0x830716B0;
	sub_82FA7C48(ctx, base);
loc_830716B0:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// subf r9,r29,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r29.s64;
	// sth r9,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r9.u16);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// sth r7,14(r28)
	PPC_STORE_U16(ctx.r28.u32 + 14, ctx.r7.u16);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bne cr6,0x830716e0
	if (!ctx.cr6.eq) goto loc_830716E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830716e8
	goto loc_830716E8;
loc_830716E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_830716E8:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x83071700
	if (!ctx.cr6.eq) goto loc_83071700;
	// li r3,45
	ctx.r3.s64 = 45;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_83071700:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83071718"))) PPC_WEAK_FUNC(sub_83071718);
PPC_FUNC_IMPL(__imp__sub_83071718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x83071720;
	__savegprlr_23(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83071744
	if (ctx.cr6.eq) goto loc_83071744;
loc_83071730:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83071730
	if (!ctx.cr6.eq) goto loc_83071730;
loc_83071744:
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r8,24(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// addi r23,r6,24
	ctx.r23.s64 = ctx.r6.s64 + 24;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r30,r11,r9
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r29,r10,r7
	ctx.r29.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r25,r6,28
	ctx.r25.s64 = ctx.r6.s64 + 28;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 + ctx.r31.u64;
loc_83071784:
	// dcbt r30,r29
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// bdnz 0x83071784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83071784;
	// subf r24,r11,r5
	ctx.r24.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lwz r8,36(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// addi r26,r6,32
	ctx.r26.s64 = ctx.r6.s64 + 32;
	// lhz r28,14(r3)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// addi r27,r3,14
	ctx.r27.s64 = ctx.r3.s64 + 14;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// addis r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 65536;
	// stw r8,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r8.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// divwu r11,r5,r8
	ctx.r11.u32 = ctx.r5.u32 / ctx.r8.u32;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// blt cr6,0x830717d0
	if (ctx.cr6.lt) goto loc_830717D0;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_830717D0:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lvlx128 v63,r0,r26
	temp.u32 = ctx.r26.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,-112
	ctx.r5.s64 = ctx.r1.s64 + -112;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r3,r11,-6992
	ctx.r3.s64 = ctx.r11.s64 + -6992;
	// vspltw128 v0,v63,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// addi r11,r1,-96
	ctx.r11.s64 = ctx.r1.s64 + -96;
	// li r7,16
	ctx.r7.s64 = 16;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lvlx128 v62,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vand128 v61,v0,v63
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vspltw128 v11,v62,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcuxwfp128 v13,v61,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v61.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// beq cr6,0x8307186c
	if (ctx.cr6.eq) goto loc_8307186C;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v60,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// vupkhsb128 v59,v60,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v60.s16), _mm_load_si128((__m128i*)ctx.v60.s16))));
	// vcsxwfp128 v12,v59,15
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// lvrx128 v58,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v57,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v56,v57,v58
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v58.u8)));
	// vupkhsb128 v55,v56,v96
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v56.s16), _mm_load_si128((__m128i*)ctx.v56.s16))));
	// vcsxwfp128 v54,v55,15
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsubfp128 v10,v54,v12
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v12.f32)));
loc_83071840:
	// vmaddfp v13,v10,v13,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vadduws v0,v0,v11
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vand128 v53,v0,v63
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vor128 v52,v13,v13
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vcuxwfp128 v13,v53,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// stvlx128 v52,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvrx128 v52,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// bdnz 0x83071840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83071840;
	// addi r11,r1,-96
	ctx.r11.s64 = ctx.r1.s64 + -96;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8307186C:
	// lwz r3,-96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// rlwinm r5,r28,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF0000;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// subf r5,r3,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r3.s64;
	// subf r11,r30,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r30.s64;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// divwu r8,r5,r8
	ctx.r8.u32 = ctx.r5.u32 / ctx.r8.u32;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8307189c
	if (ctx.cr6.lt) goto loc_8307189C;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
loc_8307189C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83071928
	if (ctx.cr6.eq) goto loc_83071928;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_830718AC:
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// mullw r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// dcbt r3,r11
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lvlx128 v51,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v50,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vadduws v0,v0,v11
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// vor128 v49,v51,v50
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// addi r3,r1,-96
	ctx.r3.s64 = ctx.r1.s64 + -96;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// vand128 v46,v0,v63
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vupkhsb128 v48,v49,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v49.s16), _mm_load_si128((__m128i*)ctx.v49.s16))));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvrx128 v47,r7,r8
	temp.u32 = ctx.r7.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v45,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v12,v48,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vor128 v44,v45,v47
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v47.u8)));
	// vupkhsb128 v43,v44,v96
	_mm_store_si128((__m128i*)ctx.v43.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v44.s16), _mm_load_si128((__m128i*)ctx.v44.s16))));
	// vcsxwfp128 v42,v43,15
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v43.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsubfp128 v10,v42,v12
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v10,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vcuxwfp128 v13,v46,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v46.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// stvlx v12,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvrx v12,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// lwz r3,-96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// bdnz 0x830718ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830718AC;
loc_83071928:
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83071938
	if (ctx.cr6.lt) goto loc_83071938;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83071938:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83071970
	if (ctx.cr6.eq) goto loc_83071970;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83071970
	if (ctx.cr6.eq) goto loc_83071970;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r6,-2
	ctx.r9.s64 = ctx.r6.s64 + -2;
loc_83071958:
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r29.u32);
	// sthu r5,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83071958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83071958;
loc_83071970:
	// rlwinm r9,r11,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// stw r8,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r8.u32);
	// lhz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// sth r6,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r6.u16);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r3,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r3.u16);
	// bne cr6,0x830719a8
	if (!ctx.cr6.eq) goto loc_830719A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830719b0
	goto loc_830719B0;
loc_830719A8:
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_830719B0:
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x830719c4
	if (!ctx.cr6.eq) goto loc_830719C4;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_830719C4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830719D8"))) PPC_WEAK_FUNC(sub_830719D8);
PPC_FUNC_IMPL(__imp__sub_830719D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x830719E0;
	__savegprlr_23(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83071a04
	if (ctx.cr6.eq) goto loc_83071A04;
loc_830719F0:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830719f0
	if (!ctx.cr6.eq) goto loc_830719F0;
loc_83071A04:
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r9,24(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r10,28(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// addi r23,r6,24
	ctx.r23.s64 = ctx.r6.s64 + 24;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r30,r10,r7
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r25,r6,28
	ctx.r25.s64 = ctx.r6.s64 + 28;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
loc_83071A44:
	// dcbt r30,r29
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// bdnz 0x83071a44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83071A44;
	// subf r24,r10,r5
	ctx.r24.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lwz r8,36(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// lwz r10,32(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// addi r26,r6,32
	ctx.r26.s64 = ctx.r6.s64 + 32;
	// lhz r28,14(r3)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// addi r27,r3,14
	ctx.r27.s64 = ctx.r3.s64 + 14;
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// addis r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 65536;
	// stw r8,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r8.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// divwu r10,r5,r8
	ctx.r10.u32 = ctx.r5.u32 / ctx.r8.u32;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// blt cr6,0x83071a90
	if (ctx.cr6.lt) goto loc_83071A90;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_83071A90:
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lvlx128 v63,r0,r26
	temp.u32 = ctx.r26.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,-112
	ctx.r5.s64 = ctx.r1.s64 + -112;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r3,r10,-6992
	ctx.r3.s64 = ctx.r10.s64 + -6992;
	// vspltw128 v0,v63,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// li r9,16
	ctx.r9.s64 = 16;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lvlx128 v62,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vand128 v61,v0,v63
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vspltw128 v10,v62,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcuxwfp128 v13,v61,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v61.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// beq cr6,0x83071b50
	if (ctx.cr6.eq) goto loc_83071B50;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v60,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// vupklsb128 v59,v60,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v60.s16)));
	// vupkhsb128 v58,v60,v96
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v60.s16), _mm_load_si128((__m128i*)ctx.v60.s16))));
	// vcsxwfp128 v11,v59,15
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// lvrx128 v57,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vcsxwfp128 v9,v58,15
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v55,v56,v57
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v57.u8)));
	// vupklsb128 v54,v55,v96
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v55.s16)));
	// vupkhsb128 v53,v55,v96
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v55.s16), _mm_load_si128((__m128i*)ctx.v55.s16))));
	// vcsxwfp128 v52,v54,15
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v51,v53,15
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsubfp128 v8,v52,v11
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v11.f32)));
	// vsubfp128 v7,v51,v9
	_mm_store_ps(ctx.v7.f32, _mm_sub_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v9.f32)));
loc_83071B14:
	// vmaddfp v12,v7,v13,v9
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v9.f32)));
	// vadduws v0,v0,v10
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmaddfp v13,v8,v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// vand128 v50,v0,v63
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// stvlx v12,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// vor128 v49,v13,v13
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// stvrx v12,r11,r9
	ea = ctx.r11.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// vcuxwfp128 v13,v50,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v50.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stvlx128 v49,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvrx128 v49,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v49.u8[i]);
	// bdnz 0x83071b14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83071B14;
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_83071B50:
	// lwz r3,-96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// rlwinm r5,r28,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF0000;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// subf r5,r3,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r3.s64;
	// subf r10,r30,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r30.s64;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// divwu r8,r5,r8
	ctx.r8.u32 = ctx.r5.u32 / ctx.r8.u32;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83071b80
	if (ctx.cr6.lt) goto loc_83071B80;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
loc_83071B80:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83071c30
	if (ctx.cr6.eq) goto loc_83071C30;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_83071B90:
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// mullw r8,r10,r7
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// dcbt r3,r10
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lvlx128 v48,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v47,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r3,r1,-96
	ctx.r3.s64 = ctx.r1.s64 + -96;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// vor128 v46,v48,v47
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v47.u8)));
	// vadduws v0,v0,v10
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// vupkhsb128 v45,v46,v96
	_mm_store_si128((__m128i*)ctx.v45.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v46.s16), _mm_load_si128((__m128i*)ctx.v46.s16))));
	// vupklsb128 v44,v46,v96
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v46.s16)));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v42,v0,v63
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// lvrx128 v43,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v41,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v12,v45,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v45.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vor128 v40,v41,v43
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v43.u8)));
	// vcsxwfp128 v11,v44,15
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v44.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupkhsb128 v39,v40,v96
	_mm_store_si128((__m128i*)ctx.v39.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v40.s16), _mm_load_si128((__m128i*)ctx.v40.s16))));
	// vupklsb128 v38,v40,v96
	_mm_store_si128((__m128i*)ctx.v38.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v40.s16)));
	// vcsxwfp128 v37,v39,15
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v39.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v36,v38,15
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v38.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsubfp128 v8,v37,v12
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v9,v36,v11
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v8,v8,v13,v12
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v9,v13,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// vcuxwfp128 v13,v42,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v42.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// stvlx v8,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvrx v8,r11,r9
	ea = ctx.r11.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v8.u8[i]);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stvlx v12,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvrx v12,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// lwz r3,-96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// bdnz 0x83071b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83071B90;
loc_83071C30:
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83071c40
	if (ctx.cr6.lt) goto loc_83071C40;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83071C40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83071c78
	if (ctx.cr6.eq) goto loc_83071C78;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83071c78
	if (ctx.cr6.eq) goto loc_83071C78;
	// mullw r8,r7,r11
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r9,r6,-2
	ctx.r9.s64 = ctx.r6.s64 + -2;
loc_83071C60:
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r29.u32);
	// sthu r5,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83071c60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83071C60;
loc_83071C78:
	// rlwinm r9,r11,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// stw r8,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r8.u32);
	// lhz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// sth r6,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r6.u16);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r3,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r3.u16);
	// bne cr6,0x83071cb0
	if (!ctx.cr6.eq) goto loc_83071CB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83071cb8
	goto loc_83071CB8;
loc_83071CB0:
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_83071CB8:
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x83071ccc
	if (!ctx.cr6.eq) goto loc_83071CCC;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_83071CCC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83071CE0"))) PPC_WEAK_FUNC(sub_83071CE0);
PPC_FUNC_IMPL(__imp__sub_83071CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x83071CE8;
	__savegprlr_22(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83071d0c
	if (ctx.cr6.eq) goto loc_83071D0C;
loc_83071CF8:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83071cf8
	if (!ctx.cr6.eq) goto loc_83071CF8;
loc_83071D0C:
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r9,24(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// addi r22,r6,24
	ctx.r22.s64 = ctx.r6.s64 + 24;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r30,r11,r7
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r24,r6,28
	ctx.r24.s64 = ctx.r6.s64 + 28;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
loc_83071D48:
	// dcbt r30,r29
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// bdnz 0x83071d48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83071D48;
	// subf r23,r11,r5
	ctx.r23.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lwz r9,36(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// addi r25,r6,32
	ctx.r25.s64 = ctx.r6.s64 + 32;
	// lhz r28,14(r3)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// addi r26,r3,14
	ctx.r26.s64 = ctx.r3.s64 + 14;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// addis r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 65536;
	// stw r9,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r9.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// divwu r11,r5,r9
	ctx.r11.u32 = ctx.r5.u32 / ctx.r9.u32;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// blt cr6,0x83071d94
	if (ctx.cr6.lt) goto loc_83071D94;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_83071D94:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lvlx128 v63,r0,r25
	temp.u32 = ctx.r25.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r11,-6992
	ctx.r3.s64 = ctx.r11.s64 + -6992;
	// vspltw128 v0,v63,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// addi r5,r11,18288
	ctx.r5.s64 = ctx.r11.s64 + 18288;
	// addi r30,r1,-112
	ctx.r30.s64 = ctx.r1.s64 + -112;
	// lwz r11,18304(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18304);
	// lvx128 v61,r0,r3
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vand128 v62,v0,v61
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// lvlx128 v60,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v10,v60,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// vcuxwfp128 v13,v62,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// bne cr6,0x83071df4
	if (!ctx.cr6.eq) goto loc_83071DF4;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,18304(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18304, ctx.r11.u32);
	// stvx128 v62,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x83071df8
	goto loc_83071DF8;
loc_83071DF4:
	// lvx128 v62,r0,r5
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
loc_83071DF8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// addi r3,r11,15600
	ctx.r3.s64 = ctx.r11.s64 + 15600;
	// addi r11,r8,-7056
	ctx.r11.s64 = ctx.r8.s64 + -7056;
	// li r5,16
	ctx.r5.s64 = 16;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// beq cr6,0x83071e80
	if (ctx.cr6.eq) goto loc_83071E80;
	// add r11,r7,r29
	ctx.r11.u64 = ctx.r7.u64 + ctx.r29.u64;
	// lvlx128 v59,r7,r29
	temp.u32 = ctx.r7.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// vperm128 v57,v58,v62,v7
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvrx128 v56,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v55,v59,v56
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v56.u8)));
	// vcuxwfp128 v54,v57,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vperm128 v53,v55,v62,v7
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcuxwfp128 v52,v53,7
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v12,v54,v63
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v51,v52,v63
	_mm_store_ps(ctx.v51.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v11,v51,v12
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v12.f32)));
loc_83071E54:
	// vmaddfp v13,v11,v13,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vadduws v0,v0,v10
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vand128 v50,v0,v61
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vor128 v49,v13,v13
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vcuxwfp128 v13,v50,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v50.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// stvlx128 v49,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvrx128 v49,r10,r5
	ea = ctx.r10.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v49.u8[i]);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bdnz 0x83071e54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83071E54;
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_83071E80:
	// lwz r31,-112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	// rlwinm r8,r28,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF0000;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subf r11,r27,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r27.s64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// divwu r9,r3,r9
	ctx.r9.u32 = ctx.r3.u32 / ctx.r9.u32;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83071eb0
	if (ctx.cr6.lt) goto loc_83071EB0;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_83071EB0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83071f3c
	if (ctx.cr6.eq) goto loc_83071F3C;
	// add r8,r7,r29
	ctx.r8.u64 = ctx.r7.u64 + ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_83071EC4:
	// rlwinm r11,r31,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// li r31,1024
	ctx.r31.s64 = 1024;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// dcbt r31,r9
	// lvrx128 v48,r5,r9
	temp.u32 = ctx.r5.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvlx128 v47,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vadduws v0,v0,v10
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// lvlx128 v46,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v45,v47,v48
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v48.u8)));
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
	// lvrx128 v44,r5,r9
	temp.u32 = ctx.r5.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vand128 v41,v0,v61
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vor128 v43,v46,v44
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v44.u8)));
	// vperm128 v42,v45,v62,v7
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v40,v43,v62,v7
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcuxwfp128 v39,v42,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v42.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v38,v40,7
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v40.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v12,v39,v63
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v37,v38,v63
	_mm_store_ps(ctx.v37.f32, _mm_sub_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v11,v37,v12
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v11,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vcuxwfp128 v13,v41,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v41.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// stvlx v12,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvrx v12,r10,r5
	ea = ctx.r10.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// lwz r31,-112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// bdnz 0x83071ec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83071EC4;
loc_83071F3C:
	// rlwinm r11,r31,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83071f4c
	if (ctx.cr6.lt) goto loc_83071F4C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83071F4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83071f7c
	if (ctx.cr6.eq) goto loc_83071F7C;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83071f7c
	if (ctx.cr6.eq) goto loc_83071F7C;
	// mullw r9,r7,r11
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_83071F6C:
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stbx r8,r10,r6
	PPC_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83071f6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83071F6C;
loc_83071F7C:
	// rlwinm r9,r11,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// add r10,r30,r27
	ctx.r10.u64 = ctx.r30.u64 + ctx.r27.u64;
	// subf r8,r9,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// lhz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// sth r6,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r6.u16);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r3,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r3.u16);
	// bne cr6,0x83071fb4
	if (!ctx.cr6.eq) goto loc_83071FB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83071fbc
	goto loc_83071FBC;
loc_83071FB4:
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_83071FBC:
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x83071fd0
	if (!ctx.cr6.eq) goto loc_83071FD0;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_83071FD0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83071FE4"))) PPC_WEAK_FUNC(sub_83071FE4);
PPC_FUNC_IMPL(__imp__sub_83071FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071FE8"))) PPC_WEAK_FUNC(sub_83071FE8);
PPC_FUNC_IMPL(__imp__sub_83071FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x83071FF0;
	__savegprlr_22(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83072014
	if (ctx.cr6.eq) goto loc_83072014;
loc_83072000:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83072000
	if (!ctx.cr6.eq) goto loc_83072000;
loc_83072014:
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r9,24(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r10,28(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// addi r22,r6,24
	ctx.r22.s64 = ctx.r6.s64 + 24;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r30,r10,r31
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mullw r11,r9,r31
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r24,r6,28
	ctx.r24.s64 = ctx.r6.s64 + 28;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
loc_83072050:
	// dcbt r30,r29
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// bdnz 0x83072050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83072050;
	// subf r23,r10,r5
	ctx.r23.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lwz r7,36(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// lwz r10,32(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// addi r25,r6,32
	ctx.r25.s64 = ctx.r6.s64 + 32;
	// lhz r28,14(r3)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// addi r26,r3,14
	ctx.r26.s64 = ctx.r3.s64 + 14;
	// subf r9,r10,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r10.s64;
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// stw r7,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r7.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divwu r10,r8,r7
	ctx.r10.u32 = ctx.r8.u32 / ctx.r7.u32;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// blt cr6,0x8307209c
	if (ctx.cr6.lt) goto loc_8307209C;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_8307209C:
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lvlx128 v63,r0,r25
	temp.u32 = ctx.r25.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r5,r10,-6992
	ctx.r5.s64 = ctx.r10.s64 + -6992;
	// vspltw128 v0,v63,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r1,-128
	ctx.r3.s64 = ctx.r1.s64 + -128;
	// addi r8,r10,18320
	ctx.r8.s64 = ctx.r10.s64 + 18320;
	// addi r30,r1,-112
	ctx.r30.s64 = ctx.r1.s64 + -112;
	// lwz r10,18336(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18336);
	// lvx128 v59,r0,r5
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vand128 v62,v0,v59
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// clrlwi r5,r10,31
	ctx.r5.u64 = ctx.r10.u32 & 0x1;
	// lvlx128 v61,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v8,v61,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vcuxwfp128 v13,v62,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// bne cr6,0x830720fc
	if (!ctx.cr6.eq) goto loc_830720FC;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,18336(r9)
	PPC_STORE_U32(ctx.r9.u32 + 18336, ctx.r10.u32);
	// stvx128 v62,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x83072100
	goto loc_83072100;
loc_830720FC:
	// lvx128 v62,r0,r8
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
loc_83072100:
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r5,r10,-7040
	ctx.r5.s64 = ctx.r10.s64 + -7040;
	// addi r10,r8,-7056
	ctx.r10.s64 = ctx.r8.s64 + -7056;
	// addi r3,r9,15600
	ctx.r3.s64 = ctx.r9.s64 + 15600;
	// li r8,16
	ctx.r8.s64 = 16;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lvx128 v6,r0,r5
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// beq cr6,0x830721c0
	if (ctx.cr6.eq) goto loc_830721C0;
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lvlx128 v61,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r31,r29
	temp.u32 = ctx.r31.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// vperm128 v58,v61,v62,v7
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v57,v61,v62,v6
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvrx128 v56,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v61,v60,v56
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v56.u8)));
	// vcuxwfp128 v55,v58,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v54,v57,7
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vperm128 v53,v61,v62,v7
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v52,v61,v62,v6
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vcuxwfp128 v51,v53,7
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v50,v52,7
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v52.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v12,v55,v63
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v11,v54,v63
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v49,v51,v63
	_mm_store_ps(ctx.v49.f32, _mm_sub_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v48,v50,v63
	_mm_store_ps(ctx.v48.f32, _mm_sub_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v9,v49,v12
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v5,v48,v11
	_mm_store_ps(ctx.v5.f32, _mm_sub_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v11.f32)));
loc_83072184:
	// vmaddfp v10,v9,v13,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vadduws v0,v0,v8
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmaddfp v13,v5,v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// vand128 v47,v0,v59
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// stvlx v10,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// vor128 v46,v13,v13
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// stvrx v10,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v10.u8[i]);
	// vcuxwfp128 v13,v47,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v47.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stvlx128 v46,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvrx128 v46,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v46.u8[i]);
	// bdnz 0x83072184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83072184;
	// addi r10,r1,-112
	ctx.r10.s64 = ctx.r1.s64 + -112;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_830721C0:
	// lwz r3,-112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	// rlwinm r9,r28,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF0000;
	// subf r10,r27,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r27.s64;
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// divwu r9,r5,r7
	ctx.r9.u32 = ctx.r5.u32 / ctx.r7.u32;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x830721f0
	if (ctx.cr6.lt) goto loc_830721F0;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_830721F0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830722a8
	if (ctx.cr6.eq) goto loc_830722A8;
	// add r7,r31,r29
	ctx.r7.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_83072204:
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// dcbt r3,r9
	// lvrx128 v45,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lvlx128 v44,r10,r29
	temp.u32 = ctx.r10.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,-112
	ctx.r3.s64 = ctx.r1.s64 + -112;
	// lvlx128 v43,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v44,v45
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v45.u8)));
	// vadduws v0,v0,v8
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lvrx128 v42,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v60,v43,v42
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v42.u8)));
	// vperm128 v41,v61,v62,v7
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v40,v61,v62,v6
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v39,v0,v59
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// vperm128 v38,v60,v62,v7
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcuxwfp128 v37,v41,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v41.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vperm128 v36,v60,v62,v6
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vcuxwfp128 v35,v40,7
	_mm_store_ps(ctx.v35.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v40.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v34,v38,7
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v38.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v33,v36,7
	_mm_store_ps(ctx.v33.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v36.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v12,v37,v63
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v11,v35,v63
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v32,v34,v63
	_mm_store_ps(ctx.v32.f32, _mm_sub_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v61,v33,v63
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v9,v32,v12
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v10,v61,v11
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v9,v9,v13,v12
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v10,v13,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// vcuxwfp128 v13,v39,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v39.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// stvlx v9,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvrx v9,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v9.u8[i]);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stvlx v12,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvrx v12,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// lwz r3,-112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	// bdnz 0x83072204
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83072204;
loc_830722A8:
	// rlwinm r11,r3,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x830722b8
	if (ctx.cr6.lt) goto loc_830722B8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_830722B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830722e8
	if (ctx.cr6.eq) goto loc_830722E8;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830722e8
	if (ctx.cr6.eq) goto loc_830722E8;
	// mullw r9,r31,r11
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r11.s32);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_830722D8:
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stbx r8,r10,r6
	PPC_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x830722d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830722D8;
loc_830722E8:
	// rlwinm r9,r11,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// add r10,r30,r27
	ctx.r10.u64 = ctx.r30.u64 + ctx.r27.u64;
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// lhz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// sth r6,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r6.u16);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r3,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r3.u16);
	// bne cr6,0x83072320
	if (!ctx.cr6.eq) goto loc_83072320;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83072328
	goto loc_83072328;
loc_83072320:
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_83072328:
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8307233c
	if (!ctx.cr6.eq) goto loc_8307233C;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_8307233C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83072350"))) PPC_WEAK_FUNC(sub_83072350);
PPC_FUNC_IMPL(__imp__sub_83072350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7644
	ctx.lr = 0x83072358;
	__savegprlr_15(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307237c
	if (ctx.cr6.eq) goto loc_8307237C;
loc_83072368:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83072368
	if (!ctx.cr6.eq) goto loc_83072368;
loc_8307237C:
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r8,24(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r9,28(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// addi r16,r6,24
	ctx.r16.s64 = ctx.r6.s64 + 24;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r30,r9,r10
	ctx.r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r28,r11,r7
	ctx.r28.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r17,r6,28
	ctx.r17.s64 = ctx.r6.s64 + 28;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
loc_830723BC:
	// dcbt r30,r28
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// bdnz 0x830723bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830723BC;
	// addi r20,r6,32
	ctx.r20.s64 = ctx.r6.s64 + 32;
	// lwz r31,48(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// lwz r30,36(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// subf r19,r9,r5
	ctx.r19.s64 = ctx.r5.s64 - ctx.r9.s64;
	// lwz r9,44(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// addi r7,r8,-6992
	ctx.r7.s64 = ctx.r8.s64 + -6992;
	// lwz r5,40(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// lhz r21,14(r3)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lvlx128 v63,r0,r20
	temp.u32 = ctx.r20.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mullw r29,r10,r19
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r19.s32);
	// vspltw128 v0,v63,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v63,r0,r7
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vand128 v62,v0,v63
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// subfic r8,r9,1024
	ctx.xer.ca = ctx.r9.u32 <= 1024;
	ctx.r8.s64 = 1024 - ctx.r9.s64;
	// vcuxwfp128 v13,v62,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r8,r8,r31
	ctx.r8.u32 = ctx.r8.u32 / ctx.r31.u32;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// addi r23,r6,44
	ctx.r23.s64 = ctx.r6.s64 + 44;
	// addi r22,r3,14
	ctx.r22.s64 = ctx.r3.s64 + 14;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// add r29,r7,r11
	ctx.r29.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r19,r8
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r8.u32, ctx.xer);
	// subf r26,r30,r5
	ctx.r26.s64 = ctx.r5.s64 - ctx.r30.s64;
	// rlwinm r25,r30,10,0,21
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 10) & 0xFFFFFC00;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// blt cr6,0x83072444
	if (ctx.cr6.lt) goto loc_83072444;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
loc_83072444:
	// lwz r27,-160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// li r3,16
	ctx.r3.s64 = 16;
	// rlwinm r8,r27,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x830724f4
	if (!ctx.cr6.eq) goto loc_830724F4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x830724f4
	if (ctx.cr6.eq) goto loc_830724F4;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v61,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mullw r7,r26,r9
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r9.s32);
	// vupkhsb128 v60,v61,v96
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v61.s16), _mm_load_si128((__m128i*)ctx.v61.s16))));
	// vcsxwfp128 v12,v60,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r30,r26,r31
	ctx.r30.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r31.s32);
	// lvrx128 v59,r3,r8
	temp.u32 = ctx.r3.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v58,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v57,v58,v59
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// vupkhsb128 v56,v57,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v57.s16), _mm_load_si128((__m128i*)ctx.v57.s16))));
	// add r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 + ctx.r25.u64;
	// vcsxwfp128 v55,v56,15
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsubfp128 v11,v55,v12
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v12.f32)));
loc_8307249C:
	// vmaddfp v13,v11,v13,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// add r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 + ctx.r7.u64;
	// addi r8,r1,-176
	ctx.r8.s64 = ctx.r1.s64 + -176;
	// addi r15,r1,-160
	ctx.r15.s64 = ctx.r1.s64 + -160;
	// rlwinm r27,r7,22,10,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 22) & 0x3FFFFF;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stvlx v13,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// stw r27,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r27.u32);
	// lvlx128 v54,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v54,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vadduws v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v53,v0,v63
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// lwz r27,-160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// rlwinm r8,r27,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF;
	// vcuxwfp128 v13,v53,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x830724f4
	if (!ctx.cr6.eq) goto loc_830724F4;
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x8307249c
	if (!ctx.cr0.eq) goto loc_8307249C;
loc_830724F4:
	// subf r7,r11,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r29,r21,-1
	ctx.r29.s64 = ctx.r21.s64 + -1;
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// subfic r30,r9,1024
	ctx.xer.ca = ctx.r9.u32 <= 1024;
	ctx.r30.s64 = 1024 - ctx.r9.s64;
	// divwu r7,r5,r10
	ctx.r7.u32 = ctx.r5.u32 / ctx.r10.u32;
	// divwu r5,r30,r31
	ctx.r5.u32 = ctx.r30.u32 / ctx.r31.u32;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// blt cr6,0x83072524
	if (ctx.cr6.lt) goto loc_83072524;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
loc_83072524:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x830725e4
	if (ctx.cr6.gt) goto loc_830725E4;
	// mullw r7,r26,r9
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r9.s32);
	// mullw r30,r26,r31
	ctx.r30.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r31.s32);
	// add r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 + ctx.r25.u64;
loc_83072538:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// beq cr6,0x830725e4
	if (ctx.cr6.eq) goto loc_830725E4;
	// mullw r5,r10,r8
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r27,1024
	ctx.r27.s64 = 1024;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// dcbt r27,r8
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvlx128 v52,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v51,r3,r8
	temp.u32 = ctx.r3.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// vor128 v50,v52,v51
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v51.u8)));
	// addi r27,r1,-176
	ctx.r27.s64 = ctx.r1.s64 + -176;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// addi r25,r1,-160
	ctx.r25.s64 = ctx.r1.s64 + -160;
	// vupkhsb128 v49,v50,v96
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v50.s16), _mm_load_si128((__m128i*)ctx.v50.s16))));
	// rlwinm r26,r7,22,10,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lvrx128 v48,r3,r5
	temp.u32 = ctx.r3.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v47,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v12,v49,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vor128 v46,v47,v48
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v48.u8)));
	// vupkhsb128 v45,v46,v96
	_mm_store_si128((__m128i*)ctx.v45.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v46.s16), _mm_load_si128((__m128i*)ctx.v46.s16))));
	// vcsxwfp128 v44,v45,15
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v45.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsubfp128 v11,v44,v12
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v11,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvlx v13,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// stw r26,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r26.u32);
	// lvlx128 v43,r0,r27
	temp.u32 = ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v43,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), 0xFF));
	// vadduws v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v42,v0,v63
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// lwz r27,-160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// rlwinm r8,r27,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF;
	// vcuxwfp128 v13,v42,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v42.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x83072538
	if (!ctx.cr6.gt) goto loc_83072538;
loc_830725E4:
	// stw r9,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r8,r21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x830725f4
	if (ctx.cr6.lt) goto loc_830725F4;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
loc_830725F4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8307262c
	if (ctx.cr6.eq) goto loc_8307262C;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307262c
	if (ctx.cr6.eq) goto loc_8307262C;
	// mullw r5,r10,r8
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r7,r6,-2
	ctx.r7.s64 = ctx.r6.s64 + -2;
loc_83072614:
	// add r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r3,r28
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r28.u32);
	// sthu r6,2(r7)
	ea = 2 + ctx.r7.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x83072614
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83072614;
loc_8307262C:
	// rlwinm r9,r8,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// subf r7,r18,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r18.s64;
	// subf r6,r9,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r9.s64;
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// stw r6,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r6.u32);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// lhz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// subf r9,r8,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r8.s64;
	// sth r9,0(r22)
	PPC_STORE_U16(ctx.r22.u32 + 0, ctx.r9.u16);
	// divwu r11,r5,r10
	ctx.r11.u32 = ctx.r5.u32 / ctx.r10.u32;
	// cmplw cr6,r8,r21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r21.u32, ctx.xer);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r7,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r7.u16);
	// bne cr6,0x83072670
	if (!ctx.cr6.eq) goto loc_83072670;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83072678
	goto loc_83072678;
loc_83072670:
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_83072678:
	// stw r10,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x8307268c
	if (!ctx.cr6.eq) goto loc_8307268C;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
loc_8307268C:
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830726A0"))) PPC_WEAK_FUNC(sub_830726A0);
PPC_FUNC_IMPL(__imp__sub_830726A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x830726A8;
	__savegprlr_14(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830726cc
	if (ctx.cr6.eq) goto loc_830726CC;
loc_830726B8:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830726b8
	if (!ctx.cr6.eq) goto loc_830726B8;
loc_830726CC:
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r9,24(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r10,28(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// addi r16,r6,24
	ctx.r16.s64 = ctx.r6.s64 + 24;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r30,r10,r8
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r27,r11,r7
	ctx.r27.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r17,r6,28
	ctx.r17.s64 = ctx.r6.s64 + 28;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
loc_8307270C:
	// dcbt r30,r27
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// bdnz 0x8307270c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8307270C;
	// addi r20,r6,32
	ctx.r20.s64 = ctx.r6.s64 + 32;
	// lwz r31,48(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lwz r30,36(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// subf r19,r10,r5
	ctx.r19.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lwz r10,44(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// addi r7,r9,-6992
	ctx.r7.s64 = ctx.r9.s64 + -6992;
	// lwz r5,40(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// addi r9,r1,-176
	ctx.r9.s64 = ctx.r1.s64 + -176;
	// lhz r21,14(r3)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lvlx128 v63,r0,r20
	temp.u32 = ctx.r20.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mullw r29,r8,r19
	ctx.r29.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r19.s32);
	// vspltw128 v0,v63,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v63,r0,r7
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vand128 v62,v0,v63
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// subfic r9,r10,1024
	ctx.xer.ca = ctx.r10.u32 <= 1024;
	ctx.r9.s64 = 1024 - ctx.r10.s64;
	// vcuxwfp128 v13,v62,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r9,r9,r31
	ctx.r9.u32 = ctx.r9.u32 / ctx.r31.u32;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// addi r23,r6,44
	ctx.r23.s64 = ctx.r6.s64 + 44;
	// addi r22,r3,14
	ctx.r22.s64 = ctx.r3.s64 + 14;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// add r29,r7,r11
	ctx.r29.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r19,r9
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r9.u32, ctx.xer);
	// subf r26,r30,r5
	ctx.r26.s64 = ctx.r5.s64 - ctx.r30.s64;
	// rlwinm r25,r30,10,0,21
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 10) & 0xFFFFFC00;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// blt cr6,0x83072794
	if (ctx.cr6.lt) goto loc_83072794;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
loc_83072794:
	// lwz r28,-176(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// li r7,16
	ctx.r7.s64 = 16;
	// rlwinm r9,r28,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83072868
	if (!ctx.cr6.eq) goto loc_83072868;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x83072868
	if (ctx.cr6.eq) goto loc_83072868;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v61,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mullw r5,r26,r10
	ctx.r5.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r10.s32);
	// vupklsb128 v60,v61,v96
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v61.s16)));
	// vupkhsb128 v59,v61,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v61.s16), _mm_load_si128((__m128i*)ctx.v61.s16))));
	// vcsxwfp128 v11,v60,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v10,v59,15
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r30,r26,r31
	ctx.r30.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r31.s32);
	// lvrx128 v58,r7,r9
	temp.u32 = ctx.r7.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v57,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v56,v57,v58
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v58.u8)));
	// vupklsb128 v55,v56,v96
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v56.s16)));
	// vupkhsb128 v54,v56,v96
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v56.s16), _mm_load_si128((__m128i*)ctx.v56.s16))));
	// add r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 + ctx.r25.u64;
	// vcsxwfp128 v53,v55,15
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v52,v54,15
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsubfp128 v9,v53,v11
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v11.f32)));
	// vsubfp128 v8,v52,v10
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v10.f32)));
loc_83072800:
	// vmaddfp v12,v8,v13,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)));
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// vmaddfp v13,v9,v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// add r5,r30,r5
	ctx.r5.u64 = ctx.r30.u64 + ctx.r5.u64;
	// addi r14,r1,-176
	ctx.r14.s64 = ctx.r1.s64 + -176;
	// addi r28,r1,-192
	ctx.r28.s64 = ctx.r1.s64 + -192;
	// rlwinm r15,r5,22,10,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3FFFFF;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stvlx v12,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvrx v12,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stvlx v13,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// stw r15,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r15.u32);
	// lvlx128 v51,r0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v51,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), 0xFF));
	// vadduws v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// stvx128 v0,r0,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v50,v0,v63
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// lwz r28,-176(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// rlwinm r9,r28,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF;
	// vcuxwfp128 v13,v50,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v50.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83072868
	if (!ctx.cr6.eq) goto loc_83072868;
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x83072800
	if (!ctx.cr0.eq) goto loc_83072800;
loc_83072868:
	// subf r5,r11,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r29,r21,-1
	ctx.r29.s64 = ctx.r21.s64 + -1;
	// srawi r3,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 2;
	// subfic r30,r10,1024
	ctx.xer.ca = ctx.r10.u32 <= 1024;
	ctx.r30.s64 = 1024 - ctx.r10.s64;
	// divwu r5,r3,r8
	ctx.r5.u32 = ctx.r3.u32 / ctx.r8.u32;
	// divwu r3,r30,r31
	ctx.r3.u32 = ctx.r30.u32 / ctx.r31.u32;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// blt cr6,0x83072898
	if (ctx.cr6.lt) goto loc_83072898;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_83072898:
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x8307297c
	if (ctx.cr6.gt) goto loc_8307297C;
	// mullw r5,r26,r10
	ctx.r5.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r10.s32);
	// mullw r30,r26,r31
	ctx.r30.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r31.s32);
	// add r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 + ctx.r25.u64;
loc_830728AC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// beq cr6,0x8307297c
	if (ctx.cr6.eq) goto loc_8307297C;
	// mullw r3,r9,r8
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r28,1024
	ctx.r28.s64 = 1024;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// dcbt r28,r9
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lvlx128 v49,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v48,r7,r9
	temp.u32 = ctx.r7.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// vor128 v47,v49,v48
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v48.u8)));
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r25,r1,-176
	ctx.r25.s64 = ctx.r1.s64 + -176;
	// vupkhsb128 v46,v47,v96
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v47.s16), _mm_load_si128((__m128i*)ctx.v47.s16))));
	// addi r28,r1,-192
	ctx.r28.s64 = ctx.r1.s64 + -192;
	// vupklsb128 v45,v47,v96
	_mm_store_si128((__m128i*)ctx.v45.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v47.s16)));
	// rlwinm r26,r5,22,10,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3FFFFF;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lvrx128 v44,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v43,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v12,v46,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v46.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vor128 v42,v43,v44
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v44.u8)));
	// vcsxwfp128 v11,v45,15
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v45.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// vupkhsb128 v41,v42,v96
	_mm_store_si128((__m128i*)ctx.v41.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v42.s16), _mm_load_si128((__m128i*)ctx.v42.s16))));
	// vupklsb128 v40,v42,v96
	_mm_store_si128((__m128i*)ctx.v40.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v42.s16)));
	// vcsxwfp128 v39,v41,15
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v41.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v38,v40,15
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v40.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsubfp128 v9,v39,v12
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v10,v38,v11
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v12,v9,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v10,v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// stvlx v12,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvrx v12,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stvlx v13,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// stw r26,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r26.u32);
	// lvlx128 v37,r0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v37,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), 0xFF));
	// vadduws v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// stvx128 v0,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v36,v0,v63
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// lwz r28,-176(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// rlwinm r9,r28,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// vcuxwfp128 v13,v36,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v36.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// ble cr6,0x830728ac
	if (!ctx.cr6.gt) goto loc_830728AC;
loc_8307297C:
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x8307298c
	if (ctx.cr6.lt) goto loc_8307298C;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
loc_8307298C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x830729c4
	if (ctx.cr6.eq) goto loc_830729C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x830729c4
	if (ctx.cr6.eq) goto loc_830729C4;
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r7,r6,-2
	ctx.r7.s64 = ctx.r6.s64 + -2;
loc_830729AC:
	// add r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r3,r27
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r27.u32);
	// sthu r6,2(r7)
	ea = 2 + ctx.r7.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x830729ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830729AC;
loc_830729C4:
	// rlwinm r10,r9,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// subf r7,r18,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r18.s64;
	// subf r6,r10,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r10.s64;
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// stw r6,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r6.u32);
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// lhz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// subf r10,r9,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r9.s64;
	// divwu r11,r5,r8
	ctx.r11.u32 = ctx.r5.u32 / ctx.r8.u32;
	// sth r10,0(r22)
	PPC_STORE_U16(ctx.r22.u32 + 0, ctx.r10.u16);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r21.u32, ctx.xer);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r8,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r8.u16);
	// bne cr6,0x83072a08
	if (!ctx.cr6.eq) goto loc_83072A08;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83072a10
	goto loc_83072A10;
loc_83072A08:
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_83072A10:
	// stw r10,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x83072a24
	if (!ctx.cr6.eq) goto loc_83072A24;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_83072A24:
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83072A38"))) PPC_WEAK_FUNC(sub_83072A38);
PPC_FUNC_IMPL(__imp__sub_83072A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7644
	ctx.lr = 0x83072A40;
	__savegprlr_15(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83072a64
	if (ctx.cr6.eq) goto loc_83072A64;
loc_83072A50:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83072a50
	if (!ctx.cr6.eq) goto loc_83072A50;
loc_83072A64:
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r8,24(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r9,28(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// addi r16,r6,24
	ctx.r16.s64 = ctx.r6.s64 + 24;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r30,r9,r10
	ctx.r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mullw r11,r8,r10
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r7
	ctx.r29.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r17,r6,28
	ctx.r17.s64 = ctx.r6.s64 + 28;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
loc_83072AA0:
	// dcbt r30,r29
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// bdnz 0x83072aa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83072AA0;
	// addi r20,r6,32
	ctx.r20.s64 = ctx.r6.s64 + 32;
	// lwz r31,36(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lhz r22,14(r3)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// subf r19,r9,r5
	ctx.r19.s64 = ctx.r5.s64 - ctx.r9.s64;
	// addi r7,r7,-6992
	ctx.r7.s64 = ctx.r7.s64 + -6992;
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// lvlx128 v63,r0,r20
	temp.u32 = ctx.r20.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// mullw r30,r10,r19
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r19.s32);
	// vspltw128 v0,v63,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v61,r0,r7
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lwz r9,18368(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18368);
	// vand128 v62,v0,v61
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcuxwfp128 v12,v62,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r30,r9,31
	ctx.r30.u64 = ctx.r9.u32 & 0x1;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r23,r3,14
	ctx.r23.s64 = ctx.r3.s64 + 14;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// add r24,r5,r11
	ctx.r24.u64 = ctx.r5.u64 + ctx.r11.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r7,r7,18352
	ctx.r7.s64 = ctx.r7.s64 + 18352;
	// bne cr6,0x83072b24
	if (!ctx.cr6.eq) goto loc_83072B24;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r9,18368(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18368, ctx.r9.u32);
	// stvx128 v62,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x83072b28
	goto loc_83072B28;
loc_83072B24:
	// lvx128 v62,r0,r7
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
loc_83072B28:
	// lwz r8,44(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// addi r21,r6,44
	ctx.r21.s64 = ctx.r6.s64 + 44;
	// lwz r3,48(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// rlwinm r25,r31,10,0,21
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 10) & 0xFFFFFC00;
	// subfic r9,r8,1024
	ctx.xer.ca = ctx.r8.u32 <= 1024;
	ctx.r9.s64 = 1024 - ctx.r8.s64;
	// lwz r7,40(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// twllei r3,0
	if (ctx.r3.u32 <= 0) __builtin_debugtrap();
	// divwu r9,r9,r3
	ctx.r9.u32 = ctx.r9.u32 / ctx.r3.u32;
	// subf r28,r31,r7
	ctx.r28.s64 = ctx.r7.s64 - ctx.r31.s64;
	// cmplw cr6,r19,r9
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r9.u32, ctx.xer);
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// blt cr6,0x83072b5c
	if (ctx.cr6.lt) goto loc_83072B5C;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
loc_83072B5C:
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lwz r26,-160(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// addi r5,r9,15600
	ctx.r5.s64 = ctx.r9.s64 + 15600;
	// addi r7,r7,-7056
	ctx.r7.s64 = ctx.r7.s64 + -7056;
	// rlwinm r9,r26,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF;
	// li r31,16
	ctx.r31.s64 = 16;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lvx128 v63,r0,r5
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r7
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// bne cr6,0x83072c28
	if (!ctx.cr6.eq) goto loc_83072C28;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83072c28
	if (ctx.cr6.eq) goto loc_83072C28;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lvlx128 v60,r10,r29
	temp.u32 = ctx.r10.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mullw r7,r28,r8
	ctx.r7.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// vperm128 v58,v59,v62,v7
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvrx128 v57,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v56,v60,v57
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v57.u8)));
	// vcuxwfp128 v55,v58,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vperm128 v54,v56,v62,v7
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r30,r28,r3
	ctx.r30.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r3.s32);
	// vcuxwfp128 v53,v54,7
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v11,v55,v63
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v63.f32)));
	// add r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 + ctx.r25.u64;
	// vsubfp128 v52,v53,v63
	_mm_store_ps(ctx.v52.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v10,v52,v11
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v11.f32)));
loc_83072BD0:
	// vmaddfp v13,v10,v12,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// addi r9,r1,-176
	ctx.r9.s64 = ctx.r1.s64 + -176;
	// addi r15,r1,-160
	ctx.r15.s64 = ctx.r1.s64 + -160;
	// rlwinm r26,r7,22,10,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 22) & 0x3FFFFF;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 + ctx.r7.u64;
	// stvlx v13,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r11,r31
	ea = ctx.r11.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// stw r26,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r26.u32);
	// lvlx128 v51,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v51,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), 0xFF));
	// vadduws v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v50,v0,v61
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// lwz r26,-160(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// rlwinm r9,r26,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF;
	// vcuxwfp128 v12,v50,16
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v50.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83072c28
	if (!ctx.cr6.eq) goto loc_83072C28;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x83072bd0
	if (!ctx.cr0.eq) goto loc_83072BD0;
loc_83072C28:
	// subf r7,r11,r24
	ctx.r7.s64 = ctx.r24.s64 - ctx.r11.s64;
	// addi r27,r22,-1
	ctx.r27.s64 = ctx.r22.s64 + -1;
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// subfic r30,r8,1024
	ctx.xer.ca = ctx.r8.u32 <= 1024;
	ctx.r30.s64 = 1024 - ctx.r8.s64;
	// divwu r7,r5,r10
	ctx.r7.u32 = ctx.r5.u32 / ctx.r10.u32;
	// divwu r5,r30,r3
	ctx.r5.u32 = ctx.r30.u32 / ctx.r3.u32;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// twllei r3,0
	if (ctx.r3.u32 <= 0) __builtin_debugtrap();
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// blt cr6,0x83072c58
	if (ctx.cr6.lt) goto loc_83072C58;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
loc_83072C58:
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x83072d18
	if (ctx.cr6.gt) goto loc_83072D18;
	// mullw r7,r28,r8
	ctx.r7.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r28,r3
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r3.s32);
	// add r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 + ctx.r25.u64;
loc_83072C6C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// beq cr6,0x83072d18
	if (ctx.cr6.eq) goto loc_83072D18;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r5,r9,r29
	ctx.r5.u64 = ctx.r9.u64 + ctx.r29.u64;
	// li r30,1024
	ctx.r30.s64 = 1024;
	// dcbt r30,r5
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvlx128 v49,r9,r29
	temp.u32 = ctx.r9.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v48,r31,r5
	temp.u32 = ctx.r31.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// add r9,r30,r29
	ctx.r9.u64 = ctx.r30.u64 + ctx.r29.u64;
	// vor128 v47,v49,v48
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v48.u8)));
	// addi r26,r1,-176
	ctx.r26.s64 = ctx.r1.s64 + -176;
	// rlwinm r25,r7,22,10,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 22) & 0x3FFFFF;
	// lvlx128 v46,r30,r29
	temp.u32 = ctx.r30.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r1,-160
	ctx.r30.s64 = ctx.r1.s64 + -160;
	// vperm128 v45,v47,v62,v7
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lvrx128 v44,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// vor128 v43,v46,v44
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v44.u8)));
	// vcuxwfp128 v42,v45,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v45.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vperm128 v41,v43,v62,v7
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcuxwfp128 v40,v41,7
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v41.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v13,v42,v63
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v39,v40,v63
	_mm_store_ps(ctx.v39.f32, _mm_sub_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v11,v39,v13
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v11,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvlx v13,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r11,r31
	ea = ctx.r11.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// stw r25,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r25.u32);
	// lvlx128 v38,r0,r26
	temp.u32 = ctx.r26.u32;
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v38,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v38.u32), 0xFF));
	// vadduws v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v37,v0,v61
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// lwz r26,-160(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// rlwinm r9,r26,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF;
	// vcuxwfp128 v12,v37,16
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v37.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x83072c6c
	if (!ctx.cr6.gt) goto loc_83072C6C;
loc_83072D18:
	// stw r8,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r8.u32);
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x83072d28
	if (ctx.cr6.lt) goto loc_83072D28;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_83072D28:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83072d58
	if (ctx.cr6.eq) goto loc_83072D58;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83072d58
	if (ctx.cr6.eq) goto loc_83072D58;
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
loc_83072D48:
	// lbzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// stbx r5,r8,r6
	PPC_STORE_U8(ctx.r8.u32 + ctx.r6.u32, ctx.r5.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x83072d48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83072D48;
loc_83072D58:
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// subf r7,r18,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r18.s64;
	// subf r6,r8,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r8.s64;
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// stw r6,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r6.u32);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// lhz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// sth r8,0(r23)
	PPC_STORE_U16(ctx.r23.u32 + 0, ctx.r8.u16);
	// divwu r11,r5,r10
	ctx.r11.u32 = ctx.r5.u32 / ctx.r10.u32;
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r22.u32, ctx.xer);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r7,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r7.u16);
	// bne cr6,0x83072d9c
	if (!ctx.cr6.eq) goto loc_83072D9C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83072da4
	goto loc_83072DA4;
loc_83072D9C:
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_83072DA4:
	// stw r10,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x83072db8
	if (!ctx.cr6.eq) goto loc_83072DB8;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
loc_83072DB8:
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83072DCC"))) PPC_WEAK_FUNC(sub_83072DCC);
PPC_FUNC_IMPL(__imp__sub_83072DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83072DD0"))) PPC_WEAK_FUNC(sub_83072DD0);
PPC_FUNC_IMPL(__imp__sub_83072DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x83072DD8;
	__savegprlr_14(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83072dfc
	if (ctx.cr6.eq) goto loc_83072DFC;
loc_83072DE8:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83072de8
	if (!ctx.cr6.eq) goto loc_83072DE8;
loc_83072DFC:
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r8,24(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r10,28(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// addi r16,r6,24
	ctx.r16.s64 = ctx.r6.s64 + 24;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r30,r10,r9
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r7
	ctx.r29.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r17,r6,28
	ctx.r17.s64 = ctx.r6.s64 + 28;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
loc_83072E38:
	// dcbt r30,r29
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// bdnz 0x83072e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83072E38;
	// addi r20,r6,32
	ctx.r20.s64 = ctx.r6.s64 + 32;
	// lwz r30,36(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lhz r22,14(r3)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r7,r7,-6992
	ctx.r7.s64 = ctx.r7.s64 + -6992;
	// subf r19,r10,r5
	ctx.r19.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lvlx128 v63,r0,r20
	temp.u32 = ctx.r20.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// mullw r31,r9,r19
	ctx.r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r19.s32);
	// vspltw128 v0,v63,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// lwz r10,18400(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18400);
	// lvx128 v59,r0,r7
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vand128 v62,v0,v59
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcuxwfp128 v13,v62,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r31,r10,31
	ctx.r31.u64 = ctx.r10.u32 & 0x1;
	// lis r5,-31958
	ctx.r5.s64 = -2094399488;
	// add r24,r7,r11
	ctx.r24.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r23,r3,14
	ctx.r23.s64 = ctx.r3.s64 + 14;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r7,r5,18384
	ctx.r7.s64 = ctx.r5.s64 + 18384;
	// bne cr6,0x83072ebc
	if (!ctx.cr6.eq) goto loc_83072EBC;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,18400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18400, ctx.r10.u32);
	// stvx128 v62,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x83072ec0
	goto loc_83072EC0;
loc_83072EBC:
	// lvx128 v62,r0,r7
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
loc_83072EC0:
	// lwz r7,44(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// addi r21,r6,44
	ctx.r21.s64 = ctx.r6.s64 + 44;
	// lwz r31,48(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// rlwinm r25,r30,10,0,21
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 10) & 0xFFFFFC00;
	// subfic r10,r7,1024
	ctx.xer.ca = ctx.r7.u32 <= 1024;
	ctx.r10.s64 = 1024 - ctx.r7.s64;
	// lwz r8,40(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// divwu r10,r10,r31
	ctx.r10.u32 = ctx.r10.u32 / ctx.r31.u32;
	// subf r28,r30,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r30.s64;
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r10.u32, ctx.xer);
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// blt cr6,0x83072ef4
	if (ctx.cr6.lt) goto loc_83072EF4;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_83072EF4:
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lwz r26,-176(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r5,-32232
	ctx.r5.s64 = -2112356352;
	// addi r3,r10,-7040
	ctx.r3.s64 = ctx.r10.s64 + -7040;
	// addi r30,r8,15600
	ctx.r30.s64 = ctx.r8.s64 + 15600;
	// addi r5,r5,-7056
	ctx.r5.s64 = ctx.r5.s64 + -7056;
	// rlwinm r10,r26,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF;
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v6,r0,r3
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lvx128 v63,r0,r30
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r5
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// bne cr6,0x83072ff8
	if (!ctx.cr6.eq) goto loc_83072FF8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83072ff8
	if (ctx.cr6.eq) goto loc_83072FF8;
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lvlx128 v61,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r9,r29
	temp.u32 = ctx.r9.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mullw r5,r28,r7
	ctx.r5.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// vperm128 v58,v61,v62,v7
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v57,v61,v62,v6
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvrx128 v56,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v61,v60,v56
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v56.u8)));
	// vcuxwfp128 v55,v58,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v54,v57,7
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vperm128 v53,v61,v62,v7
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v52,v61,v62,v6
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r30,r28,r31
	ctx.r30.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r31.s32);
	// vcuxwfp128 v51,v53,7
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v50,v52,7
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v52.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v12,v55,v63
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v11,v54,v63
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v63.f32)));
	// add r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 + ctx.r25.u64;
	// vsubfp128 v49,v51,v63
	_mm_store_ps(ctx.v49.f32, _mm_sub_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v48,v50,v63
	_mm_store_ps(ctx.v48.f32, _mm_sub_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v9,v49,v12
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v8,v48,v11
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v11.f32)));
loc_83072F90:
	// vmaddfp v10,v9,v13,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// vmaddfp v13,v8,v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// add r5,r30,r5
	ctx.r5.u64 = ctx.r30.u64 + ctx.r5.u64;
	// addi r14,r1,-176
	ctx.r14.s64 = ctx.r1.s64 + -176;
	// addi r26,r1,-192
	ctx.r26.s64 = ctx.r1.s64 + -192;
	// rlwinm r15,r5,22,10,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3FFFFF;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// stvlx v10,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvrx v10,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v10.u8[i]);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stvlx v13,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// stw r15,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r15.u32);
	// lvlx128 v47,r0,r26
	temp.u32 = ctx.r26.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v47,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), 0xFF));
	// vadduws v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// stvx128 v0,r0,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v46,v0,v59
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// lwz r26,-176(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// rlwinm r10,r26,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF;
	// vcuxwfp128 v13,v46,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v46.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83072ff8
	if (!ctx.cr6.eq) goto loc_83072FF8;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x83072f90
	if (!ctx.cr0.eq) goto loc_83072F90;
loc_83072FF8:
	// subf r5,r11,r24
	ctx.r5.s64 = ctx.r24.s64 - ctx.r11.s64;
	// addi r27,r22,-1
	ctx.r27.s64 = ctx.r22.s64 + -1;
	// srawi r3,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 2;
	// subfic r30,r7,1024
	ctx.xer.ca = ctx.r7.u32 <= 1024;
	ctx.r30.s64 = 1024 - ctx.r7.s64;
	// divwu r5,r3,r9
	ctx.r5.u32 = ctx.r3.u32 / ctx.r9.u32;
	// divwu r3,r30,r31
	ctx.r3.u32 = ctx.r30.u32 / ctx.r31.u32;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// blt cr6,0x83073028
	if (ctx.cr6.lt) goto loc_83073028;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_83073028:
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x83073114
	if (ctx.cr6.gt) goto loc_83073114;
	// mullw r5,r28,r7
	ctx.r5.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// mullw r28,r28,r31
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r31.s32);
	// add r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 + ctx.r25.u64;
loc_8307303C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// beq cr6,0x83073114
	if (ctx.cr6.eq) goto loc_83073114;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// li r30,1024
	ctx.r30.s64 = 1024;
	// dcbt r30,r3
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lvlx128 v45,r10,r29
	temp.u32 = ctx.r10.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v44,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// vor128 v61,v45,v44
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v44.u8)));
	// addi r26,r1,-192
	ctx.r26.s64 = ctx.r1.s64 + -192;
	// rlwinm r25,r5,22,10,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3FFFFF;
	// lvlx128 v43,r30,r29
	temp.u32 = ctx.r30.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r1,-176
	ctx.r30.s64 = ctx.r1.s64 + -176;
	// vperm128 v42,v61,v62,v7
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvrx128 v41,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vperm128 v40,v61,v62,v6
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vor128 v60,v43,v41
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v41.u8)));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// vcuxwfp128 v39,v42,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v42.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v38,v40,7
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v40.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vperm128 v37,v60,v62,v7
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v36,v60,v62,v6
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vcuxwfp128 v35,v37,7
	_mm_store_ps(ctx.v35.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v37.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v34,v36,7
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v36.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v12,v39,v63
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v11,v38,v63
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v33,v35,v63
	_mm_store_ps(ctx.v33.f32, _mm_sub_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v32,v34,v63
	_mm_store_ps(ctx.v32.f32, _mm_sub_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v9,v33,v12
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v10,v32,v11
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v12,v9,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v10,v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// stvlx v12,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvrx v12,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stvlx v13,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// stw r25,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r25.u32);
	// lvlx128 v61,r0,r26
	temp.u32 = ctx.r26.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v61,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vadduws v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v60,v0,v59
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// lwz r26,-176(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// rlwinm r10,r26,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// vcuxwfp128 v13,v60,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// ble cr6,0x8307303c
	if (!ctx.cr6.gt) goto loc_8307303C;
loc_83073114:
	// stw r7,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r7.u32);
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x83073124
	if (ctx.cr6.lt) goto loc_83073124;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_83073124:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83073154
	if (ctx.cr6.eq) goto loc_83073154;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83073154
	if (ctx.cr6.eq) goto loc_83073154;
	// mullw r7,r9,r10
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
loc_83073144:
	// lbzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// stbx r5,r8,r6
	PPC_STORE_U8(ctx.r8.u32 + ctx.r6.u32, ctx.r5.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x83073144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83073144;
loc_83073154:
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// subf r7,r18,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r18.s64;
	// subf r6,r8,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r8.s64;
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// stw r6,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r6.u32);
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// lhz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// subf r8,r10,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r10.s64;
	// divwu r11,r5,r9
	ctx.r11.u32 = ctx.r5.u32 / ctx.r9.u32;
	// sth r8,0(r23)
	PPC_STORE_U16(ctx.r23.u32 + 0, ctx.r8.u16);
	// lwz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r7,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r7.u16);
	// bne cr6,0x83073198
	if (!ctx.cr6.eq) goto loc_83073198;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830731a0
	goto loc_830731A0;
loc_83073198:
	// lwz r9,0(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_830731A0:
	// stw r10,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x830731b4
	if (!ctx.cr6.eq) goto loc_830731B4;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_830731B4:
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830731C8"))) PPC_WEAK_FUNC(sub_830731C8);
PPC_FUNC_IMPL(__imp__sub_830731C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x830731D0;
	__savegprlr_22(ctx, base);
	// lwz r10,28(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// addi r25,r6,28
	ctx.r25.s64 = ctx.r6.s64 + 28;
	// lhz r26,14(r3)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// addi r27,r3,14
	ctx.r27.s64 = ctx.r3.s64 + 14;
	// subf r24,r10,r5
	ctx.r24.s64 = ctx.r5.s64 - ctx.r10.s64;
	// cmplw cr6,r24,r26
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r26.u32, ctx.xer);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// blt cr6,0x830731f4
	if (ctx.cr6.lt) goto loc_830731F4;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_830731F4:
	// lhz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// addi r28,r6,24
	ctx.r28.s64 = ctx.r6.s64 + 24;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r30,-1
	ctx.r3.s64 = ctx.r30.s64 + -1;
	// add r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 + ctx.r7.u64;
	// li r8,0
	ctx.r8.s64 = 0;
loc_83073234:
	// dcbt r8,r11
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// bdnz 0x83073234
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83073234;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,-31958
	ctx.r5.s64 = -2094399488;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18416
	ctx.r3.s64 = ctx.r7.s64 + 18416;
	// lwz r7,18432(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18432);
	// lhz r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// clrlwi r29,r7,31
	ctx.r29.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// sth r31,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r31.u16);
	// sth r8,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r8.u16);
	// bne cr6,0x83073288
	if (!ctx.cr6.eq) goto loc_83073288;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// ori r8,r7,1
	ctx.r8.u64 = ctx.r7.u64 | 1;
	// stw r8,18432(r5)
	PPC_STORE_U32(ctx.r5.u32 + 18432, ctx.r8.u32);
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x8307328c
	goto loc_8307328C;
loc_83073288:
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
loc_8307328C:
	// rlwinm r5,r30,0,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFF8;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r7,r30,2,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFE0;
	// subf r29,r5,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r5.s64;
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83073418
	if (!ctx.cr6.eq) goto loc_83073418;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83073354
	if (!ctx.cr6.eq) goto loc_83073354;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x830735c4
	if (!ctx.cr6.lt) goto loc_830735C4;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r3,-32232
	ctx.r3.s64 = -2112356352;
	// addi r8,r8,-7072
	ctx.r8.s64 = ctx.r8.s64 + -7072;
	// addi r7,r7,-6960
	ctx.r7.s64 = ctx.r7.s64 + -6960;
	// addi r3,r3,-6976
	ctx.r3.s64 = ctx.r3.s64 + -6976;
	// lvx128 v62,r0,r8
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r7
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
loc_830732E0:
	// li r8,1024
	ctx.r8.s64 = 1024;
	// dcbt r8,r11
	// lvx128 v61,r0,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vperm128 v60,v61,v63,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v59,v61,v63,v7
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v61,r0,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vsraw128 v58,v60,v62
	ctx.v58.s32[0] = ctx.v60.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v58.s32[1] = ctx.v60.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v58.s32[2] = ctx.v60.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v58.s32[3] = ctx.v60.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vsraw128 v57,v59,v62
	ctx.v57.s32[0] = ctx.v59.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v57.s32[1] = ctx.v59.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v57.s32[2] = ctx.v59.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v57.s32[3] = ctx.v59.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vperm128 v56,v61,v63,v0
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v55,v61,v63,v7
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// vcsxwfp128 v54,v58,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v53,v57,15
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsraw128 v52,v56,v62
	ctx.v52.s32[0] = ctx.v56.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v52.s32[1] = ctx.v56.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v52.s32[2] = ctx.v56.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v52.s32[3] = ctx.v56.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vsraw128 v51,v55,v62
	ctx.v51.s32[0] = ctx.v55.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v51.s32[1] = ctx.v55.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v51.s32[2] = ctx.v55.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v51.s32[3] = ctx.v55.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vcsxwfp128 v50,v52,15
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v52.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v49,v51,15
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// stvx128 v54,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v53,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stvx128 v50,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v49,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// blt cr6,0x830732e0
	if (ctx.cr6.lt) goto loc_830732E0;
	// b 0x830735c4
	goto loc_830735C4;
loc_83073354:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x83073418
	if (!ctx.cr6.eq) goto loc_83073418;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x830735c4
	if (!ctx.cr6.lt) goto loc_830735C4;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// lis r31,-32232
	ctx.r31.s64 = -2112356352;
	// lis r23,-32232
	ctx.r23.s64 = -2112356352;
	// addi r22,r8,-7072
	ctx.r22.s64 = ctx.r8.s64 + -7072;
	// addi r31,r31,-6960
	ctx.r31.s64 = ctx.r31.s64 + -6960;
	// addi r23,r23,-6976
	ctx.r23.s64 = ctx.r23.s64 + -6976;
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lvx128 v62,r0,r22
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v7,r0,r31
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
loc_83073394:
	// li r31,1024
	ctx.r31.s64 = 1024;
	// dcbt r31,r11
	// lvx128 v61,r0,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r31,r3,r7
	ctx.r31.u64 = ctx.r3.u64 + ctx.r7.u64;
	// vperm128 v48,v61,v63,v0
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v47,v61,v63,v7
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v61,r0,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vsraw128 v46,v48,v62
	ctx.v46.s32[0] = ctx.v48.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v46.s32[1] = ctx.v48.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v46.s32[2] = ctx.v48.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v46.s32[3] = ctx.v48.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vperm128 v45,v61,v63,v0
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsraw128 v44,v47,v62
	ctx.v44.s32[0] = ctx.v47.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v44.s32[1] = ctx.v47.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v44.s32[2] = ctx.v47.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v44.s32[3] = ctx.v47.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vperm128 v43,v61,v63,v7
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// vcsxwfp128 v42,v46,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v46.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsraw128 v41,v45,v62
	ctx.v41.s32[0] = ctx.v45.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v41.s32[1] = ctx.v45.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v41.s32[2] = ctx.v45.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v41.s32[3] = ctx.v45.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vcsxwfp128 v40,v44,15
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v44.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsraw128 v39,v43,v62
	ctx.v39.s32[0] = ctx.v43.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v39.s32[1] = ctx.v43.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v39.s32[2] = ctx.v43.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v39.s32[3] = ctx.v43.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vcsxwfp128 v38,v41,15
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v41.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v37,v39,15
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v39.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// stvlx128 v42,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvrx128 v42,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v42.u8[i]);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stvlx128 v40,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// stvrx128 v40,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v40.u8[i]);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stvlx128 v38,r3,r7
	ea = ctx.r3.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvrx128 v38,r31,r8
	ea = ctx.r31.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v38.u8[i]);
	// stvlx128 v37,r0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvrx128 v37,r7,r8
	ea = ctx.r7.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v37.u8[i]);
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// blt cr6,0x83073394
	if (ctx.cr6.lt) goto loc_83073394;
	// b 0x830735c4
	goto loc_830735C4;
loc_83073418:
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x830734e8
	if (!ctx.cr6.eq) goto loc_830734E8;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x830735c4
	if (!ctx.cr6.lt) goto loc_830735C4;
	// subf r7,r11,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lis r5,-32232
	ctx.r5.s64 = -2112356352;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lis r3,-32232
	ctx.r3.s64 = -2112356352;
	// rlwinm r7,r7,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// addi r5,r5,-6960
	ctx.r5.s64 = ctx.r5.s64 + -6960;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r3,-6976
	ctx.r3.s64 = ctx.r3.s64 + -6976;
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v7,r0,r5
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r7,r7,-7072
	ctx.r7.s64 = ctx.r7.s64 + -7072;
	// lvx128 v62,r0,r7
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
loc_83073468:
	// li r7,1024
	ctx.r7.s64 = 1024;
	// dcbt r7,r11
	// lvrx128 v36,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lvlx128 v35,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// vor128 v61,v35,v36
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v36.u8)));
	// lvlx128 v34,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v33,r8,r7
	temp.u32 = ctx.r8.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v33.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vperm128 v32,v61,v63,v0
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v60,v61,v63,v7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vor128 v61,v34,v33
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v33.u8)));
	// vsraw128 v59,v32,v62
	ctx.v59.s32[0] = ctx.v32.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v59.s32[1] = ctx.v32.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v59.s32[2] = ctx.v32.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v59.s32[3] = ctx.v32.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vsraw128 v58,v60,v62
	ctx.v58.s32[0] = ctx.v60.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v58.s32[1] = ctx.v60.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v58.s32[2] = ctx.v60.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v58.s32[3] = ctx.v60.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vperm128 v57,v61,v63,v0
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v56,v61,v63,v7
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v55,v59,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v54,v58,15
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsraw128 v53,v57,v62
	ctx.v53.s32[0] = ctx.v57.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v53.s32[1] = ctx.v57.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v53.s32[2] = ctx.v57.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v53.s32[3] = ctx.v57.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vsraw128 v52,v56,v62
	ctx.v52.s32[0] = ctx.v56.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v52.s32[1] = ctx.v56.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v52.s32[2] = ctx.v56.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v52.s32[3] = ctx.v56.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vcsxwfp128 v51,v53,15
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v50,v52,15
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v52.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// stvx128 v55,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v54,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stvx128 v51,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v50,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x83073468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83073468;
	// b 0x830735c4
	goto loc_830735C4;
loc_830734E8:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x830735c4
	if (!ctx.cr6.lt) goto loc_830735C4;
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lis r23,-32232
	ctx.r23.s64 = -2112356352;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lis r22,-32232
	ctx.r22.s64 = -2112356352;
	// rlwinm r31,r5,27,5,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// addi r23,r23,-6960
	ctx.r23.s64 = ctx.r23.s64 + -6960;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r22,r22,-6976
	ctx.r22.s64 = ctx.r22.s64 + -6976;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lvx128 v7,r0,r23
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// lis r31,-32232
	ctx.r31.s64 = -2112356352;
	// lvx128 v0,r0,r22
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// subf r3,r10,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r31,r31,-7072
	ctx.r31.s64 = ctx.r31.s64 + -7072;
	// lvx128 v62,r0,r31
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
loc_83073538:
	// li r31,1024
	ctx.r31.s64 = 1024;
	// dcbt r31,r11
	// lvrx128 v49,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r31,r5,r7
	ctx.r31.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lvlx128 v48,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// vor128 v61,v48,v49
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// lvlx128 v47,r5,r7
	temp.u32 = ctx.r5.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v46,r8,r31
	temp.u32 = ctx.r8.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r31,r3,r7
	ctx.r31.u64 = ctx.r3.u64 + ctx.r7.u64;
	// vperm128 v45,v61,v63,v0
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v44,v61,v63,v7
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vor128 v61,v47,v46
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v46.u8)));
	// vsraw128 v43,v45,v62
	ctx.v43.s32[0] = ctx.v45.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v43.s32[1] = ctx.v45.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v43.s32[2] = ctx.v45.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v43.s32[3] = ctx.v45.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vperm128 v42,v61,v63,v0
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsraw128 v41,v44,v62
	ctx.v41.s32[0] = ctx.v44.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v41.s32[1] = ctx.v44.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v41.s32[2] = ctx.v44.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v41.s32[3] = ctx.v44.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vperm128 v40,v61,v63,v7
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v39,v43,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v43.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsraw128 v38,v42,v62
	ctx.v38.s32[0] = ctx.v42.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v38.s32[1] = ctx.v42.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v38.s32[2] = ctx.v42.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v38.s32[3] = ctx.v42.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vcsxwfp128 v37,v41,15
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v41.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsraw128 v36,v40,v62
	ctx.v36.s32[0] = ctx.v40.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v36.s32[1] = ctx.v40.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v36.s32[2] = ctx.v40.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v36.s32[3] = ctx.v40.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vcsxwfp128 v35,v38,15
	_mm_store_ps(ctx.v35.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v38.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v34,v36,15
	_mm_store_ps(ctx.v34.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v36.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// stvlx128 v39,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvrx128 v39,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v39.u8[i]);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stvlx128 v37,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvrx128 v37,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v37.u8[i]);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stvlx128 v35,r0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvrx128 v35,r7,r8
	ea = ctx.r7.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v35.u8[i]);
	// stvlx128 v34,r3,r7
	ea = ctx.r3.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// stvrx128 v34,r31,r8
	ea = ctx.r31.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v34.u8[i]);
	// bdnz 0x83073538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83073538;
loc_830735C4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83073628
	if (ctx.cr6.eq) goto loc_83073628;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lfs f0,18084(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18084);
	ctx.f0.f64 = double(temp.f32);
loc_830735E0:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhzu r3,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// std r8,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// lfd f13,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// std r7,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r7.u64);
	// lfd f12,-104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfsu f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsu f6,4(r9)
	temp.f32 = float(ctx.f6.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x830735e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830735E0;
loc_83073628:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// sth r9,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r9.u16);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// sth r7,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r7.u16);
	// stw r10,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r10.u32);
	// bne cr6,0x83073658
	if (!ctx.cr6.eq) goto loc_83073658;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83073660
	goto loc_83073660;
loc_83073658:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_83073660:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x83073674
	if (!ctx.cr6.eq) goto loc_83073674;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_83073674:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83073688"))) PPC_WEAK_FUNC(sub_83073688);
PPC_FUNC_IMPL(__imp__sub_83073688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x83073690;
	__savegprlr_21(ctx, base);
	// lwz r10,28(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// addi r26,r6,28
	ctx.r26.s64 = ctx.r6.s64 + 28;
	// lhz r27,14(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// addi r28,r3,14
	ctx.r28.s64 = ctx.r3.s64 + 14;
	// subf r25,r10,r5
	ctx.r25.s64 = ctx.r5.s64 - ctx.r10.s64;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// blt cr6,0x830736b4
	if (ctx.cr6.lt) goto loc_830736B4;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_830736B4:
	// lhz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// addi r29,r6,24
	ctx.r29.s64 = ctx.r6.s64 + 24;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r31,-1
	ctx.r3.s64 = ctx.r31.s64 + -1;
	// add r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 + ctx.r7.u64;
	// li r8,0
	ctx.r8.s64 = 0;
loc_830736F4:
	// dcbt r8,r11
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// bdnz 0x830736f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830736F4;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r5,-31958
	ctx.r5.s64 = -2094399488;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18448
	ctx.r3.s64 = ctx.r7.s64 + 18448;
	// lwz r7,18464(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18464);
	// lbz r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r8,1(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// clrlwi r24,r7,31
	ctx.r24.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stb r30,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r30.u8);
	// stb r8,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r8.u8);
	// bne cr6,0x83073748
	if (!ctx.cr6.eq) goto loc_83073748;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// ori r8,r7,1
	ctx.r8.u64 = ctx.r7.u64 | 1;
	// stw r8,18464(r5)
	PPC_STORE_U32(ctx.r5.u32 + 18464, ctx.r8.u32);
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x8307374c
	goto loc_8307374C;
loc_83073748:
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
loc_8307374C:
	// clrlwi r7,r11,28
	ctx.r7.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r5,r31,0,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r8,r31,1,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFF0;
	// subf r30,r5,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r5.s64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83073918
	if (!ctx.cr6.eq) goto loc_83073918;
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x83073834
	if (!ctx.cr6.eq) goto loc_83073834;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x83073ad0
	if (!ctx.cr6.lt) goto loc_83073AD0;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lis r5,-32232
	ctx.r5.s64 = -2112356352;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// lis r3,-32232
	ctx.r3.s64 = -2112356352;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lis r24,-32232
	ctx.r24.s64 = -2112356352;
	// addi r7,r7,-6896
	ctx.r7.s64 = ctx.r7.s64 + -6896;
	// addi r5,r5,-6912
	ctx.r5.s64 = ctx.r5.s64 + -6912;
	// addi r3,r3,-6928
	ctx.r3.s64 = ctx.r3.s64 + -6928;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r24,r24,-6944
	ctx.r24.s64 = ctx.r24.s64 + -6944;
	// addi r8,r8,15600
	ctx.r8.s64 = ctx.r8.s64 + 15600;
	// lvx128 v5,r0,r7
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r5
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r3
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r0,r8
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
loc_830737CC:
	// li r8,1024
	ctx.r8.s64 = 1024;
	// dcbt r8,r11
	// lvx128 v62,r0,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vperm128 v60,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v59,v62,v63,v7
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v58,v62,v63,v6
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v57,v62,v63,v5
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vcuxwfp128 v56,v60,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v55,v59,7
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v54,v58,7
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v53,v57,7
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v52,v56,v61
	_mm_store_ps(ctx.v52.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v51,v55,v61
	_mm_store_ps(ctx.v51.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v50,v54,v61
	_mm_store_ps(ctx.v50.f32, _mm_sub_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v49,v53,v61
	_mm_store_ps(ctx.v49.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v61.f32)));
	// stvx128 v52,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v51,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stvx128 v50,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v49,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x830737cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830737CC;
	// b 0x83073ad0
	goto loc_83073AD0;
loc_83073834:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83073918
	if (!ctx.cr6.eq) goto loc_83073918;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x83073ad0
	if (!ctx.cr6.lt) goto loc_83073AD0;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lis r3,-32232
	ctx.r3.s64 = -2112356352;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lis r24,-32232
	ctx.r24.s64 = -2112356352;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// lis r23,-32232
	ctx.r23.s64 = -2112356352;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lis r22,-32232
	ctx.r22.s64 = -2112356352;
	// addi r3,r3,-6896
	ctx.r3.s64 = ctx.r3.s64 + -6896;
	// addi r24,r24,-6912
	ctx.r24.s64 = ctx.r24.s64 + -6912;
	// addi r23,r23,-6928
	ctx.r23.s64 = ctx.r23.s64 + -6928;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r22,r22,-6944
	ctx.r22.s64 = ctx.r22.s64 + -6944;
	// addi r8,r8,15600
	ctx.r8.s64 = ctx.r8.s64 + 15600;
	// lvx128 v5,r0,r3
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r24
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
	// lvx128 v7,r0,r23
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lvx128 v0,r0,r22
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r0,r8
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r8,16
	ctx.r8.s64 = 16;
loc_830738A0:
	// li r3,1024
	ctx.r3.s64 = 1024;
	// dcbt r3,r11
	// lvx128 v62,r0,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r3,r5,r7
	ctx.r3.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vperm128 v48,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v47,v62,v63,v7
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v46,v62,v63,v6
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v45,v62,v63,v5
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vcuxwfp128 v44,v48,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v43,v47,7
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v47.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v42,v46,7
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v46.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v41,v45,7
	_mm_store_ps(ctx.v41.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v45.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v40,v44,v61
	_mm_store_ps(ctx.v40.f32, _mm_sub_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v39,v43,v61
	_mm_store_ps(ctx.v39.f32, _mm_sub_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v38,v42,v61
	_mm_store_ps(ctx.v38.f32, _mm_sub_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v37,v41,v61
	_mm_store_ps(ctx.v37.f32, _mm_sub_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v61.f32)));
	// stvlx128 v40,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// stvrx128 v40,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v40.u8[i]);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stvlx128 v39,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvrx128 v39,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v39.u8[i]);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stvlx128 v38,r5,r7
	ea = ctx.r5.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvrx128 v38,r3,r8
	ea = ctx.r3.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v38.u8[i]);
	// stvlx128 v37,r0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvrx128 v37,r7,r8
	ea = ctx.r7.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v37.u8[i]);
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// bdnz 0x830738a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830738A0;
	// b 0x83073ad0
	goto loc_83073AD0;
loc_83073918:
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x830739f0
	if (!ctx.cr6.eq) goto loc_830739F0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x83073ad0
	if (!ctx.cr6.lt) goto loc_83073AD0;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lis r5,-32232
	ctx.r5.s64 = -2112356352;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lis r3,-32232
	ctx.r3.s64 = -2112356352;
	// rlwinm r7,r7,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// lis r24,-32232
	ctx.r24.s64 = -2112356352;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lis r23,-32232
	ctx.r23.s64 = -2112356352;
	// addi r5,r5,-6896
	ctx.r5.s64 = ctx.r5.s64 + -6896;
	// addi r3,r3,-6912
	ctx.r3.s64 = ctx.r3.s64 + -6912;
	// addi r24,r24,-6928
	ctx.r24.s64 = ctx.r24.s64 + -6928;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// addi r23,r23,-6944
	ctx.r23.s64 = ctx.r23.s64 + -6944;
	// addi r7,r7,15600
	ctx.r7.s64 = ctx.r7.s64 + 15600;
	// lvx128 v5,r0,r5
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r3
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v7,r0,r24
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r0,r7
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
loc_83073980:
	// li r7,1024
	ctx.r7.s64 = 1024;
	// dcbt r7,r11
	// lvrx128 v36,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v35,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vor128 v62,v35,v36
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v36.u8)));
	// vperm128 v34,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v33,v62,v63,v7
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v32,v62,v63,v6
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v62,v62,v63,v5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vcuxwfp128 v60,v34,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v34.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v59,v33,7
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v33.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v58,v32,7
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v32.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v57,v62,7
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v56,v60,v61
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v55,v59,v61
	_mm_store_ps(ctx.v55.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v54,v58,v61
	_mm_store_ps(ctx.v54.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v53,v57,v61
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v61.f32)));
	// stvx128 v56,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v55,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stvx128 v54,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v53,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x83073980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83073980;
	// b 0x83073ad0
	goto loc_83073AD0;
loc_830739F0:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x83073ad0
	if (!ctx.cr6.lt) goto loc_83073AD0;
	// subf r5,r11,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lis r24,-32232
	ctx.r24.s64 = -2112356352;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lis r23,-32232
	ctx.r23.s64 = -2112356352;
	// rlwinm r3,r5,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// lis r22,-32232
	ctx.r22.s64 = -2112356352;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lis r21,-32232
	ctx.r21.s64 = -2112356352;
	// addi r24,r24,-6896
	ctx.r24.s64 = ctx.r24.s64 + -6896;
	// addi r23,r23,-6912
	ctx.r23.s64 = ctx.r23.s64 + -6912;
	// addi r22,r22,-6928
	ctx.r22.s64 = ctx.r22.s64 + -6928;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// addi r21,r21,-6944
	ctx.r21.s64 = ctx.r21.s64 + -6944;
	// addi r3,r3,15600
	ctx.r3.s64 = ctx.r3.s64 + 15600;
	// lvx128 v5,r0,r24
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r23
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v7,r0,r22
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lvx128 v0,r0,r21
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r0,r3
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
loc_83073A54:
	// li r3,1024
	ctx.r3.s64 = 1024;
	// dcbt r3,r11
	// lvrx128 v52,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lvlx128 v51,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vor128 v62,v51,v52
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v52.u8)));
	// vperm128 v50,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v49,v62,v63,v7
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v48,v62,v63,v6
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v47,v62,v63,v5
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vcuxwfp128 v46,v50,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v50.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v45,v49,7
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v49.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v44,v48,7
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v43,v47,7
	_mm_store_ps(ctx.v43.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v47.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v42,v46,v61
	_mm_store_ps(ctx.v42.f32, _mm_sub_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v41,v45,v61
	_mm_store_ps(ctx.v41.f32, _mm_sub_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v40,v44,v61
	_mm_store_ps(ctx.v40.f32, _mm_sub_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v39,v43,v61
	_mm_store_ps(ctx.v39.f32, _mm_sub_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v61.f32)));
	// stvlx128 v42,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvrx128 v42,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v42.u8[i]);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stvlx128 v41,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvrx128 v41,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v41.u8[i]);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stvlx128 v40,r7,r5
	ea = ctx.r7.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// stvrx128 v40,r3,r8
	ea = ctx.r3.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v40.u8[i]);
	// stvlx128 v39,r0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvrx128 v39,r7,r8
	ea = ctx.r7.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v39.u8[i]);
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// bdnz 0x83073a54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83073A54;
loc_83073AD0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83073b38
	if (ctx.cr6.eq) goto loc_83073B38;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lfs f13,24436(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,14224(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14224);
	ctx.f0.f64 = double(temp.f32);
loc_83073AF4:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r5,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r5.u64);
	// lfd f12,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// std r7,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r7.u64);
	// lfd f11,-104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmsubs f6,f8,f0,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfsu f6,4(r10)
	temp.f32 = float(ctx.f6.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmsubs f5,f7,f0,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfsu f5,4(r9)
	temp.f32 = float(ctx.f5.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83073af4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83073AF4;
loc_83073B38:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// subf r9,r31,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// sth r9,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r9.u16);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// sth r7,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r7.u16);
	// stw r10,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r10.u32);
	// bne cr6,0x83073b68
	if (!ctx.cr6.eq) goto loc_83073B68;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83073b70
	goto loc_83073B70;
loc_83073B68:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_83073B70:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x83073b84
	if (!ctx.cr6.eq) goto loc_83073B84;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_83073B84:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83073B98"))) PPC_WEAK_FUNC(sub_83073B98);
PPC_FUNC_IMPL(__imp__sub_83073B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x83073BA0;
	__savegprlr_20(ctx, base);
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r10,36(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// addi r25,r6,32
	ctx.r25.s64 = ctx.r6.s64 + 32;
	// ori r29,r9,65535
	ctx.r29.u64 = ctx.r9.u64 | 65535;
	// lwz r30,28(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lhz r26,14(r3)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// subf r23,r30,r5
	ctx.r23.s64 = ctx.r5.s64 - ctx.r30.s64;
	// add r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r24,r6,28
	ctx.r24.s64 = ctx.r6.s64 + 28;
	// divwu r28,r7,r10
	ctx.r28.u32 = ctx.r7.u32 / ctx.r10.u32;
	// addi r27,r3,14
	ctx.r27.s64 = ctx.r3.s64 + 14;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// rlwinm r31,r11,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r23,r28
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x83073bec
	if (!ctx.cr6.lt) goto loc_83073BEC;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_83073BEC:
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r21,24(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r22,r6,24
	ctx.r22.s64 = ctx.r6.s64 + 24;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r9,r21,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_83073C10:
	// dcbt r8,r9
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// bdnz 0x83073c10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83073C10;
	// lis r21,-32247
	ctx.r21.s64 = -2113339392;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lfs f0,14232(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 14232);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x83073c8c
	if (ctx.cr6.eq) goto loc_83073C8C;
	// lhz r31,2(r9)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// rlwinm r30,r3,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// extsh r3,r31
	ctx.r3.s64 = ctx.r31.s16;
loc_83073C50:
	// subf r31,r5,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r5.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r7,r31,r7
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// rlwinm r31,r11,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// extsw r21,r7
	ctx.r21.s64 = ctx.r7.s32;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// std r21,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r21.u64);
	// lfd f13,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x83073c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83073C50;
loc_83073C8C:
	// rlwinm r3,r26,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// subf r5,r28,r23
	ctx.r5.s64 = ctx.r23.s64 - ctx.r28.s64;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// divwu r3,r3,r10
	ctx.r3.u32 = ctx.r3.u32 / ctx.r10.u32;
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x83073cb8
	if (ctx.cr6.lt) goto loc_83073CB8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83073CB8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x83073e30
	if (ctx.cr6.lt) goto loc_83073E30;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r29.u32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r29,r1,-176
	ctx.r29.s64 = ctx.r1.s64 + -176;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r21,r10,r11
	ctx.r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r7,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r7.u32);
	// addi r5,r1,-144
	ctx.r5.s64 = ctx.r1.s64 + -144;
	// stw r21,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r21.u32);
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// stw r3,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r3.u32);
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v62,r0,r31
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r29,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r29.u32);
	// addi r29,r1,-160
	ctx.r29.s64 = ctx.r1.s64 + -160;
	// stw r31,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r31.u32);
	// lvx128 v61,r0,r5
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r0,r7
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltw128 v62,v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// lvx128 v59,r0,r29
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vspltw128 v63,v59,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vand128 v58,v0,v63
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// rlwinm r7,r30,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r5,r30,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFC;
	// vspltw128 v9,v61,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// vspltw128 v8,v60,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// subf r5,r5,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r5.s64;
	// vsrw128 v13,v0,v62
	ctx.v13.u32[0] = ctx.v0.u32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v13.u32[1] = ctx.v0.u32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v13.u32[2] = ctx.v0.u32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v13.u32[3] = ctx.v0.u32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vcuxwfp128 v11,v58,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// beq cr6,0x83073e28
	if (ctx.cr6.eq) goto loc_83073E28;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_83073D64:
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// vadduws v13,v13,v13
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// li r29,1024
	ctx.r29.s64 = 1024;
	// vadduws v12,v13,v8
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,-144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stvx128 v12,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r29,r7
	// lvlx v10,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r11,-148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -148);
	// vadduws v0,v0,v9
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// lwz r7,-156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// lwz r31,-152(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// lwz r29,-160(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// lwz r21,-132(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -132);
	// vand128 v57,v0,v63
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// lvlx v7,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r20,-140(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r11,-136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -136);
	// lvlx v6,r7,r9
	temp.u32 = ctx.r7.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v5,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsrw128 v13,v0,v62
	ctx.v13.u32[0] = ctx.v0.u32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v13.u32[1] = ctx.v0.u32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v13.u32[2] = ctx.v0.u32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v13.u32[3] = ctx.v0.u32[3] >> (ctx.v62.u8[12] & 0x1F);
	// lvlx v4,r29,r9
	temp.u32 = ctx.r29.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghh v3,v6,v7
	_mm_store_si128((__m128i*)ctx.v3.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v7.u16), _mm_load_si128((__m128i*)ctx.v6.u16)));
	// lvlx v2,r21,r9
	temp.u32 = ctx.r21.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v1,r20,r9
	temp.u32 = ctx.r20.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghh v31,v4,v5
	_mm_store_si128((__m128i*)ctx.v31.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v5.u16), _mm_load_si128((__m128i*)ctx.v4.u16)));
	// lvlx v30,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghh v29,v1,v2
	_mm_store_si128((__m128i*)ctx.v29.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v2.u16), _mm_load_si128((__m128i*)ctx.v1.u16)));
	// vmrghh v28,v10,v30
	_mm_store_si128((__m128i*)ctx.v28.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v30.u16), _mm_load_si128((__m128i*)ctx.v10.u16)));
	// vmrghh v27,v31,v3
	_mm_store_si128((__m128i*)ctx.v27.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v3.u16), _mm_load_si128((__m128i*)ctx.v31.u16)));
	// vmrghh v26,v28,v29
	_mm_store_si128((__m128i*)ctx.v26.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v29.u16), _mm_load_si128((__m128i*)ctx.v28.u16)));
	// vupkhsb128 v56,v27,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v27.s16))));
	// vupkhsb128 v55,v26,v96
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v26.s16))));
	// vcsxwfp128 v54,v56,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v12,v55,15
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsubfp128 v10,v54,v12
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v10,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vcuxwfp128 v11,v57,16
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// stvlx v12,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvrx v12,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bdnz 0x83073d64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83073D64;
	// addi r11,r1,-176
	ctx.r11.s64 = ctx.r1.s64 + -176;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,-176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
loc_83073E28:
	// rlwinm r31,r11,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
loc_83073E30:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83073e94
	if (ctx.cr6.eq) goto loc_83073E94;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r5,r8,-4
	ctx.r5.s64 = ctx.r8.s64 + -4;
loc_83073E40:
	// rlwinm r8,r31,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r31,r11,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// lhz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rotlwi r3,r3,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// subf r8,r29,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r29.s64;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// std r8,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r8.u64);
	// lfd f13,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsu f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// bdnz 0x83073e40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83073E40;
loc_83073E94:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// blt cr6,0x83073ea4
	if (ctx.cr6.lt) goto loc_83073EA4;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_83073EA4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83073eb8
	if (ctx.cr6.eq) goto loc_83073EB8;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// sth r7,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r7.u16);
loc_83073EB8:
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// add r9,r30,r28
	ctx.r9.u64 = ctx.r30.u64 + ctx.r28.u64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// stw r7,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r7.u32);
	// lhz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// sth r5,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r5.u16);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r11,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r11.u16);
	// bne cr6,0x83073ef0
	if (!ctx.cr6.eq) goto loc_83073EF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83073ef8
	goto loc_83073EF8;
loc_83073EF0:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_83073EF8:
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x83073f0c
	if (!ctx.cr6.eq) goto loc_83073F0C;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_83073F0C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83073F20"))) PPC_WEAK_FUNC(sub_83073F20);
PPC_FUNC_IMPL(__imp__sub_83073F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x83073F28;
	__savegprlr_16(ctx, base);
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r31,36(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// addi r20,r6,32
	ctx.r20.s64 = ctx.r6.s64 + 32;
	// ori r25,r10,65535
	ctx.r25.u64 = ctx.r10.u64 | 65535;
	// lwz r8,28(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// lhz r21,14(r3)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// subf r18,r8,r5
	ctx.r18.s64 = ctx.r5.s64 - ctx.r8.s64;
	// add r7,r9,r25
	ctx.r7.u64 = ctx.r9.u64 + ctx.r25.u64;
	// addi r19,r6,28
	ctx.r19.s64 = ctx.r6.s64 + 28;
	// divwu r24,r7,r31
	ctx.r24.u32 = ctx.r7.u32 / ctx.r31.u32;
	// addi r22,r3,14
	ctx.r22.s64 = ctx.r3.s64 + 14;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// rlwinm r5,r11,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r18,r24
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x83073f74
	if (!ctx.cr6.lt) goto loc_83073F74;
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
loc_83073F74:
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r30,24(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r17,r6,24
	ctx.r17.s64 = ctx.r6.s64 + 24;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_83073F98:
	// dcbt r7,r10
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// bdnz 0x83073f98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83073F98;
	// lhz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// lis r30,-32247
	ctx.r30.s64 = -2113339392;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r23,r6,2
	ctx.r23.s64 = ctx.r6.s64 + 2;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lhz r29,0(r6)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r26,2(r6)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lfs f0,14232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 14232);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// beq cr6,0x83074068
	if (ctx.cr6.eq) goto loc_83074068;
	// lhz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r3,r29
	ctx.r3.s64 = ctx.r29.s16;
	// lhz r28,6(r10)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r27,r26
	ctx.r27.s64 = ctx.r26.s16;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// rlwinm r29,r29,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// rlwinm r26,r26,16,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
loc_83074000:
	// subf r5,r3,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r3.s64;
	// subf r16,r27,r28
	ctx.r16.s64 = ctx.r28.s64 - ctx.r27.s64;
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// mullw r9,r16,r9
	ctx.r9.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r9.s32);
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// std r5,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.r5.u64);
	// lfd f12,-192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// std r9,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.r9.u64);
	// lfd f13,-208(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// rlwinm r5,r11,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f6,0(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x83074000
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83074000;
loc_83074068:
	// rlwinm r30,r21,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 16) & 0xFFFF0000;
	// subf r3,r24,r18
	ctx.r3.s64 = ctx.r18.s64 - ctx.r24.s64;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// divwu r30,r30,r31
	ctx.r30.u32 = ctx.r30.u32 / ctx.r31.u32;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x83074094
	if (ctx.cr6.lt) goto loc_83074094;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_83074094:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x83074234
	if (ctx.cr6.lt) goto loc_83074234;
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r25,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r25.u32);
	// rlwinm r3,r31,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r28,r1,-192
	ctx.r28.s64 = ctx.r1.s64 + -192;
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// addi r30,r1,-176
	ctx.r30.s64 = ctx.r1.s64 + -176;
	// stw r9,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r9.u32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r5,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r5.u32);
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// stw r3,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r3.u32);
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// stw r9,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r9.u32);
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v62,r0,r30
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r28,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r28.u32);
	// addi r28,r1,-208
	ctx.r28.s64 = ctx.r1.s64 + -208;
	// stw r30,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r30.u32);
	// lvx128 v61,r0,r5
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r0,r3
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vspltw128 v62,v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// lvx128 v59,r0,r28
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vspltw128 v63,v59,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vand128 v58,v0,v63
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// rlwinm r5,r29,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r3,r29,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFC;
	// vspltw128 v7,v61,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// vspltw128 v6,v60,0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// subf r3,r3,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r3.s64;
	// vsrw128 v13,v0,v62
	ctx.v13.u32[0] = ctx.v0.u32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v13.u32[1] = ctx.v0.u32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v13.u32[2] = ctx.v0.u32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v13.u32[3] = ctx.v0.u32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vcuxwfp128 v12,v58,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// beq cr6,0x8307422c
	if (ctx.cr6.eq) goto loc_8307422C;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_83074140:
	// vadduws v13,v13,v13
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// addi r11,r1,-176
	ctx.r11.s64 = ctx.r1.s64 + -176;
	// addi r30,r1,-208
	ctx.r30.s64 = ctx.r1.s64 + -208;
	// li r28,1024
	ctx.r28.s64 = 1024;
	// vadduws v13,v13,v13
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vadduws v13,v13,v6
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// lwz r11,-176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stvx128 v13,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r28,r5
	// lvlx v11,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r11,-196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// vadduws v0,v0,v7
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// lwz r5,-204(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r30,-200(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r28,-208(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// lwz r27,-164(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// vand128 v57,v0,v63
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// lvlx v10,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r26,-172(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r11,-168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lvlx v9,r5,r10
	temp.u32 = ctx.r5.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v8,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsrw128 v13,v0,v62
	ctx.v13.u32[0] = ctx.v0.u32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v13.u32[1] = ctx.v0.u32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v13.u32[2] = ctx.v0.u32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v13.u32[3] = ctx.v0.u32[3] >> (ctx.v62.u8[12] & 0x1F);
	// lvlx v5,r28,r10
	temp.u32 = ctx.r28.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghh v4,v9,v10
	_mm_store_si128((__m128i*)ctx.v4.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v10.u16), _mm_load_si128((__m128i*)ctx.v9.u16)));
	// lvlx v3,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v2,r26,r10
	temp.u32 = ctx.r26.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghh v1,v5,v8
	_mm_store_si128((__m128i*)ctx.v1.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v8.u16), _mm_load_si128((__m128i*)ctx.v5.u16)));
	// lvlx v31,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghh v30,v2,v3
	_mm_store_si128((__m128i*)ctx.v30.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v3.u16), _mm_load_si128((__m128i*)ctx.v2.u16)));
	// vmrghh v29,v11,v31
	_mm_store_si128((__m128i*)ctx.v29.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v31.u16), _mm_load_si128((__m128i*)ctx.v11.u16)));
	// vmrghh v28,v1,v4
	_mm_store_si128((__m128i*)ctx.v28.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v4.u16), _mm_load_si128((__m128i*)ctx.v1.u16)));
	// vmrghh v27,v29,v30
	_mm_store_si128((__m128i*)ctx.v27.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v30.u16), _mm_load_si128((__m128i*)ctx.v29.u16)));
	// vupkhsb128 v56,v28,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v28.s16), _mm_load_si128((__m128i*)ctx.v28.s16))));
	// vupklsb128 v55,v28,v96
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v28.s16)));
	// vupkhsb128 v54,v27,v96
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v27.s16))));
	// vupklsb128 v53,v27,v96
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v27.s16)));
	// vcsxwfp128 v52,v56,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v51,v55,15
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v11,v54,15
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v10,v53,15
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vsubfp128 v8,v52,v11
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v11.f32)));
	// vsubfp128 v9,v51,v10
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v8,v8,v12,v11
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v11,v9,v12,v10
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vcuxwfp128 v12,v57,16
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// stvlx v8,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvrx v8,r8,r9
	ea = ctx.r8.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v8.u8[i]);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stvlx v11,0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvrx v11,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v11.u8[i]);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// bdnz 0x83074140
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83074140;
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,-192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
loc_8307422C:
	// rlwinm r5,r11,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
loc_83074234:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830742ec
	if (ctx.cr6.eq) goto loc_830742EC;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r30,r7,-4
	ctx.r30.s64 = ctx.r7.s64 + -4;
	// addi r3,r8,-4
	ctx.r3.s64 = ctx.r8.s64 + -4;
loc_83074248:
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r7,2
	ctx.r5.s64 = ctx.r7.s64 + 2;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r28,r5,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r27,r7,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// rlwinm r5,r11,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// lhzx r28,r28,r10
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r10.u32);
	// lhz r25,2(r8)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// extsh r26,r7
	ctx.r26.s64 = ctx.r7.s16;
	// extsh r8,r28
	ctx.r8.s64 = ctx.r28.s16;
	// rotlwi r7,r7,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// lhzx r28,r27,r10
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r10.u32);
	// subf r8,r26,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r26.s64;
	// extsh r27,r25
	ctx.r27.s64 = ctx.r25.s16;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsh r8,r28
	ctx.r8.s64 = ctx.r28.s16;
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// subf r8,r27,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r27.s64;
	// std r7,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.r7.u64);
	// rotlwi r7,r25,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r25.u32, 16);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lfd f11,-208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// std r8,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.r8.u64);
	// lfd f13,-192(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfsu f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r3.u32 = ea;
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfsu f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// bdnz 0x83074248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83074248;
loc_830742EC:
	// cmplw cr6,r5,r21
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x830742f8
	if (ctx.cr6.lt) goto loc_830742F8;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_830742F8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83074318
	if (ctx.cr6.eq) goto loc_83074318;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sth r9,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r9.u16);
	// sth r8,0(r23)
	PPC_STORE_U16(ctx.r23.u32 + 0, ctx.r8.u16);
loc_83074318:
	// rlwinm r9,r5,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// add r10,r29,r24
	ctx.r10.u64 = ctx.r29.u64 + ctx.r24.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r5,r21
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r21.u32, ctx.xer);
	// stw r8,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r8.u32);
	// lhz r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// subf r6,r5,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r5.s64;
	// sth r6,0(r22)
	PPC_STORE_U16(ctx.r22.u32 + 0, ctx.r6.u16);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r11,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r11.u16);
	// bne cr6,0x83074350
	if (!ctx.cr6.eq) goto loc_83074350;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83074358
	goto loc_83074358;
loc_83074350:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
loc_83074358:
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r10,r18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x8307436c
	if (!ctx.cr6.eq) goto loc_8307436C;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
loc_8307436C:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074380"))) PPC_WEAK_FUNC(sub_83074380);
PPC_FUNC_IMPL(__imp__sub_83074380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x83074388;
	__savegprlr_19(ctx, base);
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,36(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// addi r24,r6,32
	ctx.r24.s64 = ctx.r6.s64 + 32;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// lwz r31,28(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lhz r25,14(r3)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// subf r22,r31,r5
	ctx.r22.s64 = ctx.r5.s64 - ctx.r31.s64;
	// add r7,r8,r28
	ctx.r7.u64 = ctx.r8.u64 + ctx.r28.u64;
	// addi r23,r6,28
	ctx.r23.s64 = ctx.r6.s64 + 28;
	// divwu r27,r7,r9
	ctx.r27.u32 = ctx.r7.u32 / ctx.r9.u32;
	// addi r26,r3,14
	ctx.r26.s64 = ctx.r3.s64 + 14;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// rlwinm r7,r11,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r22,r27
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x830743d4
	if (!ctx.cr6.lt) goto loc_830743D4;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_830743D4:
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,24(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// addi r21,r6,24
	ctx.r21.s64 = ctx.r6.s64 + 24;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_830743F4:
	// dcbt r8,r10
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// bdnz 0x830743f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830743F4;
	// lis r29,-32233
	ctx.r29.s64 = -2112421888;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r20,-32250
	ctx.r20.s64 = -2113536000;
	// lbz r30,0(r6)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lfs f13,24436(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-25140(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + -25140);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x83074474
	if (ctx.cr6.eq) goto loc_83074474;
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// lbz r3,1(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// rlwinm r30,r30,16,8,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF0000;
loc_83074438:
	// subf r7,r31,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r31.s64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r7,r7,r5
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 + ctx.r30.u64;
	// rlwinm r7,r11,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// extsw r29,r5
	ctx.r29.s64 = ctx.r5.s32;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// std r29,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r29.u64);
	// lfd f12,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmsubs f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f9,0(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x83074438
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83074438;
loc_83074474:
	// rlwinm r31,r25,16,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000;
	// subf r3,r27,r22
	ctx.r3.s64 = ctx.r22.s64 - ctx.r27.s64;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// divwu r31,r31,r9
	ctx.r31.u32 = ctx.r31.u32 / ctx.r9.u32;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x830744a0
	if (ctx.cr6.lt) goto loc_830744A0;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_830744A0:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x830746a0
	if (ctx.cr6.lt) goto loc_830746A0;
	// lis r5,-31958
	ctx.r5.s64 = -2094399488;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18480
	ctx.r3.s64 = ctx.r7.s64 + 18480;
	// lwz r7,18496(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18496);
	// clrlwi r31,r7,31
	ctx.r31.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x830744dc
	if (!ctx.cr6.eq) goto loc_830744DC;
	// vspltisw128 v60,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_set1_epi32(int(0x0)));
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// stw r7,18496(r5)
	PPC_STORE_U32(ctx.r5.u32 + 18496, ctx.r7.u32);
	// stvx128 v60,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x830744e0
	goto loc_830744E0;
loc_830744DC:
	// lvx128 v60,r0,r3
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
loc_830744E0:
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stw r28,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r28.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,16
	ctx.r3.s64 = 16;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r3.u32);
	// addi r30,r1,-160
	ctx.r30.s64 = ctx.r1.s64 + -160;
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r7,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r7.u32);
	// stw r5,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r5.u32);
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// stw r31,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r31.u32);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r31,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r31.u32);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stw r30,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r30.u32);
	// lvx128 v59,r0,r7
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r0,r5
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lis r30,4112
	ctx.r30.s64 = 269484032;
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// lis r28,4112
	ctx.r28.s64 = 269484032;
	// lvx128 v57,r0,r31
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vspltw128 v62,v57,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), 0xFF));
	// vspltw128 v61,v63,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// lis r31,4112
	ctx.r31.s64 = 269484032;
	// lis r20,4112
	ctx.r20.s64 = 269484032;
	// vand128 v56,v0,v62
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// ori r30,r30,4096
	ctx.r30.u64 = ctx.r30.u64 | 4096;
	// vspltw128 v9,v59,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// rlwinm r7,r29,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// vspltw128 v8,v58,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// vsrw128 v12,v0,v61
	ctx.v12.u32[0] = ctx.v0.u32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v12.u32[1] = ctx.v0.u32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v12.u32[2] = ctx.v0.u32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v12.u32[3] = ctx.v0.u32[3] >> (ctx.v61.u8[12] & 0x1F);
	// rlwinm r19,r29,0,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFC;
	// ori r28,r28,4097
	ctx.r28.u64 = ctx.r28.u64 | 4097;
	// stw r30,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r30.u32);
	// ori r31,r31,4098
	ctx.r31.u64 = ctx.r31.u64 | 4098;
	// vcuxwfp128 v11,v56,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// ori r20,r20,4099
	ctx.r20.u64 = ctx.r20.u64 | 4099;
	// stw r28,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r28.u32);
	// stw r31,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r31.u32);
	// subf r30,r19,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r19.s64;
	// stw r20,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r20.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stvx128 v12,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x83074698
	if (ctx.cr6.eq) goto loc_83074698;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lwz r11,-176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r5,r5,15600
	ctx.r5.s64 = ctx.r5.s64 + 15600;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lvx128 v7,r0,r31
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r5
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
loc_830745D4:
	// addi r5,r1,-144
	ctx.r5.s64 = ctx.r1.s64 + -144;
	// vadduws v13,v12,v8
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// li r31,1024
	ctx.r31.s64 = 1024;
	// stvx128 v13,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r31,r7
	// lwz r7,-164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// lvlx v12,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r11,-168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// vadduws v0,v0,v9
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// lwz r5,-172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// lwz r28,-132(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -132);
	// lwz r20,-140(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// lvlx v10,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r7,-144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	// lwz r19,-136(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -136);
	// lvlx v5,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v6,r5,r10
	temp.u32 = ctx.r5.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vand128 v55,v0,v62
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// lvlx v4,r28,r10
	temp.u32 = ctx.r28.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v1,v12,v5
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// lvlx v2,r20,r10
	temp.u32 = ctx.r20.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v3,v6,v10
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvlx v30,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsrw128 v12,v0,v61
	ctx.v12.u32[0] = ctx.v0.u32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v12.u32[1] = ctx.v0.u32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v12.u32[2] = ctx.v0.u32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v12.u32[3] = ctx.v0.u32[3] >> (ctx.v61.u8[12] & 0x1F);
	// lvlx v31,r19,r10
	temp.u32 = ctx.r19.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v29,v2,v4
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vmrghb v28,v30,v31
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v30.u8)));
	// vmrghb v27,v1,v3
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// stvx128 v12,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,-176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// vmrghb v26,v28,v29
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vperm128 v54,v27,v60,v7
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v53,v26,v60,v7
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcuxwfp128 v52,v54,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v51,v53,7
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v13,v52,v63
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v50,v51,v63
	_mm_store_ps(ctx.v50.f32, _mm_sub_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v10,v50,v13
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v10,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vcuxwfp128 v11,v55,16
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// stvlx v13,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bdnz 0x830745d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830745D4;
	// addi r11,r1,-160
	ctx.r11.s64 = ctx.r1.s64 + -160;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,-160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
loc_83074698:
	// rlwinm r7,r11,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
loc_830746A0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830746fc
	if (ctx.cr6.eq) goto loc_830746FC;
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_830746B4:
	// lbzx r3,r10,r7
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r7,r31,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rotlwi r3,r3,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// subf r30,r30,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r30.s64;
	// rlwinm r7,r11,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// mullw r5,r30,r5
	ctx.r5.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r5.s32);
	// add r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 + ctx.r3.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r3.u64);
	// lfd f12,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmsubs f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfsu f9,4(r8)
	temp.f32 = float(ctx.f9.f64);
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x830746b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830746B4;
loc_830746FC:
	// cmplw cr6,r7,r25
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x83074708
	if (ctx.cr6.lt) goto loc_83074708;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
loc_83074708:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83074718
	if (ctx.cr6.eq) goto loc_83074718;
	// lbzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stb r10,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r10.u8);
loc_83074718:
	// rlwinm r9,r7,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// add r10,r29,r27
	ctx.r10.u64 = ctx.r29.u64 + ctx.r27.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r7,r25
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r25.u32, ctx.xer);
	// stw r8,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// lhz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// subf r5,r7,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// sth r5,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r5.u16);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r11,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r11.u16);
	// bne cr6,0x83074750
	if (!ctx.cr6.eq) goto loc_83074750;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83074758
	goto loc_83074758;
loc_83074750:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_83074758:
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x8307476c
	if (!ctx.cr6.eq) goto loc_8307476C;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
loc_8307476C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074780"))) PPC_WEAK_FUNC(sub_83074780);
PPC_FUNC_IMPL(__imp__sub_83074780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x83074788;
	__savegprlr_14(ctx, base);
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r31,36(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// addi r19,r6,32
	ctx.r19.s64 = ctx.r6.s64 + 32;
	// ori r24,r10,65535
	ctx.r24.u64 = ctx.r10.u64 | 65535;
	// lwz r8,28(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// lhz r20,14(r3)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// subf r17,r8,r5
	ctx.r17.s64 = ctx.r5.s64 - ctx.r8.s64;
	// add r7,r9,r24
	ctx.r7.u64 = ctx.r9.u64 + ctx.r24.u64;
	// addi r18,r6,28
	ctx.r18.s64 = ctx.r6.s64 + 28;
	// divwu r23,r7,r31
	ctx.r23.u32 = ctx.r7.u32 / ctx.r31.u32;
	// addi r21,r3,14
	ctx.r21.s64 = ctx.r3.s64 + 14;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// rlwinm r30,r11,16,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r17,r23
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x830747d4
	if (!ctx.cr6.lt) goto loc_830747D4;
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
loc_830747D4:
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r29,24(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r16,r6,24
	ctx.r16.s64 = ctx.r6.s64 + 24;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_830747F8:
	// dcbt r7,r9
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// bdnz 0x830747f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830747F8;
	// lhz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// lis r29,-32233
	ctx.r29.s64 = -2112421888;
	// lis r28,-32250
	ctx.r28.s64 = -2113536000;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r25,1(r6)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lfs f13,24436(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-25140(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -25140);
	ctx.f0.f64 = double(temp.f32);
	// addi r22,r6,1
	ctx.r22.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// beq cr6,0x830748c8
	if (ctx.cr6.eq) goto loc_830748C8;
	// clrlwi r26,r25,24
	ctx.r26.u64 = ctx.r25.u32 & 0xFF;
	// lbz r3,2(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r29,3(r9)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// clrlwi r28,r5,24
	ctx.r28.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r27,r5,16,8,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF0000;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// rlwinm r25,r25,16,8,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFF0000;
loc_83074860:
	// subf r5,r28,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r28.s64;
	// subf r30,r26,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r26.s64;
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// std r5,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.r5.u64);
	// lfd f12,-208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// std r5,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.r5.u64);
	// lfd f11,-192(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// rlwinm r30,r11,16,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// fmsubs f6,f8,f0,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f6,0(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmsubs f5,f7,f0,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f5,0(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x83074860
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83074860;
loc_830748C8:
	// rlwinm r3,r20,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 16) & 0xFFFF0000;
	// subf r5,r23,r17
	ctx.r5.s64 = ctx.r17.s64 - ctx.r23.s64;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// divwu r3,r3,r31
	ctx.r3.u32 = ctx.r3.u32 / ctx.r31.u32;
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x830748f4
	if (ctx.cr6.lt) goto loc_830748F4;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_830748F4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// blt cr6,0x83074b4c
	if (ctx.cr6.lt) goto loc_83074B4C;
	// lis r5,-31958
	ctx.r5.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,18512
	ctx.r3.s64 = ctx.r10.s64 + 18512;
	// lwz r10,18528(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18528);
	// clrlwi r30,r10,31
	ctx.r30.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83074930
	if (!ctx.cr6.eq) goto loc_83074930;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,18528(r5)
	PPC_STORE_U32(ctx.r5.u32 + 18528, ctx.r10.u32);
	// stvx128 v62,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x83074934
	goto loc_83074934;
loc_83074930:
	// lvx128 v62,r0,r3
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
loc_83074934:
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// stw r24,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r24.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r3,r1,-176
	ctx.r3.s64 = ctx.r1.s64 + -176;
	// stw r10,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// addi r30,r1,-192
	ctx.r30.s64 = ctx.r1.s64 + -192;
	// li r28,2
	ctx.r28.s64 = 2;
	// lvx128 v63,r0,r5
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r28.u32);
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// vspltw128 v60,v63,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lvx128 v58,r0,r30
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// stw r29,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r29.u32);
	// lvx128 v59,r0,r3
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stw r5,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r5.u32);
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// rlwinm r3,r31,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// lis r30,4112
	ctx.r30.s64 = 269484032;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// ori r30,r30,4096
	ctx.r30.u64 = ctx.r30.u64 | 4096;
	// lvx128 v57,r0,r5
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stw r3,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r3.u32);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r30,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r30.u32);
	// lis r29,4112
	ctx.r29.s64 = 269484032;
	// stw r3,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r3.u32);
	// addi r3,r1,-192
	ctx.r3.s64 = ctx.r1.s64 + -192;
	// lis r27,4112
	ctx.r27.s64 = 269484032;
	// ori r29,r29,4097
	ctx.r29.u64 = ctx.r29.u64 | 4097;
	// ori r30,r27,4100
	ctx.r30.u64 = ctx.r27.u64 | 4100;
	// lis r24,4112
	ctx.r24.s64 = 269484032;
	// stw r29,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r29.u32);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lis r3,4112
	ctx.r3.s64 = 269484032;
	// lis r28,4112
	ctx.r28.s64 = 269484032;
	// stw r30,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r30.u32);
	// ori r3,r3,4099
	ctx.r3.u64 = ctx.r3.u64 | 4099;
	// vsrw128 v13,v0,v60
	ctx.v13.u32[0] = ctx.v0.u32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v13.u32[1] = ctx.v0.u32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v13.u32[2] = ctx.v0.u32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v13.u32[3] = ctx.v0.u32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vspltw128 v61,v57,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), 0xFF));
	// lis r25,4112
	ctx.r25.s64 = 269484032;
	// lis r15,4112
	ctx.r15.s64 = 269484032;
	// stw r3,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r3.u32);
	// ori r3,r24,4102
	ctx.r3.u64 = ctx.r24.u64 | 4102;
	// vspltw128 v5,v59,0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// rlwinm r5,r26,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	// vspltw128 v4,v58,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// vand128 v56,v0,v61
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// rlwinm r14,r26,0,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFC;
	// ori r28,r28,4098
	ctx.r28.u64 = ctx.r28.u64 | 4098;
	// stw r3,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// ori r29,r25,4101
	ctx.r29.u64 = ctx.r25.u64 | 4101;
	// ori r30,r15,4103
	ctx.r30.u64 = ctx.r15.u64 | 4103;
	// stw r28,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r28.u32);
	// vcuxwfp128 v12,v56,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// stw r29,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r29.u32);
	// subf r3,r14,r26
	ctx.r3.s64 = ctx.r26.s64 - ctx.r14.s64;
	// stw r30,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r30.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83074b44
	if (ctx.cr6.eq) goto loc_83074B44;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// addi r30,r1,-176
	ctx.r30.s64 = ctx.r1.s64 + -176;
	// addi r11,r11,15600
	ctx.r11.s64 = ctx.r11.s64 + 15600;
	// lvx128 v7,r0,r5
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r30
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
loc_83074A50:
	// vadduws v13,v13,v13
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// addi r11,r1,-208
	ctx.r11.s64 = ctx.r1.s64 + -208;
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// li r30,1024
	ctx.r30.s64 = 1024;
	// vadduws v11,v13,v4
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,-208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stvx128 v11,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r30,r29
	// lwz r5,-164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// lvlx v10,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r11,-172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// vadduws v0,v0,v5
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// lwz r30,-168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r29,-176(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r28,-196(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// lvlx v9,r5,r9
	temp.u32 = ctx.r5.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r27,-204(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r5,-200(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// lvlx v8,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v3,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vand128 v55,v0,v61
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// lvlx v2,r29,r9
	temp.u32 = ctx.r29.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v1,v8,v9
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// lvlx v31,r28,r9
	temp.u32 = ctx.r28.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v30,r27,r9
	temp.u32 = ctx.r27.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v29,v2,v3
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// lvlx v28,r5,r9
	temp.u32 = ctx.r5.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v27,v30,v31
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v30.u8)));
	// vmrghb v26,v10,v28
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vmrghb v11,v29,v1
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v29.u8)));
	// vmrghb v13,v26,v27
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v26.u8)));
	// vperm128 v54,v11,v62,v7
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v53,v11,v62,v6
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v52,v13,v62,v7
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v51,v13,v62,v6
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vcuxwfp128 v50,v54,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v49,v53,7
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsrw128 v13,v0,v60
	ctx.v13.u32[0] = ctx.v0.u32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v13.u32[1] = ctx.v0.u32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v13.u32[2] = ctx.v0.u32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v13.u32[3] = ctx.v0.u32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vcuxwfp128 v48,v52,7
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v52.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v47,v51,7
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v51.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vsubfp128 v46,v50,v63
	_mm_store_ps(ctx.v46.f32, _mm_sub_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v45,v49,v63
	_mm_store_ps(ctx.v45.f32, _mm_sub_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v11,v48,v63
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v10,v47,v63
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v8,v46,v11
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v11.f32)));
	// vsubfp128 v9,v45,v10
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v8,v8,v12,v11
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v11,v9,v12,v10
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vcuxwfp128 v12,v55,16
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// stvlx v8,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvrx v8,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v8.u8[i]);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stvlx v11,0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvrx v11,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v11.u8[i]);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// bdnz 0x83074a50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83074A50;
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,-192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
loc_83074B44:
	// rlwinm r30,r11,16,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
loc_83074B4C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83074bec
	if (ctx.cr6.eq) goto loc_83074BEC;
	// addi r29,r9,1
	ctx.r29.s64 = ctx.r9.s64 + 1;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r28,r9,2
	ctx.r28.s64 = ctx.r9.s64 + 2;
	// addi r27,r9,3
	ctx.r27.s64 = ctx.r9.s64 + 3;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_83074B6C:
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r30,r11,16,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// lbzx r3,r5,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// lbzx r25,r28,r5
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r5.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lbzx r15,r29,r5
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r5.u32);
	// lbzx r14,r27,r5
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r5.u32);
	// rotlwi r3,r3,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// subf r5,r24,r25
	ctx.r5.s64 = ctx.r25.s64 - ctx.r24.s64;
	// subf r25,r15,r14
	ctx.r25.s64 = ctx.r14.s64 - ctx.r15.s64;
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r24,r5,r3
	ctx.r24.u64 = ctx.r5.u64 + ctx.r3.u64;
	// mullw r5,r25,r10
	ctx.r5.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r10.s32);
	// rotlwi r3,r15,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r15.u32, 16);
	// extsw r10,r24
	ctx.r10.s64 = ctx.r24.s32;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// std r10,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.r10.u64);
	// lfd f12,-192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// std r3,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.r3.u64);
	// lfd f10,-208(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// fmsubs f6,f8,f0,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfsu f6,4(r7)
	temp.f32 = float(ctx.f6.f64);
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// fmsubs f5,f7,f0,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfsu f5,4(r8)
	temp.f32 = float(ctx.f5.f64);
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x83074b6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83074B6C;
loc_83074BEC:
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x83074bf8
	if (ctx.cr6.lt) goto loc_83074BF8;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_83074BF8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83074c18
	if (ctx.cr6.eq) goto loc_83074C18;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// stb r8,0(r22)
	PPC_STORE_U8(ctx.r22.u32 + 0, ctx.r8.u8);
loc_83074C18:
	// rlwinm r9,r30,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// add r10,r26,r23
	ctx.r10.u64 = ctx.r26.u64 + ctx.r23.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, ctx.xer);
	// stw r8,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r8.u32);
	// lhz r7,0(r21)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// subf r6,r30,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r30.s64;
	// sth r6,0(r21)
	PPC_STORE_U16(ctx.r21.u32 + 0, ctx.r6.u16);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r3,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r3.u16);
	// bne cr6,0x83074c50
	if (!ctx.cr6.eq) goto loc_83074C50;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83074c58
	goto loc_83074C58;
loc_83074C50:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_83074C58:
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r10,r17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x83074c6c
	if (!ctx.cr6.eq) goto loc_83074C6C;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_83074C6C:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074C80"))) PPC_WEAK_FUNC(sub_83074C80);
PPC_FUNC_IMPL(__imp__sub_83074C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x83074C88;
	__savegprlr_20(ctx, base);
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r10,36(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// addi r25,r6,32
	ctx.r25.s64 = ctx.r6.s64 + 32;
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
	// lwz r9,28(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lhz r26,14(r3)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// subf r23,r9,r5
	ctx.r23.s64 = ctx.r5.s64 - ctx.r9.s64;
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r24,r6,28
	ctx.r24.s64 = ctx.r6.s64 + 28;
	// divwu r28,r7,r10
	ctx.r28.u32 = ctx.r7.u32 / ctx.r10.u32;
	// addi r27,r3,14
	ctx.r27.s64 = ctx.r3.s64 + 14;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// rlwinm r31,r11,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r23,r28
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x83074cd4
	if (!ctx.cr6.lt) goto loc_83074CD4;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_83074CD4:
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,24(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lis r21,-32232
	ctx.r21.s64 = -2112356352;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r22,r6,24
	ctx.r22.s64 = ctx.r6.s64 + 24;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lfs f12,-6880(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -6880);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// beq cr6,0x83074d4c
	if (ctx.cr6.eq) goto loc_83074D4C;
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_83074D18:
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r7,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r7.u64);
	// lfd f11,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// rlwinm r31,r11,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f7,f8,f12,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x83074d18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83074D18;
loc_83074D4C:
	// rlwinm r3,r26,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// subf r5,r28,r23
	ctx.r5.s64 = ctx.r23.s64 - ctx.r28.s64;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// divwu r3,r3,r10
	ctx.r3.u32 = ctx.r3.u32 / ctx.r10.u32;
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x83074d78
	if (ctx.cr6.lt) goto loc_83074D78;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83074D78:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x83074ef4
	if (ctx.cr6.lt) goto loc_83074EF4;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r30.u32);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r30,r1,-176
	ctx.r30.s64 = ctx.r1.s64 + -176;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r5,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// addi r5,r1,-144
	ctx.r5.s64 = ctx.r1.s64 + -144;
	// stw r3,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r3.u32);
	// add r21,r10,r11
	ctx.r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r21,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r21.u32);
	// addi r21,r1,-144
	ctx.r21.s64 = ctx.r1.s64 + -144;
	// stw r31,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r31.u32);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// li r20,2
	ctx.r20.s64 = 2;
	// lvx128 v60,r0,r5
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltw128 v61,v63,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v57,r0,r31
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// stw r20,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r20.u32);
	// lvx128 v58,r0,r21
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r5,r29,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFC;
	// vspltw128 v10,v60,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// subf r5,r5,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r5.s64;
	// stw r7,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r7.u32);
	// addi r7,r1,-160
	ctx.r7.s64 = ctx.r1.s64 + -160;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// li r30,4
	ctx.r30.s64 = 4;
	// vsrw128 v63,v0,v61
	ctx.v63.u32[0] = ctx.v0.u32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v63.u32[1] = ctx.v0.u32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v63.u32[2] = ctx.v0.u32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v63.u32[3] = ctx.v0.u32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vspltw128 v62,v57,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), 0xFF));
	// stw r30,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r30.u32);
	// lvx128 v59,r0,r7
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// rlwinm r7,r29,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// vspltw128 v9,v59,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vand128 v56,v0,v62
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// vspltw128 v60,v58,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// vcuxwfp128 v12,v56,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// beq cr6,0x83074eec
	if (ctx.cr6.eq) goto loc_83074EEC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_83074E38:
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// vslw128 v13,v63,v60
	ctx.v13.u32[0] = ctx.v63.u32[0] << (ctx.v60.u8[0] & 0x1F);
	ctx.v13.u32[1] = ctx.v63.u32[1] << (ctx.v60.u8[4] & 0x1F);
	ctx.v13.u32[2] = ctx.v63.u32[2] << (ctx.v60.u8[8] & 0x1F);
	ctx.v13.u32[3] = ctx.v63.u32[3] << (ctx.v60.u8[12] & 0x1F);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// li r30,1024
	ctx.r30.s64 = 1024;
	// vadduws v11,v13,v9
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,-144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stvx128 v11,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r30,r7
	// lvlx128 v55,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r11,-148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -148);
	// vadduws v0,v0,v10
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// lwz r7,-156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// lwz r31,-152(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// lwz r30,-160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// lwz r21,-132(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -132);
	// vand128 v48,v0,v62
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// lvlx128 v54,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r20,-140(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r11,-136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -136);
	// lvlx128 v53,r7,r9
	temp.u32 = ctx.r7.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsrw128 v63,v0,v61
	ctx.v63.u32[0] = ctx.v0.u32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v63.u32[1] = ctx.v0.u32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v63.u32[2] = ctx.v0.u32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v63.u32[3] = ctx.v0.u32[3] >> (ctx.v61.u8[12] & 0x1F);
	// lvlx128 v51,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v50,v53,v54
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// lvlx128 v49,r21,r9
	temp.u32 = ctx.r21.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v47,r20,r9
	temp.u32 = ctx.r20.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v46,v51,v52
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// lvlx128 v45,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v44,v47,v49
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// vmrghw128 v43,v55,v45
	_mm_store_si128((__m128i*)ctx.v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v42,v46,v50
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// vmrghw128 v13,v43,v44
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// vsubfp128 v11,v42,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v11,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vcuxwfp128 v12,v48,16
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v48.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// stvlx v13,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bdnz 0x83074e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83074E38;
	// addi r11,r1,-176
	ctx.r11.s64 = ctx.r1.s64 + -176;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,-176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
loc_83074EEC:
	// rlwinm r31,r11,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
loc_83074EF4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83074f48
	if (ctx.cr6.eq) goto loc_83074F48;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r5,r8,-4
	ctx.r5.s64 = ctx.r8.s64 + -4;
loc_83074F04:
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// std r7,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r7.u64);
	// lfd f10,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// rlwinm r31,r11,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// fmuls f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmadds f6,f7,f12,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfsu f6,4(r5)
	temp.f32 = float(ctx.f6.f64);
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// bdnz 0x83074f04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83074F04;
loc_83074F48:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// blt cr6,0x83074f58
	if (ctx.cr6.lt) goto loc_83074F58;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_83074F58:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83074f6c
	if (ctx.cr6.eq) goto loc_83074F6C;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_83074F6C:
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// add r9,r29,r28
	ctx.r9.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// stw r7,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r7.u32);
	// lhz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// sth r5,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r5.u16);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r11,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r11.u16);
	// bne cr6,0x83074fa4
	if (!ctx.cr6.eq) goto loc_83074FA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83074fac
	goto loc_83074FAC;
loc_83074FA4:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_83074FAC:
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x83074fc0
	if (!ctx.cr6.eq) goto loc_83074FC0;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_83074FC0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074FD4"))) PPC_WEAK_FUNC(sub_83074FD4);
PPC_FUNC_IMPL(__imp__sub_83074FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83074FD8"))) PPC_WEAK_FUNC(sub_83074FD8);
PPC_FUNC_IMPL(__imp__sub_83074FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x83074FE0;
	__savegprlr_16(ctx, base);
	// lwz r10,32(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// addi r29,r6,28
	ctx.r29.s64 = ctx.r6.s64 + 28;
	// lwz r7,36(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lhz r18,14(r3)
	ctx.r18.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// addi r16,r6,32
	ctx.r16.s64 = ctx.r6.s64 + 32;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// stw r29,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r29.u32);
	// subf r8,r10,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r10.s64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r19,r3,14
	ctx.r19.s64 = ctx.r3.s64 + 14;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// subf r28,r11,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r11.s64;
	// divwu r21,r8,r7
	ctx.r21.u32 = ctx.r8.u32 / ctx.r7.u32;
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r28,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r28.u32);
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x83075034
	if (!ctx.cr6.lt) goto loc_83075034;
	// mr r21,r28
	ctx.r21.u64 = ctx.r28.u64;
loc_83075034:
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,24(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lis r26,-32232
	ctx.r26.s64 = -2112356352;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r24,12(r4)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// lfs f12,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r17,r6,24
	ctx.r17.s64 = ctx.r6.s64 + 24;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-6880(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -6880);
	ctx.f0.f64 = double(temp.f32);
	// addi r20,r6,4
	ctx.r20.s64 = ctx.r6.s64 + 4;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// beq cr6,0x830750d4
	if (ctx.cr6.eq) goto loc_830750D4;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r5,r24,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
loc_83075088:
	// clrldi r9,r31,32
	ctx.r9.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// add r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 + ctx.r11.u64;
	// std r9,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.r9.u64);
	// lfd f10,-208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// fmuls f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmadds f3,f5,f0,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f3,0(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmadds f2,f4,f0,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfsx f2,r5,r8
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x83075088
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83075088;
loc_830750D4:
	// rlwinm r3,r18,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 16) & 0xFFFF0000;
	// subf r5,r21,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r21.s64;
	// subf r3,r10,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r10.s64;
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// divwu r3,r3,r7
	ctx.r3.u32 = ctx.r3.u32 / ctx.r7.u32;
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x83075100
	if (ctx.cr6.lt) goto loc_83075100;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_83075100:
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 4, ctx.xer);
	// blt cr6,0x830752e0
	if (ctx.cr6.lt) goto loc_830752E0;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r30.u32);
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// addi r30,r1,-208
	ctx.r30.s64 = ctx.r1.s64 + -208;
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r5,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r5.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r27,r7,r10
	ctx.r27.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// stw r3,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r3.u32);
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// stw r9,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r9.u32);
	// stw r27,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r27.u32);
	// addi r9,r1,-192
	ctx.r9.s64 = ctx.r1.s64 + -192;
	// addi r27,r1,-176
	ctx.r27.s64 = ctx.r1.s64 + -176;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// rlwinm r31,r7,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r31,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r31.u32);
	// lvx128 v60,r0,r5
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stw r30,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r30.u32);
	// stw r26,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r26.u32);
	// lvx128 v59,r0,r9
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r0,r27
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,-160
	ctx.r9.s64 = ctx.r1.s64 + -160;
	// rlwinm r5,r24,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r23,30,2,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r30,r23,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lvx128 v57,r0,r9
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// vspltw128 v62,v57,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), 0xFF));
	// subf r22,r30,r23
	ctx.r22.s64 = ctx.r23.s64 - ctx.r30.s64;
	// vand128 v56,v0,v62
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// vspltw128 v61,v63,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vcuxwfp128 v13,v56,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// vspltw128 v8,v60,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// vspltw128 v7,v59,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vspltw128 v60,v58,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// vsrw128 v63,v0,v61
	ctx.v63.u32[0] = ctx.v0.u32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v63.u32[1] = ctx.v0.u32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v63.u32[2] = ctx.v0.u32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v63.u32[3] = ctx.v0.u32[3] >> (ctx.v61.u8[12] & 0x1F);
	// beq cr6,0x830752d8
	if (ctx.cr6.eq) goto loc_830752D8;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_830751D0:
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// vslw128 v12,v63,v60
	ctx.v12.u32[0] = ctx.v63.u32[0] << (ctx.v60.u8[0] & 0x1F);
	ctx.v12.u32[1] = ctx.v63.u32[1] << (ctx.v60.u8[4] & 0x1F);
	ctx.v12.u32[2] = ctx.v63.u32[2] << (ctx.v60.u8[8] & 0x1F);
	ctx.v12.u32[3] = ctx.v63.u32[3] << (ctx.v60.u8[12] & 0x1F);
	// addi r30,r1,-192
	ctx.r30.s64 = ctx.r1.s64 + -192;
	// li r29,1024
	ctx.r29.s64 = 1024;
	// vadduws v11,v12,v7
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// stvx128 v12,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,-176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// rlwinm r31,r5,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stvx128 v11,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r29,r31
	// lvlx128 v55,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r28,-180(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// lvlx128 v54,r5,r9
	temp.u32 = ctx.r5.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r27,-188(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// vadduws v0,v0,v8
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// lwz r26,-184(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r25,-192(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r31,-164(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// lwz r30,-172(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lvlx128 v53,r28,r11
	temp.u32 = ctx.r28.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r29,-168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lvlx128 v52,r27,r11
	temp.u32 = ctx.r27.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v51,r26,r11
	temp.u32 = ctx.r26.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vand128 v44,v0,v62
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// lvlx128 v50,r25,r11
	temp.u32 = ctx.r25.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v49,v52,v53
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// lvlx128 v48,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsrw128 v63,v0,v61
	ctx.v63.u32[0] = ctx.v0.u32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v63.u32[1] = ctx.v0.u32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v63.u32[2] = ctx.v0.u32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v63.u32[3] = ctx.v0.u32[3] >> (ctx.v61.u8[12] & 0x1F);
	// lvlx128 v47,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v46,v50,v51
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v50.u32)));
	// lvlx128 v45,r29,r11
	temp.u32 = ctx.r29.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v43,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v42,v47,v48
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), _mm_load_si128((__m128i*)ctx.v47.u32)));
	// lvlx128 v41,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v40,v55,v45
	_mm_store_si128((__m128i*)ctx.v40.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// lvlx128 v39,r29,r9
	temp.u32 = ctx.r29.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v38,v46,v49
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// lvlx128 v37,r28,r9
	temp.u32 = ctx.r28.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v36,v41,v43
	_mm_store_si128((__m128i*)ctx.v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), _mm_load_si128((__m128i*)ctx.v41.u32)));
	// lvlx128 v35,r27,r9
	temp.u32 = ctx.r27.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v34,v54,v39
	_mm_store_si128((__m128i*)ctx.v34.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// lvlx128 v33,r26,r9
	temp.u32 = ctx.r26.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v12,v40,v42
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), _mm_load_si128((__m128i*)ctx.v40.u32)));
	// lvlx128 v32,r25,r9
	temp.u32 = ctx.r25.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v59,v35,v37
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), _mm_load_si128((__m128i*)ctx.v35.u32)));
	// vmrghw128 v58,v32,v33
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmrghw128 v11,v34,v36
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// vsubfp128 v9,v38,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v12.f32)));
	// vmrghw128 v57,v58,v59
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vsubfp128 v10,v57,v11
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v9,v9,v13,v12
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v10,v13,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// vcuxwfp128 v13,v44,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v44.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// stvlx v9,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvrx v9,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v9.u8[i]);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stvlx v12,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvrx v12,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x830751d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830751D0;
	// addi r10,r1,-208
	ctx.r10.s64 = ctx.r1.s64 + -208;
	// lwz r28,-224(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// lwz r29,-220(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,-208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
loc_830752D8:
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
loc_830752E0:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8307535c
	if (ctx.cr6.eq) goto loc_8307535C;
	// rlwinm r30,r24,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
loc_830752F0:
	// clrldi r3,r31,32
	ctx.r3.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// add r5,r24,r9
	ctx.r5.u64 = ctx.r24.u64 + ctx.r9.u64;
	// std r3,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.r3.u64);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfd f7,-208(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f3,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmadds f2,f4,f0,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f2,0(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmadds f1,f3,f0,f11
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfsx f1,r30,r8
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x830752f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830752F0;
loc_8307535C:
	// cmplw cr6,r9,r18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x83075368
	if (ctx.cr6.lt) goto loc_83075368;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
loc_83075368:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8307538c
	if (ctx.cr6.eq) goto loc_8307538C;
	// add r8,r9,r24
	ctx.r8.u64 = ctx.r9.u64 + ctx.r24.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f13,0(r20)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r20.u32 + 0, temp.u32);
loc_8307538C:
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// add r11,r23,r21
	ctx.r11.u64 = ctx.r23.u64 + ctx.r21.u64;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmplw cr6,r9,r18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r18.u32, ctx.xer);
	// stw r7,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r7.u32);
	// lhz r6,0(r19)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r19.u32 + 0);
	// subf r5,r9,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r9.s64;
	// sth r5,0(r19)
	PPC_STORE_U16(ctx.r19.u32 + 0, ctx.r5.u16);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r10,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r10.u16);
	// bne cr6,0x830753c4
	if (!ctx.cr6.eq) goto loc_830753C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830753cc
	goto loc_830753CC;
loc_830753C4:
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_830753CC:
	// stw r10,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x830753e0
	if (!ctx.cr6.eq) goto loc_830753E0;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
loc_830753E0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830753F4"))) PPC_WEAK_FUNC(sub_830753F4);
PPC_FUNC_IMPL(__imp__sub_830753F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830753F8"))) PPC_WEAK_FUNC(sub_830753F8);
PPC_FUNC_IMPL(__imp__sub_830753F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x83075400;
	__savegprlr_17(ctx, base);
	// lwz r25,36(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// addi r21,r6,32
	ctx.r21.s64 = ctx.r6.s64 + 32;
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// addi r17,r6,28
	ctx.r17.s64 = ctx.r6.s64 + 28;
	// lwz r10,28(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// addi r18,r3,14
	ctx.r18.s64 = ctx.r3.s64 + 14;
	// subf r9,r11,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r11.s64;
	// lhz r20,14(r3)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// subf r19,r10,r5
	ctx.r19.s64 = ctx.r5.s64 - ctx.r10.s64;
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// stw r25,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r25.u32);
	// twllei r25,0
	if (ctx.r25.u32 <= 0) __builtin_debugtrap();
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divwu r11,r8,r25
	ctx.r11.u32 = ctx.r8.u32 / ctx.r25.u32;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// blt cr6,0x83075448
	if (ctx.cr6.lt) goto loc_83075448;
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
loc_83075448:
	// addi r9,r1,-160
	ctx.r9.s64 = ctx.r1.s64 + -160;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v10,v63,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// beq cr6,0x83075478
	if (ctx.cr6.eq) goto loc_83075478;
loc_83075464:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83075464
	if (!ctx.cr6.eq) goto loc_83075464;
loc_83075478:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x830755d4
	if (ctx.cr6.eq) goto loc_830755D4;
	// lwz r9,24(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvlx128 v62,r0,r21
	temp.u32 = ctx.r21.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// vspltw128 v61,v62,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rotlwi r27,r7,2
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r11,-6992
	ctx.r10.s64 = ctx.r11.s64 + -6992;
	// rotlwi r26,r5,2
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// rlwinm r28,r20,16,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 16) & 0xFFFF0000;
	// subf r29,r22,r19
	ctx.r29.s64 = ctx.r19.s64 - ctx.r22.s64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// li r5,4
	ctx.r5.s64 = 4;
loc_830754D8:
	// vor128 v0,v61,v61
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// addi r24,r1,-144
	ctx.r24.s64 = ctx.r1.s64 + -144;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// vand128 v60,v0,v63
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// stvx128 v0,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// vcuxwfp128 v13,v60,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
loc_830754FC:
	// dcbt r11,r9
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x830754fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830754FC;
	// lvlx v12,0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lvlx128 v62,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// beq cr6,0x83075544
	if (ctx.cr6.eq) goto loc_83075544;
	// vsubfp128 v11,v62,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v12.f32)));
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
loc_83075520:
	// vmaddfp v13,v11,v13,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vadduws v0,v0,v10
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vand128 v59,v0,v63
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// stvlx v13,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// vcuxwfp128 v13,v59,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83075520
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83075520;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_83075544:
	// lwz r11,-144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	// twllei r25,0
	if (ctx.r25.u32 <= 0) __builtin_debugtrap();
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// divwu r11,r8,r25
	ctx.r11.u32 = ctx.r8.u32 / ctx.r25.u32;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8307556c
	if (ctx.cr6.lt) goto loc_8307556C;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_8307556C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x830755bc
	if (ctx.cr6.eq) goto loc_830755BC;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
loc_83075578:
	// lwz r11,-144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	// li r8,1024
	ctx.r8.s64 = 1024;
	// rlwinm r11,r11,18,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// dcbt r8,r11
	// lvlx v12,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vadduws v0,v0,v10
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// lvlx128 v58,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// vsubfp128 v11,v58,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v12.f32)));
	// vand128 v57,v0,v63
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v12,v11,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vcuxwfp128 v13,v57,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// stvlx v12,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83075578
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83075578;
loc_830755BC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r9,r26,r9
	ctx.r9.u64 = ctx.r26.u64 + ctx.r9.u64;
	// add r7,r27,r7
	ctx.r7.u64 = ctx.r27.u64 + ctx.r7.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x830754d8
	if (!ctx.cr0.eq) goto loc_830754D8;
	// b 0x830755d8
	goto loc_830755D8;
loc_830755D4:
	// lwz r24,-160(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
loc_830755D8:
	// lwz r29,-144(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	// rlwinm r8,r29,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r8,r20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x830755ec
	if (ctx.cr6.lt) goto loc_830755EC;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
loc_830755EC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83075710
	if (ctx.cr6.eq) goto loc_83075710;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// blt cr6,0x830756c4
	if (ctx.cr6.lt) goto loc_830756C4;
	// addi r30,r23,-3
	ctx.r30.s64 = ctx.r23.s64 + -3;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
loc_8307560C:
	// lhz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// addi r28,r10,-1
	ctx.r28.s64 = ctx.r10.s64 + -1;
	// lwz r31,24(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lfs f0,-4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lhz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mullw r7,r28,r7
	ctx.r7.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lfs f13,-4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r31,24(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lfs f12,-4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r31,24(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mullw r7,r27,r7
	ctx.r7.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lfs f11,-4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// stfsu f11,16(r9)
	temp.f32 = float(ctx.f11.f64);
	ea = 16 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x8307560c
	if (ctx.cr6.lt) goto loc_8307560C;
loc_830756C4:
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x83075710
	if (!ctx.cr6.lt) goto loc_83075710;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r11,r23
	ctx.r9.s64 = ctx.r23.s64 - ctx.r11.s64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830756E0:
	// lhz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830756e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830756E0;
loc_83075710:
	// rlwinm r10,r8,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// add r11,r24,r22
	ctx.r11.u64 = ctx.r24.u64 + ctx.r22.u64;
	// subf r9,r10,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r20.u32, ctx.xer);
	// stw r9,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r9.u32);
	// lhz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
	// sth r5,0(r18)
	PPC_STORE_U16(ctx.r18.u32 + 0, ctx.r5.u16);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r10,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r10.u16);
	// bne cr6,0x83075748
	if (!ctx.cr6.eq) goto loc_83075748;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83075750
	goto loc_83075750;
loc_83075748:
	// lwz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_83075750:
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x83075764
	if (!ctx.cr6.eq) goto loc_83075764;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
loc_83075764:
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83075778"))) PPC_WEAK_FUNC(sub_83075778);
PPC_FUNC_IMPL(__imp__sub_83075778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x83075780;
	__savegprlr_14(ctx, base);
	// addi r22,r6,24
	ctx.r22.s64 = ctx.r6.s64 + 24;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r15,r6,28
	ctx.r15.s64 = ctx.r6.s64 + 28;
	// lwz r30,36(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// addi r16,r6,32
	ctx.r16.s64 = ctx.r6.s64 + 32;
	// stw r22,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r22.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r15,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r15.u32);
	// addi r19,r3,14
	ctx.r19.s64 = ctx.r3.s64 + 14;
	// stw r16,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r16.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// lwz r8,0(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lhz r18,0(r19)
	ctx.r18.u64 = PPC_LOAD_U16(ctx.r19.u32 + 0);
	// subf r14,r11,r5
	ctx.r14.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r31,r8,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// stw r14,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r14.u32);
	// clrlwi r28,r8,16
	ctx.r28.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
loc_830757DC:
	// dcbt r3,r10
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bdnz 0x830757dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830757DC;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r14,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,40(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,44(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// subf r7,r30,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r30.s64;
	// lwz r3,48(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// add r24,r27,r9
	ctx.r24.u64 = ctx.r27.u64 + ctx.r9.u64;
	// lhz r29,0(r6)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// rlwinm r5,r30,10,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 10) & 0xFFFFFC00;
	// subf r30,r9,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r9.s64;
	// addi r20,r6,44
	ctx.r20.s64 = ctx.r6.s64 + 44;
	// srawi r25,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r30.s32 >> 2;
	// subfic r30,r11,1024
	ctx.xer.ca = ctx.r11.u32 <= 1024;
	ctx.r30.s64 = 1024 - ctx.r11.s64;
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// divwu r30,r30,r3
	ctx.r30.u32 = ctx.r30.u32 / ctx.r3.u32;
	// twllei r3,0
	if (ctx.r3.u32 <= 0) __builtin_debugtrap();
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8307583c
	if (ctx.cr6.lt) goto loc_8307583C;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_8307583C:
	// lis r30,-32247
	ctx.r30.s64 = -2113339392;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f0,14232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 14232);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x830758c0
	if (!ctx.cr6.eq) goto loc_830758C0;
	// mullw r30,r7,r11
	ctx.r30.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mullw r26,r7,r3
	ctx.r26.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
loc_83075858:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// beq cr6,0x830758c0
	if (ctx.cr6.eq) goto loc_830758C0;
	// lhz r31,2(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r23,r29
	ctx.r23.s64 = ctx.r29.s16;
	// rlwinm r27,r29,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// add r30,r26,r30
	ctx.r30.u64 = ctx.r26.u64 + ctx.r30.u64;
	// subf r23,r23,r31
	ctx.r23.s64 = ctx.r31.s64 - ctx.r23.s64;
	// rlwinm r31,r30,22,10,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 22) & 0x3FFFFF;
	// mullw r28,r23,r28
	ctx.r28.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r28.s32);
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// extsw r28,r28
	ctx.r28.s64 = ctx.r28.s32;
	// rlwinm r31,r8,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// std r28,-240(r1)
	PPC_STORE_U64(ctx.r1.u32 + -240, ctx.r28.u64);
	// lfd f13,-240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// clrlwi r28,r8,16
	ctx.r28.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// beq cr6,0x83075858
	if (ctx.cr6.eq) goto loc_83075858;
loc_830758C0:
	// subf r30,r9,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r9.s64;
	// addi r21,r18,-1
	ctx.r21.s64 = ctx.r18.s64 + -1;
	// srawi r25,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r30.s32 >> 2;
	// subfic r30,r11,1024
	ctx.xer.ca = ctx.r11.u32 <= 1024;
	ctx.r30.s64 = 1024 - ctx.r11.s64;
	// twllei r3,0
	if (ctx.r3.u32 <= 0) __builtin_debugtrap();
	// divwu r30,r30,r3
	ctx.r30.u32 = ctx.r30.u32 / ctx.r3.u32;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x830758e4
	if (ctx.cr6.lt) goto loc_830758E4;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_830758E4:
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// bgt cr6,0x83075bc0
	if (ctx.cr6.gt) goto loc_83075BC0;
	// mullw r30,r7,r11
	ctx.r30.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r26,r30,r5
	ctx.r26.u64 = ctx.r30.u64 + ctx.r5.u64;
	// mullw r22,r7,r3
	ctx.r22.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_83075904:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// beq cr6,0x8307592c
	if (ctx.cr6.eq) goto loc_8307592C;
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// rlwinm r27,r30,22,10,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 22) & 0x3FFFFF;
	// add r29,r27,r29
	ctx.r29.u64 = ctx.r27.u64 + ctx.r29.u64;
	// rlwinm r27,r29,16,16,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r27,r21
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x83075904
	if (!ctx.cr6.gt) goto loc_83075904;
loc_8307592C:
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 4, ctx.xer);
	// blt cr6,0x83075b3c
	if (ctx.cr6.lt) goto loc_83075B3C;
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r3,r11
	ctx.r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mullw r31,r31,r7
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r29,r30,r5
	ctx.r29.u64 = ctx.r30.u64 + ctx.r5.u64;
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r31,22,10,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 22) & 0x3FFFFF;
	// add r27,r3,r30
	ctx.r27.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// stw r31,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r31.u32);
	// add r30,r27,r11
	ctx.r30.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r29,r29,22,10,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3FFFFF;
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// rlwinm r29,r30,22,10,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 22) & 0x3FFFFF;
	// addi r30,r1,-176
	ctx.r30.s64 = ctx.r1.s64 + -176;
	// stw r31,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r31.u32);
	// li r25,16
	ctx.r25.s64 = 16;
	// addi r24,r1,-208
	ctx.r24.s64 = ctx.r1.s64 + -208;
	// stw r8,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r8.u32);
	// stw r25,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r25.u32);
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r29,r1,-176
	ctx.r29.s64 = ctx.r1.s64 + -176;
	// lvx128 v61,r0,r30
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r31,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r31.u32);
	// vspltw128 v61,v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// lvx128 v63,r0,r24
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// stw r30,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r30.u32);
	// addi r30,r1,-176
	ctx.r30.s64 = ctx.r1.s64 + -176;
	// lvx128 v60,r0,r29
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lis r24,0
	ctx.r24.s64 = 0;
	// vsrw128 v0,v63,v61
	ctx.v0.u32[0] = ctx.v63.u32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v0.u32[1] = ctx.v63.u32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v0.u32[2] = ctx.v63.u32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v0.u32[3] = ctx.v63.u32[3] >> (ctx.v61.u8[12] & 0x1F);
	// ori r29,r24,65535
	ctx.r29.u64 = ctx.r24.u64 | 65535;
	// stw r30,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r30.u32);
	// lwz r24,-240(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// rlwinm r30,r23,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r29,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r29.u32);
	// rlwinm r29,r23,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// vspltw128 v11,v60,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// subf r23,r29,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r29.s64;
	// lvx128 v59,r0,r24
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// vspltw128 v62,v59,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vand128 v58,v63,v62
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// vcuxwfp128 v13,v58,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// beq cr6,0x83075b34
	if (ctx.cr6.eq) goto loc_83075B34;
	// rlwinm r24,r3,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_83075A04:
	// addi r8,r1,-176
	ctx.r8.s64 = ctx.r1.s64 + -176;
	// vadduws v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// addi r29,r1,-192
	ctx.r29.s64 = ctx.r1.s64 + -192;
	// li r26,1024
	ctx.r26.s64 = 1024;
	// vadduws v12,v0,v11
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,-176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// rlwinm r30,r8,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stvx128 v12,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r26,r30
	// lvlx v10,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r30,-180(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// std r6,-240(r1)
	PPC_STORE_U64(ctx.r1.u32 + -240, ctx.r6.u64);
	// addi r16,r1,-208
	ctx.r16.s64 = ctx.r1.s64 + -208;
	// lwz r29,-188(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// mullw r8,r7,r11
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// lwz r26,-184(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r15,-192(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lvlx v9,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r6,-172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r30,-168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r14,-164(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// lvlx v8,r29,r10
	temp.u32 = ctx.r29.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,r26,r10
	temp.u32 = ctx.r26.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v6,r15,r10
	temp.u32 = ctx.r15.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghh v5,v8,v9
	_mm_store_si128((__m128i*)ctx.v5.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v9.u16), _mm_load_si128((__m128i*)ctx.v8.u16)));
	// lvlx v3,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v1,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghh v2,v6,v7
	_mm_store_si128((__m128i*)ctx.v2.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v7.u16), _mm_load_si128((__m128i*)ctx.v6.u16)));
	// lvlx v4,r14,r10
	temp.u32 = ctx.r14.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r26,r8,r5
	ctx.r26.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vmrghh v30,v10,v1
	_mm_store_si128((__m128i*)ctx.v30.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v1.u16), _mm_load_si128((__m128i*)ctx.v10.u16)));
	// add r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// vmrghh v31,v3,v4
	_mm_store_si128((__m128i*)ctx.v31.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v4.u16), _mm_load_si128((__m128i*)ctx.v3.u16)));
	// rlwinm r8,r26,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 22) & 0x3FFFFF;
	// vmrghh v29,v2,v5
	_mm_store_si128((__m128i*)ctx.v29.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v5.u16), _mm_load_si128((__m128i*)ctx.v2.u16)));
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// vmrghh v28,v30,v31
	_mm_store_si128((__m128i*)ctx.v28.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v31.u16), _mm_load_si128((__m128i*)ctx.v30.u16)));
	// vupkhsb128 v57,v29,v96
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v29.s16))));
	// vupkhsb128 v56,v28,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v28.s16), _mm_load_si128((__m128i*)ctx.v28.s16))));
	// vcsxwfp128 v55,v57,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// vcsxwfp128 v0,v56,15
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r8,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r8.u32);
	// add r29,r30,r5
	ctx.r29.u64 = ctx.r30.u64 + ctx.r5.u64;
	// mullw r30,r31,r7
	ctx.r30.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v12,v55,v0
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v0.f32)));
	// add r15,r27,r11
	ctx.r15.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r31,r29,22,10,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3FFFFF;
	// add r29,r30,r5
	ctx.r29.u64 = ctx.r30.u64 + ctx.r5.u64;
	// mullw r30,r15,r7
	ctx.r30.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r7.s32);
	// vmaddfp v0,v12,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// rlwinm r29,r29,22,10,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3FFFFF;
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// stw r31,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r31.u32);
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// rlwinm r30,r30,22,10,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 22) & 0x3FFFFF;
	// stvlx v0,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stw r31,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r31.u32);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stvrx v0,r9,r25
	ea = ctx.r9.u32 + ctx.r25.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// ld r6,-240(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stw r31,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r31.u32);
	// lvx128 v63,r0,r16
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r16.u32) & ~0xF), VectorMaskL));
	// vand128 v54,v63,v62
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// vsrw128 v0,v63,v61
	ctx.v0.u32[0] = ctx.v63.u32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v0.u32[1] = ctx.v63.u32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v0.u32[2] = ctx.v63.u32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v0.u32[3] = ctx.v63.u32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vcuxwfp128 v13,v54,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// bdnz 0x83075a04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83075A04;
	// lwz r16,-232(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r15,-228(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	// lwz r14,-224(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
loc_83075B34:
	// rlwinm r31,r8,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// clrlwi r28,r8,16
	ctx.r28.u64 = ctx.r8.u32 & 0xFFFF;
loc_83075B3C:
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// bgt cr6,0x83075bbc
	if (ctx.cr6.gt) goto loc_83075BBC;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
loc_83075B48:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// beq cr6,0x83075bbc
	if (ctx.cr6.eq) goto loc_83075BBC;
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r22
	ctx.r7.u64 = ctx.r7.u64 + ctx.r22.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r31,r7,22,10,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 22) & 0x3FFFFF;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lhz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// rlwinm r31,r8,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// lhz r5,2(r5)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// extsh r29,r30
	ctx.r29.s64 = ctx.r30.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// rotlwi r30,r30,16
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 16);
	// subf r5,r29,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r29.s64;
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// mullw r5,r5,r28
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// clrlwi r28,r8,16
	ctx.r28.u64 = ctx.r8.u32 & 0xFFFF;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// std r5,-224(r1)
	PPC_STORE_U64(ctx.r1.u32 + -224, ctx.r5.u64);
	// lfd f13,-224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// ble cr6,0x83075b48
	if (!ctx.cr6.gt) goto loc_83075B48;
loc_83075BBC:
	// lwz r22,-216(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
loc_83075BC0:
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r31,r18
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x83075bd0
	if (ctx.cr6.lt) goto loc_83075BD0;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_83075BD0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83075be4
	if (ctx.cr6.eq) goto loc_83075BE4;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// sth r10,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r10.u16);
loc_83075BE4:
	// rlwinm r11,r31,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// subf r10,r17,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r17.s64;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// stw r9,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r31,r18
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r18.u32, ctx.xer);
	// lhz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r19.u32 + 0);
	// subf r7,r31,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r31.s64;
	// sth r7,0(r19)
	PPC_STORE_U16(ctx.r19.u32 + 0, ctx.r7.u16);
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r5,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r5.u16);
	// bne cr6,0x83075c20
	if (!ctx.cr6.eq) goto loc_83075C20;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83075c28
	goto loc_83075C28;
loc_83075C20:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
loc_83075C28:
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x83075c3c
	if (!ctx.cr6.eq) goto loc_83075C3C;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_83075C3C:
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83075C50"))) PPC_WEAK_FUNC(sub_83075C50);
PPC_FUNC_IMPL(__imp__sub_83075C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x83075C58;
	__savegprlr_14(ctx, base);
	// addi r21,r6,24
	ctx.r21.s64 = ctx.r6.s64 + 24;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r17,r3,14
	ctx.r17.s64 = ctx.r3.s64 + 14;
	// lwz r28,36(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// addi r14,r6,28
	ctx.r14.s64 = ctx.r6.s64 + 28;
	// stw r21,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r21.u32);
	// addi r8,r6,32
	ctx.r8.s64 = ctx.r6.s64 + 32;
	// stw r17,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r17.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r14,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r14.u32);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r16,0(r17)
	ctx.r16.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// stw r8,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r8.u32);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subf r15,r10,r5
	ctx.r15.s64 = ctx.r5.s64 - ctx.r10.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r30,r8,16,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// stw r16,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r16.u32);
	// clrlwi r29,r8,16
	ctx.r29.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r15,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r15.u32);
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_83075CBC:
	// dcbt r3,r11
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bdnz 0x83075cbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83075CBC;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// rlwinm r25,r15,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r24,40(r6)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r10,44(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// add r22,r25,r9
	ctx.r22.u64 = ctx.r25.u64 + ctx.r9.u64;
	// lwz r31,48(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// subf r5,r9,r22
	ctx.r5.s64 = ctx.r22.s64 - ctx.r9.s64;
	// lhz r26,2(r6)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stw r9,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r9.u32);
	// srawi r23,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r5.s32 >> 2;
	// subfic r25,r10,1024
	ctx.xer.ca = ctx.r10.u32 <= 1024;
	ctx.r25.s64 = 1024 - ctx.r10.s64;
	// subf r5,r28,r24
	ctx.r5.s64 = ctx.r24.s64 - ctx.r28.s64;
	// rlwinm r3,r28,10,0,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 10) & 0xFFFFFC00;
	// divwu r28,r25,r31
	ctx.r28.u32 = ctx.r25.u32 / ctx.r31.u32;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// addi r19,r6,44
	ctx.r19.s64 = ctx.r6.s64 + 44;
	// addi r18,r6,2
	ctx.r18.s64 = ctx.r6.s64 + 2;
	// cmplw cr6,r23,r28
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83075d34
	if (ctx.cr6.lt) goto loc_83075D34;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
loc_83075D34:
	// lis r28,-32247
	ctx.r28.s64 = -2113339392;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f0,14232(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 14232);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x83075dfc
	if (!ctx.cr6.eq) goto loc_83075DFC;
	// mullw r28,r5,r10
	ctx.r28.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// mullw r24,r5,r31
	ctx.r24.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r31.s32);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_83075D50:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// beq cr6,0x83075dfc
	if (ctx.cr6.eq) goto loc_83075DFC;
	// lhz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r25,r27
	ctx.r25.s64 = ctx.r27.s16;
	// lhz r21,6(r11)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r20,r26
	ctx.r20.s64 = ctx.r26.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// lwz r14,-256(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// extsh r21,r21
	ctx.r21.s64 = ctx.r21.s16;
	// subf r25,r25,r30
	ctx.r25.s64 = ctx.r30.s64 - ctx.r25.s64;
	// rlwinm r30,r27,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF0000;
	// mullw r25,r25,r29
	ctx.r25.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r29.s32);
	// subf r21,r20,r21
	ctx.r21.s64 = ctx.r21.s64 - ctx.r20.s64;
	// add r25,r25,r30
	ctx.r25.u64 = ctx.r25.u64 + ctx.r30.u64;
	// mullw r29,r21,r29
	ctx.r29.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r29.s32);
	// lwz r21,-252(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	// rlwinm r30,r26,16,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// extsw r25,r25
	ctx.r25.s64 = ctx.r25.s32;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// std r25,-240(r1)
	PPC_STORE_U64(ctx.r1.u32 + -240, ctx.r25.u64);
	// lfd f13,-240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r30,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.r30.u64);
	// lfd f11,-192(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// add r28,r24,r28
	ctx.r28.u64 = ctx.r24.u64 + ctx.r28.u64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// rlwinm r30,r28,22,10,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 22) & 0x3FFFFF;
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// rlwinm r30,r8,16,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// clrlwi r29,r8,16
	ctx.r29.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f6,0(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// beq cr6,0x83075d50
	if (ctx.cr6.eq) goto loc_83075D50;
loc_83075DFC:
	// subf r28,r9,r22
	ctx.r28.s64 = ctx.r22.s64 - ctx.r9.s64;
	// addi r20,r16,-1
	ctx.r20.s64 = ctx.r16.s64 + -1;
	// srawi r25,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r28.s32 >> 2;
	// subfic r28,r10,1024
	ctx.xer.ca = ctx.r10.u32 <= 1024;
	ctx.r28.s64 = 1024 - ctx.r10.s64;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// divwu r28,r28,r31
	ctx.r28.u32 = ctx.r28.u32 / ctx.r31.u32;
	// cmplw cr6,r25,r28
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83075e20
	if (ctx.cr6.lt) goto loc_83075E20;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
loc_83075E20:
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, ctx.xer);
	// bgt cr6,0x83076174
	if (ctx.cr6.gt) goto loc_83076174;
	// mullw r28,r5,r10
	ctx.r28.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r24,r28,r3
	ctx.r24.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mullw r21,r5,r31
	ctx.r21.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r31.s32);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_83075E40:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// beq cr6,0x83075e68
	if (ctx.cr6.eq) goto loc_83075E68;
	// add r28,r28,r21
	ctx.r28.u64 = ctx.r28.u64 + ctx.r21.u64;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// rlwinm r26,r28,22,10,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 22) & 0x3FFFFF;
	// add r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 + ctx.r27.u64;
	// rlwinm r26,r27,16,16,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r26,r20
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r20.u32, ctx.xer);
	// ble cr6,0x83075e40
	if (!ctx.cr6.gt) goto loc_83075E40;
loc_83075E68:
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 4, ctx.xer);
	// blt cr6,0x8307609c
	if (ctx.cr6.lt) goto loc_8307609C;
	// rlwinm r26,r31,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r31,r10
	ctx.r30.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r29,r26,r10
	ctx.r29.u64 = ctx.r26.u64 + ctx.r10.u64;
	// mullw r30,r30,r5
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r5.s32);
	// mullw r28,r29,r5
	ctx.r28.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r5.s32);
	// add r29,r28,r3
	ctx.r29.u64 = ctx.r28.u64 + ctx.r3.u64;
	// rlwinm r28,r31,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r25,r31,r28
	ctx.r25.u64 = ctx.r31.u64 + ctx.r28.u64;
	// rlwinm r30,r30,22,10,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 22) & 0x3FFFFF;
	// add r28,r25,r10
	ctx.r28.u64 = ctx.r25.u64 + ctx.r10.u64;
	// add r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 + ctx.r8.u64;
	// mullw r28,r28,r5
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r5.s32);
	// stw r30,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r30.u32);
	// rlwinm r27,r29,22,10,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3FFFFF;
	// add r29,r28,r3
	ctx.r29.u64 = ctx.r28.u64 + ctx.r3.u64;
	// addi r28,r1,-176
	ctx.r28.s64 = ctx.r1.s64 + -176;
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// rlwinm r27,r29,22,10,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3FFFFF;
	// li r29,16
	ctx.r29.s64 = 16;
	// stw r30,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r30.u32);
	// addi r23,r1,-192
	ctx.r23.s64 = ctx.r1.s64 + -192;
	// stw r8,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// stw r29,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r29.u32);
	// lvx128 v61,r0,r28
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// vspltw128 v61,v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// addi r27,r1,-176
	ctx.r27.s64 = ctx.r1.s64 + -176;
	// stw r30,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r30.u32);
	// li r28,4
	ctx.r28.s64 = 4;
	// lvx128 v63,r0,r23
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// lis r23,0
	ctx.r23.s64 = 0;
	// vsrw128 v0,v63,v61
	ctx.v0.u32[0] = ctx.v63.u32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v0.u32[1] = ctx.v63.u32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v0.u32[2] = ctx.v63.u32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v0.u32[3] = ctx.v63.u32[3] >> (ctx.v61.u8[12] & 0x1F);
	// stw r28,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r28.u32);
	// addi r28,r1,-176
	ctx.r28.s64 = ctx.r1.s64 + -176;
	// lvx128 v60,r0,r27
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// ori r27,r23,65535
	ctx.r27.u64 = ctx.r23.u64 | 65535;
	// stw r28,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r28.u32);
	// rlwinm r28,r22,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r23,-240(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// vspltw128 v9,v60,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// stw r27,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r27.u32);
	// rlwinm r27,r22,0,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFC;
	// lvx128 v59,r0,r23
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// vspltw128 v62,v59,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vand128 v58,v63,v62
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// subf r22,r27,r22
	ctx.r22.s64 = ctx.r22.s64 - ctx.r27.s64;
	// vcuxwfp128 v13,v58,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// beq cr6,0x83076094
	if (ctx.cr6.eq) goto loc_83076094;
	// rlwinm r23,r31,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_83075F40:
	// vadduws v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// addi r8,r1,-176
	ctx.r8.s64 = ctx.r1.s64 + -176;
	// addi r27,r1,-240
	ctx.r27.s64 = ctx.r1.s64 + -240;
	// li r24,1024
	ctx.r24.s64 = 1024;
	// vadduws v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vadduws v0,v0,v9
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// lwz r8,-176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// rlwinm r28,r8,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r24,r28
	// lvlx v12,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r28,-228(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	// add r10,r23,r10
	ctx.r10.u64 = ctx.r23.u64 + ctx.r10.u64;
	// lwz r27,-236(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// addi r17,r1,-192
	ctx.r17.s64 = ctx.r1.s64 + -192;
	// lwz r24,-232(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// mullw r8,r5,r10
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// lwz r16,-240(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r15,-164(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// lvlx v11,r28,r11
	temp.u32 = ctx.r28.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r28,-168(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r14,-172(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lvlx v10,r27,r11
	temp.u32 = ctx.r27.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v8,r24,r11
	temp.u32 = ctx.r24.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,r16,r11
	temp.u32 = ctx.r16.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghh v6,v10,v11
	_mm_store_si128((__m128i*)ctx.v6.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_load_si128((__m128i*)ctx.v10.u16)));
	// lvlx v5,r15,r11
	temp.u32 = ctx.r15.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v2,r28,r11
	temp.u32 = ctx.r28.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghh v3,v7,v8
	_mm_store_si128((__m128i*)ctx.v3.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v8.u16), _mm_load_si128((__m128i*)ctx.v7.u16)));
	// lvlx v4,r14,r11
	temp.u32 = ctx.r14.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghh v31,v12,v2
	_mm_store_si128((__m128i*)ctx.v31.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v2.u16), _mm_load_si128((__m128i*)ctx.v12.u16)));
	// add r24,r8,r3
	ctx.r24.u64 = ctx.r8.u64 + ctx.r3.u64;
	// vmrghh v1,v4,v5
	_mm_store_si128((__m128i*)ctx.v1.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v5.u16), _mm_load_si128((__m128i*)ctx.v4.u16)));
	// add r28,r31,r10
	ctx.r28.u64 = ctx.r31.u64 + ctx.r10.u64;
	// vmrghh v30,v3,v6
	_mm_store_si128((__m128i*)ctx.v30.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v6.u16), _mm_load_si128((__m128i*)ctx.v3.u16)));
	// rlwinm r8,r24,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 22) & 0x3FFFFF;
	// mullw r28,r28,r5
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r5.s32);
	// vmrghh v29,v31,v1
	_mm_store_si128((__m128i*)ctx.v29.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v1.u16), _mm_load_si128((__m128i*)ctx.v31.u16)));
	// vupkhsb128 v57,v30,v96
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v30.s16), _mm_load_si128((__m128i*)ctx.v30.s16))));
	// vupklsb128 v56,v30,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v30.s16)));
	// vupkhsb128 v55,v29,v96
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v29.s16))));
	// vcsxwfp128 v54,v57,15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vupklsb128 v53,v29,v96
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v29.s16)));
	// vcsxwfp128 v52,v56,15
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v0,v55,15
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// vcsxwfp128 v12,v53,15
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x38000000)))));
	// add r30,r26,r10
	ctx.r30.u64 = ctx.r26.u64 + ctx.r10.u64;
	// stw r8,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// add r27,r28,r3
	ctx.r27.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mullw r28,r30,r5
	ctx.r28.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r5.s32);
	// vsubfp128 v10,v54,v0
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v11,v52,v12
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v12.f32)));
	// add r16,r25,r10
	ctx.r16.u64 = ctx.r25.u64 + ctx.r10.u64;
	// rlwinm r30,r27,22,10,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 22) & 0x3FFFFF;
	// add r27,r28,r3
	ctx.r27.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mullw r28,r16,r5
	ctx.r28.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r5.s32);
	// vmaddfp v10,v10,v13,v0
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v11,v13,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// add r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 + ctx.r8.u64;
	// rlwinm r27,r27,22,10,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 22) & 0x3FFFFF;
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// stw r30,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r30.u32);
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// rlwinm r28,r28,22,10,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 22) & 0x3FFFFF;
	// stvlx v10,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stw r30,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r30.u32);
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// stvrx v10,r9,r29
	ea = ctx.r9.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v10.u8[i]);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stw r30,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r30.u32);
	// stvlx v0,0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// lvx128 v63,r0,r17
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r17.u32) & ~0xF), VectorMaskL));
	// vand128 v51,v63,v62
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// stvrx v0,r7,r29
	ea = ctx.r7.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// vsrw128 v0,v63,v61
	ctx.v0.u32[0] = ctx.v63.u32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v0.u32[1] = ctx.v63.u32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v0.u32[2] = ctx.v63.u32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v0.u32[3] = ctx.v63.u32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vcuxwfp128 v13,v51,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v51.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// bdnz 0x83075f40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83075F40;
	// lwz r15,-224(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// lwz r16,-220(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r17,-216(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r14,-256(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
loc_83076094:
	// rlwinm r30,r8,16,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// clrlwi r29,r8,16
	ctx.r29.u64 = ctx.r8.u32 & 0xFFFF;
loc_8307609C:
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, ctx.xer);
	// bgt cr6,0x83076170
	if (ctx.cr6.gt) goto loc_83076170;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r28,r7,-4
	ctx.r28.s64 = ctx.r7.s64 + -4;
loc_830760AC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// beq cr6,0x83076170
	if (ctx.cr6.eq) goto loc_83076170;
	// rlwinm r3,r30,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r3,3
	ctx.r30.s64 = ctx.r3.s64 + 3;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r27,r30,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// add r5,r5,r21
	ctx.r5.u64 = ctx.r5.u64 + ctx.r21.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r26,2(r7)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// rlwinm r30,r5,22,10,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3FFFFF;
	// lhzx r27,r27,r11
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r11.u32);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lhz r24,0(r7)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r25,r26
	ctx.r25.s64 = ctx.r26.s16;
	// extsh r7,r27
	ctx.r7.s64 = ctx.r27.s16;
	// lhzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// extsh r27,r24
	ctx.r27.s64 = ctx.r24.s16;
	// subf r7,r25,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r25.s64;
	// extsh r25,r3
	ctx.r25.s64 = ctx.r3.s16;
	// mullw r7,r7,r29
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// rotlwi r3,r26,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r26.u32, 16);
	// subf r27,r27,r25
	ctx.r27.s64 = ctx.r25.s64 - ctx.r27.s64;
	// add r26,r7,r3
	ctx.r26.u64 = ctx.r7.u64 + ctx.r3.u64;
	// mullw r7,r27,r29
	ctx.r7.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r29.s32);
	// rotlwi r3,r24,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r24.u32, 16);
	// extsw r29,r26
	ctx.r29.s64 = ctx.r26.s32;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// std r29,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.r29.u64);
	// lfd f13,-192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r7,-216(r1)
	PPC_STORE_U64(ctx.r1.u32 + -216, ctx.r7.u64);
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// rlwinm r30,r8,16,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// clrlwi r29,r8,16
	ctx.r29.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, ctx.xer);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsu f6,4(r28)
	temp.f32 = float(ctx.f6.f64);
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r28.u32 = ea;
	// lfd f11,-216(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// ble cr6,0x830760ac
	if (!ctx.cr6.gt) goto loc_830760AC;
loc_83076170:
	// lwz r21,-252(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -252);
loc_83076174:
	// stw r10,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r30,r16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x83076184
	if (ctx.cr6.lt) goto loc_83076184;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_83076184:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830761a4
	if (ctx.cr6.eq) goto loc_830761A4;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// sth r10,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r10.u16);
	// sth r7,0(r18)
	PPC_STORE_U16(ctx.r18.u32 + 0, ctx.r7.u16);
loc_830761A4:
	// lwz r11,-208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// rlwinm r10,r30,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// lwz r7,-204(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// cmplw cr6,r30,r16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r16.u32, ctx.xer);
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r5,r7,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// lhz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// sth r10,0(r17)
	PPC_STORE_U16(ctx.r17.u32 + 0, ctx.r10.u16);
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r8,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r8.u16);
	// bne cr6,0x830761e8
	if (!ctx.cr6.eq) goto loc_830761E8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830761f0
	goto loc_830761F0;
loc_830761E8:
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
loc_830761F0:
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x83076204
	if (!ctx.cr6.eq) goto loc_83076204;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_83076204:
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83076218"))) PPC_WEAK_FUNC(sub_83076218);
PPC_FUNC_IMPL(__imp__sub_83076218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x83076220;
	__savegprlr_14(ctx, base);
	// addi r14,r6,24
	ctx.r14.s64 = ctx.r6.s64 + 24;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r15,r6,28
	ctx.r15.s64 = ctx.r6.s64 + 28;
	// lwz r30,36(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// addi r16,r6,32
	ctx.r16.s64 = ctx.r6.s64 + 32;
	// stw r14,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r14.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r15,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r15.u32);
	// addi r19,r3,14
	ctx.r19.s64 = ctx.r3.s64 + 14;
	// stw r16,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r16.u32);
	// lwz r9,0(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// lwz r8,0(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subf r22,r11,r5
	ctx.r22.s64 = ctx.r5.s64 - ctx.r11.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lhz r18,0(r19)
	ctx.r18.u64 = PPC_LOAD_U16(ctx.r19.u32 + 0);
	// rlwinm r31,r8,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// stw r22,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r22.u32);
	// clrlwi r27,r8,16
	ctx.r27.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
loc_83076278:
	// dcbt r3,r10
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bdnz 0x83076278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83076278;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r22,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,40(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,44(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// subf r7,r30,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r30.s64;
	// lwz r3,48(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// add r24,r28,r9
	ctx.r24.u64 = ctx.r28.u64 + ctx.r9.u64;
	// lbz r29,0(r6)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// rlwinm r5,r30,10,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 10) & 0xFFFFFC00;
	// subf r30,r9,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r9.s64;
	// addi r20,r6,44
	ctx.r20.s64 = ctx.r6.s64 + 44;
	// srawi r25,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r30.s32 >> 2;
	// subfic r30,r11,1024
	ctx.xer.ca = ctx.r11.u32 <= 1024;
	ctx.r30.s64 = 1024 - ctx.r11.s64;
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// divwu r30,r30,r3
	ctx.r30.u32 = ctx.r30.u32 / ctx.r3.u32;
	// twllei r3,0
	if (ctx.r3.u32 <= 0) __builtin_debugtrap();
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x830762d8
	if (ctx.cr6.lt) goto loc_830762D8;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_830762D8:
	// lis r30,-32233
	ctx.r30.s64 = -2112421888;
	// lis r28,-32250
	ctx.r28.s64 = -2113536000;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f13,24436(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-25140(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -25140);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x83076360
	if (!ctx.cr6.eq) goto loc_83076360;
	// mullw r30,r7,r11
	ctx.r30.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mullw r26,r7,r3
	ctx.r26.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
loc_830762FC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// beq cr6,0x83076360
	if (ctx.cr6.eq) goto loc_83076360;
	// lbz r28,1(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// clrlwi r23,r29,24
	ctx.r23.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r31,r29,16,8,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFF0000;
	// subf r28,r23,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r23.s64;
	// add r30,r26,r30
	ctx.r30.u64 = ctx.r26.u64 + ctx.r30.u64;
	// mullw r28,r28,r27
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r27.s32);
	// add r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 + ctx.r31.u64;
	// rlwinm r31,r30,22,10,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 22) & 0x3FFFFF;
	// extsw r28,r28
	ctx.r28.s64 = ctx.r28.s32;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// std r28,-224(r1)
	PPC_STORE_U64(ctx.r1.u32 + -224, ctx.r28.u64);
	// lfd f12,-224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// rlwinm r31,r8,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// clrlwi r27,r8,16
	ctx.r27.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// fmsubs f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// beq cr6,0x830762fc
	if (ctx.cr6.eq) goto loc_830762FC;
loc_83076360:
	// subf r30,r9,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r9.s64;
	// addi r21,r18,-1
	ctx.r21.s64 = ctx.r18.s64 + -1;
	// srawi r25,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r30.s32 >> 2;
	// subfic r30,r11,1024
	ctx.xer.ca = ctx.r11.u32 <= 1024;
	ctx.r30.s64 = 1024 - ctx.r11.s64;
	// twllei r3,0
	if (ctx.r3.u32 <= 0) __builtin_debugtrap();
	// divwu r30,r30,r3
	ctx.r30.u32 = ctx.r30.u32 / ctx.r3.u32;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x83076384
	if (ctx.cr6.lt) goto loc_83076384;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_83076384:
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// bgt cr6,0x830766d8
	if (ctx.cr6.gt) goto loc_830766D8;
	// mullw r30,r7,r11
	ctx.r30.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r28,r30,r5
	ctx.r28.u64 = ctx.r30.u64 + ctx.r5.u64;
	// mullw r22,r7,r3
	ctx.r22.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_830763A4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// beq cr6,0x830763cc
	if (ctx.cr6.eq) goto loc_830763CC;
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// rlwinm r26,r30,22,10,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 22) & 0x3FFFFF;
	// add r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 + ctx.r29.u64;
	// rlwinm r26,r29,16,16,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r26,r21
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x830763a4
	if (!ctx.cr6.gt) goto loc_830763A4;
loc_830763CC:
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 4, ctx.xer);
	// blt cr6,0x8307665c
	if (ctx.cr6.lt) goto loc_8307665C;
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// addi r29,r31,18544
	ctx.r29.s64 = ctx.r31.s64 + 18544;
	// lwz r31,18560(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18560);
	// clrlwi r27,r31,31
	ctx.r27.u64 = ctx.r31.u32 & 0x1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x83076404
	if (!ctx.cr6.eq) goto loc_83076404;
	// vspltisw128 v59,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_set1_epi32(int(0x0)));
	// ori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 | 1;
	// stw r31,18560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18560, ctx.r31.u32);
	// stvx128 v59,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x83076408
	goto loc_83076408;
loc_83076404:
	// lvx128 v59,r0,r29
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
loc_83076408:
	// li r24,16
	ctx.r24.s64 = 16;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// addi r26,r1,-176
	ctx.r26.s64 = ctx.r1.s64 + -176;
	// stw r24,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r24.u32);
	// mullw r31,r31,r7
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// lvx128 v62,r0,r26
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// vspltw128 v60,v62,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// addi r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 3;
	// add r27,r30,r5
	ctx.r27.u64 = ctx.r30.u64 + ctx.r5.u64;
	// rlwinm r31,r31,22,10,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 22) & 0x3FFFFF;
	// mullw r30,r29,r7
	ctx.r30.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r7.s32);
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// rlwinm r27,r27,22,10,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 22) & 0x3FFFFF;
	// stw r31,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r31.u32);
	// rlwinm r29,r30,22,10,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 22) & 0x3FFFFF;
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
	// addi r30,r1,-208
	ctx.r30.s64 = ctx.r1.s64 + -208;
	// stw r8,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r8.u32);
	// add r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r31,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r31.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r29,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r29.u32);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stw r27,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r27.u32);
	// addi r27,r1,-176
	ctx.r27.s64 = ctx.r1.s64 + -176;
	// lvx128 v63,r0,r30
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lis r30,0
	ctx.r30.s64 = 0;
	// lis r26,4112
	ctx.r26.s64 = 269484032;
	// vsrw128 v0,v63,v60
	ctx.v0.u32[0] = ctx.v63.u32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v0.u32[1] = ctx.v63.u32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v0.u32[2] = ctx.v63.u32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v0.u32[3] = ctx.v63.u32[3] >> (ctx.v60.u8[12] & 0x1F);
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
	// lvx128 v58,r0,r31
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// ori r26,r26,4096
	ctx.r26.u64 = ctx.r26.u64 | 4096;
	// vspltw128 v11,v58,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// stw r30,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r30.u32);
	// lvx128 v57,r0,r27
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// vspltw128 v61,v57,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), 0xFF));
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// lis r25,4112
	ctx.r25.s64 = 269484032;
	// vand128 v56,v63,v61
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// lis r27,4112
	ctx.r27.s64 = 269484032;
	// stw r26,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r26.u32);
	// lis r15,4112
	ctx.r15.s64 = 269484032;
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r30,r23,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r14,r23,0,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFC;
	// vcuxwfp128 v13,v56,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// ori r25,r25,4097
	ctx.r25.u64 = ctx.r25.u64 | 4097;
	// ori r27,r27,4098
	ctx.r27.u64 = ctx.r27.u64 | 4098;
	// ori r26,r15,4099
	ctx.r26.u64 = ctx.r15.u64 | 4099;
	// stw r25,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r25.u32);
	// subf r23,r14,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r14.s64;
	// stw r27,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r27.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r26,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r26.u32);
	// beq cr6,0x8307664c
	if (ctx.cr6.eq) goto loc_8307664C;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r31,-192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r28,r1,-224
	ctx.r28.s64 = ctx.r1.s64 + -224;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// add r25,r3,r8
	ctx.r25.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// rlwinm r27,r3,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,15600
	ctx.r8.s64 = ctx.r8.s64 + 15600;
	// lvx128 v7,r0,r28
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// rlwinm r26,r3,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r31,r10
	ctx.r30.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lvx128 v63,r0,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
loc_83076524:
	// addi r8,r1,-176
	ctx.r8.s64 = ctx.r1.s64 + -176;
	// vadduws v0,v0,v11
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// li r28,1024
	ctx.r28.s64 = 1024;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r28,r30
	// lwz r30,-180(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// lvlx v12,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// std r6,-224(r1)
	PPC_STORE_U64(ctx.r1.u32 + -224, ctx.r6.u64);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r31,-188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// addi r16,r1,-208
	ctx.r16.s64 = ctx.r1.s64 + -208;
	// lwz r28,-184(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// mullw r8,r7,r11
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// lwz r15,-164(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// lvlx v10,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r6,-168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r30,-176(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r14,-172(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lvlx v9,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v8,r28,r10
	temp.u32 = ctx.r28.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v6,r15,r10
	temp.u32 = ctx.r15.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v5,v9,v10
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// lvlx v2,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v3,v12,v8
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// lvlx v1,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v4,r14,r10
	temp.u32 = ctx.r14.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v30,v1,v2
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// add r28,r8,r5
	ctx.r28.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vmrghb v31,v4,v6
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// add r31,r3,r11
	ctx.r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// vmrghb v29,v3,v5
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// rlwinm r8,r28,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 22) & 0x3FFFFF;
	// mullw r31,r31,r7
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// vmrghb v28,v30,v31
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v30.u8)));
	// vperm128 v55,v29,v59,v7
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v54,v28,v59,v7
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcuxwfp128 v53,v55,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v52,v54,7
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r30,r26,r11
	ctx.r30.u64 = ctx.r26.u64 + ctx.r11.u64;
	// stw r8,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r8.u32);
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v0,v53,v63
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v51,v52,v63
	_mm_store_ps(ctx.v51.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v63.f32)));
	// add r29,r25,r11
	ctx.r29.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r15,r30,r5
	ctx.r15.u64 = ctx.r30.u64 + ctx.r5.u64;
	// rlwinm r31,r31,22,10,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 22) & 0x3FFFFF;
	// mullw r30,r29,r7
	ctx.r30.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r7.s32);
	// vsubfp128 v12,v51,v0
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v0.f32)));
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// rlwinm r29,r15,22,10,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 22) & 0x3FFFFF;
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// stw r31,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r31.u32);
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// rlwinm r30,r30,22,10,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 22) & 0x3FFFFF;
	// addi r15,r1,-192
	ctx.r15.s64 = ctx.r1.s64 + -192;
	// stw r31,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r31.u32);
	// add r29,r30,r31
	ctx.r29.u64 = ctx.r30.u64 + ctx.r31.u64;
	// vmaddfp v0,v12,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvlx v0,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stw r29,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r29.u32);
	// stvrx v0,r9,r24
	ea = ctx.r9.u32 + ctx.r24.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// ld r6,-224(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// lvx128 v62,r0,r16
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r16.u32) & ~0xF), VectorMaskL));
	// vsrw128 v0,v62,v60
	ctx.v0.u32[0] = ctx.v62.u32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v0.u32[1] = ctx.v62.u32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v0.u32[2] = ctx.v62.u32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v0.u32[3] = ctx.v62.u32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vand128 v50,v62,v61
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// stvx128 v0,r0,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r31,-192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// add r30,r31,r10
	ctx.r30.u64 = ctx.r31.u64 + ctx.r10.u64;
	// vcuxwfp128 v13,v50,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v50.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// bdnz 0x83076524
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83076524;
	// lwz r16,-232(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
loc_8307664C:
	// lwz r15,-236(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// rlwinm r31,r8,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// lwz r14,-240(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// clrlwi r27,r8,16
	ctx.r27.u64 = ctx.r8.u32 & 0xFFFF;
loc_8307665C:
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// bgt cr6,0x830766d4
	if (ctx.cr6.gt) goto loc_830766D4;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_83076668:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// beq cr6,0x830766d4
	if (ctx.cr6.eq) goto loc_830766D4;
	// add r29,r10,r31
	ctx.r29.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbzx r31,r10,r31
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// add r7,r7,r22
	ctx.r7.u64 = ctx.r7.u64 + ctx.r22.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// rotlwi r30,r31,16
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r31.u32, 16);
	// rlwinm r5,r7,22,10,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 22) & 0x3FFFFF;
	// lbz r31,1(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r5,r28,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r28.s64;
	// rlwinm r31,r8,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// mullw r5,r5,r27
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// clrlwi r27,r8,16
	ctx.r27.u64 = ctx.r8.u32 & 0xFFFF;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// std r5,-224(r1)
	PPC_STORE_U64(ctx.r1.u32 + -224, ctx.r5.u64);
	// lfd f12,-224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmsubs f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// ble cr6,0x83076668
	if (!ctx.cr6.gt) goto loc_83076668;
loc_830766D4:
	// lwz r22,-228(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -228);
loc_830766D8:
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r31,r18
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x830766e8
	if (ctx.cr6.lt) goto loc_830766E8;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_830766E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830766f8
	if (ctx.cr6.eq) goto loc_830766F8;
	// lbzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
loc_830766F8:
	// rlwinm r11,r31,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// subf r10,r17,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r17.s64;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// stw r9,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r31,r18
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r18.u32, ctx.xer);
	// lhz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r19.u32 + 0);
	// subf r7,r31,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r31.s64;
	// sth r7,0(r19)
	PPC_STORE_U16(ctx.r19.u32 + 0, ctx.r7.u16);
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r5,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r5.u16);
	// bne cr6,0x83076734
	if (!ctx.cr6.eq) goto loc_83076734;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8307673c
	goto loc_8307673C;
loc_83076734:
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
loc_8307673C:
	// stw r10,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x83076750
	if (!ctx.cr6.eq) goto loc_83076750;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_83076750:
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83076764"))) PPC_WEAK_FUNC(sub_83076764);
PPC_FUNC_IMPL(__imp__sub_83076764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83076768"))) PPC_WEAK_FUNC(sub_83076768);
PPC_FUNC_IMPL(__imp__sub_83076768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x83076770;
	__savegprlr_14(ctx, base);
	// addi r21,r6,24
	ctx.r21.s64 = ctx.r6.s64 + 24;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r17,r3,14
	ctx.r17.s64 = ctx.r3.s64 + 14;
	// lwz r28,36(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// addi r14,r6,28
	ctx.r14.s64 = ctx.r6.s64 + 28;
	// stw r21,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r21.u32);
	// addi r15,r6,32
	ctx.r15.s64 = ctx.r6.s64 + 32;
	// stw r17,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r17.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r14,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r14.u32);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r16,0(r17)
	ctx.r16.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r8,0(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r15,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r15.u32);
	// rlwinm r29,r8,16,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// stw r16,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r16.u32);
	// clrlwi r30,r8,16
	ctx.r30.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r5,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r5.u32);
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
loc_830767D4:
	// dcbt r3,r11
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bdnz 0x830767d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830767D4;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r5,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r24,40(r6)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r10,44(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// add r22,r25,r9
	ctx.r22.u64 = ctx.r25.u64 + ctx.r9.u64;
	// lwz r31,48(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// subf r5,r9,r22
	ctx.r5.s64 = ctx.r22.s64 - ctx.r9.s64;
	// lbz r26,1(r6)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stw r9,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r9.u32);
	// srawi r23,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r5.s32 >> 2;
	// subfic r25,r10,1024
	ctx.xer.ca = ctx.r10.u32 <= 1024;
	ctx.r25.s64 = 1024 - ctx.r10.s64;
	// subf r5,r28,r24
	ctx.r5.s64 = ctx.r24.s64 - ctx.r28.s64;
	// rlwinm r3,r28,10,0,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 10) & 0xFFFFFC00;
	// divwu r28,r25,r31
	ctx.r28.u32 = ctx.r25.u32 / ctx.r31.u32;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// addi r19,r6,44
	ctx.r19.s64 = ctx.r6.s64 + 44;
	// addi r18,r6,1
	ctx.r18.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r23,r28
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8307684c
	if (ctx.cr6.lt) goto loc_8307684C;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
loc_8307684C:
	// lis r28,-32233
	ctx.r28.s64 = -2112421888;
	// lis r25,-32250
	ctx.r25.s64 = -2113536000;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f13,24436(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-25140(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -25140);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x83076910
	if (!ctx.cr6.eq) goto loc_83076910;
	// mullw r28,r5,r10
	ctx.r28.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// mullw r24,r5,r31
	ctx.r24.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r31.s32);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_83076870:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// beq cr6,0x83076910
	if (ctx.cr6.eq) goto loc_83076910;
	// lbz r29,2(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r25,r27,24
	ctx.r25.u64 = ctx.r27.u32 & 0xFF;
	// lbz r21,3(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r20,r26,24
	ctx.r20.u64 = ctx.r26.u32 & 0xFF;
	// subf r25,r25,r29
	ctx.r25.s64 = ctx.r29.s64 - ctx.r25.s64;
	// rlwinm r29,r27,16,8,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFF0000;
	// mullw r25,r25,r30
	ctx.r25.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r30.s32);
	// subf r21,r20,r21
	ctx.r21.s64 = ctx.r21.s64 - ctx.r20.s64;
	// add r25,r25,r29
	ctx.r25.u64 = ctx.r25.u64 + ctx.r29.u64;
	// mullw r29,r21,r30
	ctx.r29.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r30.s32);
	// lwz r21,-256(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// rlwinm r30,r26,16,8,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFF0000;
	// extsw r25,r25
	ctx.r25.s64 = ctx.r25.s32;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// std r25,-240(r1)
	PPC_STORE_U64(ctx.r1.u32 + -240, ctx.r25.u64);
	// lfd f12,-240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// std r30,-216(r1)
	PPC_STORE_U64(ctx.r1.u32 + -216, ctx.r30.u64);
	// lfd f10,-216(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r28,r24,r28
	ctx.r28.u64 = ctx.r24.u64 + ctx.r28.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// rlwinm r30,r28,22,10,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 22) & 0x3FFFFF;
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// rlwinm r29,r8,16,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// clrlwi r30,r8,16
	ctx.r30.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// fmsubs f6,f8,f0,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f6,0(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmsubs f5,f7,f0,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f5,0(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// beq cr6,0x83076870
	if (ctx.cr6.eq) goto loc_83076870;
loc_83076910:
	// subf r28,r9,r22
	ctx.r28.s64 = ctx.r22.s64 - ctx.r9.s64;
	// addi r20,r16,-1
	ctx.r20.s64 = ctx.r16.s64 + -1;
	// srawi r24,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r28.s32 >> 2;
	// subfic r28,r10,1024
	ctx.xer.ca = ctx.r10.u32 <= 1024;
	ctx.r28.s64 = 1024 - ctx.r10.s64;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// divwu r28,r28,r31
	ctx.r28.u32 = ctx.r28.u32 / ctx.r31.u32;
	// cmplw cr6,r24,r28
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83076934
	if (ctx.cr6.lt) goto loc_83076934;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
loc_83076934:
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// bgt cr6,0x83076d34
	if (ctx.cr6.gt) goto loc_83076D34;
	// mullw r28,r5,r10
	ctx.r28.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r26,r28,r3
	ctx.r26.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mullw r21,r5,r31
	ctx.r21.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r31.s32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_83076954:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// beq cr6,0x8307697c
	if (ctx.cr6.eq) goto loc_8307697C;
	// add r28,r28,r21
	ctx.r28.u64 = ctx.r28.u64 + ctx.r21.u64;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// rlwinm r25,r28,22,10,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 22) & 0x3FFFFF;
	// add r27,r25,r27
	ctx.r27.u64 = ctx.r25.u64 + ctx.r27.u64;
	// rlwinm r25,r27,16,16,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r25,r20
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r20.u32, ctx.xer);
	// ble cr6,0x83076954
	if (!ctx.cr6.gt) goto loc_83076954;
loc_8307697C:
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 4, ctx.xer);
	// blt cr6,0x83076c74
	if (ctx.cr6.lt) goto loc_83076C74;
	// lis r29,-31958
	ctx.r29.s64 = -2094399488;
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// addi r28,r30,18576
	ctx.r28.s64 = ctx.r30.s64 + 18576;
	// lwz r30,18592(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18592);
	// clrlwi r27,r30,31
	ctx.r27.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x830769b4
	if (!ctx.cr6.eq) goto loc_830769B4;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// stw r30,18592(r29)
	PPC_STORE_U32(ctx.r29.u32 + 18592, ctx.r30.u32);
	// stvx128 v62,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x830769b8
	goto loc_830769B8;
loc_830769B4:
	// lvx128 v62,r0,r28
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
loc_830769B8:
	// addi r29,r10,2
	ctx.r29.s64 = ctx.r10.s64 + 2;
	// std r11,-216(r1)
	PPC_STORE_U64(ctx.r1.u32 + -216, ctx.r11.u64);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// mullw r28,r29,r5
	ctx.r28.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r5.s32);
	// addi r29,r10,3
	ctx.r29.s64 = ctx.r10.s64 + 3;
	// add r27,r28,r3
	ctx.r27.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mullw r28,r29,r5
	ctx.r28.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r5.s32);
	// add r29,r28,r3
	ctx.r29.u64 = ctx.r28.u64 + ctx.r3.u64;
	// rlwinm r25,r27,22,10,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r27,r29,22,10,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3FFFFF;
	// addi r28,r1,-176
	ctx.r28.s64 = ctx.r1.s64 + -176;
	// li r29,16
	ctx.r29.s64 = 16;
	// stw r29,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r29.u32);
	// mullw r30,r30,r5
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r5.s32);
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lis r16,4112
	ctx.r16.s64 = 269484032;
	// rlwinm r30,r30,22,10,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 22) & 0x3FFFFF;
	// lis r24,4112
	ctx.r24.s64 = 269484032;
	// add r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 + ctx.r8.u64;
	// lis r23,4112
	ctx.r23.s64 = 269484032;
	// stw r30,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r30.u32);
	// add r30,r25,r30
	ctx.r30.u64 = ctx.r25.u64 + ctx.r30.u64;
	// addi r25,r1,-208
	ctx.r25.s64 = ctx.r1.s64 + -208;
	// stw r8,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r8.u32);
	// stw r30,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r30.u32);
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// addi r27,r1,-176
	ctx.r27.s64 = ctx.r1.s64 + -176;
	// lvx128 v61,r0,r28
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r30,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r30.u32);
	// ori r24,r24,4098
	ctx.r24.u64 = ctx.r24.u64 | 4098;
	// vspltw128 v59,v61,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// stw r28,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r28.u32);
	// lvx128 v63,r0,r25
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// lis r25,0
	ctx.r25.s64 = 0;
	// stw r24,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r24.u32);
	// lvx128 v58,r0,r27
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r28,r1,-176
	ctx.r28.s64 = ctx.r1.s64 + -176;
	// ori r27,r25,65535
	ctx.r27.u64 = ctx.r25.u64 | 65535;
	// vsrw128 v0,v63,v59
	ctx.v0.u32[0] = ctx.v63.u32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v0.u32[1] = ctx.v63.u32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v0.u32[2] = ctx.v63.u32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v0.u32[3] = ctx.v63.u32[3] >> (ctx.v59.u8[12] & 0x1F);
	// stw r27,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r27.u32);
	// lis r27,4112
	ctx.r27.s64 = 269484032;
	// lis r25,4112
	ctx.r25.s64 = 269484032;
	// lvx128 v57,r0,r28
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// ori r27,r27,4097
	ctx.r27.u64 = ctx.r27.u64 | 4097;
	// vspltw128 v60,v57,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), 0xFF));
	// ori r25,r25,4096
	ctx.r25.u64 = ctx.r25.u64 | 4096;
	// stw r27,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r27.u32);
	// lis r28,4112
	ctx.r28.s64 = 269484032;
	// vand128 v56,v63,v60
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v60.u8)));
	// stw r25,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r25.u32);
	// ori r27,r16,4100
	ctx.r27.u64 = ctx.r16.u64 | 4100;
	// ori r25,r23,4099
	ctx.r25.u64 = ctx.r23.u64 | 4099;
	// stw r28,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r28.u32);
	// lis r15,4112
	ctx.r15.s64 = 269484032;
	// stw r27,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r27.u32);
	// lis r14,4112
	ctx.r14.s64 = 269484032;
	// lwz r27,-240(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// rlwinm r11,r22,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r25,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r25.u32);
	// rlwinm r28,r22,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3FFFFFFF;
	// vspltw128 v9,v58,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// ori r24,r15,4101
	ctx.r24.u64 = ctx.r15.u64 | 4101;
	// vcuxwfp128 v13,v56,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// ori r25,r14,4102
	ctx.r25.u64 = ctx.r14.u64 | 4102;
	// ori r27,r27,4103
	ctx.r27.u64 = ctx.r27.u64 | 4103;
	// stw r24,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r24.u32);
	// subf r22,r11,r22
	ctx.r22.s64 = ctx.r22.s64 - ctx.r11.s64;
	// ld r11,-216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// stw r25,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r25.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r27,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r27.u32);
	// beq cr6,0x83076c60
	if (ctx.cr6.eq) goto loc_83076C60;
	// rlwinm r8,r31,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r28,r1,-192
	ctx.r28.s64 = ctx.r1.s64 + -192;
	// add r23,r31,r8
	ctx.r23.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r27,r1,-176
	ctx.r27.s64 = ctx.r1.s64 + -176;
	// addi r8,r8,15600
	ctx.r8.s64 = ctx.r8.s64 + 15600;
	// lvx128 v7,r0,r28
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// rlwinm r25,r31,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r31,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v6,r0,r27
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
loc_83076B0C:
	// vadduws v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// addi r8,r1,-192
	ctx.r8.s64 = ctx.r1.s64 + -192;
	// addi r28,r1,-176
	ctx.r28.s64 = ctx.r1.s64 + -176;
	// li r27,1024
	ctx.r27.s64 = 1024;
	// vadduws v12,v0,v9
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,-192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// add r26,r8,r11
	ctx.r26.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stvx128 v12,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r27,r26
	// lwz r28,-164(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// lvlx v11,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r27,-172(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// add r10,r25,r10
	ctx.r10.u64 = ctx.r25.u64 + ctx.r10.u64;
	// lwz r26,-168(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// addi r17,r1,-208
	ctx.r17.s64 = ctx.r1.s64 + -208;
	// lwz r16,-176(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// mullw r8,r5,r10
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// lwz r15,-180(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// lvlx v10,r28,r11
	temp.u32 = ctx.r28.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r28,-184(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r14,-188(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// lvlx v8,r27,r11
	temp.u32 = ctx.r27.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v5,r26,r11
	temp.u32 = ctx.r26.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v4,r16,r11
	temp.u32 = ctx.r16.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v3,v8,v10
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// lvlx v2,r15,r11
	temp.u32 = ctx.r15.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v30,r28,r11
	temp.u32 = ctx.r28.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v31,v4,v5
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// lvlx v1,r14,r11
	temp.u32 = ctx.r14.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v28,v11,v30
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vmrghb v29,v1,v2
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// add r26,r8,r3
	ctx.r26.u64 = ctx.r8.u64 + ctx.r3.u64;
	// vmrghb v12,v31,v3
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v31.u8)));
	// add r28,r31,r10
	ctx.r28.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r8,r26,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 22) & 0x3FFFFF;
	// mullw r28,r28,r5
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r5.s32);
	// vmrghb v0,v28,v29
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vperm128 v55,v12,v62,v7
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v54,v12,v62,v6
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v53,v0,v62,v7
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v51,v0,v62,v6
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vcuxwfp128 v52,v55,7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v50,v54,7
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v54.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v49,v53,7
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v53.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// vcuxwfp128 v48,v51,7
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v51.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3C000000)))));
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r30,r24,r10
	ctx.r30.u64 = ctx.r24.u64 + ctx.r10.u64;
	// stw r8,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r8.u32);
	// add r27,r28,r3
	ctx.r27.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mullw r28,r30,r5
	ctx.r28.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r5.s32);
	// vsubfp128 v47,v52,v63
	_mm_store_ps(ctx.v47.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v46,v50,v63
	_mm_store_ps(ctx.v46.f32, _mm_sub_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v0,v49,v63
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v12,v48,v63
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v63.f32)));
	// add r16,r23,r10
	ctx.r16.u64 = ctx.r23.u64 + ctx.r10.u64;
	// rlwinm r30,r27,22,10,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 22) & 0x3FFFFF;
	// add r27,r28,r3
	ctx.r27.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mullw r28,r16,r5
	ctx.r28.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r5.s32);
	// vsubfp128 v10,v47,v0
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v11,v46,v12
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v12.f32)));
	// add r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 + ctx.r8.u64;
	// rlwinm r27,r27,22,10,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 22) & 0x3FFFFF;
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// stw r30,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r30.u32);
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// rlwinm r28,r28,22,10,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 22) & 0x3FFFFF;
	// stw r30,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r30.u32);
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// vmaddfp v10,v10,v13,v0
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v11,v13,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvlx v10,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stw r30,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r30.u32);
	// stvrx v10,r9,r29
	ea = ctx.r9.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v10.u8[i]);
	// vor128 v45,v0,v0
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lvx128 v61,r0,r17
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r17.u32) & ~0xF), VectorMaskL));
	// vand128 v44,v61,v60
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v60.u8)));
	// stvlx128 v45,r0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// vsrw128 v0,v61,v59
	ctx.v0.u32[0] = ctx.v61.u32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v0.u32[1] = ctx.v61.u32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v0.u32[2] = ctx.v61.u32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v0.u32[3] = ctx.v61.u32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vcuxwfp128 v13,v44,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v44.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// stvrx128 v45,r7,r29
	ea = ctx.r7.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v45.u8[i]);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// bdnz 0x83076b0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83076B0C;
	// lwz r17,-232(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
loc_83076C60:
	// lwz r16,-244(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -244);
	// rlwinm r29,r8,16,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// lwz r14,-248(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	// clrlwi r30,r8,16
	ctx.r30.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r15,-252(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -252);
loc_83076C74:
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// bgt cr6,0x83076d30
	if (ctx.cr6.gt) goto loc_83076D30;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r7,-4
	ctx.r3.s64 = ctx.r7.s64 + -4;
loc_83076C84:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// beq cr6,0x83076d30
	if (ctx.cr6.eq) goto loc_83076D30;
	// rlwinm r7,r29,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r21
	ctx.r5.u64 = ctx.r5.u64 + ctx.r21.u64;
	// add r29,r7,r11
	ctx.r29.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r28,r7,r11
	ctx.r28.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r27,r7,r11
	ctx.r27.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbzx r26,r7,r11
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r7,r5,22,10,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3FFFFF;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lbz r25,1(r29)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// rotlwi r29,r26,16
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r26.u32, 16);
	// lbz r28,3(r28)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// lbz r23,2(r27)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2);
	// rotlwi r27,r25,16
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r25.u32, 16);
	// subf r28,r25,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r25.s64;
	// subf r26,r26,r23
	ctx.r26.s64 = ctx.r23.s64 - ctx.r26.s64;
	// mullw r28,r28,r30
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32);
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// mullw r30,r26,r30
	ctx.r30.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r30.s32);
	// extsw r28,r28
	ctx.r28.s64 = ctx.r28.s32;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// std r28,-216(r1)
	PPC_STORE_U64(ctx.r1.u32 + -216, ctx.r28.u64);
	// lfd f12,-216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// std r30,-232(r1)
	PPC_STORE_U64(ctx.r1.u32 + -232, ctx.r30.u64);
	// lfd f11,-232(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// rlwinm r29,r8,16,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// clrlwi r30,r8,16
	ctx.r30.u64 = ctx.r8.u32 & 0xFFFF;
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmsubs f6,f8,f0,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f6,0(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fmsubs f5,f7,f0,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfsu f5,4(r3)
	temp.f32 = float(ctx.f5.f64);
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r3.u32 = ea;
	// ble cr6,0x83076c84
	if (!ctx.cr6.gt) goto loc_83076C84;
loc_83076D30:
	// lwz r21,-256(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
loc_83076D34:
	// stw r10,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r29,r16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x83076d44
	if (ctx.cr6.lt) goto loc_83076D44;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_83076D44:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x83076d64
	if (ctx.cr6.eq) goto loc_83076D64;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r10.u8);
	// stb r7,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r7.u8);
loc_83076D64:
	// rlwinm r11,r29,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// lwz r10,-224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// cmplw cr6,r29,r16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r16.u32, ctx.xer);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r8.u32);
	// lhz r6,0(r17)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// subf r5,r29,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r29.s64;
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// sth r5,0(r17)
	PPC_STORE_U16(ctx.r17.u32 + 0, ctx.r5.u16);
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r10,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r10.u16);
	// bne cr6,0x83076da4
	if (!ctx.cr6.eq) goto loc_83076DA4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83076dac
	goto loc_83076DAC;
loc_83076DA4:
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
loc_83076DAC:
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// lwz r10,-220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83076dc4
	if (!ctx.cr6.eq) goto loc_83076DC4;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_83076DC4:
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83076DD8"))) PPC_WEAK_FUNC(sub_83076DD8);
PPC_FUNC_IMPL(__imp__sub_83076DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x83076DE0;
	__savegprlr_14(ctx, base);
	// lwz r9,28(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// addi r16,r6,24
	ctx.r16.s64 = ctx.r6.s64 + 24;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r20,r3,14
	ctx.r20.s64 = ctx.r3.s64 + 14;
	// subf r15,r9,r5
	ctx.r15.s64 = ctx.r5.s64 - ctx.r9.s64;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r24,14(r3)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// rlwinm r29,r15,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,44(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,0(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r31,48(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r27,r29,r9
	ctx.r27.u64 = ctx.r29.u64 + ctx.r9.u64;
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,40(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// subf r3,r9,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r9.s64;
	// lwz r8,32(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r16,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r16.u32);
	// srawi r28,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r3.s32 >> 2;
	// stw r15,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r15.u32);
	// subfic r3,r11,1024
	ctx.xer.ca = ctx.r11.u32 <= 1024;
	ctx.r3.s64 = 1024 - ctx.r11.s64;
	// stw r24,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r24.u32);
	// subf r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	// stw r9,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r9.u32);
	// divwu r29,r3,r31
	ctx.r29.u32 = ctx.r3.u32 / ctx.r31.u32;
	// addi r17,r6,28
	ctx.r17.s64 = ctx.r6.s64 + 28;
	// addi r19,r6,44
	ctx.r19.s64 = ctx.r6.s64 + 44;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// addi r18,r6,32
	ctx.r18.s64 = ctx.r6.s64 + 32;
	// rlwinm r3,r8,16,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// clrlwi r30,r8,16
	ctx.r30.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// rlwinm r5,r5,10,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83076e80
	if (ctx.cr6.lt) goto loc_83076E80;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_83076E80:
	// lis r29,-32232
	ctx.r29.s64 = -2112356352;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f13,-6880(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -6880);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x83076ef4
	if (!ctx.cr6.eq) goto loc_83076EF4;
	// mullw r29,r7,r11
	ctx.r29.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mullw r26,r7,r31
	ctx.r26.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// add r29,r29,r5
	ctx.r29.u64 = ctx.r29.u64 + ctx.r5.u64;
loc_83076E9C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// beq cr6,0x83076ef4
	if (ctx.cr6.eq) goto loc_83076EF4;
	// clrldi r3,r30,32
	ctx.r3.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// add r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 + ctx.r29.u64;
	// std r3,-224(r1)
	PPC_STORE_U64(ctx.r1.u32 + -224, ctx.r3.u64);
	// lfd f10,-224(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// rlwinm r3,r29,22,10,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3FFFFF;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r8,16,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// clrlwi r30,r8,16
	ctx.r30.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmuls f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmadds f6,f7,f13,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f6,0(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// beq cr6,0x83076e9c
	if (ctx.cr6.eq) goto loc_83076E9C;
loc_83076EF4:
	// subf r29,r9,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r9.s64;
	// addi r21,r24,-1
	ctx.r21.s64 = ctx.r24.s64 + -1;
	// srawi r25,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r29.s32 >> 2;
	// subfic r29,r11,1024
	ctx.xer.ca = ctx.r11.u32 <= 1024;
	ctx.r29.s64 = 1024 - ctx.r11.s64;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// divwu r29,r29,r31
	ctx.r29.u32 = ctx.r29.u32 / ctx.r31.u32;
	// cmplw cr6,r25,r29
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83076f18
	if (ctx.cr6.lt) goto loc_83076F18;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_83076F18:
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplw cr6,r3,r21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r21.u32, ctx.xer);
	// bgt cr6,0x830771d8
	if (ctx.cr6.gt) goto loc_830771D8;
	// mullw r29,r7,r11
	ctx.r29.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r26,r29,r5
	ctx.r26.u64 = ctx.r29.u64 + ctx.r5.u64;
	// mullw r22,r7,r31
	ctx.r22.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_83076F38:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// beq cr6,0x83076f60
	if (ctx.cr6.eq) goto loc_83076F60;
	// add r29,r29,r22
	ctx.r29.u64 = ctx.r29.u64 + ctx.r22.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// rlwinm r27,r29,22,10,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3FFFFF;
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// rlwinm r27,r28,16,16,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r27,r21
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x83076f38
	if (!ctx.cr6.gt) goto loc_83076F38;
loc_83076F60:
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 4, ctx.xer);
	// blt cr6,0x8307716c
	if (ctx.cr6.lt) goto loc_8307716C;
	// rlwinm r28,r31,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// add r29,r30,r5
	ctx.r29.u64 = ctx.r30.u64 + ctx.r5.u64;
	// rlwinm r30,r31,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r27,r31,r30
	ctx.r27.u64 = ctx.r31.u64 + ctx.r30.u64;
	// rlwinm r3,r3,22,10,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x3FFFFF;
	// add r30,r27,r11
	ctx.r30.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// stw r3,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r3.u32);
	// rlwinm r29,r29,22,10,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3FFFFF;
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// rlwinm r29,r30,22,10,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 22) & 0x3FFFFF;
	// addi r15,r1,-208
	ctx.r15.s64 = ctx.r1.s64 + -208;
	// stw r3,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r3.u32);
	// addi r30,r1,-176
	ctx.r30.s64 = ctx.r1.s64 + -176;
	// stw r8,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r8.u32);
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// li r25,16
	ctx.r25.s64 = 16;
	// addi r29,r1,-176
	ctx.r29.s64 = ctx.r1.s64 + -176;
	// stw r3,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r3.u32);
	// lvx128 v63,r0,r15
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r15.u32) & ~0xF), VectorMaskL));
	// addi r14,r1,-192
	ctx.r14.s64 = ctx.r1.s64 + -192;
	// stw r25,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r25.u32);
	// lvx128 v61,r0,r30
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// li r15,4
	ctx.r15.s64 = 4;
	// vspltw128 v61,v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r15,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r15.u32);
	// lvx128 v60,r0,r29
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lis r15,0
	ctx.r15.s64 = 0;
	// stw r30,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r30.u32);
	// lvx128 v59,r0,r14
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r14.u32) & ~0xF), VectorMaskL));
	// addi r29,r1,-176
	ctx.r29.s64 = ctx.r1.s64 + -176;
	// ori r15,r15,65535
	ctx.r15.u64 = ctx.r15.u64 | 65535;
	// rlwinm r30,r23,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r15,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r15.u32);
	// rlwinm r15,r23,0,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lvx128 v58,r0,r29
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vspltw128 v62,v58,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// vand128 v57,v63,v62
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// vspltw128 v11,v60,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// subf r23,r15,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r15.s64;
	// vspltw128 v60,v59,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vsrw128 v63,v63,v61
	ctx.v63.u32[0] = ctx.v63.u32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v63.u32[1] = ctx.v63.u32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v63.u32[2] = ctx.v63.u32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v63.u32[3] = ctx.v63.u32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vcuxwfp128 v13,v57,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// beq cr6,0x83077160
	if (ctx.cr6.eq) goto loc_83077160;
	// rlwinm r24,r31,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_83077044:
	// addi r8,r1,-176
	ctx.r8.s64 = ctx.r1.s64 + -176;
	// vslw128 v0,v63,v60
	ctx.v0.u32[0] = ctx.v63.u32[0] << (ctx.v60.u8[0] & 0x1F);
	ctx.v0.u32[1] = ctx.v63.u32[1] << (ctx.v60.u8[4] & 0x1F);
	ctx.v0.u32[2] = ctx.v63.u32[2] << (ctx.v60.u8[8] & 0x1F);
	ctx.v0.u32[3] = ctx.v63.u32[3] << (ctx.v60.u8[12] & 0x1F);
	// addi r29,r1,-192
	ctx.r29.s64 = ctx.r1.s64 + -192;
	// li r26,1024
	ctx.r26.s64 = 1024;
	// vadduws v12,v0,v11
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,-176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stvx128 v12,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r26,r30
	// lvlx128 v56,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r30,-180(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// std r6,-224(r1)
	PPC_STORE_U64(ctx.r1.u32 + -224, ctx.r6.u64);
	// addi r16,r1,-208
	ctx.r16.s64 = ctx.r1.s64 + -208;
	// lwz r29,-188(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// mullw r8,r7,r11
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// lwz r26,-184(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r15,-192(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lvlx128 v55,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r6,-172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r30,-168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r14,-164(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// lvlx128 v54,r29,r10
	temp.u32 = ctx.r29.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v53,r26,r10
	temp.u32 = ctx.r26.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r15,r10
	temp.u32 = ctx.r15.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v51,v54,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// lvlx128 v49,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v47,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v48,v52,v53
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v52.u32)));
	// lvlx128 v50,r14,r10
	temp.u32 = ctx.r14.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r26,r8,r5
	ctx.r26.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vmrghw128 v45,v56,v47
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// vmrghw128 v46,v49,v50
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// rlwinm r8,r26,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 22) & 0x3FFFFF;
	// vmrghw128 v44,v48,v51
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// vmrghw128 v0,v45,v46
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), _mm_load_si128((__m128i*)ctx.v45.u32)));
	// ld r6,-224(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// vsubfp128 v12,v44,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v0.f32)));
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r8,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r8.u32);
	// add r29,r30,r5
	ctx.r29.u64 = ctx.r30.u64 + ctx.r5.u64;
	// mullw r30,r3,r7
	ctx.r30.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// vmaddfp v0,v12,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvlx v0,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// add r15,r27,r11
	ctx.r15.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r3,r29,22,10,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3FFFFF;
	// add r29,r30,r5
	ctx.r29.u64 = ctx.r30.u64 + ctx.r5.u64;
	// mullw r30,r15,r7
	ctx.r30.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// rlwinm r29,r29,22,10,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3FFFFF;
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// stw r3,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r3.u32);
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// stvrx v0,r9,r25
	ea = ctx.r9.u32 + ctx.r25.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// rlwinm r30,r30,22,10,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 22) & 0x3FFFFF;
	// stw r3,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r3.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// stw r3,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r3.u32);
	// lvx128 v63,r0,r16
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r16.u32) & ~0xF), VectorMaskL));
	// vand128 v43,v63,v62
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// vsrw128 v63,v63,v61
	ctx.v63.u32[0] = ctx.v63.u32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v63.u32[1] = ctx.v63.u32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v63.u32[2] = ctx.v63.u32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v63.u32[3] = ctx.v63.u32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vcuxwfp128 v13,v43,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v43.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// bdnz 0x83077044
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83077044;
	// lwz r16,-240(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r24,-236(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
loc_83077160:
	// lwz r15,-232(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// rlwinm r3,r8,16,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// clrlwi r30,r8,16
	ctx.r30.u64 = ctx.r8.u32 & 0xFFFF;
loc_8307716C:
	// cmplw cr6,r3,r21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r21.u32, ctx.xer);
	// bgt cr6,0x830771d8
	if (ctx.cr6.gt) goto loc_830771D8;
loc_83077174:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// beq cr6,0x830771d8
	if (ctx.cr6.eq) goto loc_830771D8;
	// clrldi r5,r30,32
	ctx.r5.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// std r5,-224(r1)
	PPC_STORE_U64(ctx.r1.u32 + -224, ctx.r5.u64);
	// lfd f0,-224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// add r26,r26,r22
	ctx.r26.u64 = ctx.r26.u64 + ctx.r22.u64;
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r7,r26,22,10,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 22) & 0x3FFFFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r3,r8,16,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// clrlwi r30,r8,16
	ctx.r30.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r3,r21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r21.u32, ctx.xer);
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmadds f6,f7,f13,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f6,0(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// ble cr6,0x83077174
	if (!ctx.cr6.gt) goto loc_83077174;
loc_830771D8:
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x830771e8
	if (ctx.cr6.lt) goto loc_830771E8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_830771E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830771fc
	if (ctx.cr6.eq) goto loc_830771FC;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_830771FC:
	// rlwinm r11,r3,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// lwz r10,-228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, ctx.xer);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r8.u32);
	// lhz r6,0(r20)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r20.u32 + 0);
	// subf r5,r3,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r3.s64;
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// sth r5,0(r20)
	PPC_STORE_U16(ctx.r20.u32 + 0, ctx.r5.u16);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r9.u16);
	// bne cr6,0x8307723c
	if (!ctx.cr6.eq) goto loc_8307723C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83077244
	goto loc_83077244;
loc_8307723C:
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_83077244:
	// stw r10,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x83077258
	if (!ctx.cr6.eq) goto loc_83077258;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_83077258:
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307726C"))) PPC_WEAK_FUNC(sub_8307726C);
PPC_FUNC_IMPL(__imp__sub_8307726C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83077270"))) PPC_WEAK_FUNC(sub_83077270);
PPC_FUNC_IMPL(__imp__sub_83077270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x83077278;
	__savegprlr_14(ctx, base);
	// addi r20,r6,28
	ctx.r20.s64 = ctx.r6.s64 + 28;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r18,r6,24
	ctx.r18.s64 = ctx.r6.s64 + 24;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r23,r3,14
	ctx.r23.s64 = ctx.r3.s64 + 14;
	// lwz r31,48(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// addi r21,r6,32
	ctx.r21.s64 = ctx.r6.s64 + 32;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// addi r19,r6,4
	ctx.r19.s64 = ctx.r6.s64 + 4;
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// subf r17,r10,r5
	ctx.r17.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lhz r22,0(r23)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// rlwinm r7,r17,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lhz r15,12(r4)
	ctx.r15.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// addi r10,r6,44
	ctx.r10.s64 = ctx.r6.s64 + 44;
	// lwz r10,44(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// add r26,r7,r8
	ctx.r26.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r7,40(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// lfs f12,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stw r20,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r20.u32);
	// subf r11,r8,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r8.s64;
	// stw r18,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r18.u32);
	// subf r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	// stw r21,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r21.u32);
	// srawi r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 2;
	// stw r23,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r23.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r19,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r19.u32);
	// subfic r3,r10,1024
	ctx.xer.ca = ctx.r10.u32 <= 1024;
	ctx.r3.s64 = 1024 - ctx.r10.s64;
	// stw r17,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r17.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r22,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r22.u32);
	// divwu r29,r3,r31
	ctx.r29.u32 = ctx.r3.u32 / ctx.r31.u32;
	// stw r8,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r8.u32);
	// rlwinm r3,r9,16,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r5,r5,10,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83077338
	if (ctx.cr6.lt) goto loc_83077338;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_83077338:
	// lis r29,-32232
	ctx.r29.s64 = -2112356352;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,-6880(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -6880);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x830773c8
	if (!ctx.cr6.eq) goto loc_830773C8;
	// mullw r29,r7,r10
	ctx.r29.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r25,r7,r31
	ctx.r25.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// add r29,r29,r5
	ctx.r29.u64 = ctx.r29.u64 + ctx.r5.u64;
loc_83077354:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// beq cr6,0x830773c8
	if (ctx.cr6.eq) goto loc_830773C8;
	// clrldi r3,r30,32
	ctx.r3.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r28,r15,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// std r3,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.r3.u64);
	// lfd f9,-208(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fsubs f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// add r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 + ctx.r29.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r3,r29,22,10,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3FFFFF;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// rlwinm r3,r9,16,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmuls f4,f10,f6
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmadds f2,f4,f0,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f2,0(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmadds f1,f3,f0,f12
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfsx f1,r28,r8
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r8.u32, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// beq cr6,0x83077354
	if (ctx.cr6.eq) goto loc_83077354;
loc_830773C8:
	// subf r29,r8,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r8.s64;
	// addi r24,r22,-1
	ctx.r24.s64 = ctx.r22.s64 + -1;
	// srawi r26,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r29.s32 >> 2;
	// subfic r29,r10,1024
	ctx.xer.ca = ctx.r10.u32 <= 1024;
	ctx.r29.s64 = 1024 - ctx.r10.s64;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// divwu r29,r29,r31
	ctx.r29.u32 = ctx.r29.u32 / ctx.r31.u32;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x830773ec
	if (ctx.cr6.lt) goto loc_830773EC;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_830773EC:
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x83077744
	if (ctx.cr6.gt) goto loc_83077744;
	// mullw r29,r7,r10
	ctx.r29.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r25,r29,r5
	ctx.r25.u64 = ctx.r29.u64 + ctx.r5.u64;
	// mullw r14,r7,r31
	ctx.r14.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8307740C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// beq cr6,0x83077434
	if (ctx.cr6.eq) goto loc_83077434;
	// add r29,r29,r14
	ctx.r29.u64 = ctx.r29.u64 + ctx.r14.u64;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// rlwinm r27,r29,22,10,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3FFFFF;
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// rlwinm r27,r28,16,16,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x8307740c
	if (!ctx.cr6.gt) goto loc_8307740C;
loc_83077434:
	// cmplwi cr6,r16,4
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 4, ctx.xer);
	// blt cr6,0x830776ac
	if (ctx.cr6.lt) goto loc_830776AC;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r9,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r9.u32);
	// rlwinm r19,r31,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r30,r19,r10
	ctx.r30.u64 = ctx.r19.u64 + ctx.r10.u64;
	// rlwinm r3,r3,22,10,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x3FFFFF;
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r29,r30,r5
	ctx.r29.u64 = ctx.r30.u64 + ctx.r5.u64;
	// rlwinm r30,r31,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r3.u32);
	// rlwinm r29,r29,22,10,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3FFFFF;
	// add r18,r31,r30
	ctx.r18.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// add r9,r18,r10
	ctx.r9.u64 = ctx.r18.u64 + ctx.r10.u64;
	// add r29,r29,r3
	ctx.r29.u64 = ctx.r29.u64 + ctx.r3.u64;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// stw r29,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r29.u32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r3,r1,-176
	ctx.r3.s64 = ctx.r1.s64 + -176;
	// rlwinm r26,r9,22,10,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x3FFFFF;
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// add r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 + ctx.r29.u64;
	// li r28,16
	ctx.r28.s64 = 16;
	// addi r27,r1,-176
	ctx.r27.s64 = ctx.r1.s64 + -176;
	// stw r29,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r29.u32);
	// addi r26,r1,-192
	ctx.r26.s64 = ctx.r1.s64 + -192;
	// stw r28,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r28.u32);
	// lvx128 v63,r0,r9
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r9,4
	ctx.r9.s64 = 4;
	// lvx128 v61,r0,r3
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r9,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r9.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lvx128 v60,r0,r27
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// stw r3,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r3.u32);
	// lvx128 v59,r0,r26
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// addi r26,r1,-176
	ctx.r26.s64 = ctx.r1.s64 + -176;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// vspltw128 v61,v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// stw r9,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r9.u32);
	// lvx128 v58,r0,r26
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// vspltw128 v62,v58,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// rlwinm r3,r15,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// vand128 v57,v63,v62
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// rlwinm r27,r16,30,2,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r24,r16,0,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xFFFFFFFC;
	// vspltw128 v9,v60,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// vspltw128 v60,v59,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// vsrw128 v63,v63,v61
	ctx.v63.u32[0] = ctx.v63.u32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v63.u32[1] = ctx.v63.u32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v63.u32[2] = ctx.v63.u32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v63.u32[3] = ctx.v63.u32[3] >> (ctx.v61.u8[12] & 0x1F);
	// subf r16,r24,r16
	ctx.r16.s64 = ctx.r16.s64 - ctx.r24.s64;
	// vcuxwfp128 v0,v57,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v57.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83077694
	if (ctx.cr6.eq) goto loc_83077694;
	// rlwinm r17,r31,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_83077528:
	// addi r4,r1,-192
	ctx.r4.s64 = ctx.r1.s64 + -192;
	// vslw128 v13,v63,v60
	ctx.v13.u32[0] = ctx.v63.u32[0] << (ctx.v60.u8[0] & 0x1F);
	ctx.v13.u32[1] = ctx.v63.u32[1] << (ctx.v60.u8[4] & 0x1F);
	ctx.v13.u32[2] = ctx.v63.u32[2] << (ctx.v60.u8[8] & 0x1F);
	ctx.v13.u32[3] = ctx.v63.u32[3] << (ctx.v60.u8[12] & 0x1F);
	// addi r26,r1,-176
	ctx.r26.s64 = ctx.r1.s64 + -176;
	// li r25,1024
	ctx.r25.s64 = 1024;
	// vadduws v12,v13,v9
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r30,-192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// rlwinm r27,r30,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stvx128 v12,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r25,r4
	// lvlx128 v56,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r27,-180(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// lvlx128 v55,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r26,-188(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// add r10,r17,r10
	ctx.r10.u64 = ctx.r17.u64 + ctx.r10.u64;
	// lwz r25,-184(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r24,-164(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// mullw r20,r7,r10
	ctx.r20.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// lwz r23,-172(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r22,-168(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lvlx128 v54,r27,r11
	temp.u32 = ctx.r27.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r21,-176(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lvlx128 v53,r26,r11
	temp.u32 = ctx.r26.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r25,r11
	temp.u32 = ctx.r25.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v51,r24,r11
	temp.u32 = ctx.r24.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v50,v53,v54
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), _mm_load_si128((__m128i*)ctx.v53.u32)));
	// lvlx128 v49,r23,r11
	temp.u32 = ctx.r23.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v48,v56,v52
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// lvlx128 v47,r22,r11
	temp.u32 = ctx.r22.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v46,r21,r11
	temp.u32 = ctx.r21.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v45,v49,v51
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), _mm_load_si128((__m128i*)ctx.v49.u32)));
	// lvlx128 v44,r27,r9
	temp.u32 = ctx.r27.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v43,r26,r9
	temp.u32 = ctx.r26.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v42,v46,v47
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), _mm_load_si128((__m128i*)ctx.v46.u32)));
	// lvlx128 v41,r25,r9
	temp.u32 = ctx.r25.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v13,v48,v50
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), _mm_load_si128((__m128i*)ctx.v48.u32)));
	// lvlx128 v40,r24,r9
	temp.u32 = ctx.r24.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v39,v43,v44
	_mm_store_si128((__m128i*)ctx.v39.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v44.u32), _mm_load_si128((__m128i*)ctx.v43.u32)));
	// lvlx128 v38,r23,r9
	temp.u32 = ctx.r23.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v37,v55,v41
	_mm_store_si128((__m128i*)ctx.v37.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v41.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// lvlx128 v36,r22,r9
	temp.u32 = ctx.r22.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v35,v42,v45
	_mm_store_si128((__m128i*)ctx.v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), _mm_load_si128((__m128i*)ctx.v42.u32)));
	// lvlx128 v34,r21,r9
	temp.u32 = ctx.r21.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v33,v38,v40
	_mm_store_si128((__m128i*)ctx.v33.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v40.u32), _mm_load_si128((__m128i*)ctx.v38.u32)));
	// add r25,r20,r5
	ctx.r25.u64 = ctx.r20.u64 + ctx.r5.u64;
	// vmrghw128 v32,v34,v36
	_mm_store_si128((__m128i*)ctx.v32.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v36.u32), _mm_load_si128((__m128i*)ctx.v34.u32)));
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// vmrghw128 v12,v37,v39
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), _mm_load_si128((__m128i*)ctx.v37.u32)));
	// vsubfp128 v10,v35,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v13.f32)));
	// rlwinm r30,r25,22,10,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 22) & 0x3FFFFF;
	// add r27,r19,r10
	ctx.r27.u64 = ctx.r19.u64 + ctx.r10.u64;
	// vmrghw128 v63,v32,v33
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v33.u32), _mm_load_si128((__m128i*)ctx.v32.u32)));
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mullw r29,r4,r7
	ctx.r29.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// stw r30,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r30.u32);
	// vsubfp128 v11,v63,v12
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v10,v0,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// add r4,r29,r5
	ctx.r4.u64 = ctx.r29.u64 + ctx.r5.u64;
	// mullw r27,r27,r7
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// vmaddfp v0,v11,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// rlwinm r29,r4,22,10,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 22) & 0x3FFFFF;
	// add r4,r27,r5
	ctx.r4.u64 = ctx.r27.u64 + ctx.r5.u64;
	// add r27,r18,r10
	ctx.r27.u64 = ctx.r18.u64 + ctx.r10.u64;
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mullw r27,r27,r7
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// stw r29,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r29.u32);
	// stvlx v13,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// rlwinm r26,r4,22,10,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 22) & 0x3FFFFF;
	// add r4,r27,r5
	ctx.r4.u64 = ctx.r27.u64 + ctx.r5.u64;
	// add r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 + ctx.r29.u64;
	// rlwinm r27,r4,22,10,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 22) & 0x3FFFFF;
	// stw r29,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r29.u32);
	// stvrx v13,r8,r28
	ea = ctx.r8.u32 + ctx.r28.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// add r29,r27,r29
	ctx.r29.u64 = ctx.r27.u64 + ctx.r29.u64;
	// stvlx v0,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r3,r28
	ea = ctx.r3.u32 + ctx.r28.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// addi r4,r1,-208
	ctx.r4.s64 = ctx.r1.s64 + -208;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r29,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r29.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lvx128 v63,r0,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vand128 v59,v63,v62
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// vsrw128 v63,v63,v61
	ctx.v63.u32[0] = ctx.v63.u32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v63.u32[1] = ctx.v63.u32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v63.u32[2] = ctx.v63.u32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v63.u32[3] = ctx.v63.u32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vcuxwfp128 v0,v59,16
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v59.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// bdnz 0x83077528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83077528;
	// lwz r22,-232(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r4,28(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r23,-228(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	// lwz r20,-224(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// lwz r21,-220(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
loc_83077694:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r18,-236(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// rlwinm r3,r30,16,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// lwz r19,-240(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r17,-216(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// clrlwi r30,r30,16
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFF;
loc_830776AC:
	// addi r29,r22,-1
	ctx.r29.s64 = ctx.r22.s64 + -1;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x83077744
	if (ctx.cr6.gt) goto loc_83077744;
loc_830776B8:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// addi r16,r16,-1
	ctx.r16.s64 = ctx.r16.s64 + -1;
	// beq cr6,0x83077744
	if (ctx.cr6.eq) goto loc_83077744;
	// clrldi r5,r30,32
	ctx.r5.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r7,r15,r3
	ctx.r7.u64 = ctx.r15.u64 + ctx.r3.u64;
	// std r5,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.r5.u64);
	// lfd f13,-208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r25,r25,r14
	ctx.r25.u64 = ctx.r25.u64 + ctx.r14.u64;
	// rlwinm r28,r15,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r25,22,10,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 22) & 0x3FFFFF;
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r3,r9,16,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// fsubs f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// fmuls f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmadds f2,f4,f0,f10
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f2,0(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmadds f1,f3,f0,f8
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfsx f1,r28,r8
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r8.u32, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// ble cr6,0x830776b8
	if (!ctx.cr6.gt) goto loc_830776B8;
loc_83077744:
	// addi r7,r6,44
	ctx.r7.s64 = ctx.r6.s64 + 44;
	// stw r10,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r10.u32);
	// cmplw cr6,r3,r22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x83077758
	if (ctx.cr6.lt) goto loc_83077758;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_83077758:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307777c
	if (ctx.cr6.eq) goto loc_8307777C;
	// add r10,r3,r15
	ctx.r10.u64 = ctx.r3.u64 + ctx.r15.u64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f13,0(r19)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r19.u32 + 0, temp.u32);
loc_8307777C:
	// rlwinm r11,r3,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// lwz r10,-212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	// cmplw cr6,r3,r22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, ctx.xer);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r9,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r9.u32);
	// lhz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// subf r6,r3,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r3.s64;
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// sth r6,0(r23)
	PPC_STORE_U16(ctx.r23.u32 + 0, ctx.r6.u16);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r10,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r10.u16);
	// bne cr6,0x830777bc
	if (!ctx.cr6.eq) goto loc_830777BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830777c4
	goto loc_830777C4;
loc_830777BC:
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_830777C4:
	// stw r10,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x830777d8
	if (!ctx.cr6.eq) goto loc_830777D8;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_830777D8:
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830777EC"))) PPC_WEAK_FUNC(sub_830777EC);
PPC_FUNC_IMPL(__imp__sub_830777EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830777F0"))) PPC_WEAK_FUNC(sub_830777F0);
PPC_FUNC_IMPL(__imp__sub_830777F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x830777F8;
	__savegprlr_14(ctx, base);
	// addi r11,r6,28
	ctx.r11.s64 = ctx.r6.s64 + 28;
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// addi r28,r3,14
	ctx.r28.s64 = ctx.r3.s64 + 14;
	// lwz r9,36(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// lwz r8,40(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// subf r30,r11,r5
	ctx.r30.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r18,r9,10,0,21
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0xFFFFFC00;
	// lwz r17,44(r6)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// subf r21,r9,r8
	ctx.r21.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lwz r31,48(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// addi r15,r6,44
	ctx.r15.s64 = ctx.r6.s64 + 44;
	// lhz r14,0(r28)
	ctx.r14.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// li r16,0
	ctx.r16.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r28,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r28.u32);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// stw r30,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r30.u32);
	// beq cr6,0x83077858
	if (ctx.cr6.eq) goto loc_83077858;
loc_83077844:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83077844
	if (!ctx.cr6.eq) goto loc_83077844;
loc_83077858:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x83077a74
	if (ctx.cr6.eq) goto loc_83077A74;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,24(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r29,12(r4)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lvlx128 v63,r6,r5
	temp.u32 = ctx.r6.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r23,r7,r11
	ctx.r23.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// vspltw128 v62,v63,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// addi r5,r10,-4
	ctx.r5.s64 = ctx.r10.s64 + -4;
	// addi r10,r11,-6992
	ctx.r10.s64 = ctx.r11.s64 + -6992;
	// rotlwi r19,r28,2
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// addi r26,r14,-1
	ctx.r26.s64 = ctx.r14.s64 + -1;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// rotlwi r20,r29,2
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r22,r16
	ctx.r22.u64 = ctx.r16.u64;
	// li r28,4
	ctx.r28.s64 = 4;
loc_830778C4:
	// vor128 v0,v62,v62
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// addi r7,r1,-176
	ctx.r7.s64 = ctx.r1.s64 + -176;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// vand128 v61,v0,v63
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// vcuxwfp128 v13,v61,16
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v61.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
loc_830778EC:
	// dcbt r11,r5
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x830778ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830778EC;
	// subfic r11,r9,1024
	ctx.xer.ca = ctx.r9.u32 <= 1024;
	ctx.r11.s64 = 1024 - ctx.r9.s64;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r11,r31
	ctx.r11.u32 = ctx.r11.u32 / ctx.r31.u32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83077910
	if (ctx.cr6.lt) goto loc_83077910;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83077910:
	// lwz r29,-176(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// rlwinm r11,r29,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83077994
	if (!ctx.cr6.eq) goto loc_83077994;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83077994
	if (ctx.cr6.eq) goto loc_83077994;
	// mullw r11,r21,r9
	ctx.r11.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r9.s32);
	// lvlx v12,0,r24
	temp.u32 = ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r5,r28
	temp.u32 = ctx.r5.u32 + ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubfp128 v11,v60,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v12.f32)));
	// mullw r7,r21,r31
	ctx.r7.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r31.s32);
	// add r8,r11,r18
	ctx.r8.u64 = ctx.r11.u64 + ctx.r18.u64;
loc_83077940:
	// vmaddfp v13,v11,v13,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// rlwinm r29,r8,22,10,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// addi r27,r1,-176
	ctx.r27.s64 = ctx.r1.s64 + -176;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stvlx v13,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stw r29,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r29.u32);
	// lvlx128 v59,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v59,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// vadduws v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stvx128 v0,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v58,v0,v63
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// lwz r29,-176(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// rlwinm r11,r29,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// vcuxwfp128 v13,v58,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v58.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// bne cr6,0x83077994
	if (!ctx.cr6.eq) goto loc_83077994;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x83077940
	if (!ctx.cr0.eq) goto loc_83077940;
loc_83077994:
	// subf r8,r10,r23
	ctx.r8.s64 = ctx.r23.s64 - ctx.r10.s64;
	// twllei r16,0
	if (ctx.r16.u32 <= 0) __builtin_debugtrap();
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// subfic r30,r9,1024
	ctx.xer.ca = ctx.r9.u32 <= 1024;
	ctx.r30.s64 = 1024 - ctx.r9.s64;
	// divwu r8,r7,r16
	ctx.r8.u32 = ctx.r7.u32 / ctx.r16.u32;
	// divwu r7,r30,r31
	ctx.r7.u32 = ctx.r30.u32 / ctx.r31.u32;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// blt cr6,0x830779c0
	if (ctx.cr6.lt) goto loc_830779C0;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
loc_830779C0:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x83077a48
	if (ctx.cr6.gt) goto loc_83077A48;
	// mullw r8,r21,r9
	ctx.r8.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r21,r31
	ctx.r7.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r31.s32);
	// add r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 + ctx.r18.u64;
loc_830779D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// beq cr6,0x83077a48
	if (ctx.cr6.eq) goto loc_83077A48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,1024
	ctx.r29.s64 = 1024;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// dcbt r29,r11
	// lvlx v12,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lvlx128 v57,r11,r28
	temp.u32 = ctx.r11.u32 + ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r27,r1,-176
	ctx.r27.s64 = ctx.r1.s64 + -176;
	// vsubfp128 v11,v57,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v12.f32)));
	// rlwinm r29,r8,22,10,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// vmaddfp v13,v11,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvlx v13,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stw r29,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r29.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lvlx128 v56,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v56,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), 0xFF));
	// vadduws v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// stvx128 v0,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v55,v0,v63
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// lwz r29,-176(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// rlwinm r11,r29,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// vcuxwfp128 v13,v55,16
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v55.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// ble cr6,0x830779d4
	if (!ctx.cr6.gt) goto loc_830779D4;
loc_83077A48:
	// subf r11,r25,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r25.s64;
	// lwz r30,-188(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// add r5,r19,r5
	ctx.r5.u64 = ctx.r19.u64 + ctx.r5.u64;
	// srawi r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 2;
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// add r25,r20,r25
	ctx.r25.u64 = ctx.r20.u64 + ctx.r25.u64;
	// add r23,r20,r23
	ctx.r23.u64 = ctx.r20.u64 + ctx.r23.u64;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x830778c4
	if (!ctx.cr0.eq) goto loc_830778C4;
	// lwz r28,-184(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// b 0x83077a7c
	goto loc_83077A7C;
loc_83077A74:
	// lwz r29,-176(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r27,-184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
loc_83077A7C:
	// rlwinm r8,r29,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// stw r9,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r8,r14
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x83077a90
	if (ctx.cr6.lt) goto loc_83077A90;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
loc_83077A90:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83077bbc
	if (ctx.cr6.eq) goto loc_83077BBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r16,4
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 4, ctx.xer);
	// blt cr6,0x83077b70
	if (ctx.cr6.lt) goto loc_83077B70;
	// addi r30,r16,-3
	ctx.r30.s64 = ctx.r16.s64 + -3;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
loc_83077AB0:
	// lhz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// addi r28,r10,-1
	ctx.r28.s64 = ctx.r10.s64 + -1;
	// lwz r31,24(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// addi r26,r10,1
	ctx.r26.s64 = ctx.r10.s64 + 1;
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lfs f0,-4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lhz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mullw r7,r28,r7
	ctx.r7.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lfs f13,-4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r31,24(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lfs f12,-4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r31,24(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mullw r7,r26,r7
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r7.s32);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lfs f11,-4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// stfsu f11,16(r9)
	temp.f32 = float(ctx.f11.f64);
	ea = 16 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x83077ab0
	if (ctx.cr6.lt) goto loc_83077AB0;
	// lwz r30,-188(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r28,-184(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
loc_83077B70:
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x83077bbc
	if (!ctx.cr6.lt) goto loc_83077BBC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r11,r16
	ctx.r9.s64 = ctx.r16.s64 - ctx.r11.s64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83077B8C:
	// lhz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83077b8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83077B8C;
loc_83077BBC:
	// rlwinm r11,r8,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// cmplw cr6,r8,r14
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r14.u32, ctx.xer);
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r10,r6,28
	ctx.r10.s64 = ctx.r6.s64 + 28;
	// stw r9,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r9.u32);
	// lhz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
	// sth r5,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r5.u16);
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// sth r11,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r11.u16);
	// bne cr6,0x83077bf4
	if (!ctx.cr6.eq) goto loc_83077BF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83077bfc
	goto loc_83077BFC;
loc_83077BF4:
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_83077BFC:
	// stw r11,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r11.u32);
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83077c10
	if (!ctx.cr6.eq) goto loc_83077C10;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_83077C10:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83077C24"))) PPC_WEAK_FUNC(sub_83077C24);
PPC_FUNC_IMPL(__imp__sub_83077C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83077C28"))) PPC_WEAK_FUNC(sub_83077C28);
PPC_FUNC_IMPL(__imp__sub_83077C28) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83077c58
	if (ctx.cr6.eq) goto loc_83077C58;
loc_83077C44:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83077c44
	if (!ctx.cr6.eq) goto loc_83077C44;
loc_83077C58:
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83077c8c
	if (!ctx.cr6.eq) goto loc_83077C8C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83077c84
	if (ctx.cr6.eq) goto loc_83077C84;
loc_83077C70:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83077c70
	if (!ctx.cr6.eq) goto loc_83077C70;
loc_83077C84:
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// blr 
	return;
loc_83077C8C:
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077C98"))) PPC_WEAK_FUNC(sub_83077C98);
PPC_FUNC_IMPL(__imp__sub_83077C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x83077CA0;
	__savegprlr_23(ctx, base);
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// lhz r27,14(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// subf r26,r11,r5
	ctx.r26.s64 = ctx.r5.s64 - ctx.r11.s64;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// blt cr6,0x83077cbc
	if (ctx.cr6.lt) goto loc_83077CBC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_83077CBC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83077ce4
	if (ctx.cr6.eq) goto loc_83077CE4;
loc_83077CD0:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83077cd0
	if (!ctx.cr6.eq) goto loc_83077CD0;
loc_83077CE4:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83077ea8
	if (ctx.cr6.eq) goto loc_83077EA8;
	// mullw r11,r31,r10
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lfs f0,18084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18084);
	ctx.f0.f64 = double(temp.f32);
loc_83077D04:
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r25,r10,0,28,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// beq cr6,0x83077d8c
	if (ctx.cr6.eq) goto loc_83077D8C;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83077d54
	if (ctx.cr6.eq) goto loc_83077D54;
loc_83077D40:
	// addi r25,r9,-1
	ctx.r25.s64 = ctx.r9.s64 + -1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// and r9,r25,r9
	ctx.r9.u64 = ctx.r25.u64 & ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83077d40
	if (!ctx.cr6.eq) goto loc_83077D40;
loc_83077D54:
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83077d84
	if (!ctx.cr6.eq) goto loc_83077D84;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83077d7c
	if (ctx.cr6.eq) goto loc_83077D7C;
loc_83077D68:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83077d68
	if (!ctx.cr6.eq) goto loc_83077D68;
loc_83077D7C:
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// b 0x83077d8c
	goto loc_83077D8C;
loc_83077D84:
	// ble cr6,0x83077d8c
	if (!ctx.cr6.gt) goto loc_83077D8C;
	// addi r8,r30,-1
	ctx.r8.s64 = ctx.r30.s64 + -1;
loc_83077D8C:
	// lhz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,28(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lhzx r25,r28,r11
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// sth r25,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r25.u16);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// blt cr6,0x83077e58
	if (ctx.cr6.lt) goto loc_83077E58;
	// rlwinm r8,r31,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r5,-3
	ctx.r7.s64 = ctx.r5.s64 + -3;
loc_83077DC4:
	// lhz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lhzux r24,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	ctx.r24.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// std r25,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r25.u64);
	// lfd f12,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// std r24,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r24.u64);
	// lfd f13,-128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lhzux r23,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	ctx.r23.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lhzux r25,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	ctx.r25.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r24,r23
	ctx.r24.s64 = ctx.r23.s16;
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// std r24,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r24.u64);
	// lfd f9,-112(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// std r25,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r25.u64);
	// lfd f5,-104(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// frsp f6,f11
	ctx.f6.f64 = double(float(ctx.f11.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f3,f8
	ctx.f3.f64 = double(float(ctx.f8.f64));
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fmuls f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f1,4(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f11,12(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x83077dc4
	if (ctx.cr6.lt) goto loc_83077DC4;
loc_83077E58:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x83077e98
	if (!ctx.cr6.lt) goto loc_83077E98;
	// subf r8,r9,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r9.s64;
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83077E74:
	// lhzux r8,r11,r9
	ea = ctx.r11.u32 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// std r7,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r7.u64);
	// lfd f13,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsu f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83077e74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83077E74;
loc_83077E98:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x83077d04
	if (ctx.cr6.lt) goto loc_83077D04;
loc_83077EA8:
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplw cr6,r5,r27
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r27.u32, ctx.xer);
	// subf r9,r5,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r5.s64;
	// sth r9,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r9.u16);
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// sth r7,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r7.u16);
	// stw r10,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r10.u32);
	// bne cr6,0x83077ed8
	if (!ctx.cr6.eq) goto loc_83077ED8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83077ee0
	goto loc_83077EE0;
loc_83077ED8:
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_83077EE0:
	// stw r11,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r11.u32);
	// cmplw cr6,r5,r26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x83077ef4
	if (!ctx.cr6.eq) goto loc_83077EF4;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_83077EF4:
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r11,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r11.u32);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83077F08"))) PPC_WEAK_FUNC(sub_83077F08);
PPC_FUNC_IMPL(__imp__sub_83077F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x83077F10;
	__savegprlr_25(ctx, base);
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// lhz r27,14(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// subf r26,r11,r5
	ctx.r26.s64 = ctx.r5.s64 - ctx.r11.s64;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// blt cr6,0x83077f2c
	if (ctx.cr6.lt) goto loc_83077F2C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_83077F2C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83077f54
	if (ctx.cr6.eq) goto loc_83077F54;
loc_83077F40:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83077f40
	if (!ctx.cr6.eq) goto loc_83077F40;
loc_83077F54:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x830780fc
	if (ctx.cr6.eq) goto loc_830780FC;
	// mullw r29,r8,r10
	ctx.r29.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// subfic r28,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r28.s64 = -1 - ctx.r6.s64;
	// lfs f13,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,14224(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14224);
	ctx.f0.f64 = double(temp.f32);
loc_83077F78:
	// lwz r9,24(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r10,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83078000
	if (ctx.cr6.eq) goto loc_83078000;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83077fc4
	if (ctx.cr6.eq) goto loc_83077FC4;
loc_83077FB0:
	// addi r25,r9,-1
	ctx.r25.s64 = ctx.r9.s64 + -1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// and r9,r25,r9
	ctx.r9.u64 = ctx.r25.u64 & ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83077fb0
	if (!ctx.cr6.eq) goto loc_83077FB0;
loc_83077FC4:
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x83077ff4
	if (!ctx.cr6.eq) goto loc_83077FF4;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83077fec
	if (ctx.cr6.eq) goto loc_83077FEC;
loc_83077FD8:
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83077fd8
	if (!ctx.cr6.eq) goto loc_83077FD8;
loc_83077FEC:
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// b 0x83078000
	goto loc_83078000;
loc_83077FF4:
	// ble cr6,0x83078000
	if (!ctx.cr6.gt) goto loc_83078000;
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_83078000:
	// lhz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lbzx r25,r29,r11
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stbx r25,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r25.u8);
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// blt cr6,0x830780b8
	if (ctx.cr6.lt) goto loc_830780B8;
	// addi r7,r30,-3
	ctx.r7.s64 = ctx.r30.s64 + -3;
loc_83078034:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lbzux r25,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	ctx.r25.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// std r5,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r5.u64);
	// lfd f12,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lbzux r5,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// std r25,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r25.u64);
	// lfd f11,-104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lbzux r25,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	ctx.r25.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// std r25,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r25.u64);
	// lfd f6,-88(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// std r5,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r5.u64);
	// lfd f8,-96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// frsp f3,f10
	ctx.f3.f64 = double(float(ctx.f10.f64));
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fmsubs f12,f4,f0,f13
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmsubs f11,f3,f0,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmsubs f10,f2,f0,f13
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmsubs f9,f1,f0,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f9,12(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x83078034
	if (ctx.cr6.lt) goto loc_83078034;
loc_830780B8:
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x830780f0
	if (!ctx.cr6.lt) goto loc_830780F0;
	// subf r9,r9,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r9.s64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830780D0:
	// lbzux r7,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// std r7,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r7.u64);
	// lfd f12,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmsubs f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfsu f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830780d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830780D0;
loc_830780F0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83077f78
	if (ctx.cr6.lt) goto loc_83077F78;
loc_830780FC:
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// sth r9,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r9.u16);
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// sth r7,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r7.u16);
	// stw r10,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r10.u32);
	// bne cr6,0x8307812c
	if (!ctx.cr6.eq) goto loc_8307812C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83078134
	goto loc_83078134;
loc_8307812C:
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_83078134:
	// stw r11,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r11.u32);
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x83078148
	if (!ctx.cr6.eq) goto loc_83078148;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_83078148:
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r11.u32);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307815C"))) PPC_WEAK_FUNC(sub_8307815C);
PPC_FUNC_IMPL(__imp__sub_8307815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83078160"))) PPC_WEAK_FUNC(sub_83078160);
PPC_FUNC_IMPL(__imp__sub_83078160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x83078168;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lhz r21,14(r3)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// subf r20,r11,r5
	ctx.r20.s64 = ctx.r5.s64 - ctx.r11.s64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplw cr6,r20,r21
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r21.u32, ctx.xer);
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// blt cr6,0x83078194
	if (ctx.cr6.lt) goto loc_83078194;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
loc_83078194:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r10,r22,-1
	ctx.r10.s64 = ctx.r22.s64 + -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830781bc
	if (ctx.cr6.eq) goto loc_830781BC;
loc_830781A8:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830781a8
	if (!ctx.cr6.eq) goto loc_830781A8;
loc_830781BC:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8307822c
	if (ctx.cr6.eq) goto loc_8307822C;
	// rlwinm r24,r22,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r10,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r29,-4
	ctx.r27.s64 = ctx.r29.s64 + -4;
loc_830781D4:
	// lhz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// lhz r6,12(r26)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// lwz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mullw r8,r6,r31
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75220
	ctx.lr = 0x83078218;
	sub_82A75220(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfsx f0,r23,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r27.u32 = ea;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x830781d4
	if (ctx.cr6.lt) goto loc_830781D4;
loc_8307822C:
	// lhz r11,14(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 14);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, ctx.xer);
	// subf r9,r22,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r22.s64;
	// sth r9,14(r28)
	PPC_STORE_U16(ctx.r28.u32 + 14, ctx.r9.u16);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r7,r22,r11
	ctx.r7.u64 = ctx.r22.u64 + ctx.r11.u64;
	// sth r7,14(r26)
	PPC_STORE_U16(ctx.r26.u32 + 14, ctx.r7.u16);
	// stw r10,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r10.u32);
	// bne cr6,0x8307825c
	if (!ctx.cr6.eq) goto loc_8307825C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83078264
	goto loc_83078264;
loc_8307825C:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
loc_83078264:
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// cmplw cr6,r22,r20
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8307827c
	if (!ctx.cr6.eq) goto loc_8307827C;
	// li r3,45
	ctx.r3.s64 = 45;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_8307827C:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83078294"))) PPC_WEAK_FUNC(sub_83078294);
PPC_FUNC_IMPL(__imp__sub_83078294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83078298"))) PPC_WEAK_FUNC(sub_83078298);
PPC_FUNC_IMPL(__imp__sub_83078298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x830782A0;
	__savegprlr_14(ctx, base);
	// lwz r27,36(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// twllei r27,0
	if (ctx.r27.u32 <= 0) __builtin_debugtrap();
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// lwz r3,28(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// lhz r29,14(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// subf r26,r3,r5
	ctx.r26.s64 = ctx.r5.s64 - ctx.r3.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r26,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r26.u32);
	// divwu r24,r9,r27
	ctx.r24.u32 = ctx.r9.u32 / ctx.r27.u32;
	// stw r29,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r29.u32);
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x830782ec
	if (!ctx.cr6.lt) goto loc_830782EC;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_830782EC:
	// lwz r17,4(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x83078314
	if (ctx.cr6.eq) goto loc_83078314;
loc_83078300:
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83078300
	if (!ctx.cr6.eq) goto loc_83078300;
loc_83078314:
	// lwz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mullw r10,r8,r28
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x83078514
	if (ctx.cr6.eq) goto loc_83078514;
	// rlwinm r23,r11,16,16,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// lhz r19,12(r30)
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// clrlwi r22,r11,16
	ctx.r22.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r18,0(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// subf r16,r24,r26
	ctx.r16.s64 = ctx.r26.s64 - ctx.r24.s64;
	// rlwinm r21,r17,0,28,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x8;
	// rlwinm r15,r29,16,0,15
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lfs f0,14232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14232);
	ctx.f0.f64 = double(temp.f32);
	// subf r20,r6,r4
	ctx.r20.s64 = ctx.r4.s64 - ctx.r6.s64;
loc_83078368:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// add r29,r20,r26
	ctx.r29.u64 = ctx.r20.u64 + ctx.r26.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x830783e4
	if (ctx.cr6.eq) goto loc_830783E4;
	// clrlwi r10,r17,29
	ctx.r10.u64 = ctx.r17.u32 & 0x7;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830783a8
	if (ctx.cr6.eq) goto loc_830783A8;
loc_83078394:
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// and r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83078394
	if (!ctx.cr6.eq) goto loc_83078394;
loc_830783A8:
	// cmplw cr6,r25,r9
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830783dc
	if (!ctx.cr6.eq) goto loc_830783DC;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x830783d4
	if (ctx.cr6.eq) goto loc_830783D4;
loc_830783C0:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830783c0
	if (!ctx.cr6.eq) goto loc_830783C0;
loc_830783D4:
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// b 0x830783e4
	goto loc_830783E4;
loc_830783DC:
	// ble cr6,0x830783e4
	if (!ctx.cr6.gt) goto loc_830783E4;
	// addi r8,r25,-1
	ctx.r8.s64 = ctx.r25.s64 + -1;
loc_830783E4:
	// mullw r10,r19,r8
	ctx.r10.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r8.s32);
	// lhz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 + ctx.r18.u64;
	// beq cr6,0x83078458
	if (ctx.cr6.eq) goto loc_83078458;
	// rlwinm r31,r28,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r5,r9,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// lhzx r9,r31,r29
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
loc_83078418:
	// subf r9,r8,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r8.s64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r30,r11,16,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// extsw r9,r7
	ctx.r9.s64 = ctx.r7.s32;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// std r9,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r9.u64);
	// lfd f13,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83078418
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83078418;
	// lwz r31,20(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
loc_83078458:
	// subf r9,r11,r15
	ctx.r9.s64 = ctx.r15.s64 - ctx.r11.s64;
	// twllei r27,0
	if (ctx.r27.u32 <= 0) __builtin_debugtrap();
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// divwu r9,r9,r27
	ctx.r9.u32 = ctx.r9.u32 / ctx.r27.u32;
	// cmplw cr6,r16,r9
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8307847c
	if (ctx.cr6.lt) goto loc_8307847C;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_8307847C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x830784f4
	if (ctx.cr6.eq) goto loc_830784F4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
loc_8307848C:
	// mullw r10,r28,r30
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32);
	// add r8,r28,r10
	ctx.r8.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r30,r11,16,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// lhzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// lhzx r8,r8,r29
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// stw r8,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// std r10,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r10.u64);
	// lfd f13,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsu f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8307848c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8307848C;
	// lwz r31,20(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
loc_830784F4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// cmplw cr6,r25,r28
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83078368
	if (ctx.cr6.lt) goto loc_83078368;
	// lwz r30,28(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r29,-188(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r26,-184(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// b 0x83078518
	goto loc_83078518;
loc_83078514:
	// lwz r5,-184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
loc_83078518:
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x83078528
	if (ctx.cr6.lt) goto loc_83078528;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_83078528:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83078560
	if (ctx.cr6.eq) goto loc_83078560;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83078560
	if (ctx.cr6.eq) goto loc_83078560;
	// mullw r7,r28,r10
	ctx.r7.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r10.s32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r8,r6,-2
	ctx.r8.s64 = ctx.r6.s64 + -2;
loc_83078548:
	// add r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r3,r4
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r4.u32);
	// sthu r3,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x83078548
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83078548;
loc_83078560:
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// add r9,r5,r24
	ctx.r9.u64 = ctx.r5.u64 + ctx.r24.u64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// stw r7,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r7.u32);
	// lhz r5,14(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// subf r4,r10,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r10.s64;
	// sth r4,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r4.u16);
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r11,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r11.u16);
	// bne cr6,0x83078598
	if (!ctx.cr6.eq) goto loc_83078598;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830785a0
	goto loc_830785A0;
loc_83078598:
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_830785A0:
	// stw r11,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r11.u32);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x830785b4
	if (!ctx.cr6.eq) goto loc_830785B4;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_830785B4:
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r11.u32);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830785C8"))) PPC_WEAK_FUNC(sub_830785C8);
PPC_FUNC_IMPL(__imp__sub_830785C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x830785D0;
	__savegprlr_14(ctx, base);
	// lwz r29,36(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r14,28(r6)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// twllei r29,0
	if (ctx.r29.u32 <= 0) __builtin_debugtrap();
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// lhz r7,14(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// subf r31,r14,r5
	ctx.r31.s64 = ctx.r5.s64 - ctx.r14.s64;
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r31,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r31.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r7,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// divwu r26,r9,r29
	ctx.r26.u32 = ctx.r9.u32 / ctx.r29.u32;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x83078618
	if (!ctx.cr6.lt) goto loc_83078618;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_83078618:
	// lwz r18,4(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x83078640
	if (ctx.cr6.eq) goto loc_83078640;
loc_8307862C:
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8307862c
	if (!ctx.cr6.eq) goto loc_8307862C;
loc_83078640:
	// lwz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x83078834
	if (ctx.cr6.eq) goto loc_83078834;
	// rlwinm r25,r11,16,16,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// lhz r21,12(r8)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// clrlwi r24,r11,16
	ctx.r24.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r20,0(r8)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r23,r18,0,28,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x8;
	// rlwinm r16,r7,16,0,15
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// subf r17,r26,r31
	ctx.r17.s64 = ctx.r31.s64 - ctx.r26.s64;
	// lfs f13,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// addi r22,r4,1
	ctx.r22.s64 = ctx.r4.s64 + 1;
	// lfs f0,-25140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25140);
	ctx.f0.f64 = double(temp.f32);
	// addi r19,r6,1
	ctx.r19.s64 = ctx.r6.s64 + 1;
loc_83078698:
	// addi r5,r27,-1
	ctx.r5.s64 = ctx.r27.s64 + -1;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// add r30,r5,r22
	ctx.r30.u64 = ctx.r5.u64 + ctx.r22.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8307871c
	if (ctx.cr6.eq) goto loc_8307871C;
	// clrlwi r10,r18,29
	ctx.r10.u64 = ctx.r18.u32 & 0x7;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830786e0
	if (ctx.cr6.eq) goto loc_830786E0;
loc_830786C8:
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 & ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830786c8
	if (!ctx.cr6.eq) goto loc_830786C8;
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
loc_830786E0:
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83078714
	if (!ctx.cr6.eq) goto loc_83078714;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8307870c
	if (ctx.cr6.eq) goto loc_8307870C;
loc_830786F8:
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830786f8
	if (!ctx.cr6.eq) goto loc_830786F8;
loc_8307870C:
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// b 0x8307871c
	goto loc_8307871C;
loc_83078714:
	// ble cr6,0x8307871c
	if (!ctx.cr6.gt) goto loc_8307871C;
	// addi r7,r27,-1
	ctx.r7.s64 = ctx.r27.s64 + -1;
loc_8307871C:
	// mullw r10,r21,r7
	ctx.r10.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r7.s32);
	// lbzx r5,r5,r19
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r19.u32);
	// add r10,r10,r14
	ctx.r10.u64 = ctx.r10.u64 + ctx.r14.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + ctx.r20.u64;
	// beq cr6,0x83078788
	if (ctx.cr6.eq) goto loc_83078788;
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// lbzx r8,r28,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r30.u32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// rlwinm r5,r5,16,8,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF0000;
loc_83078748:
	// subf r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r31,r11,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// std r3,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r3.u64);
	// lfd f12,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmsubs f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83078748
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83078748;
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
loc_83078788:
	// subf r8,r11,r16
	ctx.r8.s64 = ctx.r16.s64 - ctx.r11.s64;
	// twllei r29,0
	if (ctx.r29.u32 <= 0) __builtin_debugtrap();
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divwu r8,r8,r29
	ctx.r8.u32 = ctx.r8.u32 / ctx.r29.u32;
	// cmplw cr6,r17,r8
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x830787ac
	if (ctx.cr6.lt) goto loc_830787AC;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_830787AC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83078818
	if (ctx.cr6.eq) goto loc_83078818;
	// add r7,r28,r30
	ctx.r7.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_830787C0:
	// mullw r8,r28,r31
	ctx.r8.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r31.s32);
	// lbzx r3,r8,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// lbzx r31,r7,r8
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r3,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r3.u32);
	// rotlwi r8,r3,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// subf r3,r3,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r3.s64;
	// rlwinm r31,r11,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// std r8,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r8.u64);
	// lfd f12,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmsubs f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfsu f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830787c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830787C0;
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
loc_83078818:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83078698
	if (ctx.cr6.lt) goto loc_83078698;
	// lwz r8,28(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r7,-192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r31,-188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// b 0x83078838
	goto loc_83078838;
loc_83078834:
	// lwz r5,-184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
loc_83078838:
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83078848
	if (ctx.cr6.lt) goto loc_83078848;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_83078848:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83078884
	if (ctx.cr6.eq) goto loc_83078884;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83078884
	if (ctx.cr6.eq) goto loc_83078884;
	// mullw r8,r28,r10
	ctx.r8.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r10.s32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
loc_83078868:
	// lbzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// stbx r7,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x83078868
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83078868;
	// lwz r8,28(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r7,-192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r31,-188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
loc_83078884:
	// rlwinm r4,r10,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// add r9,r5,r26
	ctx.r9.u64 = ctx.r5.u64 + ctx.r26.u64;
	// stw r11,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r11.u32);
	// lhz r7,14(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// subf r5,r10,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r10.s64;
	// sth r5,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r5.u16);
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r3,14(r8)
	PPC_STORE_U16(ctx.r8.u32 + 14, ctx.r3.u16);
	// bne cr6,0x830788bc
	if (!ctx.cr6.eq) goto loc_830788BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830788c4
	goto loc_830788C4;
loc_830788BC:
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_830788C4:
	// stw r11,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r11.u32);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x830788d8
	if (!ctx.cr6.eq) goto loc_830788D8;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_830788D8:
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r11.u32);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830788EC"))) PPC_WEAK_FUNC(sub_830788EC);
PPC_FUNC_IMPL(__imp__sub_830788EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830788F0"))) PPC_WEAK_FUNC(sub_830788F0);
PPC_FUNC_IMPL(__imp__sub_830788F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x830788F8;
	__savegprlr_16(ctx, base);
	// lwz r31,36(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// lwz r7,32(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// subf r10,r7,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r7.s64;
	// lhz r17,14(r3)
	ctx.r17.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// subf r16,r11,r5
	ctx.r16.s64 = ctx.r5.s64 - ctx.r11.s64;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// divwu r19,r9,r31
	ctx.r19.u32 = ctx.r9.u32 / ctx.r31.u32;
	// cmplw cr6,r16,r19
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x8307892c
	if (!ctx.cr6.lt) goto loc_8307892C;
	// mr r19,r16
	ctx.r19.u64 = ctx.r16.u64;
loc_8307892C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r18,0
	ctx.r18.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83078950
	if (ctx.cr6.eq) goto loc_83078950;
loc_8307893C:
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8307893c
	if (!ctx.cr6.eq) goto loc_8307893C;
loc_83078950:
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x83078a98
	if (ctx.cr6.eq) goto loc_83078A98;
	// lwz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r27,r7,16,16,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// lhz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// clrlwi r26,r7,16
	ctx.r26.u64 = ctx.r7.u32 & 0xFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rotlwi r23,r5,2
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// rotlwi r22,r30,2
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r30.u32, 2);
	// rlwinm r24,r17,16,0,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 16) & 0xFFFF0000;
	// subf r25,r19,r16
	ctx.r25.s64 = ctx.r16.s64 - ctx.r19.s64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lfs f12,-6880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6880);
	ctx.f12.f64 = double(temp.f32);
	// add r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
loc_830789AC:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x83078a08
	if (ctx.cr6.eq) goto loc_83078A08;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_830789D4:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// std r10,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r10.u64);
	// lfd f11,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// rlwinm r9,r7,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f7,f8,f12,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830789d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830789D4;
loc_83078A08:
	// subf r8,r7,r24
	ctx.r8.s64 = ctx.r24.s64 - ctx.r7.s64;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divwu r8,r8,r31
	ctx.r8.u32 = ctx.r8.u32 / ctx.r31.u32;
	// cmplw cr6,r25,r8
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83078a2c
	if (ctx.cr6.lt) goto loc_83078A2C;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
loc_83078A2C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x83078a80
	if (ctx.cr6.eq) goto loc_83078A80;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
loc_83078A3C:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// std r10,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.r10.u64);
	// lfd f0,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// rlwinm r9,r7,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmadds f6,f7,f12,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfsu f6,4(r8)
	temp.f32 = float(ctx.f6.f64);
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x83078a3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83078A3C;
loc_83078A80:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r5,r22,r5
	ctx.r5.u64 = ctx.r22.u64 + ctx.r5.u64;
	// add r30,r23,r30
	ctx.r30.u64 = ctx.r23.u64 + ctx.r30.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x830789ac
	if (!ctx.cr0.eq) goto loc_830789AC;
	// b 0x83078a9c
	goto loc_83078A9C;
loc_83078A98:
	// lwz r20,-160(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
loc_83078A9C:
	// rlwinm r8,r7,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r8,r17
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x83078aac
	if (ctx.cr6.lt) goto loc_83078AAC;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
loc_83078AAC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83078bd0
	if (ctx.cr6.eq) goto loc_83078BD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r18,4
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 4, ctx.xer);
	// blt cr6,0x83078b84
	if (ctx.cr6.lt) goto loc_83078B84;
	// addi r29,r18,-3
	ctx.r29.s64 = ctx.r18.s64 + -3;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
loc_83078ACC:
	// lhz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// addi r28,r10,-1
	ctx.r28.s64 = ctx.r10.s64 + -1;
	// lwz r30,24(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lfs f0,-4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r31,24(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lhz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mullw r5,r28,r5
	ctx.r5.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r5.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lfs f13,-4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r30,24(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lfs f12,-4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r30,24(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mullw r5,r27,r5
	ctx.r5.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r5.s32);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lfs f11,-4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// stfsu f11,16(r9)
	temp.f32 = float(ctx.f11.f64);
	ea = 16 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x83078acc
	if (ctx.cr6.lt) goto loc_83078ACC;
loc_83078B84:
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// bge cr6,0x83078bd0
	if (!ctx.cr6.lt) goto loc_83078BD0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r11,r18
	ctx.r9.s64 = ctx.r18.s64 - ctx.r11.s64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83078BA0:
	// lhz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lwz r31,24(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lfs f0,-4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83078ba0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83078BA0;
loc_83078BD0:
	// rlwinm r10,r8,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// add r11,r20,r19
	ctx.r11.u64 = ctx.r20.u64 + ctx.r19.u64;
	// subf r9,r10,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r17
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r17.u32, ctx.xer);
	// stw r9,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r9.u32);
	// lhz r7,14(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
	// sth r5,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r5.u16);
	// lwz r10,28(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r9.u16);
	// bne cr6,0x83078c08
	if (!ctx.cr6.eq) goto loc_83078C08;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83078c10
	goto loc_83078C10;
loc_83078C08:
	// lwz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_83078C10:
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x83078c24
	if (!ctx.cr6.eq) goto loc_83078C24;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
loc_83078C24:
	// lwz r10,28(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r11.u32);
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83078C38"))) PPC_WEAK_FUNC(sub_83078C38);
PPC_FUNC_IMPL(__imp__sub_83078C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x83078C40;
	__savegprlr_14(ctx, base);
	// lwz r8,28(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhz r29,14(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r27,r8,r5
	ctx.r27.s64 = ctx.r5.s64 - ctx.r8.s64;
	// lwz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// lwz r10,32(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r27,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r27.u32);
	// stw r29,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r29.u32);
	// beq cr6,0x83078c8c
	if (ctx.cr6.eq) goto loc_83078C8C;
loc_83078C78:
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83078c78
	if (!ctx.cr6.eq) goto loc_83078C78;
loc_83078C8C:
	// lwz r9,40(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// rlwinm r7,r11,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// li r19,0
	ctx.r19.s64 = 0;
	// subf r18,r11,r9
	ctx.r18.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r14,44(r6)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// lwz r28,48(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// stw r7,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r7.u32);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// mullw r11,r4,r25
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// add r31,r11,r8
	ctx.r31.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r31,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r31.u32);
	// beq cr6,0x83078f34
	if (ctx.cr6.eq) goto loc_83078F34;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r17,12(r30)
	ctx.r17.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// rlwinm r4,r10,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// rlwinm r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lwz r16,0(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// rlwinm r15,r27,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r8.u32);
	// addi r21,r29,-1
	ctx.r21.s64 = ctx.r29.s64 + -1;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lfs f0,14232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14232);
	ctx.f0.f64 = double(temp.f32);
loc_83078D08:
	// lwz r5,-200(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// subf r11,r6,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r6.s64;
	// lwz r10,-196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// lwz r30,-192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// add r26,r11,r22
	ctx.r26.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83078d94
	if (ctx.cr6.eq) goto loc_83078D94;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83078d58
	if (ctx.cr6.eq) goto loc_83078D58;
loc_83078D44:
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// and r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83078d44
	if (!ctx.cr6.eq) goto loc_83078D44;
loc_83078D58:
	// cmplw cr6,r19,r5
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x83078d8c
	if (!ctx.cr6.eq) goto loc_83078D8C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83078d84
	if (ctx.cr6.eq) goto loc_83078D84;
loc_83078D70:
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83078d70
	if (!ctx.cr6.eq) goto loc_83078D70;
loc_83078D84:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x83078d94
	goto loc_83078D94;
loc_83078D8C:
	// ble cr6,0x83078d94
	if (!ctx.cr6.gt) goto loc_83078D94;
	// addi r8,r19,-1
	ctx.r8.s64 = ctx.r19.s64 + -1;
loc_83078D94:
	// mullw r11,r17,r8
	ctx.r11.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r8.s32);
	// lwz r8,28(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// lhz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// twllei r28,0
	if (ctx.r28.u32 <= 0) __builtin_debugtrap();
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// add r23,r15,r11
	ctx.r23.u64 = ctx.r15.u64 + ctx.r11.u64;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// subf r8,r11,r23
	ctx.r8.s64 = ctx.r23.s64 - ctx.r11.s64;
	// srawi r24,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r8.s32 >> 2;
	// subfic r8,r9,1024
	ctx.xer.ca = ctx.r9.u32 <= 1024;
	ctx.r8.s64 = 1024 - ctx.r9.s64;
	// divwu r8,r8,r28
	ctx.r8.u32 = ctx.r8.u32 / ctx.r28.u32;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83078dd4
	if (ctx.cr6.lt) goto loc_83078DD4;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
loc_83078DD4:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83078e5c
	if (!ctx.cr6.eq) goto loc_83078E5C;
	// lwz r31,-208(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// mullw r8,r18,r9
	ctx.r8.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r9.s32);
	// mullw r27,r18,r28
	ctx.r27.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r28.s32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
loc_83078DEC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// beq cr6,0x83078e5c
	if (ctx.cr6.eq) goto loc_83078E5C;
	// rlwinm r7,r25,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// rlwinm r29,r5,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// add r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 + ctx.r8.u64;
	// add r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 + ctx.r9.u64;
	// lhzx r31,r7,r26
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r26.u32);
	// rlwinm r7,r8,22,10,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// subf r3,r3,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r3.s64;
	// rlwinm r7,r10,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// mullw r31,r3,r30
	ctx.r31.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// std r3,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r3.u64);
	// lfd f13,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x83078dec
	if (ctx.cr6.eq) goto loc_83078DEC;
loc_83078E5C:
	// subf r8,r11,r23
	ctx.r8.s64 = ctx.r23.s64 - ctx.r11.s64;
	// twllei r28,0
	if (ctx.r28.u32 <= 0) __builtin_debugtrap();
	// srawi r27,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r8.s32 >> 2;
	// subfic r5,r9,1024
	ctx.xer.ca = ctx.r9.u32 <= 1024;
	ctx.r5.s64 = 1024 - ctx.r9.s64;
	// divwu r8,r5,r28
	ctx.r8.u32 = ctx.r5.u32 / ctx.r28.u32;
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83078e7c
	if (ctx.cr6.lt) goto loc_83078E7C;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
loc_83078E7C:
	// cmplw cr6,r7,r21
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r21.u32, ctx.xer);
	// bgt cr6,0x83078f10
	if (ctx.cr6.gt) goto loc_83078F10;
	// lwz r5,-208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// mullw r8,r18,r9
	ctx.r8.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r9.s32);
	// mullw r29,r18,r28
	ctx.r29.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r28.s32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
loc_83078E94:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// beq cr6,0x83078f10
	if (ctx.cr6.eq) goto loc_83078F10;
	// mullw r7,r25,r7
	ctx.r7.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r7.s32);
	// add r5,r25,r7
	ctx.r5.u64 = ctx.r25.u64 + ctx.r7.u64;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 + ctx.r9.u64;
	// rlwinm r7,r8,22,10,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// lhzx r31,r31,r26
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// lhzx r5,r5,r26
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r26.u32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// extsh r7,r31
	ctx.r7.s64 = ctx.r31.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// rotlwi r31,r31,16
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 16);
	// subf r5,r7,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r7.s64;
	// rlwinm r7,r10,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// mullw r5,r5,r30
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// cmplw cr6,r7,r21
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r21.u32, ctx.xer);
	// std r5,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r5.u64);
	// lfd f13,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x83078e94
	if (!ctx.cr6.gt) goto loc_83078E94;
loc_83078F10:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// lwz r31,-204(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// cmplw cr6,r19,r25
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x83078d08
	if (ctx.cr6.lt) goto loc_83078D08;
	// lwz r27,-188(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r29,-184(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r30,28(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// b 0x83078f3c
	goto loc_83078F3C;
loc_83078F34:
	// lwz r11,-184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r20,-184(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
loc_83078F3C:
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r9,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r9.u32);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// blt cr6,0x83078f54
	if (ctx.cr6.lt) goto loc_83078F54;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_83078F54:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83078f8c
	if (ctx.cr6.eq) goto loc_83078F8C;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83078f8c
	if (ctx.cr6.eq) goto loc_83078F8C;
	// mullw r5,r25,r9
	ctx.r5.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r9.s32);
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// addi r7,r6,-2
	ctx.r7.s64 = ctx.r6.s64 + -2;
loc_83078F74:
	// add r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 + ctx.r8.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r4,r31
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r31.u32);
	// sthu r4,2(r7)
	ea = 2 + ctx.r7.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x83078f74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83078F74;
loc_83078F8C:
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// subf r7,r20,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r20.s64;
	// subf r5,r8,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// stw r5,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r5.u32);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// lhz r4,14(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// subf r10,r9,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r9.s64;
	// sth r10,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r10.u16);
	// lwz r10,28(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r7,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r7.u16);
	// bne cr6,0x83078fc8
	if (!ctx.cr6.eq) goto loc_83078FC8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83078fd0
	goto loc_83078FD0;
loc_83078FC8:
	// lwz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_83078FD0:
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x83078fe4
	if (!ctx.cr6.eq) goto loc_83078FE4;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_83078FE4:
	// lwz r10,28(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r11.u32);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83078FF8"))) PPC_WEAK_FUNC(sub_83078FF8);
PPC_FUNC_IMPL(__imp__sub_83078FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x83079000;
	__savegprlr_14(ctx, base);
	// lwz r8,28(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// li r26,0
	ctx.r26.s64 = 0;
	// lhz r31,14(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
	// lwz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// lwz r10,32(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r5.u32);
	// stw r31,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r31.u32);
	// beq cr6,0x83079048
	if (ctx.cr6.eq) goto loc_83079048;
loc_83079034:
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83079034
	if (!ctx.cr6.eq) goto loc_83079034;
loc_83079048:
	// lwz r9,40(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// rlwinm r7,r11,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r21,0
	ctx.r21.s64 = 0;
	// subf r20,r11,r9
	ctx.r20.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r15,44(r6)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r29,48(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stw r7,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r8.u32);
	// beq cr6,0x830792dc
	if (ctx.cr6.eq) goto loc_830792DC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r14,r10,16,16,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// lhz r19,12(r4)
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// rlwinm r17,r5,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lwz r18,0(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r11.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r23,r31,-1
	ctx.r23.s64 = ctx.r31.s64 + -1;
	// addi r16,r6,1
	ctx.r16.s64 = ctx.r6.s64 + 1;
	// lfs f13,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-25140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25140);
	ctx.f0.f64 = double(temp.f32);
loc_830790C4:
	// lwz r11,-188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// addi r5,r21,-1
	ctx.r5.s64 = ctx.r21.s64 + -1;
	// lwz r30,-184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,-180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// add r27,r5,r11
	ctx.r27.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83079158
	if (ctx.cr6.eq) goto loc_83079158;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307911c
	if (ctx.cr6.eq) goto loc_8307911C;
loc_83079108:
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// and r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83079108
	if (!ctx.cr6.eq) goto loc_83079108;
loc_8307911C:
	// cmplw cr6,r21,r30
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83079150
	if (!ctx.cr6.eq) goto loc_83079150;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83079148
	if (ctx.cr6.eq) goto loc_83079148;
loc_83079134:
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83079134
	if (!ctx.cr6.eq) goto loc_83079134;
loc_83079148:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x83079158
	goto loc_83079158;
loc_83079150:
	// ble cr6,0x83079158
	if (!ctx.cr6.gt) goto loc_83079158;
	// addi r8,r21,-1
	ctx.r8.s64 = ctx.r21.s64 + -1;
loc_83079158:
	// mullw r11,r19,r8
	ctx.r11.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r8.s32);
	// lwz r8,28(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// lbzx r5,r5,r16
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r16.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// twllei r29,0
	if (ctx.r29.u32 <= 0) __builtin_debugtrap();
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// add r24,r17,r11
	ctx.r24.u64 = ctx.r17.u64 + ctx.r11.u64;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// subf r8,r11,r24
	ctx.r8.s64 = ctx.r24.s64 - ctx.r11.s64;
	// srawi r25,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r8.s32 >> 2;
	// subfic r8,r9,1024
	ctx.xer.ca = ctx.r9.u32 <= 1024;
	ctx.r8.s64 = 1024 - ctx.r9.s64;
	// divwu r8,r8,r29
	ctx.r8.u32 = ctx.r8.u32 / ctx.r29.u32;
	// cmplw cr6,r25,r8
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83079198
	if (ctx.cr6.lt) goto loc_83079198;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
loc_83079198:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83079218
	if (!ctx.cr6.eq) goto loc_83079218;
	// lwz r30,-192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// mullw r8,r20,r9
	ctx.r8.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r9.s32);
	// mullw r28,r20,r29
	ctx.r28.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r29.s32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
loc_830791B0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// beq cr6,0x83079218
	if (ctx.cr6.eq) goto loc_83079218;
	// lbzx r7,r26,r27
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r27.u32);
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r30,r5,16,8,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF0000;
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// add r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 + ctx.r8.u64;
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// add r3,r7,r30
	ctx.r3.u64 = ctx.r7.u64 + ctx.r30.u64;
	// rlwinm r7,r8,22,10,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// std r3,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r3.u64);
	// lfd f12,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// rlwinm r7,r10,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// fmsubs f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x830791b0
	if (ctx.cr6.eq) goto loc_830791B0;
loc_83079218:
	// subf r8,r11,r24
	ctx.r8.s64 = ctx.r24.s64 - ctx.r11.s64;
	// twllei r29,0
	if (ctx.r29.u32 <= 0) __builtin_debugtrap();
	// srawi r28,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r8.s32 >> 2;
	// subfic r5,r9,1024
	ctx.xer.ca = ctx.r9.u32 <= 1024;
	ctx.r5.s64 = 1024 - ctx.r9.s64;
	// divwu r8,r5,r29
	ctx.r8.u32 = ctx.r5.u32 / ctx.r29.u32;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83079238
	if (ctx.cr6.lt) goto loc_83079238;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
loc_83079238:
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x830792c0
	if (ctx.cr6.gt) goto loc_830792C0;
	// lwz r5,-192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// mullw r8,r20,r9
	ctx.r8.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r9.s32);
	// mullw r30,r20,r29
	ctx.r30.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r29.s32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
loc_83079250:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// beq cr6,0x830792c0
	if (ctx.cr6.eq) goto loc_830792C0;
	// mullw r7,r26,r7
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r7.s32);
	// lbzx r5,r7,r27
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// add r25,r26,r7
	ctx.r25.u64 = ctx.r26.u64 + ctx.r7.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// rlwinm r7,r8,22,10,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// rotlwi r5,r5,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// lbzx r25,r25,r27
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r27.u32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// subf r7,r24,r25
	ctx.r7.s64 = ctx.r25.s64 - ctx.r24.s64;
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r7,r10,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// std r5,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r5.u64);
	// lfd f12,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r23.u32, ctx.xer);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmsubs f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x83079250
	if (!ctx.cr6.gt) goto loc_83079250;
loc_830792C0:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmplw cr6,r21,r26
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x830790c4
	if (ctx.cr6.lt) goto loc_830790C4;
	// lwz r4,28(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r31,-176(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r5,-172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// b 0x830792e4
	goto loc_830792E4;
loc_830792DC:
	// lwz r11,-172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r22,-172(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
loc_830792E4:
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r9,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r9.u32);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// blt cr6,0x830792fc
	if (ctx.cr6.lt) goto loc_830792FC;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_830792FC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83079330
	if (ctx.cr6.eq) goto loc_83079330;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83079330
	if (ctx.cr6.eq) goto loc_83079330;
	// lwz r30,-188(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// mullw r7,r26,r9
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r9.s32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
loc_83079320:
	// lbzx r30,r7,r8
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// stbx r30,r8,r6
	PPC_STORE_U8(ctx.r8.u32 + ctx.r6.u32, ctx.r30.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x83079320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83079320;
loc_83079330:
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// subf r7,r22,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r22.s64;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// stw r10,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r10.u32);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// lhz r8,14(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// sth r7,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r7.u16);
	// lwz r10,28(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r8,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r8.u16);
	// bne cr6,0x8307936c
	if (!ctx.cr6.eq) goto loc_8307936C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83079374
	goto loc_83079374;
loc_8307936C:
	// lwz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_83079374:
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x83079388
	if (!ctx.cr6.eq) goto loc_83079388;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_83079388:
	// lwz r10,28(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r11.u32);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307939C"))) PPC_WEAK_FUNC(sub_8307939C);
PPC_FUNC_IMPL(__imp__sub_8307939C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830793A0"))) PPC_WEAK_FUNC(sub_830793A0);
PPC_FUNC_IMPL(__imp__sub_830793A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x830793A8;
	__savegprlr_14(ctx, base);
	// lwz r9,28(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// li r15,0
	ctx.r15.s64 = 0;
	// lhz r30,14(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r7,r9,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r9.s64;
	// lwz r8,36(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r7,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r7.u32);
	// stw r30,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r30.u32);
	// beq cr6,0x830793e8
	if (ctx.cr6.eq) goto loc_830793E8;
loc_830793D4:
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// and r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830793d4
	if (!ctx.cr6.eq) goto loc_830793D4;
loc_830793E8:
	// lwz r10,40(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// rlwinm r16,r8,10,0,21
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0xFFFFFC00;
	// lwz r23,44(r6)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// subf r20,r8,r10
	ctx.r20.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lwz r31,48(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// beq cr6,0x830795c0
	if (ctx.cr6.eq) goto loc_830795C0;
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r11,16,16,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r21,r11,16
	ctx.r21.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r29,12(r4)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mtctr r15
	ctx.ctr.u64 = ctx.r15.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r5,r7
	ctx.r9.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rotlwi r19,r29,2
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// addi r25,r30,-1
	ctx.r25.s64 = ctx.r30.s64 + -1;
	// lfs f13,-6880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6880);
	ctx.f13.f64 = double(temp.f32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// rotlwi r17,r28,2
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// add r26,r8,r10
	ctx.r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r29,r9,-4
	ctx.r29.s64 = ctx.r9.s64 + -4;
loc_83079464:
	// subf r11,r27,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r27.s64;
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// subfic r9,r23,1024
	ctx.xer.ca = ctx.r23.u32 <= 1024;
	ctx.r9.s64 = 1024 - ctx.r23.s64;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// divwu r8,r9,r31
	ctx.r8.u32 = ctx.r9.u32 / ctx.r31.u32;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r14,r27
	ctx.r14.u64 = ctx.r27.u64;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x830794a0
	if (ctx.cr6.lt) goto loc_830794A0;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
loc_830794A0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8307950c
	if (!ctx.cr6.eq) goto loc_8307950C;
	// mullw r8,r20,r10
	ctx.r8.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r10.s32);
	// mullw r30,r20,r31
	ctx.r30.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r31.s32);
	// add r8,r8,r16
	ctx.r8.u64 = ctx.r8.u64 + ctx.r16.u64;
loc_830794B4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// beq cr6,0x8307950c
	if (ctx.cr6.eq) goto loc_8307950C;
	// clrldi r9,r7,32
	ctx.r9.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lfs f12,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// std r9,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r9.u64);
	// lfd f10,-168(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// rlwinm r9,r8,22,10,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fmuls f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmadds f6,f7,f13,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f6,0(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// beq cr6,0x830794b4
	if (ctx.cr6.eq) goto loc_830794B4;
loc_8307950C:
	// subf r8,r5,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r5.s64;
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// srawi r28,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r8.s32 >> 2;
	// subfic r8,r10,1024
	ctx.xer.ca = ctx.r10.u32 <= 1024;
	ctx.r8.s64 = 1024 - ctx.r10.s64;
	// divwu r8,r8,r31
	ctx.r8.u32 = ctx.r8.u32 / ctx.r31.u32;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8307952c
	if (ctx.cr6.lt) goto loc_8307952C;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
loc_8307952C:
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x830795a4
	if (ctx.cr6.gt) goto loc_830795A4;
	// mullw r8,r20,r10
	ctx.r8.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r10.s32);
	// mullw r30,r20,r31
	ctx.r30.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r31.s32);
	// add r8,r8,r16
	ctx.r8.u64 = ctx.r8.u64 + ctx.r16.u64;
loc_83079540:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// beq cr6,0x830795a4
	if (ctx.cr6.eq) goto loc_830795A4;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// std r7,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r7.u64);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lfs f11,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r9,r8,22,10,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// lfd f0,-160(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmadds f6,f7,f13,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f6,0(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// ble cr6,0x83079540
	if (!ctx.cr6.gt) goto loc_83079540;
loc_830795A4:
	// add r29,r17,r29
	ctx.r29.u64 = ctx.r17.u64 + ctx.r29.u64;
	// add r27,r19,r27
	ctx.r27.u64 = ctx.r19.u64 + ctx.r27.u64;
	// add r26,r19,r26
	ctx.r26.u64 = ctx.r19.u64 + ctx.r26.u64;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bdnz 0x83079464
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83079464;
	// lwz r30,-176(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// b 0x830795c8
	goto loc_830795C8;
loc_830795C0:
	// lwz r5,-172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r14,-172(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
loc_830795C8:
	// rlwinm r7,r11,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// stw r10,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r10.u32);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x830795dc
	if (ctx.cr6.lt) goto loc_830795DC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_830795DC:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83079700
	if (ctx.cr6.eq) goto loc_83079700;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r15,4
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 4, ctx.xer);
	// blt cr6,0x830796b4
	if (ctx.cr6.lt) goto loc_830796B4;
	// addi r28,r15,-3
	ctx.r28.s64 = ctx.r15.s64 + -3;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
loc_830795FC:
	// lhz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// addi r27,r9,-1
	ctx.r27.s64 = ctx.r9.s64 + -1;
	// lwz r29,24(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// addi r26,r9,1
	ctx.r26.s64 = ctx.r9.s64 + 1;
	// mullw r31,r31,r10
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r31,r31,r7
	ctx.r31.u64 = ctx.r31.u64 + ctx.r7.u64;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lfs f0,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r30,24(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lhz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mullw r31,r27,r31
	ctx.r31.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r31.s32);
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r31,r31,r7
	ctx.r31.u64 = ctx.r31.u64 + ctx.r7.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r29,24(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mullw r31,r31,r9
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r31,r31,r7
	ctx.r31.u64 = ctx.r31.u64 + ctx.r7.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lfs f12,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lwz r29,24(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mullw r31,r26,r31
	ctx.r31.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r31.s32);
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r31,r31,r7
	ctx.r31.u64 = ctx.r31.u64 + ctx.r7.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lfs f11,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// stfsu f11,16(r8)
	temp.f32 = float(ctx.f11.f64);
	ea = 16 + ctx.r8.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// blt cr6,0x830795fc
	if (ctx.cr6.lt) goto loc_830795FC;
loc_830796B4:
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x83079700
	if (!ctx.cr6.lt) goto loc_83079700;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r10,r15
	ctx.r8.s64 = ctx.r15.s64 - ctx.r10.s64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_830796D0:
	// lhz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lwz r30,24(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lfs f0,-4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x830796d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830796D0;
loc_83079700:
	// rlwinm r10,r7,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// lwz r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// subf r8,r14,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r14.s64;
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// stw r5,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r5.u32);
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// lhz r10,14(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// subf r9,r7,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
	// sth r9,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r9.u16);
	// lwz r10,28(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r5,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r5.u16);
	// bne cr6,0x83079740
	if (!ctx.cr6.eq) goto loc_83079740;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83079748
	goto loc_83079748;
loc_83079740:
	// lwz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_83079748:
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// lwz r10,-172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83079760
	if (!ctx.cr6.eq) goto loc_83079760;
	// li r3,45
	ctx.r3.s64 = 45;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_83079760:
	// lwz r10,28(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// li r3,43
	ctx.r3.s64 = 43;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r11.u32);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079774"))) PPC_WEAK_FUNC(sub_83079774);
PPC_FUNC_IMPL(__imp__sub_83079774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83079778"))) PPC_WEAK_FUNC(sub_83079778);
PPC_FUNC_IMPL(__imp__sub_83079778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x83079780;
	__savegprlr_27(ctx, base);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r6,14(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830797ac
	if (ctx.cr6.eq) goto loc_830797AC;
loc_83079798:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83079798
	if (!ctx.cr6.eq) goto loc_83079798;
loc_830797AC:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x830798c4
	if (ctx.cr6.eq) goto loc_830798C4;
	// lhz r29,12(r4)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// rlwinm r27,r30,0,28,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// lwz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830797C8:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83079838
	if (ctx.cr6.eq) goto loc_83079838;
	// clrlwi r11,r30,29
	ctx.r11.u64 = ctx.r30.u32 & 0x7;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830797fc
	if (ctx.cr6.eq) goto loc_830797FC;
loc_830797E8:
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830797e8
	if (!ctx.cr6.eq) goto loc_830797E8;
loc_830797FC:
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83079830
	if (!ctx.cr6.eq) goto loc_83079830;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83079828
	if (ctx.cr6.eq) goto loc_83079828;
loc_83079814:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83079814
	if (!ctx.cr6.eq) goto loc_83079814;
loc_83079828:
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// b 0x83079838
	goto loc_83079838;
loc_83079830:
	// ble cr6,0x83079838
	if (!ctx.cr6.gt) goto loc_83079838;
	// addi r8,r31,-1
	ctx.r8.s64 = ctx.r31.s64 + -1;
loc_83079838:
	// mullw r11,r29,r8
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x8307988c
	if (ctx.cr6.lt) goto loc_8307988C;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r6,-3
	ctx.r7.s64 = ctx.r6.s64 + -3;
loc_83079858:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfsux f13,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// lfsux f12,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// lfsux f11,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x83079858
	if (ctx.cr6.lt) goto loc_83079858;
loc_8307988C:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x830798b4
	if (!ctx.cr6.lt) goto loc_830798B4;
	// subf r7,r9,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r9.s64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_830798A8:
	// lfsux f0,r11,r9
	ctx.fpscr.disableFlushMode();
	ea = ctx.r11.u32 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x830798a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830798A8;
loc_830798B4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x830797c8
	if (ctx.cr6.lt) goto loc_830797C8;
loc_830798C4:
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830798C8"))) PPC_WEAK_FUNC(sub_830798C8);
PPC_FUNC_IMPL(__imp__sub_830798C8) {
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
	// bl 0x8307f150
	ctx.lr = 0x830798E0;
	sub_8307F150(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-6876
	ctx.r9.s64 = ctx.r10.s64 + -6876;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8307991C"))) PPC_WEAK_FUNC(sub_8307991C);
PPC_FUNC_IMPL(__imp__sub_8307991C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83079920"))) PPC_WEAK_FUNC(sub_83079920);
PPC_FUNC_IMPL(__imp__sub_83079920) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// b 0x8307f038
	sub_8307F038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307992C"))) PPC_WEAK_FUNC(sub_8307992C);
PPC_FUNC_IMPL(__imp__sub_8307992C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83079930"))) PPC_WEAK_FUNC(sub_83079930);
PPC_FUNC_IMPL(__imp__sub_83079930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x83079938;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhz r8,60(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 60);
	// li r25,45
	ctx.r25.s64 = 45;
	// lhz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mullw r28,r11,r8
	ctx.r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lwz r26,108(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r6,36(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// rlwinm r7,r6,18,14,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x3FFFF;
	// beq cr6,0x8307997c
	if (ctx.cr6.eq) goto loc_8307997C;
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x83079988
	goto loc_83079988;
loc_8307997C:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r27,r10,r9
	ctx.r27.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_83079988:
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// subf r10,r9,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r9.s64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x830799a8
	if (!ctx.cr6.gt) goto loc_830799A8;
	// divwu r11,r10,r8
	ctx.r11.u32 = ctx.r10.u32 / ctx.r8.u32;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_830799A8:
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r11,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r11.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// sth r11,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// lhz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divwu r29,r8,r11
	ctx.r29.u32 = ctx.r8.u32 / ctx.r11.u32;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8307f040
	ctx.lr = 0x830799E4;
	sub_8307F040(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r5,r6,0,15,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83079a18
	if (ctx.cr6.eq) goto loc_83079A18;
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lhz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// divwu r8,r9,r10
	ctx.r8.u32 = ctx.r9.u32 / ctx.r10.u32;
	// stw r8,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r8.u32);
loc_83079A18:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x83079a54
	if (!ctx.cr6.eq) goto loc_83079A54;
	// lhz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x83079a60
	if (ctx.cr6.eq) goto loc_83079A60;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// beq cr6,0x83079a54
	if (ctx.cr6.eq) goto loc_83079A54;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r11.u16);
loc_83079A54:
	// stw r25,832(r30)
	PPC_STORE_U32(ctx.r30.u32 + 832, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_83079A60:
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,832(r30)
	PPC_STORE_U32(ctx.r30.u32 + 832, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079A70"))) PPC_WEAK_FUNC(sub_83079A70);
PPC_FUNC_IMPL(__imp__sub_83079A70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079A74"))) PPC_WEAK_FUNC(sub_83079A74);
PPC_FUNC_IMPL(__imp__sub_83079A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83079A78"))) PPC_WEAK_FUNC(sub_83079A78);
PPC_FUNC_IMPL(__imp__sub_83079A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83079A80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 60);
	// li r28,45
	ctx.r28.s64 = 45;
	// lhz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// mullw r30,r9,r11
	ctx.r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x83079aac
	if (ctx.cr6.eq) goto loc_83079AAC;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x83079ab8
	goto loc_83079AB8;
loc_83079AAC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83079AB8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83079ad8
	if (!ctx.cr6.gt) goto loc_83079AD8;
	// divwu r10,r11,r9
	ctx.r10.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_83079AD8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lhz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// divwu r6,r8,r9
	ctx.r6.u32 = ctx.r8.u32 / ctx.r9.u32;
	// divwu r4,r7,r9
	ctx.r4.u32 = ctx.r7.u32 / ctx.r9.u32;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// bl 0x8307f0b8
	ctx.lr = 0x83079B08;
	sub_8307F0B8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x83079b5c
	if (!ctx.cr6.eq) goto loc_83079B5C;
	// lhz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x83079b50
	if (ctx.cr6.eq) goto loc_83079B50;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// beq cr6,0x83079b60
	if (ctx.cr6.eq) goto loc_83079B60;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_83079B50:
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_83079B5C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83079B60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079B68"))) PPC_WEAK_FUNC(sub_83079B68);
PPC_FUNC_IMPL(__imp__sub_83079B68) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lhz r9,212(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 212);
	// sth r9,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079B88"))) PPC_WEAK_FUNC(sub_83079B88);
PPC_FUNC_IMPL(__imp__sub_83079B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,218(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 218);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83079bb8
	if (ctx.cr6.eq) goto loc_83079BB8;
	// li r10,375
	ctx.r10.s64 = 375;
	// b 0x83079bc0
	goto loc_83079BC0;
loc_83079BB8:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,48000
	ctx.r10.u64 = ctx.r10.u64 | 48000;
loc_83079BC0:
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r7,208(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// addi r6,r31,28
	ctx.r6.s64 = ctx.r31.s64 + 28;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// tdllei r8,0
	if (ctx.r8.u64 <= 0) __builtin_debugtrap();
	// lwz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mulld r11,r4,r7
	ctx.r11.s64 = ctx.r4.s64 * ctx.r7.s64;
	// divdu r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 / ctx.r8.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8307f0e0
	ctx.lr = 0x83079BF0;
	sub_8307F0E0(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r7,219(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 219);
	// stw r9,208(r8)
	PPC_STORE_U32(ctx.r8.u32 + 208, ctx.r9.u32);
	// clrlwi r6,r7,25
	ctx.r6.u64 = ctx.r7.u32 & 0x7F;
	// stb r6,219(r8)
	PPC_STORE_U8(ctx.r8.u32 + 219, ctx.r6.u8);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lhz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// subfc r11,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
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

__attribute__((alias("__imp__sub_83079C48"))) PPC_WEAK_FUNC(sub_83079C48);
PPC_FUNC_IMPL(__imp__sub_83079C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r9,212(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 212);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83079c6c
	if (!ctx.cr6.eq) goto loc_83079C6C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_83079C6C:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r5,52(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// subf r3,r7,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lwz r5,36(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lfs f0,-8020(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -8020);
	ctx.f0.f64 = double(temp.f32);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// rlwinm r4,r5,29,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1F;
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// frsp f3,f8
	ctx.f3.f64 = double(float(ctx.f8.f64));
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// fcfid f1,f10
	ctx.f1.f64 = double(ctx.f10.s64);
	// fmadds f13,f4,f7,f3
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f3.f64));
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fdivs f11,f13,f2
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f2.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f1,f10,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079D04"))) PPC_WEAK_FUNC(sub_83079D04);
PPC_FUNC_IMPL(__imp__sub_83079D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83079D08"))) PPC_WEAK_FUNC(sub_83079D08);
PPC_FUNC_IMPL(__imp__sub_83079D08) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079D1C"))) PPC_WEAK_FUNC(sub_83079D1C);
PPC_FUNC_IMPL(__imp__sub_83079D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83079D20"))) PPC_WEAK_FUNC(sub_83079D20);
PPC_FUNC_IMPL(__imp__sub_83079D20) {
	PPC_FUNC_PROLOGUE();
	// b 0x83079b88
	sub_83079B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079D24"))) PPC_WEAK_FUNC(sub_83079D24);
PPC_FUNC_IMPL(__imp__sub_83079D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83079D28"))) PPC_WEAK_FUNC(sub_83079D28);
PPC_FUNC_IMPL(__imp__sub_83079D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-6876
	ctx.r10.s64 = ctx.r11.s64 + -6876;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8307f108
	sub_8307F108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079D38"))) PPC_WEAK_FUNC(sub_83079D38);
PPC_FUNC_IMPL(__imp__sub_83079D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x83079D40;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,312(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// lwz r26,316(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83079e7c
	if (ctx.cr6.eq) goto loc_83079E7C;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r27,r3,52
	ctx.r27.s64 = ctx.r3.s64 + 52;
	// addi r30,r3,36
	ctx.r30.s64 = ctx.r3.s64 + 36;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r3,16
	ctx.r7.s64 = ctx.r3.s64 + 16;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r6,18
	ctx.r6.s64 = 18;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8307f290
	ctx.lr = 0x83079DA0;
	sub_8307F290(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83079db4
	if (ctx.cr6.eq) goto loc_83079DB4;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_83079DB4:
	// lhz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 140);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mullw r7,r8,r7
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r8,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r8.u16);
	// add r11,r6,r28
	ctx.r11.u64 = ctx.r6.u64 + ctx.r28.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// beq cr6,0x83079e0c
	if (ctx.cr6.eq) goto loc_83079E0C;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r5,212(r7)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + 212);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x83079e0c
	if (ctx.cr6.eq) goto loc_83079E0C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// b 0x83079e18
	goto loc_83079E18;
loc_83079E0C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_83079E18:
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83079e7c
	if (ctx.cr6.lt) goto loc_83079E7C;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83079e7c
	if (ctx.cr6.gt) goto loc_83079E7C;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x83079e7c
	if (ctx.cr6.gt) goto loc_83079E7C;
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83079e7c
	if (!ctx.cr6.eq) goto loc_83079E7C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lbz r9,219(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 219);
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83079e70
	if (ctx.cr6.eq) goto loc_83079E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83079b88
	ctx.lr = 0x83079E68;
	sub_83079B88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_83079E70:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_83079E7C:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079E88"))) PPC_WEAK_FUNC(sub_83079E88);
PPC_FUNC_IMPL(__imp__sub_83079E88) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83079ea0
	if (ctx.cr6.eq) goto loc_83079EA0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x83079ea0
	if (!ctx.cr6.eq) goto loc_83079EA0;
	// b 0x83079b88
	sub_83079B88(ctx, base);
	return;
loc_83079EA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079EA8"))) PPC_WEAK_FUNC(sub_83079EA8);
PPC_FUNC_IMPL(__imp__sub_83079EA8) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-6876
	ctx.r10.s64 = ctx.r11.s64 + -6876;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8307f108
	ctx.lr = 0x83079ED4;
	sub_8307F108(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83079eec
	if (ctx.cr6.eq) goto loc_83079EEC;
	// bl 0x82691540
	ctx.lr = 0x83079EE8;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83079EEC:
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

__attribute__((alias("__imp__sub_83079F04"))) PPC_WEAK_FUNC(sub_83079F04);
PPC_FUNC_IMPL(__imp__sub_83079F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83079F08"))) PPC_WEAK_FUNC(sub_83079F08);
PPC_FUNC_IMPL(__imp__sub_83079F08) {
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
	// bl 0x8307f630
	ctx.lr = 0x83079F20;
	sub_8307F630(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-6816
	ctx.r9.s64 = ctx.r10.s64 + -6816;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// sth r11,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r11.u16);
	// sth r11,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_83079F54"))) PPC_WEAK_FUNC(sub_83079F54);
PPC_FUNC_IMPL(__imp__sub_83079F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83079F58"))) PPC_WEAK_FUNC(sub_83079F58);
PPC_FUNC_IMPL(__imp__sub_83079F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-6816
	ctx.r10.s64 = ctx.r11.s64 + -6816;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8307f8f8
	sub_8307F8F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079F68"))) PPC_WEAK_FUNC(sub_83079F68);
PPC_FUNC_IMPL(__imp__sub_83079F68) {
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
	// lwz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83079fa0
	if (ctx.cr6.eq) goto loc_83079FA0;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r3,-11264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x83079F94;
	sub_82FD6CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// sth r11,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r11.u16);
loc_83079FA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307f6a8
	ctx.lr = 0x83079FA8;
	sub_8307F6A8(ctx, base);
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

__attribute__((alias("__imp__sub_83079FBC"))) PPC_WEAK_FUNC(sub_83079FBC);
PPC_FUNC_IMPL(__imp__sub_83079FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83079FC0"))) PPC_WEAK_FUNC(sub_83079FC0);
PPC_FUNC_IMPL(__imp__sub_83079FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x83079FC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r27,r3,60
	ctx.r27.s64 = ctx.r3.s64 + 60;
	// li r24,45
	ctx.r24.s64 = 45;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8307a0b4
	if (!ctx.cr6.eq) goto loc_8307A0B4;
	// lbz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8307a0b4
	if (!ctx.cr6.eq) goto loc_8307A0B4;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307A00C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f0,220(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8307A03C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307A05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,46
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 46, ctx.xer);
	// bne cr6,0x8307a074
	if (!ctx.cr6.eq) goto loc_8307A074;
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r11,832(r30)
	PPC_STORE_U32(ctx.r30.u32 + 832, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8307A074:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8307a098
	if (ctx.cr6.eq) goto loc_8307A098;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307a0a8
	if (ctx.cr6.eq) goto loc_8307A0A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307f948
	ctx.lr = 0x8307A090;
	sub_8307F948(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8307a0b4
	if (ctx.cr6.eq) goto loc_8307A0B4;
loc_8307A098:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,832(r30)
	PPC_STORE_U32(ctx.r30.u32 + 832, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8307A0A8:
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307a098
	if (ctx.cr6.eq) goto loc_8307A098;
loc_8307A0B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// addi r25,r11,32
	ctx.r25.s64 = ctx.r11.s64 + 32;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r11,r8,29,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1F;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// beq cr6,0x8307a0f4
	if (ctx.cr6.eq) goto loc_8307A0F4;
	// lhz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8307a0f4
	if (ctx.cr6.gt) goto loc_8307A0F4;
	// li r24,17
	ctx.r24.s64 = 17;
loc_8307A0F4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8307a104
	if (!ctx.cr6.eq) goto loc_8307A104;
	// cmpwi cr6,r24,17
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 17, ctx.xer);
	// bne cr6,0x8307a098
	if (!ctx.cr6.eq) goto loc_8307A098;
loc_8307A104:
	// lhz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8307a114
	if (!ctx.cr6.lt) goto loc_8307A114;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8307A114:
	// lhz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 96);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8307a1cc
	if (!ctx.cr6.eq) goto loc_8307A1CC;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lis r28,-31969
	ctx.r28.s64 = -2095120384;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307a144
	if (ctx.cr6.eq) goto loc_8307A144;
	// lwz r3,-11264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8307A13C;
	sub_82FD6CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_8307A144:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mullw r8,r11,r26
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// sth r29,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r29.u16);
	// sth r29,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r29.u16);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// rlwinm r7,r10,18,14,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FFFF;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// sth r6,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r6.u16);
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8307a218
	if (!ctx.cr6.lt) goto loc_8307A218;
	// rlwinm r4,r26,10,0,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 10) & 0xFFFFFC00;
	// lwz r3,-11264(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11264);
	// bl 0x82fd6b98
	ctx.lr = 0x8307A18C;
	sub_82FD6B98(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307a098
	if (ctx.cr6.eq) goto loc_8307A098;
	// lhz r11,98(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 98);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r5,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r5.u16);
	// bl 0x82a75220
	ctx.lr = 0x8307A1B8;
	sub_82A75220(ctx, base);
	// lhz r10,98(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 98);
	// lhz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 96);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r7,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r7.u16);
	// b 0x8307a218
	goto loc_8307A218;
loc_8307A1CC:
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// lhz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 96);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mullw r8,r9,r26
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r26.s32);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// subf r28,r11,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a75220
	ctx.lr = 0x8307A1F0;
	sub_82A75220(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// sth r28,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r28.u16);
	// sth r6,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r6.u16);
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// rlwinm r3,r4,18,14,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x3FFFF;
	// sth r29,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r29.u16);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// sth r29,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r29.u16);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_8307A218:
	// lbz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8307a24c
	if (ctx.cr6.eq) goto loc_8307A24C;
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8307a24c
	if (ctx.cr6.lt) goto loc_8307A24C;
	// addi r11,r9,255
	ctx.r11.s64 = ctx.r9.s64 + 255;
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
loc_8307A24C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307f040
	ctx.lr = 0x8307A260;
	sub_8307F040(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8307a294
	if (ctx.cr6.eq) goto loc_8307A294;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// twllei r26,0
	if (ctx.r26.u32 <= 0) __builtin_debugtrap();
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// divwu r8,r9,r26
	ctx.r8.u32 = ctx.r9.u32 / ctx.r26.u32;
	// stw r8,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r8.u32);
loc_8307A294:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8307a2cc
	if (ctx.cr6.eq) goto loc_8307A2CC;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r9,14(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r24,832(r30)
	PPC_STORE_U32(ctx.r30.u32 + 832, ctx.r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8307A2CC:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r24,832(r30)
	PPC_STORE_U32(ctx.r30.u32 + 832, ctx.r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A2E8"))) PPC_WEAK_FUNC(sub_8307A2E8);
PPC_FUNC_IMPL(__imp__sub_8307A2E8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,98(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 98);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,60(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// sth r9,98(r3)
	PPC_STORE_U16(ctx.r3.u32 + 98, ctx.r9.u16);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8307A32C"))) PPC_WEAK_FUNC(sub_8307A32C);
PPC_FUNC_IMPL(__imp__sub_8307A32C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A330"))) PPC_WEAK_FUNC(sub_8307A330);
PPC_FUNC_IMPL(__imp__sub_8307A330) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307a38c
	if (ctx.cr6.eq) goto loc_8307A38C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8307a374
	if (ctx.cr6.eq) goto loc_8307A374;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8307a38c
	if (!ctx.cr6.eq) goto loc_8307A38C;
	// lbz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8307a38c
	if (!ctx.cr6.eq) goto loc_8307A38C;
loc_8307A374:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r3,-11264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8307A380;
	sub_82FD6CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// sth r11,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r11.u16);
loc_8307A38C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307fbb0
	ctx.lr = 0x8307A398;
	sub_8307FBB0(ctx, base);
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

__attribute__((alias("__imp__sub_8307A3B0"))) PPC_WEAK_FUNC(sub_8307A3B0);
PPC_FUNC_IMPL(__imp__sub_8307A3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8307A3B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,45
	ctx.r29.s64 = 45;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r11,r5,29,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1F;
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// divwu r27,r6,r11
	ctx.r27.u32 = ctx.r6.u32 / ctx.r11.u32;
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// beq cr6,0x8307a418
	if (ctx.cr6.eq) goto loc_8307A418;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x8307a420
	goto loc_8307A420;
loc_8307A418:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8307A420:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8307a4cc
	if (ctx.cr6.lt) goto loc_8307A4CC;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r6,r9,29,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1F;
	// divwu r5,r8,r6
	ctx.r5.u32 = ctx.r8.u32 / ctx.r6.u32;
	// twllei r6,0
	if (ctx.r6.u32 <= 0) __builtin_debugtrap();
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// lhz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8307a4c0
	if (ctx.cr6.eq) goto loc_8307A4C0;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// beq cr6,0x8307a470
	if (ctx.cr6.eq) goto loc_8307A470;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r11.u16);
loc_8307A470:
	// lhz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8307a4cc
	if (!ctx.cr6.eq) goto loc_8307A4CC;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8307a4cc
	if (ctx.cr6.eq) goto loc_8307A4CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307A49C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8307A4BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8307a4cc
	goto loc_8307A4CC;
loc_8307A4C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,17
	ctx.r29.s64 = 17;
	// stb r11,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
loc_8307A4CC:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// divwu r6,r11,r28
	ctx.r6.u32 = ctx.r11.u32 / ctx.r28.u32;
	// twllei r28,0
	if (ctx.r28.u32 <= 0) __builtin_debugtrap();
	// bl 0x8307f0b8
	ctx.lr = 0x8307A4E8;
	sub_8307F0B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A4F4"))) PPC_WEAK_FUNC(sub_8307A4F4);
PPC_FUNC_IMPL(__imp__sub_8307A4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307A4F8"))) PPC_WEAK_FUNC(sub_8307A4F8);
PPC_FUNC_IMPL(__imp__sub_8307A4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8307A500;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 + 44;
	// addi r28,r3,36
	ctx.r28.s64 = ctx.r3.s64 + 36;
	// addi r27,r3,32
	ctx.r27.s64 = ctx.r3.s64 + 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r26,r31,48
	ctx.r26.s64 = ctx.r31.s64 + 48;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,60(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 16;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,18
	ctx.r6.s64 = 18;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x8307f290
	ctx.lr = 0x8307A550;
	sub_8307F290(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8307a684
	if (!ctx.cr6.eq) goto loc_8307A684;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8307a5c4
	if (ctx.cr6.eq) goto loc_8307A5C4;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8307a5c4
	if (ctx.cr6.eq) goto loc_8307A5C4;
	// lhz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 140);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// blt cr6,0x8307a5b8
	if (ctx.cr6.lt) goto loc_8307A5B8;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x8307a5b8
	if (ctx.cr6.gt) goto loc_8307A5B8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8307a5e0
	if (!ctx.cr6.gt) goto loc_8307A5E0;
loc_8307A5B8:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8307A5C4:
	// lhz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 140);
	// subf r9,r11,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r11.s64;
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// divwu r7,r9,r8
	ctx.r7.u32 = ctx.r9.u32 / ctx.r8.u32;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
loc_8307A5E0:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307A5F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 140);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lfs f0,-23580(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// clrldi r4,r5,32
	ctx.r4.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,160(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// beq cr6,0x8307a638
	if (ctx.cr6.eq) goto loc_8307A638;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// ble cr6,0x8307a648
	if (!ctx.cr6.gt) goto loc_8307A648;
loc_8307A638:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
loc_8307A648:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f0,220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lbz r10,119(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// stb r10,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r10.u8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8307A678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
loc_8307A684:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A68C"))) PPC_WEAK_FUNC(sub_8307A68C);
PPC_FUNC_IMPL(__imp__sub_8307A68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307A690"))) PPC_WEAK_FUNC(sub_8307A690);
PPC_FUNC_IMPL(__imp__sub_8307A690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r8,r11,29,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lfs f0,-23580(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A6C4"))) PPC_WEAK_FUNC(sub_8307A6C4);
PPC_FUNC_IMPL(__imp__sub_8307A6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307A6C8"))) PPC_WEAK_FUNC(sub_8307A6C8);
PPC_FUNC_IMPL(__imp__sub_8307A6C8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r7,r8,29,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1F;
	// mullw r3,r7,r4
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A6E8"))) PPC_WEAK_FUNC(sub_8307A6E8);
PPC_FUNC_IMPL(__imp__sub_8307A6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r9,212(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 212);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8307a70c
	if (!ctx.cr6.eq) goto loc_8307A70C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8307A70C:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r5,44(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// lwz r7,76(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// subf r3,r7,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lwz r5,36(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lfs f0,-8020(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -8020);
	ctx.f0.f64 = double(temp.f32);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// rlwinm r4,r5,29,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1F;
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// frsp f3,f8
	ctx.f3.f64 = double(float(ctx.f8.f64));
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// fcfid f1,f10
	ctx.f1.f64 = double(ctx.f10.s64);
	// fmadds f13,f4,f7,f3
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f3.f64));
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fdivs f11,f13,f2
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f2.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f1,f10,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A7A4"))) PPC_WEAK_FUNC(sub_8307A7A4);
PPC_FUNC_IMPL(__imp__sub_8307A7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307A7A8"))) PPC_WEAK_FUNC(sub_8307A7A8);
PPC_FUNC_IMPL(__imp__sub_8307A7A8) {
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
	// lwz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r30,98(r3)
	PPC_STORE_U16(ctx.r3.u32 + 98, ctx.r30.u16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307a7e8
	if (ctx.cr6.eq) goto loc_8307A7E8;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r3,-11264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11264);
	// bl 0x82fd6cc8
	ctx.lr = 0x8307A7E0;
	sub_82FD6CC8(ctx, base);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// sth r30,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r30.u16);
loc_8307A7E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307fd80
	ctx.lr = 0x8307A7F0;
	sub_8307FD80(ctx, base);
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

__attribute__((alias("__imp__sub_8307A808"))) PPC_WEAK_FUNC(sub_8307A808);
PPC_FUNC_IMPL(__imp__sub_8307A808) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-6816
	ctx.r10.s64 = ctx.r11.s64 + -6816;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8307f8f8
	ctx.lr = 0x8307A834;
	sub_8307F8F8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8307a84c
	if (ctx.cr6.eq) goto loc_8307A84C;
	// bl 0x82691540
	ctx.lr = 0x8307A848;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8307A84C:
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

__attribute__((alias("__imp__sub_8307A864"))) PPC_WEAK_FUNC(sub_8307A864);
PPC_FUNC_IMPL(__imp__sub_8307A864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307A868"))) PPC_WEAK_FUNC(sub_8307A868);
PPC_FUNC_IMPL(__imp__sub_8307A868) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0xFFFFF800;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r9,r11,2048
	ctx.r9.s64 = ctx.r11.s64 + 2048;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8307a8c0
	if (ctx.cr6.gt) goto loc_8307A8C0;
loc_8307A888:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x8307a8c8
	if (ctx.cr6.gt) goto loc_8307A8C8;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,2048
	ctx.r9.s64 = ctx.r11.s64 + 2048;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8307a888
	if (!ctx.cr6.gt) goto loc_8307A888;
loc_8307A8C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8307A8C8:
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// subf. r10,r9,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r4,r6,8,22,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0x300;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// rlwinm r7,r7,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r6,r9,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// addi r7,r9,32
	ctx.r7.s64 = ctx.r9.s64 + 32;
	// beq 0x8307a960
	if (ctx.cr0.eq) goto loc_8307A960;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8307A904:
	// rlwinm r10,r7,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r7,29
	ctx.r9.u64 = ctx.r7.u32 & 0x7;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x8307a934
	if (!ctx.cr6.lt) goto loc_8307A934;
	// subfic r4,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r4.s64 = 1 - ctx.r9.s64;
	// lbzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// rotlwi r9,r6,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// srw r4,r6,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r10,r4,17
	ctx.r10.u64 = ctx.r4.u32 & 0x7FFF;
	// b 0x8307a958
	goto loc_8307A958;
loc_8307A934:
	// subfic r4,r9,9
	ctx.xer.ca = ctx.r9.u32 <= 9;
	ctx.r4.s64 = 9 - ctx.r9.s64;
	// lbzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbzx r10,r5,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r6,r9,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// srw r9,r10,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r10,r9,17
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFF;
loc_8307A958:
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bdnz 0x8307a904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8307A904;
loc_8307A960:
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A970"))) PPC_WEAK_FUNC(sub_8307A970);
PPC_FUNC_IMPL(__imp__sub_8307A970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8307A978;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r6,r11,23,9,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// bl 0x8307a868
	ctx.lr = 0x8307A99C;
	sub_8307A868(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// rlwinm r9,r10,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8307a9e4
	if (ctx.cr6.eq) goto loc_8307A9E4;
	// rlwinm r10,r11,25,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3;
	// rlwinm r9,r11,0,23,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x180;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8307A9E4:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A9F0"))) PPC_WEAK_FUNC(sub_8307A9F0);
PPC_FUNC_IMPL(__imp__sub_8307A9F0) {
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
	// bl 0x8307f150
	ctx.lr = 0x8307AA08;
	sub_8307F150(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-6748
	ctx.r9.s64 = ctx.r10.s64 + -6748;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8307AA3C"))) PPC_WEAK_FUNC(sub_8307AA3C);
PPC_FUNC_IMPL(__imp__sub_8307AA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307AA40"))) PPC_WEAK_FUNC(sub_8307AA40);
PPC_FUNC_IMPL(__imp__sub_8307AA40) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307AA68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8307aa94
	if (ctx.cr6.eq) goto loc_8307AA94;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x830afe80
	ctx.lr = 0x8307AA80;
	sub_830AFE80(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x830b06e8
	ctx.lr = 0x8307AA88;
	sub_830B06E8(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x830b05b0
	ctx.lr = 0x8307AA90;
	sub_830B05B0(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_8307AA94:
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8307aab0
	if (ctx.cr6.eq) goto loc_8307AAB0;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r3,-11264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11264);
	// bl 0x82fd6e18
	ctx.lr = 0x8307AAAC;
	sub_82FD6E18(ctx, base);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_8307AAB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307f038
	ctx.lr = 0x8307AAB8;
	sub_8307F038(ctx, base);
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

