#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A83F54"))) PPC_WEAK_FUNC(sub_82A83F54);
PPC_FUNC_IMPL(__imp__sub_82A83F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A83F58"))) PPC_WEAK_FUNC(sub_82A83F58);
PPC_FUNC_IMPL(__imp__sub_82A83F58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82a83f7c
	if (!ctx.cr6.lt) goto loc_82A83F7C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82A83F7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A83F84"))) PPC_WEAK_FUNC(sub_82A83F84);
PPC_FUNC_IMPL(__imp__sub_82A83F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A83F88"))) PPC_WEAK_FUNC(sub_82A83F88);
PPC_FUNC_IMPL(__imp__sub_82A83F88) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
loc_82A83F90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// subf. r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a83fb0
	if (!ctx.cr0.eq) goto loc_82A83FB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82a83f90
	if (!ctx.cr6.eq) goto loc_82A83F90;
loc_82A83FB0:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A83FBC"))) PPC_WEAK_FUNC(sub_82A83FBC);
PPC_FUNC_IMPL(__imp__sub_82A83FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A83FC0"))) PPC_WEAK_FUNC(sub_82A83FC0);
PPC_FUNC_IMPL(__imp__sub_82A83FC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A83FEC"))) PPC_WEAK_FUNC(sub_82A83FEC);
PPC_FUNC_IMPL(__imp__sub_82A83FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A83FF0"))) PPC_WEAK_FUNC(sub_82A83FF0);
PPC_FUNC_IMPL(__imp__sub_82A83FF0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A84010"))) PPC_WEAK_FUNC(sub_82A84010);
PPC_FUNC_IMPL(__imp__sub_82A84010) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82a8402c
	if (ctx.cr6.gt) goto loc_82A8402C;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82A8402C:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a84044
	if (ctx.cr6.lt) goto loc_82A84044;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A84044:
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a84094
	if (!ctx.cr6.lt) goto loc_82A84094;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82a84068
	if (ctx.cr6.gt) goto loc_82A84068;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82A84068:
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a84080
	if (!ctx.cr6.lt) goto loc_82A84080;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A84080:
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a84094
	if (!ctx.cr6.lt) goto loc_82A84094;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A84094:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A840B0"))) PPC_WEAK_FUNC(sub_82A840B0);
PPC_FUNC_IMPL(__imp__sub_82A840B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a8f868
	ctx.lr = 0x82A840E4;
	sub_82A8F868(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a84120
	if (!ctx.cr0.eq) goto loc_82A84120;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a84114
	if (ctx.cr6.eq) goto loc_82A84114;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a8410c
	if (ctx.cr6.eq) goto loc_82A8410C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa4460
	ctx.lr = 0x82A84108;
	sub_82FA4460(ctx, base);
	// b 0x82a84124
	goto loc_82A84124;
loc_82A8410C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a84124
	goto loc_82A84124;
loc_82A84114:
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82a84124
	goto loc_82A84124;
loc_82A84120:
	// addi r3,r3,-2
	ctx.r3.s64 = ctx.r3.s64 + -2;
loc_82A84124:
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

__attribute__((alias("__imp__sub_82A8413C"))) PPC_WEAK_FUNC(sub_82A8413C);
PPC_FUNC_IMPL(__imp__sub_82A8413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A84140"))) PPC_WEAK_FUNC(sub_82A84140);
PPC_FUNC_IMPL(__imp__sub_82A84140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A84148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82a8f3c8
	ctx.lr = 0x82A8415C;
	sub_82A8F3C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
loc_82A84164:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179684
	ctx.lr = 0x82A84178;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a84194
	if (ctx.cr0.lt) goto loc_82A84194;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82a8419c
	if (ctx.cr6.eq) goto loc_82A8419C;
	// cmpwi cr6,r3,257
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 257, ctx.xer);
	// beq cr6,0x82a84164
	if (ctx.cr6.eq) goto loc_82A84164;
	// b 0x82a8419c
	goto loc_82A8419C;
loc_82A84194:
	// bl 0x82a848b0
	ctx.lr = 0x82A84198;
	sub_82A848B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82A8419C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A841A4"))) PPC_WEAK_FUNC(sub_82A841A4);
PPC_FUNC_IMPL(__imp__sub_82A841A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A841A8"))) PPC_WEAK_FUNC(sub_82A841A8);
PPC_FUNC_IMPL(__imp__sub_82A841A8) {
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
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,49153
	ctx.r4.u64 = ctx.r4.u64 | 49153;
	// li r3,254
	ctx.r3.s64 = 254;
	// bl 0x831790d4
	ctx.lr = 0x82A841D4;
	__imp__XMsgSystemProcessCall(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A841E4"))) PPC_WEAK_FUNC(sub_82A841E4);
PPC_FUNC_IMPL(__imp__sub_82A841E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A841E8"))) PPC_WEAK_FUNC(sub_82A841E8);
PPC_FUNC_IMPL(__imp__sub_82A841E8) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,254
	ctx.r3.s64 = 254;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// ori r4,r4,49155
	ctx.r4.u64 = ctx.r4.u64 | 49155;
	// bl 0x831790d4
	ctx.lr = 0x82A84220;
	__imp__XMsgSystemProcessCall(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A84230"))) PPC_WEAK_FUNC(sub_82A84230);
PPC_FUNC_IMPL(__imp__sub_82A84230) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,254
	ctx.r3.s64 = 254;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// ori r4,r4,49156
	ctx.r4.u64 = ctx.r4.u64 | 49156;
	// bl 0x831790d4
	ctx.lr = 0x82A84268;
	__imp__XMsgSystemProcessCall(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A84278"))) PPC_WEAK_FUNC(sub_82A84278);
PPC_FUNC_IMPL(__imp__sub_82A84278) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,49157
	ctx.r4.u64 = ctx.r4.u64 | 49157;
	// li r3,254
	ctx.r3.s64 = 254;
	// bl 0x831790d4
	ctx.lr = 0x82A842A8;
	__imp__XMsgSystemProcessCall(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A842B8"))) PPC_WEAK_FUNC(sub_82A842B8);
PPC_FUNC_IMPL(__imp__sub_82A842B8) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,49161
	ctx.r4.u64 = ctx.r4.u64 | 49161;
	// li r3,254
	ctx.r3.s64 = 254;
	// bl 0x831790e4
	ctx.lr = 0x82A842E0;
	__imp__XMsgInProcessCall(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A842F0"))) PPC_WEAK_FUNC(sub_82A842F0);
PPC_FUNC_IMPL(__imp__sub_82A842F0) {
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
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,254
	ctx.r3.s64 = 254;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// ori r4,r4,49164
	ctx.r4.u64 = ctx.r4.u64 | 49164;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x831790e4
	ctx.lr = 0x82A8432C;
	__imp__XMsgInProcessCall(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8433C"))) PPC_WEAK_FUNC(sub_82A8433C);
PPC_FUNC_IMPL(__imp__sub_82A8433C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A84340"))) PPC_WEAK_FUNC(sub_82A84340);
PPC_FUNC_IMPL(__imp__sub_82A84340) {
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
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,254
	ctx.r3.s64 = 254;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,49165
	ctx.r4.u64 = ctx.r4.u64 | 49165;
	// bl 0x831790e4
	ctx.lr = 0x82A84374;
	__imp__XMsgInProcessCall(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A84384"))) PPC_WEAK_FUNC(sub_82A84384);
PPC_FUNC_IMPL(__imp__sub_82A84384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A84388"))) PPC_WEAK_FUNC(sub_82A84388);
PPC_FUNC_IMPL(__imp__sub_82A84388) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// li r7,24
	ctx.r7.s64 = 24;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// ori r4,r4,40969
	ctx.r4.u64 = ctx.r4.u64 | 40969;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// li r3,254
	ctx.r3.s64 = 254;
	// bl 0x83178ed4
	ctx.lr = 0x82A843C8;
	__imp__XMsgStartIORequest(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A843D8"))) PPC_WEAK_FUNC(sub_82A843D8);
PPC_FUNC_IMPL(__imp__sub_82A843D8) {
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
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrldi r31,r4,32
	ctx.r31.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// std r11,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r11.u64);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// li r7,24
	ctx.r7.s64 = 24;
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,40968
	ctx.r4.u64 = ctx.r4.u64 | 40968;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r3,254
	ctx.r3.s64 = 254;
	// bl 0x83178ed4
	ctx.lr = 0x82A84434;
	__imp__XMsgStartIORequest(ctx, base);
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

__attribute__((alias("__imp__sub_82A84448"))) PPC_WEAK_FUNC(sub_82A84448);
PPC_FUNC_IMPL(__imp__sub_82A84448) {
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
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// li r7,24
	ctx.r7.s64 = 24;
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r11,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r11.u64);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// li r3,254
	ctx.r3.s64 = 254;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,40967
	ctx.r4.u64 = ctx.r4.u64 | 40967;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x83178ed4
	ctx.lr = 0x82A8449C;
	__imp__XMsgStartIORequest(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A844AC"))) PPC_WEAK_FUNC(sub_82A844AC);
PPC_FUNC_IMPL(__imp__sub_82A844AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A844B0"))) PPC_WEAK_FUNC(sub_82A844B0);
PPC_FUNC_IMPL(__imp__sub_82A844B0) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// li r7,24
	ctx.r7.s64 = 24;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// ori r4,r4,40966
	ctx.r4.u64 = ctx.r4.u64 | 40966;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,254
	ctx.r3.s64 = 254;
	// bl 0x83178ed4
	ctx.lr = 0x82A844F0;
	__imp__XMsgStartIORequest(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A84500"))) PPC_WEAK_FUNC(sub_82A84500);
PPC_FUNC_IMPL(__imp__sub_82A84500) {
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
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrldi r31,r4,32
	ctx.r31.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// std r11,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r11.u64);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,40965
	ctx.r4.u64 = ctx.r4.u64 | 40965;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r3,254
	ctx.r3.s64 = 254;
	// bl 0x83178ed4
	ctx.lr = 0x82A8455C;
	__imp__XMsgStartIORequest(ctx, base);
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

__attribute__((alias("__imp__sub_82A84570"))) PPC_WEAK_FUNC(sub_82A84570);
PPC_FUNC_IMPL(__imp__sub_82A84570) {
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
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// li r7,24
	ctx.r7.s64 = 24;
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r11,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r11.u64);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,254
	ctx.r3.s64 = 254;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,40964
	ctx.r4.u64 = ctx.r4.u64 | 40964;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x83178ed4
	ctx.lr = 0x82A845C4;
	__imp__XMsgStartIORequest(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A845D4"))) PPC_WEAK_FUNC(sub_82A845D4);
PPC_FUNC_IMPL(__imp__sub_82A845D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A845D8"))) PPC_WEAK_FUNC(sub_82A845D8);
PPC_FUNC_IMPL(__imp__sub_82A845D8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// sth r8,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r8.u16);
	// sth r7,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r7.u16);
	// sth r6,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r6.u16);
	// sth r5,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r5.u16);
	// sth r11,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r11.u16);
	// bl 0x83179b14
	ctx.lr = 0x82A84634;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a84650
	if (!ctx.cr0.eq) goto loc_82A84650;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x82a848b0
	ctx.lr = 0x82A84648;
	sub_82A848B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a84664
	goto loc_82A84664;
loc_82A84650:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82A84664:
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

__attribute__((alias("__imp__sub_82A84678"))) PPC_WEAK_FUNC(sub_82A84678);
PPC_FUNC_IMPL(__imp__sub_82A84678) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,-7360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7360);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A846B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a846c4
	if (!ctx.cr0.lt) goto loc_82A846C4;
	// bl 0x82a848b0
	ctx.lr = 0x82A846BC;
	sub_82A848B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a846d0
	goto loc_82A846D0;
loc_82A846C4:
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_82A846D0:
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

__attribute__((alias("__imp__sub_82A846E4"))) PPC_WEAK_FUNC(sub_82A846E4);
PPC_FUNC_IMPL(__imp__sub_82A846E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A846E8"))) PPC_WEAK_FUNC(sub_82A846E8);
PPC_FUNC_IMPL(__imp__sub_82A846E8) {
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
	// lis r11,30403
	ctx.r11.s64 = 1992491008;
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,62032
	ctx.r11.u64 = ctx.r11.u64 | 62032;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bl 0x82a8fd88
	ctx.lr = 0x82A84718;
	sub_82A8FD88(ctx, base);
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

__attribute__((alias("__imp__sub_82A84730"))) PPC_WEAK_FUNC(sub_82A84730);
PPC_FUNC_IMPL(__imp__sub_82A84730) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a8fe00
	sub_82A8FE00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A84734"))) PPC_WEAK_FUNC(sub_82A84734);
PPC_FUNC_IMPL(__imp__sub_82A84734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A84738"))) PPC_WEAK_FUNC(sub_82A84738);
PPC_FUNC_IMPL(__imp__sub_82A84738) {
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
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82a84768
	if (!ctx.cr6.eq) goto loc_82A84768;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82A84754:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A84758:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A84768:
	// bl 0x82a8fc40
	ctx.lr = 0x82A8476C;
	sub_82A8FC40(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82a84754
	if (ctx.cr6.lt) goto loc_82A84754;
	// beq cr6,0x82a847a0
	if (ctx.cr6.eq) goto loc_82A847A0;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// beq cr6,0x82a84794
	if (ctx.cr6.eq) goto loc_82A84794;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// beq cr6,0x82a84794
	if (ctx.cr6.eq) goto loc_82A84794;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a84758
	goto loc_82A84758;
loc_82A84794:
	// lis r3,-32290
	ctx.r3.s64 = -2116157440;
	// ori r3,r3,8193
	ctx.r3.u64 = ctx.r3.u64 | 8193;
	// b 0x82a84758
	goto loc_82A84758;
loc_82A847A0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a84758
	goto loc_82A84758;
}

__attribute__((alias("__imp__sub_82A847AC"))) PPC_WEAK_FUNC(sub_82A847AC);
PPC_FUNC_IMPL(__imp__sub_82A847AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A847B0"))) PPC_WEAK_FUNC(sub_82A847B0);
PPC_FUNC_IMPL(__imp__sub_82A847B0) {
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
	// lis r11,30403
	ctx.r11.s64 = 1992491008;
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,62033
	ctx.r11.u64 = ctx.r11.u64 | 62033;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bl 0x82a8ffe0
	ctx.lr = 0x82A847E0;
	sub_82A8FFE0(ctx, base);
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

__attribute__((alias("__imp__sub_82A847F8"))) PPC_WEAK_FUNC(sub_82A847F8);
PPC_FUNC_IMPL(__imp__sub_82A847F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a90058
	sub_82A90058(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A847FC"))) PPC_WEAK_FUNC(sub_82A847FC);
PPC_FUNC_IMPL(__imp__sub_82A847FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A84800"))) PPC_WEAK_FUNC(sub_82A84800);
PPC_FUNC_IMPL(__imp__sub_82A84800) {
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
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82a84830
	if (!ctx.cr6.eq) goto loc_82A84830;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82A8481C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A84820:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A84830:
	// bl 0x82a8fee8
	ctx.lr = 0x82A84834;
	sub_82A8FEE8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82a8481c
	if (ctx.cr6.lt) goto loc_82A8481C;
	// beq cr6,0x82a84860
	if (ctx.cr6.eq) goto loc_82A84860;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// beq cr6,0x82a84854
	if (ctx.cr6.eq) goto loc_82A84854;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a84820
	goto loc_82A84820;
loc_82A84854:
	// lis r3,-32290
	ctx.r3.s64 = -2116157440;
	// ori r3,r3,8193
	ctx.r3.u64 = ctx.r3.u64 | 8193;
	// b 0x82a84820
	goto loc_82A84820;
loc_82A84860:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a84820
	goto loc_82A84820;
}

__attribute__((alias("__imp__sub_82A8486C"))) PPC_WEAK_FUNC(sub_82A8486C);
PPC_FUNC_IMPL(__imp__sub_82A8486C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A84870"))) PPC_WEAK_FUNC(sub_82A84870);
PPC_FUNC_IMPL(__imp__sub_82A84870) {
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
	// bl 0x82a900b0
	ctx.lr = 0x82A84880;
	sub_82A900B0(ctx, base);
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

__attribute__((alias("__imp__sub_82A84894"))) PPC_WEAK_FUNC(sub_82A84894);
PPC_FUNC_IMPL(__imp__sub_82A84894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A84898"))) PPC_WEAK_FUNC(sub_82A84898);
PPC_FUNC_IMPL(__imp__sub_82A84898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,336(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,256(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A848B0"))) PPC_WEAK_FUNC(sub_82A848B0);
PPC_FUNC_IMPL(__imp__sub_82A848B0) {
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
	// bl 0x831795c4
	ctx.lr = 0x82A848C0;
	__imp__RtlNtStatusToDosError(ctx, base);
	// lwz r11,336(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a848d4
	if (!ctx.cr6.eq) goto loc_82A848D4;
	// lwz r11,256(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r3.u32);
loc_82A848D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A848E4"))) PPC_WEAK_FUNC(sub_82A848E4);
PPC_FUNC_IMPL(__imp__sub_82A848E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A848E8"))) PPC_WEAK_FUNC(sub_82A848E8);
PPC_FUNC_IMPL(__imp__sub_82A848E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,336(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a84900
	if (!ctx.cr6.eq) goto loc_82A84900;
	// lwz r11,256(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,352(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// blr 
	return;
loc_82A84900:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A84908"))) PPC_WEAK_FUNC(sub_82A84908);
PPC_FUNC_IMPL(__imp__sub_82A84908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r31,1627
	ctx.r31.s64 = 1627;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a84934
	if (!ctx.cr6.eq) goto loc_82A84934;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82a84960
	goto loc_82A84960;
loc_82A84934:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83179184
	ctx.lr = 0x82A8493C;
	__imp__XamGetExecutionId(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a84960
	if (ctx.cr0.lt) goto loc_82A84960;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_82A84960:
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

__attribute__((alias("__imp__sub_82A8497C"))) PPC_WEAK_FUNC(sub_82A8497C);
PPC_FUNC_IMPL(__imp__sub_82A8497C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A84980"))) PPC_WEAK_FUNC(sub_82A84980);
PPC_FUNC_IMPL(__imp__sub_82A84980) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a84a48
	if (ctx.cr6.eq) goto loc_82A84A48;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-5300
	ctx.r10.s64 = ctx.r10.s64 + -5300;
loc_82A84994:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82a849b8
	if (ctx.cr0.eq) goto loc_82A849B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a84994
	if (ctx.cr6.eq) goto loc_82A84994;
loc_82A849B8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a849c8
	if (!ctx.cr0.eq) goto loc_82A849C8;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// b 0x82a84a44
	goto loc_82A84A44;
loc_82A849C8:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-5320
	ctx.r10.s64 = ctx.r10.s64 + -5320;
loc_82A849D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82a849f8
	if (ctx.cr0.eq) goto loc_82A849F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a849d4
	if (ctx.cr6.eq) goto loc_82A849D4;
loc_82A849F8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a84a08
	if (!ctx.cr0.eq) goto loc_82A84A08;
	// ori r4,r4,256
	ctx.r4.u64 = ctx.r4.u64 | 256;
	// b 0x82a84a44
	goto loc_82A84A44;
loc_82A84A08:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-5340
	ctx.r10.s64 = ctx.r10.s64 + -5340;
loc_82A84A14:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82a84a38
	if (ctx.cr0.eq) goto loc_82A84A38;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a84a14
	if (ctx.cr6.eq) goto loc_82A84A14;
loc_82A84A38:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a84a48
	if (!ctx.cr0.eq) goto loc_82A84A48;
	// oris r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 262144;
loc_82A84A44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A84A48:
	// b 0x83179194
	__imp__XamLoaderLaunchTitle(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A84A4C"))) PPC_WEAK_FUNC(sub_82A84A4C);
PPC_FUNC_IMPL(__imp__sub_82A84A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A84A50"))) PPC_WEAK_FUNC(sub_82A84A50);
PPC_FUNC_IMPL(__imp__sub_82A84A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x82a84d18
	if (ctx.cr6.lt) goto loc_82A84D18;
loc_82A84A74:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x82a84a84
	if (ctx.cr6.lt) goto loc_82A84A84;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_82A84A84:
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r9,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r10,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r12,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r6,r4
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r7,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r8,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r9,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v14,r10,r4
	simd::store_shuffled(ctx.v14, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v15,r11,r4
	simd::store_shuffled(ctx.v15, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v16,r12,r4
	simd::store_shuffled(ctx.v16, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	simd::store_shuffled(ctx.v17, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v18,r6,r4
	simd::store_shuffled(ctx.v18, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v19,r7,r4
	simd::store_shuffled(ctx.v19, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v20,r8,r4
	simd::store_shuffled(ctx.v20, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v21,r9,r4
	simd::store_shuffled(ctx.v21, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v22,r10,r4
	simd::store_shuffled(ctx.v22, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v23,r11,r4
	simd::store_shuffled(ctx.v23, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v24,r12,r4
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v26,r6,r4
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v27,r7,r4
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v28,r8,r4
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r9,r4
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v30,r10,r4
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v31,r11,r4
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v32,r12,r4
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v33,r0,r4
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v34,r6,r4
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v35,r7,r4
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v36,r8,r4
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v37,r9,r4
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v38,r10,r4
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v39,r11,r4
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v40,r12,r4
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v42,r6,r4
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v43,r7,r4
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v44,r8,r4
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v45,r9,r4
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v46,r10,r4
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v47,r11,r4
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v48,r12,r4
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v50,r6,r4
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v51,r7,r4
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v52,r8,r4
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v53,r9,r4
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r10,r4
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v55,r11,r4
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v56,r12,r4
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r6,r4
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r7,r4
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r8,r4
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r9,r4
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r10,r4
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r11,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r12,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v9,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v14.u8[15 - i]);
	// stvlx128 v15,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v15.u8[15 - i]);
	// stvlx128 v16,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v16.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v17,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v17.u8[15 - i]);
	// stvlx128 v18,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v18.u8[15 - i]);
	// stvlx128 v19,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v19.u8[15 - i]);
	// stvlx128 v20,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v20.u8[15 - i]);
	// stvlx128 v21,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v21.u8[15 - i]);
	// stvlx128 v22,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v22.u8[15 - i]);
	// stvlx128 v23,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v23.u8[15 - i]);
	// stvlx128 v24,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v24.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v25,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v25.u8[15 - i]);
	// stvlx128 v26,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v26.u8[15 - i]);
	// stvlx128 v27,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v27.u8[15 - i]);
	// stvlx128 v28,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v28.u8[15 - i]);
	// stvlx128 v29,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v29.u8[15 - i]);
	// stvlx128 v30,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v30.u8[15 - i]);
	// stvlx128 v31,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v31.u8[15 - i]);
	// stvlx128 v32,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v33,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvlx128 v40,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v41,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvlx128 v48,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v49,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvlx128 v56,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v57,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvlx128 v0,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x82a84a74
	if (!ctx.cr6.lt) goto loc_82A84A74;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82A84D18:
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r9,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r10,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r12,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x82a84d18
	if (ctx.cr6.gt) goto loc_82A84D18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A84D74"))) PPC_WEAK_FUNC(sub_82A84D74);
PPC_FUNC_IMPL(__imp__sub_82A84D74) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// stvlx128 v64,r1,r6
	ea = ctx.r1.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v64.u8[15 - i]);
	// stvlx128 v65,r1,r7
	ea = ctx.r1.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// li r0,0
	ctx.r0.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// dcbt r4,r0
	// lvx128 v65,r0,r4
	simd::store_shuffled(ctx.v65, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x82a851a8
	if (ctx.cr6.lt) goto loc_82A851A8;
	// li r0,128
	ctx.r0.s64 = 128;
	// dcbt r4,r0
	// li r0,256
	ctx.r0.s64 = 256;
	// dcbt r4,r0
	// li r0,384
	ctx.r0.s64 = 384;
	// dcbt r4,r0
	// li r0,512
	ctx.r0.s64 = 512;
	// dcbt r4,r0
	// li r0,640
	ctx.r0.s64 = 640;
	// dcbt r4,r0
	// li r0,768
	ctx.r0.s64 = 768;
	// dcbt r4,r0
	// li r0,896
	ctx.r0.s64 = 896;
	// dcbt r4,r0
loc_82A84DFC:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x82a84e0c
	if (ctx.cr6.lt) goto loc_82A84E0C;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_82A84E0C:
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r9,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r10,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r12,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r6,r4
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r7,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r8,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r9,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v14,r10,r4
	simd::store_shuffled(ctx.v14, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v15,r11,r4
	simd::store_shuffled(ctx.v15, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v16,r12,r4
	simd::store_shuffled(ctx.v16, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	simd::store_shuffled(ctx.v17, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v18,r6,r4
	simd::store_shuffled(ctx.v18, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v19,r7,r4
	simd::store_shuffled(ctx.v19, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v20,r8,r4
	simd::store_shuffled(ctx.v20, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v21,r9,r4
	simd::store_shuffled(ctx.v21, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v22,r10,r4
	simd::store_shuffled(ctx.v22, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v23,r11,r4
	simd::store_shuffled(ctx.v23, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v24,r12,r4
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v26,r6,r4
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v27,r7,r4
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v28,r8,r4
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r9,r4
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v30,r10,r4
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v31,r11,r4
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v32,r12,r4
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v33,r0,r4
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v34,r6,r4
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v35,r7,r4
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v36,r8,r4
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v37,r9,r4
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v38,r10,r4
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v39,r11,r4
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v40,r12,r4
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v42,r6,r4
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v43,r7,r4
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v44,r8,r4
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v45,r9,r4
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v46,r10,r4
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v47,r11,r4
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v48,r12,r4
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v50,r6,r4
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v51,r7,r4
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v52,r8,r4
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v53,r9,r4
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r10,r4
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v55,r11,r4
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v56,r12,r4
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r6,r4
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r7,r4
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r8,r4
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r9,r4
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r10,r4
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r11,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v64,r12,r4
	simd::store_shuffled(ctx.v64, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v65.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v8,v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v9,v9,v10,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v10,v10,v11,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v11,v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v12,v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v13,v13,v14,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v14.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v14,v14,v15,v0
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v14.u8), _mm_load_si128((__m128i*)ctx.v15.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v15,v15,v16,v0
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v15.u8), _mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v8,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvlx128 v9,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v14.u8[15 - i]);
	// stvlx128 v15,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v15.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v16,v16,v17,v0
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v17,v17,v18,v0
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v18,v18,v19,v0
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v19,v19,v20,v0
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v20,v20,v21,v0
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v21,v21,v22,v0
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v22,v22,v23,v0
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v23,v23,v24,v0
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v16,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v16.u8[15 - i]);
	// stvlx128 v17,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v17.u8[15 - i]);
	// stvlx128 v18,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v18.u8[15 - i]);
	// stvlx128 v19,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v19.u8[15 - i]);
	// stvlx128 v20,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v20.u8[15 - i]);
	// stvlx128 v21,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v21.u8[15 - i]);
	// stvlx128 v22,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v22.u8[15 - i]);
	// stvlx128 v23,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v23.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v24,v24,v25,v0
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v25,v25,v26,v0
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v26,v26,v27,v0
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v27,v27,v28,v0
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v28,v28,v29,v0
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v29,v29,v30,v0
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v30,v30,v31,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v31,v31,v32,v0
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v24,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v24.u8[15 - i]);
	// stvlx128 v25,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v25.u8[15 - i]);
	// stvlx128 v26,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v26.u8[15 - i]);
	// stvlx128 v27,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v27.u8[15 - i]);
	// stvlx128 v28,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v28.u8[15 - i]);
	// stvlx128 v29,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v29.u8[15 - i]);
	// stvlx128 v30,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v30.u8[15 - i]);
	// stvlx128 v31,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v31.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v32,v32,v33,v0
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v33,v33,v34,v0
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v34,v34,v35,v0
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v35,v35,v36,v0
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v36,v36,v37,v0
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v37,v37,v38,v0
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v38,v38,v39,v0
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v39,v39,v40,v0
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v32,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// stvlx128 v33,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v40,v40,v41,v0
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v41,v41,v42,v0
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v42,v42,v43,v0
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v43,v43,v44,v0
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v44,v44,v45,v0
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v45,v45,v46,v0
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v46,v46,v47,v0
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v47,v47,v48,v0
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v40,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// stvlx128 v41,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v48,v48,v49,v0
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v49,v49,v50,v0
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v50,v50,v51,v0
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v51,v51,v52,v0
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v52,v52,v53,v0
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v53,v53,v54,v0
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v54,v54,v55,v0
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v55,v55,v56,v0
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v48,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvlx128 v49,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v56,v56,v57,v0
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v57,v57,v58,v0
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v58,v58,v59,v0
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v59,v59,v60,v0
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v60,v60,v61,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v61,v61,v62,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v62,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v63,v63,v64,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v64.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v56,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// stvlx128 v57,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vor128 v65,v64,v64
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_load_si128((__m128i*)ctx.v64.u8));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x82a84dfc
	if (!ctx.cr6.lt) goto loc_82A84DFC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a851a8
	if (!ctx.cr6.eq) goto loc_82A851A8;
	// b 0x82a85224
	goto loc_82A85224;
loc_82A851A8:
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r9,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r10,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r12,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v65.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// vor128 v65,v8,v8
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x82a851a8
	if (ctx.cr6.gt) goto loc_82A851A8;
loc_82A85224:
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// lvx128 v64,r1,r6
	simd::store_shuffled(ctx.v64, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v65,r1,r7
	simd::store_shuffled(ctx.v65, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A85240"))) PPC_WEAK_FUNC(sub_82A85240);
PPC_FUNC_IMPL(__imp__sub_82A85240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// li r31,512
	ctx.r31.s64 = 512;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x82a85568
	if (ctx.cr6.lt) goto loc_82A85568;
loc_82A85270:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x82a85280
	if (ctx.cr6.lt) goto loc_82A85280;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_82A85280:
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r9,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r10,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r12,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r6,r4
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r7,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r8,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r9,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v14,r10,r4
	simd::store_shuffled(ctx.v14, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v15,r11,r4
	simd::store_shuffled(ctx.v15, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v16,r12,r4
	simd::store_shuffled(ctx.v16, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	simd::store_shuffled(ctx.v17, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v18,r6,r4
	simd::store_shuffled(ctx.v18, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v19,r7,r4
	simd::store_shuffled(ctx.v19, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v20,r8,r4
	simd::store_shuffled(ctx.v20, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v21,r9,r4
	simd::store_shuffled(ctx.v21, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v22,r10,r4
	simd::store_shuffled(ctx.v22, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v23,r11,r4
	simd::store_shuffled(ctx.v23, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v24,r12,r4
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v26,r6,r4
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v27,r7,r4
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v28,r8,r4
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r9,r4
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v30,r10,r4
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v31,r11,r4
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v32,r12,r4
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// xor r30,r30,r30
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r30.u64;
	// lvx128 v33,r0,r4
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v34,r6,r4
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v35,r7,r4
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v36,r8,r4
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v37,r9,r4
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v38,r10,r4
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v39,r11,r4
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v40,r12,r4
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + ctx.r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v42,r6,r4
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v43,r7,r4
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v44,r8,r4
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v45,r9,r4
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v46,r10,r4
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v47,r11,r4
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v48,r12,r4
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + ctx.r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v50,r6,r4
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v51,r7,r4
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v52,r8,r4
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v53,r9,r4
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r10,r4
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v55,r11,r4
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v56,r12,r4
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + ctx.r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r6,r4
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r7,r4
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r8,r4
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r9,r4
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r10,r4
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r11,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r12,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + ctx.r30.u32) & ~127), 0, 128);
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + ctx.r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v9,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v14.u8[15 - i]);
	// stvlx128 v15,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v15.u8[15 - i]);
	// stvlx128 v16,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v16.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + ctx.r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v17,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v17.u8[15 - i]);
	// stvlx128 v18,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v18.u8[15 - i]);
	// stvlx128 v19,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v19.u8[15 - i]);
	// stvlx128 v20,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v20.u8[15 - i]);
	// stvlx128 v21,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v21.u8[15 - i]);
	// stvlx128 v22,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v22.u8[15 - i]);
	// stvlx128 v23,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v23.u8[15 - i]);
	// stvlx128 v24,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v24.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + ctx.r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v25,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v25.u8[15 - i]);
	// stvlx128 v26,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v26.u8[15 - i]);
	// stvlx128 v27,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v27.u8[15 - i]);
	// stvlx128 v28,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v28.u8[15 - i]);
	// stvlx128 v29,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v29.u8[15 - i]);
	// stvlx128 v30,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v30.u8[15 - i]);
	// stvlx128 v31,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v31.u8[15 - i]);
	// stvlx128 v32,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + ctx.r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v33,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvlx128 v40,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v41,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvlx128 v48,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v49,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvlx128 v56,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v57,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvlx128 v0,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x82a85270
	if (!ctx.cr6.lt) goto loc_82A85270;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a85568
	if (!ctx.cr6.eq) goto loc_82A85568;
	// b 0x82a855c4
	goto loc_82A855C4;
loc_82A85568:
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r9,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r10,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r12,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x82a85568
	if (ctx.cr6.gt) goto loc_82A85568;
loc_82A855C4:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A855D0"))) PPC_WEAK_FUNC(sub_82A855D0);
PPC_FUNC_IMPL(__imp__sub_82A855D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// stvlx128 v64,r1,r6
	ea = ctx.r1.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v64.u8[15 - i]);
	// stvlx128 v65,r1,r7
	ea = ctx.r1.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// li r0,0
	ctx.r0.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// li r31,512
	ctx.r31.s64 = 512;
	// dcbt r4,r0
	// lvx128 v65,r0,r4
	simd::store_shuffled(ctx.v65, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x82a85a54
	if (ctx.cr6.lt) goto loc_82A85A54;
	// li r0,128
	ctx.r0.s64 = 128;
	// dcbt r4,r0
	// li r0,256
	ctx.r0.s64 = 256;
	// dcbt r4,r0
	// li r0,384
	ctx.r0.s64 = 384;
	// dcbt r4,r0
	// li r0,512
	ctx.r0.s64 = 512;
	// dcbt r4,r0
	// li r0,640
	ctx.r0.s64 = 640;
	// dcbt r4,r0
	// li r0,768
	ctx.r0.s64 = 768;
	// dcbt r4,r0
	// li r0,896
	ctx.r0.s64 = 896;
	// dcbt r4,r0
loc_82A8565C:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x82a8566c
	if (ctx.cr6.lt) goto loc_82A8566C;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_82A8566C:
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r9,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r10,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r12,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r6,r4
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r7,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r8,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r9,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v14,r10,r4
	simd::store_shuffled(ctx.v14, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v15,r11,r4
	simd::store_shuffled(ctx.v15, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v16,r12,r4
	simd::store_shuffled(ctx.v16, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	simd::store_shuffled(ctx.v17, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v18,r6,r4
	simd::store_shuffled(ctx.v18, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v19,r7,r4
	simd::store_shuffled(ctx.v19, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v20,r8,r4
	simd::store_shuffled(ctx.v20, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v21,r9,r4
	simd::store_shuffled(ctx.v21, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v22,r10,r4
	simd::store_shuffled(ctx.v22, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v23,r11,r4
	simd::store_shuffled(ctx.v23, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v24,r12,r4
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v26,r6,r4
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v27,r7,r4
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v28,r8,r4
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r9,r4
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v30,r10,r4
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v31,r11,r4
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v32,r12,r4
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// xor r30,r30,r30
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r30.u64;
	// lvx128 v33,r0,r4
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v34,r6,r4
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v35,r7,r4
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v36,r8,r4
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v37,r9,r4
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v38,r10,r4
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v39,r11,r4
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v40,r12,r4
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + ctx.r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v42,r6,r4
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v43,r7,r4
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v44,r8,r4
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v45,r9,r4
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v46,r10,r4
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v47,r11,r4
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v48,r12,r4
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + ctx.r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v50,r6,r4
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v51,r7,r4
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v52,r8,r4
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v53,r9,r4
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r10,r4
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v55,r11,r4
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v56,r12,r4
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + ctx.r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r6,r4
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r7,r4
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r8,r4
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r9,r4
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r10,r4
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r11,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v64,r12,r4
	simd::store_shuffled(ctx.v64, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + ctx.r30.u32) & ~127), 0, 128);
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v65.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + ctx.r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v8,v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v9,v9,v10,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v10,v10,v11,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v11,v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v12,v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v13,v13,v14,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v14.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v14,v14,v15,v0
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v14.u8), _mm_load_si128((__m128i*)ctx.v15.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v15,v15,v16,v0
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v15.u8), _mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v8,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvlx128 v9,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v14.u8[15 - i]);
	// stvlx128 v15,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v15.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + ctx.r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v16,v16,v17,v0
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v17,v17,v18,v0
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v18,v18,v19,v0
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v19,v19,v20,v0
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v20,v20,v21,v0
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v21,v21,v22,v0
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v22,v22,v23,v0
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v23,v23,v24,v0
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v16,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v16.u8[15 - i]);
	// stvlx128 v17,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v17.u8[15 - i]);
	// stvlx128 v18,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v18.u8[15 - i]);
	// stvlx128 v19,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v19.u8[15 - i]);
	// stvlx128 v20,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v20.u8[15 - i]);
	// stvlx128 v21,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v21.u8[15 - i]);
	// stvlx128 v22,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v22.u8[15 - i]);
	// stvlx128 v23,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v23.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + ctx.r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v24,v24,v25,v0
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v25,v25,v26,v0
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v26,v26,v27,v0
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v27,v27,v28,v0
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v28,v28,v29,v0
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v29,v29,v30,v0
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v30,v30,v31,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v31,v31,v32,v0
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v24,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v24.u8[15 - i]);
	// stvlx128 v25,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v25.u8[15 - i]);
	// stvlx128 v26,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v26.u8[15 - i]);
	// stvlx128 v27,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v27.u8[15 - i]);
	// stvlx128 v28,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v28.u8[15 - i]);
	// stvlx128 v29,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v29.u8[15 - i]);
	// stvlx128 v30,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v30.u8[15 - i]);
	// stvlx128 v31,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v31.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + ctx.r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v32,v32,v33,v0
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v33,v33,v34,v0
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v34,v34,v35,v0
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v35,v35,v36,v0
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v36,v36,v37,v0
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v37,v37,v38,v0
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v38,v38,v39,v0
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v39,v39,v40,v0
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v32,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// stvlx128 v33,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v40,v40,v41,v0
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v41,v41,v42,v0
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v42,v42,v43,v0
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v43,v43,v44,v0
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v44,v44,v45,v0
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v45,v45,v46,v0
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v46,v46,v47,v0
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v47,v47,v48,v0
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v40,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// stvlx128 v41,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v48,v48,v49,v0
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v49,v49,v50,v0
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v50,v50,v51,v0
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v51,v51,v52,v0
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v52,v52,v53,v0
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v53,v53,v54,v0
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v54,v54,v55,v0
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v55,v55,v56,v0
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v48,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvlx128 v49,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v56,v56,v57,v0
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v57,v57,v58,v0
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v58,v58,v59,v0
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v59,v59,v60,v0
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v60,v60,v61,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v61,v61,v62,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v62,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v63,v63,v64,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v64.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v56,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// stvlx128 v57,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vor128 v65,v64,v64
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_load_si128((__m128i*)ctx.v64.u8));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x82a8565c
	if (!ctx.cr6.lt) goto loc_82A8565C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a85a54
	if (!ctx.cr6.eq) goto loc_82A85A54;
	// b 0x82a85ad4
	goto loc_82A85AD4;
loc_82A85A54:
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r9,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r10,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r12,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v65.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// vor128 v65,v8,v8
	_mm_store_si128((__m128i*)ctx.v65.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x82a85a54
	if (ctx.cr6.gt) goto loc_82A85A54;
loc_82A85AD4:
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// lvx128 v64,r1,r6
	simd::store_shuffled(ctx.v64, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v65,r1,r7
	simd::store_shuffled(ctx.v65, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A85AF0"))) PPC_WEAK_FUNC(sub_82A85AF0);
PPC_FUNC_IMPL(__imp__sub_82A85AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,63
	ctx.r9.s64 = 63;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r12,128
	ctx.r12.s64 = 128;
	// cmplwi r5,128
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bltlr 
	if (ctx.cr0.lt) return;
loc_82A85B14:
	// cmplwi cr7,r5,256
	ctx.cr7.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// cmplwi r5,1024
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr7,0x82a85b2c
	if (ctx.cr7.lt) goto loc_82A85B2C;
	// ble 0x82a85b28
	if (!ctx.cr0.gt) goto loc_82A85B28;
	// dcbt r10,r4
loc_82A85B28:
	// dcbzl r12,r3
	memset(base + ((ctx.r12.u32 + ctx.r3.u32) & ~127), 0, 128);
loc_82A85B2C:
	// lvx v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// lvx v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm v1,v1,v2,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm v2,v2,v3,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v5,r0,r11
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm v3,v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v6,r6,r11
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm v4,v4,v5,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v7,r7,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm v5,v5,v6,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v8,r8,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm v6,v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v9,r9,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm v7,v7,v8,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx v1,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v8,v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx v2,r6,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stvx v3,r7,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvx v4,r8,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvx v5,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// stvx v6,r6,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi r5,128
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// stvx v7,r7,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v8,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bge 0x82a85b14
	if (!ctx.cr0.lt) goto loc_82A85B14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A85BB0"))) PPC_WEAK_FUNC(sub_82A85BB0);
PPC_FUNC_IMPL(__imp__sub_82A85BB0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a83620
	ctx.lr = 0x82A85BCC;
	sub_82A83620(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82a85c00
	if (ctx.cr6.lt) goto loc_82A85C00;
	// beq cr6,0x82a85bf0
	if (ctx.cr6.eq) goto loc_82A85BF0;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x82a85be8
	if (ctx.cr6.lt) goto loc_82A85BE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a85c04
	goto loc_82A85C04;
loc_82A85BE8:
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// b 0x82a85bf4
	goto loc_82A85BF4;
loc_82A85BF0:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_82A85BF4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82a85c04
	goto loc_82A85C04;
loc_82A85C00:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82A85C04:
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// ori r10,r10,38528
	ctx.r10.u64 = ctx.r10.u64 | 38528;
	// mulld r11,r11,r10
	ctx.r11.s64 = ctx.r11.s64 * ctx.r10.s64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_82A85C30"))) PPC_WEAK_FUNC(sub_82A85C30);
PPC_FUNC_IMPL(__imp__sub_82A85C30) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A85C38;
	__savegprlr_29(ctx, base);
	// lbz r11,201(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 201);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rotlwi r9,r11,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne cr6,0x82a85c64
	if (!ctx.cr6.eq) goto loc_82A85C64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a85ccc
	if (!ctx.cr6.eq) goto loc_82A85CCC;
	// lbz r11,5(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r11,201(r3)
	PPC_STORE_U8(ctx.r3.u32 + 201, ctx.r11.u8);
	// b 0x82a85ccc
	goto loc_82A85CCC;
loc_82A85C64:
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82a85cc0
	if (ctx.cr6.eq) goto loc_82A85CC0;
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r31,r4,24
	ctx.r31.u64 = ctx.r4.u32 & 0xFF;
	// lbz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r29,5(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r7,r30,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// rotlwi r8,r29,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r29.u32, 3);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stb r29,5(r7)
	PPC_STORE_U8(ctx.r7.u32 + 5, ctx.r29.u8);
	// stb r30,6(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6, ctx.r30.u8);
	// stb r6,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r6.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// lbz r11,6(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r31,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r31.u8);
	// stb r31,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r31.u8);
loc_82A85CC0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a85ccc
	if (ctx.cr6.eq) goto loc_82A85CCC;
	// stb r4,201(r3)
	PPC_STORE_U8(ctx.r3.u32 + 201, ctx.r4.u8);
loc_82A85CCC:
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A85CD0"))) PPC_WEAK_FUNC(sub_82A85CD0);
PPC_FUNC_IMPL(__imp__sub_82A85CD0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r8,201(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 201);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// blt cr6,0x82a85d18
	if (ctx.cr6.lt) goto loc_82A85D18;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bgt cr6,0x82a85d18
	if (ctx.cr6.gt) goto loc_82A85D18;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-5284
	ctx.r11.s64 = ctx.r11.s64 + -5284;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// divwu r10,r4,r11
	ctx.r10.u32 = ctx.r4.u32 / ctx.r11.u32;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_82A85D18:
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82a85d48
	goto loc_82A85D48;
loc_82A85D20:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82a85d38
	if (!ctx.cr6.eq) goto loc_82A85D38;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82a85d64
	if (ctx.cr6.eq) goto loc_82A85D64;
loc_82A85D38:
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82a85d58
	if (ctx.cr6.eq) goto loc_82A85D58;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_82A85D48:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rlwinm. r31,r10,0,0,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a85d20
	if (!ctx.cr0.eq) goto loc_82A85D20;
loc_82A85D58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A85D5C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82A85D64:
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x82a85d5c
	goto loc_82A85D5C;
}

__attribute__((alias("__imp__sub_82A85D74"))) PPC_WEAK_FUNC(sub_82A85D74);
PPC_FUNC_IMPL(__imp__sub_82A85D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A85D78"))) PPC_WEAK_FUNC(sub_82A85D78);
PPC_FUNC_IMPL(__imp__sub_82A85D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A85D80;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,7(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,30
	ctx.r30.u64 = ctx.r11.u32 & 0x3;
	// beq 0x82a85e8c
	if (ctx.cr0.eq) goto loc_82A85E8C;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r3,r4,12,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x83179814
	ctx.lr = 0x82A85DC8;
	__imp__XeCryptSha(ctx, base);
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a85dec
	if (!ctx.cr6.eq) goto loc_82A85DEC;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x82fa77c0
	ctx.lr = 0x82A85DE8;
	sub_82FA77C0(ctx, base);
	// b 0x82a85e80
	goto loc_82A85E80;
loc_82A85DEC:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a85cd0
	ctx.lr = 0x82A85E08;
	sub_82A85CD0(ctx, base);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r9,r9,-5284
	ctx.r9.s64 = ctx.r9.s64 + -5284;
	// li r8,170
	ctx.r8.s64 = 170;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// divwu r9,r28,r11
	ctx.r9.u32 = ctx.r28.u32 / ctx.r11.u32;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r9,r8
	ctx.r11.u32 = ctx.r9.u32 / ctx.r8.u32;
	// mulli r8,r11,170
	ctx.r8.s64 = ctx.r11.s64 * 170;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 * 24;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A85E58;
	sub_82FA77C0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82A85E80:
	// lbz r11,7(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7);
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,7(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7, ctx.r11.u8);
loc_82A85E8C:
	// lbz r11,7(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7);
	// andi. r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,7(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A85EA0"))) PPC_WEAK_FUNC(sub_82A85EA0);
PPC_FUNC_IMPL(__imp__sub_82A85EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A85EA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a85cd0
	ctx.lr = 0x82A85EC0;
	sub_82A85CD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a85f40
	if (ctx.cr0.eq) goto loc_82A85F40;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,7(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a85f28
	if (ctx.cr0.eq) goto loc_82A85F28;
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a85f28
	if (ctx.cr6.eq) goto loc_82A85F28;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a85cd0
	ctx.lr = 0x82A85F00;
	sub_82A85CD0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r11,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82A85F28:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,7(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a85c30
	ctx.lr = 0x82A85F40;
	sub_82A85C30(ctx, base);
loc_82A85F40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A85F48"))) PPC_WEAK_FUNC(sub_82A85F48);
PPC_FUNC_IMPL(__imp__sub_82A85F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A85F50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a85cd0
	ctx.lr = 0x82A85F6C;
	sub_82A85CD0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82a85fa8
	if (ctx.cr0.eq) goto loc_82A85FA8;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r4,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a85c30
	ctx.lr = 0x82A85F90;
	sub_82A85C30(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82A85FA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A85FB4"))) PPC_WEAK_FUNC(sub_82A85FB4);
PPC_FUNC_IMPL(__imp__sub_82A85FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A85FB8"))) PPC_WEAK_FUNC(sub_82A85FB8);
PPC_FUNC_IMPL(__imp__sub_82A85FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A85FC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r30,200(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 200);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r28,r30,3
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A85FE4;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a86014
	if (ctx.cr6.eq) goto loc_82A86014;
	// li r11,1
	ctx.r11.s64 = 1;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r10,r31,-3
	ctx.r10.s64 = ctx.r31.s64 + -3;
loc_82A85FF8:
	// addi r9,r11,254
	ctx.r9.s64 = ctx.r11.s64 + 254;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r9.u8);
	// stbu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82a85ff8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A85FF8;
loc_82A86014:
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// addi r9,r30,255
	ctx.r9.s64 = ctx.r30.s64 + 255;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r9.u8);
	// stb r11,-3(r10)
	PPC_STORE_U8(ctx.r10.u32 + -3, ctx.r11.u8);
	// stb r11,201(r29)
	PPC_STORE_U8(ctx.r29.u32 + 201, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A86034"))) PPC_WEAK_FUNC(sub_82A86034);
PPC_FUNC_IMPL(__imp__sub_82A86034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A86038"))) PPC_WEAK_FUNC(sub_82A86038);
PPC_FUNC_IMPL(__imp__sub_82A86038) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A86064;
	sub_82FA7CF0(ctx, base);
	// li r11,36
	ctx.r11.s64 = 36;
	// li r10,240
	ctx.r10.s64 = 240;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// lbz r11,206(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 206);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwimi r10,r11,27,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// rlwimi r10,r11,3,28,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0x8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF7);
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm r10,r10,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stb r9,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r9.u8);
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r10,r10,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// stb r8,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r8.u8);
	// rlwinm r11,r11,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// stb r9,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r9.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a86100
	if (!ctx.cr6.lt) goto loc_82A86100;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_82A86100:
	// lwz r7,156(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r9,r30,172
	ctx.r9.s64 = ctx.r30.s64 + 172;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r10,164(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82A8612C:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82a8612c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A8612C;
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

__attribute__((alias("__imp__sub_82A86150"))) PPC_WEAK_FUNC(sub_82A86150);
PPC_FUNC_IMPL(__imp__sub_82A86150) {
	PPC_FUNC_PROLOGUE();
	// lis r10,75
	ctx.r10.s64 = 4915200;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r10,r10,55941
	ctx.r10.u64 = ctx.r10.u64 | 55941;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a86170
	if (ctx.cr6.lt) goto loc_82A86170;
	// lis r3,74
	ctx.r3.s64 = 4849664;
	// ori r3,r3,63336
	ctx.r3.u64 = ctx.r3.u64 | 63336;
	// blr 
	return;
loc_82A86170:
	// li r8,172
	ctx.r8.s64 = 172;
	// cmplwi cr6,r11,29242
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29242, ctx.xer);
	// blt cr6,0x82a861bc
	if (ctx.cr6.lt) goto loc_82A861BC;
	// cmplwi cr6,r11,29248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29248, ctx.xer);
	// li r9,29242
	ctx.r9.s64 = 29242;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// bgt cr6,0x82a86190
	if (ctx.cr6.gt) goto loc_82A86190;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82A86190:
	// divwu r10,r11,r9
	ctx.r10.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mulli r10,r10,29242
	ctx.r10.s64 = ctx.r10.s64 * 29242;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x82a861a8
	if (ctx.cr6.gt) goto loc_82A861A8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82A861A8:
	// addi r10,r11,29241
	ctx.r10.s64 = ctx.r11.s64 + 29241;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82a861d4
	goto loc_82A861D4;
loc_82A861BC:
	// cmplwi cr6,r11,172
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 172, ctx.xer);
	// blt cr6,0x82a861d4
	if (ctx.cr6.lt) goto loc_82A861D4;
	// cmplwi cr6,r11,176
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 176, ctx.xer);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// bgt cr6,0x82a861d4
	if (ctx.cr6.gt) goto loc_82A861D4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82A861D4:
	// divwu r10,r11,r8
	ctx.r10.u32 = ctx.r11.u32 / ctx.r8.u32;
	// mulli r10,r10,172
	ctx.r10.s64 = ctx.r10.s64 * 172;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bgt cr6,0x82a861ec
	if (ctx.cr6.gt) goto loc_82A861EC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82A861EC:
	// addi r10,r11,171
	ctx.r10.s64 = ctx.r11.s64 + 171;
	// divwu r10,r10,r8
	ctx.r10.u32 = ctx.r10.u32 / ctx.r8.u32;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A86200"))) PPC_WEAK_FUNC(sub_82A86200);
PPC_FUNC_IMPL(__imp__sub_82A86200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A86208;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,88
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 88, ctx.xer);
	// beq cr6,0x82a86224
	if (ctx.cr6.eq) goto loc_82A86224;
loc_82A86218:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// b 0x82a86558
	goto loc_82A86558;
loc_82A86224:
	// lbz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82a86218
	if (ctx.cr6.lt) goto loc_82A86218;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// clrlwi. r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a86218
	if (!ctx.cr0.eq) goto loc_82A86218;
	// lwz r28,24(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831797e4
	ctx.lr = 0x82A86258;
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a86558
	if (ctx.cr0.lt) goto loc_82A86558;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// ble cr6,0x82a86278
	if (!ctx.cr6.gt) goto loc_82A86278;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// b 0x82a86558
	goto loc_82A86558;
loc_82A86278:
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83179964
	ctx.lr = 0x82A86290;
	__imp__NtQueryInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a86558
	if (ctx.cr0.lt) goto loc_82A86558;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831796c4
	ctx.lr = 0x82A862AC;
	__imp__NtCreateEvent(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a86558
	if (ctx.cr0.lt) goto loc_82A86558;
	// lbz r11,81(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 81);
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// lbz r27,80(r30)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r30.u32 + 80);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// rotlwi r26,r27,3
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r27.u32, 3);
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r11,r7,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFF000;
	// addi r3,r9,-7356
	ctx.r3.s64 = ctx.r9.s64 + -7356;
	// li r6,61
	ctx.r6.s64 = 61;
	// addi r7,r11,8192
	ctx.r7.s64 = ctx.r11.s64 + 8192;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,216
	ctx.r4.s64 = ctx.r10.s64 + 216;
	// bl 0x83179b64
	ctx.lr = 0x82A862F4;
	__imp__IoCreateDevice(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82a8630c
	if (!ctx.cr0.lt) goto loc_82A8630C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83179634
	ctx.lr = 0x82A86304;
	__imp__NtClose(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a86558
	goto loc_82A86558;
loc_82A8630C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r11,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a8632c
	if (!ctx.cr6.lt) goto loc_82A8632C;
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
loc_82A8632C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lbz r11,83(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 83);
	// stb r11,207(r31)
	PPC_STORE_U8(ctx.r31.u32 + 207, ctx.r11.u8);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lbz r9,30(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 30);
	// clrlwi r4,r9,31
	ctx.r4.u64 = ctx.r9.u32 & 0x1;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// cmplwi cr6,r11,28900
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28900, ctx.xer);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// ble cr6,0x82a86390
	if (!ctx.cr6.gt) goto loc_82A86390;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r11.u8);
	// b 0x82a863a4
	goto loc_82A863A4;
loc_82A86390:
	// cmplwi cr6,r11,170
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 170, ctx.xer);
	// ble cr6,0x82a863a0
	if (!ctx.cr6.gt) goto loc_82A863A0;
	// stb r6,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r6.u8);
	// b 0x82a863a4
	goto loc_82A863A4;
loc_82A863A0:
	// stb r10,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r10.u8);
loc_82A863A4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a863bc
	if (ctx.cr6.eq) goto loc_82A863BC;
	// stb r10,206(r31)
	PPC_STORE_U8(ctx.r31.u32 + 206, ctx.r10.u8);
	// li r11,171
	ctx.r11.s64 = 171;
	// li r10,29071
	ctx.r10.s64 = 29071;
	// b 0x82a863c8
	goto loc_82A863C8;
loc_82A863BC:
	// li r11,172
	ctx.r11.s64 = 172;
	// stb r6,206(r31)
	PPC_STORE_U8(ctx.r31.u32 + 206, ctx.r6.u8);
	// li r10,29242
	ctx.r10.s64 = 29242;
loc_82A863C8:
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r11,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r11.u8);
	// bne cr6,0x82a86414
	if (!ctx.cr6.eq) goto loc_82A86414;
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// li r10,-1
	ctx.r10.s64 = -1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicl r11,r11,52,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFFFFFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82a863f4
	if (!ctx.cr6.gt) goto loc_82A863F4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A863F4:
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82a86150
	ctx.lr = 0x82A86400;
	sub_82A86150(ctx, base);
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// lbz r10,82(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 82);
	// stb r10,205(r31)
	PPC_STORE_U8(ctx.r31.u32 + 205, ctx.r10.u8);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
loc_82A86414:
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// addi r9,r31,120
	ctx.r9.s64 = ctx.r31.s64 + 120;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stb r8,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r8.u8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r3,-2
	ctx.r3.s64 = -2;
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// sth r5,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r5.u16);
	// lbz r9,3(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3);
	// lbz r6,6(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 6);
	// lbz r8,5(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 5);
	// lbz r10,7(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 7);
	// rotlwi r5,r10,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r25,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r25.u32);
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// sth r3,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r3.u16);
	// rlwinm r6,r10,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r6,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stw r6,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r6.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// lbz r10,2(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a864bc
	if (ctx.cr0.eq) goto loc_82A864BC;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,-4096
	ctx.r10.s64 = ctx.r10.s64 + -4096;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_82A864BC:
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 + 176;
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A864D0:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a864d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A864D0;
	// lbz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwimi r10,r11,29,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 29) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// beq cr6,0x82a86500
	if (ctx.cr6.eq) goto loc_82A86500;
	// lbz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stb r11,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r11.u8);
loc_82A86500:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791c4
	ctx.lr = 0x82A86508;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// addi r9,r31,216
	ctx.r9.s64 = ctx.r31.s64 + 216;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stb r27,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r27.u8);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x82a85fb8
	ctx.lr = 0x82A86530;
	sub_82A85FB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83179b54
	ctx.lr = 0x82A86538;
	__imp__ObReferenceObject(ctx, base);
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// stw r29,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,216
	ctx.r11.s64 = ctx.r11.s64 + 216;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
loc_82A86558:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A86560"))) PPC_WEAK_FUNC(sub_82A86560);
PPC_FUNC_IMPL(__imp__sub_82A86560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A86568;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83179584
	ctx.lr = 0x82A86578;
	__imp__KeEnterCriticalRegion(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A86580;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,203(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 203);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a865b8
	if (!ctx.cr0.eq) goto loc_82A865B8;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,622
	ctx.r11.u64 = ctx.r11.u64 | 622;
	// stb r10,203(r31)
	PPC_STORE_U8(ctx.r31.u32 + 203, ctx.r10.u8);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x83179634
	ctx.lr = 0x82A865A8;
	__imp__NtClose(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// b 0x82a865c0
	goto loc_82A865C0;
loc_82A865B8:
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,622
	ctx.r30.u64 = ctx.r30.u64 | 622;
loc_82A865C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A865C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82a865d8
	if (ctx.cr6.lt) goto loc_82A865D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83179b74
	ctx.lr = 0x82A865D8;
	__imp__IoDeleteDevice(ctx, base);
loc_82A865D8:
	// bl 0x83179574
	ctx.lr = 0x82A865DC;
	__imp__KeLeaveCriticalRegion(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A865E8"))) PPC_WEAK_FUNC(sub_82A865E8);
PPC_FUNC_IMPL(__imp__sub_82A865E8) {
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
	// lis r31,-31962
	ctx.r31.s64 = -2094661632;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r31,-5588
	ctx.r11.s64 = ctx.r31.s64 + -5588;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// bl 0x831792b4
	ctx.lr = 0x82A86618;
	__imp__KeSetEvent(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-5588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5588);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83179414
	ctx.lr = 0x82A86630;
	__imp__KeWaitForSingleObject(ctx, base);
	// lwz r3,-5588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5588);
	// bl 0x83179424
	ctx.lr = 0x82A86638;
	__imp__ObDereferenceObject(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82A86650"))) PPC_WEAK_FUNC(sub_82A86650);
PPC_FUNC_IMPL(__imp__sub_82A86650) {
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
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lis r4,25414
	ctx.r4.s64 = 1665531904;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// ori r4,r4,29779
	ctx.r4.u64 = ctx.r4.u64 | 29779;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x83179b84
	ctx.lr = 0x82A86684;
	__imp__ExAllocatePoolTypeWithTag(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a866c4
	if (ctx.cr0.eq) goto loc_82A866C4;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A8669C;
	sub_82FA7CF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// beq cr6,0x82a866b0
	if (ctx.cr6.eq) goto loc_82A866B0;
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
loc_82A866B0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_82A866C4:
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

__attribute__((alias("__imp__sub_82A866E0"))) PPC_WEAK_FUNC(sub_82A866E0);
PPC_FUNC_IMPL(__imp__sub_82A866E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A866E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82a86650
	ctx.lr = 0x82A86704;
	sub_82A86650(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82a86840
	if (ctx.cr0.eq) goto loc_82A86840;
	// lbz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// clrlwi r5,r29,26
	ctx.r5.u64 = ctx.r29.u32 & 0x3F;
	// rlwinm r11,r11,26,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFFFF;
	// stb r5,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r5.u8);
	// sth r11,54(r30)
	PPC_STORE_U16(ctx.r30.u32 + 54, ctx.r11.u16);
	// bl 0x82fa77c0
	ctx.lr = 0x82A86730;
	sub_82FA77C0(ctx, base);
	// rlwinm. r11,r29,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a86744
	if (ctx.cr0.eq) goto loc_82A86744;
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,53(r30)
	PPC_STORE_U8(ctx.r30.u32 + 53, ctx.r11.u8);
loc_82A86744:
	// lbz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// rlwinm. r6,r29,0,25,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbz r10,43(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 43);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,45(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// lbz r7,49(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// rotlwi r11,r10,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r10,42(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r7,41(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 41);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r9,47(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// rlwinm r8,r4,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r10,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// stw r4,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r4.u32);
	// rlwinm r8,r8,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// stw r8,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r8.u32);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// stw r5,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r5.u32);
	// beq 0x82a867f0
	if (ctx.cr0.eq) goto loc_82A867F0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a867f0
	if (ctx.cr6.eq) goto loc_82A867F0;
	// stw r9,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r9.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r9,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r9.u32);
	// b 0x82a867f8
	goto loc_82A867F8;
loc_82A867F0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_82A867F8:
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// bne cr6,0x82a86824
	if (!ctx.cr6.eq) goto loc_82A86824;
	// lbz r11,53(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,120
	ctx.r11.s64 = ctx.r26.s64 + 120;
	// bne 0x82a86828
	if (!ctx.cr0.eq) goto loc_82A86828;
loc_82A86824:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A86828:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// stw r9,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r9.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A86840:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8684C"))) PPC_WEAK_FUNC(sub_82A8684C);
PPC_FUNC_IMPL(__imp__sub_82A8684C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A86850"))) PPC_WEAK_FUNC(sub_82A86850);
PPC_FUNC_IMPL(__imp__sub_82A86850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A86858;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82a86650
	ctx.lr = 0x82A86868;
	sub_82A86650(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a86900
	if (ctx.cr0.eq) goto loc_82A86900;
	// lbz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// lhz r11,54(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 54);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stb r5,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r5.u8);
	// sth r11,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r11.u16);
	// bl 0x82fa77c0
	ctx.lr = 0x82A86890;
	sub_82FA77C0(ctx, base);
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a868a8
	if (ctx.cr0.eq) goto loc_82A868A8;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
loc_82A868A8:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r7,64(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r6,68(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r29,48(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// stw r6,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
loc_82A86900:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8690C"))) PPC_WEAK_FUNC(sub_82A8690C);
PPC_FUNC_IMPL(__imp__sub_82A8690C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A86910"))) PPC_WEAK_FUNC(sub_82A86910);
PPC_FUNC_IMPL(__imp__sub_82A86910) {
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
loc_82A86920:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bne 0x82a86970
	if (!ctx.cr0.eq) goto loc_82A86970;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a8694c
	if (ctx.cr6.eq) goto loc_82A8694C;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82A8694C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a86960
	if (ctx.cr6.eq) goto loc_82A86960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82A86960:
	// bl 0x83179b94
	ctx.lr = 0x82A86964;
	__imp__ExFreePool(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a86920
	if (!ctx.cr6.eq) goto loc_82A86920;
loc_82A86970:
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

__attribute__((alias("__imp__sub_82A86984"))) PPC_WEAK_FUNC(sub_82A86984);
PPC_FUNC_IMPL(__imp__sub_82A86984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A86988"))) PPC_WEAK_FUNC(sub_82A86988);
PPC_FUNC_IMPL(__imp__sub_82A86988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A86990;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a86ab0
	if (!ctx.cr0.eq) goto loc_82A86AB0;
	// addic r10,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// subfe r10,r10,r4
	temp.u8 = (~ctx.r10.u32 + ctx.r4.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82a86ab0
	if (ctx.cr6.eq) goto loc_82A86AB0;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a869d8
	if (ctx.cr6.eq) goto loc_82A869D8;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82a86ac0
	goto loc_82A86AC0;
loc_82A869D8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x82a86850
	ctx.lr = 0x82A869EC;
	sub_82A86850(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a86a5c
	if (ctx.cr0.eq) goto loc_82A86A5C;
loc_82A869F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a86a18
	if (ctx.cr6.eq) goto loc_82A86A18;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r3.u32);
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A86A18:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a86a64
	if (!ctx.cr0.eq) goto loc_82A86A64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a86a7c
	if (!ctx.cr6.eq) goto loc_82A86A7C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a86850
	ctx.lr = 0x82A86A44;
	sub_82A86850(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a869f4
	if (!ctx.cr0.eq) goto loc_82A869F4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82a86a5c
	if (ctx.cr6.eq) goto loc_82A86A5C;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a86910
	ctx.lr = 0x82A86A5C;
	sub_82A86910(ctx, base);
loc_82A86A5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a86ac0
	goto loc_82A86AC0;
loc_82A86A64:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bne cr6,0x82a86a74
	if (!ctx.cr6.eq) goto loc_82A86A74;
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
loc_82A86A74:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// b 0x82a86a80
	goto loc_82A86A80;
loc_82A86A7C:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82A86A80:
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r9.u32);
	// stw r10,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r10.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x82a86ac0
	goto loc_82A86AC0;
loc_82A86AB0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_82A86AC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A86AC8"))) PPC_WEAK_FUNC(sub_82A86AC8);
PPC_FUNC_IMPL(__imp__sub_82A86AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A86AD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A86AE4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82a86b14
	goto loc_82A86B14;
loc_82A86AEC:
	// addi r31,r11,-72
	ctx.r31.s64 = ctx.r11.s64 + -72;
	// lhz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lbz r6,-20(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -20);
	// bl 0x83179954
	ctx.lr = 0x82A86B08;
	__imp__RtlCompareStringN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a86b4c
	if (ctx.cr0.eq) goto loc_82A86B4C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
loc_82A86B14:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82a86aec
	if (!ctx.cr6.eq) goto loc_82A86AEC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82a86b54
	if (!ctx.cr6.eq) goto loc_82A86B54;
	// lbz r11,53(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a86b38
	if (ctx.cr0.eq) goto loc_82A86B38;
	// addi r30,r29,64
	ctx.r30.s64 = ctx.r29.s64 + 64;
	// b 0x82a86b44
	goto loc_82A86B44;
loc_82A86B38:
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a86b54
	if (ctx.cr6.eq) goto loc_82A86B54;
loc_82A86B44:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82a86ae4
	goto loc_82A86AE4;
loc_82A86B4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a86b58
	goto loc_82A86B58;
loc_82A86B54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A86B58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A86B60"))) PPC_WEAK_FUNC(sub_82A86B60);
PPC_FUNC_IMPL(__imp__sub_82A86B60) {
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
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a85f48
	ctx.lr = 0x82A86B84;
	sub_82A85F48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a86bc0
	if (ctx.cr0.eq) goto loc_82A86BC0;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x82a86bc4
	goto loc_82A86BC4;
loc_82A86BC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A86BC4:
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

__attribute__((alias("__imp__sub_82A86BD8"))) PPC_WEAK_FUNC(sub_82A86BD8);
PPC_FUNC_IMPL(__imp__sub_82A86BD8) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// and. r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a86c2c
	if (!ctx.cr0.eq) goto loc_82A86C2C;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// clrlwi. r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a86c2c
	if (!ctx.cr0.eq) goto loc_82A86C2C;
	// cmplwi cr6,r5,4096
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4096, ctx.xer);
	// blt cr6,0x82a86c2c
	if (ctx.cr6.lt) goto loc_82A86C2C;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r10,r6,4095
	ctx.r10.s64 = ctx.r6.s64 + 4095;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a86c2c
	if (ctx.cr0.eq) goto loc_82A86C2C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83179254
	ctx.lr = 0x82A86C20;
	__imp__MmQueryAddressProtect(ctx, base);
	// rlwinm. r11,r3,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82a86c30
	if (ctx.cr0.eq) goto loc_82A86C30;
loc_82A86C2C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A86C30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A86C40"))) PPC_WEAK_FUNC(sub_82A86C40);
PPC_FUNC_IMPL(__imp__sub_82A86C40) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82a86cc8
	if (ctx.cr0.eq) goto loc_82A86CC8;
	// cmplwi cr6,r10,40
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 40, ctx.xer);
	// bgt cr6,0x82a86cc8
	if (ctx.cr6.gt) goto loc_82A86CC8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,46
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 46, ctx.xer);
	// bne cr6,0x82a86c84
	if (!ctx.cr6.eq) goto loc_82A86C84;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82a86cc8
	if (ctx.cr6.eq) goto loc_82A86CC8;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82a86c84
	if (!ctx.cr6.eq) goto loc_82A86C84;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x82a86cc8
	if (ctx.cr6.eq) goto loc_82A86CC8;
loc_82A86C84:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82a86cc0
	if (!ctx.cr6.lt) goto loc_82A86CC0;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,-5272
	ctx.r10.s64 = ctx.r10.s64 + -5272;
loc_82A86C94:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r8,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r6,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// and. r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82a86cc8
	if (!ctx.cr0.eq) goto loc_82A86CC8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a86c94
	if (ctx.cr6.lt) goto loc_82A86C94;
loc_82A86CC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A86CC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A86CD0"))) PPC_WEAK_FUNC(sub_82A86CD0);
PPC_FUNC_IMPL(__imp__sub_82A86CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r9,r3,11,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xF;
	// rlwinm r8,r3,16,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x1F;
	// rlwinm r11,r3,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0x7F;
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// sth r8,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r8.u16);
	// rlwinm r10,r3,1,26,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3E;
	// rlwinm r7,r3,21,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0x1F;
	// rlwinm r9,r3,27,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x3F;
	// sth r10,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r10.u16);
	// addi r11,r11,1980
	ctx.r11.s64 = ctx.r11.s64 + 1980;
	// sth r7,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r7.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r9,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r9.u16);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r8,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83179b14
	ctx.lr = 0x82A86D24;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A86D48"))) PPC_WEAK_FUNC(sub_82A86D48);
PPC_FUNC_IMPL(__imp__sub_82A86D48) {
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
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83179784
	ctx.lr = 0x82A86D6C;
	__imp__RtlTimeToTimeFields(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lha r9,82(r1)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 82));
	// lhz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lhz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lhz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// rlwimi r7,r9,5,23,26
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x1E0) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFE1F);
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// rlwinm r8,r8,0,26,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3E;
	// addi r10,r10,-1980
	ctx.r10.s64 = ctx.r10.s64 + -1980;
	// clrlwi r7,r7,23
	ctx.r7.u64 = ctx.r7.u32 & 0x1FF;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// rlwinm r10,r10,25,0,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xFE000000;
	// rlwimi r6,r7,5,0,26
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 5) & 0xFFFFFFE0) | (ctx.r6.u64 & 0xFFFFFFFF0000001F);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwimi r9,r6,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,0,16,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFE00FFFF;
	// cmpwi cr6,r11,1980
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1980, ctx.xer);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// blt cr6,0x82a86ddc
	if (ctx.cr6.lt) goto loc_82A86DDC;
	// cmpwi cr6,r11,2107
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2107, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x82a86de0
	if (!ctx.cr6.gt) goto loc_82A86DE0;
loc_82A86DDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A86DE0:
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

__attribute__((alias("__imp__sub_82A86DF4"))) PPC_WEAK_FUNC(sub_82A86DF4);
PPC_FUNC_IMPL(__imp__sub_82A86DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A86DF8"))) PPC_WEAK_FUNC(sub_82A86DF8);
PPC_FUNC_IMPL(__imp__sub_82A86DF8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,206(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 206);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a86e30
	if (!ctx.cr6.eq) goto loc_82A86E30;
	// li r10,170
	ctx.r10.s64 = 170;
	// divwu. r10,r4,r10
	ctx.r10.u32 = ctx.r4.u32 / ctx.r10.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r10,28900
	ctx.r10.s64 = 28900;
	// divwu. r10,r4,r10
	ctx.r10.u32 = ctx.r4.u32 / ctx.r10.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// slw r10,r9,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// beqlr 
	if (ctx.cr0.eq) return;
	// b 0x82a86e5c
	goto loc_82A86E5C;
loc_82A86E30:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x82a86e6c
	if (!ctx.cr6.eq) goto loc_82A86E6C;
	// li r10,28900
	ctx.r10.s64 = 28900;
	// lis r9,74
	ctx.r9.s64 = 4849664;
	// divwu r10,r4,r10
	ctx.r10.u32 = ctx.r4.u32 / ctx.r10.u32;
	// ori r9,r9,63336
	ctx.r9.u64 = ctx.r9.u64 | 63336;
	// mulli r10,r10,171
	ctx.r10.s64 = ctx.r10.s64 * 171;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// slw r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82A86E5C:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_82A86E6C:
	// li r10,170
	ctx.r10.s64 = 170;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A86E84"))) PPC_WEAK_FUNC(sub_82A86E84);
PPC_FUNC_IMPL(__imp__sub_82A86E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A86E88"))) PPC_WEAK_FUNC(sub_82A86E88);
PPC_FUNC_IMPL(__imp__sub_82A86E88) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,4096
	ctx.r11.s64 = ctx.r5.s64 + 4096;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a86f08
	if (!ctx.cr6.lt) goto loc_82A86F08;
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r5,41
	ctx.r11.s64 = ctx.r5.s64 + 41;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A86EAC:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a86f00
	if (!ctx.cr0.eq) goto loc_82A86F00;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r10,11(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a86f00
	if (!ctx.cr6.gt) goto loc_82A86F00;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwinm r10,r10,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
loc_82A86F00:
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x82a86eac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A86EAC;
loc_82A86F08:
	// rlwinm r7,r4,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r8,r3,128
	ctx.r8.s64 = ctx.r3.s64 + 128;
	// addi r6,r7,64
	ctx.r6.s64 = ctx.r7.s64 + 64;
	// b 0x82a86f60
	goto loc_82A86F60;
loc_82A86F1C:
	// lwz r11,-72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -72);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,53(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a86f60
	if (!ctx.cr0.eq) goto loc_82A86F60;
	// lhz r9,54(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 54);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82a86f60
	if (ctx.cr6.lt) goto loc_82A86F60;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82a86f60
	if (!ctx.cr6.lt) goto loc_82A86F60;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r9,r9,4095
	ctx.r9.s64 = ctx.r9.s64 + 4095;
	// rlwinm r9,r9,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82a86f60
	if (!ctx.cr6.gt) goto loc_82A86F60;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
loc_82A86F60:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82a86f1c
	if (!ctx.cr6.eq) goto loc_82A86F1C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A86F6C"))) PPC_WEAK_FUNC(sub_82A86F6C);
PPC_FUNC_IMPL(__imp__sub_82A86F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A86F70"))) PPC_WEAK_FUNC(sub_82A86F70);
PPC_FUNC_IMPL(__imp__sub_82A86F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A86F78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,170
	ctx.r11.s64 = 170;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// divwu r11,r4,r11
	ctx.r11.u32 = ctx.r4.u32 / ctx.r11.u32;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mulli r11,r11,170
	ctx.r11.s64 = ctx.r11.s64 * 170;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83179814
	ctx.lr = 0x82A86FC0;
	__imp__XeCryptSha(ctx, base);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// srawi r10,r10,12
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A87018"))) PPC_WEAK_FUNC(sub_82A87018);
PPC_FUNC_IMPL(__imp__sub_82A87018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A87020;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r29,32(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r25,r10,20,12,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// rlwinm r28,r11,20,12,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a8707c
	if (!ctx.cr6.eq) goto loc_82A8707C;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a87094
	if (ctx.cr6.eq) goto loc_82A87094;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a87098
	if (!ctx.cr6.eq) goto loc_82A87098;
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82a8708c
	goto loc_82A8708C;
loc_82A8707C:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// bne cr6,0x82a87098
	if (!ctx.cr6.eq) goto loc_82A87098;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
loc_82A8708C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a87098
	if (!ctx.cr6.eq) goto loc_82A87098;
loc_82A87094:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82A87098:
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A870A8;
	sub_82FA77C0(ctx, base);
	// lbz r10,53(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r27,0,31,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r27.u32, 0) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// rlwimi r11,r9,6,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// beq cr6,0x82a870e4
	if (ctx.cr6.eq) goto loc_82A870E4;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a870e4
	if (ctx.cr0.eq) goto loc_82A870E4;
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// b 0x82a870f0
	goto loc_82A870F0;
loc_82A870E4:
	// lbz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// rlwimi r10,r11,0,24,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xC0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF3F);
	// stb r10,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r10.u8);
loc_82A870F0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r8,r25,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 24) & 0xFF;
	// rlwinm r6,r25,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFF;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r7,64(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// rlwinm r3,r28,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF;
	// lwz r5,68(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// rlwinm r10,r28,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFF;
	// stb r8,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r8.u8);
	// rlwinm r8,r29,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF;
	// lhz r11,54(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 54);
	// stb r6,43(r31)
	PPC_STORE_U8(ctx.r31.u32 + 43, ctx.r6.u8);
	// rlwinm r6,r29,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFF;
	// stb r25,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r25.u8);
	// stb r28,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r28.u8);
	// stb r3,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r3.u8);
	// stb r10,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r10.u8);
	// stb r29,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r29.u8);
	// stb r8,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r8.u8);
	// stb r6,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r6.u8);
	// sth r11,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r11.u16);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A87158"))) PPC_WEAK_FUNC(sub_82A87158);
PPC_FUNC_IMPL(__imp__sub_82A87158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A87160;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,80(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A87174;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a87188
	if (ctx.cr6.eq) goto loc_82A87188;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82a872b4
	goto loc_82A872B4;
loc_82A87188:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x82fa7cf0
	ctx.lr = 0x82A87198;
	sub_82FA7CF0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// beq cr6,0x82a872ac
	if (ctx.cr6.eq) goto loc_82A872AC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82a87234
	if (ctx.cr6.eq) goto loc_82A87234;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82a87218
	if (ctx.cr6.eq) goto loc_82A87218;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82a871d0
	if (ctx.cr6.eq) goto loc_82A871D0;
	// lis r28,-16384
	ctx.r28.s64 = -1073741824;
	// ori r28,r28,13
	ctx.r28.u64 = ctx.r28.u64 | 13;
	// b 0x82a872b0
	goto loc_82A872B0;
loc_82A871D0:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r9,40
	ctx.r9.s64 = 40;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x82a87204
	if (!ctx.cr6.lt) goto loc_82A87204;
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r28,r28,5
	ctx.r28.u64 = ctx.r28.u64 | 5;
	// b 0x82a872b0
	goto loc_82A872B0;
loc_82A87204:
	// lis r9,21332
	ctx.r9.s64 = 1398013952;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r9,r9,17987
	ctx.r9.u64 = ctx.r9.u64 | 17987;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// b 0x82a872b0
	goto loc_82A872B0;
loc_82A87218:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r9,61
	ctx.r9.s64 = 61;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lbz r9,207(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 207);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82a872b0
	goto loc_82A872B0;
loc_82A87234:
	// lbz r10,205(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 205);
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82a87274
	if (ctx.cr0.eq) goto loc_82A87274;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a87274
	if (ctx.cr6.lt) goto loc_82A87274;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82a8727c
	goto loc_82A8727C;
loc_82A87274:
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
loc_82A8727C:
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a8728c
	if (ctx.cr6.lt) goto loc_82A8728C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82A8728C:
	// li r10,8
	ctx.r10.s64 = 8;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// li r8,512
	ctx.r8.s64 = 512;
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r8,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r8.u32);
	// b 0x82a872b0
	goto loc_82A872B0;
loc_82A872AC:
	// li r10,17
	ctx.r10.s64 = 17;
loc_82A872B0:
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
loc_82A872B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A872BC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83179ba4
	ctx.lr = 0x82A872CC;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A872D4"))) PPC_WEAK_FUNC(sub_82A872D4);
PPC_FUNC_IMPL(__imp__sub_82A872D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A872D8"))) PPC_WEAK_FUNC(sub_82A872D8);
PPC_FUNC_IMPL(__imp__sub_82A872D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A872E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lwz r31,44(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r29,r11,-5552
	ctx.r29.s64 = ctx.r11.s64 + -5552;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x83179834
	ctx.lr = 0x82A87328;
	__imp__NtReadFile(ctx, base);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x82a87348
	if (!ctx.cr6.eq) goto loc_82A87348;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179684
	ctx.lr = 0x82A87344;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82A87348:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a87364
	if (ctx.cr6.lt) goto loc_82A87364;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a87364
	if (ctx.cr6.eq) goto loc_82A87364;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,389
	ctx.r3.u64 = ctx.r3.u64 | 389;
loc_82A87364:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8736C"))) PPC_WEAK_FUNC(sub_82A8736C);
PPC_FUNC_IMPL(__imp__sub_82A8736C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A87370"))) PPC_WEAK_FUNC(sub_82A87370);
PPC_FUNC_IMPL(__imp__sub_82A87370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A87378;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lwz r31,44(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r29,r11,-5552
	ctx.r29.s64 = ctx.r11.s64 + -5552;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x83179824
	ctx.lr = 0x82A873C0;
	__imp__NtWriteFile(ctx, base);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x82a873e0
	if (!ctx.cr6.eq) goto loc_82A873E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179684
	ctx.lr = 0x82A873DC;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82A873E0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a873fc
	if (ctx.cr6.lt) goto loc_82A873FC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a873fc
	if (ctx.cr6.eq) goto loc_82A873FC;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,389
	ctx.r3.u64 = ctx.r3.u64 | 389;
loc_82A873FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A87404"))) PPC_WEAK_FUNC(sub_82A87404);
PPC_FUNC_IMPL(__imp__sub_82A87404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A87408"))) PPC_WEAK_FUNC(sub_82A87408);
PPC_FUNC_IMPL(__imp__sub_82A87408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A87410;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lwz r31,44(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r29,r11,-5552
	ctx.r29.s64 = ctx.r11.s64 + -5552;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x83179bb4
	ctx.lr = 0x82A87458;
	__imp__NtWriteFileGather(ctx, base);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x82a87478
	if (!ctx.cr6.eq) goto loc_82A87478;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179684
	ctx.lr = 0x82A87474;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82A87478:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a87494
	if (ctx.cr6.lt) goto loc_82A87494;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a87494
	if (ctx.cr6.eq) goto loc_82A87494;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,389
	ctx.r3.u64 = ctx.r3.u64 | 389;
loc_82A87494:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8749C"))) PPC_WEAK_FUNC(sub_82A8749C);
PPC_FUNC_IMPL(__imp__sub_82A8749C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A874A0"))) PPC_WEAK_FUNC(sub_82A874A0);
PPC_FUNC_IMPL(__imp__sub_82A874A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A874A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a8755c
	if (!ctx.cr6.eq) goto loc_82A8755C;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r25,r3,16
	ctx.r25.s64 = ctx.r3.s64 + 16;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// lis r28,-31962
	ctx.r28.s64 = -2094661632;
	// addi r27,r11,-7300
	ctx.r27.s64 = ctx.r11.s64 + -7300;
loc_82A874D4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83179414
	ctx.lr = 0x82A874EC;
	__imp__KeWaitForSingleObject(ctx, base);
	// b 0x82a87520
	goto loc_82A87520;
loc_82A874F0:
	// lwz r11,-5552(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5552);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-5552(r28)
	PPC_STORE_U32(ctx.r28.u32 + -5552, ctx.r11.u32);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A87520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A87520:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179274
	ctx.lr = 0x82A87528;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x83179294
	ctx.lr = 0x82A87548;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82a874f0
	if (!ctx.cr6.eq) goto loc_82A874F0;
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a874d4
	if (ctx.cr6.eq) goto loc_82A874D4;
loc_82A8755C:
	// addi r30,r26,4
	ctx.r30.s64 = ctx.r26.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179274
	ctx.lr = 0x82A87568;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r31,8(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r29,r26,8
	ctx.r29.s64 = ctx.r26.s64 + 8;
	// b 0x82a87598
	goto loc_82A87598;
loc_82A87574:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// ori r11,r11,622
	ctx.r11.u64 = ctx.r11.u64 | 622;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r11.u32);
	// bl 0x83179ba4
	ctx.lr = 0x82A8758C;
	__imp__IoCompleteRequest(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179274
	ctx.lr = 0x82A87594;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82A87598:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x83179294
	ctx.lr = 0x82A875B4;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82a87574
	if (!ctx.cr6.eq) goto loc_82A87574;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A875C4"))) PPC_WEAK_FUNC(sub_82A875C4);
PPC_FUNC_IMPL(__imp__sub_82A875C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A875C8"))) PPC_WEAK_FUNC(sub_82A875C8);
PPC_FUNC_IMPL(__imp__sub_82A875C8) {
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
	// lwz r10,256(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,-5588
	ctx.r31.s64 = ctx.r11.s64 + -5588;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a87604
	if (ctx.cr6.eq) goto loc_82A87604;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,622
	ctx.r3.u64 = ctx.r3.u64 | 622;
	// b 0x82a87690
	goto loc_82A87690;
loc_82A87604:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a8764c
	if (!ctx.cr6.eq) goto loc_82A8764C;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r10,-7300
	ctx.r10.s64 = ctx.r10.s64 + -7300;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A87648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82a8768c
	goto loc_82A8768C;
loc_82A8764C:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x83179274
	ctx.lr = 0x82A87654;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r9,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r9.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x83179294
	ctx.lr = 0x82A8767C;
	__imp__KfReleaseSpinLock(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x831792b4
	ctx.lr = 0x82A8768C;
	__imp__KeSetEvent(ctx, base);
loc_82A8768C:
	// li r3,259
	ctx.r3.s64 = 259;
loc_82A87690:
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

__attribute__((alias("__imp__sub_82A876A8"))) PPC_WEAK_FUNC(sub_82A876A8);
PPC_FUNC_IMPL(__imp__sub_82A876A8) {
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
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r9,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r9.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lis r9,1024
	ctx.r9.s64 = 67108864;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// beq cr6,0x82a87700
	if (ctx.cr6.eq) goto loc_82A87700;
	// ori r9,r9,1706
	ctx.r9.u64 = ctx.r9.u64 | 1706;
	// b 0x82a87704
	goto loc_82A87704;
loc_82A87700:
	// ori r9,r9,1738
	ctx.r9.u64 = ctx.r9.u64 | 1738;
loc_82A87704:
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r11,29856
	ctx.r7.s64 = ctx.r11.s64 + 29856;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831796b4
	ctx.lr = 0x82A8772C;
	__imp__ExCreateThread(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a87740
	if (ctx.cr0.lt) goto loc_82A87740;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831793d4
	ctx.lr = 0x82A87740;
	__imp__KeSetBasePriorityThread(ctx, base);
loc_82A87740:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82A8775C"))) PPC_WEAK_FUNC(sub_82A8775C);
PPC_FUNC_IMPL(__imp__sub_82A8775C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A87760"))) PPC_WEAK_FUNC(sub_82A87760);
PPC_FUNC_IMPL(__imp__sub_82A87760) {
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
	// stw r4,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82a877a0
	if (!ctx.cr6.lt) goto loc_82A877A0;
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a877a0
	if (ctx.cr6.eq) goto loc_82A877A0;
	// lwz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A87798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
loc_82A877A0:
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

__attribute__((alias("__imp__sub_82A877B4"))) PPC_WEAK_FUNC(sub_82A877B4);
PPC_FUNC_IMPL(__imp__sub_82A877B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A877B8"))) PPC_WEAK_FUNC(sub_82A877B8);
PPC_FUNC_IMPL(__imp__sub_82A877B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// lhz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// sth r11,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,92
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 92, ctx.xer);
	// bne cr6,0x82a877f8
	if (!ctx.cr6.eq) goto loc_82A877F8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A877F8:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x82a87810
	goto loc_82A87810;
loc_82A87800:
	// lbzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,92
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 92, ctx.xer);
	// beq cr6,0x82a87818
	if (ctx.cr6.eq) goto loc_82A87818;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82A87810:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a87800
	if (ctx.cr6.lt) goto loc_82A87800;
loc_82A87818:
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// sth r7,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r7.u16);
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
	// sth r10,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A87860"))) PPC_WEAK_FUNC(sub_82A87860);
PPC_FUNC_IMPL(__imp__sub_82A87860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A87868;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r26,4(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82a87974
	if (!ctx.cr6.lt) goto loc_82A87974;
	// subf r30,r31,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_82A87898:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a87938
	if (ctx.cr6.eq) goto loc_82A87938;
	// cmplwi cr6,r3,128
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 128, ctx.xer);
	// blt cr6,0x82a87938
	if (ctx.cr6.lt) goto loc_82A87938;
	// cmplwi cr6,r3,192
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 192, ctx.xer);
	// blt cr6,0x82a87988
	if (ctx.cr6.lt) goto loc_82A87988;
	// cmplwi cr6,r3,224
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 224, ctx.xer);
	// bge cr6,0x82a878f0
	if (!ctx.cr6.lt) goto loc_82A878F0;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// blt cr6,0x82a87988
	if (ctx.cr6.lt) goto loc_82A87988;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bgt cr6,0x82a87988
	if (ctx.cr6.gt) goto loc_82A87988;
	// rlwimi r11,r3,6,21,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 6) & 0x7C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF83F);
	// clrlwi r3,r11,21
	ctx.r3.u64 = ctx.r11.u32 & 0x7FF;
	// b 0x82a87938
	goto loc_82A87938;
loc_82A878F0:
	// cmplwi cr6,r3,240
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 240, ctx.xer);
	// bge cr6,0x82a87988
	if (!ctx.cr6.lt) goto loc_82A87988;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82a87988
	if (ctx.cr6.lt) goto loc_82A87988;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bgt cr6,0x82a87988
	if (ctx.cr6.gt) goto loc_82A87988;
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// bgt cr6,0x82a87988
	if (ctx.cr6.gt) goto loc_82A87988;
	// rlwimi r11,r3,6,22,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 6) & 0x3C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC3F);
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// rlwimi r10,r11,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82A87938:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82a8794c
	if (ctx.cr6.eq) goto loc_82A8794C;
	// cmplwi cr6,r3,46
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 46, ctx.xer);
	// bne cr6,0x82a87988
	if (!ctx.cr6.eq) goto loc_82A87988;
	// li r25,0
	ctx.r25.s64 = 0;
loc_82A8794C:
	// cmplwi cr6,r3,42
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 42, ctx.xer);
	// bne cr6,0x82a8795c
	if (!ctx.cr6.eq) goto loc_82A8795C;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82a87960
	goto loc_82A87960;
loc_82A8795C:
	// bl 0x83179bc4
	ctx.lr = 0x82A87960;
	__imp__RtlUpcaseUnicodeChar(ctx, base);
loc_82A87960:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// blt cr6,0x82a87898
	if (ctx.cr6.lt) goto loc_82A87898;
loc_82A87974:
	// subf r11,r26,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r26.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r11.u16);
loc_82A87980:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A87988:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a87980
	goto loc_82A87980;
}

__attribute__((alias("__imp__sub_82A87990"))) PPC_WEAK_FUNC(sub_82A87990);
PPC_FUNC_IMPL(__imp__sub_82A87990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A87998;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a879e0
	if (ctx.cr6.eq) goto loc_82A879E0;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a879e0
	if (ctx.cr0.eq) goto loc_82A879E0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82a879d8
	if (!ctx.cr6.eq) goto loc_82A879D8;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,42
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 42, ctx.xer);
	// beq cr6,0x82a879e0
	if (ctx.cr6.eq) goto loc_82A879E0;
loc_82A879D8:
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82a879e4
	goto loc_82A879E4;
loc_82A879E0:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82A879E4:
	// bl 0x83179bd4
	ctx.lr = 0x82A879E8;
	__imp__ObIsTitleObject(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lis r4,25924
	ctx.r4.s64 = 1698955264;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r4,r4,28489
	ctx.r4.u64 = ctx.r4.u64 | 28489;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x83179b84
	ctx.lr = 0x82A87A04;
	__imp__ExAllocatePoolTypeWithTag(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a87a18
	if (!ctx.cr0.eq) goto loc_82A87A18;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,154
	ctx.r3.u64 = ctx.r3.u64 | 154;
	// b 0x82a87a6c
	goto loc_82A87A6C;
loc_82A87A18:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// beq cr6,0x82a87a64
	if (ctx.cr6.eq) goto loc_82A87A64;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82a87860
	ctx.lr = 0x82A87A48;
	sub_82A87860(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a87a64
	if (!ctx.cr0.eq) goto loc_82A87A64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179b94
	ctx.lr = 0x82A87A58;
	__imp__ExFreePool(ctx, base);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// b 0x82a87a6c
	goto loc_82A87A6C;
loc_82A87A64:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A87A6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A87A74"))) PPC_WEAK_FUNC(sub_82A87A74);
PPC_FUNC_IMPL(__imp__sub_82A87A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A87A78"))) PPC_WEAK_FUNC(sub_82A87A78);
PPC_FUNC_IMPL(__imp__sub_82A87A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A87A80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a87a98
	if (!ctx.cr6.eq) goto loc_82A87A98;
loc_82A87A90:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a87b60
	goto loc_82A87B60;
loc_82A87A98:
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// add r27,r4,r5
	ctx.r27.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82a87b4c
	goto loc_82A87B4C;
loc_82A87AB0:
	// lhz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplwi cr6,r29,42
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 42, ctx.xer);
	// bne cr6,0x82a87b0c
	if (!ctx.cr6.eq) goto loc_82A87B0C;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82a87b68
	if (ctx.cr6.eq) goto loc_82A87B68;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a87af0
	if (ctx.cr6.eq) goto loc_82A87AF0;
loc_82A87AD4:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82a87b4c
	if (ctx.cr6.eq) goto loc_82A87B4C;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x82a87ad4
	if (!ctx.cr6.eq) goto loc_82A87AD4;
	// b 0x82a87b4c
	goto loc_82A87B4C;
loc_82A87AF0:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82a87b4c
	if (ctx.cr6.eq) goto loc_82A87B4C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x82a87af0
	if (!ctx.cr6.eq) goto loc_82A87AF0;
	// b 0x82a87b4c
	goto loc_82A87B4C;
loc_82A87B0C:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82a87a90
	if (ctx.cr6.eq) goto loc_82A87A90;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a87b28
	if (ctx.cr6.eq) goto loc_82A87B28;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x82a87b30
	goto loc_82A87B30;
loc_82A87B28:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82A87B30:
	// cmplwi cr6,r29,63
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 63, ctx.xer);
	// beq cr6,0x82a87b4c
	if (ctx.cr6.eq) goto loc_82A87B4C;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82a87b4c
	if (ctx.cr6.eq) goto loc_82A87B4C;
	// bl 0x83179bc4
	ctx.lr = 0x82A87B44;
	__imp__RtlUpcaseUnicodeChar(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82a87a90
	if (!ctx.cr6.eq) goto loc_82A87A90;
loc_82A87B4C:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82a87ab0
	if (ctx.cr6.lt) goto loc_82A87AB0;
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82A87B60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82A87B68:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a87b60
	goto loc_82A87B60;
}

__attribute__((alias("__imp__sub_82A87B70"))) PPC_WEAK_FUNC(sub_82A87B70);
PPC_FUNC_IMPL(__imp__sub_82A87B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A87B78;
	__savegprlr_23(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r11,r4,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// lbz r9,7(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r25,0(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r30,r9,30
	ctx.r30.u64 = ctx.r9.u32 & 0x3;
	// bl 0x82a85d78
	ctx.lr = 0x82A87BA4;
	sub_82A85D78(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a87c48
	if (!ctx.cr6.eq) goto loc_82A87C48;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r30,1
	ctx.r30.s64 = 1;
	// lbz r29,6(r27)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r27.u32 + 6);
	// lbz r10,201(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 201);
	// add r24,r11,r25
	ctx.r24.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r23,48(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a87c60
	if (ctx.cr6.eq) goto loc_82A87C60;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
loc_82A87BD0:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r23
	ctx.r28.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a87c34
	if (!ctx.cr0.eq) goto loc_82A87C34;
	// lbz r11,7(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a87c34
	if (ctx.cr0.eq) goto loc_82A87C34;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r9,r30,r25
	ctx.r9.u64 = ctx.r30.u64 + ctx.r25.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82a87c34
	if (!ctx.cr6.eq) goto loc_82A87C34;
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a87c34
	if (!ctx.cr0.eq) goto loc_82A87C34;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a85d78
	ctx.lr = 0x82A87C18;
	sub_82A85D78(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r11,r29,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 12) & 0xFFFFF000;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// stwu r11,4(r26)
	ea = 4 + ctx.r26.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r26.u32 = ea;
	// beq cr6,0x82a87c60
	if (ctx.cr6.eq) goto loc_82A87C60;
loc_82A87C34:
	// lbz r29,6(r28)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6);
	// lbz r11,201(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 201);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a87bd0
	if (!ctx.cr6.eq) goto loc_82A87BD0;
	// b 0x82a87c60
	goto loc_82A87C60;
loc_82A87C48:
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a86df8
	ctx.lr = 0x82A87C58;
	sub_82A86DF8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A87C60:
	// lbz r11,7(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rldicl r11,r11,12,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0xFFFFFFFFFFF;
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x82a87c98
	if (!ctx.cr6.eq) goto loc_82A87C98;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a87370
	ctx.lr = 0x82A87C94;
	sub_82A87370(ctx, base);
	// b 0x82a87ca4
	goto loc_82A87CA4;
loc_82A87C98:
	// rlwinm r5,r30,12,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFFFF000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a87408
	ctx.lr = 0x82A87CA4;
	sub_82A87408(ctx, base);
loc_82A87CA4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a87cbc
	if (!ctx.cr6.lt) goto loc_82A87CBC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a87760
	ctx.lr = 0x82A87CBC;
	sub_82A87760(ctx, base);
loc_82A87CBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A87CC8"))) PPC_WEAK_FUNC(sub_82A87CC8);
PPC_FUNC_IMPL(__imp__sub_82A87CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A87CD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,201(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 201);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r4,6(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6);
loc_82A87CEC:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a87d28
	if (!ctx.cr0.eq) goto loc_82A87D28;
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a87d28
	if (ctx.cr0.eq) goto loc_82A87D28;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a87d28
	if (ctx.cr0.eq) goto loc_82A87D28;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a87b70
	ctx.lr = 0x82A87D20;
	sub_82A87B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a87d3c
	if (ctx.cr0.lt) goto loc_82A87D3C;
loc_82A87D28:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82a87d38
	if (ctx.cr6.eq) goto loc_82A87D38;
	// lbz r4,6(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// b 0x82a87cec
	goto loc_82A87CEC;
loc_82A87D38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A87D3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A87D44"))) PPC_WEAK_FUNC(sub_82A87D44);
PPC_FUNC_IMPL(__imp__sub_82A87D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A87D48"))) PPC_WEAK_FUNC(sub_82A87D48);
PPC_FUNC_IMPL(__imp__sub_82A87D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A87D50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,201(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 201);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r30,6(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// b 0x82a87d84
	goto loc_82A87D84;
loc_82A87D78:
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a87df4
	if (ctx.cr6.eq) goto loc_82A87DF4;
	// lbz r30,6(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
loc_82A87D84:
	// rotlwi r10,r30,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82a87d78
	if (!ctx.cr0.eq) goto loc_82A87D78;
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a87dcc
	if (ctx.cr0.eq) goto loc_82A87DCC;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne 0x82a87dc0
	if (!ctx.cr0.eq) goto loc_82A87DC0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a87b70
	ctx.lr = 0x82A87DBC;
	sub_82A87B70(ctx, base);
	// b 0x82a87dc4
	goto loc_82A87DC4;
loc_82A87DC0:
	// bl 0x82a87cc8
	ctx.lr = 0x82A87DC4;
	sub_82A87CC8(ctx, base);
loc_82A87DC4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a87e0c
	if (ctx.cr6.lt) goto loc_82A87E0C;
loc_82A87DCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a85c30
	ctx.lr = 0x82A87DE4;
	sub_82A85C30(ctx, base);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a87e0c
	goto loc_82A87E0C;
loc_82A87DF4:
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,229
	ctx.r4.u64 = ctx.r4.u64 | 229;
	// bl 0x82a87760
	ctx.lr = 0x82A87E04;
	sub_82A87760(ctx, base);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,229
	ctx.r3.u64 = ctx.r3.u64 | 229;
loc_82A87E0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A87E14"))) PPC_WEAK_FUNC(sub_82A87E14);
PPC_FUNC_IMPL(__imp__sub_82A87E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A87E18"))) PPC_WEAK_FUNC(sub_82A87E18);
PPC_FUNC_IMPL(__imp__sub_82A87E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A87E20;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// bl 0x82a87d48
	ctx.lr = 0x82A87E48;
	sub_82A87D48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a87fd4
	if (ctx.cr0.lt) goto loc_82A87FD4;
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// blt cr6,0x82a87e94
	if (ctx.cr6.lt) goto loc_82A87E94;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// bgt cr6,0x82a87e94
	if (ctx.cr6.gt) goto loc_82A87E94;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r9,20(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-5284
	ctx.r10.s64 = ctx.r10.s64 + -5284;
	// rlwinm r26,r9,2,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// divwu r10,r28,r11
	ctx.r10.u32 = ctx.r28.u32 / ctx.r11.u32;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// subf r28,r11,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r11.s64;
	// b 0x82a87e98
	goto loc_82A87E98;
loc_82A87E94:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82A87E98:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82a87eac
	if (!ctx.cr6.eq) goto loc_82A87EAC;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x82a87ebc
	goto loc_82A87EBC;
loc_82A87EAC:
	// addi r5,r24,-1
	ctx.r5.s64 = ctx.r24.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a86df8
	ctx.lr = 0x82A87EBC;
	sub_82A86DF8(ctx, base);
loc_82A87EBC:
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + ctx.r26.u64;
	// lwz r8,52(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// rlwinm r9,r27,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 12) & 0xFFFFF000;
	// ld r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// rldicl r11,r11,12,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0xFFFFFFFFFFF;
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a872d8
	ctx.lr = 0x82A87EF0;
	sub_82A872D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82a87f0c
	if (!ctx.cr0.lt) goto loc_82A87F0C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a87760
	ctx.lr = 0x82A87F04;
	sub_82A87760(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a87fd4
	goto loc_82A87FD4;
loc_82A87F0C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82a87f88
	if (ctx.cr6.eq) goto loc_82A87F88;
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83179814
	ctx.lr = 0x82A87F38;
	__imp__XeCryptSha(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r8,r25,20
	ctx.r8.s64 = ctx.r25.s64 + 20;
loc_82A87F44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a87f64
	if (!ctx.cr0.eq) goto loc_82A87F64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82a87f44
	if (!ctx.cr6.eq) goto loc_82A87F44;
loc_82A87F64:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82a87f88
	if (ctx.cr0.eq) goto loc_82A87F88;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// bl 0x82a87760
	ctx.lr = 0x82A87F7C;
	sub_82A87760(ctx, base);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,50
	ctx.r3.u64 = ctx.r3.u64 | 50;
	// b 0x82a87fd4
	goto loc_82A87FD4;
loc_82A87F88:
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// bl 0x82a85c30
	ctx.lr = 0x82A87FA4;
	sub_82A85C30(ctx, base);
	// li r11,8064
	ctx.r11.s64 = 8064;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// clrlwi r10,r24,30
	ctx.r10.u64 = ctx.r24.u32 & 0x3;
	// lbz r8,7(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// rlwimi r11,r26,5,26,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 5) & 0x20) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// andi. r8,r8,220
	ctx.r8.u64 = ctx.r8.u64 & 220;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
loc_82A87FD4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A87FDC"))) PPC_WEAK_FUNC(sub_82A87FDC);
PPC_FUNC_IMPL(__imp__sub_82A87FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A87FE0"))) PPC_WEAK_FUNC(sub_82A87FE0);
PPC_FUNC_IMPL(__imp__sub_82A87FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A87FE8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82a85cd0
	ctx.lr = 0x82A8800C;
	sub_82A85CD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a8802c
	if (!ctx.cr0.eq) goto loc_82A8802C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a87d48
	ctx.lr = 0x82A88024;
	sub_82A87D48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a880c8
	if (ctx.cr0.lt) goto loc_82A880C8;
loc_82A8802C:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x82a88064
	if (ctx.cr6.lt) goto loc_82A88064;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// bgt cr6,0x82a88064
	if (ctx.cr6.gt) goto loc_82A88064;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-5284
	ctx.r10.s64 = ctx.r10.s64 + -5284;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// divwu r10,r29,r11
	ctx.r10.u32 = ctx.r29.u32 / ctx.r11.u32;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_82A88064:
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r26,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 12) & 0xFFFFF000;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A88084;
	sub_82FA7CF0(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// bl 0x82a85c30
	ctx.lr = 0x82A880A0;
	sub_82A85C30(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r10,r27,0,30,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r27.u32, 0) & 0x3) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r10,r11,6,0,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_82A880C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A880D0"))) PPC_WEAK_FUNC(sub_82A880D0);
PPC_FUNC_IMPL(__imp__sub_82A880D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A880D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lbz r26,202(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 202);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r31,r11,-5552
	ctx.r31.s64 = ctx.r11.s64 + -5552;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82a85f48
	ctx.lr = 0x82A8811C;
	sub_82A85F48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a88164
	if (!ctx.cr0.eq) goto loc_82A88164;
loc_82A88124:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// addi r24,r11,-5284
	ctx.r24.s64 = ctx.r11.s64 + -5284;
	// beq cr6,0x82a8817c
	if (ctx.cr6.eq) goto loc_82A8817C;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a85f48
	ctx.lr = 0x82A88154;
	sub_82A85F48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a88124
	if (ctx.cr0.eq) goto loc_82A88124;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82a881e8
	if (!ctx.cr6.eq) goto loc_82A881E8;
loc_82A88164:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// b 0x82a881dc
	goto loc_82A881DC;
loc_82A8817C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r28,r30,176
	ctx.r28.s64 = ctx.r30.s64 + 176;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82A8818C:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a87e18
	ctx.lr = 0x82A881A8;
	sub_82A87E18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a881e0
	if (ctx.cr0.lt) goto loc_82A881E0;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a881cc
	if (ctx.cr0.eq) goto loc_82A881CC;
	// lbz r11,7(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,7(r28)
	PPC_STORE_U8(ctx.r28.u32 + 7, ctx.r11.u8);
loc_82A881CC:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82a881ec
	if (!ctx.cr6.eq) goto loc_82A881EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_82A881DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A881E0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82A881E8:
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82A881EC:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,170
	ctx.r10.s64 = 170;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r27,r11
	ctx.r11.u32 = ctx.r27.u32 / ctx.r11.u32;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,170
	ctx.r10.s64 = ctx.r10.s64 * 170;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A88228;
	sub_82FA77C0(ctx, base);
	// lbz r11,7(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a88244
	if (!ctx.cr0.eq) goto loc_82A88244;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82A88244:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x82a8818c
	goto loc_82A8818C;
}

__attribute__((alias("__imp__sub_82A88278"))) PPC_WEAK_FUNC(sub_82A88278);
PPC_FUNC_IMPL(__imp__sub_82A88278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A88280;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lbz r28,202(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 202);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r11,-5284
	ctx.r25.s64 = ctx.r11.s64 + -5284;
loc_82A882AC:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82a882f0
	if (!ctx.cr6.eq) goto loc_82A882F0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82a882f0
	if (ctx.cr6.eq) goto loc_82A882F0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a87fe0
	ctx.lr = 0x82A882D4;
	sub_82A87FE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a884c8
	if (ctx.cr0.lt) goto loc_82A884C8;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,31,0,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x82a88338
	goto loc_82A88338;
loc_82A882F0:
	// addi r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a85f48
	ctx.lr = 0x82A8830C;
	sub_82A85F48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a88338
	if (!ctx.cr0.eq) goto loc_82A88338;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a87e18
	ctx.lr = 0x82A88330;
	sub_82A87E18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a884c8
	if (ctx.cr0.lt) goto loc_82A884C8;
loc_82A88338:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a883f4
	if (!ctx.cr0.eq) goto loc_82A883F4;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lbz r10,7(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwimi r10,r11,5,26,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// rlwimi r9,r11,30,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stb r10,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r10.u8);
	// li r10,170
	ctx.r10.s64 = 170;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bne cr6,0x82a883cc
	if (!ctx.cr6.eq) goto loc_82A883CC;
	// addi r11,r7,20
	ctx.r11.s64 = ctx.r7.s64 + 20;
loc_82A8838C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82a883b4
	if (ctx.cr6.eq) goto loc_82A883B4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82a883c0
	if (!ctx.cr6.eq) goto loc_82A883C0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// b 0x82a883bc
	goto loc_82A883BC;
loc_82A883B4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
loc_82A883BC:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A883C0:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bdnz 0x82a8838c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A8838C;
	// b 0x82a883f4
	goto loc_82A883F4;
loc_82A883CC:
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
loc_82A883D0:
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// clrlwi r10,r6,1
	ctx.r10.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// rlwinm r9,r6,17,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0xFFFF;
	// rlwinm r6,r6,0,1,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40000000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stwu r10,24(r11)
	ea = 24 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a883d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A883D0;
loc_82A883F4:
	// lbz r11,7(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// ori r11,r11,68
	ctx.r11.u64 = ctx.r11.u64 | 68;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r11,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r11.u8);
	// lbz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 204);
	// rlwimi r10,r11,3,28,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0x8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF7);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r11.u8);
	// bne 0x82a88458
	if (!ctx.cr0.eq) goto loc_82A88458;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r11.u8);
	// beq cr6,0x82a88488
	if (ctx.cr6.eq) goto loc_82A88488;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r10,r10,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r10.s64;
	// srawi r10,r10,12
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82A88458:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a88488
	if (ctx.cr6.eq) goto loc_82A88488;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r10,r10,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r10.s64;
	// srawi r10,r10,12
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82A88488:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82a884fc
	if (ctx.cr6.eq) goto loc_82A884FC;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,170
	ctx.r10.s64 = 170;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r26,r11
	ctx.r11.u32 = ctx.r26.u32 / ctx.r11.u32;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,170
	ctx.r10.s64 = ctx.r10.s64 * 170;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r30,r11,r7
	ctx.r30.u64 = ctx.r11.u64 + ctx.r7.u64;
	// b 0x82a882ac
	goto loc_82A882AC;
loc_82A884C8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a88504
	if (ctx.cr6.eq) goto loc_82A88504;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x82a88504
	goto loc_82A88504;
loc_82A884FC:
	// stw r7,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A88504:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8850C"))) PPC_WEAK_FUNC(sub_82A8850C);
PPC_FUNC_IMPL(__imp__sub_82A8850C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A88510"))) PPC_WEAK_FUNC(sub_82A88510);
PPC_FUNC_IMPL(__imp__sub_82A88510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A88518;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82a85f48
	ctx.lr = 0x82A8853C;
	sub_82A85F48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a88604
	if (!ctx.cr0.eq) goto loc_82A88604;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a880d0
	ctx.lr = 0x82A88558;
	sub_82A880D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a88608
	if (ctx.cr0.lt) goto loc_82A88608;
	// li r11,170
	ctx.r11.s64 = 170;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// divwu r11,r30,r11
	ctx.r11.u32 = ctx.r30.u32 / ctx.r11.u32;
	// li r5,24
	ctx.r5.s64 = 24;
	// mulli r11,r11,170
	ctx.r11.s64 = ctx.r11.s64 * 170;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A88588;
	sub_82FA77C0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// rlwinm r11,r9,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82a885e4
	if (ctx.cr6.eq) goto loc_82A885E4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82a885e4
	if (ctx.cr6.eq) goto loc_82A885E4;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// bl 0x82a87760
	ctx.lr = 0x82A885D8;
	sub_82A87760(ctx, base);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,50
	ctx.r3.u64 = ctx.r3.u64 | 50;
	// b 0x82a88608
	goto loc_82A88608;
loc_82A885E4:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a87e18
	ctx.lr = 0x82A88600;
	sub_82A87E18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A88604:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82A88608:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A88610"))) PPC_WEAK_FUNC(sub_82A88610);
PPC_FUNC_IMPL(__imp__sub_82A88610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A88618;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82a85f48
	ctx.lr = 0x82A8863C;
	sub_82A85F48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a88668
	if (!ctx.cr0.eq) goto loc_82A88668;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a87e18
	ctx.lr = 0x82A88660;
	sub_82A87E18(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a88678
	if (ctx.cr0.lt) goto loc_82A88678;
loc_82A88668:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
loc_82A88678:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A88684"))) PPC_WEAK_FUNC(sub_82A88684);
PPC_FUNC_IMPL(__imp__sub_82A88684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A88688"))) PPC_WEAK_FUNC(sub_82A88688);
PPC_FUNC_IMPL(__imp__sub_82A88688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A88690;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82a85ea0
	ctx.lr = 0x82A886B0;
	sub_82A85EA0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82a85f48
	ctx.lr = 0x82A886CC;
	sub_82A85F48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a886f8
	if (!ctx.cr0.eq) goto loc_82A886F8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a87e18
	ctx.lr = 0x82A886F0;
	sub_82A87E18(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82a8870c
	if (ctx.cr0.lt) goto loc_82A8870C;
loc_82A886F8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
loc_82A8870C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A88718"))) PPC_WEAK_FUNC(sub_82A88718);
PPC_FUNC_IMPL(__imp__sub_82A88718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A88720;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,201(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 201);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bne cr6,0x82a88754
	if (!ctx.cr6.eq) goto loc_82A88754;
	// lbz r11,202(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 202);
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// b 0x82a88758
	goto loc_82A88758;
loc_82A88754:
	// li r25,0
	ctx.r25.s64 = 0;
loc_82A88758:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82A8875C:
	// lbz r4,6(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 6);
loc_82A88760:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82a887a8
	if (!ctx.cr6.eq) goto loc_82A887A8;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a887a8
	if (ctx.cr0.eq) goto loc_82A887A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82a887a8
	if (ctx.cr6.lt) goto loc_82A887A8;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82a887a8
	if (ctx.cr6.gt) goto loc_82A887A8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a87b70
	ctx.lr = 0x82A887A0;
	sub_82A87B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a887c8
	if (ctx.cr0.lt) goto loc_82A887C8;
loc_82A887A8:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82a887b8
	if (ctx.cr6.eq) goto loc_82A887B8;
	// lbz r4,6(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// b 0x82a88760
	goto loc_82A88760;
loc_82A887B8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82a8875c
	if (!ctx.cr6.gt) goto loc_82A8875C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A887C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A887D0"))) PPC_WEAK_FUNC(sub_82A887D0);
PPC_FUNC_IMPL(__imp__sub_82A887D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A887D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a887fc
	if (ctx.cr6.eq) goto loc_82A887FC;
	// bl 0x83179b94
	ctx.lr = 0x82A887FC;
	__imp__ExFreePool(ctx, base);
loc_82A887FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A88804;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a88814
	if (ctx.cr6.eq) goto loc_82A88814;
	// bl 0x82a86910
	ctx.lr = 0x82A88814;
	sub_82A86910(ctx, base);
loc_82A88814:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A8882C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179ba4
	ctx.lr = 0x82A88840;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A88848"))) PPC_WEAK_FUNC(sub_82A88848);
PPC_FUNC_IMPL(__imp__sub_82A88848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A88850;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,206(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 206);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r11,14(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// lwz r31,24(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bne 0x82a8888c
	if (!ctx.cr0.eq) goto loc_82A8888C;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,34
	ctx.r3.u64 = ctx.r3.u64 | 34;
	// b 0x82a888f8
	goto loc_82A888F8;
loc_82A8888C:
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// addi r6,r29,56
	ctx.r6.s64 = ctx.r29.s64 + 56;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x82a888ac
	if (!ctx.cr0.eq) goto loc_82A888AC;
	// bl 0x83179bf4
	ctx.lr = 0x82A888A8;
	__imp__IoSetShareAccess(ctx, base);
	// b 0x82a888bc
	goto loc_82A888BC;
loc_82A888AC:
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x83179be4
	ctx.lr = 0x82A888B4;
	__imp__IoCheckShareAccess(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a888f8
	if (ctx.cr0.lt) goto loc_82A888F8;
loc_82A888BC:
	// lbz r11,53(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 53);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82a86988
	ctx.lr = 0x82A888CC;
	sub_82A86988(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r30,128
	ctx.r10.s64 = ctx.r30.s64 + 128;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// lwz r9,128(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
loc_82A888F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A88900"))) PPC_WEAK_FUNC(sub_82A88900);
PPC_FUNC_IMPL(__imp__sub_82A88900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-5588
	ctx.r3.s64 = ctx.r11.s64 + -5588;
	// b 0x82a876a8
	sub_82A876A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A88910"))) PPC_WEAK_FUNC(sub_82A88910);
PPC_FUNC_IMPL(__imp__sub_82A88910) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r8,r11,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
loc_82A88924:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82a88940
	goto loc_82A88940;
loc_82A8892C:
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// lhz r7,54(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 54);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82a88978
	if (ctx.cr6.eq) goto loc_82A88978;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_82A88940:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a8892c
	if (!ctx.cr6.eq) goto loc_82A8892C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a88964
	if (ctx.cr0.eq) goto loc_82A88964;
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// b 0x82a88970
	goto loc_82A88970;
loc_82A88964:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82A88970:
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x82a88924
	goto loc_82A88924;
loc_82A88978:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82a87018
	sub_82A87018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A88984"))) PPC_WEAK_FUNC(sub_82A88984);
PPC_FUNC_IMPL(__imp__sub_82A88984) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A88988"))) PPC_WEAK_FUNC(sub_82A88988);
PPC_FUNC_IMPL(__imp__sub_82A88988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A88990;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a889b8
	if (ctx.cr0.eq) goto loc_82A889B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r29,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r29.u64);
	// b 0x82a889cc
	goto loc_82A889CC;
loc_82A889B8:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82a86cd0
	ctx.lr = 0x82A889C0;
	sub_82A86CD0(ctx, base);
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x82a86cd0
	ctx.lr = 0x82A889CC;
	sub_82A86CD0(ctx, base);
loc_82A889CC:
	// std r3,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r3.u64);
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
	// std r3,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r3.u64);
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a889f8
	if (ctx.cr0.eq) goto loc_82A889F8;
	// li r11,16
	ctx.r11.s64 = 16;
	// std r29,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r29.u64);
	// std r29,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r29.u64);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x82a88a10
	goto loc_82A88A10;
loc_82A889F8:
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
loc_82A88A10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A88A18"))) PPC_WEAK_FUNC(sub_82A88A18);
PPC_FUNC_IMPL(__imp__sub_82A88A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A88A20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,80(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r29,24(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x831791a4
	ctx.lr = 0x82A88A3C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,136(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a88a50
	if (ctx.cr6.eq) goto loc_82A88A50;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x82a88ae0
	goto loc_82A88AE0;
loc_82A88A50:
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a88a68
	if (ctx.cr0.eq) goto loc_82A88A68;
	// lis r26,-16384
	ctx.r26.s64 = -1073741824;
	// ori r26,r26,296
	ctx.r26.u64 = ctx.r26.u64 | 296;
	// b 0x82a88ae0
	goto loc_82A88AE0;
loc_82A88A68:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82fa7cf0
	ctx.lr = 0x82A88A78;
	sub_82FA7CF0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82a88acc
	if (ctx.cr6.eq) goto loc_82A88ACC;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82a88abc
	if (ctx.cr6.eq) goto loc_82A88ABC;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x82a88aa8
	if (ctx.cr6.eq) goto loc_82A88AA8;
	// lis r26,-16384
	ctx.r26.s64 = -1073741824;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r26,r26,13
	ctx.r26.u64 = ctx.r26.u64 | 13;
	// b 0x82a88adc
	goto loc_82A88ADC;
loc_82A88AA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82a88988
	ctx.lr = 0x82A88AB4;
	sub_82A88988(ctx, base);
	// li r11,56
	ctx.r11.s64 = 56;
	// b 0x82a88adc
	goto loc_82A88ADC;
loc_82A88ABC:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ld r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 20);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// b 0x82a88ad8
	goto loc_82A88AD8;
loc_82A88ACC:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
loc_82A88AD8:
	// li r11,8
	ctx.r11.s64 = 8;
loc_82A88ADC:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82A88AE0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A88AE8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179ba4
	ctx.lr = 0x82A88AF8;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A88B00"))) PPC_WEAK_FUNC(sub_82A88B00);
PPC_FUNC_IMPL(__imp__sub_82A88B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A88B08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A88B18;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a88b2c
	if (ctx.cr6.eq) goto loc_82A88B2C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x82a88b40
	goto loc_82A88B40;
loc_82A88B2C:
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a88718
	ctx.lr = 0x82A88B3C;
	sub_82A88718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A88B40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A88B48;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83179ba4
	ctx.lr = 0x82A88B58;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A88B60"))) PPC_WEAK_FUNC(sub_82A88B60);
PPC_FUNC_IMPL(__imp__sub_82A88B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x82A88B68;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r23,r5,0,0,19
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFF000;
	// addi r22,r11,-5552
	ctx.r22.s64 = ctx.r11.s64 + -5552;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// clrlwi r17,r5,20
	ctx.r17.u64 = ctx.r5.u32 & 0xFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// stw r11,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r11.u32);
	// blt cr6,0x82a88bb4
	if (ctx.cr6.lt) goto loc_82A88BB4;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,17
	ctx.r3.u64 = ctx.r3.u64 | 17;
	// b 0x82a88e5c
	goto loc_82A88E5C;
loc_82A88BB4:
	// li r16,0
	ctx.r16.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82a88bc4
	if (ctx.cr6.eq) goto loc_82A88BC4;
	// stw r16,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r16.u32);
loc_82A88BC4:
	// lwz r26,40(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r24,48(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r23,r26
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82a88c28
	if (ctx.cr6.lt) goto loc_82A88C28;
	// add r11,r29,r26
	ctx.r11.u64 = ctx.r29.u64 + ctx.r26.u64;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a88c28
	if (!ctx.cr6.lt) goto loc_82A88C28;
	// subf r10,r26,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r26.s64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// rlwinm r11,r10,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// subf r10,r17,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r17.s64;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// stw r10,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82a88c20
	if (ctx.cr6.eq) goto loc_82A88C20;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x82a86b60
	ctx.lr = 0x82A88C14;
	sub_82A86B60(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_82A88C20:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a88e5c
	goto loc_82A88E5C;
loc_82A88C28:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82a88c48
	if (!ctx.cr6.eq) goto loc_82A88C48;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_82A88C34:
	// subfic r10,r17,4096
	ctx.xer.ca = ctx.r17.u32 <= 4096;
	ctx.r10.s64 = 4096 - ctx.r17.s64;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r10.u32);
	// b 0x82a88e5c
	goto loc_82A88E5C;
loc_82A88C48:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r23,4096
	ctx.r10.s64 = ctx.r23.s64 + 4096;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a88c64
	if (!ctx.cr6.eq) goto loc_82A88C64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a88c34
	if (!ctx.cr6.eq) goto loc_82A88C34;
loc_82A88C64:
	// cmplw cr6,r23,r26
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82a88c84
	if (!ctx.cr6.gt) goto loc_82A88C84;
	// rlwinm r10,r29,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0xFFFFF;
	// add r11,r29,r26
	ctx.r11.u64 = ctx.r29.u64 + ctx.r26.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// addi r28,r11,-4096
	ctx.r28.s64 = ctx.r11.s64 + -4096;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// b 0x82a88c98
	goto loc_82A88C98;
loc_82A88C84:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// li r29,4096
	ctx.r29.s64 = 4096;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
loc_82A88C98:
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
loc_82A88CA4:
	// li r8,170
	ctx.r8.s64 = 170;
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// divwu r8,r30,r8
	ctx.r8.u32 = ctx.r30.u32 / ctx.r8.u32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r8,r8,170
	ctx.r8.s64 = ctx.r8.s64 * 170;
	// stw r11,20(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20, ctx.r11.u32);
	// subf r27,r8,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r8.s64;
	// subf r25,r27,r30
	ctx.r25.s64 = ctx.r30.s64 - ctx.r27.s64;
	// beq cr6,0x82a88cfc
	if (ctx.cr6.eq) goto loc_82A88CFC;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a88d5c
	if (ctx.cr6.eq) goto loc_82A88D5C;
	// lwz r11,52(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r10,48(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82A88CFC:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a85f48
	ctx.lr = 0x82A88D14;
	sub_82A85F48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne 0x82a88d4c
	if (!ctx.cr0.eq) goto loc_82A88D4C;
	// beq cr6,0x82a88d2c
	if (ctx.cr6.eq) goto loc_82A88D2C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_82A88D2C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a880d0
	ctx.lr = 0x82A88D40;
	sub_82A880D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a88e5c
	if (ctx.cr0.lt) goto loc_82A88E5C;
	// b 0x82a88d54
	goto loc_82A88D54;
loc_82A88D4C:
	// beq cr6,0x82a88d54
	if (ctx.cr6.eq) goto loc_82A88D54;
	// stw r16,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r16.u32);
loc_82A88D54:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82A88D5C:
	// mulli r11,r27,24
	ctx.r11.s64 = ctx.r27.s64 * 24;
	// lwz r8,156(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 156);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82a88db4
	if (!ctx.cr6.lt) goto loc_82A88DB4;
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4096
	ctx.r28.s64 = ctx.r28.s64 + 4096;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82a88d90
	if (!ctx.cr6.eq) goto loc_82A88D90;
	// addi r29,r29,4096
	ctx.r29.s64 = ctx.r29.s64 + 4096;
	// b 0x82a88d9c
	goto loc_82A88D9C;
loc_82A88D90:
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// li r29,4096
	ctx.r29.s64 = 4096;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_82A88D9C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82a88ca4
	if (!ctx.cr6.eq) goto loc_82A88CA4;
	// addi r10,r28,4096
	ctx.r10.s64 = ctx.r28.s64 + 4096;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// b 0x82a88e00
	goto loc_82A88E00;
loc_82A88DB4:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,50
	ctx.r3.u64 = ctx.r3.u64 | 50;
	// b 0x82a88e2c
	goto loc_82A88E2C;
loc_82A88DC0:
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cmplwi cr6,r11,169
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 169, ctx.xer);
	// bge cr6,0x82a88e10
	if (!ctx.cr6.lt) goto loc_82A88E10;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwz r8,156(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 156);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82a88e10
	if (!ctx.cr6.lt) goto loc_82A88E10;
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82a88e10
	if (!ctx.cr6.eq) goto loc_82A88E10;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// addi r29,r29,4096
	ctx.r29.s64 = ctx.r29.s64 + 4096;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82A88E00:
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82a88dc0
	if (!ctx.cr6.eq) goto loc_82A88DC0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82A88E10:
	// subf r11,r17,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r17.s64;
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// stw r24,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r24.u32);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
loc_82A88E2C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a88e5c
	if (ctx.cr6.eq) goto loc_82A88E5C;
	// lwz r11,52(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r10,48(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82A88E5C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A88E64"))) PPC_WEAK_FUNC(sub_82A88E64);
PPC_FUNC_IMPL(__imp__sub_82A88E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A88E68"))) PPC_WEAK_FUNC(sub_82A88E68);
PPC_FUNC_IMPL(__imp__sub_82A88E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A88E70;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lhz r21,54(r4)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r4.u32 + 54);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a88eac
	if (ctx.cr0.eq) goto loc_82A88EAC;
	// lhz r11,26(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 26);
	// lhz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r29,r10,6
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// rlwinm r25,r11,6,0,25
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x82a88eb4
	goto loc_82A88EB4;
loc_82A88EAC:
	// lwz r25,84(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82A88EB4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a88ecc
	if (ctx.cr6.eq) goto loc_82A88ECC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a88ecc
	if (!ctx.cr6.lt) goto loc_82A88ECC;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82A88ECC:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r24,-1
	ctx.r24.s64 = -1;
loc_82A88EE0:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82a88f74
	if (!ctx.cr6.eq) goto loc_82A88F74;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a88f20
	if (ctx.cr6.eq) goto loc_82A88F20;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// li r30,0
	ctx.r30.s64 = 0;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82A88F20:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82a89048
	if (!ctx.cr6.lt) goto loc_82A89048;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r28,56
	ctx.r4.s64 = ctx.r28.s64 + 56;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a88b60
	ctx.lr = 0x82A88F44;
	sub_82A88B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a88fe0
	if (ctx.cr0.lt) goto loc_82A88FE0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a88510
	ctx.lr = 0x82A88F5C;
	sub_82A88510(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a88fe0
	if (ctx.cr0.lt) goto loc_82A88FE0;
	// clrlwi r11,r29,20
	ctx.r11.u64 = ctx.r29.u32 & 0xFFF;
	// addi r27,r30,4096
	ctx.r27.s64 = ctx.r30.s64 + 4096;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82A88F74:
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// clrlwi. r5,r11,26
	ctx.r5.u64 = ctx.r11.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82a88f90
	if (!ctx.cr0.eq) goto loc_82A88F90;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x82a8903c
	if (!ctx.cr6.eq) goto loc_82A8903C;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// b 0x82a8903c
	goto loc_82A8903C;
loc_82A88F90:
	// lhz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x82a8903c
	if (!ctx.cr6.eq) goto loc_82A8903C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a8901c
	if (ctx.cr6.eq) goto loc_82A8901C;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a88fc8
	if (ctx.cr6.eq) goto loc_82A88FC8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x82a87a78
	ctx.lr = 0x82A88FC0;
	sub_82A87A78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a8903c
	if (ctx.cr0.eq) goto loc_82A8903C;
loc_82A88FC8:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A88FD8;
	sub_82FA77C0(ctx, base);
	// stw r29,64(r22)
	PPC_STORE_U32(ctx.r22.u32 + 64, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A88FE0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a89010
	if (ctx.cr6.eq) goto loc_82A89010;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82A89010:
	// stw r24,68(r22)
	PPC_STORE_U32(ctx.r22.u32 + 68, ctx.r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82A8901C:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lhz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83179954
	ctx.lr = 0x82A89034;
	__imp__RtlCompareStringN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a88fc8
	if (ctx.cr0.eq) goto loc_82A88FC8;
loc_82A8903C:
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// b 0x82a88ee0
	goto loc_82A88EE0;
loc_82A89048:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,52
	ctx.r3.u64 = ctx.r3.u64 | 52;
	// b 0x82a88fe0
	goto loc_82A88FE0;
}

__attribute__((alias("__imp__sub_82A89054"))) PPC_WEAK_FUNC(sub_82A89054);
PPC_FUNC_IMPL(__imp__sub_82A89054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89058"))) PPC_WEAK_FUNC(sub_82A89058);
PPC_FUNC_IMPL(__imp__sub_82A89058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A89060;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a85f48
	ctx.lr = 0x82A89084;
	sub_82A85F48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a890b8
	if (!ctx.cr0.eq) goto loc_82A890B8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82a8909c
	if (!ctx.cr6.eq) goto loc_82A8909C;
loc_82A89094:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a89148
	goto loc_82A89148;
loc_82A8909C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a880d0
	ctx.lr = 0x82A890B0;
	sub_82A880D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a89094
	if (ctx.cr0.lt) goto loc_82A89094;
loc_82A890B8:
	// li r10,170
	ctx.r10.s64 = 170;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// divwu r8,r31,r10
	ctx.r8.u32 = ctx.r31.u32 / ctx.r10.u32;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mulli r8,r8,170
	ctx.r8.s64 = ctx.r8.s64 * 170;
	// subf r8,r8,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r8.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// divwu r6,r31,r10
	ctx.r6.u32 = ctx.r31.u32 / ctx.r10.u32;
	// b 0x82a890fc
	goto loc_82A890FC;
loc_82A890E0:
	// divwu r8,r3,r10
	ctx.r8.u32 = ctx.r3.u32 / ctx.r10.u32;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82a89114
	if (!ctx.cr6.eq) goto loc_82A89114;
	// divwu r8,r3,r10
	ctx.r8.u32 = ctx.r3.u32 / ctx.r10.u32;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mulli r8,r8,170
	ctx.r8.s64 = ctx.r8.s64 * 170;
	// subf r8,r8,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r8.s64;
loc_82A890FC:
	// mulli r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 * 24;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,20(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// clrlwi r3,r8,8
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFFFF;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a890e0
	if (!ctx.cr6.eq) goto loc_82A890E0;
loc_82A89114:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// beq cr6,0x82a89148
	if (ctx.cr6.eq) goto loc_82A89148;
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
loc_82A89148:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A89150"))) PPC_WEAK_FUNC(sub_82A89150);
PPC_FUNC_IMPL(__imp__sub_82A89150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A89158;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r26,156(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// add r27,r26,r4
	ctx.r27.u64 = ctx.r26.u64 + ctx.r4.u64;
	// bgt cr6,0x82a8935c
	if (ctx.cr6.gt) goto loc_82A8935C;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a8935c
	if (ctx.cr6.gt) goto loc_82A8935C;
	// li r10,170
	ctx.r10.s64 = 170;
	// addi r11,r27,169
	ctx.r11.s64 = ctx.r27.s64 + 169;
	// li r28,0
	ctx.r28.s64 = 0;
	// divwu r9,r11,r10
	ctx.r9.u32 = ctx.r11.u32 / ctx.r10.u32;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x82a891a8
	if (!ctx.cr6.gt) goto loc_82A891A8;
	// addi r11,r9,169
	ctx.r11.s64 = ctx.r9.s64 + 169;
	// li r28,1
	ctx.r28.s64 = 1;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// b 0x82a891ac
	goto loc_82A891AC;
loc_82A891A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A891AC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82a891c4
	if (!ctx.cr6.gt) goto loc_82A891C4;
	// addi r8,r11,169
	ctx.r8.s64 = ctx.r11.s64 + 169;
	// li r28,2
	ctx.r28.s64 = 2;
	// divwu r10,r8,r10
	ctx.r10.u32 = ctx.r8.u32 / ctx.r10.u32;
	// b 0x82a891c8
	goto loc_82A891C8;
loc_82A891C4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A891C8:
	// lbz r8,205(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 205);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x82a89218
	if (!ctx.cr0.eq) goto loc_82A89218;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// li r7,20
	ctx.r7.s64 = 20;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rldicl r11,r11,12,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0xFFFFFFFFFFF;
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x83179944
	ctx.lr = 0x82A89210;
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a89364
	if (ctx.cr0.lt) goto loc_82A89364;
loc_82A89218:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a89340
	if (ctx.cr6.eq) goto loc_82A89340;
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82a89340
	if (!ctx.cr6.lt) goto loc_82A89340;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a88718
	ctx.lr = 0x82A8923C;
	sub_82A88718(ctx, base);
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82a89340
	if (ctx.cr6.gt) goto loc_82A89340;
loc_82A8924C:
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a87fe0
	ctx.lr = 0x82A89268;
	sub_82A87FE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a89364
	if (ctx.cr0.lt) goto loc_82A89364;
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r31,176
	ctx.r9.s64 = ctx.r31.s64 + 176;
	// addi r8,r30,-4
	ctx.r8.s64 = ctx.r30.s64 + -4;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A89288:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82a89288
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A89288;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwimi r11,r7,0,0,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFF8000) | (ctx.r11.u64 & 0xFFFFFFFF00007FFF);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r4,r11,15,2,16
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 15) & 0x3FFF8000) | (ctx.r4.u64 & 0xFFFFFFFFC0007FFF);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r24,196(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwimi r24,r11,0,1,31
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFFFFFF) | (ctx.r24.u64 & 0xFFFFFFFF80000000);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r24.u32);
	// lwz r24,196(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwimi r11,r24,0,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 0) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r26,4080(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4080, ctx.r26.u32);
	// bl 0x83179814
	ctx.lr = 0x82A892F8;
	__imp__XeCryptSha(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwimi r11,r8,31,0,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 31) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// ble cr6,0x82a8924c
	if (!ctx.cr6.gt) goto loc_82A8924C;
loc_82A89340:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stb r28,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r28.u8);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// b 0x82a89364
	goto loc_82A89364;
loc_82A8935C:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,127
	ctx.r3.u64 = ctx.r3.u64 | 127;
loc_82A89364:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8936C"))) PPC_WEAK_FUNC(sub_82A8936C);
PPC_FUNC_IMPL(__imp__sub_82A8936C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89370"))) PPC_WEAK_FUNC(sub_82A89370);
PPC_FUNC_IMPL(__imp__sub_82A89370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A89378;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a88278
	ctx.lr = 0x82A89398;
	sub_82A88278(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a894a4
	if (ctx.cr0.lt) goto loc_82A894A4;
	// lwz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplwi cr6,r10,170
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 170, ctx.xer);
	// ble cr6,0x82a893b4
	if (!ctx.cr6.gt) goto loc_82A893B4;
	// li r10,170
	ctx.r10.s64 = 170;
loc_82A893B4:
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r6,160(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// bge cr6,0x82a8947c
	if (!ctx.cr6.lt) goto loc_82A8947C;
	// addi r7,r28,20
	ctx.r7.s64 = ctx.r28.s64 + 20;
loc_82A893E0:
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r3,r3,0,0,1
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a8946c
	if (!ctx.cr0.eq) goto loc_82A8946C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a89440
	if (ctx.cr6.eq) goto loc_82A89440;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwimi r3,r11,0,0,7
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFF000000) | (ctx.r3.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r3,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r3.u32);
	// beq cr6,0x82a89440
	if (ctx.cr6.eq) goto loc_82A89440;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82A89440:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// oris r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 3221225472;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ble cr6,0x82a89458
	if (!ctx.cr6.gt) goto loc_82A89458;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82A89458:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r7,-20
	ctx.r10.s64 = ctx.r7.s64 + -20;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// beq 0x82a8947c
	if (ctx.cr0.eq) goto loc_82A8947C;
loc_82A8946C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82a893e0
	if (ctx.cr6.lt) goto loc_82A893E0;
loc_82A8947C:
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r6,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r6.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x82a89494
	if (!ctx.cr6.gt) goto loc_82A89494;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
loc_82A89494:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_82A894A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A894AC"))) PPC_WEAK_FUNC(sub_82A894AC);
PPC_FUNC_IMPL(__imp__sub_82A894AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A894B0"))) PPC_WEAK_FUNC(sub_82A894B0);
PPC_FUNC_IMPL(__imp__sub_82A894B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A894B8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-5284
	ctx.r11.s64 = ctx.r11.s64 + -5284;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r25,-4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x82a88278
	ctx.lr = 0x82A894EC;
	sub_82A88278(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a89684
	if (ctx.cr0.lt) goto loc_82A89684;
	// lwz r11,156(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r7,r30,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// lwz r11,4080(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4080);
	// ble cr6,0x82a89510
	if (!ctx.cr6.gt) goto loc_82A89510;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_82A89510:
	// subf. r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a895b0
	if (ctx.cr0.eq) goto loc_82A895B0;
	// divwu r9,r11,r25
	ctx.r9.u32 = ctx.r11.u32 / ctx.r25.u32;
	// li r8,170
	ctx.r8.s64 = 170;
	// divwu r6,r11,r25
	ctx.r6.u32 = ctx.r11.u32 / ctx.r25.u32;
	// divwu r8,r9,r8
	ctx.r8.u32 = ctx.r9.u32 / ctx.r8.u32;
	// mullw r6,r6,r25
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r25.s32);
	// mulli r8,r8,170
	ctx.r8.s64 = ctx.r8.s64 * 170;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// twllei r25,0
	if (ctx.r25.u32 <= 0) __builtin_debugtrap();
	// mulli r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 * 24;
	// twllei r25,0
	if (ctx.r25.u32 <= 0) __builtin_debugtrap();
	// subf. r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 + ctx.r22.u64;
	// beq 0x82a89578
	if (ctx.cr0.eq) goto loc_82A89578;
	// subf. r11,r11,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a89578
	if (ctx.cr0.eq) goto loc_82A89578;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a89560
	if (!ctx.cr6.gt) goto loc_82A89560;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A89560:
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwimi r11,r8,0,0,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFF8000) | (ctx.r11.u64 & 0xFFFFFFFF00007FFF);
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
loc_82A89578:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a895a8
	if (ctx.cr6.eq) goto loc_82A895A8;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_82A89584:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a89594
	if (!ctx.cr6.gt) goto loc_82A89594;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A89594:
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r8,r11,0,17,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF8000);
	// stwu r8,24(r9)
	ea = 24 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bne 0x82a89584
	if (!ctx.cr0.eq) goto loc_82A89584;
loc_82A895A8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r7,4080(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4080, ctx.r7.u32);
loc_82A895B0:
	// add r26,r11,r30
	ctx.r26.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82a89658
	if (!ctx.cr6.lt) goto loc_82A89658;
	// addi r28,r22,20
	ctx.r28.s64 = ctx.r22.s64 + 20;
loc_82A895C4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi. r29,r11,17
	ctx.r29.u64 = ctx.r11.u32 & 0x7FFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82a89648
	if (ctx.cr0.eq) goto loc_82A89648;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82a895e8
	if (ctx.cr6.eq) goto loc_82A895E8;
	// subf r11,r30,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r30.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82a895ec
	if (!ctx.cr6.eq) goto loc_82A895EC;
loc_82A895E8:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82A895EC:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x82a89608
	if (!ctx.cr6.eq) goto loc_82A89608;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// bl 0x82a89370
	ctx.lr = 0x82A89604;
	sub_82A89370(ctx, base);
	// b 0x82a89618
	goto loc_82A89618;
loc_82A89608:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r5,r23,-1
	ctx.r5.s64 = ctx.r23.s64 + -1;
	// bl 0x82a894b0
	ctx.lr = 0x82A89618;
	sub_82A894B0(ctx, base);
loc_82A89618:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a89658
	if (ctx.cr6.lt) goto loc_82A89658;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82a89630
	if (!ctx.cr6.gt) goto loc_82A89630;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A89630:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf. r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwimi r11,r10,0,0,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFF8000) | (ctx.r11.u64 & 0xFFFFFFFF00007FFF);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// beq 0x82a89658
	if (ctx.cr0.eq) goto loc_82A89658;
loc_82A89648:
	// add r30,r25,r30
	ctx.r30.u64 = ctx.r25.u64 + ctx.r30.u64;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82a895c4
	if (ctx.cr6.lt) goto loc_82A895C4;
loc_82A89658:
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r10,52(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// subf r10,r10,r22
	ctx.r10.s64 = ctx.r22.s64 - ctx.r10.s64;
	// srawi r10,r10,12
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82A89684:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8968C"))) PPC_WEAK_FUNC(sub_82A8968C);
PPC_FUNC_IMPL(__imp__sub_82A8968C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89690"))) PPC_WEAK_FUNC(sub_82A89690);
PPC_FUNC_IMPL(__imp__sub_82A89690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A89698;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x82a896c8
	if (!ctx.cr6.eq) goto loc_82A896C8;
	// lis r28,255
	ctx.r28.s64 = 16711680;
	// ori r28,r28,65535
	ctx.r28.u64 = ctx.r28.u64 | 65535;
loc_82A896C8:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82a896fc
	if (ctx.cr6.lt) goto loc_82A896FC;
	// beq cr6,0x82a896ec
	if (ctx.cr6.eq) goto loc_82A896EC;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bge cr6,0x82a896fc
	if (!ctx.cr6.lt) goto loc_82A896FC;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82a89704
	goto loc_82A89704;
loc_82A896EC:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82a89704
	goto loc_82A89704;
loc_82A896FC:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82A89704:
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a89724
	if (!ctx.cr6.lt) goto loc_82A89724;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a89150
	ctx.lr = 0x82A8971C;
	sub_82A89150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a898a4
	if (ctx.cr0.lt) goto loc_82A898A4;
loc_82A89724:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x82a89734
	if (!ctx.cr6.eq) goto loc_82A89734;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a898a4
	goto loc_82A898A4;
loc_82A89734:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r8,160(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// li r7,1
	ctx.r7.s64 = 1;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r7,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r7.u8);
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r29.u64);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// std r29,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r29.u64);
	// stw r29,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r29.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82a89790
	if (!ctx.cr0.eq) goto loc_82A89790;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// bl 0x82a89370
	ctx.lr = 0x82A8978C;
	sub_82A89370(ctx, base);
	// b 0x82a897a0
	goto loc_82A897A0;
loc_82A89790:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82a894b0
	ctx.lr = 0x82A897A0;
	sub_82A894B0(ctx, base);
loc_82A897A0:
	// lbz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r29,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r29.u8);
	// beq 0x82a897cc
	if (ctx.cr0.eq) goto loc_82A897CC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A897BC:
	// lbz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82a897bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A897BC;
loc_82A897CC:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a89810
	if (ctx.cr6.eq) goto loc_82A89810;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r28,r10,0,0,7
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFF000000) | (ctx.r28.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82A89810:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82a8988c
	if (ctx.cr6.eq) goto loc_82A8988C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a88278
	ctx.lr = 0x82A89830;
	sub_82A88278(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a898a4
	if (ctx.cr0.lt) goto loc_82A898A4;
	// li r11,170
	ctx.r11.s64 = 170;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// divwu r11,r27,r11
	ctx.r11.u32 = ctx.r27.u32 / ctx.r11.u32;
	// mulli r11,r11,170
	ctx.r11.s64 = ctx.r11.s64 * 170;
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r8,r9,0,8,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFF000000);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82A8988C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82a898a4
	if (ctx.cr6.eq) goto loc_82A898A4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82A898A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A898AC"))) PPC_WEAK_FUNC(sub_82A898AC);
PPC_FUNC_IMPL(__imp__sub_82A898AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A898B0"))) PPC_WEAK_FUNC(sub_82A898B0);
PPC_FUNC_IMPL(__imp__sub_82A898B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82A898B8;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a898f4
	if (ctx.cr6.lt) goto loc_82A898F4;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r23,r11,50
	ctx.r23.u64 = ctx.r11.u64 | 50;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82a87760
	ctx.lr = 0x82A898F0;
	sub_82A87760(ctx, base);
	// b 0x82a899bc
	goto loc_82A899BC;
loc_82A898F4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a88278
	ctx.lr = 0x82A89908;
	sub_82A88278(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt 0x82a899bc
	if (ctx.cr0.lt) goto loc_82A899BC;
	// li r27,170
	ctx.r27.s64 = 170;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// li r24,0
	ctx.r24.s64 = 0;
	// divwu r22,r31,r27
	ctx.r22.u32 = ctx.r31.u32 / ctx.r27.u32;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
loc_82A8992C:
	// divwu r11,r31,r27
	ctx.r11.u32 = ctx.r31.u32 / ctx.r27.u32;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r11,170
	ctx.r11.s64 = ctx.r11.s64 * 170;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi r31,r11,8
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFFFF;
	// beq cr6,0x82a899c8
	if (ctx.cr6.eq) goto loc_82A899C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82a899f8
	if (ctx.cr6.eq) goto loc_82A899F8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82a899f8
	if (ctx.cr6.eq) goto loc_82A899F8;
loc_82A89974:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r23,r11,50
	ctx.r23.u64 = ctx.r11.u64 | 50;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82a87760
	ctx.lr = 0x82A89988;
	sub_82A87760(ctx, base);
loc_82A89988:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// subf r11,r11,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stw r24,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r24.u32);
	// stw r25,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r25.u32);
	// stw r31,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r31.u32);
loc_82A899BC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
loc_82A899C8:
	// rlwinm r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82a899e4
	if (!ctx.cr6.eq) goto loc_82A899E4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// rlwimi r11,r10,30,0,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x82a899f4
	goto loc_82A899F4;
loc_82A899E4:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82a89974
	if (!ctx.cr6.eq) goto loc_82A89974;
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82A899F4:
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
loc_82A899F8:
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a89a1c
	if (ctx.cr6.eq) goto loc_82A89A1C;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82fa77c0
	ctx.lr = 0x82A89A18;
	sub_82FA77C0(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82A89A1C:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82a89988
	if (ctx.cr6.eq) goto loc_82A89988;
	// divwu r11,r31,r27
	ctx.r11.u32 = ctx.r31.u32 / ctx.r27.u32;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82a8992c
	if (ctx.cr6.eq) goto loc_82A8992C;
	// b 0x82a89988
	goto loc_82A89988;
}

__attribute__((alias("__imp__sub_82A89A34"))) PPC_WEAK_FUNC(sub_82A89A34);
PPC_FUNC_IMPL(__imp__sub_82A89A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89A38"))) PPC_WEAK_FUNC(sub_82A89A38);
PPC_FUNC_IMPL(__imp__sub_82A89A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82A89A40;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-5284
	ctx.r11.s64 = ctx.r11.s64 + -5284;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// lwz r9,156(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// lwz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// lwz r28,-4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a89a9c
	if (ctx.cr6.lt) goto loc_82A89A9C;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// bl 0x82a87760
	ctx.lr = 0x82A89A90;
	sub_82A87760(ctx, base);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,50
	ctx.r3.u64 = ctx.r3.u64 | 50;
	// b 0x82a89c28
	goto loc_82A89C28;
loc_82A89A9C:
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a88278
	ctx.lr = 0x82A89AB0;
	sub_82A88278(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a89c28
	if (ctx.cr0.lt) goto loc_82A89C28;
	// lwz r23,92(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// divwu r17,r31,r21
	ctx.r17.u32 = ctx.r31.u32 / ctx.r21.u32;
	// twllei r21,0
	if (ctx.r21.u32 <= 0) __builtin_debugtrap();
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
loc_82A89ACC:
	// divwu r11,r31,r28
	ctx.r11.u32 = ctx.r31.u32 / ctx.r28.u32;
	// li r10,170
	ctx.r10.s64 = 170;
	// twllei r28,0
	if (ctx.r28.u32 <= 0) __builtin_debugtrap();
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// mulli r10,r10,170
	ctx.r10.s64 = ctx.r10.s64 * 170;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82a89b14
	if (!ctx.cr6.eq) goto loc_82A89B14;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82a898b0
	ctx.lr = 0x82A89B10;
	sub_82A898B0(ctx, base);
	// b 0x82a89b2c
	goto loc_82A89B2C;
loc_82A89B14:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r27,-1
	ctx.r5.s64 = ctx.r27.s64 + -1;
	// bl 0x82a89a38
	ctx.lr = 0x82A89B2C;
	sub_82A89A38(ctx, base);
loc_82A89B2C:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a89bec
	if (ctx.cr6.lt) goto loc_82A89BEC;
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// divwu r8,r31,r28
	ctx.r8.u32 = ctx.r31.u32 / ctx.r28.u32;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// twllei r28,0
	if (ctx.r28.u32 <= 0) __builtin_debugtrap();
	// rlwinm r11,r9,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r10,r10,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// mullw r8,r8,r28
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r8,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r8.s64;
	// rlwimi r11,r9,0,17,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFC0007FFF) | (ctx.r11.u64 & 0x3FFF8000);
	// subf r4,r10,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r10.s64;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwimi r10,r11,0,0,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFF8000) | (ctx.r10.u64 & 0xFFFFFFFF00007FFF);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82a89b8c
	if (!ctx.cr6.gt) goto loc_82A89B8C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A89B8C:
	// rlwinm r9,r10,17,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x7FFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82a89ba0
	if (!ctx.cr6.eq) goto loc_82A89BA0;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82a89bac
	if (ctx.cr6.eq) goto loc_82A89BAC;
loc_82A89BA0:
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a89bb8
	if (!ctx.cr6.eq) goto loc_82A89BB8;
loc_82A89BAC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a85ea0
	ctx.lr = 0x82A89BB8;
	sub_82A85EA0(ctx, base);
loc_82A89BB8:
	// lis r9,255
	ctx.r9.s64 = 16711680;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// add r25,r10,r25
	ctx.r25.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a89bec
	if (ctx.cr6.eq) goto loc_82A89BEC;
	// divwu r11,r31,r21
	ctx.r11.u32 = ctx.r31.u32 / ctx.r21.u32;
	// twllei r21,0
	if (ctx.r21.u32 <= 0) __builtin_debugtrap();
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x82a89acc
	if (ctx.cr6.eq) goto loc_82A89ACC;
loc_82A89BEC:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// subf r11,r11,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stw r25,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r25.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r24,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r24.u32);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
loc_82A89C28:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A89C30"))) PPC_WEAK_FUNC(sub_82A89C30);
PPC_FUNC_IMPL(__imp__sub_82A89C30) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lbz r11,202(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 202);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r9,204(r3)
	PPC_STORE_U8(ctx.r3.u32 + 204, ctx.r9.u8);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// bne 0x82a89c88
	if (!ctx.cr0.eq) goto loc_82A89C88;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82a898b0
	ctx.lr = 0x82A89C84;
	sub_82A898B0(ctx, base);
	// b 0x82a89ca0
	goto loc_82A89CA0;
loc_82A89C88:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82a89a38
	ctx.lr = 0x82A89CA0;
	sub_82A89A38(ctx, base);
loc_82A89CA0:
	// lbz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stb r30,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r30.u8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a89ccc
	if (ctx.cr0.eq) goto loc_82A89CCC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A89CBC:
	// lbz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82a89cbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A89CBC;
loc_82A89CCC:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82A89D04"))) PPC_WEAK_FUNC(sub_82A89D04);
PPC_FUNC_IMPL(__imp__sub_82A89D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89D08"))) PPC_WEAK_FUNC(sub_82A89D08);
PPC_FUNC_IMPL(__imp__sub_82A89D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A89D10;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,80(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r31,24(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831791a4
	ctx.lr = 0x82A89D2C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,53(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a89d44
	if (!ctx.cr0.eq) goto loc_82A89D44;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,13
	ctx.r30.u64 = ctx.r30.u64 | 13;
	// b 0x82a89ecc
	goto loc_82A89ECC;
loc_82A89D44:
	// lwz r30,136(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 136);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82a89ecc
	if (!ctx.cr6.eq) goto loc_82A89ECC;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a89d68
	if (ctx.cr0.eq) goto loc_82A89D68;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,296
	ctx.r30.u64 = ctx.r30.u64 | 296;
	// b 0x82a89ecc
	goto loc_82A89ECC;
loc_82A89D68:
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bne cr6,0x82a89da8
	if (!ctx.cr6.eq) goto loc_82A89DA8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a87990
	ctx.lr = 0x82A89D90;
	sub_82A87990(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a89ecc
	if (ctx.cr0.lt) goto loc_82A89ECC;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82a89dac
	goto loc_82A89DAC;
loc_82A89DA8:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82A89DAC:
	// lbz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a89dbc
	if (ctx.cr0.eq) goto loc_82A89DBC;
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
loc_82A89DBC:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a88e68
	ctx.lr = 0x82A89DD4;
	sub_82A88E68(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82a89e0c
	if (!ctx.cr0.lt) goto loc_82A89E0C;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a89ecc
	if (!ctx.cr6.eq) goto loc_82A89ECC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a89e00
	if (ctx.cr6.eq) goto loc_82A89E00;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,15
	ctx.r30.u64 = ctx.r30.u64 | 15;
	// b 0x82a89ecc
	goto loc_82A89ECC;
loc_82A89E00:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,6
	ctx.r30.u64 = ctx.r30.u64 | 6;
	// b 0x82a89ecc
	goto loc_82A89ECC;
loc_82A89E0C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a88910
	ctx.lr = 0x82A89E18;
	sub_82A88910(ctx, base);
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r31,28(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// bl 0x82a86cd0
	ctx.lr = 0x82A89E24;
	sub_82A86CD0(ctx, base);
	// std r3,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r3.u64);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82a86cd0
	ctx.lr = 0x82A89E30;
	sub_82A86CD0(ctx, base);
	// lbz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// std r3,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r3.u64);
	// rlwinm. r9,r11,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r3,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r3.u64);
	// beq 0x82a89e60
	if (ctx.cr0.eq) goto loc_82A89E60;
	// li r11,16
	ctx.r11.s64 = 16;
	// std r25,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r25.u64);
	// std r25,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r25.u64);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x82a89e74
	goto loc_82A89E74;
loc_82A89E60:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
loc_82A89E74:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi r28,r10,26
	ctx.r28.u64 = ctx.r10.u32 & 0x3F;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a89ea0
	if (!ctx.cr6.gt) goto loc_82A89EA0;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// ori r30,r30,5
	ctx.r30.u64 = ctx.r30.u64 | 5;
	// b 0x82a89ea4
	goto loc_82A89EA4;
loc_82A89EA0:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82A89EA4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A89EB4;
	sub_82FA77C0(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r10,r29,64
	ctx.r10.s64 = ctx.r29.s64 + 64;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r10,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r10.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82A89ECC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A89ED4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83179ba4
	ctx.lr = 0x82A89EE4;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A89EEC"))) PPC_WEAK_FUNC(sub_82A89EEC);
PPC_FUNC_IMPL(__imp__sub_82A89EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A89EF0"))) PPC_WEAK_FUNC(sub_82A89EF0);
PPC_FUNC_IMPL(__imp__sub_82A89EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A89EF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a89f48
	if (ctx.cr6.eq) goto loc_82A89F48;
loc_82A89F10:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a89058
	ctx.lr = 0x82A89F20;
	sub_82A89058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a89f48
	if (ctx.cr6.eq) goto loc_82A89F48;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a89f48
	if (ctx.cr6.eq) goto loc_82A89F48;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82a89f10
	if (ctx.cr6.lt) goto loc_82A89F10;
loc_82A89F48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A89F50"))) PPC_WEAK_FUNC(sub_82A89F50);
PPC_FUNC_IMPL(__imp__sub_82A89F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A89F58;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
loc_82A89F70:
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a88b60
	ctx.lr = 0x82A89F8C;
	sub_82A88B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8a138
	if (ctx.cr0.lt) goto loc_82A8A138;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a89fb8
	if (!ctx.cr6.eq) goto loc_82A89FB8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a86b60
	ctx.lr = 0x82A89FB0;
	sub_82A86B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a89fc8
	if (!ctx.cr0.eq) goto loc_82A89FC8;
loc_82A89FB8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,140(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a89ef0
	ctx.lr = 0x82A89FC8;
	sub_82A89EF0(ctx, base);
loc_82A89FC8:
	// li r11,170
	ctx.r11.s64 = 170;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// divwu r11,r29,r11
	ctx.r11.u32 = ctx.r29.u32 / ctx.r11.u32;
	// mulli r11,r11,170
	ctx.r11.s64 = ctx.r11.s64 * 170;
	// subf r28,r11,r29
	ctx.r28.s64 = ctx.r29.s64 - ctx.r11.s64;
	// subfic r11,r28,170
	ctx.xer.ca = ctx.r28.u32 <= 170;
	ctx.r11.s64 = 170 - ctx.r28.s64;
	// rlwinm r11,r11,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a89ff0
	if (!ctx.cr6.gt) goto loc_82A89FF0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82A89FF0:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x82a89ffc
	if (!ctx.cr6.gt) goto loc_82A89FFC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82A89FFC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a8a00c
	if (!ctx.cr6.gt) goto loc_82A8A00C;
	// lis r30,1
	ctx.r30.s64 = 65536;
loc_82A8A00C:
	// lbz r11,206(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 206);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a8a038
	if (ctx.cr0.eq) goto loc_82A8A038;
	// rlwinm r11,r30,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 20) & 0xFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x82a88718
	ctx.lr = 0x82A8A030;
	sub_82A88718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8a138
	if (ctx.cr0.lt) goto loc_82A8A138;
loc_82A8A038:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a880d0
	ctx.lr = 0x82A8A04C;
	sub_82A880D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8a138
	if (ctx.cr0.lt) goto loc_82A8A138;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,12,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0xFFFFFFFFFFF;
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a872d8
	ctx.lr = 0x82A8A07C;
	sub_82A872D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8a140
	if (ctx.cr0.lt) goto loc_82A8A140;
	// mulli r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 * 24;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	// add r25,r30,r25
	ctx.r25.u64 = ctx.r30.u64 + ctx.r25.u64;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82A8A098:
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83179814
	ctx.lr = 0x82A8A0BC;
	__imp__XeCryptSha(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r8,r29,20
	ctx.r8.s64 = ctx.r29.s64 + 20;
loc_82A8A0C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a8a0e8
	if (!ctx.cr0.eq) goto loc_82A8A0E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82a8a0c8
	if (!ctx.cr6.eq) goto loc_82A8A0C8;
loc_82A8A0E8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a8a170
	if (!ctx.cr0.eq) goto loc_82A8A170;
	// addic. r30,r30,-4096
	ctx.xer.ca = ctx.r30.u32 > 4095;
	ctx.r30.s64 = ctx.r30.s64 + -4096;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r26,r26,4096
	ctx.r26.s64 = ctx.r26.s64 + 4096;
	// bne 0x82a8a098
	if (!ctx.cr0.eq) goto loc_82A8A098;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// bne cr6,0x82a89f70
	if (!ctx.cr6.eq) goto loc_82A89F70;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8A138:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A8A140:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x82a8a138
	goto loc_82A8A138;
loc_82A8A170:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// bl 0x82a87760
	ctx.lr = 0x82A8A1A8;
	sub_82A87760(ctx, base);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,50
	ctx.r3.u64 = ctx.r3.u64 | 50;
	// b 0x82a8a138
	goto loc_82A8A138;
}

__attribute__((alias("__imp__sub_82A8A1B4"))) PPC_WEAK_FUNC(sub_82A8A1B4);
PPC_FUNC_IMPL(__imp__sub_82A8A1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8A1B8"))) PPC_WEAK_FUNC(sub_82A8A1B8);
PPC_FUNC_IMPL(__imp__sub_82A8A1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A8A1C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
loc_82A8A1D8:
	// clrlwi r26,r27,20
	ctx.r26.u64 = ctx.r27.u32 & 0xFFF;
	// subfic r31,r26,4096
	ctx.xer.ca = ctx.r26.u32 <= 4096;
	ctx.r31.s64 = 4096 - ctx.r26.s64;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82a8a1ec
	if (!ctx.cr6.gt) goto loc_82A8A1EC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82A8A1EC:
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a8a274
	if (!ctx.cr6.lt) goto loc_82A8A274;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a88b60
	ctx.lr = 0x82A8A214;
	sub_82A88B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8a298
	if (ctx.cr0.lt) goto loc_82A8A298;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a88510
	ctx.lr = 0x82A8A22C;
	sub_82A88510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8a298
	if (ctx.cr0.lt) goto loc_82A8A298;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r30,r26
	ctx.r4.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A8A248;
	sub_82FA77C0(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x82a8a284
	goto loc_82A8A284;
loc_82A8A274:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A8A284;
	sub_82FA7CF0(ctx, base);
loc_82A8A284:
	// subf. r25,r31,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r28,r31,r28
	ctx.r28.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r27,r31,r27
	ctx.r27.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x82a8a1d8
	if (!ctx.cr0.eq) goto loc_82A8A1D8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8A298:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8A2A0"))) PPC_WEAK_FUNC(sub_82A8A2A0);
PPC_FUNC_IMPL(__imp__sub_82A8A2A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A8A2A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// clrlwi. r11,r7,20
	ctx.r11.u64 = ctx.r7.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8a2e8
	if (ctx.cr0.eq) goto loc_82A8A2E8;
	// subfic r27,r11,4096
	ctx.xer.ca = ctx.r11.u32 <= 4096;
	ctx.r27.s64 = 4096 - ctx.r11.s64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82a8a1b8
	ctx.lr = 0x82A8A2D4;
	sub_82A8A1B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8a3e4
	if (ctx.cr0.lt) goto loc_82A8A3E4;
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// subf r29,r27,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r27.s64;
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
loc_82A8A2E8:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a88b60
	ctx.lr = 0x82A8A304;
	sub_82A88B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8a3e4
	if (ctx.cr0.lt) goto loc_82A8A3E4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a85f48
	ctx.lr = 0x82A8A324;
	sub_82A85F48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a8a380
	if (ctx.cr0.eq) goto loc_82A8A380;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A8A340;
	sub_82FA77C0(ctx, base);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r29,r29,-4096
	ctx.r29.s64 = ctx.r29.s64 + -4096;
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r30,r30,4096
	ctx.r30.s64 = ctx.r30.s64 + 4096;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addi r31,r31,4096
	ctx.r31.s64 = ctx.r31.s64 + 4096;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmplwi cr6,r29,4096
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4096, ctx.xer);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// bge cr6,0x82a8a2e8
	if (!ctx.cr6.lt) goto loc_82A8A2E8;
	// b 0x82a8a3b8
	goto loc_82A8A3B8;
loc_82A8A380:
	// cmplwi cr6,r29,4096
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4096, ctx.xer);
	// blt cr6,0x82a8a3b8
	if (ctx.cr6.lt) goto loc_82A8A3B8;
	// rlwinm r27,r29,0,0,19
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFF000;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a89f50
	ctx.lr = 0x82A8A3A4;
	sub_82A89F50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8a3e4
	if (ctx.cr0.lt) goto loc_82A8A3E4;
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// subf r29,r27,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r27.s64;
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
loc_82A8A3B8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a8a3e0
	if (ctx.cr6.eq) goto loc_82A8A3E0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a8a1b8
	ctx.lr = 0x82A8A3D8;
	sub_82A8A1B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8a3e4
	if (ctx.cr0.lt) goto loc_82A8A3E4;
loc_82A8A3E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8A3E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8A3EC"))) PPC_WEAK_FUNC(sub_82A8A3EC);
PPC_FUNC_IMPL(__imp__sub_82A8A3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8A3F0"))) PPC_WEAK_FUNC(sub_82A8A3F0);
PPC_FUNC_IMPL(__imp__sub_82A8A3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A8A3F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lwz r28,80(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r10,r11,-5552
	ctx.r10.s64 = ctx.r11.s64 + -5552;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r24,24(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r27,8(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x831791a4
	ctx.lr = 0x82A8A42C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,136(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a8a440
	if (ctx.cr6.eq) goto loc_82A8A440;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x82a8a558
	goto loc_82A8A558;
loc_82A8A440:
	// lbz r11,2(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 2);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8a458
	if (ctx.cr0.eq) goto loc_82A8A458;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,296
	ctx.r30.u64 = ctx.r30.u64 | 296;
	// b 0x82a8a558
	goto loc_82A8A558;
loc_82A8A458:
	// lbz r11,53(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8a470
	if (ctx.cr0.eq) goto loc_82A8A470;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,16
	ctx.r30.u64 = ctx.r30.u64 | 16;
	// b 0x82a8a558
	goto loc_82A8A558;
loc_82A8A470:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a8a484
	if (!ctx.cr6.eq) goto loc_82A8A484;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// b 0x82a8a558
	goto loc_82A8A558;
loc_82A8A484:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r30,16(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a8a550
	if (!ctx.cr6.eq) goto loc_82A8A550;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a8a550
	if (!ctx.cr6.lt) goto loc_82A8A550;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a8a4b0
	if (ctx.cr6.lt) goto loc_82A8A4B0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82A8A4B0:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// add r25,r30,r31
	ctx.r25.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a8a4f8
	if (ctx.cr6.gt) goto loc_82A8A4F8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x82a86bd8
	ctx.lr = 0x82A8A4D4;
	sub_82A86BD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a8a4f8
	if (!ctx.cr0.eq) goto loc_82A8A4F8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a8a2a0
	ctx.lr = 0x82A8A4F4;
	sub_82A8A2A0(ctx, base);
	// b 0x82a8a510
	goto loc_82A8A510;
loc_82A8A4F8:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a8a1b8
	ctx.lr = 0x82A8A510;
	sub_82A8A1B8(ctx, base);
loc_82A8A510:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a8a53c
	if (ctx.cr6.lt) goto loc_82A8A53C;
	// lbz r11,2(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 2);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8a534
	if (ctx.cr0.eq) goto loc_82A8A534;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r25,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r25.u32);
	// stw r11,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
loc_82A8A534:
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// b 0x82a8a558
	goto loc_82A8A558;
loc_82A8A53C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A8A54C;
	sub_82FA7CF0(ctx, base);
	// b 0x82a8a558
	goto loc_82A8A558;
loc_82A8A550:
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,17
	ctx.r30.u64 = ctx.r30.u64 | 17;
loc_82A8A558:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A8A560;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83179ba4
	ctx.lr = 0x82A8A570;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8A578"))) PPC_WEAK_FUNC(sub_82A8A578);
PPC_FUNC_IMPL(__imp__sub_82A8A578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A8A580;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r28,r10,0,0,19
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// li r21,0
	ctx.r21.s64 = 0;
	// rlwinm r29,r6,0,0,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFF000;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a8a5b8
	if (!ctx.cr6.gt) goto loc_82A8A5B8;
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// rlwinm r21,r10,20,12,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
loc_82A8A5B8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a8a5c8
	if (!ctx.cr6.gt) goto loc_82A8A5C8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82A8A5C8:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82a8a5d4
	if (!ctx.cr6.gt) goto loc_82A8A5D4;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82A8A5D4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82a8a5e8
	if (!ctx.cr6.eq) goto loc_82A8A5E8;
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// beq cr6,0x82a8a758
	if (ctx.cr6.eq) goto loc_82A8A758;
loc_82A8A5E8:
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// lwz r9,160(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82a8a758
	if (!ctx.cr6.gt) goto loc_82A8A758;
	// lwz r25,40(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// lwz r24,44(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r23,48(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x82a8a708
	goto loc_82A8A708;
loc_82A8A61C:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a88b60
	ctx.lr = 0x82A8A638;
	sub_82A88B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8a75c
	if (ctx.cr0.lt) goto loc_82A8A75C;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a880d0
	ctx.lr = 0x82A8A658;
	sub_82A880D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8a75c
	if (ctx.cr0.lt) goto loc_82A8A75C;
	// li r11,170
	ctx.r11.s64 = 170;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// divwu r11,r26,r11
	ctx.r11.u32 = ctx.r26.u32 / ctx.r11.u32;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// subf r9,r9,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r9.s64;
	// mulli r11,r11,170
	ctx.r11.s64 = ctx.r11.s64 * 170;
	// subf r11,r11,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r11.s64;
	// srawi r9,r9,12
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 12;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a8a6b8
	if (!ctx.cr0.eq) goto loc_82A8A6B8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82a8a6b8
	if (!ctx.cr6.eq) goto loc_82A8A6B8;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82A8A6B8:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82a8a6d8
	if (!ctx.cr6.eq) goto loc_82A8A6D8;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x82a8a6f4
	if (!ctx.cr6.eq) goto loc_82A8A6F4;
	// cmplw cr6,r22,r25
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82a8a6f4
	if (!ctx.cr6.lt) goto loc_82A8A6F4;
	// b 0x82a8a6e8
	goto loc_82A8A6E8;
loc_82A8A6D8:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82a8a764
	if (!ctx.cr6.eq) goto loc_82A8A764;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x82a8a6f4
	if (!ctx.cr6.eq) goto loc_82A8A6F4;
loc_82A8A6E8:
	// lwz r23,48(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r24,44(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r25,40(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
loc_82A8A6F4:
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// addi r29,r29,4096
	ctx.r29.s64 = ctx.r29.s64 + 4096;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
loc_82A8A708:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82a8a61c
	if (ctx.cr6.lt) goto loc_82A8A61C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a8a728
	if (ctx.cr6.eq) goto loc_82A8A728;
	// stw r25,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
	// stw r24,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r24.u32);
	// stw r23,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
loc_82A8A728:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82a8a758
	if (ctx.cr6.eq) goto loc_82A8A758;
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// add r10,r21,r10
	ctx.r10.u64 = ctx.r21.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a8a758
	if (!ctx.cr6.lt) goto loc_82A8A758;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a89150
	ctx.lr = 0x82A8A750;
	sub_82A89150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8a75c
	if (ctx.cr0.lt) goto loc_82A8A75C;
loc_82A8A758:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8A75C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82A8A764:
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// bl 0x82a87760
	ctx.lr = 0x82A8A774;
	sub_82A87760(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// ori r3,r3,50
	ctx.r3.u64 = ctx.r3.u64 | 50;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x82a8a75c
	goto loc_82A8A75C;
}

__attribute__((alias("__imp__sub_82A8A7A8"))) PPC_WEAK_FUNC(sub_82A8A7A8);
PPC_FUNC_IMPL(__imp__sub_82A8A7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82A8A7B0;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r25,r5,0,0,19
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFF000;
	// lwz r26,40(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// lwz r24,44(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// lwz r23,48(r4)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// bl 0x82a88b60
	ctx.lr = 0x82A8A7F0;
	sub_82A88B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8ab44
	if (ctx.cr0.lt) goto loc_82A8AB44;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a88278
	ctx.lr = 0x82A8A814;
	sub_82A88278(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8ab44
	if (ctx.cr0.lt) goto loc_82A8AB44;
	// li r11,170
	ctx.r11.s64 = 170;
	// lwz r29,0(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// divwu r11,r27,r11
	ctx.r11.u32 = ctx.r27.u32 / ctx.r11.u32;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// mulli r11,r11,170
	ctx.r11.s64 = ctx.r11.s64 * 170;
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// bne cr6,0x82a8a8d8
	if (!ctx.cr6.eq) goto loc_82A8A8D8;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82a8a8a0
	if (ctx.cr6.eq) goto loc_82A8A8A0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x82a8a8a0
	if (ctx.cr6.eq) goto loc_82A8A8A0;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// bl 0x82a87760
	ctx.lr = 0x82A8A86C;
	sub_82A87760(ctx, base);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,50
	ctx.r3.u64 = ctx.r3.u64 | 50;
loc_82A8A874:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x82a8ab44
	goto loc_82A8AB44;
loc_82A8A8A0:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a87fe0
	ctx.lr = 0x82A8A8B8;
	sub_82A87FE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8a874
	if (ctx.cr0.lt) goto loc_82A8A874;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// oris r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 3221225472;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// stw r27,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r27.u32);
	// b 0x82a8ab44
	goto loc_82A8AB44;
loc_82A8A8D8:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82a8a920
	if (!ctx.cr6.eq) goto loc_82A8A920;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82a8a904
	if (ctx.cr6.eq) goto loc_82A8A904;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a87fe0
	ctx.lr = 0x82A8A900;
	sub_82A87FE0(ctx, base);
	// b 0x82a8a90c
	goto loc_82A8A90C;
loc_82A8A904:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a88610
	ctx.lr = 0x82A8A90C;
	sub_82A88610(ctx, base);
loc_82A8A90C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a8a874
	if (ctx.cr6.lt) goto loc_82A8A874;
	// stw r27,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a8ab44
	goto loc_82A8AB44;
loc_82A8A920:
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// clrlwi r28,r11,8
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFFFF;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r9,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r9.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// beq cr6,0x82a8a970
	if (ctx.cr6.eq) goto loc_82A8A970;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// bl 0x82a87760
	ctx.lr = 0x82A8A964;
	sub_82A87760(ctx, base);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,50
	ctx.r3.u64 = ctx.r3.u64 | 50;
	// b 0x82a8ab44
	goto loc_82A8AB44;
loc_82A8A970:
	// li r6,-1
	ctx.r6.s64 = -1;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82a8a9cc
	if (ctx.cr6.eq) goto loc_82A8A9CC;
	// addi r5,r25,-4096
	ctx.r5.s64 = ctx.r25.s64 + -4096;
	// cmplw cr6,r5,r26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82a8a9a8
	if (ctx.cr6.lt) goto loc_82A8A9A8;
	// add r11,r24,r26
	ctx.r11.u64 = ctx.r24.u64 + ctx.r26.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a8a9a8
	if (!ctx.cr6.lt) goto loc_82A8A9A8;
	// subf r11,r26,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r26.s64;
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// add r6,r11,r23
	ctx.r6.u64 = ctx.r11.u64 + ctx.r23.u64;
	// b 0x82a8a9cc
	goto loc_82A8A9CC;
loc_82A8A9A8:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a88b60
	ctx.lr = 0x82A8A9C0;
	sub_82A88B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8ab44
	if (ctx.cr0.lt) goto loc_82A8AB44;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82A8A9CC:
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,31,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x2;
	// bl 0x82a89690
	ctx.lr = 0x82A8A9EC;
	sub_82A89690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8ab44
	if (ctx.cr0.lt) goto loc_82A8AB44;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82a8aa08
	if (!ctx.cr6.eq) goto loc_82A8AA08;
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
loc_82A8AA08:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82a8aa18
	if (!ctx.cr6.eq) goto loc_82A8AA18;
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
loc_82A8AA18:
	// add r11,r24,r26
	ctx.r11.u64 = ctx.r24.u64 + ctx.r26.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82a8aa44
	if (!ctx.cr6.eq) goto loc_82A8AA44;
	// rlwinm r11,r24,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 20) & 0xFFFFF;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82a8aa44
	if (!ctx.cr6.eq) goto loc_82A8AA44;
	// addi r11,r24,4096
	ctx.r11.s64 = ctx.r24.s64 + 4096;
	// stw r26,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r26.u32);
	// stw r23,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r23.u32);
	// b 0x82a8aa50
	goto loc_82A8AA50;
loc_82A8AA44:
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r25,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r25.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
loc_82A8AA50:
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a8aa70
	if (ctx.cr0.eq) goto loc_82A8AA70;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// b 0x82a8aa78
	goto loc_82A8AA78;
loc_82A8AA70:
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,53(r30)
	PPC_STORE_U8(ctx.r30.u32 + 53, ctx.r11.u8);
loc_82A8AA78:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a89c30
	ctx.lr = 0x82A8AA8C;
	sub_82A89C30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8ab44
	if (ctx.cr0.lt) goto loc_82A8AB44;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82a8aab8
	if (ctx.cr6.eq) goto loc_82A8AAB8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a87fe0
	ctx.lr = 0x82A8AAB4;
	sub_82A87FE0(ctx, base);
	// b 0x82a8aac8
	goto loc_82A8AAC8;
loc_82A8AAB8:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82a88688
	ctx.lr = 0x82A8AAC8;
	sub_82A88688(ctx, base);
loc_82A8AAC8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a8ab40
	if (ctx.cr6.lt) goto loc_82A8AB40;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82a8aaf4
	if (!ctx.cr6.eq) goto loc_82A8AAF4;
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8aaf4
	if (ctx.cr0.eq) goto loc_82A8AAF4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a86e88
	ctx.lr = 0x82A8AAF4;
	sub_82A86E88(ctx, base);
loc_82A8AAF4:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a88278
	ctx.lr = 0x82A8AB0C;
	sub_82A88278(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a8ab40
	if (!ctx.cr0.lt) goto loc_82A8AB40;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82A8AB40:
	// stw r29,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r29.u32);
loc_82A8AB44:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8AB4C"))) PPC_WEAK_FUNC(sub_82A8AB4C);
PPC_FUNC_IMPL(__imp__sub_82A8AB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8AB50"))) PPC_WEAK_FUNC(sub_82A8AB50);
PPC_FUNC_IMPL(__imp__sub_82A8AB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A8AB58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a8a7a8
	ctx.lr = 0x82A8AB88;
	sub_82A8A7A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8abb4
	if (ctx.cr0.lt) goto loc_82A8ABB4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r30,20
	ctx.r10.u64 = ctx.r30.u32 & 0xFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a8abb4
	if (!ctx.cr6.eq) goto loc_82A8ABB4;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82A8ABB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8ABBC"))) PPC_WEAK_FUNC(sub_82A8ABBC);
PPC_FUNC_IMPL(__imp__sub_82A8ABBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8ABC0"))) PPC_WEAK_FUNC(sub_82A8ABC0);
PPC_FUNC_IMPL(__imp__sub_82A8ABC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A8ABC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,54(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 54);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// rotlwi r4,r11,6
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a8ab50
	ctx.lr = 0x82A8ABF4;
	sub_82A8AB50(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82a8ac30
	if (ctx.cr0.lt) goto loc_82A8AC30;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a87018
	ctx.lr = 0x82A8AC0C;
	sub_82A87018(ctx, base);
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// andi. r11,r11,207
	ctx.r11.u64 = ctx.r11.u64 & 207;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
	// bl 0x82a86f70
	ctx.lr = 0x82A8AC30;
	sub_82A86F70(ctx, base);
loc_82A8AC30:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8AC3C"))) PPC_WEAK_FUNC(sub_82A8AC3C);
PPC_FUNC_IMPL(__imp__sub_82A8AC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8AC40"))) PPC_WEAK_FUNC(sub_82A8AC40);
PPC_FUNC_IMPL(__imp__sub_82A8AC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A8AC48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,53(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 53);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8ac68
	if (ctx.cr0.eq) goto loc_82A8AC68;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a8acb4
	goto loc_82A8ACB4;
loc_82A8AC68:
	// lhz r11,54(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// rotlwi r4,r11,6
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a8ab50
	ctx.lr = 0x82A8AC88;
	sub_82A8AB50(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a8acb0
	if (ctx.cr0.lt) goto loc_82A8ACB0;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
	// bl 0x82a86f70
	ctx.lr = 0x82A8ACB0;
	sub_82A86F70(ctx, base);
loc_82A8ACB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82A8ACB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8ACBC"))) PPC_WEAK_FUNC(sub_82A8ACBC);
PPC_FUNC_IMPL(__imp__sub_82A8ACBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8ACC0"))) PPC_WEAK_FUNC(sub_82A8ACC0);
PPC_FUNC_IMPL(__imp__sub_82A8ACC0) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,32(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// bl 0x82a89c30
	ctx.lr = 0x82A8ACE4;
	sub_82A89C30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8ad1c
	if (ctx.cr0.lt) goto loc_82A8AD1C;
	// lbz r9,53(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stb r9,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r9.u8);
loc_82A8AD1C:
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

__attribute__((alias("__imp__sub_82A8AD30"))) PPC_WEAK_FUNC(sub_82A8AD30);
PPC_FUNC_IMPL(__imp__sub_82A8AD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A8AD38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a88b60
	ctx.lr = 0x82A8AD5C;
	sub_82A88B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8adc4
	if (ctx.cr0.lt) goto loc_82A8ADC4;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a89c30
	ctx.lr = 0x82A8AD7C;
	sub_82A89C30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8adc4
	if (ctx.cr0.lt) goto loc_82A8ADC4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// ble cr6,0x82a8ada4
	if (!ctx.cr6.gt) goto loc_82A8ADA4;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_82A8ADA4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82a8adb4
	if (!ctx.cr6.gt) goto loc_82A8ADB4;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82A8ADB4:
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
loc_82A8ADC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8ADCC"))) PPC_WEAK_FUNC(sub_82A8ADCC);
PPC_FUNC_IMPL(__imp__sub_82A8ADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8ADD0"))) PPC_WEAK_FUNC(sub_82A8ADD0);
PPC_FUNC_IMPL(__imp__sub_82A8ADD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A8ADD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,36(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r30,20(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82a8ae28
	if (ctx.cr6.eq) goto loc_82A8AE28;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82a8ae28
	if (!ctx.cr6.eq) goto loc_82A8AE28;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// bl 0x82a88b60
	ctx.lr = 0x82A8AE18;
	sub_82A88B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8aebc
	if (ctx.cr0.lt) goto loc_82A8AEBC;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
loc_82A8AE28:
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// lbz r10,53(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r29,r11,20,12,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// li r7,-1
	ctx.r7.s64 = -1;
	// rlwinm r5,r10,30,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a89690
	ctx.lr = 0x82A8AE50;
	sub_82A89690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8aebc
	if (ctx.cr0.lt) goto loc_82A8AEBC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bne cr6,0x82a8ae94
	if (!ctx.cr6.eq) goto loc_82A8AE94;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82a8ae94
	if (!ctx.cr6.eq) goto loc_82A8AE94;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_82A8AE94:
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a8aeb0
	if (ctx.cr0.eq) goto loc_82A8AEB0;
	// lwz r11,168(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,168(r27)
	PPC_STORE_U32(ctx.r27.u32 + 168, ctx.r11.u32);
	// b 0x82a8aeb8
	goto loc_82A8AEB8;
loc_82A8AEB0:
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
loc_82A8AEB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8AEBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8AEC4"))) PPC_WEAK_FUNC(sub_82A8AEC4);
PPC_FUNC_IMPL(__imp__sub_82A8AEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8AEC8"))) PPC_WEAK_FUNC(sub_82A8AEC8);
PPC_FUNC_IMPL(__imp__sub_82A8AEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A8AED0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-4096
	ctx.r11.s64 = -4096;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a8aef8
	if (!ctx.cr6.gt) goto loc_82A8AEF8;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,127
	ctx.r3.u64 = ctx.r3.u64 | 127;
	// b 0x82a8af98
	goto loc_82A8AF98;
loc_82A8AEF8:
	// addi r11,r5,4095
	ctx.r11.s64 = ctx.r5.s64 + 4095;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a8af98
	if (ctx.cr6.eq) goto loc_82A8AF98;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a8af38
	if (!ctx.cr0.eq) goto loc_82A8AF38;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8af38
	if (!ctx.cr0.eq) goto loc_82A8AF38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a8ac40
	ctx.lr = 0x82A8AF30;
	sub_82A8AC40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8af98
	if (ctx.cr0.lt) goto loc_82A8AF98;
loc_82A8AF38:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a8af50
	if (!ctx.cr6.eq) goto loc_82A8AF50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a8acc0
	ctx.lr = 0x82A8AF4C;
	sub_82A8ACC0(ctx, base);
	// b 0x82a8af98
	goto loc_82A8AF98;
loc_82A8AF50:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82a8af70
	if (!ctx.cr6.lt) goto loc_82A8AF70;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a8add0
	ctx.lr = 0x82A8AF6C;
	sub_82A8ADD0(ctx, base);
	// b 0x82a8af98
	goto loc_82A8AF98;
loc_82A8AF70:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82a8af94
	if (!ctx.cr6.eq) goto loc_82A8AF94;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82a8af94
	if (!ctx.cr6.gt) goto loc_82A8AF94;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a8ad30
	ctx.lr = 0x82A8AF90;
	sub_82A8AD30(ctx, base);
	// b 0x82a8af98
	goto loc_82A8AF98;
loc_82A8AF94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8AF98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8AFA0"))) PPC_WEAK_FUNC(sub_82A8AFA0);
PPC_FUNC_IMPL(__imp__sub_82A8AFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82A8AFA8;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,80(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r20,24(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r21,4(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,8(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// bl 0x831791a4
	ctx.lr = 0x82A8AFC8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r29,136(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 136);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82a8b224
	if (!ctx.cr6.eq) goto loc_82A8B224;
	// lbz r11,2(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 2);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8afec
	if (ctx.cr0.eq) goto loc_82A8AFEC;
	// lis r29,-16384
	ctx.r29.s64 = -1073741824;
	// ori r29,r29,296
	ctx.r29.u64 = ctx.r29.u64 | 296;
	// b 0x82a8b224
	goto loc_82A8B224;
loc_82A8AFEC:
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8b004
	if (ctx.cr0.eq) goto loc_82A8B004;
	// lis r29,-16384
	ctx.r29.s64 = -1073741824;
	// ori r29,r29,16
	ctx.r29.u64 = ctx.r29.u64 | 16;
	// b 0x82a8b224
	goto loc_82A8B224;
loc_82A8B004:
	// lbz r11,206(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 206);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a8b01c
	if (!ctx.cr0.eq) goto loc_82A8B01C;
	// lis r29,-16384
	ctx.r29.s64 = -1073741824;
	// ori r29,r29,34
	ctx.r29.u64 = ctx.r29.u64 | 34;
	// b 0x82a8b224
	goto loc_82A8B224;
loc_82A8B01C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82a8b034
	if (!ctx.cr6.eq) goto loc_82A8B034;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// stw r18,20(r19)
	PPC_STORE_U32(ctx.r19.u32 + 20, ctx.r18.u32);
	// b 0x82a8b224
	goto loc_82A8B224;
loc_82A8B034:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a8ac40
	ctx.lr = 0x82A8B040;
	sub_82A8AC40(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a8b224
	if (ctx.cr0.lt) goto loc_82A8B224;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r18,0
	ctx.r18.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a8b070
	if (!ctx.cr6.eq) goto loc_82A8B070;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a8b070
	if (!ctx.cr6.eq) goto loc_82A8B070;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r18,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r18.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_82A8B070:
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r22,r28,r21
	ctx.r22.u64 = ctx.r28.u64 + ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r22,4095
	ctx.r11.s64 = ctx.r22.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// bne cr6,0x82a8b21c
	if (!ctx.cr6.eq) goto loc_82A8B21C;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82a8b21c
	if (!ctx.cr6.gt) goto loc_82A8B21C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a8a578
	ctx.lr = 0x82A8B0A8;
	sub_82A8A578(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a8b224
	if (ctx.cr0.lt) goto loc_82A8B224;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a8b0d8
	if (!ctx.cr6.gt) goto loc_82A8B0D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a8aec8
	ctx.lr = 0x82A8B0D0;
	sub_82A8AEC8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a8b224
	if (ctx.cr0.lt) goto loc_82A8B224;
loc_82A8B0D8:
	// rlwinm r30,r28,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFF000;
	// b 0x82a8b128
	goto loc_82A8B128;
loc_82A8B0E0:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a8a7a8
	ctx.lr = 0x82A8B100;
	sub_82A8A7A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a8b224
	if (ctx.cr0.lt) goto loc_82A8B224;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82a86f70
	ctx.lr = 0x82A8B11C;
	sub_82A86F70(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82A8B128:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82a8b0e0
	if (ctx.cr6.lt) goto loc_82A8B0E0;
	// lwz r24,28(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
loc_82A8B13C:
	// clrlwi r26,r28,20
	ctx.r26.u64 = ctx.r28.u32 & 0xFFF;
	// subfic r30,r26,4096
	ctx.xer.ca = ctx.r26.u32 <= 4096;
	ctx.r30.s64 = 4096 - ctx.r26.s64;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82a8b150
	if (!ctx.cr6.gt) goto loc_82A8B150;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82A8B150:
	// addi r11,r30,-4096
	ctx.r11.s64 = ctx.r30.s64 + -4096;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a8a7a8
	ctx.lr = 0x82A8B178;
	sub_82A8A7A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a8b224
	if (ctx.cr0.lt) goto loc_82A8B224;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r3,r26,r27
	ctx.r3.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A8B194;
	sub_82FA77C0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82a86f70
	ctx.lr = 0x82A8B1A8;
	sub_82A86F70(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r28,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFF000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a8b1c0
	if (!ctx.cr6.eq) goto loc_82A8B1C0;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82A8B1C0:
	// subf. r25,r30,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r24,r30,r24
	ctx.r24.u64 = ctx.r30.u64 + ctx.r24.u64;
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bne 0x82a8b13c
	if (!ctx.cr0.eq) goto loc_82A8B13C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82a8b1e0
	if (!ctx.cr6.lt) goto loc_82A8B1E0;
	// stw r22,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r22.u32);
loc_82A8B1E0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83179794
	ctx.lr = 0x82A8B1E8;
	__imp__KeQuerySystemTime(ctx, base);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82a86d48
	ctx.lr = 0x82A8B1F4;
	sub_82A86D48(ctx, base);
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
	// lbz r11,2(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 2);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8b214
	if (ctx.cr0.eq) goto loc_82A8B214;
	// stw r22,24(r20)
	PPC_STORE_U32(ctx.r20.u32 + 24, ctx.r22.u32);
	// stw r18,20(r20)
	PPC_STORE_U32(ctx.r20.u32 + 20, ctx.r18.u32);
loc_82A8B214:
	// stw r21,20(r19)
	PPC_STORE_U32(ctx.r19.u32 + 20, ctx.r21.u32);
	// b 0x82a8b224
	goto loc_82A8B224;
loc_82A8B21C:
	// lis r29,-16384
	ctx.r29.s64 = -1073741824;
	// ori r29,r29,127
	ctx.r29.u64 = ctx.r29.u64 | 127;
loc_82A8B224:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A8B22C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,16(r19)
	PPC_STORE_U32(ctx.r19.u32 + 16, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83179ba4
	ctx.lr = 0x82A8B23C;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8B244"))) PPC_WEAK_FUNC(sub_82A8B244);
PPC_FUNC_IMPL(__imp__sub_82A8B244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8B248"))) PPC_WEAK_FUNC(sub_82A8B248);
PPC_FUNC_IMPL(__imp__sub_82A8B248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A8B250;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x831791a4
	ctx.lr = 0x82A8B26C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83179c04
	ctx.lr = 0x82A8B278;
	__imp__IoRemoveShareAccess(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a8b31c
	if (!ctx.cr6.eq) goto loc_82A8B31C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82a8b31c
	if (!ctx.cr6.eq) goto loc_82A8B31C;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a8b304
	if (ctx.cr0.eq) goto loc_82A8B304;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a8abc0
	ctx.lr = 0x82A8B2B0;
	sub_82A8ABC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8b31c
	if (ctx.cr0.lt) goto loc_82A8B31C;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8b2e4
	if (!ctx.cr0.eq) goto loc_82A8B2E4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8b2e4
	if (ctx.cr6.eq) goto loc_82A8B2E4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a89c30
	ctx.lr = 0x82A8B2E4;
	sub_82A89C30(ctx, base);
loc_82A8B2E4:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82a86910
	ctx.lr = 0x82A8B2FC;
	sub_82A86910(ctx, base);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// b 0x82a8b31c
	goto loc_82A8B31C;
loc_82A8B304:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8b31c
	if (ctx.cr0.eq) goto loc_82A8B31C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a8abc0
	ctx.lr = 0x82A8B31C;
	sub_82A8ABC0(ctx, base);
loc_82A8B31C:
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r11.u8);
	// bl 0x831791b4
	ctx.lr = 0x82A8B330;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r27,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83179ba4
	ctx.lr = 0x82A8B340;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8B348"))) PPC_WEAK_FUNC(sub_82A8B348);
PPC_FUNC_IMPL(__imp__sub_82A8B348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A8B350;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,206(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 206);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a8b38c
	if (!ctx.cr0.eq) goto loc_82A8B38C;
loc_82A8B380:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,746
	ctx.r3.u64 = ctx.r3.u64 | 746;
	// b 0x82a8b4b0
	goto loc_82A8B4B0;
loc_82A8B38C:
	// lwz r28,68(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82a8b3bc
	if (!ctx.cr6.eq) goto loc_82A8B3BC;
	// lwz r28,84(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// addi r5,r28,4096
	ctx.r5.s64 = ctx.r28.s64 + 4096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a8aec8
	ctx.lr = 0x82A8B3B0;
	sub_82A8AEC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a8b3cc
	if (!ctx.cr0.lt) goto loc_82A8B3CC;
	// b 0x82a8b4b0
	goto loc_82A8B4B0;
loc_82A8B3BC:
	// lis r11,63
	ctx.r11.s64 = 4128768;
	// ori r11,r11,65408
	ctx.r11.u64 = ctx.r11.u64 | 65408;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a8b380
	if (ctx.cr6.gt) goto loc_82A8B380;
loc_82A8B3CC:
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A8B3E0;
	sub_82FA7CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82fa77c0
	ctx.lr = 0x82A8B3F0;
	sub_82FA77C0(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lbz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// rlwimi r11,r10,0,25,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x40) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFBF);
	// rlwimi r11,r26,7,0,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 7) & 0xFFFFFF80) | (ctx.r11.u64 & 0xFFFFFFFF0000007F);
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// bl 0x83179794
	ctx.lr = 0x82A8B40C;
	__imp__KeQuerySystemTime(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82a86d48
	ctx.lr = 0x82A8B418;
	sub_82A86D48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bl 0x82a866e0
	ctx.lr = 0x82A8B438;
	sub_82A866E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a8b44c
	if (!ctx.cr0.eq) goto loc_82A8B44C;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,154
	ctx.r3.u64 = ctx.r3.u64 | 154;
	// b 0x82a8b4b0
	goto loc_82A8B4B0;
loc_82A8B44C:
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8b474
	if (!ctx.cr0.eq) goto loc_82A8B474;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a8aec8
	ctx.lr = 0x82A8B46C;
	sub_82A8AEC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82a8b478
	goto loc_82A8B478;
loc_82A8B474:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82A8B478:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82a8b4a4
	if (ctx.cr6.lt) goto loc_82A8B4A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a8abc0
	ctx.lr = 0x82A8B490;
	sub_82A8ABC0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a8b4a4
	if (ctx.cr0.lt) goto loc_82A8B4A4;
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82a8b4ac
	goto loc_82A8B4AC;
loc_82A8B4A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a86910
	ctx.lr = 0x82A8B4AC;
	sub_82A86910(ctx, base);
loc_82A8B4AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82A8B4B0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8B4B8"))) PPC_WEAK_FUNC(sub_82A8B4B8);
PPC_FUNC_IMPL(__imp__sub_82A8B4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A8B4C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83179794
	ctx.lr = 0x82A8B4E4;
	__imp__KeQuerySystemTime(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82a86d48
	ctx.lr = 0x82A8B4F0;
	sub_82A86D48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bl 0x82a8aec8
	ctx.lr = 0x82A8B510;
	sub_82A8AEC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8b528
	if (ctx.cr0.lt) goto loc_82A8B528;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a8abc0
	ctx.lr = 0x82A8B528;
	sub_82A8ABC0(ctx, base);
loc_82A8B528:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8B530"))) PPC_WEAK_FUNC(sub_82A8B530);
PPC_FUNC_IMPL(__imp__sub_82A8B530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82A8B538;
	__savegprlr_18(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,80(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lwz r26,24(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r19,8(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r21,4(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lhz r20,14(r29)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// rlwinm r22,r19,8,24,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 8) & 0xFF;
	// bl 0x83179bd4
	ctx.lr = 0x82A8B564;
	__imp__ObIsTitleObject(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r30,28(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x831791a4
	ctx.lr = 0x82A8B580;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r31,136(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 136);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82a8b75c
	if (!ctx.cr6.eq) goto loc_82A8B75C;
	// lbz r11,206(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 206);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a8b5c4
	if (!ctx.cr0.eq) goto loc_82A8B5C4;
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 2, ctx.xer);
	// beq cr6,0x82a8b5b8
	if (ctx.cr6.eq) goto loc_82A8B5B8;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82a8b5b8
	if (ctx.cr6.eq) goto loc_82A8B5B8;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 4, ctx.xer);
	// beq cr6,0x82a8b5b8
	if (ctx.cr6.eq) goto loc_82A8B5B8;
	// cmplwi cr6,r22,5
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 5, ctx.xer);
	// bne cr6,0x82a8b5c4
	if (!ctx.cr6.eq) goto loc_82A8B5C4;
loc_82A8B5B8:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,34
	ctx.r31.u64 = ctx.r31.u64 | 34;
	// b 0x82a8b75c
	goto loc_82A8B75C;
loc_82A8B5C4:
	// lwz r11,40(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a8b5dc
	if (ctx.cr6.eq) goto loc_82A8B5DC;
loc_82A8B5D0:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
	// b 0x82a8b75c
	goto loc_82A8B75C;
loc_82A8B5DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a8b65c
	if (ctx.cr6.eq) goto loc_82A8B65C;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8b5d0
	if (ctx.cr0.eq) goto loc_82A8B5D0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a86988
	ctx.lr = 0x82A8B5FC;
	sub_82A86988(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a8b610
	if (!ctx.cr0.eq) goto loc_82A8B610;
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,154
	ctx.r31.u64 = ctx.r31.u64 | 154;
	// b 0x82a8b75c
	goto loc_82A8B75C;
loc_82A8B610:
	// lhz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82a8b640
	if (!ctx.cr0.eq) goto loc_82A8B640;
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8b638
	if (ctx.cr0.eq) goto loc_82A8B638;
loc_82A8B62C:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,34
	ctx.r31.u64 = ctx.r31.u64 | 34;
	// b 0x82a8b74c
	goto loc_82A8B74C;
loc_82A8B638:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82a8b998
	goto loc_82A8B998;
loc_82A8B640:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// bne cr6,0x82a8b6a8
	if (!ctx.cr6.eq) goto loc_82A8B6A8;
loc_82A8B650:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,51
	ctx.r31.u64 = ctx.r31.u64 | 51;
	// b 0x82a8b74c
	goto loc_82A8B74C;
loc_82A8B65C:
	// lhz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82a8b5b8
	if (ctx.cr0.eq) goto loc_82A8B5B8;
	// addi r25,r23,56
	ctx.r25.s64 = ctx.r23.s64 + 56;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a86988
	ctx.lr = 0x82A8B678;
	sub_82A86988(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// bne cr6,0x82a8b650
	if (!ctx.cr6.eq) goto loc_82A8B650;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x82a8b6a8
	if (!ctx.cr6.eq) goto loc_82A8B6A8;
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8b638
	if (ctx.cr0.eq) goto loc_82A8B638;
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
	// b 0x82a8b74c
	goto loc_82A8B74C;
loc_82A8B6A8:
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x82a8b6cc
	if (!ctx.cr6.eq) goto loc_82A8B6CC;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// b 0x82a8b6d0
	goto loc_82A8B6D0;
loc_82A8B6CC:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82A8B6D0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a877b8
	ctx.lr = 0x82A8B6E0;
	sub_82A877B8(ctx, base);
	// lhz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x82a8b6fc
	if (ctx.cr0.eq) goto loc_82A8B6FC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x82a8b650
	if (ctx.cr6.eq) goto loc_82A8B650;
loc_82A8B6FC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a86ac8
	ctx.lr = 0x82A8B708;
	sub_82A86AC8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a8b810
	if (ctx.cr0.eq) goto loc_82A8B810;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a86988
	ctx.lr = 0x82A8B71C;
	sub_82A86988(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82a8b8f4
	if (ctx.cr0.eq) goto loc_82A8B8F4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a86910
	ctx.lr = 0x82A8B72C;
	sub_82A86910(ctx, base);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a8b900
	if (ctx.cr6.eq) goto loc_82A8B900;
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8b6d0
	if (!ctx.cr0.eq) goto loc_82A8B6D0;
loc_82A8B744:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,58
	ctx.r31.u64 = ctx.r31.u64 | 58;
loc_82A8B74C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82a8b75c
	if (ctx.cr6.eq) goto loc_82A8B75C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a86910
	ctx.lr = 0x82A8B75C;
	sub_82A86910(ctx, base);
loc_82A8B75C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A8B764;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r31,16(r18)
	PPC_STORE_U32(ctx.r18.u32 + 16, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83179ba4
	ctx.lr = 0x82A8B774;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
loc_82A8B77C:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a88e68
	ctx.lr = 0x82A8B794;
	sub_82A88E68(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a8b824
	if (ctx.cr0.lt) goto loc_82A8B824;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a8b7b0
	if (ctx.cr6.eq) goto loc_82A8B7B0;
	// lbz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8b744
	if (ctx.cr0.eq) goto loc_82A8B744;
loc_82A8B7B0:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a866e0
	ctx.lr = 0x82A8B7C4;
	sub_82A866E0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq 0x82a8b8f4
	if (ctx.cr0.eq) goto loc_82A8B8F4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a86910
	ctx.lr = 0x82A8B7D8;
	sub_82A86910(ctx, base);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a8b8e4
	if (ctx.cr6.eq) goto loc_82A8B8E4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a877b8
	ctx.lr = 0x82A8B7F4;
	sub_82A877B8(ctx, base);
	// lhz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x82a8b810
	if (ctx.cr0.eq) goto loc_82A8B810;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x82a8b650
	if (ctx.cr6.eq) goto loc_82A8B650;
loc_82A8B810:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a86c40
	ctx.lr = 0x82A8B818;
	sub_82A86C40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a8b77c
	if (!ctx.cr0.eq) goto loc_82A8B77C;
	// b 0x82a8b650
	goto loc_82A8B650;
loc_82A8B824:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a8b74c
	if (!ctx.cr6.eq) goto loc_82A8B74C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82a8b744
	if (!ctx.cr6.eq) goto loc_82A8B744;
	// lbz r11,53(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 53);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8b97c
	if (!ctx.cr0.eq) goto loc_82A8B97C;
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8b860
	if (ctx.cr0.eq) goto loc_82A8B860;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// b 0x82a8b968
	goto loc_82A8B968;
loc_82A8B860:
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// beq cr6,0x82a8b74c
	if (ctx.cr6.eq) goto loc_82A8B74C;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 4, ctx.xer);
	// beq cr6,0x82a8b74c
	if (ctx.cr6.eq) goto loc_82A8B74C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a8b880
	if (ctx.cr6.eq) goto loc_82A8B880;
	// rlwinm. r11,r19,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8b650
	if (!ctx.cr0.eq) goto loc_82A8B650;
loc_82A8B880:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,44(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a8b348
	ctx.lr = 0x82A8B8A4;
	sub_82A8B348(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a8b74c
	if (ctx.cr0.lt) goto loc_82A8B74C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a86910
	ctx.lr = 0x82A8B8B4;
	sub_82A86910(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// clrlwi r4,r20,16
	ctx.r4.u64 = ctx.r20.u32 & 0xFFFF;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83179bf4
	ctx.lr = 0x82A8B8CC;
	__imp__IoSetShareAccess(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r31.u32);
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// stw r10,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r10.u32);
	// b 0x82a8bab8
	goto loc_82A8BAB8;
loc_82A8B8E4:
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8b98c
	if (ctx.cr0.eq) goto loc_82A8B98C;
	// b 0x82a8b960
	goto loc_82A8B960;
loc_82A8B8F4:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,154
	ctx.r31.u64 = ctx.r31.u64 | 154;
	// b 0x82a8b74c
	goto loc_82A8B74C;
loc_82A8B900:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8b954
	if (ctx.cr6.eq) goto loc_82A8B954;
	// rlwinm. r10,r19,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a8b97c
	if (!ctx.cr0.eq) goto loc_82A8B97C;
	// lbz r10,53(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a8b97c
	if (!ctx.cr0.eq) goto loc_82A8B97C;
	// lbz r10,53(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a8b954
	if (!ctx.cr0.eq) goto loc_82A8B954;
	// lis r12,1
	ctx.r12.s64 = 65536;
	// ori r12,r12,262
	ctx.r12.u64 = ctx.r12.u64 | 262;
	// and. r10,r21,r12
	ctx.r10.u64 = ctx.r21.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a8b62c
	if (!ctx.cr0.eq) goto loc_82A8B62C;
	// lbz r10,58(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 58);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82a8b62c
	if (!ctx.cr0.eq) goto loc_82A8B62C;
	// lbz r11,59(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 59);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a8b62c
	if (!ctx.cr0.eq) goto loc_82A8B62C;
loc_82A8B954:
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8b988
	if (ctx.cr0.eq) goto loc_82A8B988;
loc_82A8B960:
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,4
	ctx.r6.s64 = 4;
loc_82A8B968:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a88848
	ctx.lr = 0x82A8B974;
	sub_82A88848(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a8b74c
	goto loc_82A8B74C;
loc_82A8B97C:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,86
	ctx.r31.u64 = ctx.r31.u64 | 86;
	// b 0x82a8b74c
	goto loc_82A8B74C;
loc_82A8B988:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A8B98C:
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8b9c8
	if (ctx.cr0.eq) goto loc_82A8B9C8;
loc_82A8B998:
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// beq cr6,0x82a8b9b4
	if (ctx.cr6.eq) goto loc_82A8B9B4;
	// cmplwi cr6,r22,3
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 3, ctx.xer);
	// beq cr6,0x82a8b9b4
	if (ctx.cr6.eq) goto loc_82A8B9B4;
loc_82A8B9A8:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,53
	ctx.r31.u64 = ctx.r31.u64 | 53;
	// b 0x82a8b74c
	goto loc_82A8B74C;
loc_82A8B9B4:
	// rlwinm. r11,r19,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8b9e8
	if (ctx.cr0.eq) goto loc_82A8B9E8;
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,186
	ctx.r31.u64 = ctx.r31.u64 | 186;
	// b 0x82a8b9e8
	goto loc_82A8B9E8;
loc_82A8B9C8:
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 2, ctx.xer);
	// beq cr6,0x82a8b9a8
	if (ctx.cr6.eq) goto loc_82A8B9A8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82a8b9e0
	if (!ctx.cr6.eq) goto loc_82A8B9E0;
	// clrlwi. r11,r19,31
	ctx.r11.u64 = ctx.r19.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8b9e8
	if (ctx.cr0.eq) goto loc_82A8B9E8;
loc_82A8B9E0:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,259
	ctx.r31.u64 = ctx.r31.u64 | 259;
loc_82A8B9E8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a8b74c
	if (ctx.cr6.lt) goto loc_82A8B74C;
	// lbz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 56);
	// addi r30,r25,56
	ctx.r30.s64 = ctx.r25.s64 + 56;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// clrlwi r4,r20,16
	ctx.r4.u64 = ctx.r20.u32 & 0xFFFF;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bne 0x82a8ba18
	if (!ctx.cr0.eq) goto loc_82A8BA18;
	// bl 0x83179bf4
	ctx.lr = 0x82A8BA14;
	__imp__IoSetShareAccess(ctx, base);
	// b 0x82a8ba24
	goto loc_82A8BA24;
loc_82A8BA18:
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x83179be4
	ctx.lr = 0x82A8BA20;
	__imp__IoCheckShareAccess(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82A8BA24:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a8b74c
	if (ctx.cr6.lt) goto loc_82A8B74C;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82a8ba4c
	if (ctx.cr6.eq) goto loc_82A8BA4C;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 4, ctx.xer);
	// beq cr6,0x82a8ba4c
	if (ctx.cr6.eq) goto loc_82A8BA4C;
	// cmplwi cr6,r22,5
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 5, ctx.xer);
	// beq cr6,0x82a8ba4c
	if (ctx.cr6.eq) goto loc_82A8BA4C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a8ba68
	goto loc_82A8BA68;
loc_82A8BA4C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,44(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a8b4b8
	ctx.lr = 0x82A8BA5C;
	sub_82A8B4B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a8ba70
	if (ctx.cr0.lt) goto loc_82A8BA70;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82A8BA68:
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// b 0x82a8ba7c
	goto loc_82A8BA7C;
loc_82A8BA70:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83179c04
	ctx.lr = 0x82A8BA7C;
	__imp__IoRemoveShareAccess(ctx, base);
loc_82A8BA7C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a8b74c
	if (ctx.cr6.lt) goto loc_82A8B74C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r25,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r25.u32);
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// lbz r11,206(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 206);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a8bab8
	if (ctx.cr0.eq) goto loc_82A8BAB8;
	// rlwinm. r11,r19,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8bab8
	if (ctx.cr0.eq) goto loc_82A8BAB8;
	// lbz r11,53(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 53);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a8bab8
	if (!ctx.cr0.eq) goto loc_82A8BAB8;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,53(r25)
	PPC_STORE_U8(ctx.r25.u32 + 53, ctx.r11.u8);
loc_82A8BAB8:
	// lwz r9,128(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 128);
	// addi r10,r23,128
	ctx.r10.s64 = ctx.r23.s64 + 128;
	// addi r11,r26,80
	ctx.r11.s64 = ctx.r26.s64 + 80;
	// stw r10,84(r26)
	PPC_STORE_U32(ctx.r26.u32 + 84, ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r9,80(r26)
	PPC_STORE_U32(ctx.r26.u32 + 80, ctx.r9.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,128(r23)
	PPC_STORE_U32(ctx.r23.u32 + 128, ctx.r11.u32);
	// b 0x82a8b75c
	goto loc_82A8B75C;
}

__attribute__((alias("__imp__sub_82A8BADC"))) PPC_WEAK_FUNC(sub_82A8BADC);
PPC_FUNC_IMPL(__imp__sub_82A8BADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8BAE0"))) PPC_WEAK_FUNC(sub_82A8BAE0);
PPC_FUNC_IMPL(__imp__sub_82A8BAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A8BAE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,128(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,128
	ctx.r30.s64 = ctx.r3.s64 + 128;
	// b 0x82a8bb24
	goto loc_82A8BB24;
loc_82A8BAFC:
	// lwz r4,-72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,53(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 53);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8bb24
	if (ctx.cr0.eq) goto loc_82A8BB24;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a8abc0
	ctx.lr = 0x82A8BB1C;
	sub_82A8ABC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8bb30
	if (ctx.cr0.lt) goto loc_82A8BB30;
loc_82A8BB24:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82a8bafc
	if (!ctx.cr6.eq) goto loc_82A8BAFC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8BB30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8BB38"))) PPC_WEAK_FUNC(sub_82A8BB38);
PPC_FUNC_IMPL(__imp__sub_82A8BB38) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a8bb74
	if (ctx.cr6.eq) goto loc_82A8BB74;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a8bb74
	if (ctx.cr6.eq) goto loc_82A8BB74;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a8bce4
	if (!ctx.cr6.eq) goto loc_82A8BCE4;
loc_82A8BB74:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82a8bcd8
	if (ctx.cr6.gt) goto loc_82A8BCD8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82a8bbb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A8BBB4;
	// bdzf 4*cr6+eq,0x82a8bbc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A8BBC0;
	// bdzf 4*cr6+eq,0x82a8bbf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A8BBF4;
	// bdzf 4*cr6+eq,0x82a8bc04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A8BC04;
	// bdzf 4*cr6+eq,0x82a8bcac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A8BCAC;
	// bdzf 4*cr6+eq,0x82a8bcb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A8BCB8;
	// bdzf 4*cr6+eq,0x82a8bc94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A8BC94;
	// bne cr6,0x82a8bcc4
	if (!ctx.cr6.eq) goto loc_82A8BCC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A8BBB0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// b 0x82a8bce0
	goto loc_82A8BCE0;
loc_82A8BBB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A8BBBC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a8bce0
	goto loc_82A8BCE0;
loc_82A8BBC0:
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82a8bce0
	if (!ctx.cr6.eq) goto loc_82A8BCE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8bae0
	ctx.lr = 0x82A8BBD4;
	sub_82A8BAE0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a8bce0
	if (ctx.cr0.lt) goto loc_82A8BCE0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a88718
	ctx.lr = 0x82A8BBEC;
	sub_82A88718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82a8bce0
	goto loc_82A8BCE0;
loc_82A8BBF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82a86038
	ctx.lr = 0x82A8BC00;
	sub_82A86038(ctx, base);
	// b 0x82a8bce0
	goto loc_82A8BCE0;
loc_82A8BC04:
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82a8bce0
	if (!ctx.cr6.eq) goto loc_82A8BCE0;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r7,r7,1
	ctx.r7.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r6,r6,20,12,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0xFFFFF;
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// stw r7,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r7.u32);
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// stw r8,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r8.u32);
	// b 0x82a8bc60
	goto loc_82A8BC60;
loc_82A8BC4C:
	// lwz r9,-72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -72);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,53(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 53);
	// andi. r8,r8,223
	ctx.r8.u64 = ctx.r8.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r8,53(r9)
	PPC_STORE_U8(ctx.r9.u32 + 53, ctx.r8.u8);
loc_82A8BC60:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a8bc4c
	if (!ctx.cr6.eq) goto loc_82A8BC4C;
	// lbz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a8bce0
	if (ctx.cr0.eq) goto loc_82A8BCE0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A8BC80:
	// lbz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// andi. r11,r11,251
	ctx.r11.u64 = ctx.r11.u64 & 251;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82a8bc80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A8BC80;
	// b 0x82a8bce0
	goto loc_82A8BCE0;
loc_82A8BC94:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-5552
	ctx.r4.s64 = ctx.r11.s64 + -5552;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x82fa77c0
	ctx.lr = 0x82A8BCA8;
	sub_82FA77C0(ctx, base);
	// b 0x82a8bce0
	goto loc_82A8BCE0;
loc_82A8BCAC:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82a8bce0
	goto loc_82A8BCE0;
loc_82A8BCB8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// b 0x82a8bce0
	goto loc_82A8BCE0;
loc_82A8BCC4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// b 0x82a8bce0
	goto loc_82A8BCE0;
loc_82A8BCD8:
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,16
	ctx.r30.u64 = ctx.r30.u64 | 16;
loc_82A8BCE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A8BCE4:
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

__attribute__((alias("__imp__sub_82A8BCFC"))) PPC_WEAK_FUNC(sub_82A8BCFC);
PPC_FUNC_IMPL(__imp__sub_82A8BCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8BD00"))) PPC_WEAK_FUNC(sub_82A8BD00);
PPC_FUNC_IMPL(__imp__sub_82A8BD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A8BD08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// beq cr6,0x82a8bd68
	if (ctx.cr6.eq) goto loc_82A8BD68;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x82a8bd68
	if (ctx.cr6.eq) goto loc_82A8BD68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a86d48
	ctx.lr = 0x82A8BD3C;
	sub_82A86D48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a8bd50
	if (!ctx.cr0.eq) goto loc_82A8BD50;
loc_82A8BD44:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// b 0x82a8be14
	goto loc_82A8BE14;
loc_82A8BD50:
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a8bd6c
	if (ctx.cr6.eq) goto loc_82A8BD6C;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82a8bd6c
	goto loc_82A8BD6C;
loc_82A8BD68:
	// lwz r27,64(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
loc_82A8BD6C:
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// beq cr6,0x82a8bdac
	if (ctx.cr6.eq) goto loc_82A8BDAC;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x82a8bdac
	if (ctx.cr6.eq) goto loc_82A8BDAC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a86d48
	ctx.lr = 0x82A8BD8C;
	sub_82A86D48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a8bd44
	if (ctx.cr0.eq) goto loc_82A8BD44;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a8bdb0
	if (ctx.cr6.eq) goto loc_82A8BDB0;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82a8bdb0
	goto loc_82A8BDB0;
loc_82A8BDAC:
	// lwz r29,68(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
loc_82A8BDB0:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8bde0
	if (ctx.cr6.eq) goto loc_82A8BDE0;
	// lbz r10,53(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a8bdd8
	if (ctx.cr0.eq) goto loc_82A8BDD8;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8bde0
	if (!ctx.cr0.eq) goto loc_82A8BDE0;
	// b 0x82a8bd44
	goto loc_82A8BD44;
loc_82A8BDD8:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8bd44
	if (!ctx.cr0.eq) goto loc_82A8BD44;
loc_82A8BDE0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a8be10
	if (ctx.cr6.eq) goto loc_82A8BE10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a8ac40
	ctx.lr = 0x82A8BDF4;
	sub_82A8AC40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8be14
	if (ctx.cr0.lt) goto loc_82A8BE14;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
loc_82A8BE10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8BE14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8BE1C"))) PPC_WEAK_FUNC(sub_82A8BE1C);
PPC_FUNC_IMPL(__imp__sub_82A8BE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8BE20"))) PPC_WEAK_FUNC(sub_82A8BE20);
PPC_FUNC_IMPL(__imp__sub_82A8BE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A8BE28;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,80(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a8be54
	if (!ctx.cr0.eq) goto loc_82A8BE54;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// b 0x82a8c0a8
	goto loc_82A8C0A8;
loc_82A8BE54:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r8,92
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 92, ctx.xer);
	// bne cr6,0x82a8be70
	if (!ctx.cr6.eq) goto loc_82A8BE70;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82A8BE70:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a8be9c
	if (!ctx.cr6.gt) goto loc_82A8BE9C;
loc_82A8BE7C:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,92
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 92, ctx.xer);
	// beq cr6,0x82a8be98
	if (ctx.cr6.eq) goto loc_82A8BE98;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82a8be7c
	if (ctx.cr6.gt) goto loc_82A8BE7C;
	// b 0x82a8be9c
	goto loc_82A8BE9C;
loc_82A8BE98:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82A8BE9C:
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r27,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r27.u16);
	// sth r27,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r27.u16);
	// bl 0x82a86c40
	ctx.lr = 0x82A8BEB8;
	sub_82A86C40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a8becc
	if (!ctx.cr0.eq) goto loc_82A8BECC;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,51
	ctx.r3.u64 = ctx.r3.u64 | 51;
	// b 0x82a8c0a8
	goto loc_82A8C0A8;
loc_82A8BECC:
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8bf04
	if (ctx.cr6.eq) goto loc_82A8BF04;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a8bf08
	if (!ctx.cr0.eq) goto loc_82A8BF08;
	// lbz r10,53(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 53);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8bf08
	if (ctx.cr0.eq) goto loc_82A8BF08;
loc_82A8BEF8:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,34
	ctx.r3.u64 = ctx.r3.u64 | 34;
	// b 0x82a8c0a8
	goto loc_82A8C0A8;
loc_82A8BF04:
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_82A8BF08:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82a8bef8
	if (!ctx.cr6.eq) goto loc_82A8BEF8;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a88e68
	ctx.lr = 0x82A8BF2C;
	sub_82A88E68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8c004
	if (ctx.cr0.lt) goto loc_82A8C004;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a8bff8
	if (ctx.cr0.eq) goto loc_82A8BFF8;
	// lbz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8bff8
	if (!ctx.cr0.eq) goto loc_82A8BFF8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a86ac8
	ctx.lr = 0x82A8BF58;
	sub_82A86AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a8bef8
	if (!ctx.cr0.eq) goto loc_82A8BEF8;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a8ab50
	ctx.lr = 0x82A8BF7C;
	sub_82A8AB50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8c0a8
	if (ctx.cr0.lt) goto loc_82A8C0A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm r10,r10,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// bl 0x82a86f70
	ctx.lr = 0x82A8BFA8;
	sub_82A86F70(ctx, base);
	// lbz r11,158(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 158);
	// lbz r9,157(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 157);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8c014
	if (ctx.cr0.eq) goto loc_82A8C014;
	// lbz r11,161(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 161);
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,159(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bl 0x82a89c30
	ctx.lr = 0x82A8BFF4;
	sub_82A89C30(ctx, base);
	// b 0x82a8c014
	goto loc_82A8C014;
loc_82A8BFF8:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,53
	ctx.r3.u64 = ctx.r3.u64 | 53;
	// b 0x82a8c0a8
	goto loc_82A8C0A8;
loc_82A8C004:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a8c0a8
	if (!ctx.cr6.eq) goto loc_82A8C0A8;
loc_82A8C014:
	// clrlwi r5,r27,16
	ctx.r5.u64 = ctx.r27.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,80
	ctx.r3.s64 = ctx.r29.s64 + 80;
	// bl 0x82fa77c0
	ctx.lr = 0x82A8C024;
	sub_82FA77C0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stb r27,52(r29)
	PPC_STORE_U8(ctx.r29.u32 + 52, ctx.r27.u8);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a8c098
	if (ctx.cr6.eq) goto loc_82A8C098;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r31,r29,72
	ctx.r31.s64 = ctx.r29.s64 + 72;
	// lwz r10,76(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82a86910
	ctx.lr = 0x82A8C050;
	sub_82A86910(ctx, base);
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// clrlwi r28,r11,31
	ctx.r28.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a86988
	ctx.lr = 0x82A8C068;
	sub_82A86988(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82a8c080
	if (!ctx.cr6.eq) goto loc_82A8C080;
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,120
	ctx.r11.s64 = ctx.r26.s64 + 120;
	// bne 0x82a8c084
	if (!ctx.cr0.eq) goto loc_82A8C084;
loc_82A8C080:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82A8C084:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82A8C098:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a8abc0
	ctx.lr = 0x82A8C0A8;
	sub_82A8ABC0(ctx, base);
loc_82A8C0A8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8C0B0"))) PPC_WEAK_FUNC(sub_82A8C0B0);
PPC_FUNC_IMPL(__imp__sub_82A8C0B0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbz r11,53(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 53);
	// bne 0x82a8c0e4
	if (!ctx.cr0.eq) goto loc_82A8C0E4;
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82a8c154
	goto loc_82A8C154;
loc_82A8C0E4:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8c138
	if (ctx.cr0.eq) goto loc_82A8C138;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a88e68
	ctx.lr = 0x82A8C114;
	sub_82A88E68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8c128
	if (ctx.cr0.lt) goto loc_82A8C128;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,257
	ctx.r3.u64 = ctx.r3.u64 | 257;
	// b 0x82a8c15c
	goto loc_82A8C15C;
loc_82A8C128:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a8c15c
	if (!ctx.cr6.eq) goto loc_82A8C15C;
loc_82A8C138:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a8ac40
	ctx.lr = 0x82A8C144;
	sub_82A8AC40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8c15c
	if (ctx.cr0.lt) goto loc_82A8C15C;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_82A8C154:
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8C15C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82A8C174"))) PPC_WEAK_FUNC(sub_82A8C174);
PPC_FUNC_IMPL(__imp__sub_82A8C174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8C178"))) PPC_WEAK_FUNC(sub_82A8C178);
PPC_FUNC_IMPL(__imp__sub_82A8C178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A8C180;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a8c1a4
	if (ctx.cr6.eq) goto loc_82A8C1A4;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,127
	ctx.r3.u64 = ctx.r3.u64 | 127;
	// b 0x82a8c200
	goto loc_82A8C200;
loc_82A8C1A4:
	// lwz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82a8c1fc
	if (ctx.cr6.eq) goto loc_82A8C1FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a8ac40
	ctx.lr = 0x82A8C1C0;
	sub_82A8AC40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8c200
	if (ctx.cr0.lt) goto loc_82A8C200;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82a8c1ec
	if (!ctx.cr6.gt) goto loc_82A8C1EC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a8aec8
	ctx.lr = 0x82A8C1E4;
	sub_82A8AEC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8c200
	if (ctx.cr0.lt) goto loc_82A8C200;
loc_82A8C1EC:
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
loc_82A8C1FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8C200:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8C208"))) PPC_WEAK_FUNC(sub_82A8C208);
PPC_FUNC_IMPL(__imp__sub_82A8C208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A8C210;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,80(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r28,24(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x831791a4
	ctx.lr = 0x82A8C22C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r31,136(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82a8c3c8
	if (!ctx.cr6.eq) goto loc_82A8C3C8;
	// lbz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8c250
	if (ctx.cr0.eq) goto loc_82A8C250;
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,296
	ctx.r31.u64 = ctx.r31.u64 | 296;
	// b 0x82a8c3c8
	goto loc_82A8C3C8;
loc_82A8C250:
	// lbz r11,206(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 206);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a8c274
	if (!ctx.cr0.eq) goto loc_82A8C274;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82a8c274
	if (ctx.cr6.eq) goto loc_82A8C274;
loc_82A8C268:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,34
	ctx.r31.u64 = ctx.r31.u64 | 34;
	// b 0x82a8c3c8
	goto loc_82A8C3C8;
loc_82A8C274:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82a8c390
	if (ctx.cr6.eq) goto loc_82A8C390;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82a8c360
	if (ctx.cr6.eq) goto loc_82A8C360;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82a8c334
	if (ctx.cr6.eq) goto loc_82A8C334;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82a8c324
	if (ctx.cr6.eq) goto loc_82A8C324;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x82a8c2d8
	if (ctx.cr6.eq) goto loc_82A8C2D8;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x82a8c39c
	if (!ctx.cr6.eq) goto loc_82A8C39C;
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8c39c
	if (!ctx.cr0.eq) goto loc_82A8C39C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a8c268
	if (!ctx.cr6.eq) goto loc_82A8C268;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,28(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a8c178
	ctx.lr = 0x82A8C2D4;
	sub_82A8C178(ctx, base);
	// b 0x82a8c3c4
	goto loc_82A8C3C4;
loc_82A8C2D8:
	// lbz r10,53(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a8c39c
	if (!ctx.cr0.eq) goto loc_82A8C39C;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a8c268
	if (!ctx.cr6.eq) goto loc_82A8C268;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a8c30c
	if (ctx.cr6.eq) goto loc_82A8C30C;
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,127
	ctx.r31.u64 = ctx.r31.u64 | 127;
	// b 0x82a8c3c8
	goto loc_82A8C3C8;
loc_82A8C30C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a8aec8
	ctx.lr = 0x82A8C320;
	sub_82A8AEC8(ctx, base);
	// b 0x82a8c3c4
	goto loc_82A8C3C4;
loc_82A8C324:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,20(r28)
	PPC_STORE_U64(ctx.r28.u32 + 20, ctx.r11.u64);
	// b 0x82a8c3c8
	goto loc_82A8C3C8;
loc_82A8C334:
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8c39c
	if (!ctx.cr0.eq) goto loc_82A8C39C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a8c268
	if (!ctx.cr6.eq) goto loc_82A8C268;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,28(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a8c0b0
	ctx.lr = 0x82A8C35C;
	sub_82A8C0B0(ctx, base);
	// b 0x82a8c3c4
	goto loc_82A8C3C4;
loc_82A8C360:
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8c39c
	if (!ctx.cr0.eq) goto loc_82A8C39C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a8c268
	if (!ctx.cr6.eq) goto loc_82A8C268;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,28(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a8be20
	ctx.lr = 0x82A8C38C;
	sub_82A8BE20(ctx, base);
	// b 0x82a8c3c4
	goto loc_82A8C3C4;
loc_82A8C390:
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8c3a8
	if (ctx.cr0.eq) goto loc_82A8C3A8;
loc_82A8C39C:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
	// b 0x82a8c3c8
	goto loc_82A8C3C8;
loc_82A8C3A8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a8c268
	if (!ctx.cr6.eq) goto loc_82A8C268;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,28(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a8bd00
	ctx.lr = 0x82A8C3C4;
	sub_82A8BD00(ctx, base);
loc_82A8C3C4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82A8C3C8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A8C3D0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83179ba4
	ctx.lr = 0x82A8C3E0;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8C3E8"))) PPC_WEAK_FUNC(sub_82A8C3E8);
PPC_FUNC_IMPL(__imp__sub_82A8C3E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a848b0
	sub_82A848B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8C3EC"))) PPC_WEAK_FUNC(sub_82A8C3EC);
PPC_FUNC_IMPL(__imp__sub_82A8C3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8C3F0"))) PPC_WEAK_FUNC(sub_82A8C3F0);
PPC_FUNC_IMPL(__imp__sub_82A8C3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A8C3F8;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831797a4
	ctx.lr = 0x82A8C434;
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8c468
	if (ctx.cr0.lt) goto loc_82A8C468;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x831797e4
	ctx.lr = 0x82A8C454;
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge 0x82a8c470
	if (!ctx.cr0.lt) goto loc_82A8C470;
loc_82A8C460:
	// bl 0x83179634
	ctx.lr = 0x82A8C464;
	__imp__NtClose(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A8C468:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82A8C470:
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83179974
	ctx.lr = 0x82A8C4A0;
	__imp__NtDeviceIoControlFile(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82a8c4b0
	if (!ctx.cr0.lt) goto loc_82A8C4B0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82a8c460
	goto loc_82A8C460;
loc_82A8C4B0:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8c4c8
	if (ctx.cr6.eq) goto loc_82A8C4C8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// b 0x82a8c4cc
	goto loc_82A8C4CC;
loc_82A8C4C8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82A8C4CC:
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,16388
	ctx.r8.u64 = ctx.r8.u64 | 16388;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// clrlwi r22,r11,24
	ctx.r22.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83179974
	ctx.lr = 0x82A8C508;
	__imp__NtDeviceIoControlFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8c52c
	if (ctx.cr0.lt) goto loc_82A8C52C;
	// ld r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bne cr6,0x82a8c524
	if (!ctx.cr6.eq) goto loc_82A8C524;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,52
	ctx.r3.u64 = ctx.r3.u64 | 52;
loc_82A8C524:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a8c540
	if (!ctx.cr6.lt) goto loc_82A8C540;
loc_82A8C52C:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82A8C530:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83179634
	ctx.lr = 0x82A8C538;
	__imp__NtClose(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82a8c468
	goto loc_82A8C468;
loc_82A8C540:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// cmplw cr6,r24,r30
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82a8c558
	if (!ctx.cr6.lt) goto loc_82A8C558;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
loc_82A8C558:
	// li r29,4096
	ctx.r29.s64 = 4096;
	// cmplwi cr6,r30,4096
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4096, ctx.xer);
	// ble cr6,0x82a8c568
	if (!ctx.cr6.gt) goto loc_82A8C568;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82A8C568:
	// clrldi r25,r29,32
	ctx.r25.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// cmpld cr6,r25,r10
	ctx.cr6.compare<uint64_t>(ctx.r25.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82a8c580
	if (ctx.cr6.lt) goto loc_82A8C580;
loc_82A8C574:
	// lis r28,-16384
	ctx.r28.s64 = -1073741824;
	// ori r28,r28,127
	ctx.r28.u64 = ctx.r28.u64 | 127;
	// b 0x82a8c530
	goto loc_82A8C530;
loc_82A8C580:
	// clrldi r9,r24,32
	ctx.r9.u64 = ctx.r24.u64 & 0xFFFFFFFF;
	// rotldi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r8,r10,r9
	ctx.r8.s64 = ctx.r10.s64 / ctx.r9.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// andc r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// tdllei r9,0
	if (ctx.r9.u64 <= 0) __builtin_debugtrap();
	// tdlgei r8,-1
	if (ctx.r8.u64 >= 4294967295) __builtin_debugtrap();
	// cmplwi cr6,r11,65520
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65520, ctx.xer);
	// bge cr6,0x82a8c5c4
	if (!ctx.cr6.lt) goto loc_82A8C5C4;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r8,70
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 70, ctx.xer);
	// beq cr6,0x82a8c5c4
	if (ctx.cr6.eq) goto loc_82A8C5C4;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82a8c5cc
	goto loc_82A8C5CC;
loc_82A8C5C4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_82A8C5CC:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r30,-1
	ctx.r8.s64 = ctx.r30.s64 + -1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subf r11,r25,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r25.s64;
	// andc r27,r7,r8
	ctx.r27.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// clrldi r10,r27,32
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x82a8c574
	if (ctx.cr6.gt) goto loc_82A8C574;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x82a8c574
	if (ctx.cr6.gt) goto loc_82A8C574;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a90378
	ctx.lr = 0x82A8C604;
	sub_82A90378(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a8c618
	if (!ctx.cr0.eq) goto loc_82A8C618;
	// lis r28,-16384
	ctx.r28.s64 = -1073741824;
	// ori r28,r28,154
	ctx.r28.u64 = ctx.r28.u64 | 154;
	// b 0x82a8c530
	goto loc_82A8C530;
loc_82A8C618:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A8C628;
	sub_82FA7CF0(ctx, base);
	// std r23,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r23.u64);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83179824
	ctx.lr = 0x82A8C650;
	__imp__NtWriteFile(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x82a8c7dc
	if (ctx.cr0.lt) goto loc_82A8C7DC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A8C668;
	sub_82FA7CF0(ctx, base);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r25,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r25.u64);
	// beq 0x82a8c688
	if (ctx.cr0.eq) goto loc_82A8C688;
	// li r11,-8
	ctx.r11.s64 = -8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// b 0x82a8c698
	goto loc_82A8C698;
loc_82A8C688:
	// li r11,-8
	ctx.r11.s64 = -8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82A8C698:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83179824
	ctx.lr = 0x82A8C6BC;
	__imp__NtWriteFile(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x82a8c7dc
	if (ctx.cr0.lt) goto loc_82A8C7DC;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A8C6D4;
	sub_82FA7CF0(ctx, base);
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// clrldi r26,r30,32
	ctx.r26.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bne 0x82a8c698
	if (!ctx.cr0.eq) goto loc_82A8C698;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A8C6FC;
	sub_82FA7CF0(ctx, base);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82A8C700:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83179824
	ctx.lr = 0x82A8C724;
	__imp__NtWriteFile(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82a8c7d8
	if (ctx.cr0.lt) goto loc_82A8C7D8;
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// subf. r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bne 0x82a8c700
	if (!ctx.cr0.eq) goto loc_82A8C700;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A8C750;
	sub_82FA7CF0(ctx, base);
	// srw r11,r24,r22
	ctx.r11.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r24.u32 >> (ctx.r22.u8 & 0x3F));
	// lis r10,22612
	ctx.r10.s64 = 1481900032;
	// sth r23,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r23.u16);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r10,r10,16710
	ctx.r10.u64 = ctx.r10.u64 | 16710;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bl 0x83179794
	ctx.lr = 0x82A8C77C;
	__imp__KeQuerySystemTime(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// std r23,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r23.u64);
loc_82A8C788:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83179824
	ctx.lr = 0x82A8C7AC;
	__imp__NtWriteFile(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x82a8c7dc
	if (ctx.cr0.lt) goto loc_82A8C7DC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A8C7C4;
	sub_82FA7CF0(ctx, base);
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// subf. r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bne 0x82a8c788
	if (!ctx.cr0.eq) goto loc_82A8C788;
loc_82A8C7D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A8C7DC:
	// bl 0x82a90330
	ctx.lr = 0x82A8C7E0;
	sub_82A90330(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83179c14
	ctx.lr = 0x82A8C7E8;
	__imp__IoDismountVolumeByFileHandle(ctx, base);
	// b 0x82a8c530
	goto loc_82A8C530;
}

__attribute__((alias("__imp__sub_82A8C7EC"))) PPC_WEAK_FUNC(sub_82A8C7EC);
PPC_FUNC_IMPL(__imp__sub_82A8C7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8C7F0"))) PPC_WEAK_FUNC(sub_82A8C7F0);
PPC_FUNC_IMPL(__imp__sub_82A8C7F0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179544
	ctx.lr = 0x82A8C818;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-4
	ctx.r11.s64 = -4;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82A8C848"))) PPC_WEAK_FUNC(sub_82A8C848);
PPC_FUNC_IMPL(__imp__sub_82A8C848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A8C850;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lhz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// beq 0x82a8c8b8
	if (ctx.cr0.eq) goto loc_82A8C8B8;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_82A8C8A4:
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,92
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 92, ctx.xer);
	// beq cr6,0x82a8c8b8
	if (ctx.cr6.eq) goto loc_82A8C8B8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8c8a4
	if (!ctx.cr0.eq) goto loc_82A8C8A4;
loc_82A8C8B8:
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrlwi. r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r10,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// sth r10,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r10.u16);
	// sth r9,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r9.u16);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// sth r9,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r9.u16);
	// beq 0x82a8c9bc
	if (ctx.cr0.eq) goto loc_82A8C9BC;
	// clrlwi. r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a8c9bc
	if (ctx.cr0.eq) goto loc_82A8C9BC;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82a8c920
	if (!ctx.cr6.eq) goto loc_82A8C920;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,42
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 42, ctx.xer);
	// bne cr6,0x82a8c920
	if (!ctx.cr6.eq) goto loc_82A8C920;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x82a8c920
	if (!ctx.cr6.eq) goto loc_82A8C920;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,-42
	ctx.r11.s64 = ctx.r11.s64 + -42;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
loc_82A8C920:
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r8,16417
	ctx.r8.s64 = 16417;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831797a4
	ctx.lr = 0x82A8C940;
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8c9c4
	if (ctx.cr0.lt) goto loc_82A8C9C4;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// lwz r11,-7360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7360);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8C980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82a8c998
	if (!ctx.cr0.lt) goto loc_82A8C998;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83179634
	ctx.lr = 0x82A8C990;
	__imp__NtClose(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a8c9c4
	goto loc_82A8C9C4;
loc_82A8C998:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a8c9ac
	if (ctx.cr6.eq) goto loc_82A8C9AC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82a8c9b4
	goto loc_82A8C9B4;
loc_82A8C9AC:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83179634
	ctx.lr = 0x82A8C9B4;
	__imp__NtClose(ctx, base);
loc_82A8C9B4:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x82a8c9c4
	goto loc_82A8C9C4;
loc_82A8C9BC:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
loc_82A8C9C4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8C9CC"))) PPC_WEAK_FUNC(sub_82A8C9CC);
PPC_FUNC_IMPL(__imp__sub_82A8C9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8C9D0"))) PPC_WEAK_FUNC(sub_82A8C9D0);
PPC_FUNC_IMPL(__imp__sub_82A8C9D0) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-7360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7360);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8CA10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8ca1c
	if (ctx.cr0.lt) goto loc_82A8CA1C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82A8CA1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8CA2C"))) PPC_WEAK_FUNC(sub_82A8CA2C);
PPC_FUNC_IMPL(__imp__sub_82A8CA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8CA30"))) PPC_WEAK_FUNC(sub_82A8CA30);
PPC_FUNC_IMPL(__imp__sub_82A8CA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a8ca60
	if (ctx.cr6.eq) goto loc_82A8CA60;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mulli r11,r11,-10000
	ctx.r11.s64 = ctx.r11.s64 * -10000;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// b 0x82a8ca70
	goto loc_82A8CA70;
loc_82A8CA60:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82A8CA70:
	// clrlwi r30,r31,24
	ctx.r30.u64 = ctx.r31.u32 & 0xFF;
loc_82A8CA74:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83179c24
	ctx.lr = 0x82A8CA84;
	__imp__KeDelayExecutionThread(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a8ca94
	if (ctx.cr6.eq) goto loc_82A8CA94;
	// cmpwi cr6,r3,257
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 257, ctx.xer);
	// beq cr6,0x82a8ca74
	if (ctx.cr6.eq) goto loc_82A8CA74;
loc_82A8CA94:
	// addi r11,r3,-192
	ctx.r11.s64 = ctx.r3.s64 + -192;
	// li r10,192
	ctx.r10.s64 = 192;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
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

__attribute__((alias("__imp__sub_82A8CAC0"))) PPC_WEAK_FUNC(sub_82A8CAC0);
PPC_FUNC_IMPL(__imp__sub_82A8CAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A8CAC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// not r10,r3
	ctx.r10.u64 = ~ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r30,r10,20,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// clrlwi r29,r11,31
	ctx.r29.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r28,r11,0,29,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a8cc80
	if (ctx.cr6.eq) goto loc_82A8CC80;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a8cc80
	if (ctx.cr6.eq) goto loc_82A8CC80;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// blt cr6,0x82a8cc80
	if (ctx.cr6.lt) goto loc_82A8CC80;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// blt cr6,0x82a8cc80
	if (ctx.cr6.lt) goto loc_82A8CC80;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82a8cc64
	if (ctx.cr6.eq) goto loc_82A8CC64;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r31,r11,-7208
	ctx.r31.s64 = ctx.r11.s64 + -7208;
loc_82A8CB14:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82a8cc5c
	if (ctx.cr6.eq) goto loc_82A8CC5C;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr. r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8cb34
	if (!ctx.cr0.eq) goto loc_82A8CB34;
	// lhz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82a8cc38
	if (ctx.cr0.eq) goto loc_82A8CC38;
loc_82A8CB34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8cc4c
	if (ctx.cr6.eq) goto loc_82A8CC4C;
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a8cc54
	if (ctx.cr0.eq) goto loc_82A8CC54;
	// rlwinm r9,r10,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// rlwinm r27,r11,2,22,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r9,r27,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// beq cr6,0x82a8cbc4
	if (ctx.cr6.eq) goto loc_82A8CBC4;
	// rlwinm. r27,r8,0,15,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82a8cba8
	if (ctx.cr0.eq) goto loc_82A8CBA8;
	// rlwinm. r11,r9,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8cb94
	if (ctx.cr0.eq) goto loc_82A8CB94;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82a8cb88
	if (!ctx.cr6.lt) goto loc_82A8CB88;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x82a8cc1c
	goto loc_82A8CC1C;
loc_82A8CB88:
	// ble cr6,0x82a8cc1c
	if (!ctx.cr6.gt) goto loc_82A8CC1C;
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x82a8cc1c
	goto loc_82A8CC1C;
loc_82A8CB94:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a8cba0
	if (!ctx.cr6.eq) goto loc_82A8CBA0;
	// li r3,4
	ctx.r3.s64 = 4;
loc_82A8CBA0:
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x82a8cc24
	goto loc_82A8CC24;
loc_82A8CBA8:
	// rlwinm. r27,r9,0,15,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82a8cbc4
	if (ctx.cr0.eq) goto loc_82A8CBC4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a8cbbc
	if (!ctx.cr6.eq) goto loc_82A8CBBC;
	// li r3,8
	ctx.r3.s64 = 8;
loc_82A8CBBC:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x82a8cbdc
	goto loc_82A8CBDC;
loc_82A8CBC4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82a8cbe8
	if (ctx.cr6.eq) goto loc_82A8CBE8;
	// rlwinm. r27,r8,0,14,14
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x82a8cc24
	if (!ctx.cr0.eq) goto loc_82A8CC24;
	// rlwinm. r27,r9,0,14,14
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82a8cbe8
	if (ctx.cr0.eq) goto loc_82A8CBE8;
loc_82A8CBDC:
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x82a8cc2c
	goto loc_82A8CC2C;
loc_82A8CBE8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82a8cc10
	if (ctx.cr6.eq) goto loc_82A8CC10;
	// rlwinm. r27,r8,0,11,11
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82a8cc00
	if (ctx.cr0.eq) goto loc_82A8CC00;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// oris r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 524288;
loc_82A8CC00:
	// rlwinm. r10,r9,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a8cc10
	if (ctx.cr0.eq) goto loc_82A8CC10;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// oris r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 524288;
loc_82A8CC10:
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a8cc4c
	if (ctx.cr6.lt) goto loc_82A8CC4C;
	// bgt cr6,0x82a8cc54
	if (ctx.cr6.gt) goto loc_82A8CC54;
loc_82A8CC1C:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
loc_82A8CC24:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
loc_82A8CC2C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82a8cb14
	if (!ctx.cr6.eq) goto loc_82A8CB14;
	// b 0x82a8cc64
	goto loc_82A8CC64;
loc_82A8CC38:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-7256
	ctx.r11.s64 = ctx.r11.s64 + -7256;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82a8cc8c
	goto loc_82A8CC8C;
loc_82A8CC4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a8cc8c
	goto loc_82A8CC8C;
loc_82A8CC54:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82a8cc8c
	goto loc_82A8CC8C;
loc_82A8CC5C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82a8cc6c
	if (!ctx.cr6.eq) goto loc_82A8CC6C;
loc_82A8CC64:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82a8cc38
	if (ctx.cr6.eq) goto loc_82A8CC38;
loc_82A8CC6C:
	// subfic r11,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r5.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// b 0x82a8cc8c
	goto loc_82A8CC8C;
loc_82A8CC80:
	// li r3,87
	ctx.r3.s64 = 87;
	// bl 0x82a831c0
	ctx.lr = 0x82A8CC88;
	sub_82A831C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8CC8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8CC94"))) PPC_WEAK_FUNC(sub_82A8CC94);
PPC_FUNC_IMPL(__imp__sub_82A8CC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8CC98"))) PPC_WEAK_FUNC(sub_82A8CC98);
PPC_FUNC_IMPL(__imp__sub_82A8CC98) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// rlwinm r9,r7,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82a8ccc8
	if (ctx.cr6.eq) goto loc_82A8CCC8;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
loc_82A8CCC8:
	// lis r10,-32087
	ctx.r10.s64 = -2102853632;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r6,r10,968
	ctx.r6.s64 = ctx.r10.s64 + 968;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831796b4
	ctx.lr = 0x82A8CCE0;
	__imp__ExCreateThread(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a8ccf4
	if (!ctx.cr0.lt) goto loc_82A8CCF4;
	// bl 0x82a848b0
	ctx.lr = 0x82A8CCEC;
	sub_82A848B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a8ccf8
	goto loc_82A8CCF8;
loc_82A8CCF4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82A8CCF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8CD08"))) PPC_WEAK_FUNC(sub_82A8CD08);
PPC_FUNC_IMPL(__imp__sub_82A8CD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82A8CD10;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82a8cd4c
	if (!ctx.cr6.eq) goto loc_82A8CD4C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82A8CD2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a8cd2c
	if (!ctx.cr6.eq) goto loc_82A8CD2C;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82A8CD4C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82a8cee8
	if (!ctx.cr6.gt) goto loc_82A8CEE8;
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
	// lis r29,-31975
	ctx.r29.s64 = -2095513600;
	// lis r28,-31975
	ctx.r28.s64 = -2095513600;
	// lis r27,-31975
	ctx.r27.s64 = -2095513600;
	// lis r26,-31975
	ctx.r26.s64 = -2095513600;
	// lis r25,-31975
	ctx.r25.s64 = -2095513600;
	// lis r21,-31975
	ctx.r21.s64 = -2095513600;
	// lis r20,-31975
	ctx.r20.s64 = -2095513600;
	// lis r22,-31975
	ctx.r22.s64 = -2095513600;
	// addi r23,r9,-6104
	ctx.r23.s64 = ctx.r9.s64 + -6104;
	// addi r30,r11,-6080
	ctx.r30.s64 = ctx.r11.s64 + -6080;
loc_82A8CD8C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbzx r9,r8,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r7,r24,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r24.s64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82a8cee8
	if (!ctx.cr6.lt) goto loc_82A8CEE8;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x82a8ce30
	if (ctx.cr6.lt) goto loc_82A8CE30;
	// beq cr6,0x82a8ce1c
	if (ctx.cr6.eq) goto loc_82A8CE1C;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x82a8ce08
	if (ctx.cr6.lt) goto loc_82A8CE08;
	// beq cr6,0x82a8cdf4
	if (ctx.cr6.eq) goto loc_82A8CDF4;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// blt cr6,0x82a8cde0
	if (ctx.cr6.lt) goto loc_82A8CDE0;
	// bne cr6,0x82a8ce40
	if (!ctx.cr6.eq) goto loc_82A8CE40;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
loc_82A8CDE0:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82A8CDF4:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82A8CE08:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82A8CE1C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82A8CE30:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_82A8CE40:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,-6132(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + -6132);
	// lwzx r9,r9,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r23.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82a8ce68
	if (ctx.cr6.gt) goto loc_82A8CE68;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82a8cee0
	if (ctx.cr6.gt) goto loc_82A8CEE0;
	// b 0x82a8ce84
	goto loc_82A8CE84;
loc_82A8CE68:
	// lwz r9,-6128(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6128);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82a8ce94
	if (!ctx.cr6.gt) goto loc_82A8CE94;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82a8cee0
	if (ctx.cr6.gt) goto loc_82A8CEE0;
	// lwz r11,-6136(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -6136);
loc_82A8CE84:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// b 0x82a8cee0
	goto loc_82A8CEE0;
loc_82A8CE94:
	// lwz r9,-6120(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + -6120);
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82a8cec0
	if (ctx.cr6.gt) goto loc_82A8CEC0;
	// lwz r9,-6124(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6124);
	// lwz r8,-6112(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6112);
	// srw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r9,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r9.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
loc_82A8CEC0:
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82a8cee0
	if (ctx.cr6.gt) goto loc_82A8CEE0;
	// lwz r9,-6116(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6116);
	// lwz r8,-6108(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + -6108);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sthu r11,2(r5)
	ea = 2 + ctx.r5.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r5.u32 = ea;
loc_82A8CEE0:
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82a8cd8c
	if (ctx.cr6.lt) goto loc_82A8CD8C;
loc_82A8CEE8:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82a8cf04
	if (ctx.cr6.eq) goto loc_82A8CF04;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82a8cf04
	if (!ctx.cr6.lt) goto loc_82A8CF04;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x82a831c0
	ctx.lr = 0x82A8CF00;
	sub_82A831C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8CF04:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8CF0C"))) PPC_WEAK_FUNC(sub_82A8CF0C);
PPC_FUNC_IMPL(__imp__sub_82A8CF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8CF10"))) PPC_WEAK_FUNC(sub_82A8CF10);
PPC_FUNC_IMPL(__imp__sub_82A8CF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,1908(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1908);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8CF1C"))) PPC_WEAK_FUNC(sub_82A8CF1C);
PPC_FUNC_IMPL(__imp__sub_82A8CF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8CF20"))) PPC_WEAK_FUNC(sub_82A8CF20);
PPC_FUNC_IMPL(__imp__sub_82A8CF20) {
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
	// lwz r10,-22672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22672);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a8cf50
	if (ctx.cr6.eq) goto loc_82A8CF50;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8CF50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A8CF50:
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r10,r10,14652
	ctx.r10.s64 = ctx.r10.s64 + 14652;
	// addi r30,r11,14664
	ctx.r30.s64 = ctx.r11.s64 + 14664;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82a8cfa0
	if (!ctx.cr6.lt) goto loc_82A8CFA0;
loc_82A8CF70:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a8cfe8
	if (!ctx.cr6.eq) goto loc_82A8CFE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8cf8c
	if (ctx.cr6.eq) goto loc_82A8CF8C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8CF8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A8CF8C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82a8cf70
	if (ctx.cr6.lt) goto loc_82A8CF70;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a8cfe8
	if (!ctx.cr6.eq) goto loc_82A8CFE8;
loc_82A8CFA0:
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r30,r11,14648
	ctx.r30.s64 = ctx.r11.s64 + 14648;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82a8cfe4
	if (!ctx.cr6.lt) goto loc_82A8CFE4;
loc_82A8CFBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8cfd8
	if (ctx.cr6.eq) goto loc_82A8CFD8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82a8cfd8
	if (ctx.cr6.eq) goto loc_82A8CFD8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8CFD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A8CFD8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82a8cfbc
	if (ctx.cr6.lt) goto loc_82A8CFBC;
loc_82A8CFE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8CFE8:
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

__attribute__((alias("__imp__sub_82A8D000"))) PPC_WEAK_FUNC(sub_82A8D000);
PPC_FUNC_IMPL(__imp__sub_82A8D000) {
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
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82a8d05c
	if (!ctx.cr6.lt) goto loc_82A8D05C;
loc_82A8D034:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a8d05c
	if (!ctx.cr6.eq) goto loc_82A8D05C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8d050
	if (ctx.cr6.eq) goto loc_82A8D050;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8D050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A8D050:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82a8d034
	if (ctx.cr6.lt) goto loc_82A8D034;
loc_82A8D05C:
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

__attribute__((alias("__imp__sub_82A8D074"))) PPC_WEAK_FUNC(sub_82A8D074);
PPC_FUNC_IMPL(__imp__sub_82A8D074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8D078"))) PPC_WEAK_FUNC(sub_82A8D078);
PPC_FUNC_IMPL(__imp__sub_82A8D078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// lwz r11,2000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2000);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8d0d0
	if (ctx.cr6.eq) goto loc_82A8D0D0;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// ori r4,r4,1025
	ctx.r4.u64 = ctx.r4.u64 | 1025;
	// bl 0x831797f4
	ctx.lr = 0x82A8D0B4;
	__imp__RtlImageXexHeaderField(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a8d0d0
	if (ctx.cr0.eq) goto loc_82A8D0D0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a8d0d0
	if (!ctx.cr6.eq) goto loc_82A8D0D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a8d134
	goto loc_82A8D134;
loc_82A8D0D0:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A8D0E0:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82a8d0e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A8D0E0;
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,-4280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a8d120
	if (!ctx.cr6.eq) goto loc_82A8D120;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a80ec0
	ctx.lr = 0x82A8D11C;
	sub_82A80EC0(ctx, base);
	// stw r3,-4280(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4280, ctx.r3.u32);
loc_82A8D120:
	// bl 0x82a90448
	ctx.lr = 0x82A8D124;
	sub_82A90448(ctx, base);
	// lwz r11,-4280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4280);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82A8D134:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82A8D14C"))) PPC_WEAK_FUNC(sub_82A8D14C);
PPC_FUNC_IMPL(__imp__sub_82A8D14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8D150"))) PPC_WEAK_FUNC(sub_82A8D150);
PPC_FUNC_IMPL(__imp__sub_82A8D150) {
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
	// bl 0x82a8d078
	ctx.lr = 0x82A8D160;
	sub_82A8D078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a8d198
	if (!ctx.cr0.eq) goto loc_82A8D198;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2256);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8d190
	if (ctx.cr6.eq) goto loc_82A8D190;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8D190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A8D190:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83179c34
	ctx.lr = 0x82A8D198;
	__imp__HalReturnToFirmware(ctx, base);
loc_82A8D198:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8D1A8"))) PPC_WEAK_FUNC(sub_82A8D1A8);
PPC_FUNC_IMPL(__imp__sub_82A8D1A8) {
	PPC_FUNC_PROLOGUE();
	// lhz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82a904f0
	sub_82A904F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8D1B4"))) PPC_WEAK_FUNC(sub_82A8D1B4);
PPC_FUNC_IMPL(__imp__sub_82A8D1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8D1B8"))) PPC_WEAK_FUNC(sub_82A8D1B8);
PPC_FUNC_IMPL(__imp__sub_82A8D1B8) {
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
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a8d1f0
	if (ctx.cr0.eq) goto loc_82A8D1F0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831795c4
	ctx.lr = 0x82A8D1E8;
	__imp__RtlNtStatusToDosError(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a8d1f4
	goto loc_82A8D1F4;
loc_82A8D1F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A8D1F4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8D204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82A8D21C"))) PPC_WEAK_FUNC(sub_82A8D21C);
PPC_FUNC_IMPL(__imp__sub_82A8D21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8D220"))) PPC_WEAK_FUNC(sub_82A8D220);
PPC_FUNC_IMPL(__imp__sub_82A8D220) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A8D230"))) PPC_WEAK_FUNC(sub_82A8D230);
PPC_FUNC_IMPL(__imp__sub_82A8D230) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8D24C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x83179c44
	ctx.lr = 0x82A8D250;
	__imp__ExTerminateThread(ctx, base);
}

__attribute__((alias("__imp__sub_82A8D250"))) PPC_WEAK_FUNC(sub_82A8D250);
PPC_FUNC_IMPL(__imp__sub_82A8D250) {
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
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// bl 0x82a912b0
	ctx.lr = 0x82A8D270;
	sub_82A912B0(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x82a90df0
	ctx.lr = 0x82A8D278;
	sub_82A90DF0(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x82a90968
	ctx.lr = 0x82A8D280;
	sub_82A90968(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x82a904f8
	ctx.lr = 0x82A8D288;
	sub_82A904F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A8D298;
	sub_82FA7CF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A8D2B0;
	sub_82FA7CF0(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82A8D2E4"))) PPC_WEAK_FUNC(sub_82A8D2E4);
PPC_FUNC_IMPL(__imp__sub_82A8D2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8D2E8"))) PPC_WEAK_FUNC(sub_82A8D2E8);
PPC_FUNC_IMPL(__imp__sub_82A8D2E8) {
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
	// lwz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8d36c
	if (!ctx.cr0.eq) goto loc_82A8D36C;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8d36c
	if (ctx.cr0.eq) goto loc_82A8D36C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8D340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a8d350
	if (!ctx.cr0.lt) goto loc_82A8D350;
	// li r11,2048
	ctx.r11.s64 = 2048;
loc_82A8D350:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and. r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a8d364
	if (!ctx.cr0.eq) goto loc_82A8D364;
	// and. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8d36c
	if (ctx.cr0.eq) goto loc_82A8D36C;
loc_82A8D364:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a8d370
	goto loc_82A8D370;
loc_82A8D36C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A8D370:
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

__attribute__((alias("__imp__sub_82A8D388"))) PPC_WEAK_FUNC(sub_82A8D388);
PPC_FUNC_IMPL(__imp__sub_82A8D388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A8D390;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r30,r4,56
	ctx.r30.s64 = ctx.r4.s64 + 56;
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// bl 0x831791a4
	ctx.lr = 0x82A8D3E0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,196
	ctx.r3.s64 = ctx.r29.s64 + 196;
	// bl 0x82a90a00
	ctx.lr = 0x82A8D3EC;
	sub_82A90A00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a8d410
	if (ctx.cr0.eq) goto loc_82A8D410;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83179684
	ctx.lr = 0x82A8D408;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82a8d41c
	goto loc_82A8D41C;
loc_82A8D410:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82A8D41C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A8D424;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8D430"))) PPC_WEAK_FUNC(sub_82A8D430);
PPC_FUNC_IMPL(__imp__sub_82A8D430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A8D438;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8d468
	if (!ctx.cr0.eq) goto loc_82A8D468;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,34
	ctx.r3.u64 = ctx.r3.u64 | 34;
	// b 0x82a8d51c
	goto loc_82A8D51C;
loc_82A8D468:
	// addi r3,r29,140
	ctx.r3.s64 = ctx.r29.s64 + 140;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82a911f0
	ctx.lr = 0x82A8D478;
	sub_82A911F0(ctx, base);
	// std r3,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r3.u64);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// bne cr6,0x82a8d518
	if (!ctx.cr6.eq) goto loc_82A8D518;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// bl 0x831791a4
	ctx.lr = 0x82A8D4D4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,196
	ctx.r3.s64 = ctx.r29.s64 + 196;
	// bl 0x82a90a00
	ctx.lr = 0x82A8D4E0;
	sub_82A90A00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a8d504
	if (ctx.cr0.eq) goto loc_82A8D504;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83179684
	ctx.lr = 0x82A8D4FC;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82a8d510
	goto loc_82A8D510;
loc_82A8D504:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82A8D510:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A8D518;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A8D518:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82A8D51C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8D524"))) PPC_WEAK_FUNC(sub_82A8D524);
PPC_FUNC_IMPL(__imp__sub_82A8D524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8D528"))) PPC_WEAK_FUNC(sub_82A8D528);
PPC_FUNC_IMPL(__imp__sub_82A8D528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A8D530;
	__savegprlr_22(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a8d56c
	if (ctx.cr6.eq) goto loc_82A8D56C;
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x82a8d574
	goto loc_82A8D574;
loc_82A8D56C:
	// ld r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82A8D574:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a8d2e8
	ctx.lr = 0x82A8D584;
	sub_82A8D2E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a8d598
	if (!ctx.cr0.eq) goto loc_82A8D598;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// b 0x82a8d7d8
	goto loc_82A8D7D8;
loc_82A8D598:
	// li r11,259
	ctx.r11.s64 = 259;
	// stw r31,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r31.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// rlwinm. r6,r6,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// bne 0x82a8d60c
	if (!ctx.cr0.eq) goto loc_82A8D60C;
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
loc_82A8D60C:
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a8d620
	if (!ctx.cr6.eq) goto loc_82A8D620;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// b 0x82a8d658
	goto loc_82A8D658;
loc_82A8D620:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a8d658
	if (ctx.cr6.eq) goto loc_82A8D658;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83179c54
	ctx.lr = 0x82A8D63C;
	__imp__MmLockAndMapSegmentArray(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a8d654
	if (!ctx.cr0.eq) goto loc_82A8D654;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,154
	ctx.r3.u64 = ctx.r3.u64 | 154;
	// b 0x82a8d7d8
	goto loc_82A8D7D8;
loc_82A8D654:
	// stw r24,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
loc_82A8D658:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82a8d6b0
	if (!ctx.cr6.eq) goto loc_82A8D6B0;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a8d6b0
	if (ctx.cr0.eq) goto loc_82A8D6B0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x831791a4
	ctx.lr = 0x82A8D68C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// ld r27,48(r30)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// beq cr6,0x82a8d6a4
	if (ctx.cr6.eq) goto loc_82A8D6A4;
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// b 0x82a8d6a8
	goto loc_82A8D6A8;
loc_82A8D6A4:
	// std r27,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r27.u64);
loc_82A8D6A8:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// b 0x82a8d6fc
	goto loc_82A8D6FC;
loc_82A8D6B0:
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// beq cr6,0x82a8d6f0
	if (ctx.cr6.eq) goto loc_82A8D6F0;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// li r3,-2
	ctx.r3.s64 = -2;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8D6E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8d7d8
	if (ctx.cr0.lt) goto loc_82A8D7D8;
loc_82A8D6F0:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82A8D6FC:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8d720
	if (!ctx.cr0.eq) goto loc_82A8D720;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82a8d718
	if (!ctx.cr6.eq) goto loc_82A8D718;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82a8d720
	if (ctx.cr6.eq) goto loc_82A8D720;
loc_82A8D718:
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// b 0x82a8d72c
	goto loc_82A8D72C;
loc_82A8D720:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// bl 0x83179904
	ctx.lr = 0x82A8D72C;
	__imp__NtClearEvent(ctx, base);
loc_82A8D72C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82a8d744
	if (!ctx.cr6.eq) goto loc_82A8D744;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82a8d744
	if (ctx.cr6.eq) goto loc_82A8D744;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83179904
	ctx.lr = 0x82A8D744;
	__imp__NtClearEvent(ctx, base);
loc_82A8D744:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r22,196
	ctx.r3.s64 = ctx.r22.s64 + 196;
	// bl 0x82a90a00
	ctx.lr = 0x82A8D750;
	sub_82A90A00(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82a8d7ac
	if (ctx.cr6.eq) goto loc_82A8D7AC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a8d784
	if (ctx.cr6.eq) goto loc_82A8D784;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83179684
	ctx.lr = 0x82A8D774;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r11,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r11.u64);
	// b 0x82a8d78c
	goto loc_82A8D78C;
loc_82A8D784:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
loc_82A8D78C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A8D7A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82a8d7d8
	goto loc_82A8D7D8;
loc_82A8D7AC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a8d7bc
	if (ctx.cr6.eq) goto loc_82A8D7BC;
	// li r3,259
	ctx.r3.s64 = 259;
	// b 0x82a8d7d8
	goto loc_82A8D7D8;
loc_82A8D7BC:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8D7D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
loc_82A8D7D8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8D7E0"))) PPC_WEAK_FUNC(sub_82A8D7E0);
PPC_FUNC_IMPL(__imp__sub_82A8D7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A8D7E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r29,-16384
	ctx.r29.s64 = -1073741824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
	// beq cr6,0x82a8d83c
	if (ctx.cr6.eq) goto loc_82A8D83C;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r3,r9,-5240
	ctx.r3.s64 = ctx.r9.s64 + -5240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// bctrl 
	ctx.lr = 0x82A8D838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A8D83C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82a91740
	ctx.lr = 0x82A8D848;
	sub_82A91740(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8d86c
	if (ctx.cr6.eq) goto loc_82A8D86C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82a8d86c
	if (ctx.cr6.lt) goto loc_82A8D86C;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8D86C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A8D86C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8D878"))) PPC_WEAK_FUNC(sub_82A8D878);
PPC_FUNC_IMPL(__imp__sub_82A8D878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A8D880;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82a8d8b4
	if (ctx.cr6.eq) goto loc_82A8D8B4;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82a8d8b8
	goto loc_82A8D8B8;
loc_82A8D8B4:
	// lis r11,8
	ctx.r11.s64 = 524288;
loc_82A8D8B8:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82a912d8
	ctx.lr = 0x82A8D8C8;
	sub_82A912D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r30,196
	ctx.r3.s64 = ctx.r30.s64 + 196;
	// lwz r28,32(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82a90980
	ctx.lr = 0x82A8D8DC;
	sub_82A90980(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r30,268
	ctx.r3.s64 = ctx.r30.s64 + 268;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82a90540
	ctx.lr = 0x82A8D8EC;
	sub_82A90540(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a74840
	ctx.lr = 0x82A8D900;
	sub_82A74840(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8D918"))) PPC_WEAK_FUNC(sub_82A8D918);
PPC_FUNC_IMPL(__imp__sub_82A8D918) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,2256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2256);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8d960
	if (ctx.cr6.eq) goto loc_82A8D960;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1720);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a8d96c
	if (!ctx.cr0.eq) goto loc_82A8D96C;
loc_82A8D960:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,549
	ctx.r31.u64 = ctx.r31.u64 | 549;
	// b 0x82a8da14
	goto loc_82A8DA14;
loc_82A8D96C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-5220
	ctx.r3.s64 = ctx.r11.s64 + -5220;
	// bl 0x831798a4
	ctx.lr = 0x82A8D97C;
	__imp__XexGetModuleHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a8da14
	if (ctx.cr0.lt) goto loc_82A8DA14;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,155
	ctx.r4.s64 = 155;
	// bl 0x83179894
	ctx.lr = 0x82A8D994;
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a8da14
	if (ctx.cr0.lt) goto loc_82A8DA14;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,156
	ctx.r4.s64 = 156;
	// bl 0x83179894
	ctx.lr = 0x82A8D9AC;
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a8da14
	if (ctx.cr0.lt) goto loc_82A8DA14;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,157
	ctx.r4.s64 = 157;
	// bl 0x83179894
	ctx.lr = 0x82A8D9C4;
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a8da14
	if (ctx.cr0.lt) goto loc_82A8DA14;
	// addi r5,r30,64
	ctx.r5.s64 = ctx.r30.s64 + 64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,158
	ctx.r4.s64 = 158;
	// bl 0x83179894
	ctx.lr = 0x82A8D9DC;
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a8da14
	if (ctx.cr0.lt) goto loc_82A8DA14;
	// addi r5,r30,68
	ctx.r5.s64 = ctx.r30.s64 + 68;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,159
	ctx.r4.s64 = 159;
	// bl 0x83179894
	ctx.lr = 0x82A8D9F4;
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a8da14
	if (ctx.cr0.lt) goto loc_82A8DA14;
	// addi r5,r30,72
	ctx.r5.s64 = ctx.r30.s64 + 72;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,160
	ctx.r4.s64 = 160;
	// bl 0x83179894
	ctx.lr = 0x82A8DA0C;
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82a8da24
	if (!ctx.cr0.lt) goto loc_82A8DA24;
loc_82A8DA14:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A8DA24;
	sub_82FA7CF0(ctx, base);
loc_82A8DA24:
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

__attribute__((alias("__imp__sub_82A8DA40"))) PPC_WEAK_FUNC(sub_82A8DA40);
PPC_FUNC_IMPL(__imp__sub_82A8DA40) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A8DA48;
	__savegprlr_28(ctx, base);
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// lis r9,-32087
	ctx.r9.s64 = -2102853632;
	// lis r8,-32087
	ctx.r8.s64 = -2102853632;
	// addi r9,r9,9456
	ctx.r9.s64 = ctx.r9.s64 + 9456;
	// lis r7,-32087
	ctx.r7.s64 = -2102853632;
	// lis r6,-32087
	ctx.r6.s64 = -2102853632;
	// lwz r11,-7360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7360);
	// addi r8,r8,9208
	ctx.r8.s64 = ctx.r8.s64 + 9208;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lis r5,-32087
	ctx.r5.s64 = -2102853632;
	// addi r7,r7,9008
	ctx.r7.s64 = ctx.r7.s64 + 9008;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r9,r6,8832
	ctx.r9.s64 = ctx.r6.s64 + 8832;
	// lis r4,-32087
	ctx.r4.s64 = -2102853632;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lis r31,-32087
	ctx.r31.s64 = -2102853632;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r8,r5,8544
	ctx.r8.s64 = ctx.r5.s64 + 8544;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r30,-32087
	ctx.r30.s64 = -2102853632;
	// addi r7,r4,8184
	ctx.r7.s64 = ctx.r4.s64 + 8184;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// addi r9,r31,8072
	ctx.r9.s64 = ctx.r31.s64 + 8072;
	// lis r29,-32087
	ctx.r29.s64 = -2102853632;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// lis r28,-32087
	ctx.r28.s64 = -2102853632;
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// addi r8,r30,7768
	ctx.r8.s64 = ctx.r30.s64 + 7768;
	// addi r7,r29,7712
	ctx.r7.s64 = ctx.r29.s64 + 7712;
	// addi r9,r28,6784
	ctx.r9.s64 = ctx.r28.s64 + 6784;
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// addi r11,r11,6648
	ctx.r11.s64 = ctx.r11.s64 + 6648;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r3,-7360(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7360, ctx.r3.u32);
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8DAE8"))) PPC_WEAK_FUNC(sub_82A8DAE8);
PPC_FUNC_IMPL(__imp__sub_82A8DAE8) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a8db28
	if (ctx.cr6.eq) goto loc_82A8DB28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,-7360(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7360, ctx.r11.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82A8DB20;
	sub_82FA7CF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82A8DB28:
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

__attribute__((alias("__imp__sub_82A8DB3C"))) PPC_WEAK_FUNC(sub_82A8DB3C);
PPC_FUNC_IMPL(__imp__sub_82A8DB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8DB40"))) PPC_WEAK_FUNC(sub_82A8DB40);
PPC_FUNC_IMPL(__imp__sub_82A8DB40) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r5,r3,16
	ctx.r5.s64 = ctx.r3.s64 + 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm. r11,r10,26,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,10,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3;
	// beq 0x82a8dbd4
	if (ctx.cr0.eq) goto loc_82A8DBD4;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8dbd4
	if (ctx.cr6.eq) goto loc_82A8DBD4;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,-5208
	ctx.r10.s64 = ctx.r8.s64 + -5208;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// subfic r11,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r7.s64;
	// clrldi r6,r11,32
	ctx.r6.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_82A8DB84:
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subfic r11,r4,32
	ctx.xer.ca = ctx.r4.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r4.s64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r11,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srd r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r31.u64 >> (ctx.r11.u8 & 0x7F));
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// slw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// srd r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r6.u8 & 0x7F));
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bdnz 0x82a8db84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A8DB84;
loc_82A8DBD4:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8DBDC"))) PPC_WEAK_FUNC(sub_82A8DBDC);
PPC_FUNC_IMPL(__imp__sub_82A8DBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8DBE0"))) PPC_WEAK_FUNC(sub_82A8DBE0);
PPC_FUNC_IMPL(__imp__sub_82A8DBE0) {
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
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm. r10,r10,0,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFFC0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a8dc2c
	if (!ctx.cr0.eq) goto loc_82A8DC2C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8DC20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// b 0x82a8dc34
	goto loc_82A8DC34;
loc_82A8DC2C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82a8db40
	ctx.lr = 0x82A8DC34;
	sub_82A8DB40(ctx, base);
loc_82A8DC34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A8DC44"))) PPC_WEAK_FUNC(sub_82A8DC44);
PPC_FUNC_IMPL(__imp__sub_82A8DC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8DC48"))) PPC_WEAK_FUNC(sub_82A8DC48);
PPC_FUNC_IMPL(__imp__sub_82A8DC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A8DC50;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// std r6,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r6.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// rlwinm. r6,r11,26,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82a8dd3c
	if (!ctx.cr0.eq) goto loc_82A8DD3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8DCA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// cmpd cr6,r11,r9
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r9.s64, ctx.xer);
	// blt cr6,0x82a8dcc4
	if (ctx.cr6.lt) goto loc_82A8DCC4;
loc_82A8DCB4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82a8de80
	goto loc_82A8DE80;
loc_82A8DCC4:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r7,0
	ctx.r7.s64 = 0;
	// clrldi r10,r27,32
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// lwz r6,308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// rlwinm r8,r8,28,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x3;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// li r7,0
	ctx.r7.s64 = 0;
	// divdu r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 / ctx.r8.u64;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// divdu r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 / ctx.r8.u64;
	// mulld r7,r4,r8
	ctx.r7.s64 = ctx.r4.s64 * ctx.r8.s64;
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// subf r7,r7,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r11,r30,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r30.s64;
	// tdllei r8,0
	if (ctx.r8.u64 <= 0) __builtin_debugtrap();
	// tdllei r8,0
	if (ctx.r8.u64 <= 0) __builtin_debugtrap();
	// tdllei r8,0
	if (ctx.r8.u64 <= 0) __builtin_debugtrap();
	// divdu r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 / ctx.r8.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x82a8dd30
	if (!ctx.cr6.lt) goto loc_82A8DD30;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A8DD30:
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82a8de98
	goto loc_82A8DE98;
loc_82A8DD3C:
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// rlwinm r4,r11,10,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r29,r9,-5208
	ctx.r29.s64 = ctx.r9.s64 + -5208;
	// beq cr6,0x82a8ddc8
	if (ctx.cr6.eq) goto loc_82A8DDC8;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// subfic r5,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r7.s64;
loc_82A8DD70:
	// mullw r9,r7,r11
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r31,r9,27
	ctx.r31.u64 = ctx.r9.u32 & 0x1F;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subfic r9,r31,32
	ctx.xer.ca = ctx.r31.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r31.s64;
	// rlwinm r8,r9,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r9,r28,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r9.u8 & 0x3F));
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// srw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmpld cr6,r9,r30
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r30.u64, ctx.xer);
	// bgt cr6,0x82a8ddc8
	if (ctx.cr6.gt) goto loc_82A8DDC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r30,r9,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// std r30,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r30.u64);
	// blt cr6,0x82a8dd70
	if (ctx.cr6.lt) goto loc_82A8DD70;
loc_82A8DDC8:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82a8dcb4
	if (ctx.cr6.eq) goto loc_82A8DCB4;
	// lwz r9,268(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r8,308(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// blt cr6,0x82a8ddfc
	if (ctx.cr6.lt) goto loc_82A8DDFC;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// b 0x82a8de98
	goto loc_82A8DE98;
loc_82A8DDFC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// subf r8,r10,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82a8de70
	if (!ctx.cr6.lt) goto loc_82A8DE70;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// subfic r4,r5,32
	ctx.xer.ca = ctx.r5.u32 <= 32;
	ctx.r4.s64 = 32 - ctx.r5.s64;
loc_82A8DE1C:
	// mullw r9,r5,r11
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r30,r9,27
	ctx.r30.u64 = ctx.r9.u32 & 0x1F;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subfic r9,r30,32
	ctx.xer.ca = ctx.r30.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r30.s64;
	// rlwinm r7,r9,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r9.u8 & 0x3F));
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// srw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82a8de6c
	if (!ctx.cr6.lt) goto loc_82A8DE6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82a8de1c
	if (ctx.cr6.lt) goto loc_82A8DE1C;
loc_82A8DE6C:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
loc_82A8DE70:
	// bne cr6,0x82a8de8c
	if (!ctx.cr6.eq) goto loc_82A8DE8C;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// subf r9,r8,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r8.s64;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
loc_82A8DE80:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82a8de98
	goto loc_82A8DE98;
loc_82A8DE8C:
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
loc_82A8DE98:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8DEA0"))) PPC_WEAK_FUNC(sub_82A8DEA0);
PPC_FUNC_IMPL(__imp__sub_82A8DEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A8DEA8;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r27,r3,196
	ctx.r27.s64 = ctx.r3.s64 + 196;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// b 0x82a8e004
	goto loc_82A8E004;
loc_82A8DED0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a8dfb8
	if (!ctx.cr6.eq) goto loc_82A8DFB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a8df28
	if (!ctx.cr6.eq) goto loc_82A8DF28;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a8dffc
	if (!ctx.cr6.eq) goto loc_82A8DFFC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r29,140
	ctx.r3.s64 = ctx.r29.s64 + 140;
	// bl 0x82a90fd0
	ctx.lr = 0x82A8DF08;
	sub_82A90FD0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82a8dfb4
	if (ctx.cr0.eq) goto loc_82A8DFB4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82a8dbe0
	ctx.lr = 0x82A8DF1C;
	sub_82A8DBE0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// b 0x82a8dffc
	goto loc_82A8DFFC;
loc_82A8DF28:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a8dfb8
	if (!ctx.cr6.eq) goto loc_82A8DFB8;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82a8dffc
	if (ctx.cr6.eq) goto loc_82A8DFFC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r29,140
	ctx.r3.s64 = ctx.r29.s64 + 140;
	// bl 0x82a90fd0
	ctx.lr = 0x82A8DF50;
	sub_82A90FD0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82a8dfac
	if (ctx.cr0.eq) goto loc_82A8DFAC;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r31,88
	ctx.r6.s64 = ctx.r31.s64 + 88;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r22,r31,84
	ctx.r22.s64 = ctx.r31.s64 + 84;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r8,r31,72
	ctx.r8.s64 = ctx.r31.s64 + 72;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// bl 0x82a8dc48
	ctx.lr = 0x82A8DF98;
	sub_82A8DC48(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82a8dffc
	if (ctx.cr6.eq) goto loc_82A8DFFC;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x82a8dfb8
	goto loc_82A8DFB8;
loc_82A8DFAC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82A8DFB4:
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
loc_82A8DFB8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a8e054
	if (!ctx.cr6.eq) goto loc_82A8E054;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a8e054
	if (!ctx.cr6.eq) goto loc_82A8E054;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a8dffc
	if (!ctx.cr6.eq) goto loc_82A8DFFC;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82a8dffc
	if (ctx.cr6.eq) goto loc_82A8DFFC;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a8e028
	if (ctx.cr6.gt) goto loc_82A8E028;
loc_82A8DFFC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82A8E004:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a90bb8
	ctx.lr = 0x82A8E00C;
	sub_82A90BB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a8ded0
	if (!ctx.cr0.eq) goto loc_82A8DED0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r23,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r23.u32);
loc_82A8E01C:
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82A8E028:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_82A8E04C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82a8e01c
	goto loc_82A8E01C;
loc_82A8E054:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// b 0x82a8e04c
	goto loc_82A8E04C;
}

__attribute__((alias("__imp__sub_82A8E070"))) PPC_WEAK_FUNC(sub_82A8E070);
PPC_FUNC_IMPL(__imp__sub_82A8E070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A8E078;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r27,-16384
	ctx.r27.s64 = -1073741824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 1;
	// beq cr6,0x82a8e0dc
	if (ctx.cr6.eq) goto loc_82A8E0DC;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lwz r7,400(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r3,r9,-5240
	ctx.r3.s64 = ctx.r9.s64 + -5240;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bctrl 
	ctx.lr = 0x82A8E0D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82A8E0DC:
	// addi r29,r28,12
	ctx.r29.s64 = ctx.r28.s64 + 12;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8dea0
	ctx.lr = 0x82A8E0F4;
	sub_82A8DEA0(ctx, base);
	// lwz r5,400(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// bl 0x82a90618
	ctx.lr = 0x82A8E118;
	sub_82A90618(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a8e1a4
	if (!ctx.cr6.eq) goto loc_82A8E1A4;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82a8e14c
	if (!ctx.cr6.lt) goto loc_82A8E14C;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// b 0x82a8e1a4
	goto loc_82A8E1A4;
loc_82A8E14C:
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x82fa77c0
	ctx.lr = 0x82A8E15C;
	sub_82FA77C0(ctx, base);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lis r11,4085
	ctx.r11.s64 = 267714560;
	// ori r11,r11,4845
	ctx.r11.u64 = ctx.r11.u64 | 4845;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a8e1a4
	if (!ctx.cr6.eq) goto loc_82A8E1A4;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r9,r9,28,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x3;
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82a8e1a4
	if (ctx.cr6.gt) goto loc_82A8E1A4;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a910c8
	ctx.lr = 0x82A8E1A4;
	sub_82A910C8(ctx, base);
loc_82A8E1A4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8e1c8
	if (ctx.cr6.eq) goto loc_82A8E1C8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82a8e1c8
	if (ctx.cr6.lt) goto loc_82A8E1C8;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bctrl 
	ctx.lr = 0x82A8E1C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A8E1C8:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8E1DC"))) PPC_WEAK_FUNC(sub_82A8E1DC);
PPC_FUNC_IMPL(__imp__sub_82A8E1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8E1E0"))) PPC_WEAK_FUNC(sub_82A8E1E0);
PPC_FUNC_IMPL(__imp__sub_82A8E1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A8E1E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r27,-16384
	ctx.r27.s64 = -1073741824;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// ori r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a8e31c
	if (!ctx.cr6.eq) goto loc_82A8E31C;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8e25c
	if (ctx.cr6.eq) goto loc_82A8E25C;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lwz r7,400(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r3,r9,-5240
	ctx.r3.s64 = ctx.r9.s64 + -5240;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bctrl 
	ctx.lr = 0x82A8E258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82A8E25C:
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// addi r29,r28,12
	ctx.r29.s64 = ctx.r28.s64 + 12;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8dea0
	ctx.lr = 0x82A8E278;
	sub_82A8DEA0(ctx, base);
	// lwz r5,400(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// bl 0x82a90618
	ctx.lr = 0x82A8E29C;
	sub_82A90618(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a8e2f4
	if (!ctx.cr6.eq) goto loc_82A8E2F4;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r9,r9,28,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x3;
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82a8e2dc
	if (ctx.cr6.gt) goto loc_82A8E2DC;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x82a910c8
	ctx.lr = 0x82A8E2DC;
	sub_82A910C8(ctx, base);
loc_82A8E2DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82a8dbe0
	ctx.lr = 0x82A8E2EC;
	sub_82A8DBE0(ctx, base);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
loc_82A8E2F4:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8e31c
	if (ctx.cr6.eq) goto loc_82A8E31C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82a8e31c
	if (ctx.cr6.lt) goto loc_82A8E31C;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8E31C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A8E31C:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8E32C"))) PPC_WEAK_FUNC(sub_82A8E32C);
PPC_FUNC_IMPL(__imp__sub_82A8E32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8E330"))) PPC_WEAK_FUNC(sub_82A8E330);
PPC_FUNC_IMPL(__imp__sub_82A8E330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A8E338;
	__savegprlr_14(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lis r15,-16384
	ctx.r15.s64 = -1073741824;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r16.u32);
	// mr r14,r16
	ctx.r14.u64 = ctx.r16.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// ori r15,r15,1
	ctx.r15.u64 = ctx.r15.u64 | 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a8e3a4
	if (!ctx.cr6.eq) goto loc_82A8E3A4;
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82a8e8c4
	if (ctx.cr6.eq) goto loc_82A8E8C4;
	// stw r16,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r16.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r30.u32);
	// addi r3,r3,140
	ctx.r3.s64 = ctx.r3.s64 + 140;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x82a90fd0
	ctx.lr = 0x82A8E3A0;
	sub_82A90FD0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82A8E3A4:
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r27,r31,76
	ctx.r27.s64 = ctx.r31.s64 + 76;
	// ori r21,r9,32768
	ctx.r21.u64 = ctx.r9.u64 | 32768;
	// addi r22,r11,-5240
	ctx.r22.s64 = ctx.r11.s64 + -5240;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82a8e524
	if (!ctx.cr6.eq) goto loc_82A8E524;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82a8e4e0
	if (!ctx.cr6.eq) goto loc_82A8E4E0;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8e410
	if (ctx.cr6.eq) goto loc_82A8E410;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// stw r16,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r16.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r7,400(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r16,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r16.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bctrl 
	ctx.lr = 0x82A8E40C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
loc_82A8E410:
	// stw r16,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r16.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r5,400(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r28,268
	ctx.r3.s64 = ctx.r28.s64 + 268;
	// bl 0x82a90618
	ctx.lr = 0x82A8E438;
	sub_82A90618(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a8e454
	if (ctx.cr6.eq) goto loc_82A8E454;
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x82a8e4b4
	goto loc_82A8E4B4;
loc_82A8E454:
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,400(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r10,r10,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// slw r10,r21,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r10.u8 & 0x3F));
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a8e47c
	if (ctx.cr6.gt) goto loc_82A8E47C;
	// addi r3,r28,140
	ctx.r3.s64 = ctx.r28.s64 + 140;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a910c8
	ctx.lr = 0x82A8E47C;
	sub_82A910C8(ctx, base);
loc_82A8E47C:
	// lwz r26,8(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm r10,r11,0,8,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00000;
	// rlwinm r9,r11,26,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFFFF;
	// subfic r11,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82A8E4B4:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8e4d8
	if (ctx.cr6.eq) goto loc_82A8E4D8;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// blt cr6,0x82a8e4d8
	if (ctx.cr6.lt) goto loc_82A8E4D8;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bctrl 
	ctx.lr = 0x82A8E4D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A8E4D8:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82a8e8cc
	if (!ctx.cr6.eq) goto loc_82A8E8CC;
loc_82A8E4E0:
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// ld r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r31,72
	ctx.r8.s64 = ctx.r31.s64 + 72;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a8dc48
	ctx.lr = 0x82A8E514;
	sub_82A8DC48(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82a8e8c4
	if (ctx.cr6.eq) goto loc_82A8E8C4;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82A8E524:
	// lwz r17,88(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82a8e8ac
	if (ctx.cr6.eq) goto loc_82A8E8AC;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r18,72(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// lwz r24,24(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r20,r16
	ctx.r20.u64 = ctx.r16.u64;
	// lwz r23,84(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r19,r16
	ctx.r19.u64 = ctx.r16.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8e5c0
	if (ctx.cr6.eq) goto loc_82A8E5C0;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a8e578
	if (!ctx.cr6.eq) goto loc_82A8E578;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,2
	ctx.r5.s64 = 2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a8e57c
	if (!ctx.cr6.eq) goto loc_82A8E57C;
loc_82A8E578:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
loc_82A8E57C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a8e58c
	if (ctx.cr6.eq) goto loc_82A8E58C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82A8E58C:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a8e59c
	if (ctx.cr0.eq) goto loc_82A8E59C;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
loc_82A8E59C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r31,32
	ctx.r8.s64 = ctx.r31.s64 + 32;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bctrl 
	ctx.lr = 0x82A8E5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
loc_82A8E5C0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82a8e5e0
	if (!ctx.cr6.eq) goto loc_82A8E5E0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r28,140
	ctx.r3.s64 = ctx.r28.s64 + 140;
	// bl 0x82a90fd0
	ctx.lr = 0x82A8E5D8;
	sub_82A90FD0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82a8e600
	if (ctx.cr0.eq) goto loc_82A8E600;
loc_82A8E5E0:
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r10,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// slw r25,r21,r10
	ctx.r25.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r10.u8 & 0x3F));
	// slw r30,r9,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x82a8e604
	goto loc_82A8E604;
loc_82A8E600:
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82A8E604:
	// lwz r11,420(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a8e874
	if (ctx.cr6.gt) goto loc_82A8E874;
	// lwz r11,400(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a8e874
	if (ctx.cr6.gt) goto loc_82A8E874;
	// lwz r11,372(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a8e670
	if (ctx.cr6.eq) goto loc_82A8E670;
	// lwz r11,420(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	// lwz r10,416(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 416);
	// lwz r9,424(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 424);
	// lwz r3,360(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 360);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// bl 0x82a74758
	ctx.lr = 0x82A8E650;
	sub_82A74758(ctx, base);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r7,368(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 368);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r6,364(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// bl 0x82a74898
	ctx.lr = 0x82A8E668;
	sub_82A74898(ctx, base);
	// stw r3,360(r28)
	PPC_STORE_U32(ctx.r28.u32 + 360, ctx.r3.u32);
	// stw r30,372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 372, ctx.r30.u32);
loc_82A8E670:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r26,16
	ctx.r30.s64 = ctx.r26.s64 + 16;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// and r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm r29,r10,10,30,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bgt cr6,0x82a8e83c
	if (ctx.cr6.gt) goto loc_82A8E83C;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r26,r28,268
	ctx.r26.s64 = ctx.r28.s64 + 268;
	// addi r27,r10,-5208
	ctx.r27.s64 = ctx.r10.s64 + -5208;
loc_82A8E6D0:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a8e6e8
	if (!ctx.cr6.lt) goto loc_82A8E6E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// b 0x82a8e708
	goto loc_82A8E708;
loc_82A8E6E8:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a8dea0
	ctx.lr = 0x82A8E6FC;
	sub_82A8DEA0(ctx, base);
	// lwz r22,400(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// lwz r20,60(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lwz r19,64(r28)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
loc_82A8E708:
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a90618
	ctx.lr = 0x82A8E72C;
	sub_82A90618(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a8e828
	if (!ctx.cr6.eq) goto loc_82A8E828;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// subf r5,r11,r17
	ctx.r5.s64 = ctx.r17.s64 - ctx.r11.s64;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// beq cr6,0x82a8e7cc
	if (ctx.cr6.eq) goto loc_82A8E7CC;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r21,132(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,360(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 360);
	// lwzx r8,r8,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// mullw r10,r8,r21
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r21.s32);
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r23,r10,27
	ctx.r23.u64 = ctx.r10.u32 & 0x1F;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subfic r10,r23,32
	ctx.xer.ca = ctx.r23.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r23.s64;
	// subfic r21,r8,32
	ctx.xer.ca = ctx.r8.u32 <= 32;
	ctx.r21.s64 = 32 - ctx.r8.s64;
	// rlwinm r8,r10,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r14,4(r11)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// srw r10,r14,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r14.u32 >> (ctx.r10.u8 & 0x3F));
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// slw r11,r11,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r23.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// srw r8,r11,r21
	ctx.r8.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r21.u8 & 0x3F));
	// bl 0x82a74890
	ctx.lr = 0x82A8E7BC;
	sub_82A74890(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a8e830
	if (ctx.cr0.lt) goto loc_82A8E830;
	// lwz r14,120(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x82a8e7f0
	goto loc_82A8E7F0;
loc_82A8E7CC:
	// subf r11,r23,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r23.s64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a8e7e0
	if (ctx.cr6.lt) goto loc_82A8E7E0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_82A8E7E0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A8E7F0;
	sub_82FA77C0(ctx, base);
loc_82A8E7F0:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r24,r10,r24
	ctx.r24.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// ble cr6,0x82a8e6d0
	if (!ctx.cr6.gt) goto loc_82A8E6D0;
	// b 0x82a8e83c
	goto loc_82A8E83C;
loc_82A8E828:
	// mr r14,r10
	ctx.r14.u64 = ctx.r10.u64;
	// b 0x82a8e838
	goto loc_82A8E838;
loc_82A8E830:
	// lis r14,-16384
	ctx.r14.s64 = -1073741824;
	// ori r14,r14,258
	ctx.r14.u64 = ctx.r14.u64 | 258;
loc_82A8E838:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82A8E83C:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a8e87c
	if (!ctx.cr6.lt) goto loc_82A8E87C;
	// stw r16,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r16.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r28,268
	ctx.r3.s64 = ctx.r28.s64 + 268;
	// bl 0x82a90618
	ctx.lr = 0x82A8E870;
	sub_82A90618(ctx, base);
	// b 0x82a8e87c
	goto loc_82A8E87C;
loc_82A8E874:
	// lis r14,-16384
	ctx.r14.s64 = -1073741824;
	// ori r14,r14,13
	ctx.r14.u64 = ctx.r14.u64 | 13;
loc_82A8E87C:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8e8a0
	if (ctx.cr6.eq) goto loc_82A8E8A0;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// blt cr6,0x82a8e8a0
	if (ctx.cr6.lt) goto loc_82A8E8A0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8E8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A8E8A0:
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82a8e8cc
	if (!ctx.cr6.eq) goto loc_82A8E8CC;
loc_82A8E8AC:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a8e8cc
	if (!ctx.cr6.lt) goto loc_82A8E8CC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8e8cc
	if (ctx.cr6.eq) goto loc_82A8E8CC;
loc_82A8E8C4:
	// lis r14,-16384
	ctx.r14.s64 = -1073741824;
	// ori r14,r14,17
	ctx.r14.u64 = ctx.r14.u64 | 17;
loc_82A8E8CC:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8e8dc
	if (ctx.cr6.eq) goto loc_82A8E8DC;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
loc_82A8E8DC:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8e8ec
	if (ctx.cr6.eq) goto loc_82A8E8EC;
	// stw r14,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r14.u32);
loc_82A8E8EC:
	// cmpwi cr6,r14,259
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 259, ctx.xer);
	// bne cr6,0x82a8e8fc
	if (!ctx.cr6.eq) goto loc_82A8E8FC;
	// lis r14,-16384
	ctx.r14.s64 = -1073741824;
	// ori r14,r14,549
	ctx.r14.u64 = ctx.r14.u64 | 549;
loc_82A8E8FC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8e964
	if (ctx.cr6.eq) goto loc_82A8E964;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// blt cr6,0x82a8e91c
	if (ctx.cr6.lt) goto loc_82A8E91C;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82a8e920
	goto loc_82A8E920;
loc_82A8E91C:
	// stw r14,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r14.u32);
loc_82A8E920:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r10,-32087
	ctx.r10.s64 = -2102853632;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r8,-32087
	ctx.r8.s64 = -2102853632;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-11848
	ctx.r5.s64 = ctx.r10.s64 + -11848;
	// addi r4,r8,-11744
	ctx.r4.s64 = ctx.r8.s64 + -11744;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x831798f4
	ctx.lr = 0x82A8E94C;
	__imp__NtQueueApcThread(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8E960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82a8e99c
	goto loc_82A8E99C;
loc_82A8E964:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a8e978
	if (ctx.cr6.eq) goto loc_82A8E978;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83179c64
	ctx.lr = 0x82A8E978;
	__imp__MmUnlockAndUnmapSegmentArray(ctx, base);
loc_82A8E978:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r14,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r14.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a8e99c
	if (ctx.cr6.eq) goto loc_82A8E99C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83179644
	ctx.lr = 0x82A8E99C;
	__imp__NtSetEvent(ctx, base);
loc_82A8E99C:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a8e9b0
	if (ctx.cr6.eq) goto loc_82A8E9B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83179644
	ctx.lr = 0x82A8E9B0;
	__imp__NtSetEvent(ctx, base);
loc_82A8E9B0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A8E9B8"))) PPC_WEAK_FUNC(sub_82A8E9B8);
PPC_FUNC_IMPL(__imp__sub_82A8E9B8) {
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
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// lwz r4,376(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// bl 0x82a90d10
	ctx.lr = 0x82A8E9DC;
	sub_82A90D10(ctx, base);
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a8e9f4
	if (ctx.cr6.eq) goto loc_82A8E9F4;
	// bl 0x83179634
	ctx.lr = 0x82A8E9F0;
	__imp__NtClose(ctx, base);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
loc_82A8E9F4:
	// lwz r3,360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a8ea08
	if (ctx.cr6.eq) goto loc_82A8EA08;
	// bl 0x82a74758
	ctx.lr = 0x82A8EA04;
	sub_82A74758(ctx, base);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
loc_82A8EA08:
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x82a90820
	ctx.lr = 0x82A8EA10;
	sub_82A90820(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x82a91038
	ctx.lr = 0x82A8EA18;
	sub_82A91038(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82a91648
	ctx.lr = 0x82A8EA20;
	sub_82A91648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8dae8
	ctx.lr = 0x82A8EA28;
	sub_82A8DAE8(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A8EA38;
	sub_82FA7CF0(ctx, base);
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a8ea5c
	if (ctx.cr6.eq) goto loc_82A8EA5C;
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// bl 0x82691460
	ctx.lr = 0x82A8EA54;
	sub_82691460(ctx, base);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
loc_82A8EA5C:
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

__attribute__((alias("__imp__sub_82A8EA74"))) PPC_WEAK_FUNC(sub_82A8EA74);
PPC_FUNC_IMPL(__imp__sub_82A8EA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8EA78"))) PPC_WEAK_FUNC(sub_82A8EA78);
PPC_FUNC_IMPL(__imp__sub_82A8EA78) {
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
	// bl 0x82a8e9b8
	ctx.lr = 0x82A8EA90;
	sub_82A8E9B8(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x82a908d8
	ctx.lr = 0x82A8EA98;
	sub_82A908D8(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x82a90de8
	ctx.lr = 0x82A8EAA0;
	sub_82A90DE8(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x82a912a8
	ctx.lr = 0x82A8EAA8;
	sub_82A912A8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82a919f0
	ctx.lr = 0x82A8EAB0;
	sub_82A919F0(ctx, base);
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

__attribute__((alias("__imp__sub_82A8EAC4"))) PPC_WEAK_FUNC(sub_82A8EAC4);
PPC_FUNC_IMPL(__imp__sub_82A8EAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A8EAC8"))) PPC_WEAK_FUNC(sub_82A8EAC8);
PPC_FUNC_IMPL(__imp__sub_82A8EAC8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8eafc
	if (ctx.cr6.eq) goto loc_82A8EAFC;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r3,r10,-5240
	ctx.r3.s64 = ctx.r10.s64 + -5240;
	// bctrl 
	ctx.lr = 0x82A8EAFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A8EAFC:
	// addi r30,r31,196
	ctx.r30.s64 = ctx.r31.s64 + 196;
	// b 0x82a8eb5c
	goto loc_82A8EB5C;
loc_82A8EB04:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82a8eb3c
	if (ctx.cr6.lt) goto loc_82A8EB3C;
	// beq cr6,0x82a8eb2c
	if (ctx.cr6.eq) goto loc_82A8EB2C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82a8eb48
	if (!ctx.cr6.lt) goto loc_82A8EB48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8e330
	ctx.lr = 0x82A8EB28;
	sub_82A8E330(ctx, base);
	// b 0x82a8eb48
	goto loc_82A8EB48;
loc_82A8EB2C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8e1e0
	ctx.lr = 0x82A8EB38;
	sub_82A8E1E0(ctx, base);
	// b 0x82a8eb48
	goto loc_82A8EB48;
loc_82A8EB3C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a8e070
	ctx.lr = 0x82A8EB48;
	sub_82A8E070(ctx, base);
loc_82A8EB48:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a8eb5c
	if (ctx.cr6.eq) goto loc_82A8EB5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83179644
	ctx.lr = 0x82A8EB5C;
	__imp__NtSetEvent(ctx, base);
loc_82A8EB5C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a90ae8
	ctx.lr = 0x82A8EB68;
	sub_82A90AE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a8eb04
	if (!ctx.cr0.eq) goto loc_82A8EB04;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a8eb88
	if (ctx.cr6.eq) goto loc_82A8EB88;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A8EB88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A8EB88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

