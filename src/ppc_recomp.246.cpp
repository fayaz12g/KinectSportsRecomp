#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82DC3D70"))) PPC_WEAK_FUNC(sub_82DC3D70);
PPC_FUNC_IMPL(__imp__sub_82DC3D70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3D74"))) PPC_WEAK_FUNC(sub_82DC3D74);
PPC_FUNC_IMPL(__imp__sub_82DC3D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3D78"))) PPC_WEAK_FUNC(sub_82DC3D78);
PPC_FUNC_IMPL(__imp__sub_82DC3D78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-1092
	ctx.r10.s64 = ctx.r11.s64 + -1092;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3D90"))) PPC_WEAK_FUNC(sub_82DC3D90);
PPC_FUNC_IMPL(__imp__sub_82DC3D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-1092
	ctx.r3.s64 = ctx.r11.s64 + -1092;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3D9C"))) PPC_WEAK_FUNC(sub_82DC3D9C);
PPC_FUNC_IMPL(__imp__sub_82DC3D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3DA0"))) PPC_WEAK_FUNC(sub_82DC3DA0);
PPC_FUNC_IMPL(__imp__sub_82DC3DA0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82dcb6c0
	sub_82DCB6C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3DAC"))) PPC_WEAK_FUNC(sub_82DC3DAC);
PPC_FUNC_IMPL(__imp__sub_82DC3DAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3DB0"))) PPC_WEAK_FUNC(sub_82DC3DB0);
PPC_FUNC_IMPL(__imp__sub_82DC3DB0) {
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

__attribute__((alias("__imp__sub_82DC3DC4"))) PPC_WEAK_FUNC(sub_82DC3DC4);
PPC_FUNC_IMPL(__imp__sub_82DC3DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3DC8"))) PPC_WEAK_FUNC(sub_82DC3DC8);
PPC_FUNC_IMPL(__imp__sub_82DC3DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dcb6c0
	ctx.lr = 0x82DC3DE0;
	sub_82DCB6C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3DF4"))) PPC_WEAK_FUNC(sub_82DC3DF4);
PPC_FUNC_IMPL(__imp__sub_82DC3DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3DF8"))) PPC_WEAK_FUNC(sub_82DC3DF8);
PPC_FUNC_IMPL(__imp__sub_82DC3DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-12000
	ctx.r3.s64 = ctx.r11.s64 + -12000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3E04"))) PPC_WEAK_FUNC(sub_82DC3E04);
PPC_FUNC_IMPL(__imp__sub_82DC3E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3E08"))) PPC_WEAK_FUNC(sub_82DC3E08);
PPC_FUNC_IMPL(__imp__sub_82DC3E08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82dd2420
	sub_82DD2420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3E14"))) PPC_WEAK_FUNC(sub_82DC3E14);
PPC_FUNC_IMPL(__imp__sub_82DC3E14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3E18"))) PPC_WEAK_FUNC(sub_82DC3E18);
PPC_FUNC_IMPL(__imp__sub_82DC3E18) {
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

__attribute__((alias("__imp__sub_82DC3E2C"))) PPC_WEAK_FUNC(sub_82DC3E2C);
PPC_FUNC_IMPL(__imp__sub_82DC3E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3E30"))) PPC_WEAK_FUNC(sub_82DC3E30);
PPC_FUNC_IMPL(__imp__sub_82DC3E30) {
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
	// bl 0x82dd2420
	ctx.lr = 0x82DC3E48;
	sub_82DD2420(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3E5C"))) PPC_WEAK_FUNC(sub_82DC3E5C);
PPC_FUNC_IMPL(__imp__sub_82DC3E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3E60"))) PPC_WEAK_FUNC(sub_82DC3E60);
PPC_FUNC_IMPL(__imp__sub_82DC3E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11936
	ctx.r3.s64 = ctx.r11.s64 + -11936;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3E6C"))) PPC_WEAK_FUNC(sub_82DC3E6C);
PPC_FUNC_IMPL(__imp__sub_82DC3E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3E70"))) PPC_WEAK_FUNC(sub_82DC3E70);
PPC_FUNC_IMPL(__imp__sub_82DC3E70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3E74"))) PPC_WEAK_FUNC(sub_82DC3E74);
PPC_FUNC_IMPL(__imp__sub_82DC3E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3E78"))) PPC_WEAK_FUNC(sub_82DC3E78);
PPC_FUNC_IMPL(__imp__sub_82DC3E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11872
	ctx.r3.s64 = ctx.r11.s64 + -11872;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3E84"))) PPC_WEAK_FUNC(sub_82DC3E84);
PPC_FUNC_IMPL(__imp__sub_82DC3E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3E88"))) PPC_WEAK_FUNC(sub_82DC3E88);
PPC_FUNC_IMPL(__imp__sub_82DC3E88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82de9b20
	sub_82DE9B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3E94"))) PPC_WEAK_FUNC(sub_82DC3E94);
PPC_FUNC_IMPL(__imp__sub_82DC3E94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3E98"))) PPC_WEAK_FUNC(sub_82DC3E98);
PPC_FUNC_IMPL(__imp__sub_82DC3E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11824
	ctx.r3.s64 = ctx.r11.s64 + -11824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3EA4"))) PPC_WEAK_FUNC(sub_82DC3EA4);
PPC_FUNC_IMPL(__imp__sub_82DC3EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3EA8"))) PPC_WEAK_FUNC(sub_82DC3EA8);
PPC_FUNC_IMPL(__imp__sub_82DC3EA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82dc3eb0
	sub_82DC3EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3EAC"))) PPC_WEAK_FUNC(sub_82DC3EAC);
PPC_FUNC_IMPL(__imp__sub_82DC3EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3EB0"))) PPC_WEAK_FUNC(sub_82DC3EB0);
PPC_FUNC_IMPL(__imp__sub_82DC3EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82DC3EB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,52
	ctx.r31.s64 = ctx.r3.s64 + 52;
	// bl 0x82d2d090
	ctx.lr = 0x82DC3EC8;
	sub_82D2D090(ctx, base);
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r29,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dc3f00
	if (!ctx.cr6.eq) goto loc_82DC3F00;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DC3F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC3F00:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r30,r28,40
	ctx.r30.s64 = ctx.r28.s64 + 40;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82DC3F14;
	sub_82D2D090(ctx, base);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r29,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dc3f48
	if (!ctx.cr6.eq) goto loc_82DC3F48;
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
	ctx.lr = 0x82DC3F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC3F48:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r31,r28,28
	ctx.r31.s64 = ctx.r28.s64 + 28;
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82DC3F58;
	sub_82D2D090(ctx, base);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r29,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dc3f8c
	if (!ctx.cr6.eq) goto loc_82DC3F8C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DC3F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC3F8C:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r30,r28,16
	ctx.r30.s64 = ctx.r28.s64 + 16;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82DC3F9C;
	sub_82D2D090(ctx, base);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dc3fd0
	if (!ctx.cr6.eq) goto loc_82DC3FD0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DC3FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC3FD0:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC3FE0"))) PPC_WEAK_FUNC(sub_82DC3FE0);
PPC_FUNC_IMPL(__imp__sub_82DC3FE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3FE4"))) PPC_WEAK_FUNC(sub_82DC3FE4);
PPC_FUNC_IMPL(__imp__sub_82DC3FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3FE8"))) PPC_WEAK_FUNC(sub_82DC3FE8);
PPC_FUNC_IMPL(__imp__sub_82DC3FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11776
	ctx.r3.s64 = ctx.r11.s64 + -11776;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3FF4"))) PPC_WEAK_FUNC(sub_82DC3FF4);
PPC_FUNC_IMPL(__imp__sub_82DC3FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC3FF8"))) PPC_WEAK_FUNC(sub_82DC3FF8);
PPC_FUNC_IMPL(__imp__sub_82DC3FF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC3FFC"))) PPC_WEAK_FUNC(sub_82DC3FFC);
PPC_FUNC_IMPL(__imp__sub_82DC3FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4000"))) PPC_WEAK_FUNC(sub_82DC4000);
PPC_FUNC_IMPL(__imp__sub_82DC4000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4004"))) PPC_WEAK_FUNC(sub_82DC4004);
PPC_FUNC_IMPL(__imp__sub_82DC4004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4008"))) PPC_WEAK_FUNC(sub_82DC4008);
PPC_FUNC_IMPL(__imp__sub_82DC4008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11728
	ctx.r3.s64 = ctx.r11.s64 + -11728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4014"))) PPC_WEAK_FUNC(sub_82DC4014);
PPC_FUNC_IMPL(__imp__sub_82DC4014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4018"))) PPC_WEAK_FUNC(sub_82DC4018);
PPC_FUNC_IMPL(__imp__sub_82DC4018) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC401C"))) PPC_WEAK_FUNC(sub_82DC401C);
PPC_FUNC_IMPL(__imp__sub_82DC401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4020"))) PPC_WEAK_FUNC(sub_82DC4020);
PPC_FUNC_IMPL(__imp__sub_82DC4020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11680
	ctx.r3.s64 = ctx.r11.s64 + -11680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC402C"))) PPC_WEAK_FUNC(sub_82DC402C);
PPC_FUNC_IMPL(__imp__sub_82DC402C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4030"))) PPC_WEAK_FUNC(sub_82DC4030);
PPC_FUNC_IMPL(__imp__sub_82DC4030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4034"))) PPC_WEAK_FUNC(sub_82DC4034);
PPC_FUNC_IMPL(__imp__sub_82DC4034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4038"))) PPC_WEAK_FUNC(sub_82DC4038);
PPC_FUNC_IMPL(__imp__sub_82DC4038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC403C"))) PPC_WEAK_FUNC(sub_82DC403C);
PPC_FUNC_IMPL(__imp__sub_82DC403C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4040"))) PPC_WEAK_FUNC(sub_82DC4040);
PPC_FUNC_IMPL(__imp__sub_82DC4040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11632
	ctx.r3.s64 = ctx.r11.s64 + -11632;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC404C"))) PPC_WEAK_FUNC(sub_82DC404C);
PPC_FUNC_IMPL(__imp__sub_82DC404C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4050"))) PPC_WEAK_FUNC(sub_82DC4050);
PPC_FUNC_IMPL(__imp__sub_82DC4050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4054"))) PPC_WEAK_FUNC(sub_82DC4054);
PPC_FUNC_IMPL(__imp__sub_82DC4054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4058"))) PPC_WEAK_FUNC(sub_82DC4058);
PPC_FUNC_IMPL(__imp__sub_82DC4058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11584
	ctx.r3.s64 = ctx.r11.s64 + -11584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4064"))) PPC_WEAK_FUNC(sub_82DC4064);
PPC_FUNC_IMPL(__imp__sub_82DC4064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4068"))) PPC_WEAK_FUNC(sub_82DC4068);
PPC_FUNC_IMPL(__imp__sub_82DC4068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC406C"))) PPC_WEAK_FUNC(sub_82DC406C);
PPC_FUNC_IMPL(__imp__sub_82DC406C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4070"))) PPC_WEAK_FUNC(sub_82DC4070);
PPC_FUNC_IMPL(__imp__sub_82DC4070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11536
	ctx.r3.s64 = ctx.r11.s64 + -11536;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC407C"))) PPC_WEAK_FUNC(sub_82DC407C);
PPC_FUNC_IMPL(__imp__sub_82DC407C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4080"))) PPC_WEAK_FUNC(sub_82DC4080);
PPC_FUNC_IMPL(__imp__sub_82DC4080) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82de3a70
	sub_82DE3A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC408C"))) PPC_WEAK_FUNC(sub_82DC408C);
PPC_FUNC_IMPL(__imp__sub_82DC408C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4090"))) PPC_WEAK_FUNC(sub_82DC4090);
PPC_FUNC_IMPL(__imp__sub_82DC4090) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4094"))) PPC_WEAK_FUNC(sub_82DC4094);
PPC_FUNC_IMPL(__imp__sub_82DC4094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4098"))) PPC_WEAK_FUNC(sub_82DC4098);
PPC_FUNC_IMPL(__imp__sub_82DC4098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11488
	ctx.r3.s64 = ctx.r11.s64 + -11488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC40A4"))) PPC_WEAK_FUNC(sub_82DC40A4);
PPC_FUNC_IMPL(__imp__sub_82DC40A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC40A8"))) PPC_WEAK_FUNC(sub_82DC40A8);
PPC_FUNC_IMPL(__imp__sub_82DC40A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC40AC"))) PPC_WEAK_FUNC(sub_82DC40AC);
PPC_FUNC_IMPL(__imp__sub_82DC40AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC40B0"))) PPC_WEAK_FUNC(sub_82DC40B0);
PPC_FUNC_IMPL(__imp__sub_82DC40B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11440
	ctx.r3.s64 = ctx.r11.s64 + -11440;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC40BC"))) PPC_WEAK_FUNC(sub_82DC40BC);
PPC_FUNC_IMPL(__imp__sub_82DC40BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC40C0"))) PPC_WEAK_FUNC(sub_82DC40C0);
PPC_FUNC_IMPL(__imp__sub_82DC40C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC40C4"))) PPC_WEAK_FUNC(sub_82DC40C4);
PPC_FUNC_IMPL(__imp__sub_82DC40C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC40C8"))) PPC_WEAK_FUNC(sub_82DC40C8);
PPC_FUNC_IMPL(__imp__sub_82DC40C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11392
	ctx.r3.s64 = ctx.r11.s64 + -11392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC40D4"))) PPC_WEAK_FUNC(sub_82DC40D4);
PPC_FUNC_IMPL(__imp__sub_82DC40D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC40D8"))) PPC_WEAK_FUNC(sub_82DC40D8);
PPC_FUNC_IMPL(__imp__sub_82DC40D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC40DC"))) PPC_WEAK_FUNC(sub_82DC40DC);
PPC_FUNC_IMPL(__imp__sub_82DC40DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC40E0"))) PPC_WEAK_FUNC(sub_82DC40E0);
PPC_FUNC_IMPL(__imp__sub_82DC40E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11344
	ctx.r3.s64 = ctx.r11.s64 + -11344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC40EC"))) PPC_WEAK_FUNC(sub_82DC40EC);
PPC_FUNC_IMPL(__imp__sub_82DC40EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC40F0"))) PPC_WEAK_FUNC(sub_82DC40F0);
PPC_FUNC_IMPL(__imp__sub_82DC40F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC40F4"))) PPC_WEAK_FUNC(sub_82DC40F4);
PPC_FUNC_IMPL(__imp__sub_82DC40F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC40F8"))) PPC_WEAK_FUNC(sub_82DC40F8);
PPC_FUNC_IMPL(__imp__sub_82DC40F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11296
	ctx.r3.s64 = ctx.r11.s64 + -11296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4104"))) PPC_WEAK_FUNC(sub_82DC4104);
PPC_FUNC_IMPL(__imp__sub_82DC4104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4108"))) PPC_WEAK_FUNC(sub_82DC4108);
PPC_FUNC_IMPL(__imp__sub_82DC4108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC410C"))) PPC_WEAK_FUNC(sub_82DC410C);
PPC_FUNC_IMPL(__imp__sub_82DC410C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4110"))) PPC_WEAK_FUNC(sub_82DC4110);
PPC_FUNC_IMPL(__imp__sub_82DC4110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11248
	ctx.r3.s64 = ctx.r11.s64 + -11248;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC411C"))) PPC_WEAK_FUNC(sub_82DC411C);
PPC_FUNC_IMPL(__imp__sub_82DC411C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4120"))) PPC_WEAK_FUNC(sub_82DC4120);
PPC_FUNC_IMPL(__imp__sub_82DC4120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4124"))) PPC_WEAK_FUNC(sub_82DC4124);
PPC_FUNC_IMPL(__imp__sub_82DC4124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4128"))) PPC_WEAK_FUNC(sub_82DC4128);
PPC_FUNC_IMPL(__imp__sub_82DC4128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11200
	ctx.r3.s64 = ctx.r11.s64 + -11200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4134"))) PPC_WEAK_FUNC(sub_82DC4134);
PPC_FUNC_IMPL(__imp__sub_82DC4134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4138"))) PPC_WEAK_FUNC(sub_82DC4138);
PPC_FUNC_IMPL(__imp__sub_82DC4138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC413C"))) PPC_WEAK_FUNC(sub_82DC413C);
PPC_FUNC_IMPL(__imp__sub_82DC413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4140"))) PPC_WEAK_FUNC(sub_82DC4140);
PPC_FUNC_IMPL(__imp__sub_82DC4140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11152
	ctx.r3.s64 = ctx.r11.s64 + -11152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC414C"))) PPC_WEAK_FUNC(sub_82DC414C);
PPC_FUNC_IMPL(__imp__sub_82DC414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4150"))) PPC_WEAK_FUNC(sub_82DC4150);
PPC_FUNC_IMPL(__imp__sub_82DC4150) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4154"))) PPC_WEAK_FUNC(sub_82DC4154);
PPC_FUNC_IMPL(__imp__sub_82DC4154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4158"))) PPC_WEAK_FUNC(sub_82DC4158);
PPC_FUNC_IMPL(__imp__sub_82DC4158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11104
	ctx.r3.s64 = ctx.r11.s64 + -11104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4164"))) PPC_WEAK_FUNC(sub_82DC4164);
PPC_FUNC_IMPL(__imp__sub_82DC4164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4168"))) PPC_WEAK_FUNC(sub_82DC4168);
PPC_FUNC_IMPL(__imp__sub_82DC4168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC416C"))) PPC_WEAK_FUNC(sub_82DC416C);
PPC_FUNC_IMPL(__imp__sub_82DC416C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4170"))) PPC_WEAK_FUNC(sub_82DC4170);
PPC_FUNC_IMPL(__imp__sub_82DC4170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11056
	ctx.r3.s64 = ctx.r11.s64 + -11056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC417C"))) PPC_WEAK_FUNC(sub_82DC417C);
PPC_FUNC_IMPL(__imp__sub_82DC417C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4180"))) PPC_WEAK_FUNC(sub_82DC4180);
PPC_FUNC_IMPL(__imp__sub_82DC4180) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4184"))) PPC_WEAK_FUNC(sub_82DC4184);
PPC_FUNC_IMPL(__imp__sub_82DC4184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4188"))) PPC_WEAK_FUNC(sub_82DC4188);
PPC_FUNC_IMPL(__imp__sub_82DC4188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-11008
	ctx.r3.s64 = ctx.r11.s64 + -11008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4194"))) PPC_WEAK_FUNC(sub_82DC4194);
PPC_FUNC_IMPL(__imp__sub_82DC4194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4198"))) PPC_WEAK_FUNC(sub_82DC4198);
PPC_FUNC_IMPL(__imp__sub_82DC4198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC419C"))) PPC_WEAK_FUNC(sub_82DC419C);
PPC_FUNC_IMPL(__imp__sub_82DC419C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC41A0"))) PPC_WEAK_FUNC(sub_82DC41A0);
PPC_FUNC_IMPL(__imp__sub_82DC41A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10960
	ctx.r3.s64 = ctx.r11.s64 + -10960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC41AC"))) PPC_WEAK_FUNC(sub_82DC41AC);
PPC_FUNC_IMPL(__imp__sub_82DC41AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC41B0"))) PPC_WEAK_FUNC(sub_82DC41B0);
PPC_FUNC_IMPL(__imp__sub_82DC41B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC41B4"))) PPC_WEAK_FUNC(sub_82DC41B4);
PPC_FUNC_IMPL(__imp__sub_82DC41B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC41B8"))) PPC_WEAK_FUNC(sub_82DC41B8);
PPC_FUNC_IMPL(__imp__sub_82DC41B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10912
	ctx.r3.s64 = ctx.r11.s64 + -10912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC41C4"))) PPC_WEAK_FUNC(sub_82DC41C4);
PPC_FUNC_IMPL(__imp__sub_82DC41C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC41C8"))) PPC_WEAK_FUNC(sub_82DC41C8);
PPC_FUNC_IMPL(__imp__sub_82DC41C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC41CC"))) PPC_WEAK_FUNC(sub_82DC41CC);
PPC_FUNC_IMPL(__imp__sub_82DC41CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC41D0"))) PPC_WEAK_FUNC(sub_82DC41D0);
PPC_FUNC_IMPL(__imp__sub_82DC41D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10864
	ctx.r3.s64 = ctx.r11.s64 + -10864;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC41DC"))) PPC_WEAK_FUNC(sub_82DC41DC);
PPC_FUNC_IMPL(__imp__sub_82DC41DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC41E0"))) PPC_WEAK_FUNC(sub_82DC41E0);
PPC_FUNC_IMPL(__imp__sub_82DC41E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC41E4"))) PPC_WEAK_FUNC(sub_82DC41E4);
PPC_FUNC_IMPL(__imp__sub_82DC41E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC41E8"))) PPC_WEAK_FUNC(sub_82DC41E8);
PPC_FUNC_IMPL(__imp__sub_82DC41E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10816
	ctx.r3.s64 = ctx.r11.s64 + -10816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC41F4"))) PPC_WEAK_FUNC(sub_82DC41F4);
PPC_FUNC_IMPL(__imp__sub_82DC41F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC41F8"))) PPC_WEAK_FUNC(sub_82DC41F8);
PPC_FUNC_IMPL(__imp__sub_82DC41F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC41FC"))) PPC_WEAK_FUNC(sub_82DC41FC);
PPC_FUNC_IMPL(__imp__sub_82DC41FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4200"))) PPC_WEAK_FUNC(sub_82DC4200);
PPC_FUNC_IMPL(__imp__sub_82DC4200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10768
	ctx.r3.s64 = ctx.r11.s64 + -10768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC420C"))) PPC_WEAK_FUNC(sub_82DC420C);
PPC_FUNC_IMPL(__imp__sub_82DC420C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4210"))) PPC_WEAK_FUNC(sub_82DC4210);
PPC_FUNC_IMPL(__imp__sub_82DC4210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4214"))) PPC_WEAK_FUNC(sub_82DC4214);
PPC_FUNC_IMPL(__imp__sub_82DC4214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4218"))) PPC_WEAK_FUNC(sub_82DC4218);
PPC_FUNC_IMPL(__imp__sub_82DC4218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10720
	ctx.r3.s64 = ctx.r11.s64 + -10720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4224"))) PPC_WEAK_FUNC(sub_82DC4224);
PPC_FUNC_IMPL(__imp__sub_82DC4224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4228"))) PPC_WEAK_FUNC(sub_82DC4228);
PPC_FUNC_IMPL(__imp__sub_82DC4228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC422C"))) PPC_WEAK_FUNC(sub_82DC422C);
PPC_FUNC_IMPL(__imp__sub_82DC422C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4230"))) PPC_WEAK_FUNC(sub_82DC4230);
PPC_FUNC_IMPL(__imp__sub_82DC4230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10672
	ctx.r3.s64 = ctx.r11.s64 + -10672;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC423C"))) PPC_WEAK_FUNC(sub_82DC423C);
PPC_FUNC_IMPL(__imp__sub_82DC423C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4240"))) PPC_WEAK_FUNC(sub_82DC4240);
PPC_FUNC_IMPL(__imp__sub_82DC4240) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4244"))) PPC_WEAK_FUNC(sub_82DC4244);
PPC_FUNC_IMPL(__imp__sub_82DC4244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4248"))) PPC_WEAK_FUNC(sub_82DC4248);
PPC_FUNC_IMPL(__imp__sub_82DC4248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10624
	ctx.r3.s64 = ctx.r11.s64 + -10624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4254"))) PPC_WEAK_FUNC(sub_82DC4254);
PPC_FUNC_IMPL(__imp__sub_82DC4254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4258"))) PPC_WEAK_FUNC(sub_82DC4258);
PPC_FUNC_IMPL(__imp__sub_82DC4258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC425C"))) PPC_WEAK_FUNC(sub_82DC425C);
PPC_FUNC_IMPL(__imp__sub_82DC425C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4260"))) PPC_WEAK_FUNC(sub_82DC4260);
PPC_FUNC_IMPL(__imp__sub_82DC4260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10576
	ctx.r3.s64 = ctx.r11.s64 + -10576;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC426C"))) PPC_WEAK_FUNC(sub_82DC426C);
PPC_FUNC_IMPL(__imp__sub_82DC426C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4270"))) PPC_WEAK_FUNC(sub_82DC4270);
PPC_FUNC_IMPL(__imp__sub_82DC4270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4274"))) PPC_WEAK_FUNC(sub_82DC4274);
PPC_FUNC_IMPL(__imp__sub_82DC4274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4278"))) PPC_WEAK_FUNC(sub_82DC4278);
PPC_FUNC_IMPL(__imp__sub_82DC4278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10528
	ctx.r3.s64 = ctx.r11.s64 + -10528;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4284"))) PPC_WEAK_FUNC(sub_82DC4284);
PPC_FUNC_IMPL(__imp__sub_82DC4284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4288"))) PPC_WEAK_FUNC(sub_82DC4288);
PPC_FUNC_IMPL(__imp__sub_82DC4288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC428C"))) PPC_WEAK_FUNC(sub_82DC428C);
PPC_FUNC_IMPL(__imp__sub_82DC428C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4290"))) PPC_WEAK_FUNC(sub_82DC4290);
PPC_FUNC_IMPL(__imp__sub_82DC4290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10480
	ctx.r3.s64 = ctx.r11.s64 + -10480;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC429C"))) PPC_WEAK_FUNC(sub_82DC429C);
PPC_FUNC_IMPL(__imp__sub_82DC429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC42A0"))) PPC_WEAK_FUNC(sub_82DC42A0);
PPC_FUNC_IMPL(__imp__sub_82DC42A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC42A4"))) PPC_WEAK_FUNC(sub_82DC42A4);
PPC_FUNC_IMPL(__imp__sub_82DC42A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC42A8"))) PPC_WEAK_FUNC(sub_82DC42A8);
PPC_FUNC_IMPL(__imp__sub_82DC42A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10432
	ctx.r3.s64 = ctx.r11.s64 + -10432;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC42B4"))) PPC_WEAK_FUNC(sub_82DC42B4);
PPC_FUNC_IMPL(__imp__sub_82DC42B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC42B8"))) PPC_WEAK_FUNC(sub_82DC42B8);
PPC_FUNC_IMPL(__imp__sub_82DC42B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC42BC"))) PPC_WEAK_FUNC(sub_82DC42BC);
PPC_FUNC_IMPL(__imp__sub_82DC42BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC42C0"))) PPC_WEAK_FUNC(sub_82DC42C0);
PPC_FUNC_IMPL(__imp__sub_82DC42C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10384
	ctx.r3.s64 = ctx.r11.s64 + -10384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC42CC"))) PPC_WEAK_FUNC(sub_82DC42CC);
PPC_FUNC_IMPL(__imp__sub_82DC42CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC42D0"))) PPC_WEAK_FUNC(sub_82DC42D0);
PPC_FUNC_IMPL(__imp__sub_82DC42D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC42D4"))) PPC_WEAK_FUNC(sub_82DC42D4);
PPC_FUNC_IMPL(__imp__sub_82DC42D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC42D8"))) PPC_WEAK_FUNC(sub_82DC42D8);
PPC_FUNC_IMPL(__imp__sub_82DC42D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10336
	ctx.r3.s64 = ctx.r11.s64 + -10336;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC42E4"))) PPC_WEAK_FUNC(sub_82DC42E4);
PPC_FUNC_IMPL(__imp__sub_82DC42E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC42E8"))) PPC_WEAK_FUNC(sub_82DC42E8);
PPC_FUNC_IMPL(__imp__sub_82DC42E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC42EC"))) PPC_WEAK_FUNC(sub_82DC42EC);
PPC_FUNC_IMPL(__imp__sub_82DC42EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC42F0"))) PPC_WEAK_FUNC(sub_82DC42F0);
PPC_FUNC_IMPL(__imp__sub_82DC42F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10288
	ctx.r3.s64 = ctx.r11.s64 + -10288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC42FC"))) PPC_WEAK_FUNC(sub_82DC42FC);
PPC_FUNC_IMPL(__imp__sub_82DC42FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4300"))) PPC_WEAK_FUNC(sub_82DC4300);
PPC_FUNC_IMPL(__imp__sub_82DC4300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4304"))) PPC_WEAK_FUNC(sub_82DC4304);
PPC_FUNC_IMPL(__imp__sub_82DC4304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4308"))) PPC_WEAK_FUNC(sub_82DC4308);
PPC_FUNC_IMPL(__imp__sub_82DC4308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10240
	ctx.r3.s64 = ctx.r11.s64 + -10240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4314"))) PPC_WEAK_FUNC(sub_82DC4314);
PPC_FUNC_IMPL(__imp__sub_82DC4314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4318"))) PPC_WEAK_FUNC(sub_82DC4318);
PPC_FUNC_IMPL(__imp__sub_82DC4318) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC431C"))) PPC_WEAK_FUNC(sub_82DC431C);
PPC_FUNC_IMPL(__imp__sub_82DC431C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4320"))) PPC_WEAK_FUNC(sub_82DC4320);
PPC_FUNC_IMPL(__imp__sub_82DC4320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10192
	ctx.r3.s64 = ctx.r11.s64 + -10192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC432C"))) PPC_WEAK_FUNC(sub_82DC432C);
PPC_FUNC_IMPL(__imp__sub_82DC432C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4330"))) PPC_WEAK_FUNC(sub_82DC4330);
PPC_FUNC_IMPL(__imp__sub_82DC4330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4334"))) PPC_WEAK_FUNC(sub_82DC4334);
PPC_FUNC_IMPL(__imp__sub_82DC4334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4338"))) PPC_WEAK_FUNC(sub_82DC4338);
PPC_FUNC_IMPL(__imp__sub_82DC4338) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82de3a50
	sub_82DE3A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC4350"))) PPC_WEAK_FUNC(sub_82DC4350);
PPC_FUNC_IMPL(__imp__sub_82DC4350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4354"))) PPC_WEAK_FUNC(sub_82DC4354);
PPC_FUNC_IMPL(__imp__sub_82DC4354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4358"))) PPC_WEAK_FUNC(sub_82DC4358);
PPC_FUNC_IMPL(__imp__sub_82DC4358) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82de3a50
	sub_82DE3A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC4370"))) PPC_WEAK_FUNC(sub_82DC4370);
PPC_FUNC_IMPL(__imp__sub_82DC4370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4374"))) PPC_WEAK_FUNC(sub_82DC4374);
PPC_FUNC_IMPL(__imp__sub_82DC4374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4378"))) PPC_WEAK_FUNC(sub_82DC4378);
PPC_FUNC_IMPL(__imp__sub_82DC4378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC437C"))) PPC_WEAK_FUNC(sub_82DC437C);
PPC_FUNC_IMPL(__imp__sub_82DC437C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4380"))) PPC_WEAK_FUNC(sub_82DC4380);
PPC_FUNC_IMPL(__imp__sub_82DC4380) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4384"))) PPC_WEAK_FUNC(sub_82DC4384);
PPC_FUNC_IMPL(__imp__sub_82DC4384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4388"))) PPC_WEAK_FUNC(sub_82DC4388);
PPC_FUNC_IMPL(__imp__sub_82DC4388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC438C"))) PPC_WEAK_FUNC(sub_82DC438C);
PPC_FUNC_IMPL(__imp__sub_82DC438C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4390"))) PPC_WEAK_FUNC(sub_82DC4390);
PPC_FUNC_IMPL(__imp__sub_82DC4390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4394"))) PPC_WEAK_FUNC(sub_82DC4394);
PPC_FUNC_IMPL(__imp__sub_82DC4394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4398"))) PPC_WEAK_FUNC(sub_82DC4398);
PPC_FUNC_IMPL(__imp__sub_82DC4398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC439C"))) PPC_WEAK_FUNC(sub_82DC439C);
PPC_FUNC_IMPL(__imp__sub_82DC439C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC43A0"))) PPC_WEAK_FUNC(sub_82DC43A0);
PPC_FUNC_IMPL(__imp__sub_82DC43A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC43A4"))) PPC_WEAK_FUNC(sub_82DC43A4);
PPC_FUNC_IMPL(__imp__sub_82DC43A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC43A8"))) PPC_WEAK_FUNC(sub_82DC43A8);
PPC_FUNC_IMPL(__imp__sub_82DC43A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC43AC"))) PPC_WEAK_FUNC(sub_82DC43AC);
PPC_FUNC_IMPL(__imp__sub_82DC43AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC43B0"))) PPC_WEAK_FUNC(sub_82DC43B0);
PPC_FUNC_IMPL(__imp__sub_82DC43B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC43B4"))) PPC_WEAK_FUNC(sub_82DC43B4);
PPC_FUNC_IMPL(__imp__sub_82DC43B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC43B8"))) PPC_WEAK_FUNC(sub_82DC43B8);
PPC_FUNC_IMPL(__imp__sub_82DC43B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC43BC"))) PPC_WEAK_FUNC(sub_82DC43BC);
PPC_FUNC_IMPL(__imp__sub_82DC43BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC43C0"))) PPC_WEAK_FUNC(sub_82DC43C0);
PPC_FUNC_IMPL(__imp__sub_82DC43C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC43C4"))) PPC_WEAK_FUNC(sub_82DC43C4);
PPC_FUNC_IMPL(__imp__sub_82DC43C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC43C8"))) PPC_WEAK_FUNC(sub_82DC43C8);
PPC_FUNC_IMPL(__imp__sub_82DC43C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC43CC"))) PPC_WEAK_FUNC(sub_82DC43CC);
PPC_FUNC_IMPL(__imp__sub_82DC43CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC43D0"))) PPC_WEAK_FUNC(sub_82DC43D0);
PPC_FUNC_IMPL(__imp__sub_82DC43D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC43D4"))) PPC_WEAK_FUNC(sub_82DC43D4);
PPC_FUNC_IMPL(__imp__sub_82DC43D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC43D8"))) PPC_WEAK_FUNC(sub_82DC43D8);
PPC_FUNC_IMPL(__imp__sub_82DC43D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC43DC"))) PPC_WEAK_FUNC(sub_82DC43DC);
PPC_FUNC_IMPL(__imp__sub_82DC43DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC43E0"))) PPC_WEAK_FUNC(sub_82DC43E0);
PPC_FUNC_IMPL(__imp__sub_82DC43E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC43E4"))) PPC_WEAK_FUNC(sub_82DC43E4);
PPC_FUNC_IMPL(__imp__sub_82DC43E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC43E8"))) PPC_WEAK_FUNC(sub_82DC43E8);
PPC_FUNC_IMPL(__imp__sub_82DC43E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC43EC"))) PPC_WEAK_FUNC(sub_82DC43EC);
PPC_FUNC_IMPL(__imp__sub_82DC43EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC43F0"))) PPC_WEAK_FUNC(sub_82DC43F0);
PPC_FUNC_IMPL(__imp__sub_82DC43F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC43F4"))) PPC_WEAK_FUNC(sub_82DC43F4);
PPC_FUNC_IMPL(__imp__sub_82DC43F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC43F8"))) PPC_WEAK_FUNC(sub_82DC43F8);
PPC_FUNC_IMPL(__imp__sub_82DC43F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC43FC"))) PPC_WEAK_FUNC(sub_82DC43FC);
PPC_FUNC_IMPL(__imp__sub_82DC43FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4400"))) PPC_WEAK_FUNC(sub_82DC4400);
PPC_FUNC_IMPL(__imp__sub_82DC4400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4404"))) PPC_WEAK_FUNC(sub_82DC4404);
PPC_FUNC_IMPL(__imp__sub_82DC4404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4408"))) PPC_WEAK_FUNC(sub_82DC4408);
PPC_FUNC_IMPL(__imp__sub_82DC4408) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC440C"))) PPC_WEAK_FUNC(sub_82DC440C);
PPC_FUNC_IMPL(__imp__sub_82DC440C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4410"))) PPC_WEAK_FUNC(sub_82DC4410);
PPC_FUNC_IMPL(__imp__sub_82DC4410) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4414"))) PPC_WEAK_FUNC(sub_82DC4414);
PPC_FUNC_IMPL(__imp__sub_82DC4414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4418"))) PPC_WEAK_FUNC(sub_82DC4418);
PPC_FUNC_IMPL(__imp__sub_82DC4418) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC441C"))) PPC_WEAK_FUNC(sub_82DC441C);
PPC_FUNC_IMPL(__imp__sub_82DC441C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4420"))) PPC_WEAK_FUNC(sub_82DC4420);
PPC_FUNC_IMPL(__imp__sub_82DC4420) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4424"))) PPC_WEAK_FUNC(sub_82DC4424);
PPC_FUNC_IMPL(__imp__sub_82DC4424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4428"))) PPC_WEAK_FUNC(sub_82DC4428);
PPC_FUNC_IMPL(__imp__sub_82DC4428) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC442C"))) PPC_WEAK_FUNC(sub_82DC442C);
PPC_FUNC_IMPL(__imp__sub_82DC442C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4430"))) PPC_WEAK_FUNC(sub_82DC4430);
PPC_FUNC_IMPL(__imp__sub_82DC4430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4434"))) PPC_WEAK_FUNC(sub_82DC4434);
PPC_FUNC_IMPL(__imp__sub_82DC4434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4438"))) PPC_WEAK_FUNC(sub_82DC4438);
PPC_FUNC_IMPL(__imp__sub_82DC4438) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC443C"))) PPC_WEAK_FUNC(sub_82DC443C);
PPC_FUNC_IMPL(__imp__sub_82DC443C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4440"))) PPC_WEAK_FUNC(sub_82DC4440);
PPC_FUNC_IMPL(__imp__sub_82DC4440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4444"))) PPC_WEAK_FUNC(sub_82DC4444);
PPC_FUNC_IMPL(__imp__sub_82DC4444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4448"))) PPC_WEAK_FUNC(sub_82DC4448);
PPC_FUNC_IMPL(__imp__sub_82DC4448) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC444C"))) PPC_WEAK_FUNC(sub_82DC444C);
PPC_FUNC_IMPL(__imp__sub_82DC444C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4450"))) PPC_WEAK_FUNC(sub_82DC4450);
PPC_FUNC_IMPL(__imp__sub_82DC4450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4454"))) PPC_WEAK_FUNC(sub_82DC4454);
PPC_FUNC_IMPL(__imp__sub_82DC4454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4458"))) PPC_WEAK_FUNC(sub_82DC4458);
PPC_FUNC_IMPL(__imp__sub_82DC4458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC445C"))) PPC_WEAK_FUNC(sub_82DC445C);
PPC_FUNC_IMPL(__imp__sub_82DC445C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4460"))) PPC_WEAK_FUNC(sub_82DC4460);
PPC_FUNC_IMPL(__imp__sub_82DC4460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-10144
	ctx.r3.s64 = ctx.r11.s64 + -10144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC446C"))) PPC_WEAK_FUNC(sub_82DC446C);
PPC_FUNC_IMPL(__imp__sub_82DC446C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4470"))) PPC_WEAK_FUNC(sub_82DC4470);
PPC_FUNC_IMPL(__imp__sub_82DC4470) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// clrlwi r10,r6,30
	ctx.r10.u64 = ctx.r6.u32 & 0x3;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82dc4490
	if (!ctx.cr6.lt) goto loc_82DC4490;
	// not r10,r4
	ctx.r10.u64 = ~ctx.r4.u64;
	// rlwinm r10,r10,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// b 0x82dc4494
	goto loc_82DC4494;
loc_82DC4490:
	// rlwinm r10,r4,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFFFFC000;
loc_82DC4494:
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82dc44a8
	if (!ctx.cr6.lt) goto loc_82DC44A8;
	// not r11,r5
	ctx.r11.u64 = ~ctx.r5.u64;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// b 0x82dc44ac
	goto loc_82DC44AC;
loc_82DC44A8:
	// rlwinm r11,r5,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
loc_82DC44AC:
	// lhz r9,10(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// lhz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// clrlwi r7,r9,18
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFF;
	// clrlwi r6,r8,18
	ctx.r6.u64 = ctx.r8.u32 & 0x3FFF;
	// or r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 | ctx.r11.u64;
	// sth r5,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r5.u16);
	// sth r4,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC44D0"))) PPC_WEAK_FUNC(sub_82DC44D0);
PPC_FUNC_IMPL(__imp__sub_82DC44D0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc4508
	if (ctx.cr6.eq) goto loc_82DC4508;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82dc4508
	if (ctx.cr6.eq) goto loc_82DC4508;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// bl 0x82de9bb0
	ctx.lr = 0x82DC4508;
	sub_82DE9BB0(ctx, base);
loc_82DC4508:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4518"))) PPC_WEAK_FUNC(sub_82DC4518);
PPC_FUNC_IMPL(__imp__sub_82DC4518) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,204(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82dc452c
	if (!ctx.cr6.eq) goto loc_82DC452C;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_82DC452C:
	// lbz r11,38(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// rlwinm r10,r11,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC453C"))) PPC_WEAK_FUNC(sub_82DC453C);
PPC_FUNC_IMPL(__imp__sub_82DC453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4540"))) PPC_WEAK_FUNC(sub_82DC4540);
PPC_FUNC_IMPL(__imp__sub_82DC4540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,204(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82dc4554
	if (!ctx.cr6.eq) goto loc_82DC4554;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_82DC4554:
	// lbz r11,38(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// rlwinm r10,r11,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4564"))) PPC_WEAK_FUNC(sub_82DC4564);
PPC_FUNC_IMPL(__imp__sub_82DC4564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4568"))) PPC_WEAK_FUNC(sub_82DC4568);
PPC_FUNC_IMPL(__imp__sub_82DC4568) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4570"))) PPC_WEAK_FUNC(sub_82DC4570);
PPC_FUNC_IMPL(__imp__sub_82DC4570) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4578"))) PPC_WEAK_FUNC(sub_82DC4578);
PPC_FUNC_IMPL(__imp__sub_82DC4578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82DC4580;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc45a4
	if (ctx.cr6.eq) goto loc_82DC45A4;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x82d842c8
	ctx.lr = 0x82DC45A4;
	sub_82D842C8(ctx, base);
loc_82DC45A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82dc468c
	if (ctx.cr6.eq) goto loc_82DC468C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82dc468c
	if (ctx.cr6.eq) goto loc_82DC468C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r7,r11,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82dc45f0
	if (ctx.cr6.eq) goto loc_82DC45F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC45EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82dc4614
	goto loc_82DC4614;
loc_82DC45F0:
	// rlwinm r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82dc468c
	if (ctx.cr6.eq) goto loc_82DC468C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC4610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,1
	ctx.r28.s64 = 1;
loc_82DC4614:
	// lbz r11,232(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 232);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82dc462c
	if (ctx.cr6.eq) goto loc_82DC462C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82dc4630
	if (!ctx.cr6.eq) goto loc_82DC4630;
loc_82DC462C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82DC4630:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82dc4648
	if (ctx.cr6.eq) goto loc_82DC4648;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dc468c
	if (!ctx.cr6.eq) goto loc_82DC468C;
loc_82DC4648:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC4658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d84348
	ctx.lr = 0x82DC4668;
	sub_82D84348(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r9.u32);
	// stw r8,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r8.u32);
	// lbz r7,232(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 232);
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// bne cr6,0x82dc468c
	if (!ctx.cr6.eq) goto loc_82DC468C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc44d0
	ctx.lr = 0x82DC468C;
	sub_82DC44D0(ctx, base);
loc_82DC468C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC4694"))) PPC_WEAK_FUNC(sub_82DC4694);
PPC_FUNC_IMPL(__imp__sub_82DC4694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC4698"))) PPC_WEAK_FUNC(sub_82DC4698);
PPC_FUNC_IMPL(__imp__sub_82DC4698) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,532(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82dc46cc
	if (!ctx.cr6.gt) goto loc_82DC46CC;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82DC46B0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82dc46d0
	if (ctx.cr6.eq) goto loc_82DC46D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82dc46b0
	if (ctx.cr6.lt) goto loc_82DC46B0;
loc_82DC46CC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82DC46D0:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC46E4"))) PPC_WEAK_FUNC(sub_82DC46E4);
PPC_FUNC_IMPL(__imp__sub_82DC46E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC46E8"))) PPC_WEAK_FUNC(sub_82DC46E8);
PPC_FUNC_IMPL(__imp__sub_82DC46E8) {
	PPC_FUNC_PROLOGUE();
	// lhz r9,516(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 516);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82dc4718
	if (!ctx.cr6.gt) goto loc_82DC4718;
	// lwz r10,512(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
loc_82DC46FC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82dc471c
	if (ctx.cr6.eq) goto loc_82DC471C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82dc46fc
	if (ctx.cr6.lt) goto loc_82DC46FC;
loc_82DC4718:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82DC471C:
	// lwz r10,512(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC4730"))) PPC_WEAK_FUNC(sub_82DC4730);
PPC_FUNC_IMPL(__imp__sub_82DC4730) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82dc4764
	if (!ctx.cr6.gt) goto loc_82DC4764;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82DC4748:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82dc476c
	if (ctx.cr6.eq) goto loc_82DC476C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82dc4748
	if (ctx.cr6.lt) goto loc_82DC4748;
loc_82DC4764:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82DC476C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

