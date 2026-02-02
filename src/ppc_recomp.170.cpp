#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82924B30"))) PPC_WEAK_FUNC(sub_82924B30);
PPC_FUNC_IMPL(__imp__sub_82924B30) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r11,r4,92
	ctx.r11.s64 = ctx.r4.s64 * 92;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,64(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82924B48"))) PPC_WEAK_FUNC(sub_82924B48);
PPC_FUNC_IMPL(__imp__sub_82924B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82924B50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82924B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82924B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82924B94"))) PPC_WEAK_FUNC(sub_82924B94);
PPC_FUNC_IMPL(__imp__sub_82924B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82924B98"))) PPC_WEAK_FUNC(sub_82924B98);
PPC_FUNC_IMPL(__imp__sub_82924B98) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r11,r4,92
	ctx.r11.s64 = ctx.r4.s64 * 92;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,68(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82924BB0"))) PPC_WEAK_FUNC(sub_82924BB0);
PPC_FUNC_IMPL(__imp__sub_82924BB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r11,r4,92
	ctx.r11.s64 = ctx.r4.s64 * 92;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,60(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82924BC8"))) PPC_WEAK_FUNC(sub_82924BC8);
PPC_FUNC_IMPL(__imp__sub_82924BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82924BD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82924BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82924C08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82924C14"))) PPC_WEAK_FUNC(sub_82924C14);
PPC_FUNC_IMPL(__imp__sub_82924C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82924C18"))) PPC_WEAK_FUNC(sub_82924C18);
PPC_FUNC_IMPL(__imp__sub_82924C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82924C20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82924C3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82924C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82924C64"))) PPC_WEAK_FUNC(sub_82924C64);
PPC_FUNC_IMPL(__imp__sub_82924C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82924C68"))) PPC_WEAK_FUNC(sub_82924C68);
PPC_FUNC_IMPL(__imp__sub_82924C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82924C70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82924C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82924CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82924CB4"))) PPC_WEAK_FUNC(sub_82924CB4);
PPC_FUNC_IMPL(__imp__sub_82924CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82924CB8"))) PPC_WEAK_FUNC(sub_82924CB8);
PPC_FUNC_IMPL(__imp__sub_82924CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82924CC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82924CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82924CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82924D04"))) PPC_WEAK_FUNC(sub_82924D04);
PPC_FUNC_IMPL(__imp__sub_82924D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82924D08"))) PPC_WEAK_FUNC(sub_82924D08);
PPC_FUNC_IMPL(__imp__sub_82924D08) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82691500
	ctx.lr = 0x82924D24;
	sub_82691500(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82924D3C"))) PPC_WEAK_FUNC(sub_82924D3C);
PPC_FUNC_IMPL(__imp__sub_82924D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82924D40"))) PPC_WEAK_FUNC(sub_82924D40);
PPC_FUNC_IMPL(__imp__sub_82924D40) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82924d6c
	if (ctx.cr6.eq) goto loc_82924D6C;
	// bl 0x82691540
	ctx.lr = 0x82924D64;
	sub_82691540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82924D6C:
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

__attribute__((alias("__imp__sub_82924D80"))) PPC_WEAK_FUNC(sub_82924D80);
PPC_FUNC_IMPL(__imp__sub_82924D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82924D98:
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82924d98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82924D98;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_82924DA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82924dc8
	if (!ctx.cr0.eq) goto loc_82924DC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82924da8
	if (!ctx.cr6.eq) goto loc_82924DA8;
loc_82924DC8:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82924DD4"))) PPC_WEAK_FUNC(sub_82924DD4);
PPC_FUNC_IMPL(__imp__sub_82924DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82924DD8"))) PPC_WEAK_FUNC(sub_82924DD8);
PPC_FUNC_IMPL(__imp__sub_82924DD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,816(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bge cr6,0x82924e38
	if (!ctx.cr6.lt) goto loc_82924E38;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r4,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
	// ld r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lwz r10,816(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 816);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r10,56
	ctx.r6.s64 = ctx.r10.s64 + 56;
	// std r8,56(r10)
	PPC_STORE_U64(ctx.r10.u32 + 56, ctx.r8.u64);
	// ld r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r5,64(r10)
	PPC_STORE_U64(ctx.r10.u32 + 64, ctx.r5.u64);
	// lwz r10,816(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 816);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 816, ctx.r4.u32);
	// blr 
	return;
loc_82924E38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82924E40"))) PPC_WEAK_FUNC(sub_82924E40);
PPC_FUNC_IMPL(__imp__sub_82924E40) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1076(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1076);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bge cr6,0x82924e80
	if (!ctx.cr6.lt) goto loc_82924E80;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 820, ctx.r4.u32);
	// lwz r10,1076(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1076);
	// addi r9,r10,103
	ctx.r9.s64 = ctx.r10.s64 + 103;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r5,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r10,1076(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1076);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,1076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1076, ctx.r7.u32);
	// blr 
	return;
loc_82924E80:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82924E88"))) PPC_WEAK_FUNC(sub_82924E88);
PPC_FUNC_IMPL(__imp__sub_82924E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82924E90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829242e8
	ctx.lr = 0x82924E9C;
	sub_829242E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82924eb4
	if (ctx.cr6.eq) goto loc_82924EB4;
loc_82924EA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82924EB4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82924ea8
	if (ctx.cr6.eq) goto loc_82924EA8;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,268
	ctx.r29.s64 = ctx.r31.s64 + 268;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82924ED8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82924ed8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82924ED8;
	// addi r30,r31,148
	ctx.r30.s64 = ctx.r31.s64 + 148;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82924EF4;
	sub_82FA7CF0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,484(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82d29e30
	ctx.lr = 0x82924F08;
	sub_82D29E30(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r28,297(r31)
	PPC_STORE_U8(ctx.r31.u32 + 297, ctx.r28.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82924f34
	if (ctx.cr6.eq) goto loc_82924F34;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82924f34
	if (ctx.cr6.eq) goto loc_82924F34;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r28,296(r31)
	PPC_STORE_U8(ctx.r31.u32 + 296, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82924F34:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,296(r31)
	PPC_STORE_U8(ctx.r31.u32 + 296, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82924F48"))) PPC_WEAK_FUNC(sub_82924F48);
PPC_FUNC_IMPL(__imp__sub_82924F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82924F50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829242e8
	ctx.lr = 0x82924F5C;
	sub_829242E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82924f74
	if (ctx.cr6.eq) goto loc_82924F74;
loc_82924F68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82924F74:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82924f68
	if (ctx.cr6.eq) goto loc_82924F68;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,268
	ctx.r29.s64 = ctx.r31.s64 + 268;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82924F98:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82924f98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82924F98;
	// addi r30,r31,148
	ctx.r30.s64 = ctx.r31.s64 + 148;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82924FB0;
	sub_82FA77C0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r4,254
	ctx.r4.s64 = 254;
	// bl 0x82d29e30
	ctx.lr = 0x82924FC4;
	sub_82D29E30(ctx, base);
	// stb r28,297(r31)
	PPC_STORE_U8(ctx.r31.u32 + 297, ctx.r28.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82924fe8
	if (ctx.cr6.eq) goto loc_82924FE8;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82924fe8
	if (ctx.cr6.eq) goto loc_82924FE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r28,296(r31)
	PPC_STORE_U8(ctx.r31.u32 + 296, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82924FE8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,296(r31)
	PPC_STORE_U8(ctx.r31.u32 + 296, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82924FFC"))) PPC_WEAK_FUNC(sub_82924FFC);
PPC_FUNC_IMPL(__imp__sub_82924FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82925000"))) PPC_WEAK_FUNC(sub_82925000);
PPC_FUNC_IMPL(__imp__sub_82925000) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r4,440(r3)
	PPC_STORE_U64(ctx.r3.u32 + 440, ctx.r4.u64);
	// stb r11,424(r3)
	PPC_STORE_U8(ctx.r3.u32 + 424, ctx.r11.u8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8292501C"))) PPC_WEAK_FUNC(sub_8292501C);
PPC_FUNC_IMPL(__imp__sub_8292501C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82925020"))) PPC_WEAK_FUNC(sub_82925020);
PPC_FUNC_IMPL(__imp__sub_82925020) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,436(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82925028"))) PPC_WEAK_FUNC(sub_82925028);
PPC_FUNC_IMPL(__imp__sub_82925028) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,74(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 74);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82925074
	if (!ctx.cr6.eq) goto loc_82925074;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,74(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8292506c
	if (!ctx.cr6.eq) goto loc_8292506C;
loc_82925058:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,74(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82925058
	if (ctx.cr6.eq) goto loc_82925058;
loc_8292506C:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82925074:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x829250ac
	if (!ctx.cr6.eq) goto loc_829250AC;
loc_82925084:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x829250ac
	if (!ctx.cr6.eq) goto loc_829250AC;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82925084
	if (ctx.cr6.eq) goto loc_82925084;
loc_829250AC:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829250B4"))) PPC_WEAK_FUNC(sub_829250B4);
PPC_FUNC_IMPL(__imp__sub_829250B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829250B8"))) PPC_WEAK_FUNC(sub_829250B8);
PPC_FUNC_IMPL(__imp__sub_829250B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829250d4
	if (ctx.cr6.eq) goto loc_829250D4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_829250D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,74(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 74);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82925110
	if (!ctx.cr6.eq) goto loc_82925110;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,74(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82925108
	if (!ctx.cr6.eq) goto loc_82925108;
loc_829250F4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,74(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829250f4
	if (ctx.cr6.eq) goto loc_829250F4;
loc_82925108:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82925110:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82925148
	if (!ctx.cr6.eq) goto loc_82925148;
loc_82925120:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82925148
	if (!ctx.cr6.eq) goto loc_82925148;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82925120
	if (ctx.cr6.eq) goto loc_82925120;
loc_82925148:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,74(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 74);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82925160"))) PPC_WEAK_FUNC(sub_82925160);
PPC_FUNC_IMPL(__imp__sub_82925160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82925168;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r31,231(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 231);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r30,239(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 239);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r28,244(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r27,252(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lbz r26,263(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 263);
	// lbz r25,271(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 271);
	// stw r4,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r4.u32);
	// stb r5,328(r3)
	PPC_STORE_U8(ctx.r3.u32 + 328, ctx.r5.u8);
	// stb r11,481(r3)
	PPC_STORE_U8(ctx.r3.u32 + 481, ctx.r11.u8);
	// stb r29,482(r3)
	PPC_STORE_U8(ctx.r3.u32 + 482, ctx.r29.u8);
	// stw r11,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r11.u32);
	// stb r6,329(r3)
	PPC_STORE_U8(ctx.r3.u32 + 329, ctx.r6.u8);
	// stb r7,330(r3)
	PPC_STORE_U8(ctx.r3.u32 + 330, ctx.r7.u8);
	// stb r8,332(r3)
	PPC_STORE_U8(ctx.r3.u32 + 332, ctx.r8.u8);
	// stb r9,331(r3)
	PPC_STORE_U8(ctx.r3.u32 + 331, ctx.r9.u8);
	// stb r10,333(r3)
	PPC_STORE_U8(ctx.r3.u32 + 333, ctx.r10.u8);
	// stb r31,334(r3)
	PPC_STORE_U8(ctx.r3.u32 + 334, ctx.r31.u8);
	// stb r30,335(r3)
	PPC_STORE_U8(ctx.r3.u32 + 335, ctx.r30.u8);
	// stw r28,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r28.u32);
	// stw r27,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r27.u32);
	// stb r26,552(r3)
	PPC_STORE_U8(ctx.r3.u32 + 552, ctx.r26.u8);
	// stb r25,553(r3)
	PPC_STORE_U8(ctx.r3.u32 + 553, ctx.r25.u8);
	// bl 0x82923a48
	ctx.lr = 0x829251D0;
	sub_82923A48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829251D8"))) PPC_WEAK_FUNC(sub_829251D8);
PPC_FUNC_IMPL(__imp__sub_829251D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r4,552(r3)
	PPC_STORE_U8(ctx.r3.u32 + 552, ctx.r4.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r5,553(r3)
	PPC_STORE_U8(ctx.r3.u32 + 553, ctx.r5.u8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r11,482(r3)
	PPC_STORE_U8(ctx.r3.u32 + 482, ctx.r11.u8);
	// li r8,16
	ctx.r8.s64 = 16;
	// stb r10,481(r3)
	PPC_STORE_U8(ctx.r3.u32 + 481, ctx.r10.u8);
	// stw r9,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r9.u32);
	// stw r11,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r11.u32);
	// stb r11,328(r3)
	PPC_STORE_U8(ctx.r3.u32 + 328, ctx.r11.u8);
	// stb r11,329(r3)
	PPC_STORE_U8(ctx.r3.u32 + 329, ctx.r11.u8);
	// stb r11,330(r3)
	PPC_STORE_U8(ctx.r3.u32 + 330, ctx.r11.u8);
	// stb r11,332(r3)
	PPC_STORE_U8(ctx.r3.u32 + 332, ctx.r11.u8);
	// stb r11,331(r3)
	PPC_STORE_U8(ctx.r3.u32 + 331, ctx.r11.u8);
	// stb r11,333(r3)
	PPC_STORE_U8(ctx.r3.u32 + 333, ctx.r11.u8);
	// stb r11,334(r3)
	PPC_STORE_U8(ctx.r3.u32 + 334, ctx.r11.u8);
	// stb r11,335(r3)
	PPC_STORE_U8(ctx.r3.u32 + 335, ctx.r11.u8);
	// stw r8,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r8.u32);
	// stw r11,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r11.u32);
	// b 0x82923a48
	sub_82923A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292522C"))) PPC_WEAK_FUNC(sub_8292522C);
PPC_FUNC_IMPL(__imp__sub_8292522C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82925230"))) PPC_WEAK_FUNC(sub_82925230);
PPC_FUNC_IMPL(__imp__sub_82925230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82925238;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r28,247(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 247);
	// li r3,8
	ctx.r3.s64 = 8;
	// lbz r27,255(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 255);
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lbz r26,263(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 263);
	// lbz r24,271(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 271);
	// li r30,1
	ctx.r30.s64 = 1;
	// lbz r23,279(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 279);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r7,r31,487
	ctx.r7.s64 = ctx.r31.s64 + 487;
	// stw r4,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r4.u32);
	// stb r8,328(r31)
	PPC_STORE_U8(ctx.r31.u32 + 328, ctx.r8.u8);
	// stb r9,329(r31)
	PPC_STORE_U8(ctx.r31.u32 + 329, ctx.r9.u8);
	// stb r25,481(r31)
	PPC_STORE_U8(ctx.r31.u32 + 481, ctx.r25.u8);
	// stb r30,482(r31)
	PPC_STORE_U8(ctx.r31.u32 + 482, ctx.r30.u8);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// stb r10,330(r31)
	PPC_STORE_U8(ctx.r31.u32 + 330, ctx.r10.u8);
	// stb r28,332(r31)
	PPC_STORE_U8(ctx.r31.u32 + 332, ctx.r28.u8);
	// stb r27,331(r31)
	PPC_STORE_U8(ctx.r31.u32 + 331, ctx.r27.u8);
	// stb r26,333(r31)
	PPC_STORE_U8(ctx.r31.u32 + 333, ctx.r26.u8);
	// stb r24,334(r31)
	PPC_STORE_U8(ctx.r31.u32 + 334, ctx.r24.u8);
	// stb r23,335(r31)
	PPC_STORE_U8(ctx.r31.u32 + 335, ctx.r23.u8);
	// stw r5,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r5.u32);
	// stw r3,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
loc_829252B0:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r10,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x829252b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829252B0;
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x829252CC;
	sub_82FA77C0(ctx, base);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x829252DC;
	sub_82FA77C0(ctx, base);
	// lbz r11,303(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 303);
	// lbz r10,311(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 311);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,552(r31)
	PPC_STORE_U8(ctx.r31.u32 + 552, ctx.r11.u8);
	// stb r10,553(r31)
	PPC_STORE_U8(ctx.r31.u32 + 553, ctx.r10.u8);
	// bl 0x82923a48
	ctx.lr = 0x829252F4;
	sub_82923A48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829252FC"))) PPC_WEAK_FUNC(sub_829252FC);
PPC_FUNC_IMPL(__imp__sub_829252FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82925300"))) PPC_WEAK_FUNC(sub_82925300);
PPC_FUNC_IMPL(__imp__sub_82925300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82925308;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82925324
	if (ctx.cr6.eq) goto loc_82925324;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82925538
	if (!ctx.cr6.eq) goto loc_82925538;
loc_82925324:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829242e8
	ctx.lr = 0x8292532C;
	sub_829242E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82925538
	if (!ctx.cr6.eq) goto loc_82925538;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82925538
	if (!ctx.cr6.eq) goto loc_82925538;
	// lbz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82925538
	if (!ctx.cr6.eq) goto loc_82925538;
	// lbz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82925538
	if (!ctx.cr6.eq) goto loc_82925538;
	// lbz r11,314(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 314);
	// lbz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 332);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829253bc
	if (!ctx.cr6.eq) goto loc_829253BC;
	// lbz r11,333(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 333);
	// lbz r10,315(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 315);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829253bc
	if (!ctx.cr6.eq) goto loc_829253BC;
	// lbz r11,334(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 334);
	// lbz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 316);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829253bc
	if (!ctx.cr6.eq) goto loc_829253BC;
	// lbz r11,335(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 335);
	// lbz r10,317(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 317);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829253bc
	if (!ctx.cr6.eq) goto loc_829253BC;
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x829253bc
	if (!ctx.cr6.eq) goto loc_829253BC;
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82925538
	if (ctx.cr6.eq) goto loc_82925538;
loc_829253BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r11.u64);
	// addi r30,r31,360
	ctx.r30.s64 = ctx.r31.s64 + 360;
	// std r11,368(r31)
	PPC_STORE_U64(ctx.r31.u32 + 368, ctx.r11.u64);
	// std r11,376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 376, ctx.r11.u64);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r7,340(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r6,324(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r5,336(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829253F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,313(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 313);
	// li r8,32
	ctx.r8.s64 = 32;
	// lbz r7,312(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 312);
	// li r6,8
	ctx.r6.s64 = 8;
	// subfic r5,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r9.s64;
	// lbz r3,311(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 311);
	// lbz r10,310(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 310);
	// li r9,4
	ctx.r9.s64 = 4;
	// subfe r5,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r4,334(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 334);
	// subfic r11,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r7.s64;
	// lbz r29,333(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 333);
	// and r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 & ctx.r8.u64;
	// lbz r28,332(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 332);
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r27,335(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 335);
	// subfic r5,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r3.s64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// lwz r6,340(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// subfe r26,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r26.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r5,336(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// subfic r3,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r10.s64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r4,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r4.s64;
	// and r9,r26,r9
	ctx.r9.u64 = ctx.r26.u64 & ctx.r9.u64;
	// subfe r4,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r10,2
	ctx.r10.s64 = 2;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// and r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 & ctx.r10.u64;
	// li r7,512
	ctx.r7.s64 = 512;
	// subfic r29,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r29.s64 = 0 - ctx.r29.s64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r8,r4,r7
	ctx.r8.u64 = ctx.r4.u64 & ctx.r7.u64;
	// subfe r10,r29,r29
	temp.u8 = (~ctx.r29.u32 + ctx.r29.u32 < ~ctx.r29.u32) | (~ctx.r29.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r29.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r7,256
	ctx.r7.s64 = 256;
	// subfic r29,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r29.s64 = 0 - ctx.r28.s64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 & ctx.r7.u64;
	// subfe r4,r29,r29
	temp.u8 = (~ctx.r29.u32 + ctx.r29.u32 < ~ctx.r29.u32) | (~ctx.r29.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r29.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r7,16
	ctx.r7.s64 = 16;
	// subfic r29,r27,0
	ctx.xer.ca = ctx.r27.u32 <= 0;
	ctx.r29.s64 = 0 - ctx.r27.s64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 & ctx.r7.u64;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// subfe r7,r29,r29
	temp.u8 = (~ctx.r29.u32 + ctx.r29.u32 < ~ctx.r29.u32) | (~ctx.r29.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r29.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// and r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// or r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 | ctx.r4.u64;
	// bl 0x82d290e8
	ctx.lr = 0x829254DC;
	sub_82D290E8(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x82925524
	if (!ctx.cr6.eq) goto loc_82925524;
	// lbz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 332);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,333(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 333);
	// lbz r8,334(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 334);
	// lbz r7,335(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 335);
	// lwz r6,336(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r5,340(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stb r10,356(r31)
	PPC_STORE_U8(ctx.r31.u32 + 356, ctx.r10.u8);
	// stb r11,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r11.u8);
	// stb r9,345(r31)
	PPC_STORE_U8(ctx.r31.u32 + 345, ctx.r9.u8);
	// stb r8,346(r31)
	PPC_STORE_U8(ctx.r31.u32 + 346, ctx.r8.u8);
	// stb r7,347(r31)
	PPC_STORE_U8(ctx.r31.u32 + 347, ctx.r7.u8);
	// stw r6,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r6.u32);
	// stw r5,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82925524:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82925538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82925538:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82925540"))) PPC_WEAK_FUNC(sub_82925540);
PPC_FUNC_IMPL(__imp__sub_82925540) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,481(r3)
	PPC_STORE_U8(ctx.r3.u32 + 481, ctx.r11.u8);
	// stb r10,480(r3)
	PPC_STORE_U8(ctx.r3.u32 + 480, ctx.r10.u8);
	// stb r11,482(r3)
	PPC_STORE_U8(ctx.r3.u32 + 482, ctx.r11.u8);
	// stb r11,552(r3)
	PPC_STORE_U8(ctx.r3.u32 + 552, ctx.r11.u8);
	// stb r11,553(r3)
	PPC_STORE_U8(ctx.r3.u32 + 553, ctx.r11.u8);
	// b 0x82924198
	sub_82924198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82925560"))) PPC_WEAK_FUNC(sub_82925560);
PPC_FUNC_IMPL(__imp__sub_82925560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82925568;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82924198
	ctx.lr = 0x82925574;
	sub_82924198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82923a48
	ctx.lr = 0x8292557C;
	sub_82923A48(ctx, base);
	// lbz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 296);
	// li r25,1
	ctx.r25.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829255e8
	if (ctx.cr6.eq) goto loc_829255E8;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x829255e8
	if (ctx.cr6.eq) goto loc_829255E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75860
	ctx.lr = 0x829255AC;
	sub_82A75860(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829255e0
	if (!ctx.cr6.eq) goto loc_829255E0;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82fa77c0
	ctx.lr = 0x829255C8;
	sub_82FA77C0(ctx, base);
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x829255D8;
	sub_82FA77C0(ctx, base);
	// stb r25,297(r31)
	PPC_STORE_U8(ctx.r31.u32 + 297, ctx.r25.u8);
	// b 0x829255e4
	goto loc_829255E4;
loc_829255E0:
	// stb r28,297(r31)
	PPC_STORE_U8(ctx.r31.u32 + 297, ctx.r28.u8);
loc_829255E4:
	// stb r28,296(r31)
	PPC_STORE_U8(ctx.r31.u32 + 296, ctx.r28.u8);
loc_829255E8:
	// lbz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82925668
	if (ctx.cr6.eq) goto loc_82925668;
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82925668
	if (ctx.cr6.eq) goto loc_82925668;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75860
	ctx.lr = 0x82925610;
	sub_82A75860(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82925648
	if (!ctx.cr6.eq) goto loc_82925648;
	// lbz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 344);
	// lbz r10,345(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 345);
	// lbz r9,346(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 346);
	// lbz r8,347(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 347);
	// lwz r7,348(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r6,352(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// stb r11,314(r31)
	PPC_STORE_U8(ctx.r31.u32 + 314, ctx.r11.u8);
	// stb r10,315(r31)
	PPC_STORE_U8(ctx.r31.u32 + 315, ctx.r10.u8);
	// stb r9,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r9.u8);
	// stb r8,317(r31)
	PPC_STORE_U8(ctx.r31.u32 + 317, ctx.r8.u8);
	// stw r7,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r7.u32);
	// stw r6,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r6.u32);
loc_82925648:
	// stb r28,356(r31)
	PPC_STORE_U8(ctx.r31.u32 + 356, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82925660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82925300
	ctx.lr = 0x82925668;
	sub_82925300(ctx, base);
loc_82925668:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r26,2
	ctx.r26.s64 = 2;
	// li r27,3
	ctx.r27.s64 = 3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x829256c8
	if (!ctx.cr6.eq) goto loc_829256C8;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82925790
	if (ctx.cr6.eq) goto loc_82925790;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75860
	ctx.lr = 0x8292569C;
	sub_82A75860(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829256b0
	if (!ctx.cr6.eq) goto loc_829256B0;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// b 0x82925790
	goto loc_82925790;
loc_829256B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a74d28
	ctx.lr = 0x829256B8;
	sub_82A74D28(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r29.u32);
	// stw r3,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r3.u32);
	// b 0x82925784
	goto loc_82925784;
loc_829256C8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82925708
	if (!ctx.cr6.eq) goto loc_82925708;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82925790
	if (ctx.cr6.eq) goto loc_82925790;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75860
	ctx.lr = 0x829256F0;
	sub_82A75860(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829256b0
	if (!ctx.cr6.eq) goto loc_829256B0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82925790
	goto loc_82925790;
loc_82925708:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82925790
	if (!ctx.cr6.eq) goto loc_82925790;
	// lbz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82925790
	if (!ctx.cr6.eq) goto loc_82925790;
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82925730
	if (ctx.cr6.eq) goto loc_82925730;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82925790
	if (!ctx.cr6.eq) goto loc_82925790;
loc_82925730:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82925790
	if (ctx.cr6.eq) goto loc_82925790;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75860
	ctx.lr = 0x82925750;
	sub_82A75860(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82925760
	if (ctx.cr6.eq) goto loc_82925760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a74d28
	ctx.lr = 0x82925760;
	sub_82A74D28(ctx, base);
loc_82925760:
	// stw r28,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r28.u32);
	// stw r28,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r28.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82a756a0
	ctx.lr = 0x82925770;
	sub_82A756A0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r28,424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 424, ctx.r28.u8);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stb r28,388(r31)
	PPC_STORE_U8(ctx.r31.u32 + 388, ctx.r28.u8);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
loc_82925784:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
loc_82925790:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829257a4
	if (ctx.cr6.eq) goto loc_829257A4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x829257ac
	if (!ctx.cr6.eq) goto loc_829257AC;
loc_829257A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82925300
	ctx.lr = 0x829257AC;
	sub_82925300(ctx, base);
loc_829257AC:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x829257f8
	if (ctx.cr6.lt) goto loc_829257F8;
	// bne cr6,0x8292588c
	if (!ctx.cr6.eq) goto loc_8292588C;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8292588c
	if (ctx.cr6.eq) goto loc_8292588C;
	// bl 0x82a74d28
	ctx.lr = 0x829257D0;
	sub_82A74D28(ctx, base);
	// stw r3,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829257e4
	if (ctx.cr6.lt) goto loc_829257E4;
	// stw r26,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r26.u32);
	// b 0x8292588c
	goto loc_8292588C;
loc_829257E4:
	// lwz r3,436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// bl 0x82691540
	ctx.lr = 0x829257EC;
	sub_82691540(ctx, base);
	// stw r28,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r28.u32);
	// stw r27,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r27.u32);
	// b 0x8292588c
	goto loc_8292588C;
loc_829257F8:
	// lbz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82925888
	if (ctx.cr6.eq) goto loc_82925888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829242e8
	ctx.lr = 0x8292580C;
	sub_829242E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82925888
	if (!ctx.cr6.eq) goto loc_82925888;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r5,440(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 440);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d29508
	ctx.lr = 0x82925838;
	sub_82D29508(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r3.u32);
	// bl 0x82691500
	ctx.lr = 0x82925844;
	sub_82691500(ctx, base);
	// stw r3,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r3.u32);
	// std r28,448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 448, ctx.r28.u64);
	// addi r8,r31,448
	ctx.r8.s64 = ctx.r31.s64 + 448;
	// std r28,456(r31)
	PPC_STORE_U64(ctx.r31.u32 + 456, ctx.r28.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r28,464(r31)
	PPC_STORE_U64(ctx.r31.u32 + 464, ctx.r28.u64);
	// stw r28,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,436(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// ld r5,440(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 440);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82d29508
	ctx.lr = 0x82925874;
	sub_82D29508(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x82925884
	if (!ctx.cr6.eq) goto loc_82925884;
	// stw r25,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r25.u32);
	// b 0x82925888
	goto loc_82925888;
loc_82925884:
	// stw r27,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r27.u32);
loc_82925888:
	// stb r28,424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 424, ctx.r28.u8);
loc_8292588C:
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x829259d4
	if (ctx.cr6.gt) goto loc_829259D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82925908
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82925908;
	// bdzf 4*cr6+eq,0x8292593c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8292593C;
	// bne cr6,0x82925994
	if (!ctx.cr6.eq) goto loc_82925994;
	// lbz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829259d4
	if (ctx.cr6.eq) goto loc_829259D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829242e8
	ctx.lr = 0x829258C0;
	sub_829242E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829259d4
	if (!ctx.cr6.eq) goto loc_829259D4;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r5,r31,396
	ctx.r5.s64 = ctx.r31.s64 + 396;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_829258E0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x829258e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829258E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82d295e8
	ctx.lr = 0x829258F4;
	sub_82D295E8(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x829259d4
	if (!ctx.cr6.eq) goto loc_829259D4;
	// stw r25,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82925908:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// addi r30,r31,396
	ctx.r30.s64 = ctx.r31.s64 + 396;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x829259d4
	if (ctx.cr6.eq) goto loc_829259D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75860
	ctx.lr = 0x82925928;
	sub_82A75860(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829259c8
	if (!ctx.cr6.eq) goto loc_829259C8;
	// stw r26,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_8292593C:
	// lbz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829259d4
	if (!ctx.cr6.eq) goto loc_829259D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829242e8
	ctx.lr = 0x82925950;
	sub_829242E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829259d4
	if (!ctx.cr6.eq) goto loc_829259D4;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r4,r31,396
	ctx.r4.s64 = ctx.r31.s64 + 396;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82925970:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82925970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82925970;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82d29688
	ctx.lr = 0x82925980;
	sub_82D29688(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x829259d4
	if (!ctx.cr6.eq) goto loc_829259D4;
	// stw r27,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82925994:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// addi r30,r31,396
	ctx.r30.s64 = ctx.r31.s64 + 396;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x829259d4
	if (ctx.cr6.eq) goto loc_829259D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75860
	ctx.lr = 0x829259B4;
	sub_82A75860(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829259c8
	if (!ctx.cr6.eq) goto loc_829259C8;
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_829259C8:
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a74d28
	ctx.lr = 0x829259D4;
	sub_82A74D28(ctx, base);
loc_829259D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829259DC"))) PPC_WEAK_FUNC(sub_829259DC);
PPC_FUNC_IMPL(__imp__sub_829259DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829259E0"))) PPC_WEAK_FUNC(sub_829259E0);
PPC_FUNC_IMPL(__imp__sub_829259E0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-28456
	ctx.r9.s64 = ctx.r11.s64 + -28456;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// bne cr6,0x82925a4c
	if (!ctx.cr6.eq) goto loc_82925A4C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stb r10,1089(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1089, ctx.r10.u8);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x82925a30
	if (!ctx.cr6.eq) goto loc_82925A30;
	// bl 0x82a74de0
	ctx.lr = 0x82925A30;
	sub_82A74DE0(ctx, base);
loc_82925A30:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82925a44
	if (ctx.cr6.eq) goto loc_82925A44;
	// bl 0x82691540
	ctx.lr = 0x82925A40;
	sub_82691540(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_82925A44:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r30,1089(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1089, ctx.r30.u8);
loc_82925A4C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82925a60
	if (ctx.cr6.eq) goto loc_82925A60;
	// bl 0x82691540
	ctx.lr = 0x82925A5C;
	sub_82691540(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_82925A60:
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

__attribute__((alias("__imp__sub_82925A78"))) PPC_WEAK_FUNC(sub_82925A78);
PPC_FUNC_IMPL(__imp__sub_82925A78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,74(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 74);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82925a98
	if (!ctx.cr6.eq) goto loc_82925A98;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82925A98:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82925ac0
	if (!ctx.cr6.eq) goto loc_82925AC0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82925AC0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82925ae0
	if (!ctx.cr6.eq) goto loc_82925AE0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82925AE0:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82925AF0"))) PPC_WEAK_FUNC(sub_82925AF0);
PPC_FUNC_IMPL(__imp__sub_82925AF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,74(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 74);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82925b10
	if (!ctx.cr6.eq) goto loc_82925B10;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82925B10:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82925b38
	if (!ctx.cr6.eq) goto loc_82925B38;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82925B38:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82925b58
	if (!ctx.cr6.eq) goto loc_82925B58;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82925B58:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82925B68"))) PPC_WEAK_FUNC(sub_82925B68);
PPC_FUNC_IMPL(__imp__sub_82925B68) {
	PPC_FUNC_PROLOGUE();
	// stb r4,332(r3)
	PPC_STORE_U8(ctx.r3.u32 + 332, ctx.r4.u8);
	// stb r5,333(r3)
	PPC_STORE_U8(ctx.r3.u32 + 333, ctx.r5.u8);
	// stb r6,334(r3)
	PPC_STORE_U8(ctx.r3.u32 + 334, ctx.r6.u8);
	// stb r7,335(r3)
	PPC_STORE_U8(ctx.r3.u32 + 335, ctx.r7.u8);
	// stw r8,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r8.u32);
	// stw r9,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r9.u32);
	// b 0x82925300
	sub_82925300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82925B84"))) PPC_WEAK_FUNC(sub_82925B84);
PPC_FUNC_IMPL(__imp__sub_82925B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82925B88"))) PPC_WEAK_FUNC(sub_82925B88);
PPC_FUNC_IMPL(__imp__sub_82925B88) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,334(r3)
	PPC_STORE_U8(ctx.r3.u32 + 334, ctx.r9.u8);
	// b 0x82925300
	sub_82925300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82925B9C"))) PPC_WEAK_FUNC(sub_82925B9C);
PPC_FUNC_IMPL(__imp__sub_82925B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82925BA0"))) PPC_WEAK_FUNC(sub_82925BA0);
PPC_FUNC_IMPL(__imp__sub_82925BA0) {
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
	// bl 0x829259e0
	ctx.lr = 0x82925BC0;
	sub_829259E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82925bd8
	if (ctx.cr6.eq) goto loc_82925BD8;
	// bl 0x82691540
	ctx.lr = 0x82925BD4;
	sub_82691540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82925BD8:
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

__attribute__((alias("__imp__sub_82925BF0"))) PPC_WEAK_FUNC(sub_82925BF0);
PPC_FUNC_IMPL(__imp__sub_82925BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82925BF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82925c48
	if (!ctx.cr6.eq) goto loc_82925C48;
loc_82925C14:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x828d5d68
	ctx.lr = 0x82925C20;
	sub_828D5D68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82925c34
	if (ctx.cr6.eq) goto loc_82925C34;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82925c3c
	goto loc_82925C3C;
loc_82925C34:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82925C3C:
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82925c14
	if (ctx.cr6.eq) goto loc_82925C14;
loc_82925C48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82925C54"))) PPC_WEAK_FUNC(sub_82925C54);
PPC_FUNC_IMPL(__imp__sub_82925C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82925C58"))) PPC_WEAK_FUNC(sub_82925C58);
PPC_FUNC_IMPL(__imp__sub_82925C58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82691500
	ctx.lr = 0x82925C74;
	sub_82691500(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82925cb4
	if (ctx.cr6.eq) goto loc_82925CB4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, ctx.r11.u8);
	// stb r11,74(r3)
	PPC_STORE_U8(ctx.r3.u32 + 74, ctx.r11.u8);
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
loc_82925CB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,11272
	ctx.r9.s64 = ctx.r11.s64 + 11272;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82240040
	ctx.lr = 0x82925CD0;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_82925CD0"))) PPC_WEAK_FUNC(sub_82925CD0);
PPC_FUNC_IMPL(__imp__sub_82925CD0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82691500
	ctx.lr = 0x82925CF8;
	sub_82691500(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82925d48
	if (ctx.cr6.eq) goto loc_82925D48;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,73(r8)
	PPC_STORE_U8(ctx.r8.u32 + 73, ctx.r11.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,74(r7)
	PPC_STORE_U8(ctx.r7.u32 + 74, ctx.r11.u8);
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
loc_82925D48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,11272
	ctx.r10.s64 = ctx.r11.s64 + 11272;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82240040
	ctx.lr = 0x82925D60;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_82925D60"))) PPC_WEAK_FUNC(sub_82925D60);
PPC_FUNC_IMPL(__imp__sub_82925D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82925D68;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,74(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 74);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82925d90
	if (ctx.cr6.eq) goto loc_82925D90;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,32172
	ctx.r3.s64 = ctx.r11.s64 + 32172;
	// bl 0x82fa0680
	ctx.lr = 0x82925D90;
	sub_82FA0680(ctx, base);
loc_82925D90:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82925028
	ctx.lr = 0x82925D9C;
	sub_82925028(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82925db8
	if (ctx.cr6.eq) goto loc_82925DB8;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82925ddc
	goto loc_82925DDC;
loc_82925DB8:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,74(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 74);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82925dd0
	if (ctx.cr6.eq) goto loc_82925DD0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82925ddc
	goto loc_82925DDC;
loc_82925DD0:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82925ec8
	if (!ctx.cr6.eq) goto loc_82925EC8;
loc_82925DDC:
	// lbz r11,74(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 74);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82925df0
	if (!ctx.cr6.eq) goto loc_82925DF0;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82925DF0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82925e08
	if (!ctx.cr6.eq) goto loc_82925E08;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82925e20
	goto loc_82925E20;
loc_82925E08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82925e1c
	if (!ctx.cr6.eq) goto loc_82925E1C;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82925e20
	goto loc_82925E20;
loc_82925E1C:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82925E20:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82925e70
	if (!ctx.cr6.eq) goto loc_82925E70;
	// lbz r11,74(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82925e44
	if (ctx.cr6.eq) goto loc_82925E44;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82925e6c
	goto loc_82925E6C;
loc_82925E44:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,74(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82925e6c
	if (!ctx.cr6.eq) goto loc_82925E6C;
loc_82925E58:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,74(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82925e58
	if (ctx.cr6.eq) goto loc_82925E58;
loc_82925E6C:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82925E70:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82925f5c
	if (!ctx.cr6.eq) goto loc_82925F5C;
	// lbz r11,74(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82925e98
	if (ctx.cr6.eq) goto loc_82925E98;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82925f5c
	goto loc_82925F5C;
loc_82925E98:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,74(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82925ec0
	if (!ctx.cr6.eq) goto loc_82925EC0;
loc_82925EAC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,74(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82925eac
	if (ctx.cr6.eq) goto loc_82925EAC;
loc_82925EC0:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82925f5c
	goto loc_82925F5C;
loc_82925EC8:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82925ee8
	if (!ctx.cr6.eq) goto loc_82925EE8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82925f10
	goto loc_82925F10;
loc_82925EE8:
	// lbz r11,74(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 74);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82925efc
	if (!ctx.cr6.eq) goto loc_82925EFC;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82925EFC:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_82925F10:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82925f28
	if (!ctx.cr6.eq) goto loc_82925F28;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82925f44
	goto loc_82925F44;
loc_82925F28:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82925f40
	if (!ctx.cr6.eq) goto loc_82925F40;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82925f44
	goto loc_82925F44;
loc_82925F40:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82925F44:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,73(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 73);
	// lbz r10,73(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 73);
	// stb r9,73(r25)
	PPC_STORE_U8(ctx.r25.u32 + 73, ctx.r9.u8);
	// stb r10,73(r26)
	PPC_STORE_U8(ctx.r26.u32 + 73, ctx.r10.u8);
loc_82925F5C:
	// lbz r11,73(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 73);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x829260f4
	if (!ctx.cr6.eq) goto loc_829260F4;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829260f0
	if (ctx.cr6.eq) goto loc_829260F0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82925F80:
	// lbz r11,73(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 73);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x829260f0
	if (!ctx.cr6.eq) goto loc_829260F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82926038
	if (!ctx.cr6.eq) goto loc_82926038;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82925fc0
	if (!ctx.cr6.eq) goto loc_82925FC0;
	// stb r29,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82925a78
	ctx.lr = 0x82925FBC;
	sub_82925A78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82925FC0:
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8292608c
	if (!ctx.cr6.eq) goto loc_8292608C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,73(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 73);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82925fec
	if (!ctx.cr6.eq) goto loc_82925FEC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,73(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 73);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x82926088
	if (ctx.cr6.eq) goto loc_82926088;
loc_82925FEC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,73(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 73);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82926014
	if (!ctx.cr6.eq) goto loc_82926014;
	// stb r29,73(r10)
	PPC_STORE_U8(ctx.r10.u32 + 73, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82925af0
	ctx.lr = 0x82926010;
	sub_82925AF0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82926014:
	// lbz r10,73(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r10.u8);
	// stb r29,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,73(r9)
	PPC_STORE_U8(ctx.r9.u32 + 73, ctx.r29.u8);
	// bl 0x82925a78
	ctx.lr = 0x82926034;
	sub_82925A78(ctx, base);
	// b 0x829260f0
	goto loc_829260F0;
loc_82926038:
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8292605c
	if (!ctx.cr6.eq) goto loc_8292605C;
	// stb r29,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82925af0
	ctx.lr = 0x82926058;
	sub_82925AF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8292605C:
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8292608c
	if (!ctx.cr6.eq) goto loc_8292608C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,73(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 73);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x829260a8
	if (!ctx.cr6.eq) goto loc_829260A8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,73(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 73);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x829260a8
	if (!ctx.cr6.eq) goto loc_829260A8;
loc_82926088:
	// stb r30,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r30.u8);
loc_8292608C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82925f80
	if (!ctx.cr6.eq) goto loc_82925F80;
	// b 0x829260f0
	goto loc_829260F0;
loc_829260A8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,73(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 73);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x829260d0
	if (!ctx.cr6.eq) goto loc_829260D0;
	// stb r29,73(r10)
	PPC_STORE_U8(ctx.r10.u32 + 73, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82925a78
	ctx.lr = 0x829260CC;
	sub_82925A78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_829260D0:
	// lbz r10,73(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r10.u8);
	// stb r29,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,73(r9)
	PPC_STORE_U8(ctx.r9.u32 + 73, ctx.r29.u8);
	// bl 0x82925af0
	ctx.lr = 0x829260F0;
	sub_82925AF0(ctx, base);
loc_829260F0:
	// stb r29,73(r28)
	PPC_STORE_U8(ctx.r28.u32 + 73, ctx.r29.u8);
loc_829260F4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82691540
	ctx.lr = 0x829260FC;
	sub_82691540(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82926110
	if (ctx.cr6.eq) goto loc_82926110;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82926110:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82926120"))) PPC_WEAK_FUNC(sub_82926120);
PPC_FUNC_IMPL(__imp__sub_82926120) {
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
	// lbz r11,74(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 74);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292616c
	if (!ctx.cr6.eq) goto loc_8292616C;
loc_82926148:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82926120
	ctx.lr = 0x82926154;
	sub_82926120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82691540
	ctx.lr = 0x82926160;
	sub_82691540(ctx, base);
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82926148
	if (ctx.cr6.eq) goto loc_82926148;
loc_8292616C:
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

__attribute__((alias("__imp__sub_82926184"))) PPC_WEAK_FUNC(sub_82926184);
PPC_FUNC_IMPL(__imp__sub_82926184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82926188"))) PPC_WEAK_FUNC(sub_82926188);
PPC_FUNC_IMPL(__imp__sub_82926188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82926190;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,1074
	ctx.r10.s64 = 70385664;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,23634
	ctx.r9.u64 = ctx.r10.u64 | 23634;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x829261c8
	if (ctx.cr6.lt) goto loc_829261C8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82691540
	ctx.lr = 0x829261BC;
	sub_82691540(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-26596
	ctx.r3.s64 = ctx.r11.s64 + -26596;
	// bl 0x82fa0648
	ctx.lr = 0x829261C8;
	sub_82FA0648(ctx, base);
loc_829261C8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829261f8
	if (!ctx.cr6.eq) goto loc_829261F8;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// b 0x82926238
	goto loc_82926238;
loc_829261F8:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82926220
	if (ctx.cr6.eq) goto loc_82926220;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82926238
	if (!ctx.cr6.eq) goto loc_82926238;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x82926238
	goto loc_82926238;
loc_82926220:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82926238
	if (!ctx.cr6.eq) goto loc_82926238;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_82926238:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8292635c
	if (!ctx.cr6.eq) goto loc_8292635C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82926254:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829262dc
	if (!ctx.cr6.eq) goto loc_829262DC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8292629c
	if (!ctx.cr6.eq) goto loc_8292629C;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,73(r10)
	PPC_STORE_U8(ctx.r10.u32 + 73, ctx.r29.u8);
	// stb r29,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,73(r8)
	PPC_STORE_U8(ctx.r8.u32 + 73, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x8292634c
	goto loc_8292634C;
loc_8292629C:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829262b4
	if (!ctx.cr6.eq) goto loc_829262B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82925a78
	ctx.lr = 0x829262B4;
	sub_82925A78(ctx, base);
loc_829262B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,73(r9)
	PPC_STORE_U8(ctx.r9.u32 + 73, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82925af0
	ctx.lr = 0x829262D8;
	sub_82925AF0(ctx, base);
	// b 0x8292634c
	goto loc_8292634C;
loc_829262DC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82926310
	if (!ctx.cr6.eq) goto loc_82926310;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,73(r10)
	PPC_STORE_U8(ctx.r10.u32 + 73, ctx.r29.u8);
	// stb r29,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,73(r8)
	PPC_STORE_U8(ctx.r8.u32 + 73, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x8292634c
	goto loc_8292634C;
loc_82926310:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82926328
	if (!ctx.cr6.eq) goto loc_82926328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82925af0
	ctx.lr = 0x82926328;
	sub_82925AF0(ctx, base);
loc_82926328:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,73(r9)
	PPC_STORE_U8(ctx.r9.u32 + 73, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82925a78
	ctx.lr = 0x8292634C;
	sub_82925A78(ctx, base);
loc_8292634C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82926254
	if (ctx.cr6.eq) goto loc_82926254;
loc_8292635C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,73(r10)
	PPC_STORE_U8(ctx.r10.u32 + 73, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82926378"))) PPC_WEAK_FUNC(sub_82926378);
PPC_FUNC_IMPL(__imp__sub_82926378) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82926120
	ctx.lr = 0x82926398;
	sub_82926120(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_829263CC"))) PPC_WEAK_FUNC(sub_829263CC);
PPC_FUNC_IMPL(__imp__sub_829263CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829263D0"))) PPC_WEAK_FUNC(sub_829263D0);
PPC_FUNC_IMPL(__imp__sub_829263D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x829263D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r27,r5,12
	ctx.r27.s64 = ctx.r5.s64 + 12;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82926468
	if (!ctx.cr6.eq) goto loc_82926468;
	// clrlwi r24,r6,24
	ctx.r24.u64 = ctx.r6.u32 & 0xFF;
loc_8292640C:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82926434
	if (ctx.cr6.eq) goto loc_82926434;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x828d5d68
	ctx.lr = 0x82926424;
	sub_828D5D68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82926444
	goto loc_82926444;
loc_82926434:
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828d5d68
	ctx.lr = 0x82926440;
	sub_828D5D68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82926444:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82926458
	if (ctx.cr6.eq) goto loc_82926458;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8292645c
	goto loc_8292645C;
loc_82926458:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8292645C:
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292640c
	if (ctx.cr6.eq) goto loc_8292640C;
loc_82926468:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829264c8
	if (ctx.cr6.eq) goto loc_829264C8;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829264c0
	if (!ctx.cr6.eq) goto loc_829264C0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82926188
	ctx.lr = 0x829264A4;
	sub_82926188(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r23,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r23.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_829264C0:
	// bl 0x829250b8
	ctx.lr = 0x829264C4;
	sub_829250B8(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_829264C8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x828d5d68
	ctx.lr = 0x829264D4;
	sub_828D5D68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82926514
	if (ctx.cr6.eq) goto loc_82926514;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82926188
	ctx.lr = 0x829264F8;
	sub_82926188(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r23,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r23.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82926514:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82691540
	ctx.lr = 0x8292651C;
	sub_82691540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82926534"))) PPC_WEAK_FUNC(sub_82926534);
PPC_FUNC_IMPL(__imp__sub_82926534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82926538"))) PPC_WEAK_FUNC(sub_82926538);
PPC_FUNC_IMPL(__imp__sub_82926538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82926540;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-28360
	ctx.r10.s64 = ctx.r11.s64 + -28360;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r31,r3,120
	ctx.r31.s64 = ctx.r3.s64 + 120;
	// lwz r9,140(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82926570
	if (ctx.cr6.lt) goto loc_82926570;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82691540
	ctx.lr = 0x82926570;
	sub_82691540(ctx, base);
loc_82926570:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8292659c
	if (ctx.cr6.eq) goto loc_8292659C;
	// bl 0x82691540
	ctx.lr = 0x82926598;
	sub_82691540(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8292659C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829265A4"))) PPC_WEAK_FUNC(sub_829265A4);
PPC_FUNC_IMPL(__imp__sub_829265A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829265A8"))) PPC_WEAK_FUNC(sub_829265A8);
PPC_FUNC_IMPL(__imp__sub_829265A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x829265B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82925bf0
	ctx.lr = 0x829265CC;
	sub_82925BF0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8292660c
	if (ctx.cr6.eq) goto loc_8292660C;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d5d68
	ctx.lr = 0x829265E8;
	sub_828D5D68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292660c
	if (!ctx.cr6.eq) goto loc_8292660C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8292660C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292662C"))) PPC_WEAK_FUNC(sub_8292662C);
PPC_FUNC_IMPL(__imp__sub_8292662C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82926630"))) PPC_WEAK_FUNC(sub_82926630);
PPC_FUNC_IMPL(__imp__sub_82926630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82926638;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82926684
	if (!ctx.cr6.eq) goto loc_82926684;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82926684
	if (!ctx.cr6.eq) goto loc_82926684;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82926378
	ctx.lr = 0x8292666C;
	sub_82926378(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82926684:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x829266b4
	if (ctx.cr6.eq) goto loc_829266B4;
loc_8292668C:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82925028
	ctx.lr = 0x82926698;
	sub_82925028(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82925d60
	ctx.lr = 0x829266A8;
	sub_82925D60(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8292668c
	if (!ctx.cr6.eq) goto loc_8292668C;
loc_829266B4:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829266C4"))) PPC_WEAK_FUNC(sub_829266C4);
PPC_FUNC_IMPL(__imp__sub_829266C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829266C8"))) PPC_WEAK_FUNC(sub_829266C8);
PPC_FUNC_IMPL(__imp__sub_829266C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x829266D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r27,r6,12
	ctx.r27.s64 = ctx.r6.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82926710
	if (!ctx.cr6.eq) goto loc_82926710;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82926188
	ctx.lr = 0x82926704;
	sub_82926188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82926710:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8292675c
	if (!ctx.cr6.eq) goto loc_8292675C;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828d5d68
	ctx.lr = 0x8292672C;
	sub_828D5D68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829268d0
	if (ctx.cr6.eq) goto loc_829268D0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82926188
	ctx.lr = 0x82926750;
	sub_82926188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_8292675C:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829267a8
	if (!ctx.cr6.eq) goto loc_829267A8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x828d5d68
	ctx.lr = 0x82926774;
	sub_828D5D68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829268d0
	if (ctx.cr6.eq) goto loc_829268D0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82926188
	ctx.lr = 0x8292679C;
	sub_82926188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_829267A8:
	// addi r25,r29,12
	ctx.r25.s64 = ctx.r29.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x828d5d68
	ctx.lr = 0x829267B8;
	sub_828D5D68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82926838
	if (ctx.cr6.eq) goto loc_82926838;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829250b8
	ctx.lr = 0x829267D0;
	sub_829250B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r26,12
	ctx.r3.s64 = ctx.r26.s64 + 12;
	// bl 0x828d5d68
	ctx.lr = 0x829267E0;
	sub_828D5D68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82926838
	if (ctx.cr6.eq) goto loc_82926838;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82926820
	if (ctx.cr6.eq) goto loc_82926820;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82926188
	ctx.lr = 0x82926814;
	sub_82926188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82926820:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82926188
	ctx.lr = 0x8292682C;
	sub_82926188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82926838:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828d5d68
	ctx.lr = 0x82926844;
	sub_828D5D68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829268d0
	if (ctx.cr6.eq) goto loc_829268D0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82925028
	ctx.lr = 0x8292685C;
	sub_82925028(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82926884
	if (ctx.cr6.eq) goto loc_82926884;
	// addi r4,r26,12
	ctx.r4.s64 = ctx.r26.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828d5d68
	ctx.lr = 0x82926878;
	sub_828D5D68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829268d0
	if (ctx.cr6.eq) goto loc_829268D0;
loc_82926884:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829268b8
	if (ctx.cr6.eq) goto loc_829268B8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82926188
	ctx.lr = 0x829268AC;
	sub_82926188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_829268B8:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82926188
	ctx.lr = 0x829268C4;
	sub_82926188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_829268D0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829263d0
	ctx.lr = 0x829268E4;
	sub_829263D0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829268FC"))) PPC_WEAK_FUNC(sub_829268FC);
PPC_FUNC_IMPL(__imp__sub_829268FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82926900"))) PPC_WEAK_FUNC(sub_82926900);
PPC_FUNC_IMPL(__imp__sub_82926900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82926908;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-28360
	ctx.r10.s64 = ctx.r11.s64 + -28360;
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r29,3
	ctx.r29.s64 = 3;
	// std r30,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r30.u64);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r30,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// bl 0x822401e0
	ctx.lr = 0x8292695C;
	sub_822401E0(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,296(r31)
	PPC_STORE_U8(ctx.r31.u32 + 296, ctx.r30.u8);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stb r30,297(r31)
	PPC_STORE_U8(ctx.r31.u32 + 297, ctx.r30.u8);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stb r30,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r30.u8);
	// stb r30,309(r31)
	PPC_STORE_U8(ctx.r31.u32 + 309, ctx.r30.u8);
	// stb r30,310(r31)
	PPC_STORE_U8(ctx.r31.u32 + 310, ctx.r30.u8);
	// stb r30,311(r31)
	PPC_STORE_U8(ctx.r31.u32 + 311, ctx.r30.u8);
	// stb r30,312(r31)
	PPC_STORE_U8(ctx.r31.u32 + 312, ctx.r30.u8);
	// stb r30,313(r31)
	PPC_STORE_U8(ctx.r31.u32 + 313, ctx.r30.u8);
	// stb r30,314(r31)
	PPC_STORE_U8(ctx.r31.u32 + 314, ctx.r30.u8);
	// stb r30,315(r31)
	PPC_STORE_U8(ctx.r31.u32 + 315, ctx.r30.u8);
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// stb r30,317(r31)
	PPC_STORE_U8(ctx.r31.u32 + 317, ctx.r30.u8);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stb r30,328(r31)
	PPC_STORE_U8(ctx.r31.u32 + 328, ctx.r30.u8);
	// stb r30,329(r31)
	PPC_STORE_U8(ctx.r31.u32 + 329, ctx.r30.u8);
	// stb r30,330(r31)
	PPC_STORE_U8(ctx.r31.u32 + 330, ctx.r30.u8);
	// stb r30,331(r31)
	PPC_STORE_U8(ctx.r31.u32 + 331, ctx.r30.u8);
	// stb r30,332(r31)
	PPC_STORE_U8(ctx.r31.u32 + 332, ctx.r30.u8);
	// stb r30,333(r31)
	PPC_STORE_U8(ctx.r31.u32 + 333, ctx.r30.u8);
	// stb r30,334(r31)
	PPC_STORE_U8(ctx.r31.u32 + 334, ctx.r30.u8);
	// stb r30,335(r31)
	PPC_STORE_U8(ctx.r31.u32 + 335, ctx.r30.u8);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// stb r30,345(r31)
	PPC_STORE_U8(ctx.r31.u32 + 345, ctx.r30.u8);
	// stb r30,346(r31)
	PPC_STORE_U8(ctx.r31.u32 + 346, ctx.r30.u8);
	// stb r30,347(r31)
	PPC_STORE_U8(ctx.r31.u32 + 347, ctx.r30.u8);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stb r30,356(r31)
	PPC_STORE_U8(ctx.r31.u32 + 356, ctx.r30.u8);
	// stb r30,388(r31)
	PPC_STORE_U8(ctx.r31.u32 + 388, ctx.r30.u8);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stb r30,424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 424, ctx.r30.u8);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// stb r30,480(r31)
	PPC_STORE_U8(ctx.r31.u32 + 480, ctx.r30.u8);
	// stb r30,481(r31)
	PPC_STORE_U8(ctx.r31.u32 + 481, ctx.r30.u8);
	// stb r30,482(r31)
	PPC_STORE_U8(ctx.r31.u32 + 482, ctx.r30.u8);
	// stw r28,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r28.u32);
	// stw r29,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r29.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82926A1C;
	sub_82FA7CF0(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82926A2C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82926a2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82926A2C;
	// std r30,488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 488, ctx.r30.u64);
	// std r30,496(r31)
	PPC_STORE_U64(ctx.r31.u32 + 496, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r30,504(r31)
	PPC_STORE_U64(ctx.r31.u32 + 504, ctx.r30.u64);
	// std r30,512(r31)
	PPC_STORE_U64(ctx.r31.u32 + 512, ctx.r30.u64);
	// std r30,520(r31)
	PPC_STORE_U64(ctx.r31.u32 + 520, ctx.r30.u64);
	// std r30,528(r31)
	PPC_STORE_U64(ctx.r31.u32 + 528, ctx.r30.u64);
	// std r30,536(r31)
	PPC_STORE_U64(ctx.r31.u32 + 536, ctx.r30.u64);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82926A60"))) PPC_WEAK_FUNC(sub_82926A60);
PPC_FUNC_IMPL(__imp__sub_82926A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82926A68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82926ca8
	if (!ctx.cr6.eq) goto loc_82926CA8;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,26580
	ctx.r30.s64 = ctx.r11.s64 + 26580;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829265a8
	ctx.lr = 0x82926A98;
	sub_829265A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82926be4
	if (ctx.cr6.eq) goto loc_82926BE4;
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// addi r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 + 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82926ba4
	if (ctx.cr6.eq) goto loc_82926BA4;
	// li r4,100
	ctx.r4.s64 = 100;
	// bctrl 
	ctx.lr = 0x82926AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82926B00:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82926b00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82926B00;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82fa77c0
	ctx.lr = 0x82926B24;
	sub_82FA77C0(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r30,37
	ctx.r4.s64 = ctx.r30.s64 + 37;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x82fa77c0
	ctx.lr = 0x82926B3C;
	sub_82FA77C0(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r30,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r30.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r30,64(r6)
	PPC_STORE_U32(ctx.r6.u32 + 64, ctx.r30.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r30,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r30.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,76(r9)
	PPC_STORE_U32(ctx.r9.u32 + 76, ctx.r30.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r30,80(r7)
	PPC_STORE_U32(ctx.r7.u32 + 80, ctx.r30.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r30,84(r5)
	PPC_STORE_U32(ctx.r5.u32 + 84, ctx.r30.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r30,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r30.u32);
	// b 0x82926bc0
	goto loc_82926BC0;
loc_82926BA4:
	// li r4,8
	ctx.r4.s64 = 8;
	// bctrl 
	ctx.lr = 0x82926BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
loc_82926BC0:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82926BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82926BE4:
	// li r30,0
	ctx.r30.s64 = 0;
	// ld r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d29908
	ctx.lr = 0x82926C04;
	sub_82D29908(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82926C1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82926ca8
	if (ctx.cr6.eq) goto loc_82926CA8;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r7,r31,20
	ctx.r7.s64 = ctx.r31.s64 + 20;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82926C3C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82926c3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82926C3C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x82d29908
	ctx.lr = 0x82926C58;
	sub_82D29908(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x82926c94
	if (!ctx.cr6.eq) goto loc_82926C94;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r31,1080
	ctx.r10.s64 = ctx.r31.s64 + 1080;
	// stb r8,1080(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1080, ctx.r8.u8);
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82926C78:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82926c78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82926C78;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82926C94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82926CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82926CA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82926CB0"))) PPC_WEAK_FUNC(sub_82926CB0);
PPC_FUNC_IMPL(__imp__sub_82926CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82926CB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82925c58
	ctx.lr = 0x82926CD4;
	sub_82925C58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82926d0c
	if (ctx.cr0.eq) goto loc_82926D0C;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82926CF0:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82926cf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82926CF0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// li r5,53
	ctx.r5.s64 = 53;
	// bl 0x82fa77c0
	ctx.lr = 0x82926D0C;
	sub_82FA77C0(ctx, base);
loc_82926D0C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829266c8
	ctx.lr = 0x82926D20;
	sub_829266C8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82926D2C"))) PPC_WEAK_FUNC(sub_82926D2C);
PPC_FUNC_IMPL(__imp__sub_82926D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82926D30"))) PPC_WEAK_FUNC(sub_82926D30);
PPC_FUNC_IMPL(__imp__sub_82926D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82926D38;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82925bf0
	ctx.lr = 0x82926D48;
	sub_82925BF0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82926d70
	if (ctx.cr6.eq) goto loc_82926D70;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d5d68
	ctx.lr = 0x82926D64;
	sub_828D5D68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82926dc8
	if (ctx.cr6.eq) goto loc_82926DC8;
loc_82926D70:
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82926D80:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82926d80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82926D80;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,53
	ctx.r5.s64 = 53;
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// bl 0x82fa77c0
	ctx.lr = 0x82926DA4;
	sub_82FA77C0(ctx, base);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82926cb0
	ctx.lr = 0x82926DB8;
	sub_82926CB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82926DC8:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82926DD4"))) PPC_WEAK_FUNC(sub_82926DD4);
PPC_FUNC_IMPL(__imp__sub_82926DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82926DD8"))) PPC_WEAK_FUNC(sub_82926DD8);
PPC_FUNC_IMPL(__imp__sub_82926DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82926DE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82926f78
	if (!ctx.cr6.eq) goto loc_82926F78;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82926f78
	if (ctx.cr6.eq) goto loc_82926F78;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75860
	ctx.lr = 0x82926E14;
	sub_82A75860(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82926f50
	if (!ctx.cr6.eq) goto loc_82926F50;
	// lbz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1080);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82926f0c
	if (ctx.cr6.eq) goto loc_82926F0C;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r30,r31,1081
	ctx.r30.s64 = ctx.r31.s64 + 1081;
	// addi r29,r11,26580
	ctx.r29.s64 = ctx.r11.s64 + 26580;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x829265a8
	ctx.lr = 0x82926E54;
	sub_829265A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82926ef0
	if (!ctx.cr6.eq) goto loc_82926EF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82926E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82926ed8
	if (ctx.cr6.eq) goto loc_82926ED8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82926EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,133
	ctx.r3.s64 = ctx.r1.s64 + 133;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82fa77c0
	ctx.lr = 0x82926EB0;
	sub_82FA77C0(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82926EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82fa77c0
	ctx.lr = 0x82926ED8;
	sub_82FA77C0(ctx, base);
loc_82926ED8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82926d30
	ctx.lr = 0x82926EE4;
	sub_82926D30(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,53
	ctx.r5.s64 = 53;
	// bl 0x82fa77c0
	ctx.lr = 0x82926EF0;
	sub_82FA77C0(ctx, base);
loc_82926EF0:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82926F00:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82926f00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82926F00;
	// stb r27,1080(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1080, ctx.r27.u8);
loc_82926F0C:
	// lbz r11,1089(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1089);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82926f34
	if (ctx.cr6.eq) goto loc_82926F34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82926F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stb r27,1089(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1089, ctx.r27.u8);
loc_82926F34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82926F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82926F50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a74d28
	ctx.lr = 0x82926F58;
	sub_82A74D28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82926F6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stb r27,1089(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1089, ctx.r27.u8);
loc_82926F78:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82926F80"))) PPC_WEAK_FUNC(sub_82926F80);
PPC_FUNC_IMPL(__imp__sub_82926F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82926F88;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,-10272
	ctx.r5.s64 = ctx.r11.s64 + -10272;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa25c0
	ctx.lr = 0x82926FA8;
	sub_82FA25C0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r30,r11,-28312
	ctx.r30.s64 = ctx.r11.s64 + -28312;
loc_82926FB8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbzx r6,r31,r29
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa25c0
	ctx.lr = 0x82926FCC;
	sub_82FA25C0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82926FD4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82926fd4
	if (!ctx.cr6.eq) goto loc_82926FD4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82926FE8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82926fe8
	if (!ctx.cr6.eq) goto loc_82926FE8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x82926fb8
	if (ctx.cr6.lt) goto loc_82926FB8;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r27,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r27.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r10,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r10.u32);
	// stb r27,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r27.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82927024:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82927024
	if (!ctx.cr6.eq) goto loc_82927024;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82240328
	ctx.lr = 0x8292704C;
	sub_82240328(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82927058"))) PPC_WEAK_FUNC(sub_82927058);
PPC_FUNC_IMPL(__imp__sub_82927058) {
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
	// bl 0x82d29fc0
	ctx.lr = 0x8292706C;
	sub_82D29FC0(ctx, base);
	// bl 0x82279d18
	ctx.lr = 0x82927070;
	sub_82279D18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82927080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// addi r31,r9,26596
	ctx.r31.s64 = ctx.r9.s64 + 26596;
	// stfs f1,26596(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 26596, temp.u32);
	// bl 0x82d27fa8
	ctx.lr = 0x82927090;
	sub_82D27FA8(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_829270AC"))) PPC_WEAK_FUNC(sub_829270AC);
PPC_FUNC_IMPL(__imp__sub_829270AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829270B0"))) PPC_WEAK_FUNC(sub_829270B0);
PPC_FUNC_IMPL(__imp__sub_829270B0) {
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
	// bl 0x82279d18
	ctx.lr = 0x829270C4;
	sub_82279D18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829270D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r11,26596
	ctx.r31.s64 = ctx.r11.s64 + 26596;
	// lfs f0,26596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26596);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f13,11556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11556);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82927104
	if (!ctx.cr6.gt) goto loc_82927104;
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82d27fa8
	ctx.lr = 0x829270FC;
	sub_82D27FA8(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_82927104:
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

__attribute__((alias("__imp__sub_82927118"))) PPC_WEAK_FUNC(sub_82927118);
PPC_FUNC_IMPL(__imp__sub_82927118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lbz r3,26600(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26600);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82927124"))) PPC_WEAK_FUNC(sub_82927124);
PPC_FUNC_IMPL(__imp__sub_82927124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82927128"))) PPC_WEAK_FUNC(sub_82927128);
PPC_FUNC_IMPL(__imp__sub_82927128) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,118
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 118, ctx.xer);
	// bne cr6,0x829271b8
	if (!ctx.cr6.eq) goto loc_829271B8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82927148:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82927148
	if (!ctx.cr6.eq) goto loc_82927148;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// ble cr6,0x829271b8
	if (!ctx.cr6.gt) goto loc_829271B8;
	// addi r31,r11,-3
	ctx.r31.s64 = ctx.r11.s64 + -3;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-27316
	ctx.r4.s64 = ctx.r11.s64 + -27316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa4320
	ctx.lr = 0x8292718C;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829271b0
	if (ctx.cr0.eq) goto loc_829271B0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-27320
	ctx.r4.s64 = ctx.r11.s64 + -27320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa4320
	ctx.lr = 0x829271A8;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x829271b8
	if (!ctx.cr0.eq) goto loc_829271B8;
loc_829271B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829271bc
	goto loc_829271BC;
loc_829271B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829271BC:
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

__attribute__((alias("__imp__sub_829271D0"))) PPC_WEAK_FUNC(sub_829271D0);
PPC_FUNC_IMPL(__imp__sub_829271D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x829271D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,118
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 118, ctx.xer);
	// bne cr6,0x82927274
	if (!ctx.cr6.eq) goto loc_82927274;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_829271F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x829271f4
	if (!ctx.cr6.eq) goto loc_829271F4;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// ble cr6,0x82927274
	if (!ctx.cr6.gt) goto loc_82927274;
	// addi r30,r11,-3
	ctx.r30.s64 = ctx.r11.s64 + -3;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-27316
	ctx.r4.s64 = ctx.r11.s64 + -27316;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa4320
	ctx.lr = 0x82927238;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8292724c
	if (!ctx.cr0.eq) goto loc_8292724C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28292
	ctx.r3.s64 = ctx.r11.s64 + -28292;
	// b 0x829272ac
	goto loc_829272AC;
loc_8292724C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-27320
	ctx.r4.s64 = ctx.r11.s64 + -27320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa4320
	ctx.lr = 0x82927260;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82927274
	if (!ctx.cr0.eq) goto loc_82927274;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-28304
	ctx.r3.s64 = ctx.r11.s64 + -28304;
	// b 0x829272ac
	goto loc_829272AC;
loc_82927274:
	// rlwinm. r11,r29,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829272a8
	if (!ctx.cr0.eq) goto loc_829272A8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,118
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 118, ctx.xer);
	// bne cr6,0x82927298
	if (!ctx.cr6.eq) goto loc_82927298;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r31,r11,8764
	ctx.r31.s64 = ctx.r11.s64 + 8764;
	// b 0x829272a8
	goto loc_829272A8;
loc_82927298:
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// bne cr6,0x829272a8
	if (!ctx.cr6.eq) goto loc_829272A8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r31,r11,8780
	ctx.r31.s64 = ctx.r11.s64 + 8780;
loc_829272A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_829272AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829272B4"))) PPC_WEAK_FUNC(sub_829272B4);
PPC_FUNC_IMPL(__imp__sub_829272B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829272B8"))) PPC_WEAK_FUNC(sub_829272B8);
PPC_FUNC_IMPL(__imp__sub_829272B8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x829272C0;
	__savegprlr_28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829272d4
	if (!ctx.cr6.eq) goto loc_829272D4;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x8292734c
	goto loc_8292734C;
loc_829272D4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,49
	ctx.r31.s64 = 49;
	// addi r29,r11,-27936
	ctx.r29.s64 = ctx.r11.s64 + -27936;
loc_829272E4:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mulli r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 * 12;
	// lwzx r11,r8,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// add r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 + ctx.r29.u64;
loc_829272FC:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// subf r6,r28,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r28.s64;
	// beq 0x82927320
	if (ctx.cr0.eq) goto loc_82927320;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x829272fc
	if (ctx.cr6.eq) goto loc_829272FC;
loc_82927320:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82927350
	if (ctx.cr0.eq) goto loc_82927350;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x82927338
	if (!ctx.cr6.lt) goto loc_82927338;
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
	// b 0x8292733c
	goto loc_8292733C;
loc_82927338:
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_8292733C:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x829272e4
	if (ctx.cr6.lt) goto loc_829272E4;
loc_82927344:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8292734C:
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82927350:
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82927344
	if (!ctx.cr6.eq) goto loc_82927344;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82927384
	if (ctx.cr6.eq) goto loc_82927384;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
loc_82927384:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8292734c
	goto loc_8292734C;
}

__attribute__((alias("__imp__sub_8292738C"))) PPC_WEAK_FUNC(sub_8292738C);
PPC_FUNC_IMPL(__imp__sub_8292738C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82927390"))) PPC_WEAK_FUNC(sub_82927390);
PPC_FUNC_IMPL(__imp__sub_82927390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r9,49
	ctx.r9.s64 = 49;
	// addi r10,r11,-27936
	ctx.r10.s64 = ctx.r11.s64 + -27936;
	// addi r11,r10,596
	ctx.r11.s64 = ctx.r10.s64 + 596;
loc_829273A0:
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x829273c4
	if (!ctx.cr6.eq) goto loc_829273C4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x829273dc
	if (ctx.cr6.eq) goto loc_829273DC;
loc_829273C4:
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x829273a0
	if (ctx.cr6.gt) goto loc_829273A0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_829273DC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82927404
	if (ctx.cr6.eq) goto loc_82927404;
	// mulli r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 * 12;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
loc_82927404:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292740C"))) PPC_WEAK_FUNC(sub_8292740C);
PPC_FUNC_IMPL(__imp__sub_8292740C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82927410"))) PPC_WEAK_FUNC(sub_82927410);
PPC_FUNC_IMPL(__imp__sub_82927410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82927418;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bne cr6,0x8292743c
	if (!ctx.cr6.eq) goto loc_8292743C;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,87
	ctx.r29.u64 = ctx.r29.u64 | 87;
	// b 0x82927470
	goto loc_82927470;
loc_8292743C:
	// addi r31,r4,-1
	ctx.r31.s64 = ctx.r4.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fad3e8
	ctx.lr = 0x8292744C;
	sub_82FAD3E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82927464
	if (ctx.cr0.lt) goto loc_82927464;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82927464
	if (ctx.cr6.gt) goto loc_82927464;
	// bne cr6,0x82927470
	if (!ctx.cr6.eq) goto loc_82927470;
	// b 0x8292746c
	goto loc_8292746C;
loc_82927464:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,122
	ctx.r29.u64 = ctx.r29.u64 | 122;
loc_8292746C:
	// stbx r28,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u8);
loc_82927470:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292747C"))) PPC_WEAK_FUNC(sub_8292747C);
PPC_FUNC_IMPL(__imp__sub_8292747C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82927480"))) PPC_WEAK_FUNC(sub_82927480);
PPC_FUNC_IMPL(__imp__sub_82927480) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x82691410
	sub_82691410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82927488"))) PPC_WEAK_FUNC(sub_82927488);
PPC_FUNC_IMPL(__imp__sub_82927488) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,32570
	ctx.r4.s64 = ctx.r10.s64 + 32570;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8292f6b0
	sub_8292F6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829274AC"))) PPC_WEAK_FUNC(sub_829274AC);
PPC_FUNC_IMPL(__imp__sub_829274AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829274B0"))) PPC_WEAK_FUNC(sub_829274B0);
PPC_FUNC_IMPL(__imp__sub_829274B0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29968
	ctx.r11.s64 = ctx.r11.s64 + -29968;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x829274dc
	if (ctx.cr0.eq) goto loc_829274DC;
	// bl 0x82691540
	ctx.lr = 0x829274DC;
	sub_82691540(ctx, base);
loc_829274DC:
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

__attribute__((alias("__imp__sub_829274F4"))) PPC_WEAK_FUNC(sub_829274F4);
PPC_FUNC_IMPL(__imp__sub_829274F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829274F8"))) PPC_WEAK_FUNC(sub_829274F8);
PPC_FUNC_IMPL(__imp__sub_829274F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82927500;
	__savegprlr_21(ctx, base);
	// stwu r1,-2688(r1)
	ea = -2688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x8292cbe0
	ctx.lr = 0x82927538;
	sub_8292CBE0(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82927544
	if (ctx.cr6.eq) goto loc_82927544;
	// stw r22,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r22.u32);
loc_82927544:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82927550
	if (ctx.cr6.eq) goto loc_82927550;
	// stw r22,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r22.u32);
loc_82927550:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82927570
	if (ctx.cr6.eq) goto loc_82927570;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82927570
	if (ctx.cr6.eq) goto loc_82927570;
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
	// b 0x829277ac
	goto loc_829277AC;
loc_82927570:
	// lis r12,-863
	ctx.r12.s64 = -56557568;
	// ori r12,r12,57792
	ctx.r12.u64 = ctx.r12.u64 | 57792;
	// and. r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8292758c
	if (ctx.cr0.eq) goto loc_8292758C;
loc_82927580:
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
	// b 0x82927790
	goto loc_82927790;
loc_8292758C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82927580
	if (ctx.cr6.eq) goto loc_82927580;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82927644
	if (ctx.cr6.eq) goto loc_82927644;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82927644
	if (ctx.cr0.eq) goto loc_82927644;
	// bl 0x82afda00
	ctx.lr = 0x829275B4;
	sub_82AFDA00(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r28.u32);
	// bne 0x829275cc
	if (!ctx.cr0.eq) goto loc_829275CC;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82927790
	goto loc_82927790;
loc_829275CC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-27300
	ctx.r4.s64 = ctx.r11.s64 + -27300;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82afaf28
	ctx.lr = 0x829275E0;
	sub_82AFAF28(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829275F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82927634
	if (ctx.cr0.eq) goto loc_82927634;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8292762c
	goto loc_8292762C;
loc_8292761C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82afe490
	ctx.lr = 0x82927628;
	sub_82AFE490(ctx, base);
	// lwzu r4,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
loc_8292762C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8292761c
	if (!ctx.cr6.eq) goto loc_8292761C;
loc_82927634:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82afda48
	ctx.lr = 0x82927644;
	sub_82AFDA48(ctx, base);
loc_82927644:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x829271d0
	ctx.lr = 0x82927650;
	sub_829271D0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// stw r26,2576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2576, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82927790
	if (ctx.cr0.lt) goto loc_82927790;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82927128
	ctx.lr = 0x82927680;
	sub_82927128(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// beq 0x82927698
	if (ctx.cr0.eq) goto loc_82927698;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-27332
	ctx.r4.s64 = ctx.r11.s64 + -27332;
	// b 0x829276a0
	goto loc_829276A0;
loc_82927698:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-27348
	ctx.r4.s64 = ctx.r11.s64 + -27348;
loc_829276A0:
	// bl 0x8292dee8
	ctx.lr = 0x829276A4;
	sub_8292DEE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8293a0f0
	ctx.lr = 0x829276B0;
	sub_8293A0F0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r9,r27,256
	ctx.r9.u64 = ctx.r27.u64 | 256;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8294fa20
	ctx.lr = 0x829276E0;
	sub_8294FA20(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bge 0x829276f4
	if (!ctx.cr0.lt) goto loc_829276F4;
	// bl 0x8293c048
	ctx.lr = 0x829276F0;
	sub_8293C048(ctx, base);
	// b 0x82927790
	goto loc_82927790;
loc_829276F4:
	// bl 0x8293c048
	ctx.lr = 0x829276F8;
	sub_8293C048(ctx, base);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82e87788
	ctx.lr = 0x82927700;
	sub_82E87788(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82927714
	if (ctx.cr0.eq) goto loc_82927714;
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2905
	ctx.r31.u64 = ctx.r31.u64 | 2905;
	// b 0x82927790
	goto loc_82927790;
loc_82927714:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82927768
	if (ctx.cr6.eq) goto loc_82927768;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82afe610
	ctx.lr = 0x82927724;
	sub_82AFE610(ctx, base);
	// addi r29,r26,12
	ctx.r29.s64 = ctx.r26.s64 + 12;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x829315e0
	ctx.lr = 0x82927734;
	sub_829315E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82927768
	if (ctx.cr0.lt) goto loc_82927768;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82afe618
	ctx.lr = 0x82927764;
	sub_82AFE618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82927768:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8292777c
	if (ctx.cr6.eq) goto loc_8292777C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_8292777C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82927790
	if (ctx.cr6.eq) goto loc_82927790;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_82927790:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x829277ac
	if (ctx.cr6.eq) goto loc_829277AC;
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829277ac
	if (ctx.cr6.eq) goto loc_829277AC;
	// bl 0x82f259b0
	ctx.lr = 0x829277A8;
	sub_82F259B0(ctx, base);
	// stw r22,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r22.u32);
loc_829277AC:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x829277c0
	if (ctx.cr6.eq) goto loc_829277C0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82931768
	ctx.lr = 0x829277C0;
	sub_82931768(ctx, base);
loc_829277C0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829277e0
	if (ctx.cr6.eq) goto loc_829277E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829277DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
loc_829277E0:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82927800
	if (ctx.cr6.eq) goto loc_82927800;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829277FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
loc_82927800:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8292e570
	ctx.lr = 0x82927808;
	sub_8292E570(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2688
	ctx.r1.s64 = ctx.r1.s64 + 2688;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82927814"))) PPC_WEAK_FUNC(sub_82927814);
PPC_FUNC_IMPL(__imp__sub_82927814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82927818"))) PPC_WEAK_FUNC(sub_82927818);
PPC_FUNC_IMPL(__imp__sub_82927818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82927820;
	__savegprlr_18(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31964
	ctx.r30.s64 = -2094792704;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lbz r11,26602(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 26602);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lis r29,-31964
	ctx.r29.s64 = -2094792704;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82927888
	if (!ctx.cr0.eq) goto loc_82927888;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27064
	ctx.r3.s64 = ctx.r11.s64 + -27064;
	// bl 0x82a78410
	ctx.lr = 0x82927864;
	sub_82A78410(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82927880
	if (ctx.cr6.eq) goto loc_82927880;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stb r11,26601(r29)
	PPC_STORE_U8(ctx.r29.u32 + 26601, ctx.r11.u8);
	// addi r3,r10,-27152
	ctx.r3.s64 = ctx.r10.s64 + -27152;
	// bl 0x82a78350
	ctx.lr = 0x82927880;
	sub_82A78350(ctx, base);
loc_82927880:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,26602(r30)
	PPC_STORE_U8(ctx.r30.u32 + 26602, ctx.r11.u8);
loc_82927888:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829274f8
	ctx.lr = 0x829278AC;
	sub_829274F8(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// blt 0x82927cd0
	if (ctx.cr0.lt) goto loc_82927CD0;
	// lbz r11,26601(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 26601);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82927cd0
	if (ctx.cr0.eq) goto loc_82927CD0;
	// rlwinm. r11,r31,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82927cd0
	if (!ctx.cr0.eq) goto loc_82927CD0;
	// rlwinm. r11,r31,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82927cd0
	if (!ctx.cr0.eq) goto loc_82927CD0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82927cd0
	if (ctx.cr6.eq) goto loc_82927CD0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82927cd0
	if (ctx.cr6.eq) goto loc_82927CD0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// oris r6,r31,16
	ctx.r6.u64 = ctx.r31.u64 | 1048576;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// oris r26,r31,512
	ctx.r26.u64 = ctx.r31.u64 | 33554432;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,118
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 118, ctx.xer);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// bne cr6,0x8292791c
	if (!ctx.cr6.eq) goto loc_8292791C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,8764
	ctx.r11.s64 = ctx.r11.s64 + 8764;
	// b 0x82927924
	goto loc_82927924;
loc_8292791C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,8780
	ctx.r11.s64 = ctx.r11.s64 + 8780;
loc_82927924:
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829274f8
	ctx.lr = 0x82927948;
	sub_829274F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82927964
	if (!ctx.cr0.lt) goto loc_82927964;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82927954:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82927cd0
	if (ctx.cr6.eq) goto loc_82927CD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82927cc4
	goto loc_82927CC4;
loc_82927964:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x829315e0
	ctx.lr = 0x82927970;
	sub_829315E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x829279bc
	if (!ctx.cr0.lt) goto loc_829279BC;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82927998
	if (ctx.cr6.eq) goto loc_82927998;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
loc_82927998:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829279b4
	if (ctx.cr6.eq) goto loc_829279B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829279B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829279B4:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x82927954
	goto loc_82927954;
loc_829279BC:
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829279D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829279F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x829279FC;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82927a0c
	if (ctx.cr6.eq) goto loc_82927A0C;
	// lwz r30,16(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// b 0x82927a10
	goto loc_82927A10;
loc_82927A0C:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82927A10:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,124(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,9280
	ctx.r10.s64 = ctx.r11.s64 + 9280;
	// bl 0x82b02908
	ctx.lr = 0x82927AA8;
	sub_82B02908(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82927b08
	if (!ctx.cr0.lt) goto loc_82927B08;
loc_82927AB0:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82927ad0
	if (ctx.cr6.eq) goto loc_82927AD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
loc_82927AD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82927b00
	if (ctx.cr6.eq) goto loc_82927B00;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82927B00:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x82927954
	goto loc_82927954;
loc_82927B08:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,118
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 118, ctx.xer);
	// bne cr6,0x82927b34
	if (!ctx.cr6.eq) goto loc_82927B34;
	// bl 0x82c463a0
	ctx.lr = 0x82927B30;
	sub_82C463A0(ctx, base);
	// b 0x82927b38
	goto loc_82927B38;
loc_82927B34:
	// bl 0x82c463a0
	ctx.lr = 0x82927B38;
	sub_82C463A0(ctx, base);
loc_82927B38:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82927c68
	if (!ctx.cr6.eq) goto loc_82927C68;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-27288
	ctx.r3.s64 = ctx.r11.s64 + -27288;
	// bl 0x82a78350
	ctx.lr = 0x82927B4C;
	sub_82A78350(ctx, base);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x829315e0
	ctx.lr = 0x82927B5C;
	sub_829315E0(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// blt 0x82927ab0
	if (ctx.cr0.lt) goto loc_82927AB0;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82927BA4;
	sub_82FA77C0(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82927bc0
	if (ctx.cr6.eq) goto loc_82927BC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927BC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82927BC0:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82927c14
	if (ctx.cr6.eq) goto loc_82927C14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82927C14:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82927c38
	if (ctx.cr6.eq) goto loc_82927C38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82927C38:
	// stw r28,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82927cd0
	if (ctx.cr6.eq) goto loc_82927CD0;
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82927cd0
	if (ctx.cr6.eq) goto loc_82927CD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r29.u32);
	// b 0x82927cd0
	goto loc_82927CD0;
loc_82927C68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82927c98
	if (ctx.cr6.eq) goto loc_82927C98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82927C98:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82927cb4
	if (ctx.cr6.eq) goto loc_82927CB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82927CB4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82927cd0
	if (ctx.cr6.eq) goto loc_82927CD0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82927CC4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82927CD0:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82927CDC"))) PPC_WEAK_FUNC(sub_82927CDC);
PPC_FUNC_IMPL(__imp__sub_82927CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82927CE0"))) PPC_WEAK_FUNC(sub_82927CE0);
PPC_FUNC_IMPL(__imp__sub_82927CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82927CE8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82927818
	ctx.lr = 0x82927D10;
	sub_82927818(ctx, base);
	// lis r11,-30602
	ctx.r11.s64 = -2005532672;
	// ori r11,r11,2924
	ctx.r11.u64 = ctx.r11.u64 | 2924;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82927d4c
	if (!ctx.cr6.eq) goto loc_82927D4C;
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82927d4c
	if (!ctx.cr0.eq) goto loc_82927D4C;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// ori r6,r31,4
	ctx.r6.u64 = ctx.r31.u64 | 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82927818
	ctx.lr = 0x82927D4C;
	sub_82927818(ctx, base);
loc_82927D4C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82927D54"))) PPC_WEAK_FUNC(sub_82927D54);
PPC_FUNC_IMPL(__imp__sub_82927D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82927D58"))) PPC_WEAK_FUNC(sub_82927D58);
PPC_FUNC_IMPL(__imp__sub_82927D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82927D60;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bne cr6,0x82927dac
	if (!ctx.cr6.eq) goto loc_82927DAC;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82927D9C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82927d9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82927D9C;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_82927DAC:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82927dd8
	if (ctx.cr6.eq) goto loc_82927DD8;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,118
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 118, ctx.xer);
	// beq cr6,0x82927dd8
	if (ctx.cr6.eq) goto loc_82927DD8;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// beq cr6,0x82927dd8
	if (ctx.cr6.eq) goto loc_82927DD8;
	// li r9,1
	ctx.r9.s64 = 1;
	// oris r6,r6,16
	ctx.r6.u64 = ctx.r6.u64 | 1048576;
loc_82927DD8:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82927ec0
	if (!ctx.cr0.eq) goto loc_82927EC0;
	// rlwinm. r11,r6,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82927ec0
	if (!ctx.cr0.eq) goto loc_82927EC0;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x82927ce0
	ctx.lr = 0x82927DFC;
	sub_82927CE0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82927e38
	if (ctx.cr0.lt) goto loc_82927E38;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82927e1c
	if (ctx.cr6.eq) goto loc_82927E1C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82927e20
	goto loc_82927E20;
loc_82927E1C:
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82927E20:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82927e3c
	if (ctx.cr6.eq) goto loc_82927E3C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82927e40
	goto loc_82927E40;
loc_82927E38:
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82927E3C:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82927E40:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82927e5c
	if (ctx.cr6.eq) goto loc_82927E5C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82927e60
	goto loc_82927E60;
loc_82927E5C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82927E60:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82927e7c
	if (ctx.cr6.eq) goto loc_82927E7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82927E7C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82927e9c
	if (ctx.cr6.eq) goto loc_82927E9C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82927E9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82927eb8
	if (ctx.cr6.eq) goto loc_82927EB8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82927EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82927EB8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82927ed4
	goto loc_82927ED4;
loc_82927EC0:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x82927ce0
	ctx.lr = 0x82927ED4;
	sub_82927CE0(ctx, base);
loc_82927ED4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82927EDC"))) PPC_WEAK_FUNC(sub_82927EDC);
PPC_FUNC_IMPL(__imp__sub_82927EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82927EE0"))) PPC_WEAK_FUNC(sub_82927EE0);
PPC_FUNC_IMPL(__imp__sub_82927EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82927EE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82927f04
	if (ctx.cr6.eq) goto loc_82927F04;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
loc_82927F04:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82927f18
	if (!ctx.cr6.eq) goto loc_82927F18;
loc_82927F0C:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82927fc0
	goto loc_82927FC0;
loc_82927F18:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82927f0c
	if (ctx.cr6.eq) goto loc_82927F0C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,4138
	ctx.r10.s64 = 271187968;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82927f54
	if (ctx.cr6.eq) goto loc_82927F54;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82927f54
	if (ctx.cr6.eq) goto loc_82927F54;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82927fb8
	if (!ctx.cr6.eq) goto loc_82927FB8;
loc_82927F54:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82691410
	ctx.lr = 0x82927F60;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82927f70
	if (ctx.cr0.eq) goto loc_82927F70;
	// bl 0x82954060
	ctx.lr = 0x82927F6C;
	sub_82954060(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82927F70:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82927f84
	if (!ctx.cr6.eq) goto loc_82927F84;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82927fc0
	goto loc_82927FC0;
loc_82927F84:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82954580
	ctx.lr = 0x82927F94;
	sub_82954580(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82927fb8
	if (!ctx.cr0.lt) goto loc_82927FB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82953240
	ctx.lr = 0x82927FA4;
	sub_82953240(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x82927FB0;
	sub_82691460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82927fc0
	goto loc_82927FC0;
loc_82927FB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82927FC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82927FC8"))) PPC_WEAK_FUNC(sub_82927FC8);
PPC_FUNC_IMPL(__imp__sub_82927FC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82927ee0
	sub_82927EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82927FCC"))) PPC_WEAK_FUNC(sub_82927FCC);
PPC_FUNC_IMPL(__imp__sub_82927FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82927FD0"))) PPC_WEAK_FUNC(sub_82927FD0);
PPC_FUNC_IMPL(__imp__sub_82927FD0) {
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
	// lis r31,-32253
	ctx.r31.s64 = -2113732608;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r4,r31,-27312
	ctx.r4.s64 = ctx.r31.s64 + -27312;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r9,220(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82927d58
	ctx.lr = 0x82928024;
	sub_82927D58(ctx, base);
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

__attribute__((alias("__imp__sub_82928038"))) PPC_WEAK_FUNC(sub_82928038);
PPC_FUNC_IMPL(__imp__sub_82928038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// addi r10,r11,-27024
	ctx.r10.s64 = ctx.r11.s64 + -27024;
	// addi r8,r10,40
	ctx.r8.s64 = ctx.r10.s64 + 40;
	// addi r11,r10,40
	ctx.r11.s64 = ctx.r10.s64 + 40;
	// lwz r9,-21124(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21124);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82928070
	if (!ctx.cr6.lt) goto loc_82928070;
loc_82928058:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82928078
	if (ctx.cr6.eq) goto loc_82928078;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82928058
	if (ctx.cr6.lt) goto loc_82928058;
loc_82928070:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_82928078:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82928080"))) PPC_WEAK_FUNC(sub_82928080);
PPC_FUNC_IMPL(__imp__sub_82928080) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r3,-13873
	ctx.r11.s64 = ctx.r3.s64 + -909180928;
	// addic. r11,r11,-19521
	ctx.xer.ca = ctx.r11.u32 > 19520;
	ctx.r11.s64 = ctx.r11.s64 + -19521;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829280a0
	if (ctx.cr0.eq) goto loc_829280A0;
	// cmplwi cr6,r11,1503
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1503, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r3,10280
	ctx.r3.s64 = 673710080;
	// ori r3,r3,134
	ctx.r3.u64 = ctx.r3.u64 | 134;
	// blr 
	return;
loc_829280A0:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,74
	ctx.r3.u64 = ctx.r3.u64 | 74;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829280AC"))) PPC_WEAK_FUNC(sub_829280AC);
PPC_FUNC_IMPL(__imp__sub_829280AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829280B0"))) PPC_WEAK_FUNC(sub_829280B0);
PPC_FUNC_IMPL(__imp__sub_829280B0) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x828b2440
	ctx.lr = 0x829280CC;
	sub_828B2440(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x829280dc
	if (!ctx.cr6.eq) goto loc_829280DC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x829280f8
	goto loc_829280F8;
loc_829280DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,26,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r10,-449
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -449, ctx.xer);
	// bne cr6,0x829280f4
	if (!ctx.cr6.eq) goto loc_829280F4;
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
loc_829280F4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_829280F8:
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

__attribute__((alias("__imp__sub_8292810C"))) PPC_WEAK_FUNC(sub_8292810C);
PPC_FUNC_IMPL(__imp__sub_8292810C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82928110"))) PPC_WEAK_FUNC(sub_82928110);
PPC_FUNC_IMPL(__imp__sub_82928110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82928118;
	__savegprlr_14(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r5,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r5.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stw r9,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r9.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x82958960
	ctx.lr = 0x82928148;
	sub_82958960(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82c8af70
	ctx.lr = 0x82928150;
	sub_82C8AF70(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// mr r15,r29
	ctx.r15.u64 = ctx.r29.u64;
	// mr r14,r29
	ctx.r14.u64 = ctx.r29.u64;
	// bne cr6,0x829281b4
	if (!ctx.cr6.eq) goto loc_829281B4;
loc_82928194:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8295c078
	ctx.lr = 0x8292819C;
	sub_8295C078(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82958f80
	ctx.lr = 0x829281A4;
	sub_82958F80(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_829281AC:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_829281B4:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82928194
	if (ctx.cr6.eq) goto loc_82928194;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x829281e4
	if (!ctx.cr6.eq) goto loc_829281E4;
loc_829281C4:
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_829281CC:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8295c078
	ctx.lr = 0x829281D4;
	sub_8295C078(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82958f80
	ctx.lr = 0x829281DC;
	sub_82958F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x829281ac
	goto loc_829281AC;
loc_829281E4:
	// lwz r11,876(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x829281fc
	if (!ctx.cr6.eq) goto loc_829281FC;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r11.u32);
loc_829281FC:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8295c080
	ctx.lr = 0x8292821C;
	sub_8295C080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8292822c
	if (!ctx.cr0.lt) goto loc_8292822C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829281cc
	goto loc_829281CC;
loc_8292822C:
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82af2cc8
	ctx.lr = 0x8292823C;
	sub_82AF2CC8(ctx, base);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r10,852(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// li r18,1
	ctx.r18.s64 = 1;
	// clrlwi r31,r11,31
	ctx.r31.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// rlwinm r25,r19,24,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 24) & 0x1;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// beq cr6,0x82928284
	if (ctx.cr6.eq) goto loc_82928284;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x8292827c
	if (!ctx.cr6.gt) goto loc_8292827C;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x82928284
	if (ctx.cr6.gt) goto loc_82928284;
loc_8292827C:
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// b 0x82928288
	goto loc_82928288;
loc_82928284:
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
loc_82928288:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82928404
	if (ctx.cr6.eq) goto loc_82928404;
	// clrlwi r27,r19,26
	ctx.r27.u64 = ctx.r19.u32 & 0x3F;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82af34b8
	ctx.lr = 0x829282A4;
	sub_82AF34B8(ctx, base);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x829282bc
	if (!ctx.cr6.eq) goto loc_829282BC;
	// lwz r27,8(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r30,12(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// b 0x829283e4
	goto loc_829283E4;
loc_829282BC:
	// lwz r30,860(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x829281c4
	if (ctx.cr6.lt) goto loc_829281C4;
	// cmplwi cr6,r30,8192
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8192, ctx.xer);
	// bgt cr6,0x829281c4
	if (ctx.cr6.gt) goto loc_829281C4;
	// lwz r31,868(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x829281c4
	if (ctx.cr6.lt) goto loc_829281C4;
	// cmplwi cr6,r31,8192
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8192, ctx.xer);
	// bgt cr6,0x829281c4
	if (ctx.cr6.gt) goto loc_829281C4;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x829282f8
	if (!ctx.cr6.gt) goto loc_829282F8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_829282F8:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bgt cr6,0x82928308
	if (ctx.cr6.gt) goto loc_82928308;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82928308:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// b 0x82928318
	goto loc_82928318;
loc_82928310:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82928318:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82928310
	if (ctx.cr6.gt) goto loc_82928310;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af2fd8
	ctx.lr = 0x82928330;
	sub_82AF2FD8(ctx, base);
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// subfic r11,r3,32
	ctx.xer.ca = ctx.r3.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r3.s64;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r31,-1
	ctx.r7.s64 = ctx.r31.s64 + -1;
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// subf r7,r7,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	// xoris r5,r29,32768
	ctx.r5.u64 = ctx.r29.u64 ^ 2147483648;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addc r10,r10,r5
	ctx.xer.ca = (ctx.r10.u32 + ctx.r5.u32 < ctx.r10.u32);
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// xoris r5,r29,32768
	ctx.r5.u64 = ctx.r29.u64 ^ 2147483648;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addc r11,r11,r5
	ctx.xer.ca = (ctx.r11.u32 + ctx.r5.u32 < ctx.r11.u32);
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// and r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 & ctx.r6.u64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// and r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 & ctx.r7.u64;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// slw r9,r18,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r6.u8 & 0x3F));
	// slw r8,r18,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r7.u8 & 0x3F));
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r22,r9,-1
	ctx.r22.s64 = ctx.r9.s64 + -1;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// andc r27,r22,r11
	ctx.r27.u64 = ctx.r22.u64 & ~ctx.r11.u64;
	// lwz r22,128(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// andc r30,r22,r10
	ctx.r30.u64 = ctx.r22.u64 & ~ctx.r10.u64;
	// bl 0x82af3490
	ctx.lr = 0x829283DC;
	sub_82AF3490(ctx, base);
	// lwz r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_829283E4:
	// addi r11,r30,31
	ctx.r11.s64 = ctx.r30.s64 + 31;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r22,r11,0,0,19
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_82928404:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x829284dc
	if (ctx.cr6.eq) goto loc_829284DC;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82928428
	if (!ctx.cr6.eq) goto loc_82928428;
	// lwz r15,308(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r14,312(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// b 0x8292847c
	goto loc_8292847C;
loc_82928428:
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82af2cc8
	ctx.lr = 0x82928438;
	sub_82AF2CC8(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// bl 0x82af2cd0
	ctx.lr = 0x82928444;
	sub_82AF2CD0(ctx, base);
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r10,28(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r5,492(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// clrlwi r7,r11,26
	ctx.r7.u64 = ctx.r11.u32 & 0x3F;
	// lwz r4,488(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// rlwinm r6,r10,4,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// lwz r3,484(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r15,548(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r14,552(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// bl 0x82af3490
	ctx.lr = 0x82928474;
	sub_82AF3490(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// rotlwi r26,r3,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
loc_8292847C:
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82af34b8
	ctx.lr = 0x82928490;
	sub_82AF34B8(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r15,r9
	ctx.r11.u64 = ctx.r15.u64 + ctx.r9.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// add r11,r14,r10
	ctx.r11.u64 = ctx.r14.u64 + ctx.r10.u64;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// lwz r8,332(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stw r10,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r10.u32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r24,r11,0,0,19
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x829284e0
	goto loc_829284E0;
loc_829284DC:
	// lwz r26,108(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_829284E0:
	// add. r3,r24,r22
	ctx.r3.u64 = ctx.r24.u64 + ctx.r22.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82928504
	if (ctx.cr0.eq) goto loc_82928504;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82691410
	ctx.lr = 0x829284F0;
	sub_82691410(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne 0x82928504
	if (!ctx.cr0.eq) goto loc_82928504;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x829281cc
	goto loc_829281CC;
loc_82928504:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x829285d4
	if (ctx.cr6.eq) goto loc_829285D4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82928528
	if (ctx.cr6.eq) goto loc_82928528;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x82928540
	goto loc_82928540;
loc_82928528:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// divwu r4,r10,r11
	ctx.r4.u32 = ctx.r10.u32 / ctx.r11.u32;
	// divwu r5,r9,r8
	ctx.r5.u32 = ctx.r9.u32 / ctx.r8.u32;
loc_82928540:
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// add r10,r30,r8
	ctx.r10.u64 = ctx.r30.u64 + ctx.r8.u64;
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// divwu r7,r10,r8
	ctx.r7.u32 = ctx.r10.u32 / ctx.r8.u32;
	// divwu r6,r9,r11
	ctx.r6.u32 = ctx.r9.u32 / ctx.r11.u32;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// bl 0x82a83f38
	ctx.lr = 0x82928570;
	sub_82A83F38(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r7,r19,26
	ctx.r7.u64 = ctx.r19.u32 & 0x3F;
	// addi r27,r10,-25800
	ctx.r27.s64 = ctx.r10.s64 + -25800;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// divwu r8,r10,r11
	ctx.r8.u32 = ctx.r10.u32 / ctx.r11.u32;
	// subf r6,r28,r16
	ctx.r6.s64 = ctx.r16.s64 - ctx.r28.s64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lbzx r10,r7,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// divwu r7,r21,r11
	ctx.r7.u32 = ctx.r21.u32 / ctx.r11.u32;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// bl 0x82af52e0
	ctx.lr = 0x829285C8;
	sub_82AF52E0(ctx, base);
	// add r11,r28,r20
	ctx.r11.u64 = ctx.r28.u64 + ctx.r20.u64;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// b 0x829285d8
	goto loc_829285D8;
loc_829285D4:
	// stw r16,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r16.u32);
loc_829285D8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82928650
	if (ctx.cr6.eq) goto loc_82928650;
	// add r11,r26,r22
	ctx.r11.u64 = ctx.r26.u64 + ctx.r22.u64;
	// lwz r10,384(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r30,r26,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r26.s64;
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// beq cr6,0x82928654
	if (ctx.cr6.eq) goto loc_82928654;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// divwu r8,r14,r10
	ctx.r8.u32 = ctx.r14.u32 / ctx.r10.u32;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// divwu r7,r15,r11
	ctx.r7.u32 = ctx.r15.u32 / ctx.r11.u32;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// add r3,r22,r20
	ctx.r3.u64 = ctx.r22.u64 + ctx.r20.u64;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// lwz r10,348(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r4,392(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// bl 0x82af52e0
	ctx.lr = 0x8292864C;
	sub_82AF52E0(ctx, base);
	// b 0x82928654
	goto loc_82928654;
loc_82928650:
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82928654:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r8,r19,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r7,8(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// lwz r6,12(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r8,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r21,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r21.u32);
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stw r18,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r18.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x829286A0;
	sub_82FA77C0(ctx, base);
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r10,456(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r9,884(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r8,836(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// stw r11,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r11.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r6,876(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// stw r10,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// stw r9,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r9.u32);
	// stw r8,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r8.u32);
	// bl 0x8295bc70
	ctx.lr = 0x829286D8;
	sub_8295BC70(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829287d0
	if (ctx.cr6.eq) goto loc_829287D0;
	// lwz r8,804(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8292874c
	if (ctx.cr6.eq) goto loc_8292874C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8292874c
	if (!ctx.cr6.eq) goto loc_8292874C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// divwu r4,r9,r11
	ctx.r4.u32 = ctx.r9.u32 / ctx.r11.u32;
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// divwu r5,r7,r10
	ctx.r5.u32 = ctx.r7.u32 / ctx.r10.u32;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// divwu r7,r8,r10
	ctx.r7.u32 = ctx.r8.u32 / ctx.r10.u32;
	// divwu r6,r9,r11
	ctx.r6.u32 = ctx.r9.u32 / ctx.r11.u32;
	// b 0x8292877c
	goto loc_8292877C;
loc_8292874C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r8,r14,r11
	ctx.r8.u64 = ctx.r14.u64 + ctx.r11.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// add r9,r15,r10
	ctx.r9.u64 = ctx.r15.u64 + ctx.r10.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// divwu r7,r8,r11
	ctx.r7.u32 = ctx.r8.u32 / ctx.r11.u32;
	// divwu r6,r9,r10
	ctx.r6.u32 = ctx.r9.u32 / ctx.r10.u32;
loc_8292877C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// bl 0x82a83f38
	ctx.lr = 0x8292878C;
	sub_82A83F38(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// add r7,r14,r11
	ctx.r7.u64 = ctx.r14.u64 + ctx.r11.u64;
	// lwz r10,348(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// add r9,r15,r4
	ctx.r9.u64 = ctx.r15.u64 + ctx.r4.u64;
	// lwz r8,392(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// addi r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// addi r30,r9,-1
	ctx.r30.s64 = ctx.r9.s64 + -1;
	// twllei r4,0
	if (ctx.r4.u32 <= 0) __builtin_debugtrap();
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// add r7,r22,r20
	ctx.r7.u64 = ctx.r22.u64 + ctx.r20.u64;
	// divwu r5,r5,r11
	ctx.r5.u32 = ctx.r5.u32 / ctx.r11.u32;
	// divwu r4,r30,r4
	ctx.r4.u32 = ctx.r30.u32 / ctx.r4.u32;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// bl 0x82af5080
	ctx.lr = 0x829287D0;
	sub_82AF5080(ctx, base);
loc_829287D0:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x829281cc
	if (ctx.cr6.eq) goto loc_829281CC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82691460
	ctx.lr = 0x829287E4;
	sub_82691460(ctx, base);
	// b 0x829281cc
	goto loc_829281CC;
}

__attribute__((alias("__imp__sub_829287E8"))) PPC_WEAK_FUNC(sub_829287E8);
PPC_FUNC_IMPL(__imp__sub_829287E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x829287F0;
	__savegprlr_14(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r10,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r10.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// bl 0x82958960
	ctx.lr = 0x8292881C;
	sub_82958960(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8295be18
	ctx.lr = 0x82928824;
	sub_8295BE18(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// mr r19,r30
	ctx.r19.u64 = ctx.r30.u64;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// bne cr6,0x82928890
	if (!ctx.cr6.eq) goto loc_82928890;
loc_82928870:
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8295c5a0
	ctx.lr = 0x82928878;
	sub_8295C5A0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82958f80
	ctx.lr = 0x82928880;
	sub_82958F80(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82928888:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82928890:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82928870
	if (ctx.cr6.eq) goto loc_82928870;
	// lwz r14,852(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// bne cr6,0x829288c4
	if (!ctx.cr6.eq) goto loc_829288C4;
loc_829288A4:
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_829288AC:
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8295c5a0
	ctx.lr = 0x829288B4;
	sub_8295C5A0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82958f80
	ctx.lr = 0x829288BC;
	sub_82958F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82928888
	goto loc_82928888;
loc_829288C4:
	// lwz r11,892(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x829288dc
	if (!ctx.cr6.eq) goto loc_829288DC;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 892, ctx.r11.u32);
loc_829288DC:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8295c5a8
	ctx.lr = 0x829288FC;
	sub_8295C5A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8292890c
	if (!ctx.cr0.lt) goto loc_8292890C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829288ac
	goto loc_829288AC;
loc_8292890C:
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82af2cc8
	ctx.lr = 0x8292891C;
	sub_82AF2CC8(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,860(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// li r28,1
	ctx.r28.s64 = 1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// rlwinm r22,r17,24,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 24) & 0x1;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// beq cr6,0x82928964
	if (ctx.cr6.eq) goto loc_82928964;
	// lwz r11,8(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// ble cr6,0x8292895c
	if (!ctx.cr6.gt) goto loc_8292895C;
	// lwz r11,12(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x82928964
	if (ctx.cr6.gt) goto loc_82928964;
loc_8292895C:
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// b 0x82928968
	goto loc_82928968;
loc_82928964:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
loc_82928968:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82928b40
	if (ctx.cr6.eq) goto loc_82928B40;
	// clrlwi r25,r17,26
	ctx.r25.u64 = ctx.r17.u32 & 0x3F;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82af34b8
	ctx.lr = 0x82928984;
	sub_82AF34B8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829289b0
	if (!ctx.cr6.eq) goto loc_829289B0;
	// lwz r11,20(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lwz r26,8(r14)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwz r29,12(r14)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r11,r31,r20
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r20.s32);
	// b 0x82928b38
	goto loc_82928B38;
loc_829289B0:
	// lwz r29,868(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x829288a4
	if (ctx.cr6.lt) goto loc_829288A4;
	// cmplwi cr6,r29,8192
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8192, ctx.xer);
	// bgt cr6,0x829288a4
	if (ctx.cr6.gt) goto loc_829288A4;
	// lwz r31,876(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x829288a4
	if (ctx.cr6.lt) goto loc_829288A4;
	// cmplwi cr6,r31,8192
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8192, ctx.xer);
	// bgt cr6,0x829288a4
	if (ctx.cr6.gt) goto loc_829288A4;
	// lwz r26,884(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x829288a4
	if (ctx.cr6.lt) goto loc_829288A4;
	// cmplwi cr6,r26,1024
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1024, ctx.xer);
	// bgt cr6,0x829288a4
	if (ctx.cr6.gt) goto loc_829288A4;
	// lwz r11,8(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// lwz r10,12(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82928a00
	if (!ctx.cr6.gt) goto loc_82928A00;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82928A00:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bgt cr6,0x82928a10
	if (ctx.cr6.gt) goto loc_82928A10;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82928A10:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// b 0x82928a20
	goto loc_82928A20;
loc_82928A18:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82928A20:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82928a18
	if (ctx.cr6.gt) goto loc_82928A18;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82af2fd8
	ctx.lr = 0x82928A38;
	sub_82AF2FD8(ctx, base);
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// subfic r11,r3,32
	ctx.xer.ca = ctx.r3.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r3.s64;
	// lwz r9,188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r7,r31,-1
	ctx.r7.s64 = ctx.r31.s64 + -1;
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// addi r5,r26,-1
	ctx.r5.s64 = ctx.r26.s64 + -1;
	// subf r3,r30,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r30.s64;
	// xoris r4,r30,32768
	ctx.r4.u64 = ctx.r30.u64 ^ 2147483648;
	// subf r7,r7,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r7.s64;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addc r4,r3,r4
	ctx.xer.ca = (ctx.r3.u32 + ctx.r4.u32 < ctx.r3.u32);
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// subf r5,r5,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r5.s64;
	// xoris r3,r30,32768
	ctx.r3.u64 = ctx.r30.u64 ^ 2147483648;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subfe r4,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addc r10,r10,r3
	ctx.xer.ca = (ctx.r10.u32 + ctx.r3.u32 < ctx.r10.u32);
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// xoris r3,r30,32768
	ctx.r3.u64 = ctx.r30.u64 ^ 2147483648;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addc r11,r11,r3
	ctx.xer.ca = (ctx.r11.u32 + ctx.r3.u32 < ctx.r11.u32);
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// and r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 & ctx.r6.u64;
	// and r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 & ctx.r7.u64;
	// subfe r4,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// slw r9,r28,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r6.u8 & 0x3F));
	// slw r8,r28,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r7.u8 & 0x3F));
	// and r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 & ctx.r5.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// slw r7,r28,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r7.u8 & 0x3F));
	// addi r28,r9,-1
	ctx.r28.s64 = ctx.r9.s64 + -1;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r7,3
	ctx.r8.s64 = ctx.r7.s64 + 3;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// andc r26,r28,r11
	ctx.r26.u64 = ctx.r28.u64 & ~ctx.r11.u64;
	// lwz r28,196(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// andc r29,r28,r10
	ctx.r29.u64 = ctx.r28.u64 & ~ctx.r10.u64;
	// lwz r28,192(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// rlwinm r31,r28,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x82af3490
	ctx.lr = 0x82928B18;
	sub_82AF3490(ctx, base);
	// addi r11,r29,31
	ctx.r11.s64 = ctx.r29.s64 + 31;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// mullw r11,r11,r24
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
loc_82928B38:
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r25,r11,0,0,19
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_82928B40:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82928c38
	if (ctx.cr6.eq) goto loc_82928C38;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82928b6c
	if (!ctx.cr6.eq) goto loc_82928B6C;
	// lwz r28,228(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r23,232(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r18,236(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// b 0x82928bd0
	goto loc_82928BD0;
loc_82928B6C:
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// lwz r3,24(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82af2cc8
	ctx.lr = 0x82928B7C;
	sub_82AF2CC8(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// lwz r3,24(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// bl 0x82af2cd0
	ctx.lr = 0x82928B88;
	sub_82AF2CD0(ctx, base);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r10,552(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,240(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r6,28(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// clrlwi r7,r7,26
	ctx.r7.u64 = ctx.r7.u32 & 0x3F;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r6,r6,4,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xF;
	// lwz r5,492(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r4,488(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// lwz r3,484(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// lwz r18,556(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// bl 0x82af3490
	ctx.lr = 0x82928BC4;
	sub_82AF3490(ctx, base);
	// lwz r28,176(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r23,172(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
loc_82928BD0:
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82af34b8
	ctx.lr = 0x82928BE4;
	sub_82AF34B8(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r28,r9
	ctx.r11.u64 = ctx.r28.u64 + ctx.r9.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// add r11,r23,r10
	ctx.r11.u64 = ctx.r23.u64 + ctx.r10.u64;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// lwz r8,252(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stw r10,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// mullw r10,r11,r18
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r18.s32);
	// addi r11,r10,4095
	ctx.r11.s64 = ctx.r10.s64 + 4095;
	// rlwinm r21,r11,0,0,19
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x82928c40
	goto loc_82928C40;
loc_82928C38:
	// lwz r28,176(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r23,172(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
loc_82928C40:
	// add. r3,r21,r25
	ctx.r3.u64 = ctx.r21.u64 + ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82928c64
	if (ctx.cr0.eq) goto loc_82928C64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82691410
	ctx.lr = 0x82928C50;
	sub_82691410(ctx, base);
	// mr. r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne 0x82928c64
	if (!ctx.cr0.eq) goto loc_82928C64;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x829288ac
	goto loc_829288AC;
loc_82928C64:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82928d50
	if (ctx.cr6.eq) goto loc_82928D50;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82928c88
	if (ctx.cr6.eq) goto loc_82928C88;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// b 0x82928c94
	goto loc_82928C94;
loc_82928C88:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r10,4(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r8,16(r14)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
loc_82928C94:
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// clrlwi r5,r17,26
	ctx.r5.u64 = ctx.r17.u32 & 0x3F;
	// addi r4,r9,-25800
	ctx.r4.s64 = ctx.r9.s64 + -25800;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// subf r7,r10,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r10.s64;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// subf r8,r11,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r11.s64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// twllei r24,0
	if (ctx.r24.u32 <= 0) __builtin_debugtrap();
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lbzx r5,r5,r4
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// mullw r5,r5,r6
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// divwu r8,r7,r6
	ctx.r8.u32 = ctx.r7.u32 / ctx.r6.u32;
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// divwu r9,r4,r9
	ctx.r9.u32 = ctx.r4.u32 / ctx.r9.u32;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r29,r5,29,3,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// twllei r6,0
	if (ctx.r6.u32 <= 0) __builtin_debugtrap();
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// divwu r9,r20,r24
	ctx.r9.u32 = ctx.r20.u32 / ctx.r24.u32;
	// subf r7,r27,r15
	ctx.r7.s64 = ctx.r15.s64 - ctx.r27.s64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// divwu r8,r24,r29
	ctx.r8.u32 = ctx.r24.u32 / ctx.r29.u32;
	// twllei r29,0
	if (ctx.r29.u32 <= 0) __builtin_debugtrap();
	// bl 0x82b04d88
	ctx.lr = 0x82928D44;
	sub_82B04D88(ctx, base);
	// add r11,r27,r19
	ctx.r11.u64 = ctx.r27.u64 + ctx.r19.u64;
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// b 0x82928d54
	goto loc_82928D54;
loc_82928D50:
	// stw r15,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r15.u32);
loc_82928D54:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82928df0
	if (ctx.cr6.eq) goto loc_82928DF0;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r9,288(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// subf r29,r10,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// beq cr6,0x82928df4
	if (ctx.cr6.eq) goto loc_82928DF4;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// lwz r27,268(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// divwu r8,r28,r11
	ctx.r8.u32 = ctx.r28.u32 / ctx.r11.u32;
	// lwz r5,300(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// divwu r9,r23,r9
	ctx.r9.u32 = ctx.r23.u32 / ctx.r9.u32;
	// lwz r4,296(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// add r3,r25,r19
	ctx.r3.u64 = ctx.r25.u64 + ctx.r19.u64;
	// stw r18,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82b04d88
	ctx.lr = 0x82928DEC;
	sub_82B04D88(ctx, base);
	// b 0x82928df4
	goto loc_82928DF4;
loc_82928DF0:
	// lwz r29,200(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
loc_82928DF4:
	// rlwinm r11,r17,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r24,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r24.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stw r20,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r20.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r11.u32);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82928E14;
	sub_82FA77C0(ctx, base);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82928E24;
	sub_82FA77C0(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r10,360(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// lwz r9,900(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 900);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r8,844(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 844);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r6,892(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// stw r10,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r10.u32);
	// stw r9,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r9.u32);
	// stw r8,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r8.u32);
	// bl 0x8295bc70
	ctx.lr = 0x82928E5C;
	sub_8295BC70(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82928f8c
	if (ctx.cr6.eq) goto loc_82928F8C;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82928ef4
	if (ctx.cr6.eq) goto loc_82928EF4;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82928ef4
	if (!ctx.cr6.eq) goto loc_82928EF4;
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r8,8(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r9,4(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r7,12(r16)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r6,16(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwz r3,20(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r30,r7,-1
	ctx.r30.s64 = ctx.r7.s64 + -1;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// divwu r7,r8,r11
	ctx.r7.u32 = ctx.r8.u32 / ctx.r11.u32;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// divwu r8,r30,r5
	ctx.r8.u32 = ctx.r30.u32 / ctx.r5.u32;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// b 0x82928f38
	goto loc_82928F38;
loc_82928EF4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r18,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
	// add r10,r23,r5
	ctx.r10.u64 = ctx.r23.u64 + ctx.r5.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// divwu r9,r9,r11
	ctx.r9.u32 = ctx.r9.u32 / ctx.r11.u32;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// divwu r10,r10,r5
	ctx.r10.u32 = ctx.r10.u32 / ctx.r5.u32;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
loc_82928F38:
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r7,268(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// add r9,r23,r5
	ctx.r9.u64 = ctx.r23.u64 + ctx.r5.u64;
	// lwz r10,300(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// lwz r9,296(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// divwu r5,r4,r5
	ctx.r5.u32 = ctx.r4.u32 / ctx.r5.u32;
	// divwu r4,r3,r11
	ctx.r4.u32 = ctx.r3.u32 / ctx.r11.u32;
	// add r8,r25,r19
	ctx.r8.u64 = ctx.r25.u64 + ctx.r19.u64;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// bl 0x82b04d50
	ctx.lr = 0x82928F8C;
	sub_82B04D50(ctx, base);
loc_82928F8C:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x829288ac
	if (ctx.cr6.eq) goto loc_829288AC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82691460
	ctx.lr = 0x82928FA0;
	sub_82691460(ctx, base);
	// b 0x829288ac
	goto loc_829288AC;
}

__attribute__((alias("__imp__sub_82928FA4"))) PPC_WEAK_FUNC(sub_82928FA4);
PPC_FUNC_IMPL(__imp__sub_82928FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82928FA8"))) PPC_WEAK_FUNC(sub_82928FA8);
PPC_FUNC_IMPL(__imp__sub_82928FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82928FB0;
	__savegprlr_19(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82928FE4;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82928ff8
	if (!ctx.cr6.eq) goto loc_82928FF8;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x829293cc
	goto loc_829293CC;
loc_82928FF8:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 & ctx.r31.u64;
	// beq cr6,0x82929018
	if (ctx.cr6.eq) goto loc_82929018;
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// b 0x8292901c
	goto loc_8292901C;
loc_82929018:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8292901C:
	// bl 0x82928038
	ctx.lr = 0x82929020;
	sub_82928038(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829280b0
	ctx.lr = 0x82929030;
	sub_829280B0(ctx, base);
	// rlwinm r28,r3,0,26,22
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-449
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -449, ctx.xer);
	// bne cr6,0x8292904c
	if (!ctx.cr6.eq) goto loc_8292904C;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2154
	ctx.r3.u64 = ctx.r3.u64 | 2154;
	// b 0x829293cc
	goto loc_829293CC;
loc_8292904C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82929060
	if (ctx.cr6.eq) goto loc_82929060;
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x82929064
	goto loc_82929064;
loc_82929060:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82929064:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82929074
	if (ctx.cr6.eq) goto loc_82929074;
	// lwz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// b 0x82929078
	goto loc_82929078;
loc_82929074:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82929078:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82929088
	if (ctx.cr6.eq) goto loc_82929088;
	// lwz r27,0(r21)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// b 0x8292908c
	goto loc_8292908C;
loc_82929088:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_8292908C:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8292909c
	if (ctx.cr6.eq) goto loc_8292909C;
	// lwz r25,0(r19)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// b 0x829290a0
	goto loc_829290A0;
loc_8292909C:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_829290A0:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x829290c4
	if (!ctx.cr6.eq) goto loc_829290C4;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x829290bc
	if (!ctx.cr6.eq) goto loc_829290BC;
	// li r29,256
	ctx.r29.s64 = 256;
	// li r31,256
	ctx.r31.s64 = 256;
	// b 0x829290e8
	goto loc_829290E8;
loc_829290BC:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x829290d0
	goto loc_829290D0;
loc_829290C4:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x829290d0
	if (!ctx.cr6.eq) goto loc_829290D0;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_829290D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x829290dc
	if (!ctx.cr6.eq) goto loc_829290DC;
	// li r31,1
	ctx.r31.s64 = 1;
loc_829290DC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x829290e8
	if (!ctx.cr6.eq) goto loc_829290E8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_829290E8:
	// cmpwi cr6,r26,18
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 18, ctx.xer);
	// bne cr6,0x82929100
	if (!ctx.cr6.eq) goto loc_82929100;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x829290fc
	if (!ctx.cr6.gt) goto loc_829290FC;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_829290FC:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82929100:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82929110
	if (ctx.cr6.eq) goto loc_82929110;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82929114
	if (!ctx.cr6.eq) goto loc_82929114;
loc_82929110:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82929114:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8267dad0
	ctx.lr = 0x82929120;
	sub_8267DAD0(ctx, base);
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r26,17
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 17, ctx.xer);
	// bne cr6,0x82929154
	if (!ctx.cr6.eq) goto loc_82929154;
	// cmplwi cr6,r27,1024
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1024, ctx.xer);
	// ble cr6,0x82929138
	if (!ctx.cr6.gt) goto loc_82929138;
	// li r27,1024
	ctx.r27.s64 = 1024;
loc_82929138:
	// cmplwi cr6,r31,2048
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2048, ctx.xer);
	// ble cr6,0x82929144
	if (!ctx.cr6.gt) goto loc_82929144;
	// li r31,2048
	ctx.r31.s64 = 2048;
loc_82929144:
	// cmplwi cr6,r29,2048
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2048, ctx.xer);
	// ble cr6,0x829291b4
	if (!ctx.cr6.gt) goto loc_829291B4;
	// li r29,2048
	ctx.r29.s64 = 2048;
	// b 0x829291b4
	goto loc_829291B4;
loc_82929154:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82929164
	if (!ctx.cr6.gt) goto loc_82929164;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82929164:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82929174
	if (!ctx.cr6.gt) goto loc_82929174;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82929174:
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// bne cr6,0x829291b4
	if (!ctx.cr6.eq) goto loc_829291B4;
	// rlwinm. r11,r8,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x8292918c
	if (!ctx.cr0.eq) goto loc_8292918C;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_8292918C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829291b4
	if (ctx.cr6.eq) goto loc_829291B4;
	// mullw r11,r10,r29
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x829291a4
	if (!ctx.cr6.gt) goto loc_829291A4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_829291A4:
	// mullw r11,r10,r31
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x829291b4
	if (!ctx.cr6.gt) goto loc_829291B4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_829291B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// beq cr6,0x829291e0
	if (ctx.cr6.eq) goto loc_829291E0;
	// cmpwi cr6,r26,17
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 17, ctx.xer);
	// beq cr6,0x829291d8
	if (ctx.cr6.eq) goto loc_829291D8;
	// cmpwi cr6,r26,18
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 18, ctx.xer);
	// bne cr6,0x829291e4
	if (!ctx.cr6.eq) goto loc_829291E4;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// b 0x829291e4
	goto loc_829291E4;
loc_829291D8:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// b 0x829291e4
	goto loc_829291E4;
loc_829291E0:
	// li r11,2
	ctx.r11.s64 = 2;
loc_829291E4:
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// lis r9,6688
	ctx.r9.s64 = 438304768;
	// ori r10,r10,18
	ctx.r10.u64 = ctx.r10.u64 | 18;
	// ori r9,r9,20
	ctx.r9.u64 = ctx.r9.u64 | 20;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// bne cr6,0x82929218
	if (!ctx.cr6.eq) goto loc_82929218;
	// rlwinm. r7,r8,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82929218
	if (ctx.cr0.eq) goto loc_82929218;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82929214
	if (ctx.cr6.lt) goto loc_82929214;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82929218
	if (!ctx.cr6.gt) goto loc_82929218;
loc_82929214:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82929218:
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82929274
	if (ctx.cr0.eq) goto loc_82929274;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8292923c
	if (!ctx.cr6.gt) goto loc_8292923C;
loc_82929230:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82929230
	if (ctx.cr6.lt) goto loc_82929230;
loc_8292923C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82929258
	if (!ctx.cr6.gt) goto loc_82929258;
loc_8292924C:
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8292924c
	if (ctx.cr6.lt) goto loc_8292924C;
loc_82929258:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82929274
	if (!ctx.cr6.gt) goto loc_82929274;
loc_82929268:
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82929268
	if (ctx.cr6.lt) goto loc_82929268;
loc_82929274:
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82929294
	if (ctx.cr6.lt) goto loc_82929294;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82929294
	if (ctx.cr6.gt) goto loc_82929294;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// addi r10,r29,3
	ctx.r10.s64 = ctx.r29.s64 + 3;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r29,r10,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
loc_82929294:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// beq cr6,0x829292c4
	if (ctx.cr6.eq) goto loc_829292C4;
	// cmpwi cr6,r26,17
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 17, ctx.xer);
	// beq cr6,0x829292b8
	if (ctx.cr6.eq) goto loc_829292B8;
	// cmpwi cr6,r26,18
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 18, ctx.xer);
	// bne cr6,0x829292c8
	if (!ctx.cr6.eq) goto loc_829292C8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x829292c8
	goto loc_829292C8;
loc_829292B8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// b 0x829292c8
	goto loc_829292C8;
loc_829292C4:
	// li r11,16384
	ctx.r11.s64 = 16384;
loc_829292C8:
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829292fc
	if (ctx.cr0.eq) goto loc_829292FC;
	// rlwinm. r11,r8,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82929304
	if (ctx.cr0.eq) goto loc_82929304;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// and. r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829292fc
	if (!ctx.cr0.eq) goto loc_829292FC;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// and. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829292fc
	if (!ctx.cr0.eq) goto loc_829292FC;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// and. r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82929304
	if (ctx.cr0.eq) goto loc_82929304;
loc_829292FC:
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x8292938c
	goto loc_8292938C;
loc_82929304:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82929320
	if (ctx.cr6.eq) goto loc_82929320;
loc_82929314:
	// rlwinm. r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bne 0x82929314
	if (!ctx.cr0.eq) goto loc_82929314;
loc_82929320:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8292933c
	if (ctx.cr6.eq) goto loc_8292933C;
loc_82929330:
	// rlwinm. r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82929330
	if (!ctx.cr0.eq) goto loc_82929330;
loc_8292933C:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82929358
	if (ctx.cr6.eq) goto loc_82929358;
loc_8292934C:
	// rlwinm. r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x8292934c
	if (!ctx.cr0.eq) goto loc_8292934C;
loc_82929358:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82929364
	if (!ctx.cr6.gt) goto loc_82929364;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82929364:
	// cmpwi cr6,r26,17
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 17, ctx.xer);
	// bne cr6,0x82929378
	if (!ctx.cr6.eq) goto loc_82929378;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82929378
	if (!ctx.cr6.gt) goto loc_82929378;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82929378:
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82929388
	if (ctx.cr6.gt) goto loc_82929388;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8292938c
	if (!ctx.cr6.eq) goto loc_8292938C;
loc_82929388:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_8292938C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82929398
	if (ctx.cr6.eq) goto loc_82929398;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
loc_82929398:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x829293a4
	if (ctx.cr6.eq) goto loc_829293A4;
	// stw r29,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r29.u32);
loc_829293A4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x829293b0
	if (ctx.cr6.eq) goto loc_829293B0;
	// stw r27,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r27.u32);
loc_829293B0:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x829293bc
	if (ctx.cr6.eq) goto loc_829293BC;
	// stw r25,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r25.u32);
loc_829293BC:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x829293c8
	if (ctx.cr6.eq) goto loc_829293C8;
	// stw r23,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r23.u32);
loc_829293C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829293CC:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829293D4"))) PPC_WEAK_FUNC(sub_829293D4);
PPC_FUNC_IMPL(__imp__sub_829293D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829293D8"))) PPC_WEAK_FUNC(sub_829293D8);
PPC_FUNC_IMPL(__imp__sub_829293D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x829293E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82c8af70
	ctx.lr = 0x8292940C;
	sub_82C8AF70(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8292942c
	if (!ctx.cr6.eq) goto loc_8292942C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8295c078
	ctx.lr = 0x8292941C;
	sub_8295C078(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82929424:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8292942C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8292944c
	if (!ctx.cr6.eq) goto loc_8292944C;
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_8292943C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8295c078
	ctx.lr = 0x82929444;
	sub_8295C078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82929424
	goto loc_82929424;
loc_8292944C:
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82929460
	if (!ctx.cr6.eq) goto loc_82929460;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
loc_82929460:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8295c080
	ctx.lr = 0x8292947C;
	sub_8295C080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8292948c
	if (!ctx.cr0.lt) goto loc_8292948C;
loc_82929484:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8292943c
	goto loc_8292943C;
loc_8292948C:
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82af2cc8
	ctx.lr = 0x8292949C;
	sub_82AF2CC8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// lwz r31,264(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r30,260(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r11,r11,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82928110
	ctx.lr = 0x829294E8;
	sub_82928110(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82929484
	if (ctx.cr0.lt) goto loc_82929484;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8292943c
	goto loc_8292943C;
}

__attribute__((alias("__imp__sub_829294F8"))) PPC_WEAK_FUNC(sub_829294F8);
PPC_FUNC_IMPL(__imp__sub_829294F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82929500;
	__savegprlr_24(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x8295be18
	ctx.lr = 0x8292952C;
	sub_8295BE18(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8292954c
	if (!ctx.cr6.eq) goto loc_8292954C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8295c5a0
	ctx.lr = 0x8292953C;
	sub_8295C5A0(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82929544:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8292954C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8292956c
	if (!ctx.cr6.eq) goto loc_8292956C;
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_8292955C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8295c5a0
	ctx.lr = 0x82929564;
	sub_8295C5A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82929544
	goto loc_82929544;
loc_8292956C:
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82929580
	if (!ctx.cr6.eq) goto loc_82929580;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
loc_82929580:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8295c5a8
	ctx.lr = 0x8292959C;
	sub_8295C5A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x829295ac
	if (!ctx.cr0.lt) goto loc_829295AC;
loc_829295A4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8292955c
	goto loc_8292955C;
loc_829295AC:
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82af2cc8
	ctx.lr = 0x829295BC;
	sub_82AF2CC8(ctx, base);
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r9,172(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r31,268(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r30,264(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r29,260(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// rlwinm r11,r11,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x829287e8
	ctx.lr = 0x82929618;
	sub_829287E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829295a4
	if (ctx.cr0.lt) goto loc_829295A4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8292955c
	goto loc_8292955C;
}

__attribute__((alias("__imp__sub_82929628"))) PPC_WEAK_FUNC(sub_82929628);
PPC_FUNC_IMPL(__imp__sub_82929628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82929630;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82929658
	if (!ctx.cr6.eq) goto loc_82929658;
loc_8292964C:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82929a44
	goto loc_82929A44;
loc_82929658:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8266efd0
	ctx.lr = 0x82929660;
	sub_8266EFD0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82929698
	if (ctx.cr6.eq) goto loc_82929698;
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// beq cr6,0x82929688
	if (ctx.cr6.eq) goto loc_82929688;
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// bne cr6,0x8292964c
	if (!ctx.cr6.eq) goto loc_8292964C;
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
	// b 0x829296a0
	goto loc_829296A0;
loc_82929688:
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x829296a4
	goto loc_829296A4;
loc_82929698:
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
loc_829296A0:
	// lwz r15,80(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_829296A4:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x829296fc
	if (!ctx.cr6.eq) goto loc_829296FC;
	// cmpwi cr6,r18,3
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 3, ctx.xer);
	// beq cr6,0x829297f4
	if (ctx.cr6.eq) goto loc_829297F4;
	// cmpwi cr6,r18,17
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 17, ctx.xer);
	// beq cr6,0x829297bc
	if (ctx.cr6.eq) goto loc_829297BC;
	// cmpwi cr6,r18,18
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 18, ctx.xer);
	// bne cr6,0x8292982c
	if (!ctx.cr6.eq) goto loc_8292982C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82662b88
	ctx.lr = 0x829296D4;
	sub_82662B88(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829296f4
	if (!ctx.cr0.eq) goto loc_829296F4;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_829296E8:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82929838
	if (ctx.cr0.eq) goto loc_82929838;
loc_829296F4:
	// lis r31,8
	ctx.r31.s64 = 524288;
	// ori r31,r31,4
	ctx.r31.u64 = ctx.r31.u64 | 4;
loc_829296FC:
	// cmpwi cr6,r18,18
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 18, ctx.xer);
	// bne cr6,0x82929708
	if (!ctx.cr6.eq) goto loc_82929708;
	// oris r31,r31,7
	ctx.r31.u64 = ctx.r31.u64 | 458752;
loc_82929708:
	// rlwinm. r11,r31,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// oris r20,r31,96
	ctx.r20.u64 = ctx.r31.u64 | 6291456;
	// bne 0x82929718
	if (!ctx.cr0.eq) goto loc_82929718;
	// rlwinm r20,r31,0,11,8
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFF9FFFFF;
loc_82929718:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82662b78
	ctx.lr = 0x82929720;
	sub_82662B78(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r11,r29
	ctx.r23.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmplw cr6,r23,r3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8292964c
	if (!ctx.cr6.lt) goto loc_8292964C;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r18,18
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 18, ctx.xer);
	// li r21,6
	ctx.r21.s64 = 6;
	// beq cr6,0x8292975c
	if (ctx.cr6.eq) goto loc_8292975C;
	// li r21,1
	ctx.r21.s64 = 1;
loc_8292975C:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82929774
	if (ctx.cr6.eq) goto loc_82929774;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// li r22,0
	ctx.r22.s64 = 0;
	// bne cr6,0x82929778
	if (!ctx.cr6.eq) goto loc_82929778;
loc_82929774:
	// li r22,1
	ctx.r22.s64 = 1;
loc_82929778:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x829299fc
	if (ctx.cr6.eq) goto loc_829299FC;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r31,r11,14
	ctx.r31.u64 = ctx.r11.u64 | 14;
loc_82929790:
	// cmpwi cr6,r18,3
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 3, ctx.xer);
	// beq cr6,0x82929858
	if (ctx.cr6.eq) goto loc_82929858;
	// cmpwi cr6,r18,17
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 17, ctx.xer);
	// beq cr6,0x82929840
	if (ctx.cr6.eq) goto loc_82929840;
	// cmpwi cr6,r18,18
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 18, ctx.xer);
	// bne cr6,0x82929874
	if (!ctx.cr6.eq) goto loc_82929874;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82662c78
	ctx.lr = 0x829297B8;
	sub_82662C78(ctx, base);
	// b 0x82929864
	goto loc_82929864;
loc_829297BC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82662d60
	ctx.lr = 0x829297CC;
	sub_82662D60(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829296f4
	if (!ctx.cr0.eq) goto loc_829296F4;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829296f4
	if (!ctx.cr0.eq) goto loc_829296F4;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x829296e8
	goto loc_829296E8;
loc_829297F4:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82662b88
	ctx.lr = 0x82929804;
	sub_82662B88(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82929824
	if (!ctx.cr0.eq) goto loc_82929824;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82929838
	if (ctx.cr0.eq) goto loc_82929838;
loc_82929824:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82929830
	goto loc_82929830;
loc_8292982C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82929830:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829296f4
	if (ctx.cr6.eq) goto loc_829296F4;
loc_82929838:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x829296fc
	goto loc_829296FC;
loc_82929840:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82662d68
	ctx.lr = 0x8292984C;
	sub_82662D68(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// b 0x8292986c
	goto loc_8292986C;
loc_82929858:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82662b90
	ctx.lr = 0x82929864;
	sub_82662B90(ctx, base);
loc_82929864:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_8292986C:
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_82929874:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82929a00
	if (ctx.cr6.lt) goto loc_82929A00;
	// addi r29,r23,1
	ctx.r29.s64 = ctx.r23.s64 + 1;
	// b 0x829299c0
	goto loc_829299C0;
loc_82929884:
	// cmpwi cr6,r18,3
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 3, ctx.xer);
	// beq cr6,0x829298c8
	if (ctx.cr6.eq) goto loc_829298C8;
	// cmpwi cr6,r18,17
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 17, ctx.xer);
	// beq cr6,0x829298b0
	if (ctx.cr6.eq) goto loc_829298B0;
	// cmpwi cr6,r18,18
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 18, ctx.xer);
	// bne cr6,0x829298e4
	if (!ctx.cr6.eq) goto loc_829298E4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82662c78
	ctx.lr = 0x829298AC;
	sub_82662C78(ctx, base);
	// b 0x829298d4
	goto loc_829298D4;
loc_829298B0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82662d68
	ctx.lr = 0x829298BC;
	sub_82662D68(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// b 0x829298dc
	goto loc_829298DC;
loc_829298C8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82662b90
	ctx.lr = 0x829298D4;
	sub_82662B90(ctx, base);
loc_829298D4:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_829298DC:
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_829298E4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82929a00
	if (ctx.cr6.lt) goto loc_82929A00;
	// cmpwi cr6,r18,3
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 3, ctx.xer);
	// beq cr6,0x82929904
	if (ctx.cr6.eq) goto loc_82929904;
	// cmpwi cr6,r18,17
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 17, ctx.xer);
	// beq cr6,0x8292996c
	if (ctx.cr6.eq) goto loc_8292996C;
	// cmpwi cr6,r18,18
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 18, ctx.xer);
	// bne cr6,0x8292992c
	if (!ctx.cr6.eq) goto loc_8292992C;
loc_82929904:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829293d8
	ctx.lr = 0x82929928;
	sub_829293D8(ctx, base);
loc_82929928:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8292992C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82929a00
	if (ctx.cr6.lt) goto loc_82929A00;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82929994
	if (ctx.cr6.eq) goto loc_82929994;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8292994c
	if (ctx.cr6.eq) goto loc_8292994C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8266eed8
	ctx.lr = 0x8292994C;
	sub_8266EED8(ctx, base);
loc_8292994C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8292995c
	if (ctx.cr6.eq) goto loc_8292995C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8266eed8
	ctx.lr = 0x8292995C;
	sub_8266EED8(ctx, base);
loc_8292995C:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x829299b8
	goto loc_829299B8;
loc_8292996C:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x829294f8
	ctx.lr = 0x82929990;
	sub_829294F8(ctx, base);
	// b 0x82929928
	goto loc_82929928;
loc_82929994:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x829299a8
	if (ctx.cr6.eq) goto loc_829299A8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8266eed8
	ctx.lr = 0x829299A4;
	sub_8266EED8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
loc_829299A8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x829299bc
	if (ctx.cr6.eq) goto loc_829299BC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8266eed8
	ctx.lr = 0x829299B8;
	sub_8266EED8(ctx, base);
loc_829299B8:
	// li r25,0
	ctx.r25.s64 = 0;
loc_829299BC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_829299C0:
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x82929884
	if (ctx.cr6.lt) goto loc_82929884;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x829299dc
	if (ctx.cr6.eq) goto loc_829299DC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8266eed8
	ctx.lr = 0x829299D8;
	sub_8266EED8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_829299DC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x829299f0
	if (ctx.cr6.eq) goto loc_829299F0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8266eed8
	ctx.lr = 0x829299EC;
	sub_8266EED8(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
loc_829299F0:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82929790
	if (ctx.cr6.lt) goto loc_82929790;
loc_829299FC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82929A00:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82929a10
	if (ctx.cr6.eq) goto loc_82929A10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8266eed8
	ctx.lr = 0x82929A10;
	sub_8266EED8(ctx, base);
loc_82929A10:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82929a20
	if (ctx.cr6.eq) goto loc_82929A20;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8266eed8
	ctx.lr = 0x82929A20;
	sub_8266EED8(ctx, base);
loc_82929A20:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82929a30
	if (ctx.cr6.eq) goto loc_82929A30;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8266eed8
	ctx.lr = 0x82929A30;
	sub_8266EED8(ctx, base);
loc_82929A30:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82929a40
	if (ctx.cr6.eq) goto loc_82929A40;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8266eed8
	ctx.lr = 0x82929A40;
	sub_8266EED8(ctx, base);
loc_82929A40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82929A44:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82929A4C"))) PPC_WEAK_FUNC(sub_82929A4C);
PPC_FUNC_IMPL(__imp__sub_82929A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82929A50"))) PPC_WEAK_FUNC(sub_82929A50);
PPC_FUNC_IMPL(__imp__sub_82929A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82929A58;
	__savegprlr_14(ctx, base);
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r6,1564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1564, ctx.r6.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r9,1588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1588, ctx.r9.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r7,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r7.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r8,1580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1580, ctx.r8.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82954a30
	ctx.lr = 0x82929A90;
	sub_82954A30(ctx, base);
	// li r15,0
	ctx.r15.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r17,0
	ctx.r17.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82929abc
	if (!ctx.cr6.eq) goto loc_82929ABC;
loc_82929AA4:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82954d60
	ctx.lr = 0x82929AAC;
	sub_82954D60(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82929AB4:
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82929ABC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82929aa4
	if (ctx.cr6.eq) goto loc_82929AA4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82929aa4
	if (ctx.cr6.eq) goto loc_82929AA4;
	// lwz r11,1668(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1668);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82929af0
	if (!ctx.cr6.eq) goto loc_82929AF0;
	// lis r30,-30602
	ctx.r30.s64 = -2005532672;
	// ori r30,r30,2156
	ctx.r30.u64 = ctx.r30.u64 | 2156;
loc_82929AE0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82954d60
	ctx.lr = 0x82929AE8;
	sub_82954D60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82929ab4
	goto loc_82929AB4;
loc_82929AF0:
	// lwz r29,1644(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1644);
	// lwz r23,1660(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1660);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82929b0c
	if (!ctx.cr6.eq) goto loc_82929B0C;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// bne cr6,0x82929b0c
	if (!ctx.cr6.eq) goto loc_82929B0C;
	// addi r29,r1,304
	ctx.r29.s64 = ctx.r1.s64 + 304;
loc_82929B0C:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x829582f8
	ctx.lr = 0x82929B24;
	sub_829582F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82929b34
	if (!ctx.cr0.lt) goto loc_82929B34;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82929ae0
	goto loc_82929AE0;
loc_82929B34:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// bne cr6,0x82929b44
	if (!ctx.cr6.eq) goto loc_82929B44;
	// lwz r23,20(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r23,1660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1660, ctx.r23.u32);
loc_82929B44:
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82929b6c
	if (ctx.cr6.eq) goto loc_82929B6C;
loc_82929B58:
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82929b58
	if (!ctx.cr6.eq) goto loc_82929B58;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
loc_82929B6C:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r23,18
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 18, ctx.xer);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// bne cr6,0x82929bb0
	if (!ctx.cr6.eq) goto loc_82929BB0;
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82929ba4
	if (ctx.cr6.eq) goto loc_82929BA4;
loc_82929B88:
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82929b88
	if (!ctx.cr6.eq) goto loc_82929B88;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x82929bb0
	if (ctx.cr6.eq) goto loc_82929BB0;
loc_82929BA4:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// b 0x82929ae0
	goto loc_82929AE0;
loc_82929BB0:
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r28,-2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -2, ctx.xer);
	// beq cr6,0x82929bf8
	if (ctx.cr6.eq) goto loc_82929BF8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82929bf8
	if (ctx.cr6.lt) goto loc_82929BF8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82929bd4
	if (ctx.cr6.eq) goto loc_82929BD4;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82929bfc
	if (!ctx.cr6.eq) goto loc_82929BFC;
loc_82929BD4:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,1564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1564, ctx.r11.u32);
	// ble cr6,0x82929bfc
	if (!ctx.cr6.gt) goto loc_82929BFC;
loc_82929BE4:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82929be4
	if (ctx.cr6.lt) goto loc_82929BE4;
	// stw r11,1564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1564, ctx.r11.u32);
	// b 0x82929bfc
	goto loc_82929BFC;
loc_82929BF8:
	// stw r10,1564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1564, ctx.r10.u32);
loc_82929BFC:
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r27,-2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -2, ctx.xer);
	// beq cr6,0x82929c44
	if (ctx.cr6.eq) goto loc_82929C44;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82929c44
	if (ctx.cr6.lt) goto loc_82929C44;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82929c20
	if (ctx.cr6.eq) goto loc_82929C20;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x82929c48
	if (!ctx.cr6.eq) goto loc_82929C48;
loc_82929C20:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r11.u32);
	// ble cr6,0x82929c48
	if (!ctx.cr6.gt) goto loc_82929C48;
loc_82929C30:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82929c30
	if (ctx.cr6.lt) goto loc_82929C30;
	// stw r11,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r11.u32);
	// b 0x82929c48
	goto loc_82929C48;
loc_82929C44:
	// stw r10,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r10.u32);
loc_82929C48:
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r26,-2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -2, ctx.xer);
	// beq cr6,0x82929c90
	if (ctx.cr6.eq) goto loc_82929C90;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82929c90
	if (ctx.cr6.lt) goto loc_82929C90;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82929c6c
	if (ctx.cr6.eq) goto loc_82929C6C;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x82929c94
	if (!ctx.cr6.eq) goto loc_82929C94;
loc_82929C6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,1580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1580, ctx.r11.u32);
	// ble cr6,0x82929c94
	if (!ctx.cr6.gt) goto loc_82929C94;
loc_82929C7C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82929c7c
	if (ctx.cr6.lt) goto loc_82929C7C;
	// stw r11,1580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1580, ctx.r11.u32);
	// b 0x82929c94
	goto loc_82929C94;
loc_82929C90:
	// stw r10,1580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1580, ctx.r10.u32);
loc_82929C94:
	// lwz r18,1620(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1620);
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, -1, ctx.xer);
	// bne cr6,0x82929ca8
	if (!ctx.cr6.eq) goto loc_82929CA8;
	// lis r18,8
	ctx.r18.s64 = 524288;
	// ori r18,r18,4
	ctx.r18.u64 = ctx.r18.u64 | 4;
loc_82929CA8:
	// lwz r11,1628(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1628);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82929cbc
	if (!ctx.cr6.eq) goto loc_82929CBC;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,1628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1628, ctx.r11.u32);
loc_82929CBC:
	// cmpwi cr6,r23,18
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 18, ctx.xer);
	// bne cr6,0x82929cd0
	if (!ctx.cr6.eq) goto loc_82929CD0;
	// oris r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 458752;
	// oris r18,r18,7
	ctx.r18.u64 = ctx.r18.u64 | 458752;
	// stw r11,1628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1628, ctx.r11.u32);
loc_82929CD0:
	// clrlwi r10,r18,24
	ctx.r10.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82929cf4
	if (ctx.cr6.eq) goto loc_82929CF4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82929cf4
	if (ctx.cr6.eq) goto loc_82929CF4;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// li r14,0
	ctx.r14.s64 = 0;
	// bne cr6,0x82929cf8
	if (!ctx.cr6.eq) goto loc_82929CF8;
loc_82929CF4:
	// li r14,1
	ctx.r14.s64 = 1;
loc_82929CF8:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82929d10
	if (ctx.cr6.eq) goto loc_82929D10;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16385
	ctx.r30.u64 = ctx.r30.u64 | 16385;
	// b 0x82929ae0
	goto loc_82929AE0;
loc_82929D10:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82fa7cf0
	ctx.lr = 0x82929D20;
	sub_82FA7CF0(ctx, base);
	// lwz r11,1604(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1604);
	// lwz r20,1636(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1636);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// bne cr6,0x82929de4
	if (!ctx.cr6.eq) goto loc_82929DE4;
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82929db8
	if (ctx.cr6.eq) goto loc_82929DB8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82928038
	ctx.lr = 0x82929D48;
	sub_82928038(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82929d68
	if (ctx.cr6.eq) goto loc_82929D68;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82929d68
	if (ctx.cr6.eq) goto loc_82929D68;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82929db8
	if (!ctx.cr6.eq) goto loc_82929DB8;
loc_82929D68:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82929db8
	if (!ctx.cr6.eq) goto loc_82929DB8;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82fa77c0
	ctx.lr = 0x82929D80;
	sub_82FA77C0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829280b0
	ctx.lr = 0x82929DA4;
	sub_829280B0(ctx, base);
	// rlwinm r11,r3,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// bne cr6,0x82929db8
	if (!ctx.cr6.eq) goto loc_82929DB8;
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_82929DB8:
	// addis r11,r7,-13873
	ctx.r11.s64 = ctx.r7.s64 + -909180928;
	// addic. r11,r11,-19521
	ctx.xer.ca = ctx.r11.u32 > 19520;
	ctx.r11.s64 = ctx.r11.s64 + -19521;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82929dd8
	if (ctx.cr0.eq) goto loc_82929DD8;
	// cmplwi cr6,r11,1503
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1503, ctx.xer);
	// bne cr6,0x82929de0
	if (!ctx.cr6.eq) goto loc_82929DE0;
	// lis r7,10280
	ctx.r7.s64 = 673710080;
	// ori r7,r7,134
	ctx.r7.u64 = ctx.r7.u64 | 134;
	// b 0x82929de0
	goto loc_82929DE0;
loc_82929DD8:
	// lis r7,2048
	ctx.r7.s64 = 134217728;
	// ori r7,r7,74
	ctx.r7.u64 = ctx.r7.u64 | 74;
loc_82929DE0:
	// stw r7,1604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1604, ctx.r7.u32);
loc_82929DE4:
	// lwz r22,1652(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1652);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82929e00
	if (ctx.cr6.eq) goto loc_82929E00;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82929E00;
	sub_82FA77C0(ctx, base);
loc_82929E00:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r9,r1,1604
	ctx.r9.s64 = ctx.r1.s64 + 1604;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r7,r1,1588
	ctx.r7.s64 = ctx.r1.s64 + 1588;
	// addi r6,r1,1580
	ctx.r6.s64 = ctx.r1.s64 + 1580;
	// addi r5,r1,1572
	ctx.r5.s64 = ctx.r1.s64 + 1572;
	// addi r4,r1,1564
	ctx.r4.s64 = ctx.r1.s64 + 1564;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82928fa8
	ctx.lr = 0x82929E24;
	sub_82928FA8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82929ae0
	if (ctx.cr0.lt) goto loc_82929AE0;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// lwz r19,1588(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// ori r29,r11,14
	ctx.r29.u64 = ctx.r11.u64 | 14;
	// beq cr6,0x82929e70
	if (ctx.cr6.eq) goto loc_82929E70;
	// cmpwi cr6,r23,17
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 17, ctx.xer);
	// beq cr6,0x82929e64
	if (ctx.cr6.eq) goto loc_82929E64;
	// cmpwi cr6,r23,18
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 18, ctx.xer);
	// bne cr6,0x82929ea4
	if (!ctx.cr6.eq) goto loc_82929EA4;
	// lwz r4,1564(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1564);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82929e80
	goto loc_82929E80;
loc_82929E64:
	// lwz r5,1580(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1580);
	// li r10,17
	ctx.r10.s64 = 17;
	// b 0x82929e78
	goto loc_82929E78;
loc_82929E70:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82929E78:
	// lwz r3,1564(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1564);
	// lwz r4,1572(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
loc_82929E80:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r9,1612(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1612);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// lwz r8,1604(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1604);
	// bl 0x82662e30
	ctx.lr = 0x82929E94;
	sub_82662E30(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 & ctx.r29.u64;
loc_82929EA4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8292a1c8
	if (ctx.cr6.lt) goto loc_8292A1C8;
	// lwz r11,48(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 48);
	// addi r21,r1,160
	ctx.r21.s64 = ctx.r1.s64 + 160;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r27,192(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r25,r11,21,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// lwz r26,196(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r24,204(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// beq cr6,0x8292a164
	if (ctx.cr6.eq) goto loc_8292A164;
loc_82929ED4:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292a044
	if (ctx.cr6.eq) goto loc_8292A044;
loc_82929EE8:
	// cmplw cr6,r28,r19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x8292a044
	if (!ctx.cr6.lt) goto loc_8292A044;
	// lwz r11,1660(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1660);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82929f38
	if (ctx.cr6.eq) goto loc_82929F38;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82929f20
	if (ctx.cr6.eq) goto loc_82929F20;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x82929f54
	if (!ctx.cr6.eq) goto loc_82929F54;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82662c78
	ctx.lr = 0x82929F1C;
	sub_82662C78(ctx, base);
	// b 0x82929f44
	goto loc_82929F44;
loc_82929F20:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82662d68
	ctx.lr = 0x82929F2C;
	sub_82662D68(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// b 0x82929f4c
	goto loc_82929F4C;
loc_82929F38:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82662b90
	ctx.lr = 0x82929F44;
	sub_82662B90(ctx, base);
loc_82929F44:
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_82929F4C:
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 & ctx.r29.u64;
loc_82929F54:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8292a1a8
	if (ctx.cr6.lt) goto loc_8292A1A8;
	// lwz r11,1660(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1660);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82929f78
	if (ctx.cr6.eq) goto loc_82929F78;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82929ffc
	if (ctx.cr6.eq) goto loc_82929FFC;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x82929fb4
	if (!ctx.cr6.eq) goto loc_82929FB4;
loc_82929F78:
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// bl 0x82928110
	ctx.lr = 0x82929FB0;
	sub_82928110(ctx, base);
loc_82929FB0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82929FB4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8292a1a8
	if (ctx.cr6.lt) goto loc_8292A1A8;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82929fd0
	if (ctx.cr6.eq) goto loc_82929FD0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8266eed8
	ctx.lr = 0x82929FCC;
	sub_8266EED8(ctx, base);
	// li r15,0
	ctx.r15.s64 = 0;
loc_82929FD0:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82929fe4
	if (ctx.cr6.eq) goto loc_82929FE4;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8266eed8
	ctx.lr = 0x82929FE0;
	sub_8266EED8(ctx, base);
	// li r16,0
	ctx.r16.s64 = 0;
loc_82929FE4:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8292a044
	if (!ctx.cr6.lt) goto loc_8292A044;
	// lwz r31,76(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// b 0x82929ee8
	goto loc_82929EE8;
loc_82929FFC:
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// stw r18,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r18.u32);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x829287e8
	ctx.lr = 0x8292A040;
	sub_829287E8(ctx, base);
	// b 0x82929fb0
	goto loc_82929FB0;
loc_8292A044:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x8292a150
	if (!ctx.cr6.eq) goto loc_8292A150;
	// b 0x8292a148
	goto loc_8292A148;
loc_8292A050:
	// lwz r11,1660(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1660);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8292a098
	if (ctx.cr6.eq) goto loc_8292A098;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x8292a080
	if (ctx.cr6.eq) goto loc_8292A080;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x8292a0b4
	if (!ctx.cr6.eq) goto loc_8292A0B4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82662c78
	ctx.lr = 0x8292A07C;
	sub_82662C78(ctx, base);
	// b 0x8292a0a4
	goto loc_8292A0A4;
loc_8292A080:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82662d68
	ctx.lr = 0x8292A08C;
	sub_82662D68(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// b 0x8292a0ac
	goto loc_8292A0AC;
loc_8292A098:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82662b90
	ctx.lr = 0x8292A0A4;
	sub_82662B90(ctx, base);
loc_8292A0A4:
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_8292A0AC:
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 & ctx.r29.u64;
loc_8292A0B4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8292a1a8
	if (ctx.cr6.lt) goto loc_8292A1A8;
	// lwz r11,1660(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1660);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8292a0d8
	if (ctx.cr6.eq) goto loc_8292A0D8;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x8292a1dc
	if (ctx.cr6.eq) goto loc_8292A1DC;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x8292a114
	if (!ctx.cr6.eq) goto loc_8292A114;
loc_8292A0D8:
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// bl 0x82928110
	ctx.lr = 0x8292A110;
	sub_82928110(ctx, base);
loc_8292A110:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8292A114:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8292a1a8
	if (ctx.cr6.lt) goto loc_8292A1A8;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8292a130
	if (ctx.cr6.eq) goto loc_8292A130;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8266eed8
	ctx.lr = 0x8292A12C;
	sub_8266EED8(ctx, base);
	// li r15,0
	ctx.r15.s64 = 0;
loc_8292A130:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8292a144
	if (ctx.cr6.eq) goto loc_8292A144;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8266eed8
	ctx.lr = 0x8292A140;
	sub_8266EED8(ctx, base);
	// li r16,0
	ctx.r16.s64 = 0;
loc_8292A144:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_8292A148:
	// cmplw cr6,r28,r19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x8292a050
	if (ctx.cr6.lt) goto loc_8292A050;
loc_8292A150:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r21,80(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 80);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82929ed4
	if (ctx.cr6.lt) goto loc_82929ED4;
loc_8292A164:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x8292a198
	if (ctx.cr6.eq) goto loc_8292A198;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x8292a198
	if (!ctx.cr6.lt) goto loc_8292A198;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r6,1628(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1628);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x82929628
	ctx.lr = 0x8292A190;
	sub_82929628(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8292a1a8
	if (ctx.cr0.lt) goto loc_8292A1A8;
loc_8292A198:
	// lwz r11,1668(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1668);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// li r17,0
	ctx.r17.s64 = 0;
loc_8292A1A8:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8292a1b8
	if (ctx.cr6.eq) goto loc_8292A1B8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8266eed8
	ctx.lr = 0x8292A1B8;
	sub_8266EED8(ctx, base);
loc_8292A1B8:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8292a1c8
	if (ctx.cr6.eq) goto loc_8292A1C8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8266eed8
	ctx.lr = 0x8292A1C8;
	sub_8266EED8(ctx, base);
loc_8292A1C8:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82929ae0
	if (ctx.cr6.eq) goto loc_82929AE0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8266eed8
	ctx.lr = 0x8292A1D8;
	sub_8266EED8(ctx, base);
	// b 0x82929ae0
	goto loc_82929AE0;
loc_8292A1DC:
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r18,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r18.u32);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// bl 0x829287e8
	ctx.lr = 0x8292A220;
	sub_829287E8(ctx, base);
	// b 0x8292a110
	goto loc_8292A110;
}

__attribute__((alias("__imp__sub_8292A224"))) PPC_WEAK_FUNC(sub_8292A224);
PPC_FUNC_IMPL(__imp__sub_8292A224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292A228"))) PPC_WEAK_FUNC(sub_8292A228);
PPC_FUNC_IMPL(__imp__sub_8292A228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8292A230;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,356(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r30,348(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r29,340(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r27,332(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// li r28,3
	ctx.r28.s64 = 3;
	// lwz r26,324(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r25,316(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r24,308(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82929a50
	ctx.lr = 0x8292A28C;
	sub_82929A50(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292A294"))) PPC_WEAK_FUNC(sub_8292A294);
PPC_FUNC_IMPL(__imp__sub_8292A294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292A298"))) PPC_WEAK_FUNC(sub_8292A298);
PPC_FUNC_IMPL(__imp__sub_8292A298) {
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
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82929a50
	ctx.lr = 0x8292A2F4;
	sub_82929A50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292A304"))) PPC_WEAK_FUNC(sub_8292A304);
PPC_FUNC_IMPL(__imp__sub_8292A304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292A308"))) PPC_WEAK_FUNC(sub_8292A308);
PPC_FUNC_IMPL(__imp__sub_8292A308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r10,r4,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r4.s64;
	// subf r11,r6,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r6.s64;
loc_8292A31C:
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lhzux r8,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r5,r1,-12
	ctx.r5.s64 = ctx.r1.s64 + -12;
	// lvsl v0,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// sth r8,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r8.u16);
	// lvx128 v63,r0,r7
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vsldoi v0,v0,v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vupkd3d128 v63,v63,12
	__builtin_trap();
	// vspltw128 v63,v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// stvewx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfsux f0,r10,r4
	temp.f32 = float(ctx.f0.f64);
	ea = ctx.r10.u32 + ctx.r4.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8292a31c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8292A31C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292A35C"))) PPC_WEAK_FUNC(sub_8292A35C);
PPC_FUNC_IMPL(__imp__sub_8292A35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292A360"))) PPC_WEAK_FUNC(sub_8292A360);
PPC_FUNC_IMPL(__imp__sub_8292A360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r10,r4,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r4.s64;
	// subf r11,r6,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r6.s64;
loc_8292A374:
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// lfsux f0,r11,r6
	ctx.fpscr.disableFlushMode();
	ea = ctx.r11.u32 + ctx.r6.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lvsl v0,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v63,r0,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vor128 v0,v63,v63
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vpkd3d128 v0,v63,5,2,2
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[4] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[5] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[6] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[7] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	// vsplth v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_set1_epi16(short(0xF0E))));
	// stvehx v0,r0,r7
	ea = (ctx.r7.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v0.u16[7 - ((ea & 0xF) >> 1)]);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sthux r9,r10,r4
	ea = ctx.r10.u32 + ctx.r4.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8292a374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8292A374;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292A3B4"))) PPC_WEAK_FUNC(sub_8292A3B4);
PPC_FUNC_IMPL(__imp__sub_8292A3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292A3B8"))) PPC_WEAK_FUNC(sub_8292A3B8);
PPC_FUNC_IMPL(__imp__sub_8292A3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// vspltisw128 v60,1
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_set1_epi32(int(0x1)));
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// vspltisw128 v61,-9
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_set1_epi32(int(0xFFFFFFF7)));
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// addi r11,r1,16
	ctx.r11.s64 = ctx.r1.s64 + 16;
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// addi r9,r1,48
	ctx.r9.s64 = ctx.r1.s64 + 48;
	// vspltisw128 v63,-1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// vslw128 v57,v60,v61
	ctx.v57.u32[0] = ctx.v60.u32[0] << (ctx.v61.u8[0] & 0x1F);
	ctx.v57.u32[1] = ctx.v60.u32[1] << (ctx.v61.u8[4] & 0x1F);
	ctx.v57.u32[2] = ctx.v60.u32[2] << (ctx.v61.u8[8] & 0x1F);
	ctx.v57.u32[3] = ctx.v60.u32[3] << (ctx.v61.u8[12] & 0x1F);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// vcsxwfp128 v59,v60,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)));
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// lvx128 v61,r0,r9
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v58,v63,0
	_mm_store_ps(ctx.v58.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,12
	ctx.r7.s64 = 12;
	// vcsxwfp128 v25,v60,1
	_mm_store_ps(ctx.v25.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vcsxwfp128 v60,v60,1
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v62,r0,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw128 v10,v62,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xAA));
	// vpermwi128 v62,v62,32
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xDF));
	// lvsl v13,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vsldoi128 v11,v58,v59,8
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v59.u8), 8));
	// vor128 v55,v13,v13
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vspltw128 v9,v61,2
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x55));
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vspltw128 v56,v63,0
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vor128 v54,v0,v0
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vrlimi128 v62,v61,3,2
	_mm_store_ps(ctx.v62.f32, _mm_blend_ps(_mm_load_ps(ctx.v62.f32), _mm_permute_ps(_mm_load_ps(ctx.v61.f32), 78), 3));
	// vsldoi128 v4,v58,v59,12
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v59.u8), 4));
	// vpermwi128 v61,v11,195
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x3C));
	// vor128 v53,v0,v0
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vpermwi128 v13,v11,51
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xCC));
	// vrlimi128 v54,v55,8,2
	_mm_store_ps(ctx.v54.f32, _mm_blend_ps(_mm_load_ps(ctx.v54.f32), _mm_permute_ps(_mm_load_ps(ctx.v55.f32), 78), 8));
	// vspltw128 v27,v55,2
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0x55));
	// vspltw128 v2,v55,1
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0xAA));
	// vmulfp128 v12,v61,v56
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v56.f32)));
	// vrlimi128 v53,v55,8,1
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v55.f32), 147), 8));
	// vpermwi128 v28,v11,243
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xC));
	// vpermwi128 v26,v54,225
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0x1E));
	// vpermwi128 v7,v0,180
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x4B));
	// vrlimi128 v0,v55,8,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v55.f32), 228), 8));
	// vpermwi128 v30,v53,75
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), 0xB4));
	// vpermwi128 v52,v63,67
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xBC));
	// vmaddfp v13,v13,v10,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v11,v9,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v11,v11,207
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x30));
	// vpermwi128 v61,v13,107
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x94));
	// vaddfp128 v59,v13,v59
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v59.f32)));
	// vpermwi128 v56,v13,7
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xF8));
	// vrlimi128 v61,v57,1,0
	_mm_store_ps(ctx.v61.f32, _mm_blend_ps(_mm_load_ps(ctx.v61.f32), _mm_permute_ps(_mm_load_ps(ctx.v57.f32), 228), 1));
	// vcmpgefp128 v61,v56,v61
	_mm_store_ps(ctx.v61.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v61.f32)));
	// vrsqrtefp128 v13,v59
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v59.f32))));
	// vmulfp128 v5,v59,v25
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v25.f32)));
	// vspltw128 v10,v61,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x55));
	// vspltw128 v12,v61,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vspltw128 v9,v61,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x0));
	// vspltw128 v8,v61,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xAA));
	// vmulfp128 v6,v13,v13
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vsel v1,v27,v2,v10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v27.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v2.u8))));
	// vsel v3,v26,v30,v10
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v26.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v30.u8))));
	// vcmpeqfp128 v61,v13,v13
	_mm_store_ps(ctx.v61.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vsel v10,v4,v28,v10
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v28.u8))));
	// vsel v2,v1,v27,v12
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v1.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v27.u8))));
	// vsel v1,v3,v26,v12
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v26.u8))));
	// vsel v3,v10,v4,v12
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v4.u8))));
	// vor128 v57,v2,v2
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// vor128 v56,v1,v1
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v54,v3,v3
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// vnmsubfp v3,v5,v6,v25
	_mm_store_ps(ctx.v3.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v25.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v6,v57,v57
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v57.u8));
	// vor128 v5,v54,v54
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v54.u8));
	// vor128 v4,v54,v54
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v54.u8));
	// vmaddfp v13,v13,v3,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v13.f32)));
	// vor128 v54,v13,v13
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vspltw128 v13,v55,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0xFF));
	// vsel v1,v5,v11,v8
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vcmpeqfp128 v53,v3,v3
	_mm_store_ps(ctx.v53.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v3.f32)));
	// vor128 v10,v58,v58
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// vpermwi128 v58,v62,48
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xCF));
	// vrlimi128 v52,v62,6,0
	_mm_store_ps(ctx.v52.f32, _mm_blend_ps(_mm_load_ps(ctx.v52.f32), _mm_permute_ps(_mm_load_ps(ctx.v62.f32), 228), 6));
	// vmulfp128 v62,v54,v60
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v60.f32)));
	// vsel v2,v6,v13,v8
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmulfp128 v11,v59,v54
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v54.f32)));
	// vsel v3,v4,v1,v12
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// vspltw128 v13,v55,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0x0));
	// vrlimi128 v58,v63,3,0
	_mm_store_ps(ctx.v58.f32, _mm_blend_ps(_mm_load_ps(ctx.v58.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 3));
	// vpermwi128 v6,v0,30
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xE1));
	// vor128 v63,v52,v52
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v52.u8));
	// vor128 v5,v57,v57
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v57.u8));
	// vsel v1,v3,v10,v9
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vor128 v0,v59,v59
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// vsel v4,v5,v2,v12
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v2.u8))));
	// vmaddfp128 v63,v1,v58,v63
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v58.f32)), _mm_load_ps(ctx.v63.f32)));
	// vor128 v5,v56,v56
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v56.u8));
	// vsel v2,v4,v13,v9
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vxor128 v4,v53,v61
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vsel v10,v5,v6,v8
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vor128 v13,v56,v56
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v56.u8));
	// vperm128 v62,v62,v62,v2
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vsel v8,v11,v0,v4
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vsel v0,v13,v10,v12
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vor128 v3,v63,v63
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vmulfp128 v63,v8,v60
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v60.f32)));
	// vsel v6,v0,v7,v9
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vmulfp128 v62,v3,v62
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v62.f32)));
	// vperm128 v1,v63,v62,v6
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292A57C"))) PPC_WEAK_FUNC(sub_8292A57C);
PPC_FUNC_IMPL(__imp__sub_8292A57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292A580"))) PPC_WEAK_FUNC(sub_8292A580);
PPC_FUNC_IMPL(__imp__sub_8292A580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
loc_8292A594:
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// lfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lvsl v0,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v63,r0,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vor128 v0,v63,v63
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vpkd3d128 v0,v63,5,2,2
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[4] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[5] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[6] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[7] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	// vsplth v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_set1_epi16(short(0xF0E))));
	// stvehx v0,r0,r7
	ea = (ctx.r7.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v0.u16[7 - ((ea & 0xF) >> 1)]);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8292a594
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8292A594;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292A5D4"))) PPC_WEAK_FUNC(sub_8292A5D4);
PPC_FUNC_IMPL(__imp__sub_8292A5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292A5D8"))) PPC_WEAK_FUNC(sub_8292A5D8);
PPC_FUNC_IMPL(__imp__sub_8292A5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
loc_8292A5EC:
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lhzu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r6,r1,-12
	ctx.r6.s64 = ctx.r1.s64 + -12;
	// lvsl v0,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// sth r8,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r8.u16);
	// lvx128 v63,r0,r7
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vsldoi v0,v0,v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vupkd3d128 v63,v63,12
	__builtin_trap();
	// vspltw128 v63,v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// stvewx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8292a5ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8292A5EC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292A62C"))) PPC_WEAK_FUNC(sub_8292A62C);
PPC_FUNC_IMPL(__imp__sub_8292A62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292A630"))) PPC_WEAK_FUNC(sub_8292A630);
PPC_FUNC_IMPL(__imp__sub_8292A630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8292A638;
	__savegprlr_26(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v61,r0,r4
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v60,r0,r5
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r8,63
	ctx.r8.s64 = 63;
	// lvsl v7,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsr v6,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r7,4
	ctx.r7.s64 = 4;
	// lvx128 v63,r4,r9
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r6,8
	ctx.r6.s64 = 8;
	// lvx128 v62,r4,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r31,12
	ctx.r31.s64 = 12;
	// vperm128 v59,v61,v63,v0
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v61,r5,r9
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vperm128 v58,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v63,r4,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v57,r4,r8
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vperm128 v56,v60,v61,v7
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v62,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v60,r5,r10
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor128 v55,v59,v59
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// vperm128 v63,v63,v57,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vspltw128 v54,v58,0
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// lvx128 v59,r5,r11
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v13,v61,v60,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v61,r5,r8
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw128 v53,v62,0
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// li r8,20
	ctx.r8.s64 = 20;
	// vspltw128 v57,v55,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0xFF));
	// li r5,24
	ctx.r5.s64 = 24;
	// vmulfp128 v28,v54,v56
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v56.f32)));
	// vspltw128 v31,v55,1
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0xAA));
	// vspltw128 v29,v58,1
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xAA));
	// li r4,28
	ctx.r4.s64 = 28;
	// vmulfp128 v26,v53,v56
	_mm_store_ps(ctx.v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v56.f32)));
	// vperm128 v12,v60,v59,v7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmulfp128 v30,v57,v56
	_mm_store_ps(ctx.v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v56.f32)));
	// vspltw128 v57,v63,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v27,v62,1
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xAA));
	// li r30,36
	ctx.r30.s64 = 36;
	// vspltw128 v3,v55,2
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0x55));
	// li r29,40
	ctx.r29.s64 = 40;
	// vspltw128 v1,v63,1
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// li r28,44
	ctx.r28.s64 = 44;
	// vmulfp128 v2,v57,v56
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v56.f32)));
	// vspltw128 v4,v58,2
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0x55));
	// vperm128 v0,v59,v61,v7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r27,52
	ctx.r27.s64 = 52;
	// vspltw128 v5,v62,2
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x55));
	// li r26,56
	ctx.r26.s64 = 56;
	// vspltw128 v11,v55,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0x0));
	// vspltw128 v7,v63,2
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v8,v58,3
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0x0));
	// vspltw128 v9,v62,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x0));
	// vspltw128 v10,v63,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x0));
	// vmaddfp v31,v31,v13,v30
	_mm_store_ps(ctx.v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v30.f32)));
	// vmaddfp v30,v29,v13,v28
	_mm_store_ps(ctx.v30.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v28.f32)));
	// vmaddfp v29,v27,v13,v26
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v26.f32)));
	// vmaddfp v2,v1,v13,v2
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v2.f32)));
	// vmaddfp v3,v3,v12,v31
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v31.f32)));
	// vmaddfp v4,v4,v12,v30
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v30.f32)));
	// vmaddfp v13,v5,v12,v29
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v29.f32)));
	// vmaddfp v7,v7,v12,v2
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v2.f32)));
	// vmaddfp v11,v11,v0,v3
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v12,v8,v0,v4
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v13,v9,v0,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v10,v0,v7
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v7.f32)));
	// vperm128 v63,v11,v11,v6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v62,v12,v12,v6
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v61,v13,v13,v6
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v60,v0,v0,v6
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// stvewx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r7,60
	ctx.r7.s64 = 60;
	// stvewx128 v63,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r31
	ea = (ctx.r3.u32 + ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r30
	ea = (ctx.r3.u32 + ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r29
	ea = (ctx.r3.u32 + ctx.r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r28
	ea = (ctx.r3.u32 + ctx.r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r27
	ea = (ctx.r3.u32 + ctx.r27.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r26
	ea = (ctx.r3.u32 + ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292A7A4"))) PPC_WEAK_FUNC(sub_8292A7A4);
PPC_FUNC_IMPL(__imp__sub_8292A7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292A7A8"))) PPC_WEAK_FUNC(sub_8292A7A8);
PPC_FUNC_IMPL(__imp__sub_8292A7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8292A7B0;
	__savegprlr_25(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v60,r0,r4
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r11,48
	ctx.r11.s64 = 48;
	// lvsr v7,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r8,63
	ctx.r8.s64 = 63;
	// li r7,4
	ctx.r7.s64 = 4;
	// lvx128 v63,r4,r9
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r6,8
	ctx.r6.s64 = 8;
	// lvx128 v62,r4,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r5,12
	ctx.r5.s64 = 12;
	// lvx128 v61,r4,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v60,v60,v63,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v59,r4,r8
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vperm128 v63,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v62,v62,v61,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r8,20
	ctx.r8.s64 = 20;
	// vperm128 v61,v61,v59,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r4,24
	ctx.r4.s64 = 24;
	// li r31,28
	ctx.r31.s64 = 28;
	// li r30,36
	ctx.r30.s64 = 36;
	// vmrghw128 v59,v60,v62
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// li r29,40
	ctx.r29.s64 = 40;
	// vmrghw128 v58,v63,v61
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// li r28,44
	ctx.r28.s64 = 44;
	// vmrglw128 v57,v63,v61
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// li r27,52
	ctx.r27.s64 = 52;
	// vmrglw128 v60,v60,v62
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// li r26,56
	ctx.r26.s64 = 56;
	// li r25,60
	ctx.r25.s64 = 60;
	// vmrghw128 v63,v59,v58
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrglw128 v62,v59,v58
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v61,v60,v57
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrglw128 v60,v60,v57
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vperm128 v63,v63,v63,v7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v62,v62,v62,v7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v61,v61,v61,v7
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v60,v60,v60,v7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvewx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r31
	ea = (ctx.r3.u32 + ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r30
	ea = (ctx.r3.u32 + ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r29
	ea = (ctx.r3.u32 + ctx.r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r28
	ea = (ctx.r3.u32 + ctx.r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r27
	ea = (ctx.r3.u32 + ctx.r27.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r26
	ea = (ctx.r3.u32 + ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r25
	ea = (ctx.r3.u32 + ctx.r25.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292A890"))) PPC_WEAK_FUNC(sub_8292A890);
PPC_FUNC_IMPL(__imp__sub_8292A890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82fa8cf0
	ctx.lr = 0x8292A8A0;
	__savefpr_14(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f12,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fneg f13,f12
	ctx.f13.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f9,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fneg f11,f10
	ctx.f11.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f12,-320(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -320, temp.u32);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// stfs f10,-288(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// lfs f0,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f9,-292(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -292, temp.u32);
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f9,8(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f13,12(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// ble cr6,0x8292b09c
	if (!ctx.cr6.gt) goto loc_8292B09C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmuls f13,f12,f12
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// fmuls f11,f9,f9
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f0,f10,f10
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stfs f11,-256(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -256, temp.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfd f8,-23688(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + -23688);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f6,-23544(r10)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r10.u32 + -23544);
	// fsqrts f5,f8
	ctx.f5.f64 = double(float(sqrt(ctx.f8.f64)));
	// lfs f31,11556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11556);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// lfs f8,11976(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11976);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-23552(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23552);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,11508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11508);
	ctx.f4.f64 = double(temp.f32);
	// stfs f31,-324(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + -324, temp.u32);
	// fsqrts f6,f6
	ctx.f6.f64 = double(float(sqrt(ctx.f6.f64)));
	// fmuls f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fnmsubs f3,f13,f31,f11
	ctx.f3.f64 = double(float(-(ctx.f13.f64 * ctx.f31.f64 - ctx.f11.f64)));
	// fmuls f2,f6,f9
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f1,f6,f10
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f30,f0,f6
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fnmsubs f3,f0,f31,f3
	ctx.f3.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f3.f64)));
	// stfs f3,24(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// fmuls f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f3,f2,f10
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmuls f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f30,f30,f8
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// fmuls f3,f3,f7
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// stfs f3,20(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// fmuls f4,f1,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// stfs f4,16(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// fmuls f7,f2,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// stfs f7,28(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// fmsubs f8,f6,f8,f30
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 - ctx.f30.f64));
	// stfs f8,32(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// ble cr6,0x8292b09c
	if (!ctx.cr6.gt) goto loc_8292B09C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmuls f28,f0,f9
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f27,f13,f9
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfd f8,-23696(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + -23696);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f7,11528(r10)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11528);
	// fsqrts f26,f8
	ctx.f26.f64 = double(float(sqrt(ctx.f8.f64)));
	// lfd f30,-23560(r8)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r8.u32 + -23560);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lfd f6,-23568(r9)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r9.u32 + -23568);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfd f29,-23576(r7)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r7.u32 + -23576);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f8,-23580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// lfs f1,-23584(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23584);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-28496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28496);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,17892(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17892);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,-23588(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23588);
	ctx.f4.f64 = double(temp.f32);
	// fsqrts f7,f7
	ctx.f7.f64 = double(float(sqrt(ctx.f7.f64)));
	// fsqrts f30,f30
	ctx.f30.f64 = double(float(sqrt(ctx.f30.f64)));
	// fsqrts f6,f6
	ctx.f6.f64 = double(float(sqrt(ctx.f6.f64)));
	// fmuls f23,f0,f26
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmuls f22,f13,f26
	ctx.f22.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// fmuls f30,f30,f7
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f7.f64));
	// fmuls f25,f6,f26
	ctx.f25.f64 = double(float(ctx.f6.f64 * ctx.f26.f64));
	// fmuls f24,f26,f12
	ctx.f24.f64 = double(float(ctx.f26.f64 * ctx.f12.f64));
	// fsqrts f6,f29
	ctx.f6.f64 = double(float(sqrt(ctx.f29.f64)));
	// fmuls f26,f26,f10
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f10.f64));
	// fmuls f29,f23,f10
	ctx.f29.f64 = double(float(ctx.f23.f64 * ctx.f10.f64));
	// fmuls f23,f22,f12
	ctx.f23.f64 = double(float(ctx.f22.f64 * ctx.f12.f64));
	// fmuls f21,f11,f30
	ctx.f21.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f22,f25,f9
	ctx.f22.f64 = double(float(ctx.f25.f64 * ctx.f9.f64));
	// fmuls f20,f24,f11
	ctx.f20.f64 = double(float(ctx.f24.f64 * ctx.f11.f64));
	// fadds f18,f27,f28
	ctx.f18.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// fmuls f28,f28,f25
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f25.f64));
	// fmuls f24,f24,f0
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// fmuls f27,f27,f25
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f25.f64));
	// fmuls f19,f13,f26
	ctx.f19.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// fmuls f29,f29,f8
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// fmuls f23,f23,f8
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f8.f64));
	// fmuls f26,f21,f26
	ctx.f26.f64 = double(float(ctx.f21.f64 * ctx.f26.f64));
	// fmuls f22,f22,f10
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f10.f64));
	// fmuls f21,f20,f30
	ctx.f21.f64 = double(float(ctx.f20.f64 * ctx.f30.f64));
	// fmuls f17,f6,f7
	ctx.f17.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f28,f28,f2
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f2.f64));
	// fmuls f25,f18,f3
	ctx.f25.f64 = double(float(ctx.f18.f64 * ctx.f3.f64));
	// fnmsubs f20,f19,f1,f29
	ctx.f20.f64 = double(float(-(ctx.f19.f64 * ctx.f1.f64 - ctx.f29.f64)));
	// fmadds f29,f19,f8,f29
	ctx.f29.f64 = double(float(ctx.f19.f64 * ctx.f8.f64 + ctx.f29.f64));
	// fmadds f8,f24,f8,f23
	ctx.f8.f64 = double(float(ctx.f24.f64 * ctx.f8.f64 + ctx.f23.f64));
	// fmuls f22,f22,f12
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f12.f64));
	// fmuls f21,f21,f4
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f4.f64));
	// fmuls f26,f26,f4
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f4.f64));
	// fmsubs f1,f24,f1,f23
	ctx.f1.f64 = double(float(ctx.f24.f64 * ctx.f1.f64 - ctx.f23.f64));
	// fmsubs f2,f27,f2,f28
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f2.f64 - ctx.f28.f64));
	// stfs f2,56(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 56, temp.u32);
	// fmsubs f25,f11,f9,f25
	ctx.f25.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 - ctx.f25.f64));
	// stfs f25,48(r5)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// fmuls f2,f20,f17
	ctx.f2.f64 = double(float(ctx.f20.f64 * ctx.f17.f64));
	// stfs f2,36(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// fmuls f4,f22,f4
	ctx.f4.f64 = double(float(ctx.f22.f64 * ctx.f4.f64));
	// stfs f4,40(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// fmsubs f8,f8,f30,f21
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 - ctx.f21.f64));
	// stfs f8,52(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// fmsubs f4,f29,f30,f26
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f30.f64 - ctx.f26.f64));
	// stfs f4,44(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// fmuls f8,f1,f17
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f17.f64));
	// stfs f8,60(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 60, temp.u32);
	// ble cr6,0x8292b09c
	if (!ctx.cr6.gt) goto loc_8292B09C;
	// fmuls f2,f11,f13
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// fmuls f1,f11,f5
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f23,f0,f13
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmuls f28,f0,f10
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f26,f13,f9
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfd f9,-200(r1)
	PPC_STORE_U64(ctx.r1.u32 + -200, ctx.f9.u64);
	// lfs f4,-16424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16424);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f29,f13,f12
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f22,-23592(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23592);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f27,f5,f12
	ctx.f27.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f22,-328(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -328, temp.u32);
	// fmuls f30,f5,f7
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// lfs f8,11968(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11968);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f17,f11,f0
	ctx.f17.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f24,f11,f9
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f25,11504(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11504);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f2,f2,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// stfs f25,-336(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -336, temp.u32);
	// fmuls f22,f0,f1
	ctx.f22.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f4,-332(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -332, temp.u32);
	// fmuls f1,f13,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfd f0,-184(r1)
	PPC_STORE_U64(ctx.r1.u32 + -184, ctx.f0.u64);
	// fmuls f19,f28,f6
	ctx.f19.f64 = double(float(ctx.f28.f64 * ctx.f6.f64));
	// stfd f13,-272(r1)
	PPC_STORE_U64(ctx.r1.u32 + -272, ctx.f13.u64);
	// fmuls f26,f26,f10
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f10.f64));
	// fmuls f20,f5,f29
	ctx.f20.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// fmuls f18,f27,f28
	ctx.f18.f64 = double(float(ctx.f27.f64 * ctx.f28.f64));
	// fmuls f16,f29,f6
	ctx.f16.f64 = double(float(ctx.f29.f64 * ctx.f6.f64));
	// fmuls f28,f28,f9
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f9.f64));
	// fmuls f24,f24,f30
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f30.f64));
	// fmsubs f2,f23,f8,f2
	ctx.f2.f64 = double(float(ctx.f23.f64 * ctx.f8.f64 - ctx.f2.f64));
	// fmuls f22,f22,f3
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f3.f64));
	// fmuls f27,f11,f27
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// fmuls f19,f19,f12
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f12.f64));
	// fmuls f15,f26,f8
	ctx.f15.f64 = double(float(ctx.f26.f64 * ctx.f8.f64));
	// fmuls f26,f30,f26
	ctx.f26.f64 = double(float(ctx.f30.f64 * ctx.f26.f64));
	// fmadds f20,f20,f10,f18
	ctx.f20.f64 = double(float(ctx.f20.f64 * ctx.f10.f64 + ctx.f18.f64));
	// fmuls f25,f0,f0
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f21,f13,f13
	ctx.f21.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f18,f24,f10
	ctx.f18.f64 = double(float(ctx.f24.f64 * ctx.f10.f64));
	// fnmsubs f2,f17,f4,f2
	ctx.f2.f64 = double(float(-(ctx.f17.f64 * ctx.f4.f64 - ctx.f2.f64)));
	// lfs f17,-328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -328);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f4,f0,f9
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f4,-328(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -328, temp.u32);
	// fmsubs f1,f1,f3,f22
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 - ctx.f22.f64));
	// lfs f14,-336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -336);
	ctx.f14.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f0,-332(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -332);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f19,f31
	ctx.f31.f64 = double(float(ctx.f19.f64 * ctx.f31.f64));
	// fmuls f16,f16,f10
	ctx.f16.f64 = double(float(ctx.f16.f64 * ctx.f10.f64));
	// fmsubs f19,f28,f14,f15
	ctx.f19.f64 = double(float(ctx.f28.f64 * ctx.f14.f64 - ctx.f15.f64));
	// fmuls f22,f7,f6
	ctx.f22.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f27,f27,f10
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f10.f64));
	// fmsubs f26,f26,f8,f18
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f8.f64 - ctx.f18.f64));
	// fmuls f28,f30,f28
	ctx.f28.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// fmuls f29,f29,f9
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f9.f64));
	// fmr f4,f14
	ctx.f4.f64 = ctx.f14.f64;
	// fmuls f20,f20,f3
	ctx.f20.f64 = double(float(ctx.f20.f64 * ctx.f3.f64));
	// fadds f9,f21,f25
	ctx.f9.f64 = double(float(ctx.f21.f64 + ctx.f25.f64));
	// fmsubs f3,f16,f3,f31
	ctx.f3.f64 = double(float(ctx.f16.f64 * ctx.f3.f64 - ctx.f31.f64));
	// stfs f3,64(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 64, temp.u32);
	// fmr f13,f14
	ctx.f13.f64 = ctx.f14.f64;
	// fmuls f3,f19,f22
	ctx.f3.f64 = double(float(ctx.f19.f64 * ctx.f22.f64));
	// stfs f3,68(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 68, temp.u32);
	// fmuls f14,f21,f5
	ctx.f14.f64 = double(float(ctx.f21.f64 * ctx.f5.f64));
	// fmuls f24,f24,f12
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f12.f64));
	// fmuls f5,f25,f5
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f5.f64));
	// lfs f18,-328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -328);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f15,f29,f30
	ctx.f15.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// fmuls f18,f18,f12
	ctx.f18.f64 = double(float(ctx.f18.f64 * ctx.f12.f64));
	// fmsubs f3,f27,f0,f20
	ctx.f3.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 - ctx.f20.f64));
	// stfs f3,72(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 72, temp.u32);
	// fmadds f3,f28,f8,f26
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f8.f64 + ctx.f26.f64));
	// stfs f3,76(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 76, temp.u32);
	// fmuls f29,f29,f4
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f4.f64));
	// fmadds f2,f9,f17,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f17.f64 + ctx.f2.f64));
	// fmuls f3,f18,f30
	ctx.f3.f64 = double(float(ctx.f18.f64 * ctx.f30.f64));
	// fnmsubs f1,f14,f4,f1
	ctx.f1.f64 = double(float(-(ctx.f14.f64 * ctx.f4.f64 - ctx.f1.f64)));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmsubs f30,f18,f8,f29
	ctx.f30.f64 = double(float(ctx.f18.f64 * ctx.f8.f64 - ctx.f29.f64));
	// lfd f13,-272(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// fmsubs f31,f15,f8,f24
	ctx.f31.f64 = double(float(ctx.f15.f64 * ctx.f8.f64 - ctx.f24.f64));
	// lfd f0,-184(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// fmuls f29,f6,f23
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f23.f64));
	// lfd f9,-200(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// fadds f28,f21,f25
	ctx.f28.f64 = double(float(ctx.f21.f64 + ctx.f25.f64));
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// fmadds f2,f11,f11,f2
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f2.f64));
	// stfs f2,80(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 80, temp.u32);
	// fmadds f5,f5,f4,f1
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f1.f64));
	// stfs f5,88(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 88, temp.u32);
	// fmuls f5,f30,f22
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f22.f64));
	// stfs f5,92(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 92, temp.u32);
	// fmadds f3,f3,f8,f31
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f31.f64));
	// stfs f3,84(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 84, temp.u32);
	// fmuls f8,f29,f8
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// fmuls f5,f28,f6
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f6.f64));
	// lfs f6,21652(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21652);
	ctx.f6.f64 = double(temp.f32);
	// fmsubs f8,f5,f6,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 - ctx.f8.f64));
	// stfs f8,96(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 96, temp.u32);
	// ble cr6,0x8292b09c
	if (!ctx.cr6.gt) goto loc_8292B09C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmuls f31,f0,f0
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// fmuls f30,f0,f10
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// fmuls f29,f13,f13
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f28,f13,f12
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// fmuls f27,f11,f9
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfd f8,-23720(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + -23720);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fsqrts f26,f8
	ctx.f26.f64 = double(float(sqrt(ctx.f8.f64)));
	// lfd f3,-23600(r10)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r10.u32 + -23600);
	// lfd f4,-23608(r9)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r9.u32 + -23608);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f8,-23616(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23616);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,-264(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lfd f2,-23624(r7)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r7.u32 + -23624);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f1,-23628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23628);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f8,-23632(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23632);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f8,-284(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -284, temp.u32);
	// lfd f6,-23640(r9)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r9.u32 + -23640);
	// stfd f6,-272(r1)
	PPC_STORE_U64(ctx.r1.u32 + -272, ctx.f6.u64);
	// stfs f1,-300(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -300, temp.u32);
	// lfs f5,-23644(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23644);
	ctx.f5.f64 = double(temp.f32);
	// stfs f30,-260(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// lfs f8,-23652(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23652);
	ctx.f8.f64 = double(temp.f32);
	// lfs f25,-23656(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23656);
	ctx.f25.f64 = double(temp.f32);
	// stfs f25,-308(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -308, temp.u32);
	// lfs f6,-23648(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23648);
	ctx.f6.f64 = double(temp.f32);
	// stfs f8,-328(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -328, temp.u32);
	// stfd f8,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f8.u64);
	// stfs f5,-324(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -324, temp.u32);
	// stfs f6,-280(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// lfs f25,-264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,-284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -284);
	ctx.f24.f64 = double(temp.f32);
	// lfd f23,-272(r1)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// fmuls f22,f31,f10
	ctx.f22.f64 = double(float(ctx.f31.f64 * ctx.f10.f64));
	// fsqrts f3,f3
	ctx.f3.f64 = double(float(sqrt(ctx.f3.f64)));
	// fmuls f21,f30,f26
	ctx.f21.f64 = double(float(ctx.f30.f64 * ctx.f26.f64));
	// fmuls f3,f3,f7
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f20,f22,f26
	ctx.f20.f64 = double(float(ctx.f22.f64 * ctx.f26.f64));
	// fsqrts f4,f4
	ctx.f4.f64 = double(float(sqrt(ctx.f4.f64)));
	// fmuls f19,f13,f21
	ctx.f19.f64 = double(float(ctx.f13.f64 * ctx.f21.f64));
	// fmuls f18,f29,f26
	ctx.f18.f64 = double(float(ctx.f29.f64 * ctx.f26.f64));
	// fmuls f15,f20,f3
	ctx.f15.f64 = double(float(ctx.f20.f64 * ctx.f3.f64));
	// fmuls f16,f30,f9
	ctx.f16.f64 = double(float(ctx.f30.f64 * ctx.f9.f64));
	// fmuls f7,f4,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// fmuls f17,f28,f9
	ctx.f17.f64 = double(float(ctx.f28.f64 * ctx.f9.f64));
	// fsqrts f2,f2
	ctx.f2.f64 = double(float(sqrt(ctx.f2.f64)));
	// fmuls f21,f11,f21
	ctx.f21.f64 = double(float(ctx.f11.f64 * ctx.f21.f64));
	// fmuls f1,f19,f1
	ctx.f1.f64 = double(float(ctx.f19.f64 * ctx.f1.f64));
	// fmuls f18,f18,f10
	ctx.f18.f64 = double(float(ctx.f18.f64 * ctx.f10.f64));
	// fmuls f19,f19,f3
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f3.f64));
	// fmuls f15,f15,f5
	ctx.f15.f64 = double(float(ctx.f15.f64 * ctx.f5.f64));
	// fmuls f16,f16,f12
	ctx.f16.f64 = double(float(ctx.f16.f64 * ctx.f12.f64));
	// fmuls f4,f4,f26
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f26.f64));
	// fmuls f17,f17,f10
	ctx.f17.f64 = double(float(ctx.f17.f64 * ctx.f10.f64));
	// fmuls f30,f27,f10
	ctx.f30.f64 = double(float(ctx.f27.f64 * ctx.f10.f64));
	// fmuls f2,f2,f26
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f26.f64));
	// fmuls f14,f11,f13
	ctx.f14.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f20,f7,f20
	ctx.f20.f64 = double(float(ctx.f7.f64 * ctx.f20.f64));
	// fmadds f1,f21,f8,f1
	ctx.f1.f64 = double(float(ctx.f21.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fmuls f21,f18,f3
	ctx.f21.f64 = double(float(ctx.f18.f64 * ctx.f3.f64));
	// stfs f21,-184(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// fmuls f21,f7,f26
	ctx.f21.f64 = double(float(ctx.f7.f64 * ctx.f26.f64));
	// stfs f21,-312(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + -312, temp.u32);
	// fmsubs f25,f19,f25,f15
	ctx.f25.f64 = double(float(ctx.f19.f64 * ctx.f25.f64 - ctx.f15.f64));
	// stfs f25,-200(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// fmuls f21,f16,f4
	ctx.f21.f64 = double(float(ctx.f16.f64 * ctx.f4.f64));
	// fmuls f8,f17,f8
	ctx.f8.f64 = double(float(ctx.f17.f64 * ctx.f8.f64));
	// fmuls f30,f30,f12
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// fmuls f16,f2,f16
	ctx.f16.f64 = double(float(ctx.f2.f64 * ctx.f16.f64));
	// fmuls f10,f14,f10
	ctx.f10.f64 = double(float(ctx.f14.f64 * ctx.f10.f64));
	// fmuls f25,f20,f24
	ctx.f25.f64 = double(float(ctx.f20.f64 * ctx.f24.f64));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmadds f5,f18,f5,f1
	ctx.f5.f64 = double(float(ctx.f18.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fsqrts f1,f23
	ctx.f1.f64 = double(float(sqrt(ctx.f23.f64)));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f2,-172(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f16,-296(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// stfs f28,-232(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -232, temp.u32);
	// stfs f8,-216(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// lfs f2,-23664(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23664);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f2,-316(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -316, temp.u32);
	// lfs f8,-292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -292);
	ctx.f8.f64 = double(temp.f32);
	// stfs f30,-304(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// lfs f30,-324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -324);
	ctx.f30.f64 = double(temp.f32);
	// stfs f29,-176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// stfs f3,-244(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -244, temp.u32);
	// lfs f15,-300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -300);
	ctx.f15.f64 = double(temp.f32);
	// fmuls f23,f11,f6
	ctx.f23.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f24,f11,f0
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f18,f11,f11
	ctx.f18.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f11,-23660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23660);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-336(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -336, temp.u32);
	// fmuls f11,f27,f13
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// stfs f11,-332(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -332, temp.u32);
	// fmuls f20,f31,f26
	ctx.f20.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// fmuls f1,f1,f26
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f26.f64));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmuls f2,f28,f26
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f26.f64));
	// stfs f2,-236(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -236, temp.u32);
	// fmuls f16,f29,f12
	ctx.f16.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// stfs f18,-272(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fmr f19,f6
	ctx.f19.f64 = ctx.f6.f64;
	// lfs f11,-9860(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9860);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f28,f10,f6
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// stfs f28,-248(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -248, temp.u32);
	// fmuls f14,f13,f0
	ctx.f14.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// fmuls f24,f24,f12
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f12.f64));
	// stfs f16,-220(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// stfs f24,-252(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -252, temp.u32);
	// fmuls f29,f29,f9
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f9.f64));
	// fmuls f3,f31,f8
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f8.f64));
	// stfs f11,-228(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -228, temp.u32);
	// fmuls f20,f20,f12
	ctx.f20.f64 = double(float(ctx.f20.f64 * ctx.f12.f64));
	// stfs f1,-224(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fmuls f28,f1,f31
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fmuls f22,f1,f22
	ctx.f22.f64 = double(float(ctx.f1.f64 * ctx.f22.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f2,-192(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// fmuls f18,f18,f1
	ctx.f18.f64 = double(float(ctx.f18.f64 * ctx.f1.f64));
	// stfs f18,-240(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// lfs f2,-23672(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23672);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f26,f16,f26
	ctx.f26.f64 = double(float(ctx.f16.f64 * ctx.f26.f64));
	// lfs f16,-288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f9,f14,f9
	ctx.f9.f64 = double(float(ctx.f14.f64 * ctx.f9.f64));
	// fmuls f19,f24,f19
	ctx.f19.f64 = double(float(ctx.f24.f64 * ctx.f19.f64));
	// lfs f24,-320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f24.f64 = double(temp.f32);
	// stfs f16,-208(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fmuls f6,f21,f6
	ctx.f6.f64 = double(float(ctx.f21.f64 * ctx.f6.f64));
	// stfs f4,-320(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -320, temp.u32);
	// fmuls f4,f17,f4
	ctx.f4.f64 = double(float(ctx.f17.f64 * ctx.f4.f64));
	// lfs f18,-332(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -332);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f31,f20,f30
	ctx.f31.f64 = double(float(ctx.f20.f64 * ctx.f30.f64));
	// stfs f2,-332(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -332, temp.u32);
	// fmuls f16,f18,f11
	ctx.f16.f64 = double(float(ctx.f18.f64 * ctx.f11.f64));
	// lfs f2,-336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -336);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f12,f28,f12
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f12.f64));
	// fnmsubs f13,f13,f2,f23
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f2.f64 - ctx.f23.f64)));
	// lfs f30,-316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -316);
	ctx.f30.f64 = double(temp.f32);
	// stfs f9,-168(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// fmuls f11,f27,f0
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fnmsubs f2,f0,f2,f23
	ctx.f2.f64 = double(float(-(ctx.f0.f64 * ctx.f2.f64 - ctx.f23.f64)));
	// lfs f14,-308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -308);
	ctx.f14.f64 = double(temp.f32);
	// lfs f1,-328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -328);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f22,f22,f15
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f15.f64));
	// lfs f9,-23668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23668);
	ctx.f9.f64 = double(temp.f32);
	// fmr f0,f15
	ctx.f0.f64 = ctx.f15.f64;
	// lfs f28,-23676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23676);
	ctx.f28.f64 = double(temp.f32);
	// fmsubs f5,f5,f7,f25
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 - ctx.f25.f64));
	// stfs f4,-316(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -316, temp.u32);
	// lfs f25,-304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f27,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f27.f64 = double(temp.f32);
	// fadds f12,f29,f3
	ctx.f12.f64 = double(float(ctx.f29.f64 + ctx.f3.f64));
	// stfs f6,-212(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// fmsubs f6,f25,f14,f27
	ctx.f6.f64 = double(float(ctx.f25.f64 * ctx.f14.f64 - ctx.f27.f64));
	// lfs f27,-296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -296);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f8,-160(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// stfs f9,-304(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// fmuls f9,f27,f8
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f8.f64));
	// lfs f27,-260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f8,f18,f1
	ctx.f8.f64 = double(float(ctx.f18.f64 * ctx.f1.f64));
	// lfs f25,-248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f13,f13,f27,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f25.f64));
	// lfs f18,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f31,f18,f15,f31
	ctx.f31.f64 = double(float(ctx.f18.f64 * ctx.f15.f64 + ctx.f31.f64));
	// lfs f21,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f2,f2,f21,f19
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f21.f64 + ctx.f19.f64));
	// lfs f19,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f19.f64 = double(temp.f32);
	// lfs f4,-312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -312);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,-172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// stfs f5,-312(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -312, temp.u32);
	// fmuls f5,f29,f1
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f1.f64));
	// lfs f27,-168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f27.f64 = double(temp.f32);
	// stfs f28,-296(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// fmuls f28,f26,f7
	ctx.f28.f64 = double(float(ctx.f26.f64 * ctx.f7.f64));
	// fmsubs f30,f27,f30,f16
	ctx.f30.f64 = double(float(ctx.f27.f64 * ctx.f30.f64 - ctx.f16.f64));
	// lfs f25,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f25.f64 = double(temp.f32);
	// lfs f23,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f23.f64 = double(temp.f32);
	// fmsubs f13,f13,f19,f22
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f19.f64 - ctx.f22.f64));
	// lfs f22,-336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -336);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f8,f3,f22,f8
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f22.f64 + ctx.f8.f64));
	// lfs f16,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f31,f31,f7
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f7.f64));
	// lfs f17,-284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -284);
	ctx.f17.f64 = double(temp.f32);
	// fadds f3,f29,f3
	ctx.f3.f64 = double(float(ctx.f29.f64 + ctx.f3.f64));
	// lfs f21,-176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	ctx.f21.f64 = double(temp.f32);
	// fmr f29,f14
	ctx.f29.f64 = ctx.f14.f64;
	// lfs f15,-332(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -332);
	ctx.f15.f64 = double(temp.f32);
	// fmsubs f2,f2,f19,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f19.f64 - ctx.f0.f64));
	// lfs f0,-256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f23,f25,f23
	ctx.f23.f64 = double(float(ctx.f25.f64 * ctx.f23.f64));
	// lfs f14,-288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f25,f25,f24
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f24.f64));
	// fmuls f5,f5,f22
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f22.f64));
	// fmr f24,f22
	ctx.f24.f64 = ctx.f22.f64;
	// lfs f22,-252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f16,f16,f0
	ctx.f16.f64 = double(float(ctx.f16.f64 * ctx.f0.f64));
	// lfs f0,-228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f30,f11,f0,f30
	ctx.f30.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f30.f64)));
	// lfs f0,-280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -280);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f31,f28,f17,f31
	ctx.f31.f64 = double(float(ctx.f28.f64 * ctx.f17.f64 - ctx.f31.f64));
	// lfs f17,-304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f21,f19,f21
	ctx.f21.f64 = double(float(ctx.f19.f64 * ctx.f21.f64));
	// lfs f24,-320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f24.f64 = double(temp.f32);
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// fmuls f4,f22,f4
	ctx.f4.f64 = double(float(ctx.f22.f64 * ctx.f4.f64));
	// lfs f22,-244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -244);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f20,f20,f15
	ctx.f20.f64 = double(float(ctx.f20.f64 * ctx.f15.f64));
	// lfs f15,-220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	ctx.f15.f64 = double(temp.f32);
	// fnmsubs f13,f23,f29,f13
	ctx.f13.f64 = double(float(-(ctx.f23.f64 * ctx.f29.f64 - ctx.f13.f64)));
	// lfs f29,-296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -296);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f19,f15,f19
	ctx.f19.f64 = double(float(ctx.f15.f64 * ctx.f19.f64));
	// lfs f15,-324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -324);
	ctx.f15.f64 = double(temp.f32);
	// fmsubs f8,f8,f1,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 - ctx.f5.f64));
	// lfs f5,-212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f27,f27,f24
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f24.f64));
	// fmadds f12,f12,f17,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f17.f64 + ctx.f30.f64));
	// lfs f30,-184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f26,f26,f22
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f22.f64));
	// fmuls f23,f21,f14
	ctx.f23.f64 = double(float(ctx.f21.f64 * ctx.f14.f64));
	// lfs f21,-264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	ctx.f21.f64 = double(temp.f32);
	// fnmsubs f2,f25,f28,f2
	ctx.f2.f64 = double(float(-(ctx.f25.f64 * ctx.f28.f64 - ctx.f2.f64)));
	// lfs f28,-316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -316);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f4,f4,f0,f31
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f31.f64));
	// lfs f25,-312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -312);
	ctx.f25.f64 = double(temp.f32);
	// lfs f31,-200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f7,f16,f7
	ctx.f7.f64 = double(float(ctx.f16.f64 * ctx.f7.f64));
	// fnmsubs f10,f10,f0,f25
	ctx.f10.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f25.f64)));
	// stfs f10,108(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 108, temp.u32);
	// fmsubs f5,f28,f0,f5
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 - ctx.f5.f64));
	// lfs f0,-300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f3,f24
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f24.f64));
	// lfs f24,-332(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -332);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f29,f27,f29
	ctx.f29.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// lfs f27,-292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -292);
	ctx.f27.f64 = double(temp.f32);
	// fmsubs f21,f18,f21,f20
	ctx.f21.f64 = double(float(ctx.f18.f64 * ctx.f21.f64 - ctx.f20.f64));
	// stfs f5,104(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 104, temp.u32);
	// fmuls f26,f26,f15
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f15.f64));
	// fnmsubs f13,f23,f0,f13
	ctx.f13.f64 = double(float(-(ctx.f23.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f13,116(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 116, temp.u32);
	// fnmsubs f10,f19,f0,f2
	ctx.f10.f64 = double(float(-(ctx.f19.f64 * ctx.f0.f64 - ctx.f2.f64)));
	// lfs f0,-328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -328);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f13,f7,f0,f4
	ctx.f13.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 - ctx.f4.f64)));
	// lfs f7,-272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f7.f64 = double(temp.f32);
	// fnmsubs f11,f11,f0,f8
	ctx.f11.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f8.f64)));
	// lfs f0,-23680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23680);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f7,f27,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f27.f64 + ctx.f12.f64));
	// stfs f12,120(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 120, temp.u32);
	// fnmsubs f8,f30,f24,f31
	ctx.f8.f64 = double(float(-(ctx.f30.f64 * ctx.f24.f64 - ctx.f31.f64)));
	// stfs f8,100(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 100, temp.u32);
	// fmsubs f9,f6,f1,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 - ctx.f9.f64));
	// stfs f9,112(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 112, temp.u32);
	// fmsubs f0,f3,f0,f29
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 - ctx.f29.f64));
	// stfs f10,124(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 124, temp.u32);
	// stfs f11,128(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 128, temp.u32);
	// fmsubs f12,f21,f22,f26
	ctx.f12.f64 = double(float(ctx.f21.f64 * ctx.f22.f64 - ctx.f26.f64));
	// stfs f13,132(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 132, temp.u32);
	// stfs f0,136(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 136, temp.u32);
	// stfs f12,140(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 140, temp.u32);
loc_8292B09C:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82fa8d3c
	ctx.lr = 0x8292B0A4;
	__restfpr_14(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292B0B0"))) PPC_WEAK_FUNC(sub_8292B0B0);
PPC_FUNC_IMPL(__imp__sub_8292B0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x8292B0B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,464(r1)
	PPC_STORE_U64(ctx.r1.u32 + 464, ctx.r5.u64);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// std r6,472(r1)
	PPC_STORE_U64(ctx.r1.u32 + 472, ctx.r6.u64);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// std r7,480(r1)
	PPC_STORE_U64(ctx.r1.u32 + 480, ctx.r7.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r8,488(r1)
	PPC_STORE_U64(ctx.r1.u32 + 488, ctx.r8.u64);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,107
	ctx.r8.s64 = ctx.r1.s64 + 107;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lfs f0,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,91
	ctx.r5.s64 = ctx.r1.s64 + 91;
	// lfs f13,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// li r7,11
	ctx.r7.s64 = 11;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r0,r8
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvx128 v60,r0,r9
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lvx128 v61,r4,r7
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// vperm128 v63,v63,v61,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// lvx128 v61,r0,r5
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lvx128 v59,r0,r6
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vperm128 v61,v59,v61,v6
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vpermwi128 v0,v63,135
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x78));
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// vperm128 v62,v60,v62,v7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmsum3fp128 v60,v61,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// stfs f12,176(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,91
	ctx.r4.s64 = ctx.r1.s64 + 91;
	// vmsum3fp128 v59,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// stfs f11,180(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// addi r24,r1,96
	ctx.r24.s64 = ctx.r1.s64 + 96;
	// stvx128 v60,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v60,v63,99
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x9C));
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// stvx128 v59,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8292b2b8
	if (!ctx.cr6.lt) goto loc_8292B2B8;
	// vpermwi128 v61,v62,135
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x78));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v13,v62,99
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x9C));
	// lvsl v7,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vspltisw128 v62,1
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x1)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v10,v63,99
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x9C));
	// addi r7,r1,91
	ctx.r7.s64 = ctx.r1.s64 + 91;
	// vmulfp128 v12,v60,v61
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v61.f32)));
	// vpermwi128 v60,v63,135
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x78));
	// vspltisw128 v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_set1_epi32(int(0x0)));
	// lvsl v6,r0,r27
	temp.u32 = ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vcsxwfp128 v9,v62,1
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// addi r26,r1,96
	ctx.r26.s64 = ctx.r1.s64 + 96;
	// vnmsubfp v12,v0,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v63,v12,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v62,v12,1
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vspltw128 v59,v12,2
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// stvewx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v62,r0,r5
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v63,v62,v63,v7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmsum3fp128 v63,v63,v63
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v63.f32))));
	// vor128 v11,v63,v63
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vmulfp128 v13,v63,v9
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v9.f32)));
	// vcmpeqfp128 v8,v63,v61
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v9,v13,v12,v9
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v9.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v11,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// stvx128 v13,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v62,r0,r3
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r7
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vperm128 v63,v62,v63,v6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vpermwi128 v62,v63,99
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x9C));
	// vpermwi128 v0,v63,135
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x78));
	// vmulfp128 v13,v62,v60
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32)));
	// vnmsubfp v13,v0,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v63,v13,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vspltw128 v62,v13,1
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// vspltw128 v61,v13,2
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// stvewx128 v63,r0,r26
	ea = (ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r25,r10
	ea = (ctx.r25.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r24,r11
	ea = (ctx.r24.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x8292b3a4
	goto loc_8292B3A4;
loc_8292B2B8:
	// vpermwi128 v62,v61,135
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x78));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v12,v61,99
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x9C));
	// addi r3,r1,91
	ctx.r3.s64 = ctx.r1.s64 + 91;
	// vspltisw128 v61,1
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_set1_epi32(int(0x1)));
	// lvsl v7,r0,r27
	temp.u32 = ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vpermwi128 v13,v63,99
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x9C));
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// vmulfp128 v11,v60,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v62.f32)));
	// vpermwi128 v60,v63,135
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x78));
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// addi r23,r1,96
	ctx.r23.s64 = ctx.r1.s64 + 96;
	// vcsxwfp128 v9,v61,1
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lvsl v6,r0,r26
	temp.u32 = ctx.r26.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vnmsubfp v11,v0,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v63,v11,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vspltw128 v61,v11,1
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xAA));
	// vspltw128 v59,v11,2
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x55));
	// stvewx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v61,r0,r4
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r6
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vperm128 v63,v63,v61,v7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmsum3fp128 v63,v63,v63
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v63.f32))));
	// vor128 v12,v63,v63
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vmulfp128 v10,v63,v9
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v9.f32)));
	// vcmpeqfp128 v8,v63,v62
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v9,v10,v11,v9
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v11,v0,v12,v8
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// stvx128 v11,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v62,r0,r5
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vperm128 v63,v62,v63,v6
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vpermwi128 v62,v63,99
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x9C));
	// vpermwi128 v0,v63,135
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x78));
	// vmulfp128 v12,v62,v60
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32)));
	// vnmsubfp v12,v0,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v63,v12,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v62,v12,1
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vspltw128 v61,v12,2
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// stvewx128 v63,r0,r25
	ea = (ctx.r25.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r24,r10
	ea = (ctx.r24.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r23,r11
	ea = (ctx.r23.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
loc_8292B3A4:
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x8292a890
	ctx.lr = 0x8292B3D8;
	sub_8292A890(ctx, base);
	// lfs f10,464(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f12,11556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfd f0,-23520(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -23520);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f11,-23488(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -23488);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,21500(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21500);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f9,17892(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17892);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_8292B440:
	// lfs f10,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292b47c
	if (ctx.cr6.eq) goto loc_8292B47C;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
loc_8292B468:
	// lfsx f8,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f8,0(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8292b468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8292B468;
loc_8292B47C:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x8292b440
	if (ctx.cr6.lt) goto loc_8292B440;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8292b4e0
	if (!ctx.cr6.lt) goto loc_8292B4E0;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8292B4A0:
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292b4d0
	if (ctx.cr6.eq) goto loc_8292B4D0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// beq 0x8292b4d0
	if (ctx.cr0.eq) goto loc_8292B4D0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8292B4C8:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8292b4c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8292B4C8;
loc_8292B4D0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8292b4a0
	if (ctx.cr6.lt) goto loc_8292B4A0;
loc_8292B4E0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8292b5c0
	if (ctx.cr6.eq) goto loc_8292B5C0;
	// lfs f10,468(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	ctx.f10.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f8,484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// fadds f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fsubs f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_8292B520:
	// lfs f10,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292b55c
	if (ctx.cr6.eq) goto loc_8292B55C;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
loc_8292B548:
	// lfsx f8,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f8,0(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8292b548
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8292B548;
loc_8292B55C:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x8292b520
	if (ctx.cr6.lt) goto loc_8292B520;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8292b5c0
	if (!ctx.cr6.lt) goto loc_8292B5C0;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8292B580:
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292b5b0
	if (ctx.cr6.eq) goto loc_8292B5B0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// beq 0x8292b5b0
	if (ctx.cr0.eq) goto loc_8292B5B0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8292B5A8:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8292b5a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8292B5A8;
loc_8292B5B0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8292b580
	if (ctx.cr6.lt) goto loc_8292B580;
loc_8292B5C0:
	// lwz r6,516(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8292b6a4
	if (ctx.cr6.eq) goto loc_8292B6A4;
	// lfs f10,472(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	ctx.f10.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f8,488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// fadds f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_8292B604:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292b640
	if (ctx.cr6.eq) goto loc_8292B640;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
loc_8292B62C:
	// lfsx f13,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8292b62c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8292B62C;
loc_8292B640:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x8292b604
	if (ctx.cr6.lt) goto loc_8292B604;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8292b6a4
	if (!ctx.cr6.lt) goto loc_8292B6A4;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8292B664:
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292b694
	if (ctx.cr6.eq) goto loc_8292B694;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// beq 0x8292b694
	if (ctx.cr0.eq) goto loc_8292B694;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8292B68C:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8292b68c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8292B68C;
loc_8292B694:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8292b664
	if (ctx.cr6.lt) goto loc_8292B664;
loc_8292B6A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292B6B0"))) PPC_WEAK_FUNC(sub_8292B6B0);
PPC_FUNC_IMPL(__imp__sub_8292B6B0) {
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
	// bl 0x82931a80
	ctx.lr = 0x8292B6C8;
	sub_82931A80(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x829587d0
	ctx.lr = 0x8292B6D0;
	sub_829587D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8292B710"))) PPC_WEAK_FUNC(sub_8292B710);
PPC_FUNC_IMPL(__imp__sub_8292B710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8292B718;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8292B730:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8292b730
	if (!ctx.cr6.eq) goto loc_8292B730;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r27,1
	ctx.r30.s64 = ctx.r27.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82967e08
	ctx.lr = 0x8292B760;
	sub_82967E08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// beq 0x8292b788
	if (ctx.cr0.eq) goto loc_8292B788;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82967e08
	ctx.lr = 0x8292B77C;
	sub_82967E08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// bne 0x8292b794
	if (!ctx.cr0.eq) goto loc_8292B794;
loc_8292B788:
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// b 0x8292b7e0
	goto loc_8292B7E0;
loc_8292B794:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fa5b30
	ctx.lr = 0x8292B7A4;
	sub_82FA5B30(ctx, base);
	// li r4,92
	ctx.r4.s64 = 92;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82fa8c90
	ctx.lr = 0x8292B7B0;
	sub_82FA8C90(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8292b7bc
	if (ctx.cr0.eq) goto loc_8292B7BC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8292B7BC:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stbx r26,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r26.u8);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82fa77c0
	ctx.lr = 0x8292B7D4;
	sub_82FA77C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8292b7e0
	if (ctx.cr6.eq) goto loc_8292B7E0;
	// stb r26,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r26.u8);
loc_8292B7E0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292B7EC"))) PPC_WEAK_FUNC(sub_8292B7EC);
PPC_FUNC_IMPL(__imp__sub_8292B7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292B7F0"))) PPC_WEAK_FUNC(sub_8292B7F0);
PPC_FUNC_IMPL(__imp__sub_8292B7F0) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8292b834
	if (ctx.cr6.eq) goto loc_8292B834;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8292b834
	if (ctx.cr6.eq) goto loc_8292B834;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8292B82C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_8292B834:
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

__attribute__((alias("__imp__sub_8292B848"))) PPC_WEAK_FUNC(sub_8292B848);
PPC_FUNC_IMPL(__imp__sub_8292B848) {
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
	// bl 0x8296bd78
	ctx.lr = 0x8292B864;
	sub_8296BD78(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8292b880
	if (ctx.cr0.lt) goto loc_8292B880;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2264, ctx.r11.u32);
	// bl 0x82967ed0
	ctx.lr = 0x8292B87C;
	sub_82967ED0(ctx, base);
	// stw r3,2268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2268, ctx.r3.u32);
loc_8292B880:
	// stw r30,2260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2260, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8292B89C"))) PPC_WEAK_FUNC(sub_8292B89C);
PPC_FUNC_IMPL(__imp__sub_8292B89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292B8A0"))) PPC_WEAK_FUNC(sub_8292B8A0);
PPC_FUNC_IMPL(__imp__sub_8292B8A0) {
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
	// lwz r11,2264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8292b8d4
	if (ctx.cr6.eq) goto loc_8292B8D4;
	// lwz r3,2268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2268);
	// bl 0x82967ed0
	ctx.lr = 0x8292B8C8;
	sub_82967ED0(ctx, base);
	// bl 0x8296bed0
	ctx.lr = 0x8292B8CC;
	sub_8296BED0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2264, ctx.r11.u32);
loc_8292B8D4:
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

__attribute__((alias("__imp__sub_8292B8E8"))) PPC_WEAK_FUNC(sub_8292B8E8);
PPC_FUNC_IMPL(__imp__sub_8292B8E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8292b8fc
	if (ctx.cr6.eq) goto loc_8292B8FC;
	// lwz r11,2204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2204);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8292B8FC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8292b910
	if (ctx.cr6.eq) goto loc_8292B910;
	// lwz r11,2204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2204);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8292B910:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292B918"))) PPC_WEAK_FUNC(sub_8292B918);
PPC_FUNC_IMPL(__imp__sub_8292B918) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2196);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x8292b92c
	goto loc_8292B92C;
loc_8292B924:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,128(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
loc_8292B92C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8292b924
	if (!ctx.cr6.eq) goto loc_8292B924;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8292b944
	if (ctx.cr6.eq) goto loc_8292B944;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_8292B944:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8292b968
	if (ctx.cr6.eq) goto loc_8292B968;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bge cr6,0x8292b964
	if (!ctx.cr6.lt) goto loc_8292B964;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8292B964:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8292B968:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292B970"))) PPC_WEAK_FUNC(sub_8292B970);
PPC_FUNC_IMPL(__imp__sub_8292B970) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,2204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2204);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82933050
	ctx.lr = 0x8292B998;
	sub_82933050(ctx, base);
	// lwz r11,1652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8292babc
	if (ctx.cr6.eq) goto loc_8292BABC;
	// lwz r6,2204(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2204);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x8292b9d4
	goto loc_8292B9D4;
loc_8292B9B0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8292b9c8
	if (ctx.cr6.eq) goto loc_8292B9C8;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8292b9dc
	if (!ctx.cr6.eq) goto loc_8292B9DC;
loc_8292B9C8:
	// lwz r11,2204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2204);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8292B9D4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8292b9b0
	if (ctx.cr6.lt) goto loc_8292B9B0;
loc_8292B9DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
loc_8292B9E8:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8292ba88
	if (!ctx.cr6.lt) goto loc_8292BA88;
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,92
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 92, ctx.xer);
	// bne cr6,0x8292ba60
	if (!ctx.cr6.eq) goto loc_8292BA60;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8292ba28
	if (!ctx.cr6.lt) goto loc_8292BA28;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// bne cr6,0x8292ba28
	if (!ctx.cr6.eq) goto loc_8292BA28;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// b 0x8292ba80
	goto loc_8292BA80;
loc_8292BA28:
	// cmpwi cr6,r7,92
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 92, ctx.xer);
	// bne cr6,0x8292ba60
	if (!ctx.cr6.eq) goto loc_8292BA60;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8292ba60
	if (!ctx.cr6.lt) goto loc_8292BA60;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,13
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 13, ctx.xer);
	// bne cr6,0x8292ba60
	if (!ctx.cr6.eq) goto loc_8292BA60;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x8292ba60
	if (!ctx.cr6.eq) goto loc_8292BA60;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// b 0x8292ba80
	goto loc_8292BA80;
loc_8292BA60:
	// cmpwi cr6,r7,13
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 13, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x8292ba80
	if (ctx.cr6.eq) goto loc_8292BA80;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stbx r8,r5,r9
	PPC_STORE_U8(ctx.r5.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8292BA80:
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// blt cr6,0x8292b9e8
	if (ctx.cr6.lt) goto loc_8292B9E8;
loc_8292BA88:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r9,-20016
	ctx.r6.s64 = ctx.r9.s64 + -20016;
	// stbx r10,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r10.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,2216
	ctx.r4.s64 = ctx.r30.s64 + 2216;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82932c80
	ctx.lr = 0x8292BAB0;
	sub_82932C80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1644, ctx.r11.u32);
	// stw r11,1640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1640, ctx.r11.u32);
loc_8292BABC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

__attribute__((alias("__imp__sub_8292BAD8"))) PPC_WEAK_FUNC(sub_8292BAD8);
PPC_FUNC_IMPL(__imp__sub_8292BAD8) {
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
	// lwz r11,2196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2196);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8292bb28
	if (!ctx.cr6.eq) goto loc_8292BB28;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1508
	ctx.r5.s64 = 1508;
	// addi r6,r11,-19968
	ctx.r6.s64 = ctx.r11.s64 + -19968;
loc_8292BB08:
	// addi r4,r31,2216
	ctx.r4.s64 = ctx.r31.s64 + 2216;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82932c80
	ctx.lr = 0x8292BB14;
	sub_82932C80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8292bb84
	goto loc_8292BB84;
loc_8292BB28:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8292bb44
	if (ctx.cr6.eq) goto loc_8292BB44;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1513
	ctx.r5.s64 = 1513;
	// addi r6,r11,-20004
	ctx.r6.s64 = ctx.r11.s64 + -20004;
	// b 0x8292bb08
	goto loc_8292BB08;
loc_8292BB44:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8292bb68
	if (ctx.cr6.eq) goto loc_8292BB68;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8292bb68
	if (!ctx.cr6.eq) goto loc_8292BB68;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8292bb6c
	if (!ctx.cr6.eq) goto loc_8292BB6C;
loc_8292BB68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8292BB6C:
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8292bb80
	if (ctx.cr6.eq) goto loc_8292BB80;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8292BB80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8292BB84:
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

__attribute__((alias("__imp__sub_8292BB98"))) PPC_WEAK_FUNC(sub_8292BB98);
PPC_FUNC_IMPL(__imp__sub_8292BB98) {
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
	// lwz r11,2196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2196);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292bbe8
	if (!ctx.cr6.eq) goto loc_8292BBE8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1509
	ctx.r5.s64 = 1509;
	// addi r6,r11,-19912
	ctx.r6.s64 = ctx.r11.s64 + -19912;
loc_8292BBC8:
	// addi r4,r31,2216
	ctx.r4.s64 = ctx.r31.s64 + 2216;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82932c80
	ctx.lr = 0x8292BBD4;
	sub_82932C80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8292bc38
	goto loc_8292BC38;
loc_8292BBE8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8292bc04
	if (ctx.cr6.eq) goto loc_8292BC04;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1514
	ctx.r5.s64 = 1514;
	// addi r6,r11,-19948
	ctx.r6.s64 = ctx.r11.s64 + -19948;
	// b 0x8292bbc8
	goto loc_8292BBC8;
loc_8292BC04:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8292bc24
	if (!ctx.cr6.eq) goto loc_8292BC24;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bne cr6,0x8292bc28
	if (!ctx.cr6.eq) goto loc_8292BC28;
loc_8292BC24:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8292BC28:
	// stw r10,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_8292BC38:
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

__attribute__((alias("__imp__sub_8292BC4C"))) PPC_WEAK_FUNC(sub_8292BC4C);
PPC_FUNC_IMPL(__imp__sub_8292BC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292BC50"))) PPC_WEAK_FUNC(sub_8292BC50);
PPC_FUNC_IMPL(__imp__sub_8292BC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8292BC58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,2216
	ctx.r30.s64 = ctx.r3.s64 + 2216;
	// lwz r4,2256(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2256);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,2204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2204);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82933ce8
	ctx.lr = 0x8292BC74;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292be38
	if (ctx.cr0.lt) goto loc_8292BE38;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8292be14
	if (!ctx.cr6.eq) goto loc_8292BE14;
	// addi r31,r29,2224
	ctx.r31.s64 = ctx.r29.s64 + 2224;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-29352
	ctx.r10.s64 = ctx.r10.s64 + -29352;
loc_8292BC9C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x8292bcc0
	if (ctx.cr0.eq) goto loc_8292BCC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292bc9c
	if (ctx.cr6.eq) goto loc_8292BC9C;
loc_8292BCC0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292be14
	if (!ctx.cr0.eq) goto loc_8292BE14;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,2256(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2256);
	// lwz r3,2204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292BCD8;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292be38
	if (ctx.cr0.lt) goto loc_8292BE38;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8292bd0c
	if (!ctx.cr6.eq) goto loc_8292BD0C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,2256(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2256);
	// lwz r3,2204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292BD00;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292be38
	if (ctx.cr0.lt) goto loc_8292BE38;
	// b 0x8292bd10
	goto loc_8292BD10;
loc_8292BD0C:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8292BD10:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8292be14
	if (!ctx.cr6.eq) goto loc_8292BE14;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,27536
	ctx.r10.s64 = ctx.r10.s64 + 27536;
loc_8292BD28:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x8292bd4c
	if (ctx.cr0.eq) goto loc_8292BD4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292bd28
	if (ctx.cr6.eq) goto loc_8292BD28;
loc_8292BD4C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292be14
	if (!ctx.cr0.eq) goto loc_8292BE14;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,2256(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2256);
	// lwz r3,2204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292BD64;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292be38
	if (ctx.cr0.lt) goto loc_8292BE38;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// beq cr6,0x8292bd80
	if (ctx.cr6.eq) goto loc_8292BD80;
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// bne cr6,0x8292be14
	if (!ctx.cr6.eq) goto loc_8292BE14;
loc_8292BD80:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8292bd90
	if (!ctx.cr6.eq) goto loc_8292BD90;
	// stw r27,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r27.u32);
	// b 0x8292be34
	goto loc_8292BE34;
loc_8292BD90:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r10,r10,-19876
	ctx.r10.s64 = ctx.r10.s64 + -19876;
loc_8292BD9C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x8292bdc0
	if (ctx.cr0.eq) goto loc_8292BDC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292bd9c
	if (ctx.cr6.eq) goto loc_8292BD9C;
loc_8292BDC0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292bdd0
	if (!ctx.cr0.eq) goto loc_8292BDD0;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x8292be0c
	goto loc_8292BE0C;
loc_8292BDD0:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r10,r10,-19892
	ctx.r10.s64 = ctx.r10.s64 + -19892;
loc_8292BDDC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x8292be00
	if (ctx.cr0.eq) goto loc_8292BE00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292bddc
	if (ctx.cr6.eq) goto loc_8292BDDC;
loc_8292BE00:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292be14
	if (!ctx.cr0.eq) goto loc_8292BE14;
	// li r11,2048
	ctx.r11.s64 = 2048;
loc_8292BE0C:
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
	// b 0x8292be34
	goto loc_8292BE34;
loc_8292BE14:
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// beq cr6,0x8292be30
	if (ctx.cr6.eq) goto loc_8292BE30;
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// beq cr6,0x8292be30
	if (ctx.cr6.eq) goto loc_8292BE30;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2204);
	// bl 0x82933050
	ctx.lr = 0x8292BE30;
	sub_82933050(ctx, base);
loc_8292BE30:
	// stw r27,2252(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2252, ctx.r27.u32);
loc_8292BE34:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8292BE38:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1636(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1636, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292BE48"))) PPC_WEAK_FUNC(sub_8292BE48);
PPC_FUNC_IMPL(__imp__sub_8292BE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x8292BE50;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,2216
	ctx.r24.s64 = ctx.r3.s64 + 2216;
	// lwz r4,2256(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2256);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,2204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2204);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r14,0
	ctx.r14.s64 = 0;
	// bl 0x82933ce8
	ctx.lr = 0x8292BE78;
	sub_82933CE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292c31c
	if (ctx.cr0.lt) goto loc_8292C31C;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8292c2f8
	if (!ctx.cr6.eq) goto loc_8292C2F8;
	// addi r27,r26,2224
	ctx.r27.s64 = ctx.r26.s64 + 2224;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r10,-29352
	ctx.r10.s64 = ctx.r10.s64 + -29352;
loc_8292BE9C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292bec0
	if (ctx.cr0.eq) goto loc_8292BEC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292be9c
	if (ctx.cr6.eq) goto loc_8292BE9C;
loc_8292BEC0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292c2f8
	if (!ctx.cr0.eq) goto loc_8292C2F8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,2256(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2256);
	// lwz r3,2204(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292BED8;
	sub_82933CE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292c31c
	if (ctx.cr0.lt) goto loc_8292C31C;
	// lis r4,16383
	ctx.r4.s64 = 1073676288;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// lis r5,-32228
	ctx.r5.s64 = -2112094208;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r16,r4,65535
	ctx.r16.u64 = ctx.r4.u64 | 65535;
	// li r15,-1
	ctx.r15.s64 = -1;
	// addi r22,r11,24100
	ctx.r22.s64 = ctx.r11.s64 + 24100;
	// addi r20,r10,9220
	ctx.r20.s64 = ctx.r10.s64 + 9220;
	// addi r19,r9,-20632
	ctx.r19.s64 = ctx.r9.s64 + -20632;
	// addi r18,r8,-19864
	ctx.r18.s64 = ctx.r8.s64 + -19864;
	// addi r17,r7,-12124
	ctx.r17.s64 = ctx.r7.s64 + -12124;
	// addi r21,r6,32216
	ctx.r21.s64 = ctx.r6.s64 + 32216;
	// addi r23,r5,27536
	ctx.r23.s64 = ctx.r5.s64 + 27536;
loc_8292BF28:
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8292bf68
	if (!ctx.cr6.eq) goto loc_8292BF68;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8292BF3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292bf60
	if (ctx.cr0.eq) goto loc_8292BF60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292bf3c
	if (ctx.cr6.eq) goto loc_8292BF3C;
loc_8292BF60:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8292c348
	if (ctx.cr0.eq) goto loc_8292C348;
loc_8292BF68:
	// cmpwi cr6,r7,11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 11, ctx.xer);
	// bne cr6,0x8292c064
	if (!ctx.cr6.eq) goto loc_8292C064;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8292BF7C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq 0x8292bfa0
	if (ctx.cr0.eq) goto loc_8292BFA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292bf7c
	if (ctx.cr6.eq) goto loc_8292BF7C;
loc_8292BFA0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292bfb0
	if (!ctx.cr0.eq) goto loc_8292BFB0;
	// li r28,16
	ctx.r28.s64 = 16;
	// b 0x8292c094
	goto loc_8292C094;
loc_8292BFB0:
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8292BFB8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq 0x8292bfdc
	if (ctx.cr0.eq) goto loc_8292BFDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292bfb8
	if (ctx.cr6.eq) goto loc_8292BFB8;
loc_8292BFDC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292bfec
	if (!ctx.cr0.eq) goto loc_8292BFEC;
	// li r28,15
	ctx.r28.s64 = 15;
	// b 0x8292c094
	goto loc_8292C094;
loc_8292BFEC:
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8292BFF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq 0x8292c018
	if (ctx.cr0.eq) goto loc_8292C018;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292bff4
	if (ctx.cr6.eq) goto loc_8292BFF4;
loc_8292C018:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292c028
	if (!ctx.cr0.eq) goto loc_8292C028;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8292c094
	goto loc_8292C094;
loc_8292C028:
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8292C030:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292c054
	if (ctx.cr0.eq) goto loc_8292C054;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292c030
	if (ctx.cr6.eq) goto loc_8292C030;
loc_8292C054:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292c2f8
	if (!ctx.cr0.eq) goto loc_8292C2F8;
	// li r28,255
	ctx.r28.s64 = 255;
	// b 0x8292c094
	goto loc_8292C094;
loc_8292C064:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x8292c07c
	if (ctx.cr6.eq) goto loc_8292C07C;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8292c07c
	if (ctx.cr6.eq) goto loc_8292C07C;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x8292c2f8
	if (!ctx.cr6.eq) goto loc_8292C2F8;
loc_8292C07C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8292c2f8
	if (ctx.cr6.lt) goto loc_8292C2F8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8292c2f8
	if (ctx.cr6.gt) goto loc_8292C2F8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8292C094:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,2256(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2256);
	// lwz r3,2204(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292C0A4;
	sub_82933CE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292c31c
	if (ctx.cr0.lt) goto loc_8292C31C;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8292c2f8
	if (!ctx.cr6.eq) goto loc_8292C2F8;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8292C0C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292c0e4
	if (ctx.cr0.eq) goto loc_8292C0E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292c0c0
	if (ctx.cr6.eq) goto loc_8292C0C0;
loc_8292C0E4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292c2f8
	if (!ctx.cr0.eq) goto loc_8292C2F8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,2256(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2256);
	// lwz r3,2204(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292C0FC;
	sub_82933CE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292c31c
	if (ctx.cr0.lt) goto loc_8292C31C;
loc_8292C104:
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x8292c120
	if (ctx.cr6.eq) goto loc_8292C120;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8292c120
	if (ctx.cr6.eq) goto loc_8292C120;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x8292c2f8
	if (!ctx.cr6.eq) goto loc_8292C2F8;
loc_8292C120:
	// not r11,r25
	ctx.r11.u64 = ~ctx.r25.u64;
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & ctx.r25.u64;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8292c1d0
	if (!ctx.cr6.eq) goto loc_8292C1D0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8292c148
	if (!ctx.cr6.eq) goto loc_8292C148;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8292C148:
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8292c158
	if (!ctx.cr6.gt) goto loc_8292C158;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8292C158:
	// bl 0x82691500
	ctx.lr = 0x8292C15C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8292c3c0
	if (ctx.cr0.eq) goto loc_8292C3C0;
	// rlwinm r30,r25,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8292C178;
	sub_82FA77C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82691540
	ctx.lr = 0x8292C180;
	sub_82691540(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8292c194
	if (!ctx.cr6.eq) goto loc_8292C194;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8292C194:
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8292c1a4
	if (!ctx.cr6.gt) goto loc_8292C1A4;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8292C1A4:
	// bl 0x82691500
	ctx.lr = 0x8292C1A8;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8292c3c0
	if (ctx.cr0.eq) goto loc_8292C3C0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8292C1C0;
	sub_82FA77C0(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82691540
	ctx.lr = 0x8292C1C8;
	sub_82691540(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r14,r31
	ctx.r14.u64 = ctx.r31.u64;
loc_8292C1D0:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stwx r29,r11,r14
	PPC_STORE_U32(ctx.r11.u32 + ctx.r14.u32, ctx.r29.u32);
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
	// lwz r4,2256(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2256);
	// lwz r3,2204(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292C1F0;
	sub_82933CE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292c31c
	if (ctx.cr0.lt) goto loc_8292C31C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8292c104
	if (!ctx.cr6.eq) goto loc_8292C104;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8292C20C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292c230
	if (ctx.cr0.eq) goto loc_8292C230;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292c20c
	if (ctx.cr6.eq) goto loc_8292C20C;
loc_8292C230:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8292c26c
	if (ctx.cr0.eq) goto loc_8292C26C;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8292C240:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292c264
	if (ctx.cr0.eq) goto loc_8292C264;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292c240
	if (ctx.cr6.eq) goto loc_8292C240;
loc_8292C264:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292c104
	if (!ctx.cr0.eq) goto loc_8292C104;
loc_8292C26C:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8292C274:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292c298
	if (ctx.cr0.eq) goto loc_8292C298;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292c274
	if (ctx.cr6.eq) goto loc_8292C274;
loc_8292C298:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292bf28
	if (!ctx.cr0.eq) goto loc_8292BF28;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,2256(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2256);
	// lwz r3,2204(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292C2B0;
	sub_82933CE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292c31c
	if (ctx.cr0.lt) goto loc_8292C31C;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8292bf28
	if (!ctx.cr6.eq) goto loc_8292BF28;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8292C2CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292c2f0
	if (ctx.cr0.eq) goto loc_8292C2F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292c2cc
	if (ctx.cr6.eq) goto loc_8292C2CC;
loc_8292C2F0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292bf28
	if (!ctx.cr0.eq) goto loc_8292BF28;
loc_8292C2F8:
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// beq cr6,0x8292c314
	if (ctx.cr6.eq) goto loc_8292C314;
	// cmpwi cr6,r7,17
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 17, ctx.xer);
	// beq cr6,0x8292c314
	if (ctx.cr6.eq) goto loc_8292C314;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2204(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2204);
	// bl 0x82933050
	ctx.lr = 0x8292C314;
	sub_82933050(ctx, base);
loc_8292C314:
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,2252(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2252, ctx.r31.u32);
loc_8292C31C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82691540
	ctx.lr = 0x8292C324;
	sub_82691540(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82691540
	ctx.lr = 0x8292C32C;
	sub_82691540(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82691540
	ctx.lr = 0x8292C334;
	sub_82691540(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1636(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1636, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_8292C348:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,2256(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2256);
	// lwz r3,2204(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292C358;
	sub_82933CE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292c31c
	if (ctx.cr0.lt) goto loc_8292C31C;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// beq cr6,0x8292c374
	if (ctx.cr6.eq) goto loc_8292C374;
	// cmpwi cr6,r7,17
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 17, ctx.xer);
	// bne cr6,0x8292c2f8
	if (!ctx.cr6.eq) goto loc_8292C2F8;
loc_8292C374:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8292c3b8
	if (ctx.cr6.eq) goto loc_8292C3B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r26,24
	ctx.r29.s64 = ctx.r26.s64 + 24;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// subf r28,r14,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r14.s64;
loc_8292C390:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r5,r28,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82932880
	ctx.lr = 0x8292C3A0;
	sub_82932880(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292c31c
	if (ctx.cr0.lt) goto loc_8292C31C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8292c390
	if (ctx.cr6.lt) goto loc_8292C390;
loc_8292C3B8:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8292c31c
	goto loc_8292C31C;
loc_8292C3C0:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x8292c31c
	goto loc_8292C31C;
}

__attribute__((alias("__imp__sub_8292C3CC"))) PPC_WEAK_FUNC(sub_8292C3CC);
PPC_FUNC_IMPL(__imp__sub_8292C3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292C3D0"))) PPC_WEAK_FUNC(sub_8292C3D0);
PPC_FUNC_IMPL(__imp__sub_8292C3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,1586
	ctx.r10.s64 = 103940096;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// ori r10,r10,55311
	ctx.r10.u64 = ctx.r10.u64 | 55311;
	// beq cr6,0x8292c414
	if (ctx.cr6.eq) goto loc_8292C414;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8292c414
	if (ctx.cr0.eq) goto loc_8292C414;
loc_8292C3EC:
	// mulli r10,r10,19
	ctx.r10.s64 = ctx.r10.s64 * 19;
	// lbzu r9,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb. r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8292c3ec
	if (!ctx.cr0.eq) goto loc_8292C3EC;
	// li r11,127
	ctx.r11.s64 = 127;
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mulli r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 * 127;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
loc_8292C414:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292C41C"))) PPC_WEAK_FUNC(sub_8292C41C);
PPC_FUNC_IMPL(__imp__sub_8292C41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292C420"))) PPC_WEAK_FUNC(sub_8292C420);
PPC_FUNC_IMPL(__imp__sub_8292C420) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8292C428;
	__savegprlr_29(ctx, base);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8292C430:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292c454
	if (ctx.cr0.eq) goto loc_8292C454;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292c430
	if (ctx.cr6.eq) goto loc_8292C430;
loc_8292C454:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292c6cc
	if (!ctx.cr0.eq) goto loc_8292C6CC;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8292c494
	if (ctx.cr0.eq) goto loc_8292C494;
loc_8292C474:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8292c48c
	if (ctx.cr6.eq) goto loc_8292C48C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292c474
	if (!ctx.cr6.eq) goto loc_8292C474;
loc_8292C48C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292c6cc
	if (!ctx.cr6.eq) goto loc_8292C6CC;
loc_8292C494:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8292c6cc
	if (!ctx.cr6.eq) goto loc_8292C6CC;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// b 0x8292c6b8
	goto loc_8292C6B8;
loc_8292C4A8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8292c6cc
	if (ctx.cr6.eq) goto loc_8292C6CC;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8292c6cc
	if (!ctx.cr6.eq) goto loc_8292C6CC;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x8292c6a4
	if (ctx.cr6.gt) goto loc_8292C6A4;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-20200
	ctx.r12.s64 = ctx.r12.s64 + -20200;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32109
	ctx.r12.s64 = -2104295424;
	// nop 
	// addi r12,r12,-15120
	ctx.r12.s64 = ctx.r12.s64 + -15120;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8292C4F0;
	case 1:
		goto loc_8292C508;
	case 2:
		goto loc_8292C4F0;
	case 3:
		goto loc_8292C4F0;
	case 4:
		goto loc_8292C4F0;
	case 5:
		goto loc_8292C54C;
	case 6:
		goto loc_8292C54C;
	case 7:
		goto loc_8292C55C;
	case 8:
		goto loc_8292C55C;
	case 9:
		goto loc_8292C55C;
	case 10:
		goto loc_8292C55C;
	case 11:
		goto loc_8292C56C;
	case 12:
		goto loc_8292C674;
	case 13:
		goto loc_8292C674;
	default:
		__builtin_unreachable();
	}
loc_8292C4F0:
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8292C4FC:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
loc_8292C500:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8292c6a8
	goto loc_8292C6A8;
loc_8292C508:
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// lbz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8292c6cc
	if (!ctx.cr6.eq) goto loc_8292C6CC;
	// lbz r11,25(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// lbz r10,25(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8292c6cc
	if (!ctx.cr6.eq) goto loc_8292C6CC;
	// lbz r11,26(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 26);
	// lbz r10,26(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 26);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8292c6cc
	if (!ctx.cr6.eq) goto loc_8292C6CC;
	// lbz r11,27(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 27);
	// lbz r10,27(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 27);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
loc_8292C544:
	// bne cr6,0x8292c6cc
	if (!ctx.cr6.eq) goto loc_8292C6CC;
	// b 0x8292c6b0
	goto loc_8292C6B0;
loc_8292C54C:
	// ld r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// b 0x8292c544
	goto loc_8292C544;
loc_8292C55C:
	// lfd f0,24(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// lfd f13,24(r3)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// b 0x8292c544
	goto loc_8292C544;
loc_8292C56C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8292c5d0
	if (ctx.cr0.eq) goto loc_8292C5D0;
	// lwz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
loc_8292C584:
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8292C58C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r29,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r29.s64;
	// beq 0x8292c5b0
	if (ctx.cr0.eq) goto loc_8292C5B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292c58c
	if (ctx.cr6.eq) goto loc_8292C58C;
loc_8292C5B0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8292c5cc
	if (ctx.cr0.eq) goto loc_8292C5CC;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8292c584
	if (!ctx.cr6.eq) goto loc_8292C584;
	// b 0x8292c5d0
	goto loc_8292C5D0;
loc_8292C5CC:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8292C5D0:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8292c630
	if (ctx.cr0.eq) goto loc_8292C630;
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_8292C5E4:
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8292C5EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r29,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r29.s64;
	// beq 0x8292c610
	if (ctx.cr0.eq) goto loc_8292C610;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292c5ec
	if (ctx.cr6.eq) goto loc_8292C5EC;
loc_8292C610:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8292c62c
	if (ctx.cr0.eq) goto loc_8292C62C;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8292c5e4
	if (!ctx.cr6.eq) goto loc_8292C5E4;
	// b 0x8292c630
	goto loc_8292C630;
loc_8292C62C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8292C630:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8292c640
	if (ctx.cr6.eq) goto loc_8292C640;
	// addi r11,r6,0
	ctx.r11.s64 = ctx.r6.s64 + 0;
	// b 0x8292c4fc
	goto loc_8292C4FC;
loc_8292C640:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
loc_8292C648:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292c66c
	if (ctx.cr0.eq) goto loc_8292C66C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292c648
	if (ctx.cr6.eq) goto loc_8292C648;
loc_8292C66C:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// b 0x8292c500
	goto loc_8292C500;
loc_8292C674:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
loc_8292C67C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292c66c
	if (ctx.cr0.eq) goto loc_8292C66C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292c67c
	if (ctx.cr6.eq) goto loc_8292C67C;
	// b 0x8292c66c
	goto loc_8292C66C;
loc_8292C6A4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8292C6A8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8292c6cc
	if (ctx.cr6.eq) goto loc_8292C6CC;
loc_8292C6B0:
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_8292C6B8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8292c4a8
	if (!ctx.cr6.eq) goto loc_8292C4A8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8292c6d0
	if (ctx.cr6.eq) goto loc_8292C6D0;
loc_8292C6CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8292C6D0:
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292C6D4"))) PPC_WEAK_FUNC(sub_8292C6D4);
PPC_FUNC_IMPL(__imp__sub_8292C6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292C6D8"))) PPC_WEAK_FUNC(sub_8292C6D8);
PPC_FUNC_IMPL(__imp__sub_8292C6D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2204);
	// b 0x82c46218
	sub_82C46218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292C6E0"))) PPC_WEAK_FUNC(sub_8292C6E0);
PPC_FUNC_IMPL(__imp__sub_8292C6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8292C6E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// bl 0x8292c3d0
	ctx.lr = 0x8292C6F8;
	sub_8292C3D0(ctx, base);
	// addi r11,r3,421
	ctx.r11.s64 = ctx.r3.s64 + 421;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// b 0x8292c748
	goto loc_8292C748;
loc_8292C708:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8292C710:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x8292c734
	if (ctx.cr0.eq) goto loc_8292C734;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292c710
	if (ctx.cr6.eq) goto loc_8292C710;
loc_8292C734:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x8292c750
	if (ctx.cr0.lt) goto loc_8292C750;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292c758
	if (ctx.cr6.eq) goto loc_8292C758;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_8292C748:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8292c708
	if (!ctx.cr6.eq) goto loc_8292C708;
loc_8292C750:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8292c7bc
	goto loc_8292C7BC;
loc_8292C758:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8292c76c
	if (ctx.cr0.eq) goto loc_8292C76C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8292c7bc
	goto loc_8292C7BC;
loc_8292C76C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// b 0x8292c7a0
	goto loc_8292C7A0;
loc_8292C77C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8292c79c
	if (!ctx.cr6.eq) goto loc_8292C79C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8292c6e0
	ctx.lr = 0x8292C794;
	sub_8292C6E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8292c7a8
	if (!ctx.cr0.eq) goto loc_8292C7A8;
loc_8292C79C:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8292C7A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8292c77c
	if (!ctx.cr6.eq) goto loc_8292C77C;
loc_8292C7A8:
	// addi r11,r31,0
	ctx.r11.s64 = ctx.r31.s64 + 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stb r10,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r10.u8);
	// subfe r3,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8292C7BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292C7C4"))) PPC_WEAK_FUNC(sub_8292C7C4);
PPC_FUNC_IMPL(__imp__sub_8292C7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292C7C8"))) PPC_WEAK_FUNC(sub_8292C7C8);
PPC_FUNC_IMPL(__imp__sub_8292C7C8) {
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
	// bl 0x8292c6e0
	ctx.lr = 0x8292C7E8;
	sub_8292C6E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8292c854
	if (!ctx.cr0.eq) goto loc_8292C854;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292c3d0
	ctx.lr = 0x8292C7FC;
	sub_8292C3D0(ctx, base);
	// addi r11,r3,421
	ctx.r11.s64 = ctx.r3.s64 + 421;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// b 0x8292c84c
	goto loc_8292C84C;
loc_8292C80C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8292C814:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x8292c838
	if (ctx.cr0.eq) goto loc_8292C838;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292c814
	if (ctx.cr6.eq) goto loc_8292C814;
loc_8292C838:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x8292c854
	if (ctx.cr0.lt) goto loc_8292C854;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292c870
	if (ctx.cr6.eq) goto loc_8292C870;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
loc_8292C84C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8292c80c
	if (!ctx.cr6.eq) goto loc_8292C80C;
loc_8292C854:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8292C858:
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
loc_8292C870:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8292c880
	if (ctx.cr6.eq) goto loc_8292C880;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8292C880:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8292c890
	if (ctx.cr6.eq) goto loc_8292C890;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8292C890:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8292c858
	goto loc_8292C858;
}

__attribute__((alias("__imp__sub_8292C898"))) PPC_WEAK_FUNC(sub_8292C898);
PPC_FUNC_IMPL(__imp__sub_8292C898) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r9,92
	ctx.r9.s64 = 92;
loc_8292C8B4:
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,34
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 34, ctx.xer);
	// bne cr6,0x8292c8e8
	if (!ctx.cr6.eq) goto loc_8292C8E8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8292c8d4
	if (ctx.cr6.eq) goto loc_8292C8D4;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8292c8d4
	if (!ctx.cr6.lt) goto loc_8292C8D4;
	// stbx r9,r3,r6
	PPC_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r9.u8);
loc_8292C8D4:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8292c8e8
	if (!ctx.cr6.eq) goto loc_8292C8E8;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8292C8E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8292c91c
	if (ctx.cr6.eq) goto loc_8292C91C;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,92
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 92, ctx.xer);
	// bne cr6,0x8292c91c
	if (!ctx.cr6.eq) goto loc_8292C91C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8292c914
	if (ctx.cr6.eq) goto loc_8292C914;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8292c914
	if (!ctx.cr6.lt) goto loc_8292C914;
	// stbx r9,r3,r6
	PPC_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r9.u8);
loc_8292C914:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8292C91C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8292c934
	if (ctx.cr6.eq) goto loc_8292C934;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8292c934
	if (!ctx.cr6.lt) goto loc_8292C934;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stbx r8,r3,r6
	PPC_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r8.u8);
loc_8292C934:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x8292c8b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8292C8B4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292C944"))) PPC_WEAK_FUNC(sub_8292C944);
PPC_FUNC_IMPL(__imp__sub_8292C944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292C948"))) PPC_WEAK_FUNC(sub_8292C948);
PPC_FUNC_IMPL(__imp__sub_8292C948) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8292c96c
	if (ctx.cr6.eq) goto loc_8292C96C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8292c99c
	goto loc_8292C99C;
loc_8292C96C:
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8292c998
	if (!ctx.cr6.eq) goto loc_8292C998;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-19856
	ctx.r6.s64 = ctx.r11.s64 + -19856;
	// addi r4,r31,2216
	ctx.r4.s64 = ctx.r31.s64 + 2216;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82932c80
	ctx.lr = 0x8292C990;
	sub_82932C80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
loc_8292C998:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8292C99C:
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

__attribute__((alias("__imp__sub_8292C9B0"))) PPC_WEAK_FUNC(sub_8292C9B0);
PPC_FUNC_IMPL(__imp__sub_8292C9B0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8292c9e4
	if (ctx.cr6.eq) goto loc_8292C9E4;
loc_8292C9C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8292c9dc
	if (ctx.cr0.eq) goto loc_8292C9DC;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8292c9c4
	if (!ctx.cr0.eq) goto loc_8292C9C4;
loc_8292C9DC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8292c9f0
	if (!ctx.cr6.eq) goto loc_8292C9F0;
loc_8292C9E4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_8292C9F0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r11,r4,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r4.s64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292CA04"))) PPC_WEAK_FUNC(sub_8292CA04);
PPC_FUNC_IMPL(__imp__sub_8292CA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292CA08"))) PPC_WEAK_FUNC(sub_8292CA08);
PPC_FUNC_IMPL(__imp__sub_8292CA08) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8292ca38
	if (ctx.cr6.eq) goto loc_8292CA38;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8292ca08
	ctx.lr = 0x8292CA38;
	sub_8292CA08(ctx, base);
loc_8292CA38:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8292ca4c
	if (ctx.cr0.eq) goto loc_8292CA4C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x8292CA4C;
	sub_82691460(ctx, base);
loc_8292CA4C:
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

__attribute__((alias("__imp__sub_8292CA68"))) PPC_WEAK_FUNC(sub_8292CA68);
PPC_FUNC_IMPL(__imp__sub_8292CA68) {
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
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8292ca90
	if (ctx.cr6.eq) goto loc_8292CA90;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8292ca08
	ctx.lr = 0x8292CA90;
	sub_8292CA08(ctx, base);
loc_8292CA90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292b7f0
	ctx.lr = 0x8292CA98;
	sub_8292B7F0(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82958948
	ctx.lr = 0x8292CAA0;
	sub_82958948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b2440
	ctx.lr = 0x8292CAA8;
	sub_828B2440(ctx, base);
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

__attribute__((alias("__imp__sub_8292CABC"))) PPC_WEAK_FUNC(sub_8292CABC);
PPC_FUNC_IMPL(__imp__sub_8292CABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292CAC0"))) PPC_WEAK_FUNC(sub_8292CAC0);
PPC_FUNC_IMPL(__imp__sub_8292CAC0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8292caf0
	if (ctx.cr6.eq) goto loc_8292CAF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8292cac0
	ctx.lr = 0x8292CAF0;
	sub_8292CAC0(ctx, base);
loc_8292CAF0:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8292cb04
	if (ctx.cr0.eq) goto loc_8292CB04;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x8292CB04;
	sub_82691460(ctx, base);
loc_8292CB04:
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

__attribute__((alias("__imp__sub_8292CB20"))) PPC_WEAK_FUNC(sub_8292CB20);
PPC_FUNC_IMPL(__imp__sub_8292CB20) {
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
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8292cb50
	if (ctx.cr6.eq) goto loc_8292CB50;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8292cb20
	ctx.lr = 0x8292CB50;
	sub_8292CB20(ctx, base);
loc_8292CB50:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8292cb64
	if (ctx.cr0.eq) goto loc_8292CB64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x8292CB64;
	sub_82691460(ctx, base);
loc_8292CB64:
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

__attribute__((alias("__imp__sub_8292CB80"))) PPC_WEAK_FUNC(sub_8292CB80);
PPC_FUNC_IMPL(__imp__sub_8292CB80) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8292cbb0
	if (ctx.cr6.eq) goto loc_8292CBB0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8292cb80
	ctx.lr = 0x8292CBB0;
	sub_8292CB80(ctx, base);
loc_8292CBB0:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8292cbc4
	if (ctx.cr0.eq) goto loc_8292CBC4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x8292CBC4;
	sub_82691460(ctx, base);
loc_8292CBC4:
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

__attribute__((alias("__imp__sub_8292CBE0"))) PPC_WEAK_FUNC(sub_8292CBE0);
PPC_FUNC_IMPL(__imp__sub_8292CBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8292CBE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82967d70
	ctx.lr = 0x8292CBFC;
	sub_82967D70(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82931730
	ctx.lr = 0x8292CC04;
	sub_82931730(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82931820
	ctx.lr = 0x8292CC0C;
	sub_82931820(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,2268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2268, ctx.r30.u32);
	// stw r30,2264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2264, ctx.r30.u32);
	// bl 0x8292b848
	ctx.lr = 0x8292CC20;
	sub_8292B848(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r3,r31,1684
	ctx.r3.s64 = ctx.r31.s64 + 1684;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// li r5,508
	ctx.r5.s64 = 508;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r29,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r29.u32);
	// stw r30,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r30.u32);
	// stw r30,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r30.u32);
	// stw r29,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r29.u32);
	// stw r29,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r29.u32);
	// stw r29,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r29.u32);
	// stw r30,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r30.u32);
	// stw r30,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// stw r30,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r30.u32);
	// stw r30,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
	// stw r30,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r30.u32);
	// stw r30,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r30.u32);
	// stw r30,2196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2196, ctx.r30.u32);
	// stw r30,2200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2200, ctx.r30.u32);
	// stw r30,2204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2204, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x8292CC80;
	sub_82FA7CF0(ctx, base);
	// std r30,2216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2216, ctx.r30.u64);
	// std r30,2224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2224, ctx.r30.u64);
	// std r30,2232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2232, ctx.r30.u64);
	// std r30,2240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2240, ctx.r30.u64);
	// std r30,2248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2248, ctx.r30.u64);
	// stw r30,2192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2192, ctx.r30.u32);
	// stw r29,2256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2256, ctx.r29.u32);
	// stw r30,2272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2272, ctx.r30.u32);
	// bl 0x829586f0
	ctx.lr = 0x8292CCA4;
	sub_829586F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292CCB0"))) PPC_WEAK_FUNC(sub_8292CCB0);
PPC_FUNC_IMPL(__imp__sub_8292CCB0) {
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
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82691410
	ctx.lr = 0x8292CCD8;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8292ccf8
	if (ctx.cr0.eq) goto loc_8292CCF8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8292CCF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292cd0c
	if (!ctx.cr6.eq) goto loc_8292CD0C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8292cd20
	goto loc_8292CD20;
loc_8292CD0C:
	// lwz r10,1680(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r11.u32);
	// stw r30,2256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2256, ctx.r30.u32);
loc_8292CD20:
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

__attribute__((alias("__imp__sub_8292CD38"))) PPC_WEAK_FUNC(sub_8292CD38);
PPC_FUNC_IMPL(__imp__sub_8292CD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8292CD40;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// lwz r11,1636(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1636);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8292d4ec
	if (!ctx.cr6.eq) goto loc_8292D4EC;
	// lwz r11,1644(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8292d4ec
	if (!ctx.cr6.eq) goto loc_8292D4EC;
	// lwz r11,1668(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1668);
	// addi r31,r3,2216
	ctx.r31.s64 = ctx.r3.s64 + 2216;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292cda4
	if (ctx.cr6.eq) goto loc_8292CDA4;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r8,r31,-8
	ctx.r8.s64 = ctx.r31.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8292CD88:
	// ldu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x8292cd88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8292CD88;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,1668(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1668, ctx.r10.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// b 0x8292cdc0
	goto loc_8292CDC0;
loc_8292CDA4:
	// lwz r11,2256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2256);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,2204(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2204);
	// ori r4,r11,4
	ctx.r4.u64 = ctx.r11.u64 | 4;
	// bl 0x82933ce8
	ctx.lr = 0x8292CDB8;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292d4f4
	if (ctx.cr0.lt) goto loc_8292D4F4;
loc_8292CDC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8292d440
	if (ctx.cr6.eq) goto loc_8292D440;
	// ble cr6,0x8292d4e4
	if (!ctx.cr6.gt) goto loc_8292D4E4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8292d438
	if (!ctx.cr6.gt) goto loc_8292D438;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x8292ce0c
	if (ctx.cr6.eq) goto loc_8292CE0C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8292ce04
	if (ctx.cr6.eq) goto loc_8292CE04;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8292cdf8
	if (ctx.cr6.eq) goto loc_8292CDF8;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x8292d4e4
	if (!ctx.cr6.eq) goto loc_8292D4E4;
loc_8292CDF8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1636(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1636, ctx.r11.u32);
	// b 0x8292d4f4
	goto loc_8292D4F4;
loc_8292CE04:
	// li r3,280
	ctx.r3.s64 = 280;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292CE0C:
	// lwz r11,1648(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8292d300
	if (ctx.cr6.eq) goto loc_8292D300;
	// lwz r11,1652(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1652);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,1648(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1648, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,2224(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2224);
	// stw r30,1660(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1660, ctx.r30.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// beq cr6,0x8292d154
	if (ctx.cr6.eq) goto loc_8292D154;
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// beq cr6,0x8292d118
	if (ctx.cr6.eq) goto loc_8292D118;
	// cmplwi cr6,r10,101
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 101, ctx.xer);
	// beq cr6,0x8292d018
	if (ctx.cr6.eq) goto loc_8292D018;
	// cmplwi cr6,r10,105
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 105, ctx.xer);
	// beq cr6,0x8292cf1c
	if (ctx.cr6.eq) goto loc_8292CF1C;
	// cmplwi cr6,r10,108
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 108, ctx.xer);
	// beq cr6,0x8292cee0
	if (ctx.cr6.eq) goto loc_8292CEE0;
	// cmplwi cr6,r10,112
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 112, ctx.xer);
	// beq cr6,0x8292cea4
	if (ctx.cr6.eq) goto loc_8292CEA4;
	// cmplwi cr6,r10,117
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 117, ctx.xer);
	// bne cr6,0x8292d210
	if (!ctx.cr6.eq) goto loc_8292D210;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r10,r10,-19684
	ctx.r10.s64 = ctx.r10.s64 + -19684;
loc_8292CE70:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292ce94
	if (ctx.cr0.eq) goto loc_8292CE94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292ce70
	if (ctx.cr6.eq) goto loc_8292CE70;
loc_8292CE94:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292d210
	if (!ctx.cr0.eq) goto loc_8292D210;
	// li r3,258
	ctx.r3.s64 = 258;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292CEA4:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r10,r10,-19692
	ctx.r10.s64 = ctx.r10.s64 + -19692;
loc_8292CEAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292ced0
	if (ctx.cr0.eq) goto loc_8292CED0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292ceac
	if (ctx.cr6.eq) goto loc_8292CEAC;
loc_8292CED0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292d210
	if (!ctx.cr0.eq) goto loc_8292D210;
	// li r3,270
	ctx.r3.s64 = 270;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292CEE0:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r10,r10,-19700
	ctx.r10.s64 = ctx.r10.s64 + -19700;
loc_8292CEE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292cf0c
	if (ctx.cr0.eq) goto loc_8292CF0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292cee8
	if (ctx.cr6.eq) goto loc_8292CEE8;
loc_8292CF0C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292d210
	if (!ctx.cr0.eq) goto loc_8292D210;
	// li r3,259
	ctx.r3.s64 = 259;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292CF1C:
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-19704
	ctx.r9.s64 = ctx.r9.s64 + -19704;
loc_8292CF28:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8292cf4c
	if (ctx.cr0.eq) goto loc_8292CF4C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8292cf28
	if (ctx.cr6.eq) goto loc_8292CF28;
loc_8292CF4C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8292cf5c
	if (!ctx.cr0.eq) goto loc_8292CF5C;
	// li r3,262
	ctx.r3.s64 = 262;
	// b 0x8292d054
	goto loc_8292D054;
loc_8292CF5C:
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-19712
	ctx.r9.s64 = ctx.r9.s64 + -19712;
loc_8292CF68:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8292cf8c
	if (ctx.cr0.eq) goto loc_8292CF8C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8292cf68
	if (ctx.cr6.eq) goto loc_8292CF68;
loc_8292CF8C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8292cf9c
	if (!ctx.cr0.eq) goto loc_8292CF9C;
	// li r3,263
	ctx.r3.s64 = 263;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292CF9C:
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-19720
	ctx.r9.s64 = ctx.r9.s64 + -19720;
loc_8292CFA8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8292cfcc
	if (ctx.cr0.eq) goto loc_8292CFCC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8292cfa8
	if (ctx.cr6.eq) goto loc_8292CFA8;
loc_8292CFCC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8292cfdc
	if (!ctx.cr0.eq) goto loc_8292CFDC;
	// li r3,264
	ctx.r3.s64 = 264;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292CFDC:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r10,r10,-19728
	ctx.r10.s64 = ctx.r10.s64 + -19728;
loc_8292CFE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292d008
	if (ctx.cr0.eq) goto loc_8292D008;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292cfe4
	if (ctx.cr6.eq) goto loc_8292CFE4;
loc_8292D008:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292d210
	if (!ctx.cr0.eq) goto loc_8292D210;
	// li r3,260
	ctx.r3.s64 = 260;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D018:
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-19736
	ctx.r9.s64 = ctx.r9.s64 + -19736;
loc_8292D024:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8292d048
	if (ctx.cr0.eq) goto loc_8292D048;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8292d024
	if (ctx.cr6.eq) goto loc_8292D024;
loc_8292D048:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8292d05c
	if (!ctx.cr0.eq) goto loc_8292D05C;
loc_8292D050:
	// li r3,265
	ctx.r3.s64 = 265;
loc_8292D054:
	// stw r29,1660(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1660, ctx.r29.u32);
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D05C:
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-19744
	ctx.r9.s64 = ctx.r9.s64 + -19744;
loc_8292D068:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8292d08c
	if (ctx.cr0.eq) goto loc_8292D08C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8292d068
	if (ctx.cr6.eq) goto loc_8292D068;
loc_8292D08C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8292d09c
	if (!ctx.cr0.eq) goto loc_8292D09C;
loc_8292D094:
	// li r3,266
	ctx.r3.s64 = 266;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D09C:
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-19752
	ctx.r9.s64 = ctx.r9.s64 + -19752;
loc_8292D0A8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8292d0cc
	if (ctx.cr0.eq) goto loc_8292D0CC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8292d0a8
	if (ctx.cr6.eq) goto loc_8292D0A8;
loc_8292D0CC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8292d0dc
	if (!ctx.cr0.eq) goto loc_8292D0DC;
loc_8292D0D4:
	// li r3,267
	ctx.r3.s64 = 267;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D0DC:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r10,r10,-12124
	ctx.r10.s64 = ctx.r10.s64 + -12124;
loc_8292D0E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292d108
	if (ctx.cr0.eq) goto loc_8292D108;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292d0e4
	if (ctx.cr6.eq) goto loc_8292D0E4;
loc_8292D108:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292d210
	if (!ctx.cr0.eq) goto loc_8292D210;
	// li r3,261
	ctx.r3.s64 = 261;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D118:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r10,r10,-19760
	ctx.r10.s64 = ctx.r10.s64 + -19760;
loc_8292D120:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292d144
	if (ctx.cr0.eq) goto loc_8292D144;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292d120
	if (ctx.cr6.eq) goto loc_8292D120;
loc_8292D144:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292d210
	if (!ctx.cr0.eq) goto loc_8292D210;
	// li r3,257
	ctx.r3.s64 = 257;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D154:
	// cmplwi cr6,r10,101
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 101, ctx.xer);
	// beq cr6,0x8292d21c
	if (ctx.cr6.eq) goto loc_8292D21C;
	// cmplwi cr6,r10,105
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 105, ctx.xer);
	// bne cr6,0x8292d210
	if (!ctx.cr6.eq) goto loc_8292D210;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-19704
	ctx.r9.s64 = ctx.r9.s64 + -19704;
loc_8292D170:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8292d194
	if (ctx.cr0.eq) goto loc_8292D194;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8292d170
	if (ctx.cr6.eq) goto loc_8292D170;
loc_8292D194:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8292d1a4
	if (!ctx.cr0.eq) goto loc_8292D1A4;
loc_8292D19C:
	// li r3,268
	ctx.r3.s64 = 268;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D1A4:
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-19712
	ctx.r9.s64 = ctx.r9.s64 + -19712;
loc_8292D1B0:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8292d1d4
	if (ctx.cr0.eq) goto loc_8292D1D4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8292d1b0
	if (ctx.cr6.eq) goto loc_8292D1B0;
loc_8292D1D4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8292d19c
	if (ctx.cr0.eq) goto loc_8292D19C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r10,r10,-19720
	ctx.r10.s64 = ctx.r10.s64 + -19720;
loc_8292D1E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292d208
	if (ctx.cr0.eq) goto loc_8292D208;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292d1e4
	if (ctx.cr6.eq) goto loc_8292D1E4;
loc_8292D208:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8292d19c
	if (ctx.cr0.eq) goto loc_8292D19C;
loc_8292D210:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1648(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1648, ctx.r11.u32);
	// b 0x8292d430
	goto loc_8292D430;
loc_8292D21C:
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-19744
	ctx.r9.s64 = ctx.r9.s64 + -19744;
loc_8292D228:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8292d24c
	if (ctx.cr0.eq) goto loc_8292D24C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8292d228
	if (ctx.cr6.eq) goto loc_8292D228;
loc_8292D24C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8292d094
	if (ctx.cr0.eq) goto loc_8292D094;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-19752
	ctx.r9.s64 = ctx.r9.s64 + -19752;
loc_8292D260:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8292d284
	if (ctx.cr0.eq) goto loc_8292D284;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8292d260
	if (ctx.cr6.eq) goto loc_8292D260;
loc_8292D284:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8292d0d4
	if (ctx.cr0.eq) goto loc_8292D0D4;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r10,r10,-19736
	ctx.r10.s64 = ctx.r10.s64 + -19736;
loc_8292D294:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292d2b8
	if (ctx.cr0.eq) goto loc_8292D2B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292d294
	if (ctx.cr6.eq) goto loc_8292D294;
loc_8292D2B8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292d210
	if (!ctx.cr0.eq) goto loc_8292D210;
	// lwz r11,2196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2196);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292d2d8
	if (!ctx.cr6.eq) goto loc_8292D2D8;
	// stw r29,1652(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1652, ctx.r29.u32);
	// b 0x8292d050
	goto loc_8292D050;
loc_8292D2D8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8292d2f8
	if (ctx.cr6.eq) goto loc_8292D2F8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8292d2f8
	if (!ctx.cr6.eq) goto loc_8292D2F8;
	// stw r10,1652(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1652, ctx.r10.u32);
	// b 0x8292d050
	goto loc_8292D050;
loc_8292D2F8:
	// li r3,269
	ctx.r3.s64 = 269;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D300:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r4,2224(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2224);
	// addi r10,r11,-19768
	ctx.r10.s64 = ctx.r11.s64 + -19768;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8292D310:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292d334
	if (ctx.cr0.eq) goto loc_8292D334;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292d310
	if (ctx.cr6.eq) goto loc_8292D310;
loc_8292D334:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292d348
	if (!ctx.cr0.eq) goto loc_8292D348;
	// li r3,271
	ctx.r3.s64 = 271;
	// stw r30,1660(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1660, ctx.r30.u32);
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D348:
	// lwz r11,1660(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8292d430
	if (ctx.cr6.eq) goto loc_8292D430;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8292c7c8
	ctx.lr = 0x8292D364;
	sub_8292C7C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8292d430
	if (ctx.cr0.eq) goto loc_8292D430;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r31,-8
	ctx.r9.s64 = ctx.r31.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8292D37C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8292d37c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8292D37C;
	// lwz r11,1640(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1640);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8292d3b8
	if (!ctx.cr6.eq) goto loc_8292D3B8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x829309e0
	ctx.lr = 0x8292D3AC;
	sub_829309E0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x8292d3bc
	if (ctx.cr6.eq) goto loc_8292D3BC;
loc_8292D3B8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8292D3BC:
	// stw r11,1640(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1640, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8292d3e4
	if (!ctx.cr6.eq) goto loc_8292D3E4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8292cd38
	ctx.lr = 0x8292D3D4;
	sub_8292CD38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8292d3e8
	if (ctx.cr6.eq) goto loc_8292D3E8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8292d3ec
	goto loc_8292D3EC;
loc_8292D3E4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8292D3E8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8292D3EC:
	// stw r11,1640(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1640, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8292d4f8
	if (ctx.cr6.eq) goto loc_8292D4F8;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r29,1644(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1644, ctx.r29.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r31,-8
	ctx.r9.s64 = ctx.r31.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8292D40C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8292d40c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8292D40C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1518
	ctx.r5.s64 = 1518;
	// addi r6,r11,-19820
	ctx.r6.s64 = ctx.r11.s64 + -19820;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x82932c80
	ctx.lr = 0x8292D430;
	sub_82932C80(ctx, base);
loc_8292D430:
	// li r3,278
	ctx.r3.s64 = 278;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D438:
	// li r3,279
	ctx.r3.s64 = 279;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D440:
	// lbz r11,2225(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2225);
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8292d458
	if (!ctx.cr0.eq) goto loc_8292D458;
	// lbz r11,2224(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2224);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D458:
	// lbz r11,2226(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2226);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8292d4e4
	if (!ctx.cr0.eq) goto loc_8292D4E4;
	// cmpwi cr6,r10,61
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 61, ctx.xer);
	// bne cr6,0x8292d4b0
	if (!ctx.cr6.eq) goto loc_8292D4B0;
	// lbz r11,2224(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2224);
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// beq cr6,0x8292d4a8
	if (ctx.cr6.eq) goto loc_8292D4A8;
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x8292d4a0
	if (ctx.cr6.eq) goto loc_8292D4A0;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// beq cr6,0x8292d498
	if (ctx.cr6.eq) goto loc_8292D498;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x8292d4e4
	if (!ctx.cr6.eq) goto loc_8292D4E4;
	// li r3,273
	ctx.r3.s64 = 273;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D498:
	// li r3,274
	ctx.r3.s64 = 274;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D4A0:
	// li r3,272
	ctx.r3.s64 = 272;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D4A8:
	// li r3,275
	ctx.r3.s64 = 275;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D4B0:
	// lbz r11,2224(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2224);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8292d4e4
	if (!ctx.cr6.eq) goto loc_8292D4E4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// beq cr6,0x8292d4dc
	if (ctx.cr6.eq) goto loc_8292D4DC;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// bne cr6,0x8292d4e4
	if (!ctx.cr6.eq) goto loc_8292D4E4;
	// li r3,277
	ctx.r3.s64 = 277;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D4DC:
	// li r3,276
	ctx.r3.s64 = 276;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D4E4:
	// li r3,281
	ctx.r3.s64 = 281;
	// b 0x8292d4f8
	goto loc_8292D4F8;
loc_8292D4EC:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,2216(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2216, ctx.r11.u32);
loc_8292D4F4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8292D4F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292D500"))) PPC_WEAK_FUNC(sub_8292D500);
PPC_FUNC_IMPL(__imp__sub_8292D500) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// bl 0x8292c3d0
	ctx.lr = 0x8292D518;
	sub_8292C3D0(ctx, base);
	// addi r11,r3,421
	ctx.r11.s64 = ctx.r3.s64 + 421;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x8292d574
	goto loc_8292D574;
loc_8292D52C:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8292D538:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// beq 0x8292d55c
	if (ctx.cr0.eq) goto loc_8292D55C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8292d538
	if (ctx.cr6.eq) goto loc_8292D538;
loc_8292D55C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x8292d594
	if (ctx.cr0.lt) goto loc_8292D594;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8292d580
	if (ctx.cr6.eq) goto loc_8292D580;
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
loc_8292D574:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292d52c
	if (!ctx.cr6.eq) goto loc_8292D52C;
	// b 0x8292d594
	goto loc_8292D594;
loc_8292D580:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bl 0x8292ca08
	ctx.lr = 0x8292D594;
	sub_8292CA08(ctx, base);
loc_8292D594:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292D5A8"))) PPC_WEAK_FUNC(sub_8292D5A8);
PPC_FUNC_IMPL(__imp__sub_8292D5A8) {
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
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82691410
	ctx.lr = 0x8292D5D0;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8292d5f8
	if (ctx.cr0.eq) goto loc_8292D5F8;
	// lwz r10,1652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_8292D5F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292d60c
	if (!ctx.cr6.eq) goto loc_8292D60C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8292d644
	goto loc_8292D644;
loc_8292D60C:
	// lwz r10,2196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,2196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// lwz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8292d638
	if (ctx.cr6.eq) goto loc_8292D638;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8292d63c
	if (!ctx.cr6.eq) goto loc_8292D63C;
loc_8292D638:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8292D63C:
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8292D644:
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

__attribute__((alias("__imp__sub_8292D65C"))) PPC_WEAK_FUNC(sub_8292D65C);
PPC_FUNC_IMPL(__imp__sub_8292D65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292D660"))) PPC_WEAK_FUNC(sub_8292D660);
PPC_FUNC_IMPL(__imp__sub_8292D660) {
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
	// lwz r11,2196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2196);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8292d6b0
	if (!ctx.cr6.eq) goto loc_8292D6B0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1510
	ctx.r5.s64 = 1510;
	// addi r6,r11,-19676
	ctx.r6.s64 = ctx.r11.s64 + -19676;
	// addi r4,r31,2216
	ctx.r4.s64 = ctx.r31.s64 + 2216;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82932c80
	ctx.lr = 0x8292D69C;
	sub_82932C80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8292d6d4
	goto loc_8292D6D4;
loc_8292D6B0:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// bl 0x8292ca08
	ctx.lr = 0x8292D6D0;
	sub_8292CA08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8292D6D4:
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

__attribute__((alias("__imp__sub_8292D6E8"))) PPC_WEAK_FUNC(sub_8292D6E8);
PPC_FUNC_IMPL(__imp__sub_8292D6E8) {
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
	// addi r30,r3,2216
	ctx.r30.s64 = ctx.r3.s64 + 2216;
	// lwz r4,2256(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2256);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,2204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2204);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82933ce8
	ctx.lr = 0x8292D714;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292d808
	if (ctx.cr0.lt) goto loc_8292D808;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8292d788
	if (ctx.cr6.eq) goto loc_8292D788;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8292d788
	if (ctx.cr6.eq) goto loc_8292D788;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8292d7e8
	if (!ctx.cr6.eq) goto loc_8292D7E8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82691410
	ctx.lr = 0x8292D744;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292d76c
	if (ctx.cr0.eq) goto loc_8292D76C;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r8,2224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// b 0x8292d770
	goto loc_8292D770;
loc_8292D76C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8292D770:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292d7bc
	if (!ctx.cr6.eq) goto loc_8292D7BC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8292d808
	goto loc_8292D808;
loc_8292D788:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82691410
	ctx.lr = 0x8292D794;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292d76c
	if (ctx.cr0.eq) goto loc_8292D76C;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,2224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// b 0x8292d770
	goto loc_8292D770;
loc_8292D7BC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,2256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2256);
	// lwz r3,2204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292D7CC;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292d808
	if (ctx.cr0.lt) goto loc_8292D808;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8292d804
	if (ctx.cr6.eq) goto loc_8292D804;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x8292d804
	if (ctx.cr6.eq) goto loc_8292D804;
loc_8292D7E8:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8292d804
	if (ctx.cr6.eq) goto loc_8292D804;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x8292d804
	if (ctx.cr6.eq) goto loc_8292D804;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// bl 0x82933050
	ctx.lr = 0x8292D804;
	sub_82933050(ctx, base);
loc_8292D804:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8292D808:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8292D828"))) PPC_WEAK_FUNC(sub_8292D828);
PPC_FUNC_IMPL(__imp__sub_8292D828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8292D830;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r3,2216
	ctx.r25.s64 = ctx.r3.s64 + 2216;
	// lwz r4,2256(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2256);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,2204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2204);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82933ce8
	ctx.lr = 0x8292D84C;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292d9f4
	if (ctx.cr0.lt) goto loc_8292D9F4;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8292d9d4
	if (!ctx.cr6.eq) goto loc_8292D9D4;
	// lbz r11,2224(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2224);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// bne cr6,0x8292d9d4
	if (!ctx.cr6.eq) goto loc_8292D9D4;
	// lbz r11,2225(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2225);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8292d9d4
	if (!ctx.cr0.eq) goto loc_8292D9D4;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8292d958
	goto loc_8292D958;
loc_8292D884:
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8292d89c
	if (!ctx.cr6.eq) goto loc_8292D89C;
	// lbz r11,2224(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2224);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// beq cr6,0x8292d970
	if (ctx.cr6.eq) goto loc_8292D970;
loc_8292D89C:
	// lbz r11,2225(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2225);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8292d970
	if (ctx.cr0.eq) goto loc_8292D970;
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// bne cr6,0x8292d9d4
	if (!ctx.cr6.eq) goto loc_8292D9D4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8292d8e4
	if (!ctx.cr6.eq) goto loc_8292D8E4;
	// lwz r26,2224(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2224);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8292D8C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8292d8c0
	if (!ctx.cr6.eq) goto loc_8292D8C0;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// b 0x8292d958
	goto loc_8292D958;
loc_8292D8E4:
	// lwz r11,2224(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2224);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8292D8EC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8292d8ec
	if (!ctx.cr6.eq) goto loc_8292D8EC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r28,r29,r30
	ctx.r28.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8292d9d4
	if (ctx.cr6.lt) goto loc_8292D9D4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82967e08
	ctx.lr = 0x8292D924;
	sub_82967E08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8292da04
	if (ctx.cr0.eq) goto loc_8292DA04;
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8292D93C;
	sub_82FA77C0(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// lwz r4,2224(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2224);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x82fa77c0
	ctx.lr = 0x8292D950;
	sub_82FA77C0(ctx, base);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8292D958:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829303a8
	ctx.lr = 0x8292D964;
	sub_829303A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8292d884
	if (!ctx.cr0.lt) goto loc_8292D884;
	// b 0x8292d9f4
	goto loc_8292D9F4;
loc_8292D970:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8292d9a8
	if (ctx.cr6.eq) goto loc_8292D9A8;
	// addi r31,r27,24
	ctx.r31.s64 = ctx.r27.s64 + 24;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82932568
	ctx.lr = 0x8292D988;
	sub_82932568(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292d9f4
	if (ctx.cr0.lt) goto loc_8292D9F4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5180
	ctx.r4.s64 = ctx.r11.s64 + 5180;
	// bl 0x82932568
	ctx.lr = 0x8292D9A0;
	sub_82932568(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292d9f4
	if (ctx.cr0.lt) goto loc_8292D9F4;
loc_8292D9A8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,2256(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2256);
	// lwz r3,2204(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292D9B8;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292d9f4
	if (ctx.cr0.lt) goto loc_8292D9F4;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// beq cr6,0x8292d9f0
	if (ctx.cr6.eq) goto loc_8292D9F0;
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// beq cr6,0x8292d9f0
	if (ctx.cr6.eq) goto loc_8292D9F0;
loc_8292D9D4:
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// beq cr6,0x8292d9f0
	if (ctx.cr6.eq) goto loc_8292D9F0;
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// beq cr6,0x8292d9f0
	if (ctx.cr6.eq) goto loc_8292D9F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2204(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2204);
	// bl 0x82933050
	ctx.lr = 0x8292D9F0;
	sub_82933050(ctx, base);
loc_8292D9F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8292D9F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1636(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1636, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_8292DA04:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8292d9f4
	goto loc_8292D9F4;
}

__attribute__((alias("__imp__sub_8292DA10"))) PPC_WEAK_FUNC(sub_8292DA10);
PPC_FUNC_IMPL(__imp__sub_8292DA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x8292DA18;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,2216
	ctx.r31.s64 = ctx.r3.s64 + 2216;
	// lwz r4,2256(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2256);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,2204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2204);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82933ce8
	ctx.lr = 0x8292DA34;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292dde4
	if (ctx.cr0.lt) goto loc_8292DDE4;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8292ddc4
	if (!ctx.cr6.eq) goto loc_8292DDC4;
	// addi r27,r29,2224
	ctx.r27.s64 = ctx.r29.s64 + 2224;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r10,-29352
	ctx.r10.s64 = ctx.r10.s64 + -29352;
loc_8292DA58:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x8292da7c
	if (ctx.cr0.eq) goto loc_8292DA7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292da58
	if (ctx.cr6.eq) goto loc_8292DA58;
loc_8292DA7C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292ddc4
	if (!ctx.cr0.eq) goto loc_8292DDC4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,2256(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2256);
	// lwz r3,2204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292DA94;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292dde4
	if (ctx.cr0.lt) goto loc_8292DDE4;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 11, ctx.xer);
	// bne cr6,0x8292ddc4
	if (!ctx.cr6.eq) goto loc_8292DDC4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r22,0(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,2256(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2256);
	// lwz r3,2204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292DABC;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292dde4
	if (ctx.cr0.lt) goto loc_8292DDE4;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8292ddc4
	if (!ctx.cr6.eq) goto loc_8292DDC4;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r24,r10,-30056
	ctx.r24.s64 = ctx.r10.s64 + -30056;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_8292DAE0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x8292db04
	if (ctx.cr0.eq) goto loc_8292DB04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292dae0
	if (ctx.cr6.eq) goto loc_8292DAE0;
loc_8292DB04:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292ddc4
	if (!ctx.cr0.eq) goto loc_8292DDC4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,2256(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2256);
	// lwz r3,2204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292DB1C;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292dde4
	if (ctx.cr0.lt) goto loc_8292DDE4;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 11, ctx.xer);
	// bne cr6,0x8292ddc4
	if (!ctx.cr6.eq) goto loc_8292DDC4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r23,0(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// addi r25,r11,26552
	ctx.r25.s64 = ctx.r11.s64 + 26552;
loc_8292DB44:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,2256(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2256);
	// lwz r3,2204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2204);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82933ce8
	ctx.lr = 0x8292DB58;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292dde4
	if (ctx.cr0.lt) goto loc_8292DDE4;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8292ddc4
	if (!ctx.cr6.eq) goto loc_8292DDC4;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8292DB74:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x8292db98
	if (ctx.cr0.eq) goto loc_8292DB98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292db74
	if (ctx.cr6.eq) goto loc_8292DB74;
loc_8292DB98:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292ddc4
	if (!ctx.cr0.eq) goto loc_8292DDC4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,2256(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2256);
	// lwz r3,2204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292DBB0;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292dde4
	if (ctx.cr0.lt) goto loc_8292DDE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8292dc14
	if (!ctx.cr6.eq) goto loc_8292DC14;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8292DBCC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292dbf0
	if (ctx.cr0.eq) goto loc_8292DBF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292dbcc
	if (ctx.cr6.eq) goto loc_8292DBCC;
loc_8292DBF0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292dc14
	if (!ctx.cr0.eq) goto loc_8292DC14;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,2256(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2256);
	// lwz r3,2204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2204);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82933ce8
	ctx.lr = 0x8292DC0C;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292dde4
	if (ctx.cr0.lt) goto loc_8292DDE4;
loc_8292DC14:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8292dc58
	if (ctx.cr6.eq) goto loc_8292DC58;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8292dc48
	if (ctx.cr6.eq) goto loc_8292DC48;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x8292dc58
	if (ctx.cr6.eq) goto loc_8292DC58;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// ble cr6,0x8292ddc4
	if (!ctx.cr6.gt) goto loc_8292DDC4;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bgt cr6,0x8292ddc4
	if (ctx.cr6.gt) goto loc_8292DDC4;
	// lfd f0,0(r27)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// b 0x8292dc68
	goto loc_8292DC68;
loc_8292DC48:
	// lwa r11,0(r27)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r27.u32 + 0));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x8292dc64
	goto loc_8292DC64;
loc_8292DC58:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_8292DC64:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
loc_8292DC68:
	// stfd f0,0(r28)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.f0.u64);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8292dc7c
	if (ctx.cr6.eq) goto loc_8292DC7C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfd f0,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.f0.u64);
loc_8292DC7C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// blt cr6,0x8292db44
	if (ctx.cr6.lt) goto loc_8292DB44;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,2256(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2256);
	// lwz r3,2204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292DC9C;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292dde4
	if (ctx.cr0.lt) goto loc_8292DDE4;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8292ddc4
	if (!ctx.cr6.eq) goto loc_8292DDC4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r10,27536
	ctx.r10.s64 = ctx.r10.s64 + 27536;
loc_8292DCBC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x8292dce0
	if (ctx.cr0.eq) goto loc_8292DCE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292dcbc
	if (ctx.cr6.eq) goto loc_8292DCBC;
loc_8292DCE0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292ddc4
	if (!ctx.cr0.eq) goto loc_8292DDC4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,2256(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2256);
	// lwz r3,2204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292DCF8;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292dde4
	if (ctx.cr0.lt) goto loc_8292DDE4;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// beq cr6,0x8292dd14
	if (ctx.cr6.eq) goto loc_8292DD14;
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// bne cr6,0x8292ddc4
	if (!ctx.cr6.eq) goto loc_8292DDC4;
loc_8292DD14:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82691410
	ctx.lr = 0x8292DD20;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292dd38
	if (ctx.cr0.eq) goto loc_8292DD38;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// b 0x8292dd3c
	goto loc_8292DD3C;
loc_8292DD38:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8292DD3C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8292dd50
	if (!ctx.cr6.eq) goto loc_8292DD50;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8292dde4
	goto loc_8292DDE4;
loc_8292DD50:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// addi r30,r29,68
	ctx.r30.s64 = ctx.r29.s64 + 68;
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// ld r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// std r8,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r8.u64);
	// std r10,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r10.u64);
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// b 0x8292ddac
	goto loc_8292DDAC;
loc_8292DD8C:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82fa4460
	ctx.lr = 0x8292DD98;
	sub_82FA4460(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8292ddb4
	if (!ctx.cr0.lt) goto loc_8292DDB4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r11,40
	ctx.r30.s64 = ctx.r11.s64 + 40;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_8292DDAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292dd8c
	if (!ctx.cr6.eq) goto loc_8292DD8C;
loc_8292DDB4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// b 0x8292dde0
	goto loc_8292DDE0;
loc_8292DDC4:
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// beq cr6,0x8292dde0
	if (ctx.cr6.eq) goto loc_8292DDE0;
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// beq cr6,0x8292dde0
	if (ctx.cr6.eq) goto loc_8292DDE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2204);
	// bl 0x82933050
	ctx.lr = 0x8292DDE0;
	sub_82933050(ctx, base);
loc_8292DDE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8292DDE4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1636(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1636, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292DDF4"))) PPC_WEAK_FUNC(sub_8292DDF4);
PPC_FUNC_IMPL(__imp__sub_8292DDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292DDF8"))) PPC_WEAK_FUNC(sub_8292DDF8);
PPC_FUNC_IMPL(__imp__sub_8292DDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8292DE00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8292c3d0
	ctx.lr = 0x8292DE18;
	sub_8292C3D0(ctx, base);
	// addi r11,r3,421
	ctx.r11.s64 = ctx.r3.s64 + 421;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// b 0x8292de74
	goto loc_8292DE74;
loc_8292DE2C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8292DE38:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292de5c
	if (ctx.cr0.eq) goto loc_8292DE5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292de38
	if (ctx.cr6.eq) goto loc_8292DE38;
loc_8292DE5C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x8292decc
	if (ctx.cr0.lt) goto loc_8292DECC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292de80
	if (ctx.cr6.eq) goto loc_8292DE80;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r31,r4,12
	ctx.r31.s64 = ctx.r4.s64 + 12;
loc_8292DE74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292de2c
	if (!ctx.cr6.eq) goto loc_8292DE2C;
	// b 0x8292decc
	goto loc_8292DECC;
loc_8292DE80:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8292c420
	ctx.lr = 0x8292DE8C;
	sub_8292C420(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8292deb0
	if (!ctx.cr0.eq) goto loc_8292DEB0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r11,-19656
	ctx.r6.s64 = ctx.r11.s64 + -19656;
	// li r5,1519
	ctx.r5.s64 = 1519;
	// addi r4,r30,2216
	ctx.r4.s64 = ctx.r30.s64 + 2216;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82932e48
	ctx.lr = 0x8292DEB0;
	sub_82932E48(ctx, base);
loc_8292DEB0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x8292ca08
	ctx.lr = 0x8292DECC;
	sub_8292CA08(ctx, base);
loc_8292DECC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292DEE4"))) PPC_WEAK_FUNC(sub_8292DEE4);
PPC_FUNC_IMPL(__imp__sub_8292DEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292DEE8"))) PPC_WEAK_FUNC(sub_8292DEE8);
PPC_FUNC_IMPL(__imp__sub_8292DEE8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82691410
	ctx.lr = 0x8292DF10;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292df3c
	if (ctx.cr0.eq) goto loc_8292DF3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// b 0x8292df40
	goto loc_8292DF40;
loc_8292DF3C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8292DF40:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8292df54
	if (!ctx.cr6.eq) goto loc_8292DF54;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8292df5c
	goto loc_8292DF5C;
loc_8292DF54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8292ddf8
	ctx.lr = 0x8292DF5C;
	sub_8292DDF8(ctx, base);
loc_8292DF5C:
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

__attribute__((alias("__imp__sub_8292DF74"))) PPC_WEAK_FUNC(sub_8292DF74);
PPC_FUNC_IMPL(__imp__sub_8292DF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292DF78"))) PPC_WEAK_FUNC(sub_8292DF78);
PPC_FUNC_IMPL(__imp__sub_8292DF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8292DF80;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82691410
	ctx.lr = 0x8292DF9C;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x8292dfc8
	if (ctx.cr0.eq) goto loc_8292DFC8;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stb r31,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r31.u8);
	// stb r31,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r31.u8);
	// b 0x8292dfcc
	goto loc_8292DFCC;
loc_8292DFC8:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8292DFCC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8292dfe0
	if (!ctx.cr6.eq) goto loc_8292DFE0;
loc_8292DFD4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8292e034
	goto loc_8292E034;
loc_8292DFE0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82967f50
	ctx.lr = 0x8292DFF4;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292e008
	if (ctx.cr0.eq) goto loc_8292E008;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82968578
	ctx.lr = 0x8292E004;
	sub_82968578(ctx, base);
	// b 0x8292e00c
	goto loc_8292E00C;
loc_8292E008:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8292E00C:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8292e028
	if (!ctx.cr6.eq) goto loc_8292E028;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8292ca08
	ctx.lr = 0x8292E024;
	sub_8292CA08(ctx, base);
	// b 0x8292dfd4
	goto loc_8292DFD4;
loc_8292E028:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8292ddf8
	ctx.lr = 0x8292E034;
	sub_8292DDF8(ctx, base);
loc_8292E034:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292E03C"))) PPC_WEAK_FUNC(sub_8292E03C);
PPC_FUNC_IMPL(__imp__sub_8292E03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292E040"))) PPC_WEAK_FUNC(sub_8292E040);
PPC_FUNC_IMPL(__imp__sub_8292E040) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,-19556
	ctx.r11.s64 = ctx.r11.s64 + -19556;
loc_8292E060:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292e084
	if (ctx.cr0.eq) goto loc_8292E084;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292e060
	if (ctx.cr6.eq) goto loc_8292E060;
loc_8292E084:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292e094
	if (!ctx.cr0.eq) goto loc_8292E094;
	// lwz r3,2240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// b 0x8292e128
	goto loc_8292E128;
loc_8292E094:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292c7c8
	ctx.lr = 0x8292E0A4;
	sub_8292C7C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8292e124
	if (ctx.cr0.eq) goto loc_8292E124;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292e0d8
	if (ctx.cr6.eq) goto loc_8292E0D8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1517
	ctx.r5.s64 = 1517;
	// addi r6,r11,-19624
	ctx.r6.s64 = ctx.r11.s64 + -19624;
	// addi r4,r31,2216
	ctx.r4.s64 = ctx.r31.s64 + 2216;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82932c80
	ctx.lr = 0x8292E0D0;
	sub_82932C80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8292e128
	goto loc_8292E128;
loc_8292E0D8:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8292e10c
	if (ctx.cr6.eq) goto loc_8292E10C;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292e10c
	if (!ctx.cr6.eq) goto loc_8292E10C;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8292e10c
	if (ctx.cr6.lt) goto loc_8292E10C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x8292e10c
	if (ctx.cr6.gt) goto loc_8292E10C;
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// b 0x8292e128
	goto loc_8292E128;
loc_8292E10C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1518
	ctx.r5.s64 = 1518;
	// addi r6,r11,-19820
	ctx.r6.s64 = ctx.r11.s64 + -19820;
	// addi r4,r31,2216
	ctx.r4.s64 = ctx.r31.s64 + 2216;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82932c80
	ctx.lr = 0x8292E124;
	sub_82932C80(ctx, base);
loc_8292E124:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8292E128:
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

__attribute__((alias("__imp__sub_8292E13C"))) PPC_WEAK_FUNC(sub_8292E13C);
PPC_FUNC_IMPL(__imp__sub_8292E13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292E140"))) PPC_WEAK_FUNC(sub_8292E140);
PPC_FUNC_IMPL(__imp__sub_8292E140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8292e180
	if (!ctx.cr6.gt) goto loc_8292E180;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8292e194
	goto loc_8292E194;
loc_8292E180:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82927410
	ctx.lr = 0x8292E194;
	sub_82927410(ctx, base);
loc_8292E194:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292E1A4"))) PPC_WEAK_FUNC(sub_8292E1A4);
PPC_FUNC_IMPL(__imp__sub_8292E1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292E1A8"))) PPC_WEAK_FUNC(sub_8292E1A8);
PPC_FUNC_IMPL(__imp__sub_8292E1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8292E1B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292e210
	if (ctx.cr6.eq) goto loc_8292E210;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8292E1E4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8292e1fc
	if (ctx.cr0.eq) goto loc_8292E1FC;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8292e1e4
	if (!ctx.cr0.eq) goto loc_8292E1E4;
loc_8292E1FC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8292e210
	if (ctx.cr6.eq) goto loc_8292E210;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x8292e218
	goto loc_8292E218;
loc_8292E210:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8292E218:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8292e290
	if (ctx.cr6.lt) goto loc_8292E290;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x82967e08
	ctx.lr = 0x8292E238;
	sub_82967E08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// bne 0x8292e250
	if (!ctx.cr0.eq) goto loc_8292E250;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8292e290
	goto loc_8292E290;
loc_8292E250:
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82fa77c0
	ctx.lr = 0x8292E25C;
	sub_82FA77C0(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82931ab8
	ctx.lr = 0x8292E284;
	sub_82931AB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292e290
	if (ctx.cr0.lt) goto loc_8292E290;
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
loc_8292E290:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292E298"))) PPC_WEAK_FUNC(sub_8292E298);
PPC_FUNC_IMPL(__imp__sub_8292E298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x8292E2A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8292e2fc
	if (ctx.cr6.eq) goto loc_8292E2FC;
	// lis r3,0
	ctx.r3.s64 = 0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,260
	ctx.r8.s64 = 260;
	// addi r7,r1,624
	ctx.r7.s64 = ctx.r1.s64 + 624;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82a831c8
	ctx.lr = 0x8292E2F4;
	sub_82A831C8(ctx, base);
	// addi r30,r1,624
	ctx.r30.s64 = ctx.r1.s64 + 624;
	// b 0x8292e300
	goto loc_8292E300;
loc_8292E2FC:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8292E300:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292e44c
	if (ctx.cr6.eq) goto loc_8292E44C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fad3f8
	ctx.lr = 0x8292E314;
	sub_82FAD3F8(ctx, base);
	// addi r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82967e08
	ctx.lr = 0x8292E328;
	sub_82967E08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// bne 0x8292e340
	if (!ctx.cr0.eq) goto loc_8292E340;
loc_8292E334:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8292e4e8
	goto loc_8292E4E8;
loc_8292E340:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8292E34C;
	sub_82FA77C0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r10,260
	ctx.r10.s64 = 260;
	// stb r29,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r29.u8);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r31,124
	ctx.r8.s64 = ctx.r31.s64 + 124;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r7,r31,116
	ctx.r7.s64 = ctx.r31.s64 + 116;
	// lwz r6,1068(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r4,1060(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8292E384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8292e3e4
	if (!ctx.cr0.lt) goto loc_8292E3E4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8292e3c4
	if (ctx.cr6.eq) goto loc_8292E3C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,260
	ctx.r8.s64 = 260;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a831c8
	ctx.lr = 0x8292E3B8;
	sub_82A831C8(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r29,339(r1)
	PPC_STORE_U8(ctx.r1.u32 + 339, ctx.r29.u8);
	// b 0x8292e3c8
	goto loc_8292E3C8;
loc_8292E3C4:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_8292E3C8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1507
	ctx.r5.s64 = 1507;
	// addi r6,r11,-19544
	ctx.r6.s64 = ctx.r11.s64 + -19544;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82932c80
	ctx.lr = 0x8292E3E0;
	sub_82932C80(ctx, base);
	// b 0x8292e4e4
	goto loc_8292E4E4;
loc_8292E3E4:
	// lbz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 352);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8292e4c8
	if (ctx.cr0.eq) goto loc_8292E4C8;
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// stb r29,611(r1)
	PPC_STORE_U8(ctx.r1.u32 + 611, ctx.r29.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8292E3FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8292e3fc
	if (!ctx.cr6.eq) goto loc_8292E3FC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82967e08
	ctx.lr = 0x8292E42C;
	sub_82967E08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8292e334
	if (ctx.cr0.eq) goto loc_8292E334;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8292E444;
	sub_82FA77C0(ctx, base);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// b 0x8292e4c8
	goto loc_8292E4C8;
loc_8292E44C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292b710
	ctx.lr = 0x8292E45C;
	sub_8292B710(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8292e4e4
	if (ctx.cr0.lt) goto loc_8292E4E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x829587e8
	ctx.lr = 0x8292E474;
	sub_829587E8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8292e4b8
	if (!ctx.cr0.lt) goto loc_8292E4B8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8292e3c4
	if (ctx.cr6.eq) goto loc_8292E3C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,260
	ctx.r8.s64 = 260;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a831c8
	ctx.lr = 0x8292E4A8;
	sub_82A831C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r11,339(r1)
	PPC_STORE_U8(ctx.r1.u32 + 339, ctx.r11.u8);
	// b 0x8292e3c8
	goto loc_8292E3C8;
loc_8292E4B8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
loc_8292E4C8:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r7,1076(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1076);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292e1a8
	ctx.lr = 0x8292E4E0;
	sub_8292E1A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8292E4E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8292E4E8:
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292E4F0"))) PPC_WEAK_FUNC(sub_8292E4F0);
PPC_FUNC_IMPL(__imp__sub_8292E4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8292E4F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8292e52c
	if (ctx.cr6.eq) goto loc_8292E52C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8292e52c
	if (!ctx.cr6.eq) goto loc_8292E52C;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x8292e564
	goto loc_8292E564;
loc_8292E52C:
	// stw r5,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r5.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r6,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292b710
	ctx.lr = 0x8292E544;
	sub_8292B710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292e564
	if (ctx.cr0.lt) goto loc_8292E564;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292e1a8
	ctx.lr = 0x8292E564;
	sub_8292E1A8(ctx, base);
loc_8292E564:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292E56C"))) PPC_WEAK_FUNC(sub_8292E56C);
PPC_FUNC_IMPL(__imp__sub_8292E56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292E570"))) PPC_WEAK_FUNC(sub_8292E570);
PPC_FUNC_IMPL(__imp__sub_8292E570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8292E578;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8292e594
	if (ctx.cr6.eq) goto loc_8292E594;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8292cb20
	ctx.lr = 0x8292E594;
	sub_8292CB20(ctx, base);
loc_8292E594:
	// lwz r3,1680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8292e5a8
	if (ctx.cr6.eq) goto loc_8292E5A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8292cac0
	ctx.lr = 0x8292E5A8;
	sub_8292CAC0(ctx, base);
loc_8292E5A8:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8292e5bc
	if (ctx.cr6.eq) goto loc_8292E5BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8292cb80
	ctx.lr = 0x8292E5BC;
	sub_8292CB80(ctx, base);
loc_8292E5BC:
	// addi r30,r31,1684
	ctx.r30.s64 = ctx.r31.s64 + 1684;
	// li r29,127
	ctx.r29.s64 = 127;
loc_8292E5C4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8292e5d8
	if (ctx.cr6.eq) goto loc_8292E5D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8292ca08
	ctx.lr = 0x8292E5D8;
	sub_8292CA08(ctx, base);
loc_8292E5D8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8292e5c4
	if (!ctx.cr0.eq) goto loc_8292E5C4;
	// b 0x8292e608
	goto loc_8292E608;
loc_8292E5E8:
	// lwz r30,2200(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2200);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r11,2200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2200, ctx.r11.u32);
	// bl 0x8292ca68
	ctx.lr = 0x8292E5FC;
	sub_8292CA68(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691460
	ctx.lr = 0x8292E608;
	sub_82691460(ctx, base);
loc_8292E608:
	// lwz r11,2200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292e5e8
	if (!ctx.cr6.eq) goto loc_8292E5E8;
	// lwz r11,2264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8292e628
	if (ctx.cr6.eq) goto loc_8292E628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292b8a0
	ctx.lr = 0x8292E628;
	sub_8292B8A0(ctx, base);
loc_8292E628:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x828b2440
	ctx.lr = 0x8292E630;
	sub_828B2440(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x829322b0
	ctx.lr = 0x8292E638;
	sub_829322B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82967db8
	ctx.lr = 0x8292E640;
	sub_82967DB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292E648"))) PPC_WEAK_FUNC(sub_8292E648);
PPC_FUNC_IMPL(__imp__sub_8292E648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8292E650;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r8,r11,65535
	ctx.r8.u64 = ctx.r11.u64 | 65535;
	// beq cr6,0x8292e6bc
	if (ctx.cr6.eq) goto loc_8292E6BC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8292E67C:
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x8292e694
	if (ctx.cr0.eq) goto loc_8292E694;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x8292e67c
	if (!ctx.cr0.eq) goto loc_8292E67C;
loc_8292E694:
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r3,r10,87
	ctx.r3.u64 = ctx.r10.u64 | 87;
	// bne cr6,0x8292e6b0
	if (!ctx.cr6.eq) goto loc_8292E6B0;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8292e6b4
	goto loc_8292E6B4;
loc_8292E6B0:
	// subf r29,r11,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_8292E6B4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8292e6cc
	goto loc_8292E6CC;
loc_8292E6BC:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r3,r11,87
	ctx.r3.u64 = ctx.r11.u64 | 87;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8292E6CC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8292e7dc
	if (ctx.cr6.lt) goto loc_8292E7DC;
	// clrlwi. r28,r6,24
	ctx.r28.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8292e73c
	if (ctx.cr0.eq) goto loc_8292E73C;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65533
	ctx.r11.u64 = ctx.r11.u64 | 65533;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8292e7e0
	if (!ctx.cr6.lt) goto loc_8292E7E0;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8292e73c
	if (ctx.cr0.eq) goto loc_8292E73C;
loc_8292E700:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// blt cr6,0x8292e730
	if (ctx.cr6.lt) goto loc_8292E730;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// ble cr6,0x8292e724
	if (!ctx.cr6.gt) goto loc_8292E724;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8292e724
	if (ctx.cr6.eq) goto loc_8292E724;
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x8292e730
	if (!ctx.cr6.eq) goto loc_8292E730;
loc_8292E724:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8292e7e0
	if (!ctx.cr6.lt) goto loc_8292E7E0;
loc_8292E730:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb. r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292e700
	if (!ctx.cr0.eq) goto loc_8292E700;
loc_8292E73C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82967e08
	ctx.lr = 0x8292E74C;
	sub_82967E08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8292e7c0
	if (ctx.cr6.eq) goto loc_8292E7C0;
	// li r8,34
	ctx.r8.s64 = 34;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// b 0x8292e7b0
	goto loc_8292E7B0;
loc_8292E770:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// blt cr6,0x8292e7a0
	if (ctx.cr6.lt) goto loc_8292E7A0;
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// ble cr6,0x8292e794
	if (!ctx.cr6.gt) goto loc_8292E794;
	// cmplwi cr6,r9,13
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 13, ctx.xer);
	// beq cr6,0x8292e794
	if (ctx.cr6.eq) goto loc_8292E794;
	// cmplwi cr6,r9,92
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 92, ctx.xer);
	// bne cr6,0x8292e7a0
	if (!ctx.cr6.eq) goto loc_8292E7A0;
loc_8292E794:
	// li r9,92
	ctx.r9.s64 = 92;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8292E7A0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_8292E7B0:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8292e770
	if (!ctx.cr0.eq) goto loc_8292E770;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// b 0x8292e7d0
	goto loc_8292E7D0;
loc_8292E7C0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8292E7D0;
	sub_82FA77C0(ctx, base);
loc_8292E7D0:
	// stw r31,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r29.u32);
loc_8292E7DC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8292E7E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292E7E8"))) PPC_WEAK_FUNC(sub_8292E7E8);
PPC_FUNC_IMPL(__imp__sub_8292E7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8292E7F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,-10268
	ctx.r5.s64 = ctx.r11.s64 + -10268;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292e140
	ctx.lr = 0x8292E814;
	sub_8292E140(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292e890
	if (ctx.cr0.lt) goto loc_8292E890;
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8292E828:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8292e840
	if (ctx.cr0.eq) goto loc_8292E840;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x8292e828
	if (!ctx.cr0.eq) goto loc_8292E828;
loc_8292E840:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292e858
	if (!ctx.cr6.eq) goto loc_8292E858;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8292e85c
	goto loc_8292E85C;
loc_8292E858:
	// subfic r31,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r31.s64 = 31 - ctx.r11.s64;
loc_8292E85C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8292e890
	if (ctx.cr6.lt) goto loc_8292E890;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82967e08
	ctx.lr = 0x8292E874;
	sub_82967E08(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8292E884;
	sub_82FA77C0(ctx, base);
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8292E890:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292E898"))) PPC_WEAK_FUNC(sub_8292E898);
PPC_FUNC_IMPL(__imp__sub_8292E898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1652);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r10,1640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1640, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8292e96c
	if (ctx.cr6.eq) goto loc_8292E96C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-19472
	ctx.r10.s64 = ctx.r10.s64 + -19472;
loc_8292E8D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292e8f4
	if (ctx.cr0.eq) goto loc_8292E8F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292e8d0
	if (ctx.cr6.eq) goto loc_8292E8D0;
loc_8292E8F4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292e940
	if (!ctx.cr0.eq) goto loc_8292E940;
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8292e92c
	if (ctx.cr6.eq) goto loc_8292E92C;
	// lwz r11,2216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// addi r4,r31,2216
	ctx.r4.s64 = ctx.r31.s64 + 2216;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8292e92c
	if (!ctx.cr6.eq) goto loc_8292E92C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r7,2224(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// li r5,1504
	ctx.r5.s64 = 1504;
	// addi r6,r11,-19508
	ctx.r6.s64 = ctx.r11.s64 + -19508;
	// b 0x8292e964
	goto loc_8292E964;
loc_8292E92C:
	// addi r5,r31,2216
	ctx.r5.s64 = ctx.r31.s64 + 2216;
	// li r4,1500
	ctx.r4.s64 = 1500;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82932e90
	ctx.lr = 0x8292E93C;
	sub_82932E90(ctx, base);
	// b 0x8292e96c
	goto loc_8292E96C;
loc_8292E940:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82927410
	ctx.lr = 0x8292E950;
	sub_82927410(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,-24420
	ctx.r6.s64 = ctx.r11.s64 + -24420;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,2216
	ctx.r4.s64 = ctx.r31.s64 + 2216;
loc_8292E964:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82932c80
	ctx.lr = 0x8292E96C;
	sub_82932C80(ctx, base);
loc_8292E96C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292E980"))) PPC_WEAK_FUNC(sub_8292E980);
PPC_FUNC_IMPL(__imp__sub_8292E980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x8292E988;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// bl 0x82691410
	ctx.lr = 0x8292E9A8;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// beq 0x8292e9d4
	if (ctx.cr0.eq) goto loc_8292E9D4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// stw r23,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r23.u32);
	// stb r23,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r23.u8);
	// stb r23,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r23.u8);
	// b 0x8292e9d8
	goto loc_8292E9D8;
loc_8292E9D4:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_8292E9D8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8292ecc0
	if (ctx.cr6.eq) goto loc_8292ECC0;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8292ebc8
	if (ctx.cr0.eq) goto loc_8292EBC8;
	// lwz r3,2204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2204);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8292ebc8
	if (!ctx.cr6.lt) goto loc_8292EBC8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// bne cr6,0x8292ebc8
	if (!ctx.cr6.eq) goto loc_8292EBC8;
	// addi r28,r30,2216
	ctx.r28.s64 = ctx.r30.s64 + 2216;
	// lwz r4,2256(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2256);
	// addi r26,r24,4
	ctx.r26.s64 = ctx.r24.s64 + 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// bl 0x82933ce8
	ctx.lr = 0x8292EA24;
	sub_82933CE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292ecf4
	if (ctx.cr0.lt) goto loc_8292ECF4;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r27,r11,-30056
	ctx.r27.s64 = ctx.r11.s64 + -30056;
	// addi r25,r10,-19456
	ctx.r25.s64 = ctx.r10.s64 + -19456;
loc_8292EA3C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,2256(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2256);
	// lwz r3,2204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x8292EA4C;
	sub_82933CE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292ecf4
	if (ctx.cr0.lt) goto loc_8292ECF4;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r7,11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 11, ctx.xer);
	// bne cr6,0x8292eb90
	if (!ctx.cr6.eq) goto loc_8292EB90;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8292eac8
	if (ctx.cr6.eq) goto loc_8292EAC8;
	// lwz r7,2224(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2224);
loc_8292EA70:
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8292EA78:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq 0x8292ea9c
	if (ctx.cr0.eq) goto loc_8292EA9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292ea78
	if (ctx.cr6.eq) goto loc_8292EA78;
loc_8292EA9C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8292eab4
	if (ctx.cr0.eq) goto loc_8292EAB4;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8292ea70
	if (!ctx.cr6.eq) goto loc_8292EA70;
	// b 0x8292eac8
	goto loc_8292EAC8;
loc_8292EAB4:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,1511
	ctx.r5.s64 = 1511;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82932c80
	ctx.lr = 0x8292EAC8;
	sub_82932C80(ctx, base);
loc_8292EAC8:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82967f50
	ctx.lr = 0x8292EAD0;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292eae8
	if (ctx.cr0.eq) goto loc_8292EAE8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82968578
	ctx.lr = 0x8292EAE0;
	sub_82968578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8292eaec
	goto loc_8292EAEC;
loc_8292EAE8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8292EAEC:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292ecc0
	if (ctx.cr6.eq) goto loc_8292ECC0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,2256(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2256);
	// lwz r3,2204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2204);
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// bl 0x82933ce8
	ctx.lr = 0x8292EB0C;
	sub_82933CE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292ecf4
	if (ctx.cr0.lt) goto loc_8292ECF4;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8292eb90
	if (!ctx.cr6.eq) goto loc_8292EB90;
	// addi r8,r30,2224
	ctx.r8.s64 = ctx.r30.s64 + 2224;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8292EB2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq 0x8292eb50
	if (ctx.cr0.eq) goto loc_8292EB50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292eb2c
	if (ctx.cr6.eq) goto loc_8292EB2C;
loc_8292EB50:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8292ea3c
	if (ctx.cr0.eq) goto loc_8292EA3C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r11,r11,27536
	ctx.r11.s64 = ctx.r11.s64 + 27536;
loc_8292EB64:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292eb88
	if (ctx.cr0.eq) goto loc_8292EB88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292eb64
	if (ctx.cr6.eq) goto loc_8292EB64;
loc_8292EB88:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8292ebc8
	if (ctx.cr0.eq) goto loc_8292EBC8;
loc_8292EB90:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// beq cr6,0x8292eba4
	if (ctx.cr6.eq) goto loc_8292EBA4;
	// cmpwi cr6,r7,17
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 17, ctx.xer);
	// bne cr6,0x8292eba8
	if (!ctx.cr6.eq) goto loc_8292EBA8;
loc_8292EBA4:
	// stw r29,1636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1636, ctx.r29.u32);
loc_8292EBA8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1500
	ctx.r4.s64 = 1500;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82932e90
	ctx.lr = 0x8292EBB8;
	sub_82932E90(ctx, base);
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// stw r29,1640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1640, ctx.r29.u32);
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// b 0x8292ecf4
	goto loc_8292ECF4;
loc_8292EBC8:
	// addi r28,r24,8
	ctx.r28.s64 = ctx.r24.s64 + 8;
loc_8292EBCC:
	// lwz r11,1668(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1668);
	// addi r29,r30,2216
	ctx.r29.s64 = ctx.r30.s64 + 2216;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292ec2c
	if (ctx.cr6.eq) goto loc_8292EC2C;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r8,r29,-8
	ctx.r8.s64 = ctx.r29.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8292EBEC:
	// ldu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x8292ebec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8292EBEC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,1668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1668, ctx.r10.u32);
	// stw r23,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r23.u32);
	// lwz r11,2204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2204);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,2232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2232, ctx.r10.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,2240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2240, ctx.r10.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,2244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2244, ctx.r10.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,2236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2236, ctx.r11.u32);
	// b 0x8292ec48
	goto loc_8292EC48;
loc_8292EC2C:
	// lwz r11,2256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2256);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,2204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2204);
	// ori r4,r11,16
	ctx.r4.u64 = ctx.r11.u64 | 16;
	// bl 0x82933ce8
	ctx.lr = 0x8292EC40;
	sub_82933CE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292ecf4
	if (ctx.cr0.lt) goto loc_8292ECF4;
loc_8292EC48:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8292eccc
	if (ctx.cr6.eq) goto loc_8292ECCC;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x8292eccc
	if (ctx.cr6.eq) goto loc_8292ECCC;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82967f50
	ctx.lr = 0x8292EC64;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292ec7c
	if (ctx.cr0.eq) goto loc_8292EC7C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82968578
	ctx.lr = 0x8292EC74;
	sub_82968578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8292ec80
	goto loc_8292EC80;
loc_8292EC7C:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_8292EC80:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8292ecc0
	if (ctx.cr6.eq) goto loc_8292ECC0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2252(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2252);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82967e08
	ctx.lr = 0x8292EC98;
	sub_82967E08(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8292ecc0
	if (ctx.cr0.eq) goto loc_8292ECC0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,2252(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2252);
	// lwz r4,2248(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2248);
	// bl 0x82fa77c0
	ctx.lr = 0x8292ECB0;
	sub_82FA77C0(ctx, base);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// b 0x8292ebcc
	goto loc_8292EBCC;
loc_8292ECC0:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x8292ecf4
	goto loc_8292ECF4;
loc_8292ECCC:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r11,1636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1636, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r22,17(r24)
	PPC_STORE_U8(ctx.r24.u32 + 17, ctx.r22.u8);
	// bl 0x8292ddf8
	ctx.lr = 0x8292ECE4;
	sub_8292DDF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292ecf4
	if (ctx.cr0.lt) goto loc_8292ECF4;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_8292ECF4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8292ed08
	if (ctx.cr6.eq) goto loc_8292ED08;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8292ca08
	ctx.lr = 0x8292ED08;
	sub_8292CA08(ctx, base);
loc_8292ED08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292ED14"))) PPC_WEAK_FUNC(sub_8292ED14);
PPC_FUNC_IMPL(__imp__sub_8292ED14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292ED18"))) PPC_WEAK_FUNC(sub_8292ED18);
PPC_FUNC_IMPL(__imp__sub_8292ED18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8292ED20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,2216
	ctx.r30.s64 = ctx.r3.s64 + 2216;
	// lwz r4,2256(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2256);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,2204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2204);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82933ce8
	ctx.lr = 0x8292ED3C;
	sub_82933CE8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292eef0
	if (ctx.cr0.lt) goto loc_8292EEF0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8292eec8
	if (!ctx.cr6.eq) goto loc_8292EEC8;
	// lwz r7,2224(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,-19360
	ctx.r10.s64 = ctx.r10.s64 + -19360;
loc_8292ED68:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292ed8c
	if (ctx.cr0.eq) goto loc_8292ED8C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292ed68
	if (ctx.cr6.eq) goto loc_8292ED68;
loc_8292ED8C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292eda0
	if (!ctx.cr0.eq) goto loc_8292EDA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292bc50
	ctx.lr = 0x8292ED9C;
	sub_8292BC50(ctx, base);
	// b 0x8292eef4
	goto loc_8292EEF4;
loc_8292EDA0:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,-19368
	ctx.r10.s64 = ctx.r10.s64 + -19368;
loc_8292EDAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292edd0
	if (ctx.cr0.eq) goto loc_8292EDD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292edac
	if (ctx.cr6.eq) goto loc_8292EDAC;
loc_8292EDD0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292ede4
	if (!ctx.cr0.eq) goto loc_8292EDE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292be48
	ctx.lr = 0x8292EDE0;
	sub_8292BE48(ctx, base);
	// b 0x8292eef4
	goto loc_8292EEF4;
loc_8292EDE4:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,-19372
	ctx.r10.s64 = ctx.r10.s64 + -19372;
loc_8292EDF0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292ee14
	if (ctx.cr0.eq) goto loc_8292EE14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292edf0
	if (ctx.cr6.eq) goto loc_8292EDF0;
loc_8292EE14:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292ee28
	if (!ctx.cr0.eq) goto loc_8292EE28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292da10
	ctx.lr = 0x8292EE24;
	sub_8292DA10(ctx, base);
	// b 0x8292eef4
	goto loc_8292EEF4;
loc_8292EE28:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,-19384
	ctx.r10.s64 = ctx.r10.s64 + -19384;
loc_8292EE34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292ee58
	if (ctx.cr0.eq) goto loc_8292EE58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292ee34
	if (ctx.cr6.eq) goto loc_8292EE34;
loc_8292EE58:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292ee6c
	if (!ctx.cr0.eq) goto loc_8292EE6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292d6e8
	ctx.lr = 0x8292EE68;
	sub_8292D6E8(ctx, base);
	// b 0x8292eef4
	goto loc_8292EEF4;
loc_8292EE6C:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,-19392
	ctx.r10.s64 = ctx.r10.s64 + -19392;
loc_8292EE78:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8292ee9c
	if (ctx.cr0.eq) goto loc_8292EE9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8292ee78
	if (ctx.cr6.eq) goto loc_8292EE78;
loc_8292EE9C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8292eeb0
	if (!ctx.cr0.eq) goto loc_8292EEB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292d828
	ctx.lr = 0x8292EEAC;
	sub_8292D828(ctx, base);
	// b 0x8292eef4
	goto loc_8292EEF4;
loc_8292EEB0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,3568
	ctx.r5.s64 = 3568;
	// addi r6,r11,-19424
	ctx.r6.s64 = ctx.r11.s64 + -19424;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82932e48
	ctx.lr = 0x8292EEC8;
	sub_82932E48(ctx, base);
loc_8292EEC8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8292eee8
	if (ctx.cr6.eq) goto loc_8292EEE8;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x8292eee8
	if (ctx.cr6.eq) goto loc_8292EEE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// bl 0x82933050
	ctx.lr = 0x8292EEE8;
	sub_82933050(ctx, base);
loc_8292EEE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,2252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2252, ctx.r3.u32);
loc_8292EEF0:
	// stw r29,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r29.u32);
loc_8292EEF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8292EEFC"))) PPC_WEAK_FUNC(sub_8292EEFC);
PPC_FUNC_IMPL(__imp__sub_8292EEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292EF00"))) PPC_WEAK_FUNC(sub_8292EF00);
PPC_FUNC_IMPL(__imp__sub_8292EF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r3,3032(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3032);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8292e898
	ctx.lr = 0x8292EF40;
	sub_8292E898(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292EF50"))) PPC_WEAK_FUNC(sub_8292EF50);
PPC_FUNC_IMPL(__imp__sub_8292EF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x8292EF58;
	__savegprlr_23(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r23,2204(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2204);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// li r3,20
	ctx.r3.s64 = 20;
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// std r30,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r30.u64);
	// std r30,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r30.u64);
	// bl 0x82691410
	ctx.lr = 0x8292EF90;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292efc0
	if (ctx.cr0.eq) goto loc_8292EFC0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-19244
	ctx.r11.s64 = ctx.r11.s64 + -19244;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r30,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r30.u8);
	// b 0x8292efc4
	goto loc_8292EFC4;
loc_8292EFC0:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8292EFC4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8292efd8
	if (!ctx.cr6.eq) goto loc_8292EFD8;
loc_8292EFCC:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x8292f3b8
	goto loc_8292F3B8;
loc_8292EFD8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8292ddf8
	ctx.lr = 0x8292EFE4;
	sub_8292DDF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292f3b8
	if (ctx.cr0.lt) goto loc_8292F3B8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82691410
	ctx.lr = 0x8292EFF8;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292f028
	if (ctx.cr0.eq) goto loc_8292F028;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-19252
	ctx.r11.s64 = ctx.r11.s64 + -19252;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r30,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r30.u8);
	// b 0x8292f02c
	goto loc_8292F02C;
loc_8292F028:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8292F02C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8292efcc
	if (ctx.cr6.eq) goto loc_8292EFCC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8292ddf8
	ctx.lr = 0x8292F040;
	sub_8292DDF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292f3b8
	if (ctx.cr0.lt) goto loc_8292F3B8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82691410
	ctx.lr = 0x8292F054;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292f084
	if (ctx.cr0.eq) goto loc_8292F084;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-19268
	ctx.r11.s64 = ctx.r11.s64 + -19268;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r30,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r30.u8);
	// b 0x8292f088
	goto loc_8292F088;
loc_8292F084:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8292F088:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8292efcc
	if (ctx.cr6.eq) goto loc_8292EFCC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8292ddf8
	ctx.lr = 0x8292F09C;
	sub_8292DDF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292f3b8
	if (ctx.cr0.lt) goto loc_8292F3B8;
	// li r28,2
	ctx.r28.s64 = 2;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// bl 0x82691410
	ctx.lr = 0x8292F0BC;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292f0ec
	if (ctx.cr0.eq) goto loc_8292F0EC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-19284
	ctx.r11.s64 = ctx.r11.s64 + -19284;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r30,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r30.u8);
	// b 0x8292f0f0
	goto loc_8292F0F0;
loc_8292F0EC:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8292F0F0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8292efcc
	if (ctx.cr6.eq) goto loc_8292EFCC;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82967f50
	ctx.lr = 0x8292F100;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292f114
	if (ctx.cr0.eq) goto loc_8292F114;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82968578
	ctx.lr = 0x8292F110;
	sub_82968578(ctx, base);
	// b 0x8292f118
	goto loc_8292F118;
loc_8292F114:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8292F118:
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8292efcc
	if (ctx.cr6.eq) goto loc_8292EFCC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8292ddf8
	ctx.lr = 0x8292F130;
	sub_8292DDF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292f3b8
	if (ctx.cr0.lt) goto loc_8292F3B8;
	// li r11,2560
	ctx.r11.s64 = 2560;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82691410
	ctx.lr = 0x8292F150;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292f180
	if (ctx.cr0.eq) goto loc_8292F180;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-19304
	ctx.r11.s64 = ctx.r11.s64 + -19304;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r30,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r30.u8);
	// b 0x8292f184
	goto loc_8292F184;
loc_8292F180:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8292F184:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8292efcc
	if (ctx.cr6.eq) goto loc_8292EFCC;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82967f50
	ctx.lr = 0x8292F194;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292f1a8
	if (ctx.cr0.eq) goto loc_8292F1A8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82968578
	ctx.lr = 0x8292F1A4;
	sub_82968578(ctx, base);
	// b 0x8292f1ac
	goto loc_8292F1AC;
loc_8292F1A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8292F1AC:
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8292efcc
	if (ctx.cr6.eq) goto loc_8292EFCC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8292ddf8
	ctx.lr = 0x8292F1C4;
	sub_8292DDF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292f3b8
	if (ctx.cr0.lt) goto loc_8292F3B8;
	// li r11,2589
	ctx.r11.s64 = 2589;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82691410
	ctx.lr = 0x8292F1E4;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292f214
	if (ctx.cr0.eq) goto loc_8292F214;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-19320
	ctx.r11.s64 = ctx.r11.s64 + -19320;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r30,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r30.u8);
	// b 0x8292f218
	goto loc_8292F218;
loc_8292F214:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8292F218:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8292efcc
	if (ctx.cr6.eq) goto loc_8292EFCC;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82967f50
	ctx.lr = 0x8292F228;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292f23c
	if (ctx.cr0.eq) goto loc_8292F23C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82968578
	ctx.lr = 0x8292F238;
	sub_82968578(ctx, base);
	// b 0x8292f240
	goto loc_8292F240;
loc_8292F23C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8292F240:
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8292efcc
	if (ctx.cr6.eq) goto loc_8292EFCC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8292ddf8
	ctx.lr = 0x8292F258;
	sub_8292DDF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292f3b8
	if (ctx.cr0.lt) goto loc_8292F3B8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82691410
	ctx.lr = 0x8292F26C;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292f29c
	if (ctx.cr0.eq) goto loc_8292F29C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-19328
	ctx.r11.s64 = ctx.r11.s64 + -19328;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r30,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r30.u8);
	// b 0x8292f2a0
	goto loc_8292F2A0;
loc_8292F29C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8292F2A0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8292efcc
	if (ctx.cr6.eq) goto loc_8292EFCC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8292ddf8
	ctx.lr = 0x8292F2B4;
	sub_8292DDF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292f3b8
	if (ctx.cr0.lt) goto loc_8292F3B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-19336
	ctx.r4.s64 = ctx.r11.s64 + -19336;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x8292dee8
	ctx.lr = 0x8292F2D0;
	sub_8292DEE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292f3b8
	if (ctx.cr0.lt) goto loc_8292F3B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,200
	ctx.r5.s64 = 200;
	// addi r4,r11,-19348
	ctx.r4.s64 = ctx.r11.s64 + -19348;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8292df78
	ctx.lr = 0x8292F2EC;
	sub_8292DF78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292f3b8
	if (ctx.cr0.lt) goto loc_8292F3B8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8292f3b4
	if (ctx.cr6.eq) goto loc_8292F3B4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82931a80
	ctx.lr = 0x8292F304;
	sub_82931A80(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stw r11,2204(r25)
	PPC_STORE_U32(ctx.r25.u32 + 2204, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292f3ac
	if (ctx.cr6.eq) goto loc_8292F3AC;
	// addi r27,r25,80
	ctx.r27.s64 = ctx.r25.s64 + 80;
	// addi r26,r25,24
	ctx.r26.s64 = ctx.r25.s64 + 24;
	// addi r28,r24,4
	ctx.r28.s64 = ctx.r24.s64 + 4;
loc_8292F324:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8292f354
	if (ctx.cr6.eq) goto loc_8292F354;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8292F334:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8292f334
	if (!ctx.cr6.eq) goto loc_8292F334;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8292f358
	goto loc_8292F358;
loc_8292F354:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8292F358:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82931ab8
	ctx.lr = 0x8292F378;
	sub_82931AB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292f3dc
	if (ctx.cr0.lt) goto loc_8292F3DC;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,-4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8292e980
	ctx.lr = 0x8292F394;
	sub_8292E980(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8292f3dc
	if (ctx.cr0.lt) goto loc_8292F3DC;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292f324
	if (!ctx.cr6.eq) goto loc_8292F324;
loc_8292F3AC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828b2440
	ctx.lr = 0x8292F3B4;
	sub_828B2440(ctx, base);
loc_8292F3B4:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8292F3B8:
	// stw r23,2204(r25)
	PPC_STORE_U32(ctx.r25.u32 + 2204, ctx.r23.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8292f3d0
	if (ctx.cr6.eq) goto loc_8292F3D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8292ca08
	ctx.lr = 0x8292F3D0;
	sub_8292CA08(ctx, base);
loc_8292F3D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_8292F3DC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828b2440
	ctx.lr = 0x8292F3E4;
	sub_828B2440(ctx, base);
	// b 0x8292f3b8
	goto loc_8292F3B8;
}

__attribute__((alias("__imp__sub_8292F3E8"))) PPC_WEAK_FUNC(sub_8292F3E8);
PPC_FUNC_IMPL(__imp__sub_8292F3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8292e898
	ctx.lr = 0x8292F424;
	sub_8292E898(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8292F434"))) PPC_WEAK_FUNC(sub_8292F434);
PPC_FUNC_IMPL(__imp__sub_8292F434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8292F438"))) PPC_WEAK_FUNC(sub_8292F438);
PPC_FUNC_IMPL(__imp__sub_8292F438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8292F440;
	__savegprlr_25(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2256);
	// addi r26,r3,2216
	ctx.r26.s64 = ctx.r3.s64 + 2216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,2204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2204);
	// ori r4,r11,12
	ctx.r4.u64 = ctx.r11.u64 | 12;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82933ce8
	ctx.lr = 0x8292F460;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292f68c
	if (ctx.cr0.lt) goto loc_8292F68C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8292f4a4
	if (ctx.cr6.eq) goto loc_8292F4A4;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8292f49c
	if (ctx.cr6.eq) goto loc_8292F49C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19472
	ctx.r4.s64 = ctx.r11.s64 + -19472;
	// bl 0x8292f3e8
	ctx.lr = 0x8292F490;
	sub_8292F3E8(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8292f68c
	goto loc_8292F68C;
loc_8292F49C:
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// b 0x8292f4a8
	goto loc_8292F4A8;
loc_8292F4A4:
	// li r27,0
	ctx.r27.s64 = 0;
loc_8292F4A8:
	// lwz r9,2208(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2208);
	// lwz r28,2224(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8292f4f4
	if (!ctx.cr6.eq) goto loc_8292F4F4;
	// lwz r11,2204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292f4f4
	if (!ctx.cr6.eq) goto loc_8292F4F4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1505
	ctx.r5.s64 = 1505;
	// addi r6,r11,-19200
	ctx.r6.s64 = ctx.r11.s64 + -19200;
loc_8292F4D4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82932c80
	ctx.lr = 0x8292F4E0;
	sub_82932C80(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r25,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r25.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// stw r25,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r25.u32);
	// b 0x8292f68c
	goto loc_8292F68C;
loc_8292F4F4:
	// lwz r11,2196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292f52c
	if (ctx.cr6.eq) goto loc_8292F52C;
loc_8292F504:
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292f504
	if (!ctx.cr6.eq) goto loc_8292F504;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x8292f52c
	if (ctx.cr6.lt) goto loc_8292F52C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1506
	ctx.r5.s64 = 1506;
	// addi r6,r11,-19232
	ctx.r6.s64 = ctx.r11.s64 + -19232;
	// b 0x8292f4d4
	goto loc_8292F4D4;
loc_8292F52C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8292f570
	if (!ctx.cr6.eq) goto loc_8292F570;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a78410
	ctx.lr = 0x8292F53C;
	sub_82A78410(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8292f54c
	if (ctx.cr6.eq) goto loc_8292F54C;
	// rlwinm. r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8292f570
	if (ctx.cr0.eq) goto loc_8292F570;
loc_8292F54C:
	// lwz r11,2196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r10,19420
	ctx.r5.s64 = ctx.r10.s64 + 19420;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r6,104(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// bl 0x8292e140
	ctx.lr = 0x8292F56C;
	sub_8292E140(ctx, base);
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
loc_8292F570:
	// lwz r11,2196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292f590
	if (ctx.cr6.eq) goto loc_8292F590;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8292f590
	if (ctx.cr6.eq) goto loc_8292F590;
	// lwz r29,116(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// b 0x8292f594
	goto loc_8292F594;
loc_8292F590:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8292F594:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82691410
	ctx.lr = 0x8292F5A0;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292f5b4
	if (ctx.cr0.eq) goto loc_8292F5B4;
	// bl 0x8292b6b0
	ctx.lr = 0x8292F5AC;
	sub_8292B6B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8292f5b8
	goto loc_8292F5B8;
loc_8292F5B4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8292F5B8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8292f5cc
	if (!ctx.cr6.eq) goto loc_8292F5CC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8292f68c
	goto loc_8292F68C;
loc_8292F5CC:
	// lwz r11,2192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// addi r9,r31,80
	ctx.r9.s64 = ctx.r31.s64 + 80;
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// lwz r10,2208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2208);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8292e298
	ctx.lr = 0x8292F600;
	sub_8292E298(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x8292f62c
	if (!ctx.cr0.lt) goto loc_8292F62C;
	// stw r25,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r25.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r25.u32);
	// bl 0x8292ca68
	ctx.lr = 0x8292F618;
	sub_8292CA68(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691460
	ctx.lr = 0x8292F624;
	sub_82691460(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8292f68c
	goto loc_8292F68C;
loc_8292F62C:
	// lwz r11,2200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292f698
	if (!ctx.cr6.eq) goto loc_8292F698;
	// stw r30,2200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2200, ctx.r30.u32);
loc_8292F63C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// lwz r10,2196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// lwz r11,2192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2192, ctx.r11.u32);
	// stw r10,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r10.u32);
	// stw r30,2196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2196, ctx.r30.u32);
	// lwz r11,2272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292f688
	if (ctx.cr6.eq) goto loc_8292F688;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8292f688
	if (ctx.cr6.eq) goto loc_8292F688;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// subf r6,r5,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r5.s64;
	// bl 0x82afe488
	ctx.lr = 0x8292F688;
	sub_82AFE488(ctx, base);
loc_8292F688:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8292F68C:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_8292F694:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8292F698:
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8292f694
	if (!ctx.cr6.eq) goto loc_8292F694;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// b 0x8292f63c
	goto loc_8292F63C;
}

__attribute__((alias("__imp__sub_8292F6B0"))) PPC_WEAK_FUNC(sub_8292F6B0);
PPC_FUNC_IMPL(__imp__sub_8292F6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8292F6B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,2260(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2260);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8292f7cc
	if (ctx.cr6.lt) goto loc_8292F7CC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8292f6f0
	if (!ctx.cr6.eq) goto loc_8292F6F0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r29,r11,32570
	ctx.r29.s64 = ctx.r11.s64 + 32570;
loc_8292F6F0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82691410
	ctx.lr = 0x8292F6FC;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292f710
	if (ctx.cr0.eq) goto loc_8292F710;
	// bl 0x8292b6b0
	ctx.lr = 0x8292F708;
	sub_8292B6B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8292f714
	goto loc_8292F714;
loc_8292F710:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8292F714:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8292f728
	if (!ctx.cr6.eq) goto loc_8292F728;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8292f7cc
	goto loc_8292F7CC;
loc_8292F728:
	// addi r9,r31,80
	ctx.r9.s64 = ctx.r31.s64 + 80;
	// lwz r10,2192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8292e4f0
	ctx.lr = 0x8292F74C;
	sub_8292E4F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292f7cc
	if (ctx.cr0.lt) goto loc_8292F7CC;
	// lwz r11,2272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292f788
	if (ctx.cr6.eq) goto loc_8292F788;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8292f788
	if (ctx.cr6.eq) goto loc_8292F788;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// subf r6,r5,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r5.s64;
	// bl 0x82afe488
	ctx.lr = 0x8292F780;
	sub_82AFE488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292f7cc
	if (ctx.cr0.lt) goto loc_8292F7CC;
loc_8292F788:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292ef50
	ctx.lr = 0x8292F794;
	sub_8292EF50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8292f7cc
	if (ctx.cr0.lt) goto loc_8292F7CC;
	// lwz r11,2200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2200);
	// stw r30,2196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2196, ctx.r30.u32);
	// stw r30,2204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2204, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r25,2208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2208, ctx.r25.u32);
	// bne cr6,0x8292f7d8
	if (!ctx.cr6.eq) goto loc_8292F7D8;
	// stw r30,2200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2200, ctx.r30.u32);
loc_8292F7B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// lwz r11,2192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2192, ctx.r11.u32);
loc_8292F7CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_8292F7D4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8292F7D8:
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8292f7d4
	if (!ctx.cr6.eq) goto loc_8292F7D4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// b 0x8292f7b8
	goto loc_8292F7B8;
}

__attribute__((alias("__imp__sub_8292F7F0"))) PPC_WEAK_FUNC(sub_8292F7F0);
PPC_FUNC_IMPL(__imp__sub_8292F7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8292F7F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// ble cr6,0x8292f820
	if (!ctx.cr6.gt) goto loc_8292F820;
	// stw r25,1640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1640, ctx.r25.u32);
loc_8292F820:
	// lwz r11,1640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8292fd40
	if (!ctx.cr6.eq) goto loc_8292FD40;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subfic r9,r31,16
	ctx.xer.ca = ctx.r31.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r31.s64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x8292F84C;
	sub_82FA7CF0(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8292f89c
	if (ctx.cr6.eq) goto loc_8292F89C;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_8292F85C:
	// lwz r11,1664(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1664);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292f8cc
	if (ctx.cr6.eq) goto loc_8292F8CC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// stw r8,1664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1664, ctx.r8.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// lwz r8,1676(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1676);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r11,1676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1676, ctx.r11.u32);
	// bne cr6,0x8292f85c
	if (!ctx.cr6.eq) goto loc_8292F85C;
loc_8292F89C:
	// cmplwi cr6,r27,53
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 53, ctx.xer);
	// bgt cr6,0x8292fd0c
	if (ctx.cr6.gt) goto loc_8292FD0C;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// rlwinm r0,r27,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-20184
	ctx.r12.s64 = ctx.r12.s64 + -20184;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32109
	ctx.r12.s64 = -2104295424;
	// addi r12,r12,-1844
	ctx.r12.s64 = ctx.r12.s64 + -1844;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r27.u64) {
	case 0:
		goto loc_8292F8EC;
	case 1:
		goto loc_8292F908;
	case 2:
		goto loc_8292F91C;
	case 3:
		goto loc_8292F94C;
	case 4:
		goto loc_8292F994;
	case 5:
		goto loc_8292F9A0;
	case 6:
		goto loc_8292F9AC;
	case 7:
		goto loc_8292F9C0;
	case 8:
		goto loc_8292F9E0;
	case 9:
		goto loc_8292FA04;
	case 10:
		goto loc_8292FA18;
	case 11:
		goto loc_8292FA24;
	case 12:
		goto loc_8292FA30;
	case 13:
		goto loc_8292FA4C;
	case 14:
		goto loc_8292FA5C;
	case 15:
		goto loc_8292FA68;
	case 16:
		goto loc_8292FA68;
	case 17:
		goto loc_8292FA70;
	case 18:
		goto loc_8292FA90;
	case 19:
		goto loc_8292FA90;
	case 20:
		goto loc_8292FA68;
	case 21:
		goto loc_8292FAC0;
	case 22:
		goto loc_8292FAD8;
	case 23:
		goto loc_8292FA68;
	case 24:
		goto loc_8292FA68;
	case 25:
		goto loc_8292FAE8;
	case 26:
		goto loc_8292FB00;
	case 27:
		goto loc_8292FA68;
	case 28:
		goto loc_8292FB44;
	case 29:
		goto loc_8292FB5C;
	case 30:
		goto loc_8292FA68;
	case 31:
		goto loc_8292FB74;
	case 32:
		goto loc_8292FB94;
	case 33:
		goto loc_8292FBAC;
	case 34:
		goto loc_8292FBCC;
	case 35:
		goto loc_8292FA68;
	case 36:
		goto loc_8292FBE4;
	case 37:
		goto loc_8292FBFC;
	case 38:
		goto loc_8292FA68;
	case 39:
		goto loc_8292FC1C;
	case 40:
		goto loc_8292FA68;
	case 41:
		goto loc_8292FC34;
	case 42:
		goto loc_8292FA68;
	case 43:
		goto loc_8292FC4C;
	case 44:
		goto loc_8292FA68;
	case 45:
		goto loc_8292FC64;
	case 46:
		goto loc_8292FA68;
	case 47:
		goto loc_8292FC90;
	case 48:
		goto loc_8292FA68;
	case 49:
		goto loc_8292FCBC;
	case 50:
		goto loc_8292FA68;
	case 51:
		goto loc_8292FCDC;
	case 52:
		goto loc_8292FCDC;
	case 53:
		goto loc_8292FCDC;
	default:
		__builtin_unreachable();
	}
loc_8292F8CC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r11,-19044
	ctx.r6.s64 = ctx.r11.s64 + -19044;
loc_8292F8D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,2216
	ctx.r4.s64 = ctx.r30.s64 + 2216;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82932c80
	ctx.lr = 0x8292F8E4;
	sub_82932C80(ctx, base);
	// stw r25,1640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1640, ctx.r25.u32);
	// b 0x8292fd40
	goto loc_8292FD40;
loc_8292F8EC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8292e980
	ctx.lr = 0x8292F904;
	sub_8292E980(ctx, base);
	// b 0x8292fd0c
	goto loc_8292FD0C;
loc_8292F908:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8292d500
	ctx.lr = 0x8292F918;
	sub_8292D500(ctx, base);
	// b 0x8292fd0c
	goto loc_8292FD0C;
loc_8292F91C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,2204(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2204);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lwz r11,2216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2216);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8292fd0c
	if (ctx.cr6.eq) goto loc_8292FD0C;
	// lwz r11,2204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2204);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// b 0x8292fd0c
	goto loc_8292FD0C;
loc_8292F94C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,2204(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2204);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r11,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// lwz r11,2216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2216);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8292f980
	if (ctx.cr6.eq) goto loc_8292F980;
	// lwz r11,2204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2204);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_8292F980:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8292fd0c
	if (ctx.cr6.eq) goto loc_8292FD0C;
	// lwz r11,2204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2204);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// b 0x8292fd0c
	goto loc_8292FD0C;
loc_8292F994:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8292f438
	ctx.lr = 0x8292F99C;
	sub_8292F438(ctx, base);
	// b 0x8292fd0c
	goto loc_8292FD0C;
loc_8292F9A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8292b970
	ctx.lr = 0x8292F9A8;
	sub_8292B970(ctx, base);
	// b 0x8292fd0c
	goto loc_8292FD0C;
loc_8292F9AC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_8292F9B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8292d5a8
	ctx.lr = 0x8292F9BC;
	sub_8292D5A8(ctx, base);
	// b 0x8292fd0c
	goto loc_8292FD0C;
loc_8292F9C0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8292c7c8
	ctx.lr = 0x8292F9D8;
	sub_8292C7C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8292f9b4
	goto loc_8292F9B4;
loc_8292F9E0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8292c7c8
	ctx.lr = 0x8292F9F8;
	sub_8292C7C8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8292f9b4
	goto loc_8292F9B4;
loc_8292FA04:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8292bad8
	ctx.lr = 0x8292FA14;
	sub_8292BAD8(ctx, base);
	// b 0x8292fd0c
	goto loc_8292FD0C;
loc_8292FA18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8292bb98
	ctx.lr = 0x8292FA20;
	sub_8292BB98(ctx, base);
	// b 0x8292fd0c
	goto loc_8292FD0C;
loc_8292FA24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8292d660
	ctx.lr = 0x8292FA2C;
	sub_8292D660(ctx, base);
	// b 0x8292fd0c
	goto loc_8292FD0C;
loc_8292FA30:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8292d5a8
	ctx.lr = 0x8292FA3C;
	sub_8292D5A8(ctx, base);
loc_8292FA3C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2204);
	// bl 0x82933050
	ctx.lr = 0x8292FA48;
	sub_82933050(ctx, base);
	// b 0x8292fd0c
	goto loc_8292FD0C;
loc_8292FA4C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8292bad8
	ctx.lr = 0x8292FA58;
	sub_8292BAD8(ctx, base);
	// b 0x8292fa3c
	goto loc_8292FA3C;
loc_8292FA5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8292ed18
	ctx.lr = 0x8292FA64;
	sub_8292ED18(ctx, base);
	// b 0x8292fd0c
	goto loc_8292FD0C;
loc_8292FA68:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8292fd0c
	goto loc_8292FD0C;
loc_8292FA70:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8292e040
	ctx.lr = 0x8292FA88;
	sub_8292E040(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// b 0x8292fd0c
	goto loc_8292FD0C;
loc_8292FA90:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8292c7c8
	ctx.lr = 0x8292FAB4;
	sub_8292C7C8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r25,1660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1660, ctx.r25.u32);
	// b 0x8292fd0c
	goto loc_8292FD0C;
loc_8292FAC0:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
loc_8292FAC8:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8292FAD0:
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// b 0x8292fd0c
	goto loc_8292FD0C;
loc_8292FAD8:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// b 0x8292fad0
	goto loc_8292FAD0;
loc_8292FAE8:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// b 0x8292fad0
	goto loc_8292FAD0;
loc_8292FB00:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292fb24
	if (ctx.cr6.eq) goto loc_8292FB24;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// b 0x8292fad0
	goto loc_8292FAD0;
loc_8292FB24:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1503
	ctx.r5.s64 = 1503;
	// addi r6,r11,-19088
	ctx.r6.s64 = ctx.r11.s64 + -19088;
	// addi r4,r30,2216
	ctx.r4.s64 = ctx.r30.s64 + 2216;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82932c80
	ctx.lr = 0x8292FB3C;
	sub_82932C80(ctx, base);
	// stw r25,1640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1640, ctx.r25.u32);
	// b 0x8292fd0c
	goto loc_8292FD0C;
loc_8292FB44:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8292fad0
	goto loc_8292FAD0;
loc_8292FB5C:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x8292fad0
	goto loc_8292FAD0;
loc_8292FB74:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8292FB88:
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x8292fad0
	goto loc_8292FAD0;
loc_8292FB94:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x8292fb88
	goto loc_8292FB88;
loc_8292FBAC:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subfc r11,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_8292FBC0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfze r11,r10
	temp.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r11.u64 = temp.u64;
	// b 0x8292fad0
	goto loc_8292FAD0;
loc_8292FBCC:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subfc r11,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// b 0x8292fbc0
	goto loc_8292FBC0;
loc_8292FBE4:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x8292fac8
	goto loc_8292FAC8;
loc_8292FBFC:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8292fad0
	goto loc_8292FAD0;
loc_8292FC1C:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8292fad0
	goto loc_8292FAD0;
loc_8292FC34:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// b 0x8292fad0
	goto loc_8292FAD0;
loc_8292FC4C:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x8292fad0
	goto loc_8292FAD0;
loc_8292FC64:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292fc88
	if (ctx.cr6.eq) goto loc_8292FC88;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x8292fad0
	if (!ctx.cr6.eq) goto loc_8292FAD0;
loc_8292FC88:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8292fad0
	goto loc_8292FAD0;
loc_8292FC90:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8292fcb4
	if (!ctx.cr6.eq) goto loc_8292FCB4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x8292fad0
	if (ctx.cr6.eq) goto loc_8292FAD0;
loc_8292FCB4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8292fad0
	goto loc_8292FAD0;
loc_8292FCBC:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x8292fcd4
	if (!ctx.cr6.eq) goto loc_8292FCD4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8292FCD4:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x8292fad0
	goto loc_8292FAD0;
loc_8292FCDC:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82967f50
	ctx.lr = 0x8292FCE4;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292fcfc
	if (ctx.cr0.eq) goto loc_8292FCFC;
	// addi r4,r30,2216
	ctx.r4.s64 = ctx.r30.s64 + 2216;
	// bl 0x82968578
	ctx.lr = 0x8292FCF4;
	sub_82968578(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8292fd00
	goto loc_8292FD00;
loc_8292FCFC:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8292FD00:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8292c948
	ctx.lr = 0x8292FD0C;
	sub_8292C948(ctx, base);
loc_8292FD0C:
	// lwz r11,1640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8292fd40
	if (!ctx.cr6.eq) goto loc_8292FD40;
	// lwz r11,1676(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8292fd48
	if (ctx.cr6.eq) goto loc_8292FD48;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,1676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1676, ctx.r10.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r10,1664(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1664);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_8292FD3C:
	// stw r3,1664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1664, ctx.r3.u32);
loc_8292FD40:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_8292FD48:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82967f50
	ctx.lr = 0x8292FD50;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8292fd70
	if (ctx.cr0.eq) goto loc_8292FD70;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,1664(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1664);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,-19096
	ctx.r6.s64 = ctx.r11.s64 + -19096;
	// bl 0x82968118
	ctx.lr = 0x8292FD6C;
	sub_82968118(ctx, base);
	// b 0x8292fd74
	goto loc_8292FD74;
loc_8292FD70:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8292FD74:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8292fd3c
	if (!ctx.cr6.eq) goto loc_8292FD3C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r11,-19128
	ctx.r6.s64 = ctx.r11.s64 + -19128;
	// b 0x8292f8d4
	goto loc_8292F8D4;
}

__attribute__((alias("__imp__sub_8292FD88"))) PPC_WEAK_FUNC(sub_8292FD88);
PPC_FUNC_IMPL(__imp__sub_8292FD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x8292FD90;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,1032
	ctx.r11.s64 = ctx.r3.s64 + 1032;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// addi r24,r3,32
	ctx.r24.s64 = ctx.r3.s64 + 32;
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// stw r24,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r24.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// sth r25,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r25.u16);
	// addi r27,r11,-23476
	ctx.r27.s64 = ctx.r11.s64 + -23476;
	// addi r23,r10,-19472
	ctx.r23.s64 = ctx.r10.s64 + -19472;
loc_8292FDD4:
	// addi r11,r27,260
	ctx.r11.s64 = ctx.r27.s64 + 260;
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8292fedc
	if (!ctx.cr0.eq) goto loc_8292FEDC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8292fe10
	if (!ctx.cr6.lt) goto loc_8292FE10;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x8292cd38
	ctx.lr = 0x8292FE00;
	sub_8292CD38(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8292fe10
	if (!ctx.cr0.lt) goto loc_8292FE10;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_8292FE10:
	// addi r11,r27,444
	ctx.r11.s64 = ctx.r27.s64 + 444;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8292fe9c
	if (ctx.cr0.eq) goto loc_8292FE9C;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8292fe9c
	if (ctx.cr0.lt) goto loc_8292FE9C;
	// cmpwi cr6,r11,607
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 607, ctx.xer);
	// bgt cr6,0x8292fe9c
	if (ctx.cr6.gt) goto loc_8292FE9C;
	// addi r8,r27,2060
	ctx.r8.s64 = ctx.r27.s64 + 2060;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r10,r8
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8292fe9c
	if (!ctx.cr6.eq) goto loc_8292FE9C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r31,1030
	ctx.r9.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82930388
	if (!ctx.cr6.lt) goto loc_82930388;
	// addi r9,r27,844
	ctx.r9.s64 = ctx.r27.s64 + 844;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhax r30,r10,r9
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// ble cr6,0x8292fdd4
	if (!ctx.cr6.gt) goto loc_8292FDD4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8292fdd4
	goto loc_8292FDD4;
loc_8292FE9C:
	// addi r11,r27,628
	ctx.r11.s64 = ctx.r27.s64 + 628;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829302b4
	if (ctx.cr0.eq) goto loc_829302B4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x829302b4
	if (ctx.cr0.lt) goto loc_829302B4;
	// cmpwi cr6,r11,607
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 607, ctx.xer);
	// bgt cr6,0x829302b4
	if (ctx.cr6.gt) goto loc_829302B4;
	// addi r9,r27,2060
	ctx.r9.s64 = ctx.r27.s64 + 2060;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r11,r9
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x829302b4
	if (!ctx.cr6.eq) goto loc_829302B4;
	// addi r10,r27,844
	ctx.r10.s64 = ctx.r27.s64 + 844;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
loc_8292FEDC:
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r27,148
	ctx.r9.s64 = ctx.r27.s64 + 148;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,53
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 53, ctx.xer);
	// lhax r29,r30,r9
	ctx.r29.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + ctx.r9.u32));
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bgt cr6,0x82930198
	if (ctx.cr6.gt) goto loc_82930198;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-20072
	ctx.r12.s64 = ctx.r12.s64 + -20072;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32109
	ctx.r12.s64 = -2104295424;
	// nop 
	// addi r12,r12,-208
	ctx.r12.s64 = ctx.r12.s64 + -208;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8292FF30;
	case 1:
		goto loc_8292FF3C;
	case 2:
		goto loc_8292FF48;
	case 3:
		goto loc_8292FF54;
	case 4:
		goto loc_8292FF60;
	case 5:
		goto loc_8292FF68;
	case 6:
		goto loc_8292FF70;
	case 7:
		goto loc_8292FF7C;
	case 8:
		goto loc_8292FF88;
	case 9:
		goto loc_8292FF94;
	case 10:
		goto loc_8292FFA0;
	case 11:
		goto loc_8292FFA8;
	case 12:
		goto loc_8292FFB0;
	case 13:
		goto loc_8292FFB8;
	case 14:
		goto loc_8292FFC0;
	case 15:
		goto loc_8292FFC8;
	case 16:
		goto loc_8292FFD4;
	case 17:
		goto loc_8292FFE0;
	case 18:
		goto loc_8292FFEC;
	case 19:
		goto loc_8292FFF8;
	case 20:
		goto loc_82930004;
	case 21:
		goto loc_82930010;
	case 22:
		goto loc_8293001C;
	case 23:
		goto loc_82930028;
	case 24:
		goto loc_82930034;
	case 25:
		goto loc_82930040;
	case 26:
		goto loc_8293004C;
	case 27:
		goto loc_82930058;
	case 28:
		goto loc_82930064;
	case 29:
		goto loc_82930070;
	case 30:
		goto loc_8293007C;
	case 31:
		goto loc_82930088;
	case 32:
		goto loc_82930094;
	case 33:
		goto loc_829300A0;
	case 34:
		goto loc_829300AC;
	case 35:
		goto loc_829300B8;
	case 36:
		goto loc_829300C4;
	case 37:
		goto loc_829300D0;
	case 38:
		goto loc_829300DC;
	case 39:
		goto loc_829300E8;
	case 40:
		goto loc_829300F4;
	case 41:
		goto loc_82930100;
	case 42:
		goto loc_8293010C;
	case 43:
		goto loc_82930118;
	case 44:
		goto loc_82930124;
	case 45:
		goto loc_82930130;
	case 46:
		goto loc_8293013C;
	case 47:
		goto loc_82930148;
	case 48:
		goto loc_82930154;
	case 49:
		goto loc_82930160;
	case 50:
		goto loc_8293016C;
	case 51:
		goto loc_82930178;
	case 52:
		goto loc_82930180;
	case 53:
		goto loc_82930188;
	default:
		__builtin_unreachable();
	}
loc_8292FF30:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82930190
	goto loc_82930190;
loc_8292FF3C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82930190
	goto loc_82930190;
loc_8292FF48:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82930190
	goto loc_82930190;
loc_8292FF54:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82930190
	goto loc_82930190;
loc_8292FF60:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8293018c
	goto loc_8293018C;
loc_8292FF68:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8293018c
	goto loc_8293018C;
loc_8292FF70:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x82930190
	goto loc_82930190;
loc_8292FF7C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x82930190
	goto loc_82930190;
loc_8292FF88:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82930190
	goto loc_82930190;
loc_8292FF94:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x82930190
	goto loc_82930190;
loc_8292FFA0:
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x8293018c
	goto loc_8293018C;
loc_8292FFA8:
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x8293018c
	goto loc_8293018C;
loc_8292FFB0:
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x8293018c
	goto loc_8293018C;
loc_8292FFB8:
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x8293018c
	goto loc_8293018C;
loc_8292FFC0:
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x8293018c
	goto loc_8293018C;
loc_8292FFC8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x82930190
	goto loc_82930190;
loc_8292FFD4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x82930190
	goto loc_82930190;
loc_8292FFE0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,17
	ctx.r4.s64 = 17;
	// b 0x82930190
	goto loc_82930190;
loc_8292FFEC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x82930190
	goto loc_82930190;
loc_8292FFF8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x82930190
	goto loc_82930190;
loc_82930004:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x82930190
	goto loc_82930190;
loc_82930010:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x82930190
	goto loc_82930190;
loc_8293001C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x82930190
	goto loc_82930190;
loc_82930028:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x82930190
	goto loc_82930190;
loc_82930034:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x82930190
	goto loc_82930190;
loc_82930040:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x82930190
	goto loc_82930190;
loc_8293004C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,26
	ctx.r4.s64 = 26;
	// b 0x82930190
	goto loc_82930190;
loc_82930058:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,27
	ctx.r4.s64 = 27;
	// b 0x82930190
	goto loc_82930190;
loc_82930064:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,28
	ctx.r4.s64 = 28;
	// b 0x82930190
	goto loc_82930190;
loc_82930070:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,29
	ctx.r4.s64 = 29;
	// b 0x82930190
	goto loc_82930190;
loc_8293007C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x82930190
	goto loc_82930190;
loc_82930088:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x82930190
	goto loc_82930190;
loc_82930094:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x82930190
	goto loc_82930190;
loc_829300A0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,33
	ctx.r4.s64 = 33;
	// b 0x82930190
	goto loc_82930190;
loc_829300AC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,34
	ctx.r4.s64 = 34;
	// b 0x82930190
	goto loc_82930190;
loc_829300B8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,35
	ctx.r4.s64 = 35;
	// b 0x82930190
	goto loc_82930190;
loc_829300C4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,36
	ctx.r4.s64 = 36;
	// b 0x82930190
	goto loc_82930190;
loc_829300D0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,37
	ctx.r4.s64 = 37;
	// b 0x82930190
	goto loc_82930190;
loc_829300DC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x82930190
	goto loc_82930190;
loc_829300E8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,39
	ctx.r4.s64 = 39;
	// b 0x82930190
	goto loc_82930190;
loc_829300F4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x82930190
	goto loc_82930190;
loc_82930100:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,41
	ctx.r4.s64 = 41;
	// b 0x82930190
	goto loc_82930190;
loc_8293010C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,42
	ctx.r4.s64 = 42;
	// b 0x82930190
	goto loc_82930190;
loc_82930118:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x82930190
	goto loc_82930190;
loc_82930124:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// b 0x82930190
	goto loc_82930190;
loc_82930130:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,45
	ctx.r4.s64 = 45;
	// b 0x82930190
	goto loc_82930190;
loc_8293013C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,46
	ctx.r4.s64 = 46;
	// b 0x82930190
	goto loc_82930190;
loc_82930148:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,47
	ctx.r4.s64 = 47;
	// b 0x82930190
	goto loc_82930190;
loc_82930154:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// b 0x82930190
	goto loc_82930190;
loc_82930160:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,49
	ctx.r4.s64 = 49;
	// b 0x82930190
	goto loc_82930190;
loc_8293016C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,50
	ctx.r4.s64 = 50;
	// b 0x82930190
	goto loc_82930190;
loc_82930178:
	// li r4,51
	ctx.r4.s64 = 51;
	// b 0x8293018c
	goto loc_8293018C;
loc_82930180:
	// li r4,52
	ctx.r4.s64 = 52;
	// b 0x8293018c
	goto loc_8293018C;
loc_82930188:
	// li r4,53
	ctx.r4.s64 = 53;
loc_8293018C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82930190:
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x8292f7f0
	ctx.lr = 0x82930198;
	sub_8292F7F0(ctx, base);
loc_82930198:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r27,36
	ctx.r8.s64 = ctx.r27.s64 + 36;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r28,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r28.s64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhax r10,r30,r8
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + ctx.r8.u32));
	// bne 0x82930238
	if (!ctx.cr0.eq) goto loc_82930238;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82930238
	if (!ctx.cr6.eq) goto loc_82930238;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82930224
	if (!ctx.cr6.lt) goto loc_82930224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x8292cd38
	ctx.lr = 0x82930214;
	sub_8292CD38(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82930224
	if (!ctx.cr0.lt) goto loc_82930224;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_82930224:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8292fdd4
	if (!ctx.cr6.eq) goto loc_8292FDD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8293039c
	goto loc_8293039C;
loc_82930238:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r27,808
	ctx.r10.s64 = ctx.r27.s64 + 808;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8293027c
	if (ctx.cr0.eq) goto loc_8293027C;
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8293027c
	if (ctx.cr0.lt) goto loc_8293027C;
	// cmpwi cr6,r10,607
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 607, ctx.xer);
	// bgt cr6,0x8293027c
	if (ctx.cr6.gt) goto loc_8293027C;
	// addi r8,r27,2060
	ctx.r8.s64 = ctx.r27.s64 + 2060;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r10,r8
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8293027c
	if (!ctx.cr6.eq) goto loc_8293027C;
	// addi r11,r27,844
	ctx.r11.s64 = ctx.r27.s64 + 844;
	// lhax r30,r10,r11
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// b 0x82930280
	goto loc_82930280;
loc_8293027C:
	// lhax r30,r9,r27
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r27.u32));
loc_82930280:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r31,1030
	ctx.r10.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82930388
	if (!ctx.cr6.lt) goto loc_82930388;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_829302A0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8292fdd4
	goto loc_8292FDD4;
loc_829302B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829302d8
	if (!ctx.cr6.eq) goto loc_829302D8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292ef00
	ctx.lr = 0x829302CC;
	sub_8292EF00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_829302D8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82930374
	if (!ctx.cr6.lt) goto loc_82930374;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_829302EC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r27,444
	ctx.r10.s64 = ctx.r27.s64 + 444;
	// lha r9,0(r11)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8293032c
	if (ctx.cr0.eq) goto loc_8293032C;
	// addic. r10,r10,256
	ctx.xer.ca = ctx.r10.u32 > 4294967039;
	ctx.r10.s64 = ctx.r10.s64 + 256;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8293032c
	if (ctx.cr0.lt) goto loc_8293032C;
	// cmpwi cr6,r10,607
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 607, ctx.xer);
	// bgt cr6,0x8293032c
	if (ctx.cr6.gt) goto loc_8293032C;
	// addi r9,r27,2060
	ctx.r9.s64 = ctx.r27.s64 + 2060;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// beq cr6,0x8293034c
	if (ctx.cr6.eq) goto loc_8293034C;
loc_8293032C:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x82930398
	if (!ctx.cr6.gt) goto loc_82930398;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x829302ec
	goto loc_829302EC;
loc_8293034C:
	// addi r9,r31,1030
	ctx.r9.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82930388
	if (!ctx.cr6.lt) goto loc_82930388;
	// addi r9,r27,844
	ctx.r9.s64 = ctx.r27.s64 + 844;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhax r30,r10,r9
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x829302a0
	goto loc_829302A0;
loc_82930374:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82930398
	if (ctx.cr6.eq) goto loc_82930398;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// b 0x8292fdd4
	goto loc_8292FDD4;
loc_82930388:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19012
	ctx.r4.s64 = ctx.r11.s64 + -19012;
	// bl 0x8292ef00
	ctx.lr = 0x82930398;
	sub_8292EF00(ctx, base);
loc_82930398:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8293039C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829303A4"))) PPC_WEAK_FUNC(sub_829303A4);
PPC_FUNC_IMPL(__imp__sub_829303A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829303A8"))) PPC_WEAK_FUNC(sub_829303A8);
PPC_FUNC_IMPL(__imp__sub_829303A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x829303B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-3232(r1)
	ea = -3232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1644(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1644);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829307e8
	if (!ctx.cr6.eq) goto loc_829307E8;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r22,r11,32570
	ctx.r22.s64 = ctx.r11.s64 + 32570;
	// addi r25,r10,-19556
	ctx.r25.s64 = ctx.r10.s64 + -19556;
	// addi r26,r9,-18912
	ctx.r26.s64 = ctx.r9.s64 + -18912;
	// addi r23,r8,-18964
	ctx.r23.s64 = ctx.r8.s64 + -18964;
	// addi r24,r7,-18968
	ctx.r24.s64 = ctx.r7.s64 + -18968;
loc_829303F8:
	// lwz r11,1680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82930410
	if (ctx.cr6.eq) goto loc_82930410;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8293082c
	if (ctx.cr6.eq) goto loc_8293082C;
loc_82930410:
	// lwz r10,1672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8293044c
	if (ctx.cr6.eq) goto loc_8293044C;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// addi r8,r30,-8
	ctx.r8.s64 = ctx.r30.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8293042C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x8293042c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8293042C;
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r11.u32);
	// stw r28,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
	// b 0x829304b4
	goto loc_829304B4;
loc_8293044C:
	// lwz r10,1668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829304bc
	if (ctx.cr6.eq) goto loc_829304BC;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// addi r8,r30,-8
	ctx.r8.s64 = ctx.r30.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82930468:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x82930468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82930468;
	// lwz r11,1668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// stw r28,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
	// lwz r11,2204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r11,2204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,2204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,2204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_829304B4:
	// stw r28,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r28.u32);
	// b 0x829304d4
	goto loc_829304D4;
loc_829304BC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,2256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2256);
	// lwz r3,2204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x829304CC;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8293091c
	if (ctx.cr0.lt) goto loc_8293091C;
loc_829304D4:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82930674
	if (!ctx.cr6.eq) goto loc_82930674;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
loc_829304E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x8293050c
	if (ctx.cr0.eq) goto loc_8293050C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x829304e8
	if (ctx.cr6.eq) goto loc_829304E8;
loc_8293050C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82930674
	if (!ctx.cr0.eq) goto loc_82930674;
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82930674
	if (ctx.cr6.eq) goto loc_82930674;
	// lwz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// li r5,3036
	ctx.r5.s64 = 3036;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r28.u32);
	// stw r27,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r27.u32);
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82930544;
	sub_82FA7CF0(ctx, base);
	// stw r31,3128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3128, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292fd88
	ctx.lr = 0x82930550;
	sub_8292FD88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8293055c
	if (ctx.cr0.eq) goto loc_8293055C;
	// stw r27,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r27.u32);
loc_8293055C:
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// stw r28,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829305d4
	if (!ctx.cr6.eq) goto loc_829305D4;
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829305d4
	if (!ctx.cr6.eq) goto loc_829305D4;
	// addi r29,r31,2216
	ctx.r29.s64 = ctx.r31.s64 + 2216;
	// lwz r4,2256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2256);
	// lwz r3,2204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82933ce8
	ctx.lr = 0x8293058C;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8293091c
	if (ctx.cr0.lt) goto loc_8293091C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x829305d0
	if (ctx.cr6.eq) goto loc_829305D0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x829305d0
	if (ctx.cr6.eq) goto loc_829305D0;
	// lwz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829305c8
	if (ctx.cr6.eq) goto loc_829305C8;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,1501
	ctx.r5.s64 = 1501;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82932c80
	ctx.lr = 0x829305C8;
	sub_82932C80(ctx, base);
loc_829305C8:
	// stw r27,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r27.u32);
	// b 0x829305d4
	goto loc_829305D4;
loc_829305D0:
	// stw r27,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r27.u32);
loc_829305D4:
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8293060c
	if (!ctx.cr6.eq) goto loc_8293060C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// bl 0x82933050
	ctx.lr = 0x829305EC;
	sub_82933050(ctx, base);
	// stw r28,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r28.u32);
	// addi r5,r31,2216
	ctx.r5.s64 = ctx.r31.s64 + 2216;
	// lwz r4,2256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2256);
	// lwz r3,2204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// bl 0x82933ce8
	ctx.lr = 0x82930600;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8293091c
	if (ctx.cr0.lt) goto loc_8293091C;
	// stw r27,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r27.u32);
loc_8293060C:
	// lwz r11,1656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// lwz r10,2196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
	// stw r10,2204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2204, ctx.r10.u32);
	// beq cr6,0x829307dc
	if (ctx.cr6.eq) goto loc_829307DC;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r31,2208
	ctx.r10.s64 = ctx.r31.s64 + 2208;
	// addi r9,r30,-8
	ctx.r9.s64 = ctx.r30.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82930634:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82930634
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82930634;
	// lwz r11,2196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82930658
	if (ctx.cr6.eq) goto loc_82930658;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82930658:
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8293091c
	goto loc_8293091C;
loc_82930674:
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// beq cr6,0x82930834
	if (ctx.cr6.eq) goto loc_82930834;
	// lwz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829306e4
	if (ctx.cr6.eq) goto loc_829306E4;
	// cmpwi cr6,r8,11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 11, ctx.xer);
	// bne cr6,0x829306e4
	if (!ctx.cr6.eq) goto loc_829306E4;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292c7c8
	ctx.lr = 0x829306A4;
	sub_8292C7C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829306e4
	if (ctx.cr0.eq) goto loc_829306E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x829309e0
	ctx.lr = 0x829306C0;
	sub_829309E0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x829306e4
	if (ctx.cr6.eq) goto loc_829306E4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x829307dc
	if (!ctx.cr6.eq) goto loc_829307DC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r27,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r27.u32);
	// stw r27,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r27.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8293091c
	goto loc_8293091C;
loc_829306E4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x829307bc
	if (!ctx.cr6.eq) goto loc_829307BC;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_829306FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82930720
	if (ctx.cr0.eq) goto loc_82930720;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x829306fc
	if (ctx.cr6.eq) goto loc_829306FC;
loc_82930720:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82930760
	if (!ctx.cr0.eq) goto loc_82930760;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,2204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82930748
	if (!ctx.cr6.eq) goto loc_82930748;
	// stw r22,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r22.u32);
loc_82930748:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8292e648
	ctx.lr = 0x8293075C;
	sub_8292E648(ctx, base);
	// b 0x829307b4
	goto loc_829307B4;
loc_82930760:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82930768:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8293078c
	if (ctx.cr0.eq) goto loc_8293078C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82930768
	if (ctx.cr6.eq) goto loc_82930768;
loc_8293078C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829307bc
	if (!ctx.cr0.eq) goto loc_829307BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r5,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r5.u32);
	// bl 0x8292e7e8
	ctx.lr = 0x829307B4;
	sub_8292E7E8(ctx, base);
loc_829307B4:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8293091c
	if (ctx.cr0.lt) goto loc_8293091C;
loc_829307BC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,1652(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r11.u32);
	// bne cr6,0x82930890
	if (!ctx.cr6.eq) goto loc_82930890;
loc_829307DC:
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829303f8
	if (ctx.cr6.eq) goto loc_829303F8;
loc_829307E8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_829307F0:
	// lwz r11,2204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r11,2204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,2204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,2204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8293091c
	goto loc_8293091C;
loc_8293082C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x829307f0
	goto loc_829307F0;
loc_82930834:
	// lwz r11,2196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8293085c
	if (ctx.cr6.eq) goto loc_8293085C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1502
	ctx.r5.s64 = 1502;
	// addi r6,r11,-18992
	ctx.r6.s64 = ctx.r11.s64 + -18992;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82932c80
	ctx.lr = 0x8293085C;
	sub_82932C80(ctx, base);
loc_8293085C:
	// lwz r3,2196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82930918
	if (ctx.cr6.eq) goto loc_82930918;
	// bl 0x8292b7f0
	ctx.lr = 0x82930870;
	sub_8292B7F0(ctx, base);
	// lwz r10,2196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r10,128(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// stw r10,2196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2196, ctx.r10.u32);
	// stw r10,2204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2204, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r27,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r27.u32);
	// b 0x82930918
	goto loc_82930918;
loc_82930890:
	// lwz r11,1680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82930918
	if (ctx.cr6.eq) goto loc_82930918;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82930918
	if (ctx.cr6.eq) goto loc_82930918;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82930900
	if (!ctx.cr6.eq) goto loc_82930900;
	// lbz r10,9(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82930900
	if (!ctx.cr0.eq) goto loc_82930900;
	// lbz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,123
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 123, ctx.xer);
	// bne cr6,0x829308d8
	if (!ctx.cr6.eq) goto loc_829308D8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_829308D8:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// bne cr6,0x82930900
	if (!ctx.cr6.eq) goto loc_82930900;
	// lwz r11,1680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82930900
	if (ctx.cr6.eq) goto loc_82930900;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82930900:
	// lwz r11,1680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82930918
	if (!ctx.cr6.eq) goto loc_82930918;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82930918:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8293091C:
	// addi r1,r1,3232
	ctx.r1.s64 = ctx.r1.s64 + 3232;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82930924"))) PPC_WEAK_FUNC(sub_82930924);
PPC_FUNC_IMPL(__imp__sub_82930924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82930928"))) PPC_WEAK_FUNC(sub_82930928);
PPC_FUNC_IMPL(__imp__sub_82930928) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82930950
	if (ctx.cr6.eq) goto loc_82930950;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
loc_82930950:
	// lwz r11,1680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82930974
	if (!ctx.cr6.eq) goto loc_82930974;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x829309c4
	goto loc_829309C4;
loc_82930968:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x8293098c
	if (ctx.cr6.eq) goto loc_8293098C;
loc_82930974:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829303a8
	ctx.lr = 0x82930980;
	sub_829303A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82930968
	if (!ctx.cr0.lt) goto loc_82930968;
	// b 0x829309c4
	goto loc_829309C4;
loc_8293098C:
	// lwz r3,1680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r11.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// bl 0x8292cac0
	ctx.lr = 0x829309A4;
	sub_8292CAC0(ctx, base);
	// lwz r11,1680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829309b8
	if (ctx.cr6.eq) goto loc_829309B8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x829309bc
	goto loc_829309BC;
loc_829309B8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_829309BC:
	// stw r11,2256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2256, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_829309C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_829309DC"))) PPC_WEAK_FUNC(sub_829309DC);
PPC_FUNC_IMPL(__imp__sub_829309DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829309E0"))) PPC_WEAK_FUNC(sub_829309E0);
PPC_FUNC_IMPL(__imp__sub_829309E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x829309E8;
	__savegprlr_18(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r4,-8
	ctx.r10.s64 = ctx.r4.s64 + -8;
loc_82930A18:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82930a18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82930A18;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82930a7c
	if (!ctx.cr6.eq) goto loc_82930A7C;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// b 0x82930a68
	goto loc_82930A68;
loc_82930A34:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82967f50
	ctx.lr = 0x82930A3C;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82930a50
	if (ctx.cr0.eq) goto loc_82930A50;
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// bl 0x82968578
	ctx.lr = 0x82930A4C;
	sub_82968578(ctx, base);
	// b 0x82930a54
	goto loc_82930A54;
loc_82930A50:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_82930A54:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829312e4
	if (ctx.cr6.eq) goto loc_829312E4;
	// lwz r27,12(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
loc_82930A68:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82930a34
	if (!ctx.cr6.eq) goto loc_82930A34;
	// lwz r11,1668(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1668);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82931324
	goto loc_82931324;
loc_82930A7C:
	// lwz r7,1668(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1668);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82930afc
	if (ctx.cr6.eq) goto loc_82930AFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r20,2216
	ctx.r10.s64 = ctx.r20.s64 + 2216;
	// addi r9,r7,8
	ctx.r9.s64 = ctx.r7.s64 + 8;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82930A9C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x82930a9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82930A9C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82931334
	if (!ctx.cr6.eq) goto loc_82931334;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r20,2224
	ctx.r11.s64 = ctx.r20.s64 + 2224;
	// addi r10,r10,-29352
	ctx.r10.s64 = ctx.r10.s64 + -29352;
loc_82930AC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82930ae4
	if (ctx.cr0.eq) goto loc_82930AE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82930ac0
	if (ctx.cr6.eq) goto loc_82930AC0;
loc_82930AE4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82931334
	if (!ctx.cr0.eq) goto loc_82931334;
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r11,1668(r20)
	PPC_STORE_U32(ctx.r20.u32 + 1668, ctx.r11.u32);
	// stw r18,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r18.u32);
	// b 0x82930bb4
	goto loc_82930BB4;
loc_82930AFC:
	// lwz r3,2204(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2204);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82930b58
	if (!ctx.cr6.lt) goto loc_82930B58;
loc_82930B10:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x82930b30
	if (ctx.cr6.eq) goto loc_82930B30;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// blt cr6,0x82930b44
	if (ctx.cr6.lt) goto loc_82930B44;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// bgt cr6,0x82930b44
	if (ctx.cr6.gt) goto loc_82930B44;
loc_82930B30:
	// lwz r10,2204(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2204);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82930b10
	if (ctx.cr6.lt) goto loc_82930B10;
loc_82930B44:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82930b58
	if (!ctx.cr6.lt) goto loc_82930B58;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// bne cr6,0x82931334
	if (!ctx.cr6.eq) goto loc_82931334;
loc_82930B58:
	// addi r31,r20,2216
	ctx.r31.s64 = ctx.r20.s64 + 2216;
	// lwz r4,2256(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2256);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82933ce8
	ctx.lr = 0x82930B68;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82931334
	if (ctx.cr0.lt) goto loc_82931334;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82931334
	if (!ctx.cr6.eq) goto loc_82931334;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r20,2224
	ctx.r11.s64 = ctx.r20.s64 + 2224;
	// addi r10,r10,-29352
	ctx.r10.s64 = ctx.r10.s64 + -29352;
loc_82930B88:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82930bac
	if (ctx.cr0.eq) goto loc_82930BAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82930b88
	if (ctx.cr6.eq) goto loc_82930B88;
loc_82930BAC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82931334
	if (!ctx.cr0.eq) goto loc_82931334;
loc_82930BB4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r1,100
	ctx.r30.s64 = ctx.r1.s64 + 100;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// addi r28,r11,-18768
	ctx.r28.s64 = ctx.r11.s64 + -18768;
loc_82930BC8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x829303a8
	ctx.lr = 0x82930BD4;
	sub_829303A8(ctx, base);
	// lwz r11,1644(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829312e4
	if (!ctx.cr6.eq) goto loc_829312E4;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82930d68
	if (ctx.cr6.eq) goto loc_82930D68;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x82930d08
	if (ctx.cr6.eq) goto loc_82930D08;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82930c3c
	if (!ctx.cr6.eq) goto loc_82930C3C;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82967f50
	ctx.lr = 0x82930C08;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82930c24
	if (ctx.cr0.eq) goto loc_82930C24;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82968118
	ctx.lr = 0x82930C20;
	sub_82968118(ctx, base);
	// b 0x82930c28
	goto loc_82930C28;
loc_82930C24:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_82930C28:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829312e4
	if (ctx.cr6.eq) goto loc_829312E4;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
loc_82930C3C:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x82930c7c
	if (!ctx.cr6.eq) goto loc_82930C7C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82930c7c
	if (!ctx.cr6.eq) goto loc_82930C7C;
	// lbz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// beq cr6,0x82930c64
	if (ctx.cr6.eq) goto loc_82930C64;
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// bne cr6,0x82930c7c
	if (!ctx.cr6.eq) goto loc_82930C7C;
loc_82930C64:
	// lbz r11,121(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82930c7c
	if (!ctx.cr0.eq) goto loc_82930C7C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// b 0x82930cb8
	goto loc_82930CB8;
loc_82930C7C:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82967f50
	ctx.lr = 0x82930C84;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82930c98
	if (ctx.cr0.eq) goto loc_82930C98;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82968578
	ctx.lr = 0x82930C94;
	sub_82968578(ctx, base);
	// b 0x82930c9c
	goto loc_82930C9C;
loc_82930C98:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_82930C9C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829312e4
	if (ctx.cr6.eq) goto loc_829312E4;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82930d08
	if (!ctx.cr6.eq) goto loc_82930D08;
loc_82930CB8:
	// lbz r11,121(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82930d08
	if (!ctx.cr0.eq) goto loc_82930D08;
	// lbz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// beq cr6,0x82930d04
	if (ctx.cr6.eq) goto loc_82930D04;
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x82930cfc
	if (ctx.cr6.eq) goto loc_82930CFC;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x82930d04
	if (ctx.cr6.eq) goto loc_82930D04;
	// cmpwi cr6,r11,93
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 93, ctx.xer);
	// beq cr6,0x82930cfc
	if (ctx.cr6.eq) goto loc_82930CFC;
	// cmpwi cr6,r11,123
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 123, ctx.xer);
	// beq cr6,0x82930d04
	if (ctx.cr6.eq) goto loc_82930D04;
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// bne cr6,0x82930d08
	if (!ctx.cr6.eq) goto loc_82930D08;
loc_82930CFC:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// b 0x82930d08
	goto loc_82930D08;
loc_82930D04:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82930D08:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82930bc8
	if (!ctx.cr6.eq) goto loc_82930BC8;
	// lwz r21,100(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82930D1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82930d40
	if (ctx.cr6.eq) goto loc_82930D40;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82930d40
	if (ctx.cr6.eq) goto loc_82930D40;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82930d1c
	if (!ctx.cr6.eq) goto loc_82930D1C;
loc_82930D40:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82930d84
	if (ctx.cr6.eq) goto loc_82930D84;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r11,-18812
	ctx.r6.s64 = ctx.r11.s64 + -18812;
loc_82930D50:
	// li r5,1516
	ctx.r5.s64 = 1516;
	// lwz r7,248(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r20,24
	ctx.r3.s64 = ctx.r20.s64 + 24;
	// bl 0x82932c80
	ctx.lr = 0x82930D64;
	sub_82932C80(ctx, base);
	// b 0x829312e4
	goto loc_829312E4;
loc_82930D68:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1515
	ctx.r5.s64 = 1515;
	// addi r6,r11,-18856
	ctx.r6.s64 = ctx.r11.s64 + -18856;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r20,24
	ctx.r3.s64 = ctx.r20.s64 + 24;
	// bl 0x82932c80
	ctx.lr = 0x82930D80;
	sub_82932C80(ctx, base);
	// b 0x829312e4
	goto loc_829312E4;
loc_82930D84:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82930d98
	if (ctx.cr6.eq) goto loc_82930D98;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r11,-18892
	ctx.r6.s64 = ctx.r11.s64 + -18892;
	// b 0x82930d50
	goto loc_82930D50;
loc_82930D98:
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82931104
	if (ctx.cr6.eq) goto loc_82931104;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r23,r11,-18896
	ctx.r23.s64 = ctx.r11.s64 + -18896;
	// addi r22,r10,-18968
	ctx.r22.s64 = ctx.r10.s64 + -18968;
loc_82930DC4:
	// addi r31,r24,16
	ctx.r31.s64 = ctx.r24.s64 + 16;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82930e70
	if (!ctx.cr6.eq) goto loc_82930E70;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82930e70
	if (!ctx.cr6.eq) goto loc_82930E70;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82930e70
	if (!ctx.cr6.eq) goto loc_82930E70;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_82930DF0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82930e14
	if (ctx.cr0.eq) goto loc_82930E14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82930df0
	if (ctx.cr6.eq) goto loc_82930DF0;
loc_82930E14:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82930e28
	if (!ctx.cr0.eq) goto loc_82930E28;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x829310f8
	goto loc_829310F8;
loc_82930E28:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82930e70
	if (!ctx.cr6.eq) goto loc_82930E70;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_82930E38:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82930e5c
	if (ctx.cr0.eq) goto loc_82930E5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82930e38
	if (ctx.cr6.eq) goto loc_82930E38;
loc_82930E5C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82930e70
	if (!ctx.cr0.eq) goto loc_82930E70;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x829310f8
	goto loc_829310F8;
loc_82930E70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82930f1c
	if (!ctx.cr6.eq) goto loc_82930F1C;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
loc_82930E88:
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82930E90:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// beq 0x82930eb4
	if (ctx.cr0.eq) goto loc_82930EB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82930e90
	if (ctx.cr6.eq) goto loc_82930E90;
loc_82930EB4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82930ecc
	if (ctx.cr0.eq) goto loc_82930ECC;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82930e88
	if (!ctx.cr6.eq) goto loc_82930E88;
loc_82930ECC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82930f1c
	if (ctx.cr6.eq) goto loc_82930F1C;
	// lwz r31,8(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// b 0x82930f10
	goto loc_82930F10;
loc_82930EDC:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82967f50
	ctx.lr = 0x82930EE4;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82930ef8
	if (ctx.cr0.eq) goto loc_82930EF8;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x82968578
	ctx.lr = 0x82930EF4;
	sub_82968578(ctx, base);
	// b 0x82930efc
	goto loc_82930EFC;
loc_82930EF8:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_82930EFC:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829312e4
	if (ctx.cr6.eq) goto loc_829312E4;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
loc_82930F10:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82930edc
	if (!ctx.cr6.eq) goto loc_82930EDC;
	// b 0x82930f4c
	goto loc_82930F4C;
loc_82930F1C:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82967f50
	ctx.lr = 0x82930F24;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82930f38
	if (ctx.cr0.eq) goto loc_82930F38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82968578
	ctx.lr = 0x82930F34;
	sub_82968578(ctx, base);
	// b 0x82930f3c
	goto loc_82930F3C;
loc_82930F38:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_82930F3C:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829312e4
	if (ctx.cr6.eq) goto loc_829312E4;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
loc_82930F4C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82930f5c
	if (!ctx.cr6.eq) goto loc_82930F5C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x829310f8
	if (ctx.cr6.eq) goto loc_829310F8;
loc_82930F5C:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82930fb0
	goto loc_82930FB0;
loc_82930F6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82930f84
	if (ctx.cr6.eq) goto loc_82930F84;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82930f84
	if (ctx.cr6.eq) goto loc_82930F84;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82930F84:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8292c898
	ctx.lr = 0x82930F9C;
	sub_8292C898(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82930FB0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82930f6c
	if (!ctx.cr6.eq) goto loc_82930F6C;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82967e08
	ctx.lr = 0x82930FCC;
	sub_82967E08(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829312e4
	if (ctx.cr0.eq) goto loc_829312E4;
	// subfic r10,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r28.s64;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r28,r10,39
	ctx.r28.s64 = ctx.r10.s64 + 39;
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x82931044
	goto loc_82931044;
loc_82930FF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82931018
	if (ctx.cr6.eq) goto loc_82931018;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82931018
	if (ctx.cr6.eq) goto loc_82931018;
	// li r11,32
	ctx.r11.s64 = 32;
	// stbx r11,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82931018:
	// subf r7,r30,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r30.s64;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r6,r29,r30
	ctx.r6.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8292c898
	ctx.lr = 0x82931030;
	sub_8292C898(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82931044:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82930ff8
	if (!ctx.cr6.eq) goto loc_82930FF8;
	// stbx r28,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r28.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82931a80
	ctx.lr = 0x82931058;
	sub_82931A80(ctx, base);
	// addi r11,r20,80
	ctx.r11.s64 = ctx.r20.s64 + 80;
	// addi r10,r20,24
	ctx.r10.s64 = ctx.r20.s64 + 24;
	// lwz r8,24(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// lwz r7,16(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// lwz r6,20(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82931ab8
	ctx.lr = 0x82931084;
	sub_82931AB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// blt 0x829312e0
	if (ctx.cr0.lt) goto loc_829312E0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,2256(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2256);
	// bl 0x82933ce8
	ctx.lr = 0x8293109C;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829312dc
	if (ctx.cr0.lt) goto loc_829312DC;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r3,56
	ctx.r3.s64 = 56;
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x82967f50
	ctx.lr = 0x829310BC;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829310d4
	if (ctx.cr0.eq) goto loc_829310D4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82968578
	ctx.lr = 0x829310CC;
	sub_82968578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x829310d8
	goto loc_829310D8;
loc_829310D4:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_829310D8:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// beq cr6,0x829312e0
	if (ctx.cr6.eq) goto loc_829312E0;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// bl 0x828b2440
	ctx.lr = 0x829310F8;
	sub_828B2440(ctx, base);
loc_829310F8:
	// lwz r24,12(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82930dc4
	if (!ctx.cr6.eq) goto loc_82930DC4;
loc_82931104:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8293131c
	if (ctx.cr6.eq) goto loc_8293131C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r24,r11,-18900
	ctx.r24.s64 = ctx.r11.s64 + -18900;
loc_8293111C:
	// lwz r26,0(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi r26,0
	ctx.cr0.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq 0x82931130
	if (ctx.cr0.eq) goto loc_82931130;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// b 0x82931134
	goto loc_82931134;
loc_82931130:
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_82931134:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82931144
	if (ctx.cr6.eq) goto loc_82931144;
	// lwz r27,12(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x82931148
	goto loc_82931148;
loc_82931144:
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_82931148:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r30,r26,16
	ctx.r30.s64 = ctx.r26.s64 + 16;
	// bne cr6,0x82931158
	if (!ctx.cr6.eq) goto loc_82931158;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_82931158:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x82931168
	if (!ctx.cr6.eq) goto loc_82931168;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82931168:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r28,r27,16
	ctx.r28.s64 = ctx.r27.s64 + 16;
	// bne cr6,0x82931178
	if (!ctx.cr6.eq) goto loc_82931178;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
loc_82931178:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8293130c
	if (ctx.cr6.eq) goto loc_8293130C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8293130c
	if (ctx.cr6.eq) goto loc_8293130C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8293130c
	if (ctx.cr6.eq) goto loc_8293130C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8293130c
	if (!ctx.cr6.eq) goto loc_8293130C;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_829311A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x829311c8
	if (ctx.cr0.eq) goto loc_829311C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x829311a4
	if (ctx.cr6.eq) goto loc_829311A4;
loc_829311C8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8293130c
	if (!ctx.cr0.eq) goto loc_8293130C;
	// lwz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82967e08
	ctx.lr = 0x829311EC;
	sub_82967E08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829312e4
	if (ctx.cr0.eq) goto loc_829312E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x82fa77c0
	ctx.lr = 0x82931204;
	sub_82FA77C0(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r5,36(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// bl 0x82fa77c0
	ctx.lr = 0x82931218;
	sub_82FA77C0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82931a80
	ctx.lr = 0x82931220;
	sub_82931A80(ctx, base);
	// addi r11,r20,80
	ctx.r11.s64 = ctx.r20.s64 + 80;
	// addi r10,r20,24
	ctx.r10.s64 = ctx.r20.s64 + 24;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82931ab8
	ctx.lr = 0x8293124C;
	sub_82931AB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829312dc
	if (ctx.cr0.lt) goto loc_829312DC;
	// lwz r30,12(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8293125C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,2256(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2256);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82933ce8
	ctx.lr = 0x8293126C;
	sub_82933CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x829312dc
	if (ctx.cr0.lt) goto loc_829312DC;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x829312ec
	if (ctx.cr6.eq) goto loc_829312EC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829312ac
	if (ctx.cr6.eq) goto loc_829312AC;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82931298:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82931298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82931298;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// b 0x8293125c
	goto loc_8293125C;
loc_829312AC:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82967f50
	ctx.lr = 0x829312B4;
	sub_82967F50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829312c8
	if (ctx.cr0.eq) goto loc_829312C8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82968578
	ctx.lr = 0x829312C4;
	sub_82968578(ctx, base);
	// b 0x829312cc
	goto loc_829312CC;
loc_829312C8:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_829312CC:
	// stw r3,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r3.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8293125c
	if (!ctx.cr0.eq) goto loc_8293125C;
loc_829312DC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_829312E0:
	// bl 0x828b2440
	ctx.lr = 0x829312E4;
	sub_828B2440(ctx, base);
loc_829312E4:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// b 0x82931338
	goto loc_82931338;
loc_829312EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x829312fc
	if (!ctx.cr6.eq) goto loc_829312FC;
	// stw r30,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r30.u32);
	// b 0x82931300
	goto loc_82931300;
loc_829312FC:
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
loc_82931300:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x828b2440
	ctx.lr = 0x82931308;
	sub_828B2440(ctx, base);
	// b 0x82931310
	goto loc_82931310;
loc_8293130C:
	// addi r25,r26,12
	ctx.r25.s64 = ctx.r26.s64 + 12;
loc_82931310:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8293111c
	if (!ctx.cr6.eq) goto loc_8293111C;
loc_8293131C:
	// lwz r11,1668(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1668);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82931324:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1668(r20)
	PPC_STORE_U32(ctx.r20.u32 + 1668, ctx.r11.u32);
	// b 0x82931338
	goto loc_82931338;
loc_82931334:
	// li r3,2
	ctx.r3.s64 = 2;
loc_82931338:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82931340"))) PPC_WEAK_FUNC(sub_82931340);
PPC_FUNC_IMPL(__imp__sub_82931340) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// bne cr6,0x82931378
	if (!ctx.cr6.eq) goto loc_82931378;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82931378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82931378:
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

__attribute__((alias("__imp__sub_82931390"))) PPC_WEAK_FUNC(sub_82931390);
PPC_FUNC_IMPL(__imp__sub_82931390) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691410
	ctx.lr = 0x829313B8;
	sub_82691410(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x829313d0
	if (!ctx.cr0.eq) goto loc_829313D0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x829313d8
	goto loc_829313D8;
loc_829313D0:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_829313D8:
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

__attribute__((alias("__imp__sub_829313F0"))) PPC_WEAK_FUNC(sub_829313F0);
PPC_FUNC_IMPL(__imp__sub_829313F0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,4652
	ctx.r10.s64 = ctx.r10.s64 + 4652;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_82931414:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82931434
	if (!ctx.cr0.eq) goto loc_82931434;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82931414
	if (!ctx.cr6.eq) goto loc_82931414;
loc_82931434:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82931474
	if (ctx.cr0.eq) goto loc_82931474;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,4620
	ctx.r10.s64 = ctx.r10.s64 + 4620;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_8293144C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8293146c
	if (!ctx.cr0.eq) goto loc_8293146C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8293144c
	if (!ctx.cr6.eq) goto loc_8293144C;
loc_8293146C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82931490
	if (!ctx.cr0.eq) goto loc_82931490;
loc_82931474:
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82931488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82931498
	goto loc_82931498;
loc_82931490:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16386
	ctx.r3.u64 = ctx.r3.u64 | 16386;
loc_82931498:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829314A8"))) PPC_WEAK_FUNC(sub_829314A8);
PPC_FUNC_IMPL(__imp__sub_829314A8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-18764
	ctx.r11.s64 = ctx.r11.s64 + -18764;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82691460
	ctx.lr = 0x829314DC;
	sub_82691460(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829314f0
	if (ctx.cr0.eq) goto loc_829314F0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x829314F0;
	sub_82691460(ctx, base);
loc_829314F0:
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

__attribute__((alias("__imp__sub_8293150C"))) PPC_WEAK_FUNC(sub_8293150C);
PPC_FUNC_IMPL(__imp__sub_8293150C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82931510"))) PPC_WEAK_FUNC(sub_82931510);
PPC_FUNC_IMPL(__imp__sub_82931510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82931518;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82931538
	if (!ctx.cr6.eq) goto loc_82931538;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x829315d4
	goto loc_829315D4;
loc_82931538:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82691410
	ctx.lr = 0x82931544;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82931574
	if (ctx.cr0.eq) goto loc_82931574;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-18764
	ctx.r10.s64 = ctx.r10.s64 + -18764;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x82931578
	goto loc_82931578;
loc_82931574:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82931578:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8293158c
	if (!ctx.cr6.eq) goto loc_8293158C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x829315d4
	goto loc_829315D4;
loc_8293158C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829315A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x829315cc
	if (!ctx.cr0.lt) goto loc_829315CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829315C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x829315d4
	goto loc_829315D4;
loc_829315CC:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_829315D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829315DC"))) PPC_WEAK_FUNC(sub_829315DC);
PPC_FUNC_IMPL(__imp__sub_829315DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829315E0"))) PPC_WEAK_FUNC(sub_829315E0);
PPC_FUNC_IMPL(__imp__sub_829315E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82931510
	sub_82931510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829315E4"))) PPC_WEAK_FUNC(sub_829315E4);
PPC_FUNC_IMPL(__imp__sub_829315E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829315E8"))) PPC_WEAK_FUNC(sub_829315E8);
PPC_FUNC_IMPL(__imp__sub_829315E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x829315f8
	if (ctx.cr6.eq) goto loc_829315F8;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_829315F8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82931604
	if (ctx.cr6.eq) goto loc_82931604;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82931604:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82931618
	if (!ctx.cr6.eq) goto loc_82931618;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
loc_82931618:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,4138
	ctx.r11.s64 = 271187968;
	// ori r11,r11,4352
	ctx.r11.u64 = ctx.r11.u64 | 4352;
	// rlwinm r10,r8,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82931638
	if (!ctx.cr6.eq) goto loc_82931638;
loc_82931630:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82931638:
	// rlwinm r11,r8,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,18008
	ctx.r10.s64 = 1180172288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82931690
	if (ctx.cr6.eq) goto loc_82931690;
	// lis r10,21592
	ctx.r10.s64 = 1415053312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82931690
	if (ctx.cr6.eq) goto loc_82931690;
	// lis r10,32766
	ctx.r10.s64 = 2147352576;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82931690
	if (ctx.cr6.eq) goto loc_82931690;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82931690
	if (ctx.cr6.eq) goto loc_82931690;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82931690
	if (ctx.cr6.eq) goto loc_82931690;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82931690
	if (ctx.cr6.eq) goto loc_82931690;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// blr 
	return;
loc_82931690:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82931694:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829316f8
	if (!ctx.cr0.eq) goto loc_829316F8;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82931630
	if (ctx.cr6.eq) goto loc_82931630;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// bne cr6,0x829316d8
	if (!ctx.cr6.eq) goto loc_829316D8;
	// rlwinm r10,r10,16,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7FFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x829316cc
	if (!ctx.cr6.gt) goto loc_829316CC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82931700
	if (ctx.cr6.eq) goto loc_82931700;
loc_829316CC:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_829316D0:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x829316f8
	goto loc_829316F8;
loc_829316D8:
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r7,512
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 512, ctx.xer);
	// blt cr6,0x829316ec
	if (ctx.cr6.lt) goto loc_829316EC;
	// rlwinm r10,r10,10,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3C;
	// b 0x829316d0
	goto loc_829316D0;
loc_829316EC:
	// cmplwi cr6,r9,81
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 81, ctx.xer);
	// bne cr6,0x829316f8
	if (!ctx.cr6.eq) goto loc_829316F8;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_829316F8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82931694
	goto loc_82931694;
loc_82931700:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82931710
	if (ctx.cr6.eq) goto loc_82931710;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82931710:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82931724
	if (ctx.cr6.eq) goto loc_82931724;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82931724:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8293172C"))) PPC_WEAK_FUNC(sub_8293172C);
PPC_FUNC_IMPL(__imp__sub_8293172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82931730"))) PPC_WEAK_FUNC(sub_82931730);
PPC_FUNC_IMPL(__imp__sub_82931730) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82931764"))) PPC_WEAK_FUNC(sub_82931764);
PPC_FUNC_IMPL(__imp__sub_82931764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82931768"))) PPC_WEAK_FUNC(sub_82931768);
PPC_FUNC_IMPL(__imp__sub_82931768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82931770;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82931814
	if (ctx.cr6.eq) goto loc_82931814;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82931798
	if (!ctx.cr6.eq) goto loc_82931798;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82931814
	goto loc_82931814;
loc_82931798:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82931510
	ctx.lr = 0x829317A4;
	sub_82931510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82931818
	if (ctx.cr0.lt) goto loc_82931818;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829317C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// lwz r31,20(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// b 0x8293180c
	goto loc_8293180C;
loc_829317D8:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_829317E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x829317e0
	if (!ctx.cr6.eq) goto loc_829317E0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r30,r5,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r5.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82931808;
	sub_82FA77C0(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8293180C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x829317d8
	if (!ctx.cr6.eq) goto loc_829317D8;
loc_82931814:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82931818:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82931820"))) PPC_WEAK_FUNC(sub_82931820);
PPC_FUNC_IMPL(__imp__sub_82931820) {
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
	// li r5,1556
	ctx.r5.s64 = 1556;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82931840;
	sub_82FA7CF0(ctx, base);
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

__attribute__((alias("__imp__sub_82931858"))) PPC_WEAK_FUNC(sub_82931858);
PPC_FUNC_IMPL(__imp__sub_82931858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25033
	ctx.r11.s64 = -1640562688;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// ori r9,r11,31161
	ctx.r9.u64 = ctx.r11.u64 | 31161;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,12
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x82931934
	if (ctx.cr6.lt) goto loc_82931934;
	// li r7,12
	ctx.r7.s64 = 12;
	// divwu r7,r4,r7
	ctx.r7.u32 = ctx.r4.u32 / ctx.r7.u32;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82931880:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r8,-12
	ctx.r8.s64 = ctx.r8.s64 + -12;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// subf r7,r10,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r10.s64;
	// rlwinm r6,r10,19,13,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// subf r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r7,r9,19,13,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7FFFF;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r7,r10,20,12,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r7,r11,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r7,r9,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r7,r10,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// rlwinm r7,r11,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r7,r9,17,15,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// bdnz 0x82931880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82931880;
loc_82931934:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplwi cr6,r8,10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 10, ctx.xer);
	// bgt cr6,0x829319e8
	if (ctx.cr6.gt) {
		// ERROR 829319E8
		return;
	}
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-18664
	ctx.r12.s64 = ctx.r12.s64 + -18664;
	// lbzx r0,r12,r8
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r8.u32);
	// lis r12,-32109
	ctx.r12.s64 = -2104295424;
	// nop 
	// addi r12,r12,6508
	ctx.r12.s64 = ctx.r12.s64 + 6508;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r8.u64) {
	case 0:
		// ERROR: 0x829319E0
		return;
	case 1:
		// ERROR: 0x829319D4
		return;
	case 2:
		// ERROR: 0x829319C8
		return;
	case 3:
		// ERROR: 0x829319BC
		return;
	case 4:
		// ERROR: 0x829319B4
		return;
	case 5:
		// ERROR: 0x829319A8
		return;
	case 6:
		// ERROR: 0x8293199C
		return;
	case 7:
		// ERROR: 0x82931990
		return;
	case 8:
		// ERROR: 0x82931984
		return;
	case 9:
		// ERROR: 0x82931978
		return;
	case 10:
		// ERROR: 0x8293196C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8293196C"))) PPC_WEAK_FUNC(sub_8293196C);
PPC_FUNC_IMPL(__imp__sub_8293196C) {
	PPC_FUNC_PROLOGUE();
	// lbz r8,10(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// rotlwi r8,r8,24
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 24);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r8,9(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r8,7(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// rotlwi r8,r8,24
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 24);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r8,6(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r8,5(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r8,3(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// rotlwi r8,r8,24
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 24);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r8,2(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r8,1(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,19,13,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r8,r9,19,13,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7FFFF;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,20,12,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r8,r9,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r8,r11,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r9,r9,17,15,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// xor r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82931A7C"))) PPC_WEAK_FUNC(sub_82931A7C);
PPC_FUNC_IMPL(__imp__sub_82931A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82931A80"))) PPC_WEAK_FUNC(sub_82931A80);
PPC_FUNC_IMPL(__imp__sub_82931A80) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82931AB8"))) PPC_WEAK_FUNC(sub_82931AB8);
PPC_FUNC_IMPL(__imp__sub_82931AB8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82931b58
	if (ctx.cr6.eq) goto loc_82931B58;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82931b58
	if (ctx.cr6.eq) goto loc_82931B58;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82931b0c
	if (!ctx.cr6.eq) goto loc_82931B0C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82931b08
	if (ctx.cr6.eq) goto loc_82931B08;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_82931AE8:
	// lbz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82931ae8
	if (!ctx.cr6.eq) goto loc_82931AE8;
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// b 0x82931b0c
	goto loc_82931B0C;
loc_82931B08:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82931B0C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82931b1c
	if (!ctx.cr6.eq) goto loc_82931B1C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82931b58
	if (!ctx.cr6.eq) goto loc_82931B58;
loc_82931B1C:
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r30,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r30.u32);
	// stw r31,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r31.u32);
	// b 0x82931b60
	goto loc_82931B60;
loc_82931B58:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82931B60:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82931B6C"))) PPC_WEAK_FUNC(sub_82931B6C);
PPC_FUNC_IMPL(__imp__sub_82931B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82931B70"))) PPC_WEAK_FUNC(sub_82931B70);
PPC_FUNC_IMPL(__imp__sub_82931B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82931B78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82931bcc
	if (!ctx.cr6.lt) goto loc_82931BCC;
loc_82931B94:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82fa5570
	ctx.lr = 0x82931B9C;
	sub_82FA5570(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82931bbc
	if (!ctx.cr0.eq) goto loc_82931BBC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x82931bbc
	if (ctx.cr6.eq) goto loc_82931BBC;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x82931bcc
	if (!ctx.cr6.eq) goto loc_82931BCC;
loc_82931BBC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82931b94
	if (ctx.cr6.lt) goto loc_82931B94;
loc_82931BCC:
	// subf r3,r30,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82931BD8"))) PPC_WEAK_FUNC(sub_82931BD8);
PPC_FUNC_IMPL(__imp__sub_82931BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82931BE0;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82931c80
	if (!ctx.cr6.lt) goto loc_82931C80;
	// lbz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// bl 0x82fa5510
	ctx.lr = 0x82931C0C;
	sub_82FA5510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82931c80
	if (ctx.cr0.eq) goto loc_82931C80;
	// addi r30,r26,1
	ctx.r30.s64 = ctx.r26.s64 + 1;
	// b 0x82931c30
	goto loc_82931C30;
loc_82931C1C:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82fa5510
	ctx.lr = 0x82931C24;
	sub_82FA5510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82931c3c
	if (ctx.cr0.eq) goto loc_82931C3C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82931C30:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82931c1c
	if (ctx.cr6.lt) goto loc_82931C1C;
loc_82931C3C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82931c54
	if (!ctx.cr6.lt) goto loc_82931C54;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x82931c70
	if (ctx.cr6.eq) goto loc_82931C70;
loc_82931C54:
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82931cd4
	goto loc_82931CD4;
loc_82931C5C:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82fa5510
	ctx.lr = 0x82931C64;
	sub_82FA5510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82931cd4
	if (ctx.cr0.eq) goto loc_82931CD4;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
loc_82931C70:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82931c5c
	if (ctx.cr6.lt) goto loc_82931C5C;
	// b 0x82931cd4
	goto loc_82931CD4;
loc_82931C80:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82931e7c
	if (!ctx.cr6.lt) goto loc_82931E7C;
	// lbz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x82931e7c
	if (!ctx.cr6.eq) goto loc_82931E7C;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x82fa5510
	ctx.lr = 0x82931CA4;
	sub_82FA5510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82931e7c
	if (ctx.cr0.eq) goto loc_82931E7C;
	// addi r30,r26,2
	ctx.r30.s64 = ctx.r26.s64 + 2;
	// b 0x82931cc8
	goto loc_82931CC8;
loc_82931CB4:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82fa5510
	ctx.lr = 0x82931CBC;
	sub_82FA5510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82931cd4
	if (ctx.cr0.eq) goto loc_82931CD4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82931CC8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82931cb4
	if (ctx.cr6.lt) goto loc_82931CB4;
loc_82931CD4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82931d30
	if (!ctx.cr6.lt) goto loc_82931D30;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82fac660
	ctx.lr = 0x82931CEC;
	sub_82FAC660(ctx, base);
	// cmpwi cr6,r3,101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 101, ctx.xer);
	// bne cr6,0x82931d30
	if (!ctx.cr6.eq) goto loc_82931D30;
	// lbz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x82fa5510
	ctx.lr = 0x82931CFC;
	sub_82FA5510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82931d30
	if (ctx.cr0.eq) goto loc_82931D30;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// b 0x82931d20
	goto loc_82931D20;
loc_82931D0C:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82fa5510
	ctx.lr = 0x82931D14;
	sub_82FA5510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82931e18
	if (ctx.cr0.eq) goto loc_82931E18;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82931D20:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82931d0c
	if (ctx.cr6.lt) goto loc_82931D0C;
	// b 0x82931e18
	goto loc_82931E18;
loc_82931D30:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82931da4
	if (!ctx.cr6.lt) goto loc_82931DA4;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82fac660
	ctx.lr = 0x82931D48;
	sub_82FAC660(ctx, base);
	// cmpwi cr6,r3,101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 101, ctx.xer);
	// bne cr6,0x82931da4
	if (!ctx.cr6.eq) goto loc_82931DA4;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82931d68
	if (ctx.cr6.eq) goto loc_82931D68;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82931da4
	if (!ctx.cr6.eq) goto loc_82931DA4;
loc_82931D68:
	// lbz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// bl 0x82fa5510
	ctx.lr = 0x82931D70;
	sub_82FA5510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82931da4
	if (ctx.cr0.eq) goto loc_82931DA4;
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// b 0x82931d94
	goto loc_82931D94;
loc_82931D80:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82fa5510
	ctx.lr = 0x82931D88;
	sub_82FA5510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82931e18
	if (ctx.cr0.eq) goto loc_82931E18;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82931D94:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82931d80
	if (ctx.cr6.lt) goto loc_82931D80;
	// b 0x82931e18
	goto loc_82931E18;
loc_82931DA4:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bne cr6,0x82931e10
	if (!ctx.cr6.eq) goto loc_82931E10;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-18704
	ctx.r27.s64 = ctx.r11.s64 + -18704;
loc_82931DB8:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82931DC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82931dc0
	if (!ctx.cr6.eq) goto loc_82931DC0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r10,r26,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r26.s64;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82931e00
	if (ctx.cr6.lt) goto loc_82931E00;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82fa4320
	ctx.lr = 0x82931DF8;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82931e6c
	if (ctx.cr0.eq) goto loc_82931E6C;
loc_82931E00:
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82931db8
	if (!ctx.cr6.eq) goto loc_82931DB8;
loc_82931E10:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82931e7c
	if (!ctx.cr6.eq) goto loc_82931E7C;
loc_82931E18:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82931e64
	if (ctx.cr6.eq) goto loc_82931E64;
	// subf r29,r26,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r26.s64;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82faced4
	ctx.lr = 0x82931E34;
	sub_82FACED4(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82931E50;
	sub_82FA77C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stbx r11,r28,r29
	PPC_STORE_U8(ctx.r28.u32 + ctx.r29.u32, ctx.r11.u8);
	// bl 0x82fa9750
	ctx.lr = 0x82931E60;
	sub_82FA9750(ctx, base);
	// stfd f1,0(r24)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.f1.u64);
loc_82931E64:
	// subf r3,r26,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r26.s64;
	// b 0x82931e80
	goto loc_82931E80;
loc_82931E6C:
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfd f0,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.f0.u64);
	// b 0x82931e80
	goto loc_82931E80;
loc_82931E7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82931E80:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82931E88"))) PPC_WEAK_FUNC(sub_82931E88);
PPC_FUNC_IMPL(__imp__sub_82931E88) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82931f68
	if (!ctx.cr6.lt) goto loc_82931F68;
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// cmpwi cr6,r8,35
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 35, ctx.xer);
	// bne cr6,0x82931edc
	if (!ctx.cr6.eq) goto loc_82931EDC;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,35
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 35, ctx.xer);
	// beq cr6,0x82931ed0
	if (ctx.cr6.eq) goto loc_82931ED0;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x82931edc
	if (!ctx.cr6.eq) goto loc_82931EDC;
loc_82931ED0:
	// stb r10,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
loc_82931ED4:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82931EDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82931f9c
	if (!ctx.cr6.eq) goto loc_82931F9C;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bgt cr6,0x82931f48
	if (ctx.cr6.gt) goto loc_82931F48;
	// beq cr6,0x82931ed0
	if (ctx.cr6.eq) goto loc_82931ED0;
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// beq cr6,0x82931ed0
	if (ctx.cr6.eq) goto loc_82931ED0;
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// beq cr6,0x82931ed0
	if (ctx.cr6.eq) goto loc_82931ED0;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x82931ed0
	if (ctx.cr6.eq) goto loc_82931ED0;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x82931f68
	if (!ctx.cr6.eq) goto loc_82931F68;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82931f68
	if (!ctx.cr6.lt) goto loc_82931F68;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,46
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 46, ctx.xer);
	// bne cr6,0x82931f68
	if (!ctx.cr6.eq) goto loc_82931F68;
	// stb r10,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
	// li r3,3
	ctx.r3.s64 = 3;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r11.u8);
	// blr 
	return;
loc_82931F48:
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x82931f70
	if (ctx.cr6.eq) goto loc_82931F70;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// beq cr6,0x82931ed0
	if (ctx.cr6.eq) goto loc_82931ED0;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x82931f70
	if (ctx.cr6.eq) goto loc_82931F70;
loc_82931F60:
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
loc_82931F64:
	// beq cr6,0x82931ed0
	if (ctx.cr6.eq) goto loc_82931ED0;
loc_82931F68:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82931F70:
	// stb r10,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82931ed4
	if (!ctx.cr6.lt) goto loc_82931ED4;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x82931ed4
	if (!ctx.cr6.eq) goto loc_82931ED4;
	// stb r11,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r11.u8);
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82931F9C:
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// bne cr6,0x82932004
	if (!ctx.cr6.eq) goto loc_82932004;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bgt cr6,0x82931fe8
	if (ctx.cr6.gt) goto loc_82931FE8;
	// beq cr6,0x82931ed0
	if (ctx.cr6.eq) goto loc_82931ED0;
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// beq cr6,0x82931ed0
	if (ctx.cr6.eq) goto loc_82931ED0;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// ble cr6,0x82931f68
	if (!ctx.cr6.gt) goto loc_82931F68;
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// ble cr6,0x82931ed0
	if (!ctx.cr6.gt) goto loc_82931ED0;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// ble cr6,0x82931f68
	if (!ctx.cr6.gt) goto loc_82931F68;
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// ble cr6,0x82931ed0
	if (!ctx.cr6.gt) goto loc_82931ED0;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x82931ed0
	if (ctx.cr6.eq) goto loc_82931ED0;
	// b 0x82931f68
	goto loc_82931F68;
loc_82931FE8:
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x82931ed0
	if (ctx.cr6.eq) goto loc_82931ED0;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x82931ed0
	if (ctx.cr6.eq) goto loc_82931ED0;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// beq cr6,0x82931ed0
	if (ctx.cr6.eq) goto loc_82931ED0;
	// b 0x82931f60
	goto loc_82931F60;
loc_82932004:
	// cmpwi cr6,r8,45
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 45, ctx.xer);
	// bne cr6,0x82931f68
	if (!ctx.cr6.eq) goto loc_82931F68;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// b 0x82931f64
	goto loc_82931F64;
}

__attribute__((alias("__imp__sub_82932014"))) PPC_WEAK_FUNC(sub_82932014);
PPC_FUNC_IMPL(__imp__sub_82932014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82932018"))) PPC_WEAK_FUNC(sub_82932018);
PPC_FUNC_IMPL(__imp__sub_82932018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82932020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,7
	ctx.r30.s64 = 7;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82932048
	if (ctx.cr6.lt) goto loc_82932048;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82932094
	goto loc_82932094;
loc_82932048:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82fac660
	ctx.lr = 0x82932054;
	sub_82FAC660(ctx, base);
	// cmpwi cr6,r3,102
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 102, ctx.xer);
	// beq cr6,0x8293207c
	if (ctx.cr6.eq) goto loc_8293207C;
	// cmpwi cr6,r3,104
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 104, ctx.xer);
	// beq cr6,0x82932074
	if (ctx.cr6.eq) goto loc_82932074;
	// cmpwi cr6,r3,108
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 108, ctx.xer);
	// bne cr6,0x82932084
	if (!ctx.cr6.eq) goto loc_82932084;
	// li r30,10
	ctx.r30.s64 = 10;
	// b 0x82932080
	goto loc_82932080;
loc_82932074:
	// li r30,8
	ctx.r30.s64 = 8;
	// b 0x82932080
	goto loc_82932080;
loc_8293207C:
	// li r30,9
	ctx.r30.s64 = 9;
loc_82932080:
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
loc_82932084:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82932090
	if (ctx.cr6.eq) goto loc_82932090;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_82932090:
	// subf r3,r31,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_82932094:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8293209C"))) PPC_WEAK_FUNC(sub_8293209C);
PPC_FUNC_IMPL(__imp__sub_8293209C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829320A0"))) PPC_WEAK_FUNC(sub_829320A0);
PPC_FUNC_IMPL(__imp__sub_829320A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x829320A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8293218c
	if (!ctx.cr6.lt) goto loc_8293218C;
loc_829320D4:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82932104
	if (!ctx.cr0.eq) goto loc_82932104;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82932104
	if (!ctx.cr0.eq) goto loc_82932104;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82fac660
	ctx.lr = 0x829320F0;
	sub_82FAC660(ctx, base);
	// cmpwi cr6,r3,117
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 117, ctx.xer);
	// bne cr6,0x82932104
	if (!ctx.cr6.eq) goto loc_82932104;
	// li r27,1
	ctx.r27.s64 = 1;
loc_829320FC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82932180
	goto loc_82932180;
loc_82932104:
	// clrlwi. r30,r25,24
	ctx.r30.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82932130
	if (!ctx.cr0.eq) goto loc_82932130;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82932130
	if (!ctx.cr0.eq) goto loc_82932130;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82fac660
	ctx.lr = 0x82932120;
	sub_82FAC660(ctx, base);
	// cmpwi cr6,r3,108
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 108, ctx.xer);
	// bne cr6,0x82932130
	if (!ctx.cr6.eq) goto loc_82932130;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x829320fc
	goto loc_829320FC;
loc_82932130:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cntlzw r10,r30
	ctx.r10.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8293218c
	if (ctx.cr0.eq) goto loc_8293218C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82fac660
	ctx.lr = 0x82932158;
	sub_82FAC660(ctx, base);
	// cmpwi cr6,r3,105
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 105, ctx.xer);
	// bne cr6,0x8293218c
	if (!ctx.cr6.eq) goto loc_8293218C;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// bne cr6,0x8293218c
	if (!ctx.cr6.eq) goto loc_8293218C;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// bne cr6,0x8293218c
	if (!ctx.cr6.eq) goto loc_8293218C;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
loc_82932180:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829320d4
	if (ctx.cr6.lt) goto loc_829320D4;
loc_8293218C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x829321d4
	if (ctx.cr6.eq) goto loc_829321D4;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829321b4
	if (ctx.cr0.eq) goto loc_829321B4;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x829321d0
	goto loc_829321D0;
loc_829321B4:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829321c4
	if (ctx.cr0.eq) goto loc_829321C4;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x829321d0
	goto loc_829321D0;
loc_829321C4:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829321d4
	if (ctx.cr0.eq) goto loc_829321D4;
	// li r11,3
	ctx.r11.s64 = 3;
loc_829321D0:
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_829321D4:
	// subf r3,r26,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r26.s64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829321E0"))) PPC_WEAK_FUNC(sub_829321E0);
PPC_FUNC_IMPL(__imp__sub_829321E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x829321fc
	if (!ctx.cr6.eq) goto loc_829321FC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_829321FC:
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82932200:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8293221c
	if (ctx.cr0.eq) goto loc_8293221C;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82932200
	if (!ctx.cr0.eq) goto loc_82932200;
loc_8293221C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82932230
	if (!ctx.cr6.eq) goto loc_82932230;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
loc_82932230:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8293223C"))) PPC_WEAK_FUNC(sub_8293223C);
PPC_FUNC_IMPL(__imp__sub_8293223C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82932240"))) PPC_WEAK_FUNC(sub_82932240);
PPC_FUNC_IMPL(__imp__sub_82932240) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82932260
	if (!ctx.cr6.eq) goto loc_82932260;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82932260:
	// subf r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82932264:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8293228c
	if (ctx.cr6.eq) goto loc_8293228C;
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8293228c
	if (ctx.cr0.eq) goto loc_8293228C;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bne 0x82932264
	if (!ctx.cr0.eq) goto loc_82932264;
loc_8293228C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x829322a0
	if (!ctx.cr6.eq) goto loc_829322A0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
loc_829322A0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829322AC"))) PPC_WEAK_FUNC(sub_829322AC);
PPC_FUNC_IMPL(__imp__sub_829322AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829322B0"))) PPC_WEAK_FUNC(sub_829322B0);
PPC_FUNC_IMPL(__imp__sub_829322B0) {
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
	// b 0x829322dc
	goto loc_829322DC;
loc_829322CC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82691460
	ctx.lr = 0x829322D8;
	sub_82691460(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_829322DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829322cc
	if (!ctx.cr6.eq) goto loc_829322CC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82691460
	ctx.lr = 0x829322F4;
	sub_82691460(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82691460
	ctx.lr = 0x82932300;
	sub_82691460(ctx, base);
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

__attribute__((alias("__imp__sub_82932318"))) PPC_WEAK_FUNC(sub_82932318);
PPC_FUNC_IMPL(__imp__sub_82932318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82932320;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r29,r11,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82932388
	if (ctx.cr0.eq) goto loc_82932388;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82932350:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82932368
	if (!ctx.cr6.gt) goto loc_82932368;
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// b 0x82932370
	goto loc_82932370;
loc_82932368:
	// bge cr6,0x82932380
	if (!ctx.cr6.lt) goto loc_82932380;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82932370:
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r29,r10,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// blt cr6,0x82932350
	if (ctx.cr6.lt) goto loc_82932350;
loc_82932380:
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x829324a0
	if (ctx.cr6.lt) goto loc_829324A0;
loc_82932388:
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8293243c
	if (!ctx.cr6.eq) goto loc_8293243C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x829323ac
	if (!ctx.cr6.eq) goto loc_829323AC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_829323AC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82691410
	ctx.lr = 0x829323B8;
	sub_82691410(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8293240c
	if (ctx.cr0.eq) goto loc_8293240C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa77c0
	ctx.lr = 0x829323D4;
	sub_82FA77C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82691460
	ctx.lr = 0x829323E0;
	sub_82691460(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x829323f8
	if (!ctx.cr6.eq) goto loc_829323F8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_829323F8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82691410
	ctx.lr = 0x82932404;
	sub_82691410(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82932418
	if (!ctx.cr0.eq) goto loc_82932418;
loc_8293240C:
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// b 0x829324ac
	goto loc_829324AC;
loc_82932418:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa77c0
	ctx.lr = 0x8293242C;
	sub_82FA77C0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82691460
	ctx.lr = 0x82932438;
	sub_82691460(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8293243C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x8293247c
	if (!ctx.cr6.gt) goto loc_8293247C;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82932454:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bdnz 0x82932454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82932454;
loc_8293247C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r28,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_829324A0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x829324ac
	if (ctx.cr6.eq) goto loc_829324AC;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
loc_829324AC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82691460
	ctx.lr = 0x829324B8;
	sub_82691460(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

