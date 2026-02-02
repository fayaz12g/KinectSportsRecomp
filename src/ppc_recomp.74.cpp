#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825C9FEC"))) PPC_WEAK_FUNC(sub_825C9FEC);
PPC_FUNC_IMPL(__imp__sub_825C9FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C9FF0"))) PPC_WEAK_FUNC(sub_825C9FF0);
PPC_FUNC_IMPL(__imp__sub_825C9FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x825C9FF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2252);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r3,2252
	ctx.r29.s64 = ctx.r3.s64 + 2252;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825ca030
	goto loc_825CA030;
loc_825CA01C:
	// lwz r8,44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x825ca038
	if (ctx.cr6.gt) goto loc_825CA038;
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_825CA030:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825ca01c
	if (ctx.cr6.lt) goto loc_825CA01C;
loc_825CA038:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r26,r10,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x825ca07c
	if (ctx.cr6.eq) goto loc_825CA07C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x825ca07c
	if (ctx.cr6.eq) goto loc_825CA07C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r27,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r27.u32);
loc_825CA07C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r25,r10,r11
	ctx.r25.s32 = ctx.r10.s32 / ctx.r11.s32;
	// bl 0x825e3ed0
	ctx.lr = 0x825CA09C;
	sub_825E3ED0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x825ca0dc
	if (ctx.cr6.eq) goto loc_825CA0DC;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r9,r8,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r5,r10,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x825CA0DC;
	sub_82FA20F0(ctx, base);
loc_825CA0DC:
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r9,r10,-15416
	ctx.r9.s64 = ctx.r10.s64 + -15416;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_825CA0F4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825ca114
	if (!ctx.cr6.lt) goto loc_825CA114;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x825ca0f4
	if (!ctx.cr0.eq) goto loc_825CA0F4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_825CA114:
	// bne cr6,0x825ca11c
	if (!ctx.cr6.eq) goto loc_825CA11C;
	// stb r27,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r27.u8);
loc_825CA11C:
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stb r27,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r27.u8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CA140"))) PPC_WEAK_FUNC(sub_825CA140);
PPC_FUNC_IMPL(__imp__sub_825CA140) {
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
	// lwz r10,2256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2256);
	// addi r31,r3,2252
	ctx.r31.s64 = ctx.r3.s64 + 2252;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825ca17c
	if (ctx.cr6.eq) goto loc_825CA17C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825CA17C:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x825ca1a8
	goto loc_825CA1A8;
loc_825CA198:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825ca1b4
	if (ctx.cr6.eq) goto loc_825CA1B4;
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
loc_825CA1A8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825ca198
	if (ctx.cr6.lt) goto loc_825CA198;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825CA1B4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x825e3f80
	ctx.lr = 0x825CA1BC;
	sub_825E3F80(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq 0x825ca218
	if (ctx.cr0.eq) goto loc_825CA218;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x825ca218
	if (ctx.cr6.eq) goto loc_825CA218;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r30,r9,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// b 0x825ca208
	goto loc_825CA208;
loc_825CA1F4:
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CA204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_825CA208:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825ca1f4
	if (!ctx.cr6.eq) goto loc_825CA1F4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_825CA218:
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

__attribute__((alias("__imp__sub_825CA230"))) PPC_WEAK_FUNC(sub_825CA230);
PPC_FUNC_IMPL(__imp__sub_825CA230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825CA238;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2256);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r28.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r28,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ca2c4
	if (ctx.cr6.eq) goto loc_825CA2C4;
	// lwz r11,2252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2252);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825ca2bc
	goto loc_825CA2BC;
loc_825CA278:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CA288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825ca2b8
	if (!ctx.cr0.eq) goto loc_825CA2B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825ca2a8
	if (!ctx.cr6.eq) goto loc_825CA2A8;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// b 0x825ca2b8
	goto loc_825CA2B8;
loc_825CA2A8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825ca2b8
	if (!ctx.cr6.eq) goto loc_825CA2B8;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_825CA2B8:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_825CA2BC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825ca278
	if (!ctx.cr6.eq) goto loc_825CA278;
loc_825CA2C4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CA2D0"))) PPC_WEAK_FUNC(sub_825CA2D0);
PPC_FUNC_IMPL(__imp__sub_825CA2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825CA2D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// bl 0x82d2d090
	ctx.lr = 0x825CA2E4;
	sub_82D2D090(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,16(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825ca314
	if (!ctx.cr6.gt) goto loc_825CA314;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_825CA2FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ca868
	ctx.lr = 0x825CA308;
	sub_825CA868(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x825ca2fc
	if (!ctx.cr0.eq) goto loc_825CA2FC;
loc_825CA314:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bne 0x825ca348
	if (!ctx.cr0.eq) goto loc_825CA348;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// li r6,12
	ctx.r6.s64 = 12;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CA348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825CA348:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CA35C"))) PPC_WEAK_FUNC(sub_825CA35C);
PPC_FUNC_IMPL(__imp__sub_825CA35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA360"))) PPC_WEAK_FUNC(sub_825CA360);
PPC_FUNC_IMPL(__imp__sub_825CA360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825CA368;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825ca4f4
	if (ctx.cr6.eq) goto loc_825CA4F4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825ca4e0
	if (ctx.cr6.eq) goto loc_825CA4E0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x825ca4c8
	if (ctx.cr6.eq) goto loc_825CA4C8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x825ca41c
	if (ctx.cr6.eq) goto loc_825CA41C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x825ca414
	if (ctx.cr6.eq) goto loc_825CA414;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x825ca3a8
	if (ctx.cr6.eq) goto loc_825CA3A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825ca4f8
	goto loc_825CA4F8;
loc_825CA3A8:
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2ea28
	ctx.lr = 0x825CA3B0;
	sub_82D2EA28(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82d2d0a0
	ctx.lr = 0x825CA3C4;
	sub_82D2D0A0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r10,-15348
	ctx.r5.s64 = ctx.r10.s64 + -15348;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CA3E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82d2d0a0
	ctx.lr = 0x825CA3E8;
	sub_82D2D0A0(ctx, base);
	// bl 0x82d2efa0
	ctx.lr = 0x825CA3EC;
	sub_82D2EFA0(ctx, base);
loc_825CA3EC:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82547ca0
	ctx.lr = 0x825CA3F4;
	sub_82547CA0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82a74720
	ctx.lr = 0x825CA404;
	sub_82A74720(ctx, base);
	// bl 0x825c5fe0
	ctx.lr = 0x825CA408;
	sub_825C5FE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x825ca4a0
	goto loc_825CA4A0;
loc_825CA414:
	// bl 0x825ca5d0
	ctx.lr = 0x825CA418;
	sub_825CA5D0(ctx, base);
	// b 0x825ca3ec
	goto loc_825CA3EC;
loc_825CA41C:
	// bl 0x825ca7e8
	ctx.lr = 0x825CA420;
	sub_825CA7E8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// bl 0x825ca7e8
	ctx.lr = 0x825CA42C;
	sub_825CA7E8(ctx, base);
	// addic. r3,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r3.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825ca438
	if (ctx.cr0.eq) goto loc_825CA438;
	// bl 0x82d2d0b0
	ctx.lr = 0x825CA438;
	sub_82D2D0B0(ctx, base);
loc_825CA438:
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2ea28
	ctx.lr = 0x825CA440;
	sub_82D2EA28(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825ca7e8
	ctx.lr = 0x825CA454;
	sub_825CA7E8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r10,-15348
	ctx.r5.s64 = ctx.r10.s64 + -15348;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CA474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x825ca7e8
	ctx.lr = 0x825CA478;
	sub_825CA7E8(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82d2efa0
	ctx.lr = 0x825CA480;
	sub_82D2EFA0(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82547ca0
	ctx.lr = 0x825CA488;
	sub_82547CA0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82a74720
	ctx.lr = 0x825CA498;
	sub_82A74720(ctx, base);
	// bl 0x825c5fe0
	ctx.lr = 0x825CA49C;
	sub_825C5FE0(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_825CA4A0:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwsync 
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,26752
	ctx.r10.s64 = ctx.r10.s64 + 26752;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82c43d38
	ctx.lr = 0x825CA4C4;
	sub_82C43D38(ctx, base);
	// b 0x825ca4f4
	goto loc_825CA4F4;
loc_825CA4C8:
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825ca7e8
	ctx.lr = 0x825CA4D0;
	sub_825CA7E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825ca4f4
	goto loc_825CA4F4;
loc_825CA4E0:
	// lfs f2,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f1,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x825ca680
	ctx.lr = 0x825CA4F4;
	sub_825CA680(ctx, base);
loc_825CA4F4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825CA4F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CA500"))) PPC_WEAK_FUNC(sub_825CA500);
PPC_FUNC_IMPL(__imp__sub_825CA500) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82a74720
	ctx.lr = 0x825CA51C;
	sub_82A74720(ctx, base);
	// bl 0x825c5fe0
	ctx.lr = 0x825CA520;
	sub_825C5FE0(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
loc_825CA528:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825ca538
	if (ctx.cr6.eq) goto loc_825CA538;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547d80
	ctx.lr = 0x825CA538;
	sub_82547D80(ctx, base);
loc_825CA538:
	// bl 0x82a74720
	ctx.lr = 0x825CA53C;
	sub_82A74720(ctx, base);
	// bl 0x825c5fe0
	ctx.lr = 0x825CA540;
	sub_825C5FE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x82c44140
	ctx.lr = 0x825CA558;
	sub_82C44140(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825ca57c
	if (ctx.cr6.eq) goto loc_825CA57C;
	// lwsync 
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ca360
	ctx.lr = 0x825CA57C;
	sub_825CA360(ctx, base);
loc_825CA57C:
	// bl 0x82a74720
	ctx.lr = 0x825CA580;
	sub_82A74720(ctx, base);
	// bl 0x825c5fe0
	ctx.lr = 0x825CA584;
	sub_825C5FE0(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ca59c
	if (ctx.cr6.eq) goto loc_825CA59C;
	// bl 0x82c44070
	ctx.lr = 0x825CA598;
	sub_82C44070(ctx, base);
	// b 0x825ca5a0
	goto loc_825CA5A0;
loc_825CA59C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825CA5A0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825ca528
	if (ctx.cr6.eq) goto loc_825CA528;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825ca5b8
	if (ctx.cr6.eq) goto loc_825CA5B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547d80
	ctx.lr = 0x825CA5B8;
	sub_82547D80(ctx, base);
loc_825CA5B8:
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

__attribute__((alias("__imp__sub_825CA5D0"))) PPC_WEAK_FUNC(sub_825CA5D0);
PPC_FUNC_IMPL(__imp__sub_825CA5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825CA5D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x825ca7e8
	ctx.lr = 0x825CA5E0;
	sub_825CA7E8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ca630
	if (ctx.cr6.eq) goto loc_825CA630;
	// bl 0x825ca7e8
	ctx.lr = 0x825CA5F4;
	sub_825CA7E8(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825ca628
	if (ctx.cr6.eq) goto loc_825CA628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30cc0
	ctx.lr = 0x825CA608;
	sub_82D30CC0(ctx, base);
	// bl 0x82d2d090
	ctx.lr = 0x825CA60C;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,448
	ctx.r5.s64 = 448;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CA628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825CA628:
	// bl 0x825ca7e8
	ctx.lr = 0x825CA62C;
	sub_825CA7E8(ctx, base);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
loc_825CA630:
	// bl 0x82d2efd8
	ctx.lr = 0x825CA634;
	sub_82D2EFD8(ctx, base);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2ea28
	ctx.lr = 0x825CA63C;
	sub_82D2EA28(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825ca7e8
	ctx.lr = 0x825CA650;
	sub_825CA7E8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CA668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x825ca7e8
	ctx.lr = 0x825CA66C;
	sub_825CA7E8(ctx, base);
	// bl 0x825ca7e8
	ctx.lr = 0x825CA670;
	sub_825CA7E8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CA67C"))) PPC_WEAK_FUNC(sub_825CA67C);
PPC_FUNC_IMPL(__imp__sub_825CA67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA680"))) PPC_WEAK_FUNC(sub_825CA680);
PPC_FUNC_IMPL(__imp__sub_825CA680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825CA688;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x825ca7e8
	ctx.lr = 0x825CA6A8;
	sub_825CA7E8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825ca720
	if (!ctx.cr6.eq) goto loc_825CA720;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825ca720
	if (ctx.cr6.eq) goto loc_825CA720;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d30ab8
	ctx.lr = 0x825CA6C4;
	sub_82D30AB8(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d2d090
	ctx.lr = 0x825CA6D0;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,448
	ctx.r4.s64 = 448;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CA6E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825ca700
	if (ctx.cr0.eq) goto loc_825CA700;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d30b10
	ctx.lr = 0x825CA6F8;
	sub_82D30B10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x825ca704
	goto loc_825CA704;
loc_825CA700:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825CA704:
	// bl 0x825ca7e8
	ctx.lr = 0x825CA708;
	sub_825CA7E8(ctx, base);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// bl 0x825ca7e8
	ctx.lr = 0x825CA710;
	sub_825CA7E8(ctx, base);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82dc7b48
	ctx.lr = 0x825CA718;
	sub_82DC7B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825ca2d0
	ctx.lr = 0x825CA720;
	sub_825CA2D0(ctx, base);
loc_825CA720:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f0,-1980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1980);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x825ca738
	if (!ctx.cr6.gt) goto loc_825CA738;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_825CA738:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82dc7b30
	ctx.lr = 0x825CA744;
	sub_82DC7B30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc89b0
	ctx.lr = 0x825CA74C;
	sub_82DC89B0(ctx, base);
	// b 0x825ca780
	goto loc_825CA780;
loc_825CA750:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825ca774
	if (ctx.cr6.eq) goto loc_825CA774;
	// bl 0x825ca7e8
	ctx.lr = 0x825CA75C;
	sub_825CA7E8(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82dcb3a0
	ctx.lr = 0x825CA770;
	sub_82DCB3A0(ctx, base);
	// b 0x825ca780
	goto loc_825CA780;
loc_825CA774:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82dc87f0
	ctx.lr = 0x825CA780;
	sub_82DC87F0(ctx, base);
loc_825CA780:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc7b38
	ctx.lr = 0x825CA788;
	sub_82DC7B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ca750
	if (ctx.cr0.eq) goto loc_825CA750;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82547ca0
	ctx.lr = 0x825CA798;
	sub_82547CA0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82a74720
	ctx.lr = 0x825CA7A8;
	sub_82A74720(ctx, base);
	// bl 0x825c5fe0
	ctx.lr = 0x825CA7AC;
	sub_825C5FE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwsync 
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,26752
	ctx.r10.s64 = ctx.r10.s64 + 26752;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82c43d38
	ctx.lr = 0x825CA7D8;
	sub_82C43D38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CA7E8"))) PPC_WEAK_FUNC(sub_825CA7E8);
PPC_FUNC_IMPL(__imp__sub_825CA7E8) {
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
	// lis r30,-31955
	ctx.r30.s64 = -2094202880;
	// lwz r3,28972(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28972);
	// bl 0x831791e4
	ctx.lr = 0x825CA808;
	__imp__KeTlsGetValue(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x825ca84c
	if (!ctx.cr0.eq) goto loc_825CA84C;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82691500
	ctx.lr = 0x825CA818;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825ca82c
	if (ctx.cr0.eq) goto loc_825CA82C;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82d2d0b0
	ctx.lr = 0x825CA828;
	sub_82D2D0B0(ctx, base);
	// b 0x825ca830
	goto loc_825CA830;
loc_825CA82C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825CA830:
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x825CA840;
	sub_82FA7CF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,28972(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28972);
	// bl 0x83179204
	ctx.lr = 0x825CA84C;
	__imp__KeTlsSetValue(ctx, base);
loc_825CA84C:
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

__attribute__((alias("__imp__sub_825CA868"))) PPC_WEAK_FUNC(sub_825CA868);
PPC_FUNC_IMPL(__imp__sub_825CA868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825CA870;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d2d090
	ctx.lr = 0x825CA880;
	sub_82D2D090(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// bne 0x825ca8b4
	if (!ctx.cr0.eq) goto loc_825CA8B4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CA8B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825CA8B4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq 0x825ca8e8
	if (ctx.cr0.eq) goto loc_825CA8E8;
	// bl 0x82d2d090
	ctx.lr = 0x825CA8CC;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CA8E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825CA8E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CA8F4"))) PPC_WEAK_FUNC(sub_825CA8F4);
PPC_FUNC_IMPL(__imp__sub_825CA8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA8F8"))) PPC_WEAK_FUNC(sub_825CA8F8);
PPC_FUNC_IMPL(__imp__sub_825CA8F8) {
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
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r6,r11,26952
	ctx.r6.s64 = ctx.r11.s64 + 26952;
	// addi r3,r10,8280
	ctx.r3.s64 = ctx.r10.s64 + 8280;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x82fa3590
	ctx.lr = 0x825CA928;
	sub_82FA3590(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r10,-24756
	ctx.r7.s64 = ctx.r10.s64 + -24756;
	// addi r30,r11,-2340
	ctx.r30.s64 = ctx.r11.s64 + -2340;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// addi r31,r11,-5892
	ctx.r31.s64 = ctx.r11.s64 + -5892;
	// lvlx v0,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,255
	ctx.r10.s64 = 255;
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lvlx v12,0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v11,v12,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// addi r6,r8,-21088
	ctx.r6.s64 = ctx.r8.s64 + -21088;
	// li r5,400
	ctx.r5.s64 = 400;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// vrlimi128 v13,v12,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// li r8,0
	ctx.r8.s64 = 0;
	// vrlimi128 v11,v0,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// vor v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// vrlimi128 v0,v11,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stvx128 v0,r6,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x825ca9b0
	if (ctx.cr6.eq) goto loc_825CA9B0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CA9AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_825CA9B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// bl 0x82547fd0
	ctx.lr = 0x825CA9BC;
	sub_82547FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825ca9d4
	if (ctx.cr0.eq) goto loc_825CA9D4;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lfs f0,31396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31396);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-6052(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -6052, temp.u32);
loc_825CA9D4:
	// bl 0x82547fd0
	ctx.lr = 0x825CA9D8;
	sub_82547FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825caa30
	if (ctx.cr0.eq) goto loc_825CAA30;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-31957
	ctx.r6.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r6,14392
	ctx.r5.s64 = ctx.r6.s64 + 14392;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,-4072(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4072);
	ctx.f13.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f0,36(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stfs f13,28(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// stfs f0,24(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// stw r9,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r9.u32);
	// stfs f0,20(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stw r8,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r8.u32);
	// stfs f0,32(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// stw r7,14392(r6)
	PPC_STORE_U32(ctx.r6.u32 + 14392, ctx.r7.u32);
loc_825CAA30:
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

__attribute__((alias("__imp__sub_825CAA48"))) PPC_WEAK_FUNC(sub_825CAA48);
PPC_FUNC_IMPL(__imp__sub_825CAA48) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r31,r11,-6516
	ctx.r31.s64 = ctx.r11.s64 + -6516;
	// lwz r11,-6516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6516);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825cab1c
	if (!ctx.cr6.eq) goto loc_825CAB1C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825cab1c
	if (!ctx.cr6.eq) goto loc_825CAB1C;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,24448
	ctx.r11.s64 = ctx.r11.s64 + 24448;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825caa94
	if (ctx.cr6.eq) goto loc_825CAA94;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825caa98
	goto loc_825CAA98;
loc_825CAA94:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825CAA98:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825cab1c
	if (ctx.cr6.eq) goto loc_825CAB1C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825caab0
	if (ctx.cr6.eq) goto loc_825CAAB0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825caab4
	goto loc_825CAAB4;
loc_825CAAB0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825CAAB4:
	// lwz r10,3400(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3400);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825cab1c
	if (!ctx.cr0.eq) goto loc_825CAB1C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825caad4
	if (ctx.cr6.eq) goto loc_825CAAD4;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825caad8
	goto loc_825CAAD8;
loc_825CAAD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825CAAD8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x825ca230
	ctx.lr = 0x825CAAE4;
	sub_825CA230(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x825cab0c
	if (ctx.cr6.eq) goto loc_825CAB0C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cab14
	if (ctx.cr6.eq) goto loc_825CAB14;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825CAB00:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x825cab20
	goto loc_825CAB20;
loc_825CAB0C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cab1c
	if (ctx.cr6.eq) goto loc_825CAB1C;
loc_825CAB14:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825cab00
	goto loc_825CAB00;
loc_825CAB1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825CAB20:
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

__attribute__((alias("__imp__sub_825CAB34"))) PPC_WEAK_FUNC(sub_825CAB34);
PPC_FUNC_IMPL(__imp__sub_825CAB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CAB38"))) PPC_WEAK_FUNC(sub_825CAB38);
PPC_FUNC_IMPL(__imp__sub_825CAB38) {
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
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,24448
	ctx.r11.s64 = ctx.r11.s64 + 24448;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cab60
	if (ctx.cr6.eq) goto loc_825CAB60;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825cab64
	goto loc_825CAB64;
loc_825CAB60:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825CAB64:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825cabd8
	if (ctx.cr6.eq) goto loc_825CABD8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cab7c
	if (ctx.cr6.eq) goto loc_825CAB7C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825cab80
	goto loc_825CAB80;
loc_825CAB7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825CAB80:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x825ca230
	ctx.lr = 0x825CAB8C;
	sub_825CA230(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x825cabbc
	if (ctx.cr6.eq) goto loc_825CABBC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cabd0
	if (ctx.cr6.eq) goto loc_825CABD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825CABAC:
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r10,r10,-6516
	ctx.r10.s64 = ctx.r10.s64 + -6516;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x825cabe8
	goto loc_825CABE8;
loc_825CABBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825cabd0
	if (!ctx.cr6.eq) goto loc_825CABD0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825CABC8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825cabac
	goto loc_825CABAC;
loc_825CABD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825cabc8
	goto loc_825CABC8;
loc_825CABD8:
	// bl 0x8254b7e0
	ctx.lr = 0x825CABDC;
	sub_8254B7E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_825CABE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CABF8"))) PPC_WEAK_FUNC(sub_825CABF8);
PPC_FUNC_IMPL(__imp__sub_825CABF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825CAC00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-6516
	ctx.r30.s64 = ctx.r11.s64 + -6516;
	// lwz r11,-6516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6516);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825cac74
	if (ctx.cr6.eq) goto loc_825CAC74;
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x825cac48
	if (!ctx.cr6.eq) goto loc_825CAC48;
	// lwz r10,5408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5408);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r10,5408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5408, ctx.r10.u32);
	// bl 0x8255b148
	ctx.lr = 0x825CAC48;
	sub_8255B148(ctx, base);
loc_825CAC48:
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bne cr6,0x825cac74
	if (!ctx.cr6.eq) goto loc_825CAC74;
	// lwz r10,5408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5408);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// li r3,51
	ctx.r3.s64 = 51;
	// stw r10,5408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5408, ctx.r10.u32);
	// bl 0x8255b148
	ctx.lr = 0x825CAC74;
	sub_8255B148(ctx, base);
loc_825CAC74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CAC7C"))) PPC_WEAK_FUNC(sub_825CAC7C);
PPC_FUNC_IMPL(__imp__sub_825CAC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CAC80"))) PPC_WEAK_FUNC(sub_825CAC80);
PPC_FUNC_IMPL(__imp__sub_825CAC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825CAC88;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r28,r11,23112
	ctx.r28.s64 = ctx.r11.s64 + 23112;
	// lwz r11,-29400(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825cada8
	if (!ctx.cr6.eq) goto loc_825CADA8;
	// lwz r9,-29608(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29608);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825cada8
	if (ctx.cr6.eq) goto loc_825CADA8;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,24448
	ctx.r11.s64 = ctx.r11.s64 + 24448;
	// lfs f31,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cacd4
	if (ctx.cr6.eq) goto loc_825CACD4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825cacd8
	goto loc_825CACD8;
loc_825CACD4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825CACD8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825cad0c
	if (ctx.cr6.eq) goto loc_825CAD0C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cacf0
	if (ctx.cr6.eq) goto loc_825CACF0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825cacf4
	goto loc_825CACF4;
loc_825CACF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825CACF4:
	// lfs f0,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x825cad0c
	if (ctx.cr6.gt) goto loc_825CAD0C;
	// lfs f13,2080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2080);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_825CAD0C:
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r29,8(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x825cada0
	goto loc_825CADA0;
loc_825CAD18:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cad9c
	if (ctx.cr6.eq) goto loc_825CAD9C;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825cb088
	ctx.lr = 0x825CAD3C;
	sub_825CB088(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825cad64
	if (ctx.cr0.eq) goto loc_825CAD64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x825469e0
	ctx.lr = 0x825CAD4C;
	sub_825469E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-29608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29608);
	// bl 0x825e3f80
	ctx.lr = 0x825CAD58;
	sub_825E3F80(ctx, base);
	// addi r31,r31,-80
	ctx.r31.s64 = ctx.r31.s64 + -80;
	// addi r29,r29,-80
	ctx.r29.s64 = ctx.r29.s64 + -80;
	// b 0x825cad9c
	goto loc_825CAD9C;
loc_825CAD64:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x825cad90
	if (ctx.cr6.lt) goto loc_825CAD90;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825CAD74:
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cb158
	ctx.lr = 0x825CAD80;
	sub_825CB158(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x825cad74
	if (ctx.cr6.lt) goto loc_825CAD74;
	// b 0x825cad9c
	goto loc_825CAD9C;
loc_825CAD90:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cb158
	ctx.lr = 0x825CAD9C;
	sub_825CB158(ctx, base);
loc_825CAD9C:
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
loc_825CADA0:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x825cad18
	if (ctx.cr6.lt) goto loc_825CAD18;
loc_825CADA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CADB4"))) PPC_WEAK_FUNC(sub_825CADB4);
PPC_FUNC_IMPL(__imp__sub_825CADB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CADB8"))) PPC_WEAK_FUNC(sub_825CADB8);
PPC_FUNC_IMPL(__imp__sub_825CADB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x825CADC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r9,r11,21120
	ctx.r9.s64 = ctx.r11.s64 + 21120;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,308
	ctx.r10.s64 = ctx.r10.s64 + 308;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,21912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21912);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825caf20
	if (ctx.cr0.eq) goto loc_825CAF20;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mulli r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 * 48;
	// addi r31,r11,-6496
	ctx.r31.s64 = ctx.r11.s64 + -6496;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cae50
	if (ctx.cr6.eq) goto loc_825CAE50;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cae30
	if (ctx.cr6.eq) goto loc_825CAE30;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// stfsx f0,r30,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r30,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// b 0x825cae50
	goto loc_825CAE50;
loc_825CAE30:
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// addi r8,r31,44
	ctx.r8.s64 = ctx.r31.s64 + 44;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// lfsx f13,r30,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r30,r8
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f13,r30,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// stfsx f12,r30,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
loc_825CAE50:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// addi r7,r11,27984
	ctx.r7.s64 = ctx.r11.s64 + 27984;
	// li r27,1
	ctx.r27.s64 = 1;
	// stwx r27,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r27.u32);
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
	// stfsx f0,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// lfsx f12,r30,r8
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r31,44
	ctx.r8.s64 = ctx.r31.s64 + 44;
	// lfs f13,456(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 456);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfsx f0,r30,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// addi r28,r31,58
	ctx.r28.s64 = ctx.r31.s64 + 58;
	// lfsx f11,r30,r6
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctidz f0,f12
	ctx.f0.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// fctidz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sthx r8,r30,r11
	PPC_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u16);
	// sthx r10,r30,r28
	PPC_STORE_U16(ctx.r30.u32 + ctx.r28.u32, ctx.r10.u16);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825caf14
	if (ctx.cr6.eq) goto loc_825CAF14;
	// cmplwi cr6,r26,255
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 255, ctx.xer);
	// bne cr6,0x825caed4
	if (!ctx.cr6.eq) goto loc_825CAED4;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x825caee0
	goto loc_825CAEE0;
loc_825CAED4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829213a0
	ctx.lr = 0x825CAEDC;
	sub_829213A0(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
loc_825CAEE0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825caf14
	if (ctx.cr6.eq) goto loc_825CAF14;
	// lwz r10,244(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// slw r11,r27,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825caf14
	if (ctx.cr0.eq) goto loc_825CAF14;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// sthx r11,r30,r28
	PPC_STORE_U16(ctx.r30.u32 + ctx.r28.u32, ctx.r11.u16);
loc_825CAF14:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a77478
	ctx.lr = 0x825CAF20;
	sub_82A77478(ctx, base);
loc_825CAF20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CAF28"))) PPC_WEAK_FUNC(sub_825CAF28);
PPC_FUNC_IMPL(__imp__sub_825CAF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825CAF30;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82546708
	ctx.lr = 0x825CAF50;
	sub_82546708(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x825cb078
	if (ctx.cr0.eq) goto loc_825CB078;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-6496
	ctx.r3.s64 = ctx.r11.s64 + -6496;
	// lwz r11,-6496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cb070
	if (ctx.cr6.eq) goto loc_825CB070;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x825cb070
	if (!ctx.cr6.lt) goto loc_825CB070;
	// bl 0x825e3ed0
	ctx.lr = 0x825CAF8C;
	sub_825E3ED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825cb070
	if (ctx.cr0.eq) goto loc_825CB070;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r29,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r29.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// li r9,48
	ctx.r9.s64 = 48;
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f5,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsel f0,f31,f31,f5
	ctx.f0.f64 = ctx.f31.f64 >= 0.0 ? ctx.f31.f64 : ctx.f5.f64;
	// lfs f4,-24756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f4.f64 = double(temp.f32);
	// stvx128 v0,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fsubs f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// lfs f3,31512(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31512);
	ctx.f3.f64 = double(temp.f32);
	// fsel f0,f13,f4,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f4.f64 : ctx.f0.f64;
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
loc_825CAFD4:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mulli r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 * 108;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 * 20;
	// lfs f0,84(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// add r5,r9,r3
	ctx.r5.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// fmadds f0,f13,f3,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f0.f64));
	// stfs f0,16(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// stfs f5,4(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 / ctx.f0.f64));
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x825cb048
	if (ctx.cr6.eq) goto loc_825CB048;
	// addi r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 + 112;
loc_825CB048:
	// bl 0x826267b0
	ctx.lr = 0x825CB04C;
	sub_826267B0(ctx, base);
	// fsel f0,f1,f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : ctx.f5.f64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// fsubs f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// fsel f0,f13,f4,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f4.f64 : ctx.f0.f64;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f5,44(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blt cr6,0x825cafd4
	if (ctx.cr6.lt) goto loc_825CAFD4;
	// b 0x825cb078
	goto loc_825CB078;
loc_825CB070:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825469e0
	ctx.lr = 0x825CB078;
	sub_825469E0(ctx, base);
loc_825CB078:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CB084"))) PPC_WEAK_FUNC(sub_825CB084);
PPC_FUNC_IMPL(__imp__sub_825CB084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CB088"))) PPC_WEAK_FUNC(sub_825CB088);
PPC_FUNC_IMPL(__imp__sub_825CB088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825CB090;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f5,-24756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// lfs f3,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,-2340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f4.f64 = double(temp.f32);
loc_825CB0C0:
	// lwz r31,40(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x825cb130
	if (!ctx.cr6.lt) goto loc_825CB130;
	// clrlwi. r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// beq 0x825cb0ec
	if (ctx.cr0.eq) goto loc_825CB0EC;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
loc_825CB0EC:
	// bl 0x826267b0
	ctx.lr = 0x825CB0F0;
	sub_826267B0(ctx, base);
	// fsel f0,f1,f1,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : ctx.f4.f64;
	// mulli r11,r30,108
	ctx.r11.s64 = ctx.r30.s64 * 108;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// fsubs f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fsel f0,f13,f5,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f5.f64 : ctx.f0.f64;
	// stfs f0,-4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + -4, temp.u32);
	// lfs f12,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f12,f2,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f0.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f13.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x825cb134
	goto loc_825CB134;
loc_825CB130:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_825CB134:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r5,r5,20
	ctx.r5.s64 = ctx.r5.s64 + 20;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x825cb0c0
	if (ctx.cr6.lt) goto loc_825CB0C0;
	// addi r11,r28,-2
	ctx.r11.s64 = ctx.r28.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CB158"))) PPC_WEAK_FUNC(sub_825CB158);
PPC_FUNC_IMPL(__imp__sub_825CB158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x825CB160;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// clrlwi r26,r4,24
	ctx.r26.u64 = ctx.r4.u32 & 0xFF;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f30,-24756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f30.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f31,-2340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// mulli r25,r26,12
	ctx.r25.s64 = ctx.r26.s64 * 12;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r27,r11,-6496
	ctx.r27.s64 = ctx.r11.s64 + -6496;
loc_825CB1A0:
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8283c170
	ctx.lr = 0x825CB1A8;
	sub_8283C170(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// fmadds f29,f1,f0,f13
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f2,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// bne cr6,0x825cb1e0
	if (!ctx.cr6.eq) goto loc_825CB1E0;
	// lfs f0,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x825cb1e0
	if (!ctx.cr6.eq) goto loc_825CB1E0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x825cb280
	goto loc_825CB280;
loc_825CB1E0:
	// vspltisw v0,1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x1)));
	// mulli r10,r26,48
	ctx.r10.s64 = ctx.r26.s64 * 48;
	// vspltisw v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0x0)));
	// lfs f3,100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f3
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// vcfsx v10,v0,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v0.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r8,r27,16
	ctx.r8.s64 = ctx.r27.s64 + 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r30,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r10,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v8,v0,v0
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vrsqrtefp v0,v8
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v8.f32))));
	// vcmpeqfp v9,v8,v11
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v8,v10
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v12,v11,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v0,v8,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x825cb254
	if (ctx.cr6.gt) goto loc_825CB254;
	// fadds f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x825cb25c
	if (!ctx.cr6.lt) goto loc_825CB25C;
loc_825CB254:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x825cb280
	goto loc_825CB280;
loc_825CB25C:
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// fmr f5,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x8255b868
	ctx.lr = 0x825CB270;
	sub_8255B868(ctx, base);
	// bl 0x826267b0
	ctx.lr = 0x825CB274;
	sub_826267B0(ctx, base);
	// fsel f0,f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : ctx.f31.f64;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fsel f0,f13,f30,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f0.f64;
loc_825CB280:
	// lfs f12,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r27,40
	ctx.r11.s64 = ctx.r27.s64 + 40;
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x825cb2b0
	if (!ctx.cr6.gt) goto loc_825CB2B0;
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_825CB2B0:
	// addi r29,r29,108
	ctx.r29.s64 = ctx.r29.s64 + 108;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmpwi cr6,r29,216
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 216, ctx.xer);
	// blt cr6,0x825cb1a0
	if (ctx.cr6.lt) goto loc_825CB1A0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CB2D8"))) PPC_WEAK_FUNC(sub_825CB2D8);
PPC_FUNC_IMPL(__imp__sub_825CB2D8) {
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
	// bl 0x825cb328
	ctx.lr = 0x825CB2F8;
	sub_825CB328(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825cb308
	if (ctx.cr0.eq) goto loc_825CB308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825CB308;
	sub_82691540(ctx, base);
loc_825CB308:
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

__attribute__((alias("__imp__sub_825CB324"))) PPC_WEAK_FUNC(sub_825CB324);
PPC_FUNC_IMPL(__imp__sub_825CB324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CB328"))) PPC_WEAK_FUNC(sub_825CB328);
PPC_FUNC_IMPL(__imp__sub_825CB328) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r11,r11,-15320
	ctx.r11.s64 = ctx.r11.s64 + -15320;
	// addi r10,r10,-15224
	ctx.r10.s64 = ctx.r10.s64 + -15224;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CB360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CB374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq 0x825cb3a8
	if (ctx.cr0.eq) goto loc_825CB3A8;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,28992
	ctx.r3.s64 = ctx.r11.s64 + 28992;
	// bl 0x82380ac0
	ctx.lr = 0x825CB390;
	sub_82380AC0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne 0x825cb3a8
	if (!ctx.cr0.eq) goto loc_825CB3A8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825cba38
	ctx.lr = 0x825CB3A8;
	sub_825CBA38(ctx, base);
loc_825CB3A8:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cb3bc
	if (ctx.cr6.eq) goto loc_825CB3BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_825CB3BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82550660
	ctx.lr = 0x825CB3C4;
	sub_82550660(ctx, base);
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

__attribute__((alias("__imp__sub_825CB3D8"))) PPC_WEAK_FUNC(sub_825CB3D8);
PPC_FUNC_IMPL(__imp__sub_825CB3D8) {
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
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cb400
	if (ctx.cr6.eq) goto loc_825CB400;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825cb444
	goto loc_825CB444;
loc_825CB400:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,31060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31060);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825cb414
	if (!ctx.cr6.eq) goto loc_825CB414;
	// bl 0x8254aa48
	ctx.lr = 0x825CB414;
	sub_8254AA48(ctx, base);
loc_825CB414:
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825cb440
	if (ctx.cr0.eq) goto loc_825CB440;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CB434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x825cb444
	if (!ctx.cr0.eq) goto loc_825CB444;
loc_825CB440:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825CB444:
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

__attribute__((alias("__imp__sub_825CB458"))) PPC_WEAK_FUNC(sub_825CB458);
PPC_FUNC_IMPL(__imp__sub_825CB458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825bfdc8
	ctx.lr = 0x825CB474;
	sub_825BFDC8(ctx, base);
	// addi r3,r1,155
	ctx.r3.s64 = ctx.r1.s64 + 155;
	// bl 0x8259bbf8
	ctx.lr = 0x825CB47C;
	sub_8259BBF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8256a330
	ctx.lr = 0x825CB488;
	sub_8256A330(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CB4A0"))) PPC_WEAK_FUNC(sub_825CB4A0);
PPC_FUNC_IMPL(__imp__sub_825CB4A0) {
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
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x8256a1e0
	ctx.lr = 0x825CB4BC;
	sub_8256A1E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825CB4D8"))) PPC_WEAK_FUNC(sub_825CB4D8);
PPC_FUNC_IMPL(__imp__sub_825CB4D8) {
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
	// bl 0x828c11f8
	ctx.lr = 0x825CB4F4;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825cb558
	if (ctx.cr0.eq) goto loc_825CB558;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825cb52c
	if (ctx.cr6.eq) goto loc_825CB52C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CB520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828dffd8
	ctx.lr = 0x825CB52C;
	sub_828DFFD8(ctx, base);
loc_825CB52C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CB548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828dffd8
	ctx.lr = 0x825CB554;
	sub_828DFFD8(ctx, base);
	// b 0x825cb588
	goto loc_825CB588;
loc_825CB558:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CB56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CB580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
loc_825CB588:
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

__attribute__((alias("__imp__sub_825CB5A0"))) PPC_WEAK_FUNC(sub_825CB5A0);
PPC_FUNC_IMPL(__imp__sub_825CB5A0) {
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
	// lwz r31,128(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825cb5c8
	if (ctx.cr6.eq) goto loc_825CB5C8;
	// bl 0x828c11f8
	ctx.lr = 0x825CB5C0;
	sub_828C11F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_825CB5C8:
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

__attribute__((alias("__imp__sub_825CB5DC"))) PPC_WEAK_FUNC(sub_825CB5DC);
PPC_FUNC_IMPL(__imp__sub_825CB5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CB5E0"))) PPC_WEAK_FUNC(sub_825CB5E0);
PPC_FUNC_IMPL(__imp__sub_825CB5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825CB5E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,29008
	ctx.r31.s64 = ctx.r11.s64 + 29008;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x825cb628
	goto loc_825CB628;
loc_825CB60C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x825cb620
	if (!ctx.cr6.lt) goto loc_825CB620;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825cb628
	goto loc_825CB628;
loc_825CB620:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825CB628:
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825cb60c
	if (ctx.cr0.eq) goto loc_825CB60C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825cb64c
	if (ctx.cr6.eq) goto loc_825CB64C;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825cb6a0
	if (!ctx.cr6.lt) goto loc_825CB6A0;
loc_825CB64C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82691500
	ctx.lr = 0x825CB654;
	sub_82691500(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x825cb6ac
	if (ctx.cr0.eq) goto loc_825CB6AC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r5,12
	ctx.xer.ca = ctx.r5.u32 > 4294967283;
	ctx.r11.s64 = ctx.r5.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r10,20(r5)
	PPC_STORE_U8(ctx.r5.u32 + 20, ctx.r10.u8);
	// stb r10,21(r5)
	PPC_STORE_U8(ctx.r5.u32 + 21, ctx.r10.u8);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// beq 0x825cb690
	if (ctx.cr0.eq) goto loc_825CB690;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_825CB690:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825cc0f8
	ctx.lr = 0x825CB69C;
	sub_825CC0F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825CB6A0:
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_825CB6AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x825CB6C8;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_825CB6C8"))) PPC_WEAK_FUNC(sub_825CB6C8);
PPC_FUNC_IMPL(__imp__sub_825CB6C8) {
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
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,29008
	ctx.r11.s64 = ctx.r11.s64 + 29008;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// b 0x825cb734
	goto loc_825CB734;
loc_825CB6FC:
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x825cb710
	if (!ctx.cr6.lt) goto loc_825CB710;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x825cb730
	goto loc_825CB730;
loc_825CB710:
	// lbz r8,21(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x825cb728
	if (ctx.cr0.eq) goto loc_825CB728;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x825cb728
	if (!ctx.cr6.lt) goto loc_825CB728;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_825CB728:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_825CB730:
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
loc_825CB734:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825cb6fc
	if (ctx.cr0.eq) goto loc_825CB6FC;
	// lbz r10,21(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825cb76c
	if (!ctx.cr0.eq) goto loc_825CB76C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x825cb76c
	goto loc_825CB76C;
loc_825CB750:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825cb768
	if (!ctx.cr6.lt) goto loc_825CB768;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825cb76c
	goto loc_825CB76C;
loc_825CB768:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_825CB76C:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825cb750
	if (ctx.cr0.eq) goto loc_825CB750;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825cb798
	if (ctx.cr6.eq) goto loc_825CB798;
loc_825CB784:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8285aa38
	ctx.lr = 0x825CB78C;
	sub_8285AA38(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825cb784
	if (!ctx.cr6.eq) goto loc_825CB784;
loc_825CB798:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825cbb40
	ctx.lr = 0x825CB7A8;
	sub_825CBB40(ctx, base);
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

__attribute__((alias("__imp__sub_825CB7C0"))) PPC_WEAK_FUNC(sub_825CB7C0);
PPC_FUNC_IMPL(__imp__sub_825CB7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x825CB7C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r25,r11,29008
	ctx.r25.s64 = ctx.r11.s64 + 29008;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cba30
	if (ctx.cr6.eq) goto loc_825CBA30;
	// bl 0x828e3b00
	ctx.lr = 0x825CB7F0;
	sub_828E3B00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x828e3b10
	ctx.lr = 0x825CB804;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825cb82c
	if (ctx.cr0.eq) goto loc_825CB82C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CB820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x825cb830
	if (!ctx.cr0.eq) goto loc_825CB830;
loc_825CB82C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825CB830:
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x825cba30
	if (ctx.cr6.eq) goto loc_825CBA30;
	// clrlwi r26,r10,24
	ctx.r26.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r24,r31,24
	ctx.r24.u64 = ctx.r31.u32 & 0xFF;
loc_825CB854:
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r29,32(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r31,3400(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3400);
	// beq cr6,0x825cb8b4
	if (ctx.cr6.eq) goto loc_825CB8B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r28,r28,1
	ctx.r28.u64 = ctx.r28.u64 | 1;
	// bl 0x825972a8
	ctx.lr = 0x825CB87C;
	sub_825972A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cb8b4
	if (ctx.cr6.eq) goto loc_825CB8B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ori r28,r28,2
	ctx.r28.u64 = ctx.r28.u64 | 2;
	// bl 0x825972a8
	ctx.lr = 0x825CB898;
	sub_825972A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x825cb8b8
	if (ctx.cr6.eq) goto loc_825CB8B8;
loc_825CB8B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825CB8B8:
	// rlwinm. r10,r28,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x825cb8d8
	if (ctx.cr0.eq) goto loc_825CB8D8;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r28,r28,0,31,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825cb8d8
	if (ctx.cr6.eq) goto loc_825CB8D8;
	// bl 0x82241d18
	ctx.lr = 0x825CB8D8;
	sub_82241D18(ctx, base);
loc_825CB8D8:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825cb8f4
	if (ctx.cr0.eq) goto loc_825CB8F4;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r28,r28,0,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825cb8f4
	if (ctx.cr6.eq) goto loc_825CB8F4;
	// bl 0x82241d18
	ctx.lr = 0x825CB8F4;
	sub_82241D18(ctx, base);
loc_825CB8F4:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825cb954
	if (ctx.cr0.eq) goto loc_825CB954;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a75988
	ctx.lr = 0x825CB90C;
	sub_82A75988(ctx, base);
	// li r11,107
	ctx.r11.s64 = 107;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CB934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// bne 0x825cb948
	if (!ctx.cr0.eq) goto loc_825CB948;
	// li r11,1
	ctx.r11.s64 = 1;
loc_825CB948:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x825cb958
	if (!ctx.cr0.eq) goto loc_825CB958;
loc_825CB954:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825CB958:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x825cba18
	if (ctx.cr6.eq) goto loc_825CBA18;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x825cba18
	if (!ctx.cr6.eq) goto loc_825CBA18;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825cba18
	if (ctx.cr0.eq) goto loc_825CBA18;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825cb98c
	if (!ctx.cr6.eq) goto loc_825CB98C;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x825cb990
	goto loc_825CB990;
loc_825CB98C:
	// bl 0x828c11f8
	ctx.lr = 0x825CB990;
	sub_828C11F8(ctx, base);
loc_825CB990:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825cba18
	if (!ctx.cr6.eq) goto loc_825CBA18;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8259bc80
	ctx.lr = 0x825CB9A4;
	sub_8259BC80(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CB9B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CB9C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CB9DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CB9F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CBA18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825CBA18:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8285aa38
	ctx.lr = 0x825CBA20;
	sub_8285AA38(ctx, base);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825cb854
	if (!ctx.cr6.eq) goto loc_825CB854;
loc_825CBA30:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CBA38"))) PPC_WEAK_FUNC(sub_825CBA38);
PPC_FUNC_IMPL(__imp__sub_825CBA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825CBA40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r28,r11,28992
	ctx.r28.s64 = ctx.r11.s64 + 28992;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x825cbaac
	if (!ctx.cr0.eq) goto loc_825CBAAC;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_825CBA6C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825cba80
	if (!ctx.cr6.lt) goto loc_825CBA80;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825cbaa0
	goto loc_825CBAA0;
loc_825CBA80:
	// lbz r7,21(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 21);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x825cba98
	if (ctx.cr0.eq) goto loc_825CBA98;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x825cba98
	if (!ctx.cr6.lt) goto loc_825CBA98;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_825CBA98:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825CBAA0:
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825cba6c
	if (ctx.cr0.eq) goto loc_825CBA6C;
loc_825CBAAC:
	// lbz r11,21(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x825cbac0
	if (!ctx.cr0.eq) goto loc_825CBAC0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_825CBAC0:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825cbaf8
	if (!ctx.cr0.eq) goto loc_825CBAF8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_825CBAD0:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x825cbae8
	if (!ctx.cr6.lt) goto loc_825CBAE8;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825cbaec
	goto loc_825CBAEC;
loc_825CBAE8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_825CBAEC:
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825cbad0
	if (ctx.cr0.eq) goto loc_825CBAD0;
loc_825CBAF8:
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825cbb20
	if (ctx.cr6.eq) goto loc_825CBB20;
loc_825CBB08:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x8285aa38
	ctx.lr = 0x825CBB14;
	sub_8285AA38(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x825cbb08
	if (!ctx.cr6.eq) goto loc_825CBB08;
loc_825CBB20:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83094788
	ctx.lr = 0x825CBB34;
	sub_83094788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CBB40"))) PPC_WEAK_FUNC(sub_825CBB40);
PPC_FUNC_IMPL(__imp__sub_825CBB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825CBB48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,29008
	ctx.r31.s64 = ctx.r11.s64 + 29008;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825cbbf8
	if (!ctx.cr6.eq) goto loc_825CBBF8;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825cbbf8
	if (!ctx.cr6.eq) goto loc_825CBBF8;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,21(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825cbbb0
	if (!ctx.cr0.eq) goto loc_825CBBB0;
loc_825CBB88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825cbfb8
	ctx.lr = 0x825CBB94;
	sub_825CBFB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82691540
	ctx.lr = 0x825CBBA0;
	sub_82691540(ctx, base);
	// lbz r11,21(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825cbb88
	if (ctx.cr0.eq) goto loc_825CBB88;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_825CBBB0:
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x825cbc04
	goto loc_825CBC04;
loc_825CBBDC:
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8285aa38
	ctx.lr = 0x825CBBE8;
	sub_8285AA38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825cbc10
	ctx.lr = 0x825CBBF4;
	sub_825CBC10(ctx, base);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_825CBBF8:
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825cbbdc
	if (!ctx.cr6.eq) goto loc_825CBBDC;
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
loc_825CBC04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CBC10"))) PPC_WEAK_FUNC(sub_825CBC10);
PPC_FUNC_IMPL(__imp__sub_825CBC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x825CBC18;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,21(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825cbc3c
	if (ctx.cr0.eq) goto loc_825CBC3C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,32172
	ctx.r3.s64 = ctx.r11.s64 + 32172;
	// bl 0x82fa0680
	ctx.lr = 0x825CBC3C;
	sub_82FA0680(ctx, base);
loc_825CBC3C:
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8285aa38
	ctx.lr = 0x825CBC48;
	sub_8285AA38(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,188(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// beq 0x825cbc64
	if (ctx.cr0.eq) goto loc_825CBC64;
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// b 0x825cbc88
	goto loc_825CBC88;
loc_825CBC64:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lbz r10,21(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825cbc7c
	if (ctx.cr0.eq) goto loc_825CBC7C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x825cbc88
	goto loc_825CBC88;
loc_825CBC7C:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825cbd6c
	if (!ctx.cr6.eq) goto loc_825CBD6C;
loc_825CBC88:
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// lwz r31,4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825cbc9c
	if (!ctx.cr0.eq) goto loc_825CBC9C;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_825CBC9C:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r26,r11,29008
	ctx.r26.s64 = ctx.r11.s64 + 29008;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825cbcbc
	if (!ctx.cr6.eq) goto loc_825CBCBC;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x825cbcd4
	goto loc_825CBCD4;
loc_825CBCBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825cbcd0
	if (!ctx.cr6.eq) goto loc_825CBCD0;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x825cbcd4
	goto loc_825CBCD4;
loc_825CBCD0:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_825CBCD4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825cbd20
	if (!ctx.cr6.eq) goto loc_825CBD20;
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825cbcf8
	if (ctx.cr0.eq) goto loc_825CBCF8;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x825cbd18
	goto loc_825CBD18;
loc_825CBCF8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x825cbd0c
	goto loc_825CBD0C;
loc_825CBD04:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825CBD0C:
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825cbd04
	if (ctx.cr0.eq) goto loc_825CBD04;
loc_825CBD18:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_825CBD20:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825cbe08
	if (!ctx.cr6.eq) goto loc_825CBE08;
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825cbd44
	if (ctx.cr0.eq) goto loc_825CBD44;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x825cbd64
	goto loc_825CBD64;
loc_825CBD44:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x825cbd58
	goto loc_825CBD58;
loc_825CBD50:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_825CBD58:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x825cbd50
	if (ctx.cr0.eq) goto loc_825CBD50;
loc_825CBD64:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x825cbe08
	goto loc_825CBE08;
loc_825CBD6C:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825cbd8c
	if (!ctx.cr6.eq) goto loc_825CBD8C;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x825cbdb4
	goto loc_825CBDB4;
loc_825CBD8C:
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825cbda0
	if (!ctx.cr0.eq) goto loc_825CBDA0;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_825CBDA0:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
loc_825CBDB4:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r26,r11,29008
	ctx.r26.s64 = ctx.r11.s64 + 29008;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825cbdd4
	if (!ctx.cr6.eq) goto loc_825CBDD4;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x825cbdf0
	goto loc_825CBDF0;
loc_825CBDD4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825cbdec
	if (!ctx.cr6.eq) goto loc_825CBDEC;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x825cbdf0
	goto loc_825CBDF0;
loc_825CBDEC:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_825CBDF0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// lbz r10,20(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 20);
	// stb r11,20(r25)
	PPC_STORE_U8(ctx.r25.u32 + 20, ctx.r11.u8);
	// stb r10,20(r27)
	PPC_STORE_U8(ctx.r27.u32 + 20, ctx.r10.u8);
loc_825CBE08:
	// lbz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825cbf88
	if (!ctx.cr6.eq) goto loc_825CBF88;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825cbf84
	if (ctx.cr6.eq) goto loc_825CBF84;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825CBE2C:
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825cbf84
	if (!ctx.cr6.eq) goto loc_825CBF84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825cbed8
	if (!ctx.cr6.eq) goto loc_825CBED8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825cbe68
	if (!ctx.cr0.eq) goto loc_825CBE68;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// bl 0x825cc018
	ctx.lr = 0x825CBE64;
	sub_825CC018(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_825CBE68:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825cbf28
	if (!ctx.cr0.eq) goto loc_825CBF28;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x825cbe94
	if (!ctx.cr6.eq) goto loc_825CBE94;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x825cbf24
	if (ctx.cr6.eq) goto loc_825CBF24;
loc_825CBE94:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x825cbeb8
	if (!ctx.cr6.eq) goto loc_825CBEB8;
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r29.u8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// bl 0x825cc088
	ctx.lr = 0x825CBEB4;
	sub_825CC088(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_825CBEB8:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// bl 0x825cc018
	ctx.lr = 0x825CBED4;
	sub_825CC018(ctx, base);
	// b 0x825cbf84
	goto loc_825CBF84;
loc_825CBED8:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825cbef8
	if (!ctx.cr0.eq) goto loc_825CBEF8;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// bl 0x825cc088
	ctx.lr = 0x825CBEF4;
	sub_825CC088(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825CBEF8:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825cbf28
	if (!ctx.cr0.eq) goto loc_825CBF28;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x825cbf44
	if (!ctx.cr6.eq) goto loc_825CBF44;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x825cbf44
	if (!ctx.cr6.eq) goto loc_825CBF44;
loc_825CBF24:
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
loc_825CBF28:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825cbe2c
	if (!ctx.cr6.eq) goto loc_825CBE2C;
	// b 0x825cbf84
	goto loc_825CBF84;
loc_825CBF44:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x825cbf68
	if (!ctx.cr6.eq) goto loc_825CBF68;
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r29.u8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// bl 0x825cc018
	ctx.lr = 0x825CBF64;
	sub_825CC018(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825CBF68:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// bl 0x825cc088
	ctx.lr = 0x825CBF84;
	sub_825CC088(ctx, base);
loc_825CBF84:
	// stb r29,20(r28)
	PPC_STORE_U8(ctx.r28.u32 + 20, ctx.r29.u8);
loc_825CBF88:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82691540
	ctx.lr = 0x825CBF90;
	sub_82691540(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cbfa4
	if (ctx.cr6.eq) goto loc_825CBFA4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
loc_825CBFA4:
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

__attribute__((alias("__imp__sub_825CBFB4"))) PPC_WEAK_FUNC(sub_825CBFB4);
PPC_FUNC_IMPL(__imp__sub_825CBFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CBFB8"))) PPC_WEAK_FUNC(sub_825CBFB8);
PPC_FUNC_IMPL(__imp__sub_825CBFB8) {
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
	// b 0x825cbff0
	goto loc_825CBFF0;
loc_825CBFD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825cbfb8
	ctx.lr = 0x825CBFE4;
	sub_825CBFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82691540
	ctx.lr = 0x825CBFF0;
	sub_82691540(ctx, base);
loc_825CBFF0:
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825cbfd8
	if (ctx.cr0.eq) goto loc_825CBFD8;
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

__attribute__((alias("__imp__sub_825CC014"))) PPC_WEAK_FUNC(sub_825CC014);
PPC_FUNC_IMPL(__imp__sub_825CC014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CC018"))) PPC_WEAK_FUNC(sub_825CC018);
PPC_FUNC_IMPL(__imp__sub_825CC018) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x825cc038
	if (!ctx.cr0.eq) goto loc_825CC038;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_825CC038:
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,29008
	ctx.r10.s64 = ctx.r10.s64 + 29008;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825cc060
	if (!ctx.cr6.eq) goto loc_825CC060;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x825cc07c
	goto loc_825CC07C;
loc_825CC060:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825cc078
	if (!ctx.cr6.eq) goto loc_825CC078;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x825cc07c
	goto loc_825CC07C;
loc_825CC078:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_825CC07C:
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CC088"))) PPC_WEAK_FUNC(sub_825CC088);
PPC_FUNC_IMPL(__imp__sub_825CC088) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x825cc0a8
	if (!ctx.cr0.eq) goto loc_825CC0A8;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_825CC0A8:
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,29008
	ctx.r10.s64 = ctx.r10.s64 + 29008;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825cc0d0
	if (!ctx.cr6.eq) goto loc_825CC0D0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x825cc0ec
	goto loc_825CC0EC;
loc_825CC0D0:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825cc0e8
	if (!ctx.cr6.eq) goto loc_825CC0E8;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x825cc0ec
	goto loc_825CC0EC;
loc_825CC0E8:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_825CC0EC:
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CC0F8"))) PPC_WEAK_FUNC(sub_825CC0F8);
PPC_FUNC_IMPL(__imp__sub_825CC0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x825CC100;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,29008
	ctx.r11.s64 = ctx.r11.s64 + 29008;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825cc144
	if (!ctx.cr6.eq) goto loc_825CC144;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_825CC130:
	// li r4,1
	ctx.r4.s64 = 1;
loc_825CC134:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825CC13C:
	// bl 0x825cc358
	ctx.lr = 0x825CC140;
	sub_825CC358(ctx, base);
	// b 0x825cc254
	goto loc_825CC254;
loc_825CC144:
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825cc16c
	if (!ctx.cr6.eq) goto loc_825CC16C;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825cc23c
	if (!ctx.cr6.lt) goto loc_825CC23C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x825cc130
	goto loc_825CC130;
loc_825CC16C:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x825cc190
	if (!ctx.cr6.eq) goto loc_825CC190;
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825cc23c
	if (!ctx.cr6.lt) goto loc_825CC23C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825cc134
	goto loc_825CC134;
loc_825CC190:
	// lwz r28,12(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r27,12(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x825cc1f0
	if (!ctx.cr6.gt) goto loc_825CC1F0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8285ed88
	ctx.lr = 0x825CC1AC;
	sub_8285ED88(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x825cc1ec
	if (!ctx.cr6.lt) goto loc_825CC1EC;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lbz r11,21(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825cc1e0
	if (ctx.cr0.eq) goto loc_825CC1E0;
loc_825CC1D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825cc13c
	goto loc_825CC13C;
loc_825CC1E0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_825CC1E4:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x825cc13c
	goto loc_825CC13C;
loc_825CC1EC:
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
loc_825CC1F0:
	// bge cr6,0x825cc23c
	if (!ctx.cr6.lt) goto loc_825CC23C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8285aa38
	ctx.lr = 0x825CC200;
	sub_8285AA38(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x825cc21c
	if (ctx.cr6.eq) goto loc_825CC21C;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825cc23c
	if (!ctx.cr6.lt) goto loc_825CC23C;
loc_825CC21C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,21(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825cc1e4
	if (ctx.cr0.eq) goto loc_825CC1E4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x825cc1d8
	goto loc_825CC1D8;
loc_825CC23C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825cc260
	ctx.lr = 0x825CC248;
	sub_825CC260(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_825CC254:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CC260"))) PPC_WEAK_FUNC(sub_825CC260);
PPC_FUNC_IMPL(__imp__sub_825CC260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x825CC268;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r11,r11,29008
	ctx.r11.s64 = ctx.r11.s64 + 29008;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x825cc2d0
	if (!ctx.cr0.eq) goto loc_825CC2D0;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_825CC2A0:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// subfc r8,r8,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r29,r8,31
	ctx.r29.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825cc2c0
	if (ctx.cr0.eq) goto loc_825CC2C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825cc2c4
	goto loc_825CC2C4;
loc_825CC2C0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_825CC2C4:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x825cc2a0
	if (ctx.cr0.eq) goto loc_825CC2A0;
loc_825CC2D0:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// beq 0x825cc31c
	if (ctx.cr0.eq) goto loc_825CC31C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825cc314
	if (!ctx.cr6.eq) goto loc_825CC314;
	// li r4,1
	ctx.r4.s64 = 1;
loc_825CC2F4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x825cc358
	ctx.lr = 0x825CC300;
	sub_825CC358(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r26.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x825cc34c
	goto loc_825CC34C;
loc_825CC314:
	// bl 0x8285ed88
	ctx.lr = 0x825CC318;
	sub_8285ED88(ctx, base);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825CC31C:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825cc338
	if (!ctx.cr6.lt) goto loc_825CC338;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x825cc2f4
	goto loc_825CC2F4;
loc_825CC338:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82691540
	ctx.lr = 0x825CC340;
	sub_82691540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_825CC34C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CC358"))) PPC_WEAK_FUNC(sub_825CC358);
PPC_FUNC_IMPL(__imp__sub_825CC358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x825CC360;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// addi r29,r11,29008
	ctx.r29.s64 = ctx.r11.s64 + 29008;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825cc39c
	if (ctx.cr6.lt) goto loc_825CC39C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82691540
	ctx.lr = 0x825CC390;
	sub_82691540(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-26596
	ctx.r3.s64 = ctx.r11.s64 + -26596;
	// bl 0x82fa0648
	ctx.lr = 0x825CC39C;
	sub_82FA0648(ctx, base);
loc_825CC39C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825cc3c8
	if (!ctx.cr6.eq) goto loc_825CC3C8;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x825cc404
	goto loc_825CC404;
loc_825CC3C8:
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825cc3f0
	if (ctx.cr0.eq) goto loc_825CC3F0;
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825cc408
	if (!ctx.cr6.eq) goto loc_825CC408;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// b 0x825cc408
	goto loc_825CC408;
loc_825CC3F0:
	// stw r30,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825cc408
	if (!ctx.cr6.eq) goto loc_825CC408;
loc_825CC404:
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_825CC408:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// lbz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825cc4f8
	if (!ctx.cr0.eq) goto loc_825CC4F8;
	// li r27,0
	ctx.r27.s64 = 0;
loc_825CC424:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825cc480
	if (!ctx.cr6.eq) goto loc_825CC480;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825cc490
	if (ctx.cr0.eq) goto loc_825CC490;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825cc45c
	if (!ctx.cr6.eq) goto loc_825CC45C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825cc018
	ctx.lr = 0x825CC45C;
	sub_825CC018(ctx, base);
loc_825CC45C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r28,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x825cc088
	ctx.lr = 0x825CC47C;
	sub_825CC088(ctx, base);
	// b 0x825cc4e8
	goto loc_825CC4E8;
loc_825CC480:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825cc4b4
	if (!ctx.cr0.eq) goto loc_825CC4B4;
loc_825CC490:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r28,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r28.u8);
	// stb r28,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825cc4e8
	goto loc_825CC4E8;
loc_825CC4B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825cc4c8
	if (!ctx.cr6.eq) goto loc_825CC4C8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825cc088
	ctx.lr = 0x825CC4C8;
	sub_825CC088(ctx, base);
loc_825CC4C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r28,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x825cc018
	ctx.lr = 0x825CC4E8;
	sub_825CC018(ctx, base);
loc_825CC4E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825cc424
	if (ctx.cr0.eq) goto loc_825CC424;
loc_825CC4F8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r28,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CC514"))) PPC_WEAK_FUNC(sub_825CC514);
PPC_FUNC_IMPL(__imp__sub_825CC514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CC518"))) PPC_WEAK_FUNC(sub_825CC518);
PPC_FUNC_IMPL(__imp__sub_825CC518) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-104
	ctx.r3.s64 = ctx.r3.s64 + -104;
	// b 0x825cb2d8
	sub_825CB2D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CC520"))) PPC_WEAK_FUNC(sub_825CC520);
PPC_FUNC_IMPL(__imp__sub_825CC520) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cc554
	if (ctx.cr6.eq) goto loc_825CC554;
loc_825CC53C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825cc56c
	if (ctx.cr6.eq) goto loc_825CC56C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825cc53c
	if (!ctx.cr0.eq) goto loc_825CC53C;
loc_825CC554:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_825CC558:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825cc574
	if (ctx.cr6.eq) goto loc_825CC574;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x825cc578
	goto loc_825CC578;
loc_825CC56C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x825cc558
	goto loc_825CC558;
loc_825CC574:
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
loc_825CC578:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cc5b8
	if (ctx.cr6.eq) goto loc_825CC5B8;
loc_825CC584:
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825cc584
	if (!ctx.cr6.eq) goto loc_825CC584;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825cc5ac
	if (ctx.cr6.eq) goto loc_825CC5AC;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x825cc5b0
	goto loc_825CC5B0;
loc_825CC5AC:
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
loc_825CC5B0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_825CC5B8:
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CC5C8"))) PPC_WEAK_FUNC(sub_825CC5C8);
PPC_FUNC_IMPL(__imp__sub_825CC5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r31,r3,2368
	ctx.r31.s64 = ctx.r3.s64 + 2368;
	// bl 0x82576760
	ctx.lr = 0x825CC5E8;
	sub_82576760(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// li r9,520
	ctx.r9.s64 = 520;
	// addi r8,r10,27984
	ctx.r8.s64 = ctx.r10.s64 + 27984;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r11,0
	ctx.r11.s64 = 0;
	// vsubfp v11,v12,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvlx v0,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vrlimi128 v11,v0,1,0
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 1));
	// vcmpbfp. v11,v11,v0
	_mm_store_ps(ctx.v11.f32, _mm_vcmpbfp(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v11.f32), 0xF);
	// bne cr6,0x825cc644
	if (!ctx.cr6.eq) goto loc_825CC644;
	// lvx128 v11,r31,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v11,v13,v11
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// vrlimi128 v11,v0,1,0
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 1));
	// vcmpbfp. v0,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_vcmpbfp(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v0.f32), 0xF);
	// bne cr6,0x825cc644
	if (!ctx.cr6.eq) goto loc_825CC644;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825cc65c
	goto loc_825CC65C;
loc_825CC644:
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stvx128 v12,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,1
	ctx.r3.s64 = 1;
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_825CC65C:
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

__attribute__((alias("__imp__sub_825CC670"))) PPC_WEAK_FUNC(sub_825CC670);
PPC_FUNC_IMPL(__imp__sub_825CC670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x825CC678;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r24,6
	ctx.r24.s64 = 6;
	// lfs f31,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// addi r23,r11,23112
	ctx.r23.s64 = ctx.r11.s64 + 23112;
loc_825CC69C:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r28,28(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825cc734
	if (!ctx.cr6.gt) goto loc_825CC734;
	// li r27,0
	ctx.r27.s64 = 0;
loc_825CC6B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r30,r27,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825cc720
	if (ctx.cr6.eq) goto loc_825CC720;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8263be40
	ctx.lr = 0x825CC6D4;
	sub_8263BE40(ctx, base);
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x825cc720
	if (!ctx.cr6.eq) goto loc_825CC720;
	// lfs f0,2104(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x825cc6f4
	if (!ctx.cr6.gt) goto loc_825CC6F4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x825cc700
	goto loc_825CC700;
loc_825CC6F4:
	// lfs f13,2080(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2080);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_825CC700:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8263b830
	ctx.lr = 0x825CC70C;
	sub_8263B830(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825cc720
	if (!ctx.cr0.eq) goto loc_825CC720;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262bbf0
	ctx.lr = 0x825CC720;
	sub_8262BBF0(ctx, base);
loc_825CC720:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825cc6b8
	if (ctx.cr6.lt) goto loc_825CC6B8;
loc_825CC734:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x825cc69c
	if (!ctx.cr0.eq) goto loc_825CC69C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CC74C"))) PPC_WEAK_FUNC(sub_825CC74C);
PPC_FUNC_IMPL(__imp__sub_825CC74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CC750"))) PPC_WEAK_FUNC(sub_825CC750);
PPC_FUNC_IMPL(__imp__sub_825CC750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x825CC758;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r23,6
	ctx.r23.s64 = 6;
loc_825CC76C:
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r24,28(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825cc81c
	if (!ctx.cr6.gt) goto loc_825CC81C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_825CC788:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825cc808
	if (ctx.cr6.eq) goto loc_825CC808;
	// lha r11,6(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 6));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x825cc808
	if (!ctx.cr0.gt) goto loc_825CC808;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825CC7A8:
	// mulli r11,r30,464
	ctx.r11.s64 = ctx.r30.s64 * 464;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,672
	ctx.r4.s64 = ctx.r11.s64 + 672;
	// lwz r11,720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cc7f0
	if (ctx.cr6.eq) goto loc_825CC7F0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x825cc7d0
	if (ctx.cr6.eq) goto loc_825CC7D0;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x825cc7f0
	if (!ctx.cr6.eq) goto loc_825CC7F0;
loc_825CC7D0:
	// lhz r11,162(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 162);
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x825cc7e8
	if (!ctx.cr6.eq) goto loc_825CC7E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265a450
	ctx.lr = 0x825CC7E4;
	sub_8265A450(ctx, base);
	// b 0x825cc7f0
	goto loc_825CC7F0;
loc_825CC7E8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8265a4b8
	ctx.lr = 0x825CC7F0;
	sub_8265A4B8(ctx, base);
loc_825CC7F0:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lha r10,6(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 6));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825cc7a8
	if (ctx.cr6.lt) goto loc_825CC7A8;
loc_825CC808:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825cc788
	if (ctx.cr6.lt) goto loc_825CC788;
loc_825CC81C:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x825cc76c
	if (!ctx.cr0.eq) goto loc_825CC76C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CC830"))) PPC_WEAK_FUNC(sub_825CC830);
PPC_FUNC_IMPL(__imp__sub_825CC830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825CC838;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x825CC854;
	sub_82546708(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x825cc864
	if (!ctx.cr0.eq) goto loc_825CC864;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x825cc894
	goto loc_825CC894;
loc_825CC864:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262c2f8
	ctx.lr = 0x825CC888;
	sub_8262C2F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825469e0
	ctx.lr = 0x825CC890;
	sub_825469E0(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
loc_825CC894:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CC89C"))) PPC_WEAK_FUNC(sub_825CC89C);
PPC_FUNC_IMPL(__imp__sub_825CC89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CC8A0"))) PPC_WEAK_FUNC(sub_825CC8A0);
PPC_FUNC_IMPL(__imp__sub_825CC8A0) {
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
	// bl 0x825cc8f0
	ctx.lr = 0x825CC8C0;
	sub_825CC8F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825cc8d0
	if (ctx.cr0.eq) goto loc_825CC8D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825CC8D0;
	sub_82691540(ctx, base);
loc_825CC8D0:
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

__attribute__((alias("__imp__sub_825CC8EC"))) PPC_WEAK_FUNC(sub_825CC8EC);
PPC_FUNC_IMPL(__imp__sub_825CC8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CC8F0"))) PPC_WEAK_FUNC(sub_825CC8F0);
PPC_FUNC_IMPL(__imp__sub_825CC8F0) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r30,-31964
	ctx.r30.s64 = -2094792704;
	// addi r11,r11,-14596
	ctx.r11.s64 = ctx.r11.s64 + -14596;
	// lis r6,512
	ctx.r6.s64 = 33554432;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-13544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13544);
	// bl 0x826631f0
	ctx.lr = 0x825CC92C;
	sub_826631F0(ctx, base);
	// lis r6,256
	ctx.r6.s64 = 16777216;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-13544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13544);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x826631f0
	ctx.lr = 0x825CC940;
	sub_826631F0(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825cc958
	if (ctx.cr6.eq) goto loc_825CC958;
	// bl 0x825469e0
	ctx.lr = 0x825CC954;
	sub_825469E0(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_825CC958:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825cc96c
	if (ctx.cr6.eq) goto loc_825CC96C;
	// bl 0x825469e0
	ctx.lr = 0x825CC968;
	sub_825469E0(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_825CC96C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-29912
	ctx.r11.s64 = ctx.r11.s64 + -29912;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825CC990"))) PPC_WEAK_FUNC(sub_825CC990);
PPC_FUNC_IMPL(__imp__sub_825CC990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x825CC998;
	__savegprlr_14(ctx, base);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// stw r11,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r11.u32);
	// lwz r11,5256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5256);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825cc9b8
	if (!ctx.cr6.eq) goto loc_825CC9B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825cd320
	goto loc_825CD320;
loc_825CC9B8:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r5,120
	ctx.r5.s64 = 120;
	// addi r29,r11,-5776
	ctx.r29.s64 = ctx.r11.s64 + -5776;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x825CC9D0;
	sub_82FA7CF0(ctx, base);
	// lis r11,42
	ctx.r11.s64 = 2752512;
	// lis r8,26
	ctx.r8.s64 = 1703936;
	// ori r30,r11,9145
	ctx.r30.u64 = ctx.r11.u64 | 9145;
	// lis r7,26
	ctx.r7.s64 = 1703936;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// lis r26,24
	ctx.r26.s64 = 1572864;
	// lis r9,42
	ctx.r9.s64 = 2752512;
	// sth r11,414(r1)
	PPC_STORE_U16(ctx.r1.u32 + 414, ctx.r11.u16);
	// lis r10,44
	ctx.r10.s64 = 2883584;
	// ori r5,r8,8326
	ctx.r5.u64 = ctx.r8.u64 | 8326;
	// ori r6,r7,8838
	ctx.r6.u64 = ctx.r7.u64 | 8838;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r5,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r5.u32);
	// li r28,5
	ctx.r28.s64 = 5;
	// stw r6,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r6.u32);
	// ori r10,r10,9055
	ctx.r10.u64 = ctx.r10.u64 | 9055;
	// sth r31,400(r1)
	PPC_STORE_U16(ctx.r1.u32 + 400, ctx.r31.u16);
	// li r27,1
	ctx.r27.s64 = 1;
	// sth r31,402(r1)
	PPC_STORE_U16(ctx.r1.u32 + 402, ctx.r31.u16);
	// li r24,2
	ctx.r24.s64 = 2;
	// stb r31,408(r1)
	PPC_STORE_U8(ctx.r1.u32 + 408, ctx.r31.u8);
	// ori r7,r26,10374
	ctx.r7.u64 = ctx.r26.u64 | 10374;
	// stb r31,409(r1)
	PPC_STORE_U8(ctx.r1.u32 + 409, ctx.r31.u8);
	// ori r3,r9,8592
	ctx.r3.u64 = ctx.r9.u64 | 8592;
	// stb r31,410(r1)
	PPC_STORE_U8(ctx.r1.u32 + 410, ctx.r31.u8);
	// li r25,3
	ctx.r25.s64 = 3;
	// sth r31,412(r1)
	PPC_STORE_U16(ctx.r1.u32 + 412, ctx.r31.u16);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r3.u32);
	// li r15,20
	ctx.r15.s64 = 20;
	// stb r31,420(r1)
	PPC_STORE_U8(ctx.r1.u32 + 420, ctx.r31.u8);
	// li r16,24
	ctx.r16.s64 = 24;
	// stb r25,421(r1)
	PPC_STORE_U8(ctx.r1.u32 + 421, ctx.r25.u8);
	// li r17,10
	ctx.r17.s64 = 10;
	// stb r31,422(r1)
	PPC_STORE_U8(ctx.r1.u32 + 422, ctx.r31.u8);
	// li r18,28
	ctx.r18.s64 = 28;
	// sth r31,424(r1)
	PPC_STORE_U16(ctx.r1.u32 + 424, ctx.r31.u16);
	// li r8,32
	ctx.r8.s64 = 32;
	// sth r4,426(r1)
	PPC_STORE_U16(ctx.r1.u32 + 426, ctx.r4.u16);
	// li r11,36
	ctx.r11.s64 = 36;
	// stb r31,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r31.u8);
	// stb r27,433(r1)
	PPC_STORE_U8(ctx.r1.u32 + 433, ctx.r27.u8);
	// li r26,48
	ctx.r26.s64 = 48;
	// stb r31,434(r1)
	PPC_STORE_U8(ctx.r1.u32 + 434, ctx.r31.u8);
	// sth r31,436(r1)
	PPC_STORE_U16(ctx.r1.u32 + 436, ctx.r31.u16);
	// sth r15,438(r1)
	PPC_STORE_U16(ctx.r1.u32 + 438, ctx.r15.u16);
	// stb r31,444(r1)
	PPC_STORE_U8(ctx.r1.u32 + 444, ctx.r31.u8);
	// stb r24,445(r1)
	PPC_STORE_U8(ctx.r1.u32 + 445, ctx.r24.u8);
	// stb r31,446(r1)
	PPC_STORE_U8(ctx.r1.u32 + 446, ctx.r31.u8);
	// sth r31,448(r1)
	PPC_STORE_U16(ctx.r1.u32 + 448, ctx.r31.u16);
	// sth r16,450(r1)
	PPC_STORE_U16(ctx.r1.u32 + 450, ctx.r16.u16);
	// stw r7,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r7.u32);
	// stb r31,456(r1)
	PPC_STORE_U8(ctx.r1.u32 + 456, ctx.r31.u8);
	// stb r17,457(r1)
	PPC_STORE_U8(ctx.r1.u32 + 457, ctx.r17.u8);
	// stb r31,458(r1)
	PPC_STORE_U8(ctx.r1.u32 + 458, ctx.r31.u8);
	// sth r31,460(r1)
	PPC_STORE_U16(ctx.r1.u32 + 460, ctx.r31.u16);
	// sth r18,462(r1)
	PPC_STORE_U16(ctx.r1.u32 + 462, ctx.r18.u16);
	// stw r10,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r10.u32);
	// stb r31,468(r1)
	PPC_STORE_U8(ctx.r1.u32 + 468, ctx.r31.u8);
	// stb r28,469(r1)
	PPC_STORE_U8(ctx.r1.u32 + 469, ctx.r28.u8);
	// stb r31,470(r1)
	PPC_STORE_U8(ctx.r1.u32 + 470, ctx.r31.u8);
	// sth r31,472(r1)
	PPC_STORE_U16(ctx.r1.u32 + 472, ctx.r31.u16);
	// sth r8,474(r1)
	PPC_STORE_U16(ctx.r1.u32 + 474, ctx.r8.u16);
	// stw r10,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r10.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// stb r28,481(r1)
	PPC_STORE_U8(ctx.r1.u32 + 481, ctx.r28.u8);
	// stb r27,482(r1)
	PPC_STORE_U8(ctx.r1.u32 + 482, ctx.r27.u8);
	// sth r31,484(r1)
	PPC_STORE_U16(ctx.r1.u32 + 484, ctx.r31.u16);
	// sth r11,486(r1)
	PPC_STORE_U16(ctx.r1.u32 + 486, ctx.r11.u16);
	// stw r10,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r10.u32);
	// stb r31,492(r1)
	PPC_STORE_U8(ctx.r1.u32 + 492, ctx.r31.u8);
	// stb r28,493(r1)
	PPC_STORE_U8(ctx.r1.u32 + 493, ctx.r28.u8);
	// stb r24,494(r1)
	PPC_STORE_U8(ctx.r1.u32 + 494, ctx.r24.u8);
	// sth r31,496(r1)
	PPC_STORE_U16(ctx.r1.u32 + 496, ctx.r31.u16);
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r10,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r10.u32);
	// li r23,44
	ctx.r23.s64 = 44;
	// stb r31,504(r1)
	PPC_STORE_U8(ctx.r1.u32 + 504, ctx.r31.u8);
	// li r14,4
	ctx.r14.s64 = 4;
	// sth r9,498(r1)
	PPC_STORE_U16(ctx.r1.u32 + 498, ctx.r9.u16);
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// sth r23,510(r1)
	PPC_STORE_U16(ctx.r1.u32 + 510, ctx.r23.u16);
	// stb r14,518(r1)
	PPC_STORE_U8(ctx.r1.u32 + 518, ctx.r14.u8);
	// li r19,7
	ctx.r19.s64 = 7;
	// ori r11,r11,9126
	ctx.r11.u64 = ctx.r11.u64 | 9126;
	// stb r28,505(r1)
	PPC_STORE_U8(ctx.r1.u32 + 505, ctx.r28.u8);
	// li r20,8
	ctx.r20.s64 = 8;
	// stb r25,506(r1)
	PPC_STORE_U8(ctx.r1.u32 + 506, ctx.r25.u8);
	// li r21,9
	ctx.r21.s64 = 9;
	// sth r31,508(r1)
	PPC_STORE_U16(ctx.r1.u32 + 508, ctx.r31.u16);
	// li r22,255
	ctx.r22.s64 = 255;
	// stw r10,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r31,516(r1)
	PPC_STORE_U8(ctx.r1.u32 + 516, ctx.r31.u8);
	// li r23,6
	ctx.r23.s64 = 6;
	// stb r28,517(r1)
	PPC_STORE_U8(ctx.r1.u32 + 517, ctx.r28.u8);
	// li r14,12
	ctx.r14.s64 = 12;
	// sth r31,520(r1)
	PPC_STORE_U16(ctx.r1.u32 + 520, ctx.r31.u16);
	// sth r26,522(r1)
	PPC_STORE_U16(ctx.r1.u32 + 522, ctx.r26.u16);
	// stw r10,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r10.u32);
	// stb r31,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r31.u8);
	// stb r28,529(r1)
	PPC_STORE_U8(ctx.r1.u32 + 529, ctx.r28.u8);
	// stb r28,530(r1)
	PPC_STORE_U8(ctx.r1.u32 + 530, ctx.r28.u8);
	// sth r27,532(r1)
	PPC_STORE_U16(ctx.r1.u32 + 532, ctx.r27.u16);
	// sth r31,534(r1)
	PPC_STORE_U16(ctx.r1.u32 + 534, ctx.r31.u16);
	// stw r11,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r11.u32);
	// stb r31,540(r1)
	PPC_STORE_U8(ctx.r1.u32 + 540, ctx.r31.u8);
	// stb r28,541(r1)
	PPC_STORE_U8(ctx.r1.u32 + 541, ctx.r28.u8);
	// stb r23,542(r1)
	PPC_STORE_U8(ctx.r1.u32 + 542, ctx.r23.u8);
	// sth r27,544(r1)
	PPC_STORE_U16(ctx.r1.u32 + 544, ctx.r27.u16);
	// sth r4,546(r1)
	PPC_STORE_U16(ctx.r1.u32 + 546, ctx.r4.u16);
	// stw r11,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r11.u32);
	// stb r31,552(r1)
	PPC_STORE_U8(ctx.r1.u32 + 552, ctx.r31.u8);
	// stb r28,553(r1)
	PPC_STORE_U8(ctx.r1.u32 + 553, ctx.r28.u8);
	// stb r19,554(r1)
	PPC_STORE_U8(ctx.r1.u32 + 554, ctx.r19.u8);
	// sth r27,556(r1)
	PPC_STORE_U16(ctx.r1.u32 + 556, ctx.r27.u16);
	// sth r8,558(r1)
	PPC_STORE_U16(ctx.r1.u32 + 558, ctx.r8.u16);
	// stw r11,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r11.u32);
	// stb r31,564(r1)
	PPC_STORE_U8(ctx.r1.u32 + 564, ctx.r31.u8);
	// stb r28,565(r1)
	PPC_STORE_U8(ctx.r1.u32 + 565, ctx.r28.u8);
	// stb r20,566(r1)
	PPC_STORE_U8(ctx.r1.u32 + 566, ctx.r20.u8);
	// sth r27,568(r1)
	PPC_STORE_U16(ctx.r1.u32 + 568, ctx.r27.u16);
	// sth r26,570(r1)
	PPC_STORE_U16(ctx.r1.u32 + 570, ctx.r26.u16);
	// stw r11,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r11.u32);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// stb r28,577(r1)
	PPC_STORE_U8(ctx.r1.u32 + 577, ctx.r28.u8);
	// stb r21,578(r1)
	PPC_STORE_U8(ctx.r1.u32 + 578, ctx.r21.u8);
	// sth r22,580(r1)
	PPC_STORE_U16(ctx.r1.u32 + 580, ctx.r22.u16);
	// sth r31,582(r1)
	PPC_STORE_U16(ctx.r1.u32 + 582, ctx.r31.u16);
	// stw r9,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r9.u32);
	// stb r31,588(r1)
	PPC_STORE_U8(ctx.r1.u32 + 588, ctx.r31.u8);
	// stb r31,589(r1)
	PPC_STORE_U8(ctx.r1.u32 + 589, ctx.r31.u8);
	// stb r31,590(r1)
	PPC_STORE_U8(ctx.r1.u32 + 590, ctx.r31.u8);
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// sth r31,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r31.u16);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// stb r31,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r31.u8);
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r31.u8);
	// sth r31,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r31.u16);
	// sth r14,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r14.u16);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// stb r25,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r25.u8);
	// stb r31,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r31.u8);
	// sth r31,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r31.u16);
	// sth r4,122(r1)
	PPC_STORE_U16(ctx.r1.u32 + 122, ctx.r4.u16);
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// stb r27,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r27.u8);
	// stb r31,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r31.u8);
	// sth r31,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r31.u16);
	// sth r15,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r15.u16);
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// std r29,600(r1)
	PPC_STORE_U64(ctx.r1.u32 + 600, ctx.r29.u64);
	// li r14,36
	ctx.r14.s64 = 36;
	// li r29,12
	ctx.r29.s64 = 12;
	// stb r24,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r24.u8);
	// stb r31,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r31.u8);
	// sth r31,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r31.u16);
	// sth r16,146(r1)
	PPC_STORE_U16(ctx.r1.u32 + 146, ctx.r16.u16);
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// stb r17,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r17.u8);
	// stb r31,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r31.u8);
	// sth r31,156(r1)
	PPC_STORE_U16(ctx.r1.u32 + 156, ctx.r31.u16);
	// sth r18,158(r1)
	PPC_STORE_U16(ctx.r1.u32 + 158, ctx.r18.u16);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// stb r28,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r28.u8);
	// stb r31,166(r1)
	PPC_STORE_U8(ctx.r1.u32 + 166, ctx.r31.u8);
	// sth r31,168(r1)
	PPC_STORE_U16(ctx.r1.u32 + 168, ctx.r31.u16);
	// sth r8,170(r1)
	PPC_STORE_U16(ctx.r1.u32 + 170, ctx.r8.u16);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// stb r28,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r28.u8);
	// stb r27,178(r1)
	PPC_STORE_U8(ctx.r1.u32 + 178, ctx.r27.u8);
	// sth r31,180(r1)
	PPC_STORE_U16(ctx.r1.u32 + 180, ctx.r31.u16);
	// sth r14,182(r1)
	PPC_STORE_U16(ctx.r1.u32 + 182, ctx.r14.u16);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stb r31,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r31.u8);
	// stb r28,189(r1)
	PPC_STORE_U8(ctx.r1.u32 + 189, ctx.r28.u8);
	// stb r24,190(r1)
	PPC_STORE_U8(ctx.r1.u32 + 190, ctx.r24.u8);
	// sth r27,192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 192, ctx.r27.u16);
	// sth r31,194(r1)
	PPC_STORE_U16(ctx.r1.u32 + 194, ctx.r31.u16);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stb r31,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r31.u8);
	// stb r28,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, ctx.r28.u8);
	// stb r23,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, ctx.r23.u8);
	// sth r27,204(r1)
	PPC_STORE_U16(ctx.r1.u32 + 204, ctx.r27.u16);
	// sth r4,206(r1)
	PPC_STORE_U16(ctx.r1.u32 + 206, ctx.r4.u16);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// stb r28,213(r1)
	PPC_STORE_U8(ctx.r1.u32 + 213, ctx.r28.u8);
	// stb r19,214(r1)
	PPC_STORE_U8(ctx.r1.u32 + 214, ctx.r19.u8);
	// sth r27,216(r1)
	PPC_STORE_U16(ctx.r1.u32 + 216, ctx.r27.u16);
	// sth r8,218(r1)
	PPC_STORE_U16(ctx.r1.u32 + 218, ctx.r8.u16);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// stb r28,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, ctx.r28.u8);
	// stb r20,226(r1)
	PPC_STORE_U8(ctx.r1.u32 + 226, ctx.r20.u8);
	// sth r27,228(r1)
	PPC_STORE_U16(ctx.r1.u32 + 228, ctx.r27.u16);
	// sth r26,230(r1)
	PPC_STORE_U16(ctx.r1.u32 + 230, ctx.r26.u16);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r28,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r28.u8);
	// stb r21,238(r1)
	PPC_STORE_U8(ctx.r1.u32 + 238, ctx.r21.u8);
	// sth r22,240(r1)
	PPC_STORE_U16(ctx.r1.u32 + 240, ctx.r22.u16);
	// sth r31,242(r1)
	PPC_STORE_U16(ctx.r1.u32 + 242, ctx.r31.u16);
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stb r31,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r31.u8);
	// stb r31,249(r1)
	PPC_STORE_U8(ctx.r1.u32 + 249, ctx.r31.u8);
	// stb r31,250(r1)
	PPC_STORE_U8(ctx.r1.u32 + 250, ctx.r31.u8);
	// sth r31,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r31.u16);
	// sth r31,258(r1)
	PPC_STORE_U16(ctx.r1.u32 + 258, ctx.r31.u16);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stb r31,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r31.u8);
	// stb r31,265(r1)
	PPC_STORE_U8(ctx.r1.u32 + 265, ctx.r31.u8);
	// stb r31,266(r1)
	PPC_STORE_U8(ctx.r1.u32 + 266, ctx.r31.u8);
	// sth r31,268(r1)
	PPC_STORE_U16(ctx.r1.u32 + 268, ctx.r31.u16);
	// sth r29,270(r1)
	PPC_STORE_U16(ctx.r1.u32 + 270, ctx.r29.u16);
	// stw r3,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r3.u32);
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r31.u8);
	// stb r25,277(r1)
	PPC_STORE_U8(ctx.r1.u32 + 277, ctx.r25.u8);
	// stb r31,278(r1)
	PPC_STORE_U8(ctx.r1.u32 + 278, ctx.r31.u8);
	// sth r31,280(r1)
	PPC_STORE_U16(ctx.r1.u32 + 280, ctx.r31.u16);
	// sth r4,282(r1)
	PPC_STORE_U16(ctx.r1.u32 + 282, ctx.r4.u16);
	// stw r5,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r5.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// stb r27,289(r1)
	PPC_STORE_U8(ctx.r1.u32 + 289, ctx.r27.u8);
	// stb r31,290(r1)
	PPC_STORE_U8(ctx.r1.u32 + 290, ctx.r31.u8);
	// sth r31,292(r1)
	PPC_STORE_U16(ctx.r1.u32 + 292, ctx.r31.u16);
	// sth r15,294(r1)
	PPC_STORE_U16(ctx.r1.u32 + 294, ctx.r15.u16);
	// stw r6,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r6.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r24,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r24.u8);
	// stb r31,302(r1)
	PPC_STORE_U8(ctx.r1.u32 + 302, ctx.r31.u8);
	// sth r31,304(r1)
	PPC_STORE_U16(ctx.r1.u32 + 304, ctx.r31.u16);
	// sth r16,306(r1)
	PPC_STORE_U16(ctx.r1.u32 + 306, ctx.r16.u16);
	// stw r7,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// stb r31,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, ctx.r31.u8);
	// stb r17,313(r1)
	PPC_STORE_U8(ctx.r1.u32 + 313, ctx.r17.u8);
	// stb r31,314(r1)
	PPC_STORE_U8(ctx.r1.u32 + 314, ctx.r31.u8);
	// sth r31,316(r1)
	PPC_STORE_U16(ctx.r1.u32 + 316, ctx.r31.u16);
	// sth r18,318(r1)
	PPC_STORE_U16(ctx.r1.u32 + 318, ctx.r18.u16);
	// stw r10,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
	// stb r31,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, ctx.r31.u8);
	// stb r28,325(r1)
	PPC_STORE_U8(ctx.r1.u32 + 325, ctx.r28.u8);
	// stb r31,326(r1)
	PPC_STORE_U8(ctx.r1.u32 + 326, ctx.r31.u8);
	// sth r31,328(r1)
	PPC_STORE_U16(ctx.r1.u32 + 328, ctx.r31.u16);
	// sth r8,330(r1)
	PPC_STORE_U16(ctx.r1.u32 + 330, ctx.r8.u16);
	// stw r10,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// stb r28,337(r1)
	PPC_STORE_U8(ctx.r1.u32 + 337, ctx.r28.u8);
	// stb r27,338(r1)
	PPC_STORE_U8(ctx.r1.u32 + 338, ctx.r27.u8);
	// sth r27,340(r1)
	PPC_STORE_U16(ctx.r1.u32 + 340, ctx.r27.u16);
	// sth r31,342(r1)
	PPC_STORE_U16(ctx.r1.u32 + 342, ctx.r31.u16);
	// stw r11,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r11.u32);
	// stb r31,348(r1)
	PPC_STORE_U8(ctx.r1.u32 + 348, ctx.r31.u8);
	// stb r28,349(r1)
	PPC_STORE_U8(ctx.r1.u32 + 349, ctx.r28.u8);
	// stb r23,350(r1)
	PPC_STORE_U8(ctx.r1.u32 + 350, ctx.r23.u8);
	// sth r27,352(r1)
	PPC_STORE_U16(ctx.r1.u32 + 352, ctx.r27.u16);
	// sth r4,354(r1)
	PPC_STORE_U16(ctx.r1.u32 + 354, ctx.r4.u16);
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r11.u32);
	// stb r31,360(r1)
	PPC_STORE_U8(ctx.r1.u32 + 360, ctx.r31.u8);
	// stb r28,361(r1)
	PPC_STORE_U8(ctx.r1.u32 + 361, ctx.r28.u8);
	// stb r19,362(r1)
	PPC_STORE_U8(ctx.r1.u32 + 362, ctx.r19.u8);
	// sth r27,364(r1)
	PPC_STORE_U16(ctx.r1.u32 + 364, ctx.r27.u16);
	// sth r8,366(r1)
	PPC_STORE_U16(ctx.r1.u32 + 366, ctx.r8.u16);
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// stb r31,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, ctx.r31.u8);
	// stb r28,373(r1)
	PPC_STORE_U8(ctx.r1.u32 + 373, ctx.r28.u8);
	// stb r20,374(r1)
	PPC_STORE_U8(ctx.r1.u32 + 374, ctx.r20.u8);
	// sth r27,376(r1)
	PPC_STORE_U16(ctx.r1.u32 + 376, ctx.r27.u16);
	// sth r26,378(r1)
	PPC_STORE_U16(ctx.r1.u32 + 378, ctx.r26.u16);
	// stw r11,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r11.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// stb r28,385(r1)
	PPC_STORE_U8(ctx.r1.u32 + 385, ctx.r28.u8);
	// stb r21,386(r1)
	PPC_STORE_U8(ctx.r1.u32 + 386, ctx.r21.u8);
	// sth r22,388(r1)
	PPC_STORE_U16(ctx.r1.u32 + 388, ctx.r22.u16);
	// sth r31,390(r1)
	PPC_STORE_U16(ctx.r1.u32 + 390, ctx.r31.u16);
	// stw r9,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r9.u32);
	// stb r31,396(r1)
	PPC_STORE_U8(ctx.r1.u32 + 396, ctx.r31.u8);
	// stb r31,397(r1)
	PPC_STORE_U8(ctx.r1.u32 + 397, ctx.r31.u8);
	// stb r31,398(r1)
	PPC_STORE_U8(ctx.r1.u32 + 398, ctx.r31.u8);
	// bl 0x82668e10
	ctx.lr = 0x825CCE54;
	sub_82668E10(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ld r29,600(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 600);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// ori r30,r11,14
	ctx.r30.u64 = ctx.r11.u64 | 14;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// and. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x825cd318
	if (ctx.cr0.lt) goto loc_825CD318;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82668e10
	ctx.lr = 0x825CCE7C;
	sub_82668E10(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x825cd318
	if (ctx.cr0.lt) goto loc_825CD318;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82668e10
	ctx.lr = 0x825CCE98;
	sub_82668E10(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x825cd318
	if (ctx.cr0.lt) goto loc_825CD318;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// addi r22,r11,5204
	ctx.r22.s64 = ctx.r11.s64 + 5204;
loc_825CCEB8:
	// addi r11,r22,-44
	ctx.r11.s64 = ctx.r22.s64 + -44;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r24,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// bl 0x82547f38
	ctx.lr = 0x825CCECC;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x825CCEDC;
	sub_82546708(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82668a48
	ctx.lr = 0x825CCEE4;
	sub_82668A48(ctx, base);
	// addi r11,r1,672
	ctx.r11.s64 = ctx.r1.s64 + 672;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r3,r24,r11
	PPC_STORE_U32(ctx.r24.u32 + ctx.r11.u32, ctx.r3.u32);
	// blt 0x825cd318
	if (ctx.cr0.lt) goto loc_825CD318;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825469e0
	ctx.lr = 0x825CCF04;
	sub_825469E0(ctx, base);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpwi cr6,r24,24
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 24, ctx.xer);
	// blt cr6,0x825cceb8
	if (ctx.cr6.lt) goto loc_825CCEB8;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
loc_825CCF14:
	// addi r11,r22,-20
	ctx.r11.s64 = ctx.r22.s64 + -20;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r24,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// bl 0x82547f38
	ctx.lr = 0x825CCF28;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r3,r24,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r22.u32);
	// addi r4,r1,600
	ctx.r4.s64 = ctx.r1.s64 + 600;
	// bl 0x82547f38
	ctx.lr = 0x825CCF38;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x825CCF48;
	sub_82546708(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x826686a0
	ctx.lr = 0x825CCF50;
	sub_826686A0(ctx, base);
	// addi r11,r1,640
	ctx.r11.s64 = ctx.r1.s64 + 640;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r3,r24,r11
	PPC_STORE_U32(ctx.r24.u32 + ctx.r11.u32, ctx.r3.u32);
	// blt 0x825cd318
	if (ctx.cr0.lt) goto loc_825CD318;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825469e0
	ctx.lr = 0x825CCF70;
	sub_825469E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// bl 0x82546708
	ctx.lr = 0x825CCF80;
	sub_82546708(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x826686a0
	ctx.lr = 0x825CCF88;
	sub_826686A0(ctx, base);
	// addi r11,r1,608
	ctx.r11.s64 = ctx.r1.s64 + 608;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r3,r24,r11
	PPC_STORE_U32(ctx.r24.u32 + ctx.r11.u32, ctx.r3.u32);
	// blt 0x825cd318
	if (ctx.cr0.lt) goto loc_825CD318;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825469e0
	ctx.lr = 0x825CCFA8;
	sub_825469E0(ctx, base);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpwi cr6,r24,20
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 20, ctx.xer);
	// blt cr6,0x825ccf14
	if (ctx.cr6.lt) goto loc_825CCF14;
	// lwz r11,672(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// lwz r9,608(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// li r7,64
	ctx.r7.s64 = 64;
	// lwz r10,640(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// addi r30,r8,-5896
	ctx.r30.s64 = ctx.r8.s64 + -5896;
	// li r8,40
	ctx.r8.s64 = 40;
	// lwz r6,648(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// lwz r5,616(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// li r4,40
	ctx.r4.s64 = 40;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// li r11,52
	ctx.r11.s64 = 52;
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// li r9,36
	ctx.r9.s64 = 36;
	// stw r11,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r24,680(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// li r11,64
	ctx.r11.s64 = 64;
	// lwz r15,684(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// li r21,36
	ctx.r21.s64 = 36;
	// lwz r23,652(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r22,620(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r20,656(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// lwz r19,624(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// lwz r18,676(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// lwz r17,644(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// lwz r16,612(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r8,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r8.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r9,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r9.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r7,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r7.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r10,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r10.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r6,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r6.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r5,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r5.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r8,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r8.u32);
	// stw r7,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r7.u32);
	// stw r9,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r9.u32);
	// li r9,36
	ctx.r9.s64 = 36;
	// lwz r7,688(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// lwz r8,692(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// stw r4,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r4.u32);
	// stw r3,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r3.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// stw r26,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r26.u32);
	// stw r25,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r25.u32);
	// stw r24,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r24.u32);
	// stw r23,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r23.u32);
	// stw r22,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r22.u32);
	// stw r21,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r21.u32);
	// stw r25,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r25.u32);
	// stw r24,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r24.u32);
	// stw r20,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r20.u32);
	// stw r19,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r19.u32);
	// stw r14,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r14.u32);
	// stw r18,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r18.u32);
	// stw r17,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r17.u32);
	// stw r16,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r16.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r15,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r15.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r4,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r4.u32);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// stw r15,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r15.u32);
	// stw r25,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r25.u32);
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r9,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r9.u32);
	// stw r8,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r8.u32);
	// stw r8,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r8.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// stw r31,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r31.u32);
	// stw r25,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r25.u32);
	// stw r14,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r14.u32);
	// stw r7,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r7.u32);
	// stw r31,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r31.u32);
	// stw r31,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r31.u32);
	// stw r9,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r9.u32);
	// stw r8,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r8.u32);
loc_825CD148:
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,-12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12);
	// bl 0x8266ee60
	ctx.lr = 0x825CD158;
	sub_8266EE60(ctx, base);
	// lwz r3,-8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// bl 0x8266ee60
	ctx.lr = 0x825CD160;
	sub_8266EE60(ctx, base);
	// lwz r3,-4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// bl 0x8266ee60
	ctx.lr = 0x825CD168;
	sub_8266EE60(ctx, base);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8266ee60
	ctx.lr = 0x825CD170;
	sub_8266EE60(ctx, base);
	// addi r24,r30,4
	ctx.r24.s64 = ctx.r30.s64 + 4;
	// lwzx r3,r31,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// bl 0x8266ee60
	ctx.lr = 0x825CD17C;
	sub_8266EE60(ctx, base);
	// lwz r3,-8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// lwz r11,872(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 872);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825cd1a0
	if (!ctx.cr0.eq) goto loc_825CD1A0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,-12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12);
	// addi r6,r8,4
	ctx.r6.s64 = ctx.r8.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826720f8
	ctx.lr = 0x825CD1A0;
	sub_826720F8(ctx, base);
loc_825CD1A0:
	// lwzx r3,r31,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lwz r11,872(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 872);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825cd1c8
	if (!ctx.cr0.eq) goto loc_825CD1C8;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// lwzx r5,r31,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826720f8
	ctx.lr = 0x825CD1C8;
	sub_826720F8(ctx, base);
loc_825CD1C8:
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmpwi cr6,r31,120
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 120, ctx.xer);
	// blt cr6,0x825cd148
	if (ctx.cr6.lt) goto loc_825CD148;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r5,140
	ctx.r5.s64 = 140;
	// addi r31,r11,-6048
	ctx.r31.s64 = ctx.r11.s64 + -6048;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x825CD1EC;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r30,r11,-6272
	ctx.r30.s64 = ctx.r11.s64 + -6272;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x825CD204;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r5,140
	ctx.r5.s64 = 140;
	// addi r3,r11,-6192
	ctx.r3.s64 = ctx.r11.s64 + -6192;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82fa7cf0
	ctx.lr = 0x825CD218;
	sub_82FA7CF0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// li r9,210
	ctx.r9.s64 = 210;
	// stb r10,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r10.u8);
	// li r11,211
	ctx.r11.s64 = 211;
	// li r10,212
	ctx.r10.s64 = 212;
	// stb r9,22(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22, ctx.r9.u8);
	// stb r11,23(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23, ctx.r11.u8);
	// li r9,213
	ctx.r9.s64 = 213;
	// stb r10,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r10.u8);
	// li r11,214
	ctx.r11.s64 = 214;
	// li r10,215
	ctx.r10.s64 = 215;
	// stb r9,26(r30)
	PPC_STORE_U8(ctx.r30.u32 + 26, ctx.r9.u8);
	// stb r11,25(r30)
	PPC_STORE_U8(ctx.r30.u32 + 25, ctx.r11.u8);
	// li r9,216
	ctx.r9.s64 = 216;
	// stb r10,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r10.u8);
	// li r11,217
	ctx.r11.s64 = 217;
	// li r10,218
	ctx.r10.s64 = 218;
	// stb r9,14(r30)
	PPC_STORE_U8(ctx.r30.u32 + 14, ctx.r9.u8);
	// stb r11,15(r30)
	PPC_STORE_U8(ctx.r30.u32 + 15, ctx.r11.u8);
	// li r9,219
	ctx.r9.s64 = 219;
	// stb r10,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r10.u8);
	// li r11,220
	ctx.r11.s64 = 220;
	// li r10,221
	ctx.r10.s64 = 221;
	// stb r9,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r9.u8);
	// stb r11,18(r30)
	PPC_STORE_U8(ctx.r30.u32 + 18, ctx.r11.u8);
	// li r9,222
	ctx.r9.s64 = 222;
	// stb r10,19(r30)
	PPC_STORE_U8(ctx.r30.u32 + 19, ctx.r10.u8);
	// li r11,223
	ctx.r11.s64 = 223;
	// li r10,201
	ctx.r10.s64 = 201;
	// stb r9,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r9.u8);
	// stb r11,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r11.u8);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stb r10,27(r30)
	PPC_STORE_U8(ctx.r30.u32 + 27, ctx.r10.u8);
	// bl 0x8266eed8
	ctx.lr = 0x825CD2A8;
	sub_8266EED8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8266eed8
	ctx.lr = 0x825CD2B0;
	sub_8266EED8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8266eed8
	ctx.lr = 0x825CD2B8;
	sub_8266EED8(ctx, base);
	// addi r11,r1,672
	ctx.r11.s64 = ctx.r1.s64 + 672;
	// li r31,6
	ctx.r31.s64 = 6;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_825CD2C4:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x8266eed8
	ctx.lr = 0x825CD2CC;
	sub_8266EED8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x825cd2c4
	if (!ctx.cr0.eq) goto loc_825CD2C4;
	// addi r11,r1,640
	ctx.r11.s64 = ctx.r1.s64 + 640;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_825CD2E0:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x8266eed8
	ctx.lr = 0x825CD2E8;
	sub_8266EED8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x825cd2e0
	if (!ctx.cr0.eq) goto loc_825CD2E0;
	// addi r11,r1,608
	ctx.r11.s64 = ctx.r1.s64 + 608;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
loc_825CD2F8:
	// lwzu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x8266eed8
	ctx.lr = 0x825CD300;
	sub_8266EED8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x825cd2f8
	if (!ctx.cr0.eq) goto loc_825CD2F8;
	// lwz r11,592(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,5256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5256, ctx.r27.u32);
	// b 0x825cd320
	goto loc_825CD320;
loc_825CD318:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_825CD320:
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CD328"))) PPC_WEAK_FUNC(sub_825CD328);
PPC_FUNC_IMPL(__imp__sub_825CD328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x825CD330;
	__savegprlr_17(ctx, base);
	// stfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f29.u64);
	// stfd f30,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,20880
	ctx.r12.u64 = ctx.r12.u64 | 20880;
	// bl 0x82faced4
	ctx.lr = 0x825CD348;
	sub_82FACED4(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r4,-22400
	ctx.r4.s64 = ctx.r4.s64 + -22400;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x825CD380;
	sub_82FA77C0(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r4,-22272
	ctx.r4.s64 = ctx.r4.s64 + -22272;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82fa77c0
	ctx.lr = 0x825CD394;
	sub_82FA77C0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// addi r9,r30,-8
	ctx.r9.s64 = ctx.r30.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r20,0(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825CD3A8:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x825cd3a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CD3A8;
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r17,1
	ctx.r17.s64 = 1;
	// lwz r11,148(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cd488
	if (ctx.cr6.eq) goto loc_825CD488;
	// lwz r11,144(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cd488
	if (ctx.cr6.eq) goto loc_825CD488;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,-4400
	ctx.r11.s64 = ctx.r11.s64 + -4400;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lvx128 v13,r11,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r11,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// lvx128 v11,r11,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_825CD41C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// lfs f29,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x825cd454
	if (ctx.cr6.eq) goto loc_825CD454;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x825cd454
	if (ctx.cr6.eq) goto loc_825CD454;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x825cd454
	if (ctx.cr6.eq) goto loc_825CD454;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825cd460
	if (!ctx.cr6.eq) goto loc_825CD460;
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825cd460
	if (ctx.cr6.eq) goto loc_825CD460;
loc_825CD454:
	// lfs f0,12(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x825cdaac
	if (ctx.cr6.eq) goto loc_825CDAAC;
loc_825CD460:
	// lwz r10,448(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 448);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x825cd490
	if (ctx.cr6.eq) goto loc_825CD490;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x825cdaac
	if (!ctx.cr6.eq) goto loc_825CDAAC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825ceab0
	ctx.lr = 0x825CD484;
	sub_825CEAB0(ctx, base);
	// b 0x825cdaac
	goto loc_825CDAAC;
loc_825CD488:
	// li r18,0
	ctx.r18.s64 = 0;
	// b 0x825cd41c
	goto loc_825CD41C;
loc_825CD490:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825cd560
	if (!ctx.cr6.eq) goto loc_825CD560;
	// lfs f0,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x825cd560
	if (ctx.cr6.eq) goto loc_825CD560;
	// lwz r11,2480(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cd4bc
	if (ctx.cr6.eq) goto loc_825CD4BC;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r7,23196(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23196);
	// b 0x825cd4c4
	goto loc_825CD4C4;
loc_825CD4BC:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r7,23200(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23200);
loc_825CD4C4:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825cd560
	if (ctx.cr6.eq) goto loc_825CD560;
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// ble cr6,0x825cd4f8
	if (!ctx.cr6.gt) goto loc_825CD4F8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,689
	ctx.r11.s64 = ctx.r11.s64 + 689;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825cd504
	if (!ctx.cr6.eq) goto loc_825CD504;
loc_825CD4F8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_825CD504:
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r29,-8
	ctx.r9.s64 = ctx.r29.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825CD518:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x825cd518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CD518;
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// stw r18,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r18.u32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r3,428(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 428);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r17,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r17.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CD55C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825cdaac
	goto loc_825CDAAC;
loc_825CD560:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ce9d8
	ctx.lr = 0x825CD568;
	sub_825CE9D8(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r28,r11,2508
	ctx.r28.s64 = ctx.r11.s64 + 2508;
	// lwz r10,2480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825cd580
	if (!ctx.cr6.eq) goto loc_825CD580;
	// addi r28,r11,2544
	ctx.r28.s64 = ctx.r11.s64 + 2544;
loc_825CD580:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CD594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r26,r11,50794
	ctx.r26.u64 = ctx.r11.u64 | 50794;
	// ori r27,r10,43964
	ctx.r27.u64 = ctx.r10.u64 | 43964;
	// ori r19,r9,6565
	ctx.r19.u64 = ctx.r9.u64 | 6565;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825cd7d8
	if (ctx.cr0.eq) goto loc_825CD7D8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825cd7d8
	if (!ctx.cr6.gt) goto loc_825CD7D8;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x825cd5f8
	if (!ctx.cr6.gt) goto loc_825CD5F8;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,689
	ctx.r10.s64 = ctx.r10.s64 + 689;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825cd5f8
	if (ctx.cr6.eq) goto loc_825CD5F8;
	// rotlwi r31,r9,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x825cd60c
	goto loc_825CD60C;
loc_825CD5F8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_825CD60C:
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r29,-8
	ctx.r9.s64 = ctx.r29.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825CD61C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x825cd61c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CD61C;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825cdac0
	ctx.lr = 0x825CD634;
	sub_825CDAC0(ctx, base);
	// addi r11,r1,400
	ctx.r11.s64 = ctx.r1.s64 + 400;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// add r11,r4,r26
	ctx.r11.u64 = ctx.r4.u64 + ctx.r26.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,44364
	ctx.r12.u64 = ctx.r12.u64 | 44364;
	// stfsx f0,r1,r12
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + ctx.r12.u32, temp.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r17,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r17.u32);
	// stw r18,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r18.u32);
	// beq cr6,0x825cd684
	if (ctx.cr6.eq) goto loc_825CD684;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x825cd688
	goto loc_825CD688;
loc_825CD684:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_825CD688:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825cd6ac
	if (!ctx.cr6.eq) goto loc_825CD6AC;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x825cd6a0
	if (ctx.cr6.eq) goto loc_825CD6A0;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// b 0x825cd6a4
	goto loc_825CD6A4;
loc_825CD6A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825CD6A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cd7bc
	if (ctx.cr6.eq) goto loc_825CD7BC;
loc_825CD6AC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f30,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x825cd6d4
	if (ctx.cr6.eq) goto loc_825CD6D4;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
loc_825CD6D4:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CD6E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x825cd700
	if (!ctx.cr6.lt) goto loc_825CD700;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
loc_825CD700:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825cd7bc
	if (!ctx.cr6.gt) goto loc_825CD7BC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_825CD714:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r11,r11,r19
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825cd734
	if (ctx.cr0.eq) goto loc_825CD734;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// b 0x825cd738
	goto loc_825CD738;
loc_825CD734:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_825CD738:
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cd7a8
	if (ctx.cr6.eq) goto loc_825CD7A8;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// bge cr6,0x825cd78c
	if (!ctx.cr6.lt) goto loc_825CD78C;
	// ld r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// ld r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r11,428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// std r10,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r10.u64);
	// std r3,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r3.u64);
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x825cd79c
	goto loc_825CD79C;
loc_825CD78C:
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_825CD79C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CD7A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825CD7A8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825cd714
	if (ctx.cr6.lt) goto loc_825CD714;
loc_825CD7BC:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CD7D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825cdaac
	if (!ctx.cr0.eq) goto loc_825CDAAC;
loc_825CD7D8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825cd7f8
	if (!ctx.cr6.eq) goto loc_825CD7F8;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r31,5
	ctx.r31.s64 = 5;
	// addi r11,r11,-1320
	ctx.r11.s64 = ctx.r11.s64 + -1320;
	// addi r30,r11,-32
	ctx.r30.s64 = ctx.r11.s64 + -32;
	// b 0x825cd838
	goto loc_825CD838;
loc_825CD7F8:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825cd828
	if (ctx.cr6.eq) goto loc_825CD828;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x825cd828
	if (ctx.cr6.eq) goto loc_825CD828;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x825cd828
	if (ctx.cr6.eq) goto loc_825CD828;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x825cdaac
	if (!ctx.cr6.eq) goto loc_825CDAAC;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r30,r11,-1320
	ctx.r30.s64 = ctx.r11.s64 + -1320;
	// b 0x825cd838
	goto loc_825CD838;
loc_825CD828:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r11,r11,-1320
	ctx.r11.s64 = ctx.r11.s64 + -1320;
	// addi r30,r11,-12
	ctx.r30.s64 = ctx.r11.s64 + -12;
loc_825CD838:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r10,r10,r19
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r19.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825cd8f0
	if (ctx.cr0.eq) goto loc_825CD8F0;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r10,r10,6528
	ctx.r10.u64 = ctx.r10.u64 | 6528;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825cd870
	if (!ctx.cr6.eq) goto loc_825CD870;
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
loc_825CD870:
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8286de68
	ctx.lr = 0x825CD878;
	sub_8286DE68(ctx, base);
	// lis r6,512
	ctx.r6.s64 = 33554432;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x826631f0
	ctx.lr = 0x825CD88C;
	sub_826631F0(ctx, base);
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8286de68
	ctx.lr = 0x825CD8A0;
	sub_8286DE68(ctx, base);
	// lis r6,256
	ctx.r6.s64 = 16777216;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x826631f0
	ctx.lr = 0x825CD8B4;
	sub_826631F0(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f29,10020(r20)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r20.u32 + 10020, temp.u32);
	// stfs f29,10024(r20)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r20.u32 + 10024, temp.u32);
	// stfs f29,10028(r20)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r20.u32 + 10028, temp.u32);
	// stfs f0,10016(r20)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + 10016, temp.u32);
	// ld r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 8);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,8(r20)
	PPC_STORE_U64(ctx.r20.u32 + 8, ctx.r11.u64);
loc_825CD8F0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x825cdaac
	if (!ctx.cr6.gt) goto loc_825CDAAC;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// addi r27,r10,-5776
	ctx.r27.s64 = ctx.r10.s64 + -5776;
	// addi r26,r11,-5896
	ctx.r26.s64 = ctx.r11.s64 + -5896;
loc_825CD910:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r31,13072(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13072);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mulli r30,r28,24
	ctx.r30.s64 = ctx.r28.s64 * 24;
	// bne cr6,0x825cd9e8
	if (!ctx.cr6.eq) goto loc_825CD9E8;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// beq cr6,0x825cd940
	if (ctx.cr6.eq) goto loc_825CD940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266ee60
	ctx.lr = 0x825CD940;
	sub_8266EE60(ctx, base);
loc_825CD940:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825cd950
	if (ctx.cr6.eq) goto loc_825CD950;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82668b38
	ctx.lr = 0x825CD950;
	sub_82668B38(ctx, base);
loc_825CD950:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825cd960
	if (ctx.cr6.eq) goto loc_825CD960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266eed8
	ctx.lr = 0x825CD960;
	sub_8266EED8(ctx, base);
loc_825CD960:
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// lwz r31,13068(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13068);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// beq cr6,0x825cd97c
	if (ctx.cr6.eq) goto loc_825CD97C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266ee60
	ctx.lr = 0x825CD97C;
	sub_8266EE60(ctx, base);
loc_825CD97C:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825cd98c
	if (ctx.cr6.eq) goto loc_825CD98C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82668790
	ctx.lr = 0x825CD98C;
	sub_82668790(ctx, base);
loc_825CD98C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825cd99c
	if (ctx.cr6.eq) goto loc_825CD99C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266eed8
	ctx.lr = 0x825CD99C;
	sub_8266EED8(ctx, base);
loc_825CD99C:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// addi r6,r6,-23452
	ctx.r6.s64 = ctx.r6.s64 + -23452;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8254a8f0
	ctx.lr = 0x825CD9BC;
	sub_8254A8F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825cda78
	if (ctx.cr0.eq) goto loc_825CDA78;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82a75198
	ctx.lr = 0x825CD9D0;
	sub_82A75198(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826684a8
	ctx.lr = 0x825CD9E4;
	sub_826684A8(ctx, base);
	// b 0x825cda78
	goto loc_825CDA78;
loc_825CD9E8:
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// beq cr6,0x825cda00
	if (ctx.cr6.eq) goto loc_825CDA00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266ee60
	ctx.lr = 0x825CDA00;
	sub_8266EE60(ctx, base);
loc_825CDA00:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825cda10
	if (ctx.cr6.eq) goto loc_825CDA10;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82668b38
	ctx.lr = 0x825CDA10;
	sub_82668B38(ctx, base);
loc_825CDA10:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825cda20
	if (ctx.cr6.eq) goto loc_825CDA20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266eed8
	ctx.lr = 0x825CDA20;
	sub_8266EED8(ctx, base);
loc_825CDA20:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r31,13068(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13068);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lbzx r11,r11,r19
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r27,12
	ctx.r11.s64 = ctx.r27.s64 + 12;
	// bne 0x825cda48
	if (!ctx.cr0.eq) goto loc_825CDA48;
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
loc_825CDA48:
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// beq cr6,0x825cda58
	if (ctx.cr6.eq) goto loc_825CDA58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266ee60
	ctx.lr = 0x825CDA58;
	sub_8266EE60(ctx, base);
loc_825CDA58:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825cda68
	if (ctx.cr6.eq) goto loc_825CDA68;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82668790
	ctx.lr = 0x825CDA68;
	sub_82668790(ctx, base);
loc_825CDA68:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825cda78
	if (ctx.cr6.eq) goto loc_825CDA78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266eed8
	ctx.lr = 0x825CDA78;
	sub_8266EED8(ctx, base);
loc_825CDA78:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825ce1a8
	ctx.lr = 0x825CDAA0;
	sub_825CE1A8(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x825cd910
	if (!ctx.cr0.eq) goto loc_825CD910;
loc_825CDAAC:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CDAC0"))) PPC_WEAK_FUNC(sub_825CDAC0);
PPC_FUNC_IMPL(__imp__sub_825CDAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x825CDAC8;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r7,512
	ctx.r7.s64 = 512;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// stw r3,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r4,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r8,r11,112
	ctx.r8.s64 = ctx.r11.s64 + 112;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// addi r9,r10,80
	ctx.r9.s64 = ctx.r10.s64 + 80;
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// li r5,-48
	ctx.r5.s64 = -48;
	// lwz r7,24(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// lwz r7,28(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lwz r7,32(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// lwz r7,36(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r7,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// lwz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// lwz r7,44(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// lwz r7,52(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// lwz r7,56(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// lwz r7,60(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// lwz r7,64(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r7,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// lwz r7,68(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r7,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r7.u32);
	// lwz r7,72(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// lwz r7,76(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r3,32
	ctx.r3.s64 = 32;
loc_825CDB90:
	// lvx128 v0,r8,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r9,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r6,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r8,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r9,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvx128 v0,r9,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// bdnz 0x825cdb90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CDB90;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,32832
	ctx.r9.u64 = ctx.r9.u64 | 32832;
	// li r5,10240
	ctx.r5.s64 = 10240;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// ori r9,r8,32864
	ctx.r9.u64 = ctx.r8.u64 | 32864;
	// add r4,r31,r9
	ctx.r4.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// add r3,r30,r9
	ctx.r3.u64 = ctx.r30.u64 + ctx.r9.u64;
	// stwx r11,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x825CDBEC;
	sub_82FA77C0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r4,300(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// ori r6,r11,43120
	ctx.r6.u64 = ctx.r11.u64 | 43120;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r8,r10,43124
	ctx.r8.u64 = ctx.r10.u64 | 43124;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// ori r11,r11,43104
	ctx.r11.u64 = ctx.r11.u64 | 43104;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// rotlwi r24,r6,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// ori r7,r10,43136
	ctx.r7.u64 = ctx.r10.u64 | 43136;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lvx128 v0,r31,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r29,r31,r7
	ctx.r29.u64 = ctx.r31.u64 + ctx.r7.u64;
	// stvx128 v0,r30,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r28,r30,r7
	ctx.r28.u64 = ctx.r30.u64 + ctx.r7.u64;
	// rotlwi r7,r4,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rotlwi r23,r3,0
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r27,0
	ctx.r27.s64 = 0;
	// ori r9,r10,43200
	ctx.r9.u64 = ctx.r10.u64 | 43200;
	// lis r26,0
	ctx.r26.s64 = 0;
	// ori r10,r27,43264
	ctx.r10.u64 = ctx.r27.u64 | 43264;
	// add r27,r31,r9
	ctx.r27.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r25,r30,r9
	ctx.r25.u64 = ctx.r30.u64 + ctx.r9.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// ori r11,r26,43328
	ctx.r11.u64 = ctx.r26.u64 | 43328;
	// add r26,r31,r10
	ctx.r26.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r8,292(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r10,32
	ctx.r10.s64 = 32;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// add r31,r8,r22
	ctx.r31.u64 = ctx.r8.u64 + ctx.r22.u64;
	// lwzx r4,r4,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r24.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// lis r24,0
	ctx.r24.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// rotlwi r31,r5,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stwx r4,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r4.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwzx r4,r7,r23
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// stwx r4,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r4.u32);
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ori r3,r6,43392
	ctx.r3.u64 = ctx.r6.u64 | 43392;
	// lvx128 v0,r29,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// ori r4,r24,43456
	ctx.r4.u64 = ctx.r24.u64 | 43456;
	// stvx128 v0,r28,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r29,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r28,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r29,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r28,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r27,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r25,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r27,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r25,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r27,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r25,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r26
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r26,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r26.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// rotlwi r29,r5,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stvx128 v0,r30,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lvx128 v0,r26,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r26.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lwz r24,92(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stvx128 v0,r30,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r6,0
	ctx.r6.s64 = 0;
	// lvx128 v0,r26,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r26.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// lis r20,0
	ctx.r20.s64 = 0;
	// stvx128 v0,r30,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ori r5,r6,43520
	ctx.r5.u64 = ctx.r6.u64 | 43520;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r18,2
	ctx.r18.s64 = 2;
	// ori r6,r20,43536
	ctx.r6.u64 = ctx.r20.u64 | 43536;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r20,300(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// rotlwi r19,r9,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// rotlwi r18,r18,0
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r18.u32, 0);
	// rotlwi r16,r10,0
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rotlwi r21,r10,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// add r27,r7,r3
	ctx.r27.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// add r23,r8,r3
	ctx.r23.u64 = ctx.r8.u64 + ctx.r3.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// rotlwi r18,r9,0
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r25,r8,r4
	ctx.r25.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r22,r7,r4
	ctx.r22.u64 = ctx.r7.u64 + ctx.r4.u64;
	// addis r17,r7,1
	ctx.r17.s64 = ctx.r7.s64 + 65536;
	// addi r17,r17,-21936
	ctx.r17.s64 = ctx.r17.s64 + -21936;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r28,r18
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r18.u32) & ~0xF), VectorMaskL));
	// subf r20,r10,r20
	ctx.r20.s64 = ctx.r20.s64 - ctx.r10.s64;
	// stvx128 v0,r24,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32 + ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addis r17,r10,1
	ctx.r17.s64 = ctx.r10.s64 + 65536;
	// lvx128 v0,r28,r16
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r16.u32) & ~0xF), VectorMaskL));
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// stvx128 v0,r24,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,300(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lvx128 v0,r28,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r17,r17,-21968
	ctx.r17.s64 = ctx.r17.s64 + -21968;
	// stvx128 v0,r24,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r7,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// stvx128 v0,r8,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v0,r27,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// rotlwi r3,r20,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// stvx128 v0,r23,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r27,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r23,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r27,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r23,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r7,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// rotlwi r7,r17,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r17.u32, 0);
	// stvx128 v0,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,-48
	ctx.r4.s64 = -48;
	// lvx128 v0,r22,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r22.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r25,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r22,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r22.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r25,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r22,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r22.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r25,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lvx128 v0,r10,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,-16
	ctx.r5.s64 = -16;
	// lvx128 v0,r10,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_825CDE2C:
	// lvx128 v0,r6,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r7,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r3,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r6,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r7,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r6,r6,64
	ctx.r6.s64 = ctx.r6.s64 + 64;
	// stvx128 v0,r7,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// bdnz 0x825cde2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CDE2C;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,43680
	ctx.r9.u64 = ctx.r9.u64 | 43680;
	// ori r4,r8,43684
	ctx.r4.u64 = ctx.r8.u64 | 43684;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r5,r7,43696
	ctx.r5.u64 = ctx.r7.u64 | 43696;
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r31,0
	ctx.r31.s64 = 0;
	// ori r7,r8,43728
	ctx.r7.u64 = ctx.r8.u64 | 43728;
	// ori r8,r9,43744
	ctx.r8.u64 = ctx.r9.u64 | 43744;
	// ori r9,r31,43760
	ctx.r9.u64 = ctx.r31.u64 | 43760;
	// lis r6,0
	ctx.r6.s64 = 0;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r6,r6,43712
	ctx.r6.u64 = ctx.r6.u64 | 43712;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r8,r8,-21760
	ctx.r8.s64 = ctx.r8.s64 + -21760;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stwx r9,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// lvx128 v0,r10,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r10,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r10,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r10,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r10,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_825CDEEC:
	// lvx128 v0,r8,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bdnz 0x825cdeec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CDEEC;
	// li r8,2
	ctx.r8.s64 = 2;
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r9,r9,-21728
	ctx.r9.s64 = ctx.r9.s64 + -21728;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_825CDF0C:
	// lvx128 v0,r9,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x825cdf0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CDF0C;
	// li r8,2
	ctx.r8.s64 = 2;
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r9,r9,-21696
	ctx.r9.s64 = ctx.r9.s64 + -21696;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_825CDF2C:
	// lvx128 v0,r9,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x825cdf2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CDF2C;
	// li r8,2
	ctx.r8.s64 = 2;
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r9,r9,-21664
	ctx.r9.s64 = ctx.r9.s64 + -21664;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_825CDF4C:
	// lvx128 v0,r9,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x825cdf4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CDF4C;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r23,292(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r22,300(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// ori r9,r9,43904
	ctx.r9.u64 = ctx.r9.u64 | 43904;
	// ori r7,r8,43920
	ctx.r7.u64 = ctx.r8.u64 | 43920;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lvx128 v0,r10,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// ori r24,r5,43956
	ctx.r24.u64 = ctx.r5.u64 | 43956;
	// stvx128 v0,r11,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ori r8,r6,43936
	ctx.r8.u64 = ctx.r6.u64 | 43936;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// ori r9,r9,43952
	ctx.r9.u64 = ctx.r9.u64 | 43952;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// ori r27,r5,43968
	ctx.r27.u64 = ctx.r5.u64 | 43968;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// rotlwi r27,r18,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r18.u32, 0);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r25,r9,43960
	ctx.r25.u64 = ctx.r9.u64 | 43960;
	// ori r26,r8,43964
	ctx.r26.u64 = ctx.r8.u64 | 43964;
	// lis r30,0
	ctx.r30.s64 = 0;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// ori r3,r4,43988
	ctx.r3.u64 = ctx.r4.u64 | 43988;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// lis r31,0
	ctx.r31.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lvx128 v0,r10,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// ori r9,r30,44032
	ctx.r9.u64 = ctx.r30.u64 | 44032;
	// stvx128 v0,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rotlwi r11,r19,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// lwz r16,84(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r26,0
	ctx.r26.s64 = 0;
	// lis r25,0
	ctx.r25.s64 = 0;
	// lis r24,0
	ctx.r24.s64 = 0;
	// lis r17,0
	ctx.r17.s64 = 0;
	// ori r8,r31,44016
	ctx.r8.u64 = ctx.r31.u64 | 44016;
	// lis r15,0
	ctx.r15.s64 = 0;
	// lis r14,0
	ctx.r14.s64 = 0;
	// ori r28,r5,43972
	ctx.r28.u64 = ctx.r5.u64 | 43972;
	// ori r29,r4,43976
	ctx.r29.u64 = ctx.r4.u64 | 43976;
	// ori r30,r6,43980
	ctx.r30.u64 = ctx.r6.u64 | 43980;
	// ori r31,r7,43984
	ctx.r31.u64 = ctx.r7.u64 | 43984;
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// ori r4,r26,43992
	ctx.r4.u64 = ctx.r26.u64 | 43992;
	// ori r5,r25,43996
	ctx.r5.u64 = ctx.r25.u64 | 43996;
	// ori r6,r24,44000
	ctx.r6.u64 = ctx.r24.u64 | 44000;
	// ori r7,r17,44004
	ctx.r7.u64 = ctx.r17.u64 | 44004;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lvx128 v0,r10,r19
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// stvx128 v0,r23,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r11,r22,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r27.u32);
	// stwx r11,r23,r18
	PPC_STORE_U32(ctx.r23.u32 + ctx.r18.u32, ctx.r11.u32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lwzx r11,r20,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r16.u32);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// ori r23,r15,44048
	ctx.r23.u64 = ctx.r15.u64 | 44048;
	// ori r22,r14,44048
	ctx.r22.u64 = ctx.r14.u64 | 44048;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// ori r10,r10,44052
	ctx.r10.u64 = ctx.r10.u64 | 44052;
	// lwz r18,300(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lis r20,0
	ctx.r20.s64 = 0;
	// lwz r21,96(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r14,r10
	ctx.r14.u64 = ctx.r10.u64;
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// lwz r15,100(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ori r9,r20,44080
	ctx.r9.u64 = ctx.r20.u64 | 44080;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// ori r10,r3,44084
	ctx.r10.u64 = ctx.r3.u64 | 44084;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// lwz r20,292(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r8,r8,44064
	ctx.r8.u64 = ctx.r8.u64 | 44064;
	// lwzx r21,r18,r21
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r21.u32);
	// stwx r21,r3,r15
	PPC_STORE_U32(ctx.r3.u32 + ctx.r15.u32, ctx.r21.u32);
	// lfsx f0,r18,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r11,r18,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r18.u32, 0);
	// lwz r21,108(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r18,112(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r15,116(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfsx f0,r20,r21
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r21.u32, temp.u32);
	// lfsx f0,r11,r18
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r20,r15
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r15.u32, temp.u32);
	// lfsx f0,r11,r28
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r20,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r28.u32, temp.u32);
	// lfsx f0,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r20,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r29.u32, temp.u32);
	// lfsx f0,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r20,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r30.u32, temp.u32);
	// lfsx f0,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r20,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r31.u32, temp.u32);
	// lfsx f0,r11,r25
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r20,r25
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r25.u32, temp.u32);
	// lfsx f0,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r20,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r4.u32, temp.u32);
	// lwzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// stwx r4,r20,r5
	PPC_STORE_U32(ctx.r20.u32 + ctx.r5.u32, ctx.r4.u32);
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// stwx r5,r20,r6
	PPC_STORE_U32(ctx.r20.u32 + ctx.r6.u32, ctx.r5.u32);
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stwx r6,r20,r7
	PPC_STORE_U32(ctx.r20.u32 + ctx.r7.u32, ctx.r6.u32);
	// lvx128 v0,r11,r17
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r20,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32 + ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r20,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfsx f0,r11,r23
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r20,r22
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r22.u32, temp.u32);
	// lfsx f0,r11,r14
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r20,r14
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r14.u32, temp.u32);
	// lvx128 v0,r11,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r20,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r8,r20,r9
	PPC_STORE_U32(ctx.r20.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r11,r20,r10
	PPC_STORE_U32(ctx.r20.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CE1A4"))) PPC_WEAK_FUNC(sub_825CE1A4);
PPC_FUNC_IMPL(__imp__sub_825CE1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CE1A8"))) PPC_WEAK_FUNC(sub_825CE1A8);
PPC_FUNC_IMPL(__imp__sub_825CE1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7644
	ctx.lr = 0x825CE1B0;
	__savegprlr_15(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x825ce1fc
	if (!ctx.cr6.gt) goto loc_825CE1FC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,689
	ctx.r10.s64 = ctx.r11.s64 + 689;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825ce1fc
	if (ctx.cr6.eq) goto loc_825CE1FC;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r17,r11,12
	ctx.r17.s64 = ctx.r11.s64 + 12;
	// b 0x825ce228
	goto loc_825CE228;
loc_825CE1FC:
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r9,532(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x825ce220
	if (ctx.cr6.eq) goto loc_825CE220;
	// addi r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 + 116;
	// b 0x825ce224
	goto loc_825CE224;
loc_825CE220:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_825CE224:
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
loc_825CE228:
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lvx128 v12,r7,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lvx128 v11,r7,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lvx128 v10,r7,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghw v9,v0,v12
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrglw v0,v0,v12
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// lvx128 v7,r6,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmrghw v8,v10,v11
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// lvx128 v12,r6,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrglw v11,v10,v11
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// lvx128 v10,r6,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r30,r1,192
	ctx.r30.s64 = ctx.r1.s64 + 192;
	// vmrghw v6,v9,v8
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// addi r29,r1,208
	ctx.r29.s64 = ctx.r1.s64 + 208;
	// vmrghw v5,v0,v11
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// addi r28,r1,224
	ctx.r28.s64 = ctx.r1.s64 + 224;
	// vmrglw v9,v9,v8
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrglw v0,v0,v11
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmsum4fp128 v11,v13,v6
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v8,v13,v5
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v4,v13,v9
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v13,v13,v0
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v31,v7,v0
	_mm_store_ps(ctx.v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v30,v7,v9
	_mm_store_ps(ctx.v30.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v29,v7,v5
	_mm_store_ps(ctx.v29.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v3,v12,v0
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v2,v12,v9
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v1,v12,v5
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v7,v7,v6
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v9,v10,v9
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v5,v10,v5
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v12,v12,v6
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v10,v10,v6
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmrghw v11,v11,v8
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw v13,v4,v13
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmrghw v13,v11,v13
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw v11,v30,v31
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), _mm_load_si128((__m128i*)ctx.v30.u32)));
	// vmrghw v8,v2,v3
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// vmrghw v7,v7,v29
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v0,v9,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v12,v12,v1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v10,v10,v5
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v11,v7,v11
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v12,v12,v8
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v0,v10,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v10,v13,v11
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrglw v13,v13,v11
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrghw v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrglw v0,v12,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v12,v10,v11
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrglw v11,v10,v11
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v10,v13,v0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrglw v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// stvx128 v12,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r31,0(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r8,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r8,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r8,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghw v10,v11,v12
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw v9,v13,v0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrglw v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrglw v13,v11,v12
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw v12,v9,v10
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrglw v11,v9,v10
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v10,v0,v13
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrglw v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// stvx128 v10,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stvx128 v0,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r29,r1,272
	ctx.r29.s64 = ctx.r1.s64 + 272;
	// lvx128 v12,r6,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addis r30,r19,1
	ctx.r30.s64 = ctx.r19.s64 + 65536;
	// lvx128 v11,r6,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r5,64
	ctx.r5.s64 = 64;
	// lvx128 v0,r6,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmrghw v9,v13,v0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrghw v10,v11,v12
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// addi r30,r30,-29440
	ctx.r30.s64 = ctx.r30.s64 + -29440;
	// vmrglw v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// vmrglw v13,v11,v12
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// vmrghw v12,v9,v10
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrglw v11,v9,v10
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v10,v0,v13
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrglw v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8254a8f0
	ctx.lr = 0x825CE3E0;
	sub_8254A8F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825ce40c
	if (ctx.cr0.eq) goto loc_825CE40C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75198
	ctx.lr = 0x825CE3F4;
	sub_82A75198(ctx, base);
	// li r7,12288
	ctx.r7.s64 = 12288;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,202
	ctx.r4.s64 = 202;
	// bl 0x826682f8
	ctx.lr = 0x825CE40C;
	sub_826682F8(ctx, base);
loc_825CE40C:
	// addis r6,r19,1
	ctx.r6.s64 = ctx.r19.s64 + 65536;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r6,r6,-29376
	ctx.r6.s64 = ctx.r6.s64 + -29376;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8254a8f0
	ctx.lr = 0x825CE424;
	sub_8254A8F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825ce450
	if (ctx.cr0.eq) goto loc_825CE450;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82a75198
	ctx.lr = 0x825CE438;
	sub_82A75198(ctx, base);
	// li r7,6144
	ctx.r7.s64 = 6144;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,206
	ctx.r4.s64 = 206;
	// bl 0x826682f8
	ctx.lr = 0x825CE450;
	sub_826682F8(ctx, base);
loc_825CE450:
	// addis r6,r19,1
	ctx.r6.s64 = ctx.r19.s64 + 65536;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r6,r6,-29312
	ctx.r6.s64 = ctx.r6.s64 + -29312;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8254a8f0
	ctx.lr = 0x825CE468;
	sub_8254A8F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825ce494
	if (ctx.cr0.eq) goto loc_825CE494;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82a75198
	ctx.lr = 0x825CE47C;
	sub_82A75198(ctx, base);
	// li r7,3072
	ctx.r7.s64 = 3072;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,210
	ctx.r4.s64 = 210;
	// bl 0x826682f8
	ctx.lr = 0x825CE494;
	sub_826682F8(ctx, base);
loc_825CE494:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825ce4ac
	if (ctx.cr6.eq) goto loc_825CE4AC;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// b 0x825ce4b4
	goto loc_825CE4B4;
loc_825CE4AC:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,31552
	ctx.r11.s64 = ctx.r11.s64 + 31552;
loc_825CE4B4:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r4,12(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CE4E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lfs f0,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x825ce4f4
	if (!ctx.cr6.lt) goto loc_825CE4F4;
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_825CE4F4:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CE508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r18,15
	ctx.r18.s64 = 15;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825ce540
	if (ctx.cr0.eq) goto loc_825CE540;
	// stw r18,12292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12292, ctx.r18.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,12816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12816);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,10460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10460);
	// rldicr r20,r8,37,63
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r8.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r10,r18
	ctx.r11.u64 = ctx.r10.u64 & ctx.r18.u64;
	// rlwimi r11,r9,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// stw r11,10460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10460, ctx.r11.u32);
	// b 0x825ce5cc
	goto loc_825CE5CC;
loc_825CE540:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// rldicr r20,r10,37,63
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// bne cr6,0x825ce5a8
	if (!ctx.cr6.eq) goto loc_825CE5A8;
	// stw r18,12292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12292, ctx.r18.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12816);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,10460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10460);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r11,r10,r18
	ctx.r11.u64 = ctx.r10.u64 & ctx.r18.u64;
	// rlwimi r11,r9,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// stw r11,10460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 | ctx.r20.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x82663b10
	ctx.lr = 0x825CE58C;
	sub_82663B10(ctx, base);
	// bl 0x82663ea0
	ctx.lr = 0x825CE590;
	sub_82663EA0(ctx, base);
	// bl 0x82663c30
	ctx.lr = 0x825CE594;
	sub_82663C30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82663cc0
	ctx.lr = 0x825CE59C;
	sub_82663CC0(ctx, base);
	// bl 0x82663dc0
	ctx.lr = 0x825CE5A0;
	sub_82663DC0(ctx, base);
	// bl 0x82663e30
	ctx.lr = 0x825CE5A4;
	sub_82663E30(ctx, base);
	// b 0x825ce5d8
	goto loc_825CE5D8;
loc_825CE5A8:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,12292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12292, ctx.r11.u32);
	// lwz r10,12816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12816);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,10460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10460);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwimi r9,r11,0,28,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r9,10460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10460, ctx.r9.u32);
loc_825CE5CC:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 | ctx.r20.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_825CE5D8:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x825ce5ec
	if (ctx.cr6.eq) goto loc_825CE5EC;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bne cr6,0x825ce608
	if (!ctx.cr6.eq) goto loc_825CE608;
loc_825CE5EC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82663b10
	ctx.lr = 0x825CE5F8;
	sub_82663B10(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82663c30
	ctx.lr = 0x825CE600;
	sub_82663C30(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82663cc0
	ctx.lr = 0x825CE608;
	sub_82663CC0(ctx, base);
loc_825CE608:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x825850f0
	ctx.lr = 0x825CE61C;
	sub_825850F0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,199
	ctx.r4.s64 = 199;
	// lfs f0,1788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1788);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// bl 0x825850f0
	ctx.lr = 0x825CE650;
	sub_825850F0(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,2584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2584);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x825ce79c
	if (!ctx.cr6.gt) goto loc_825CE79C;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r28,8032
	ctx.r28.s64 = 8032;
loc_825CE670:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r29,r9,r23
	ctx.r29.u64 = ctx.r9.u64 + ctx.r23.u64;
	// addi r25,r10,-416
	ctx.r25.s64 = ctx.r10.s64 + -416;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ce7e4
	if (ctx.cr6.eq) goto loc_825CE7E4;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825ce77c
	if (!ctx.cr6.gt) goto loc_825CE77C;
	// li r24,0
	ctx.r24.s64 = 0;
loc_825CE6A4:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// add r30,r24,r11
	ctx.r30.u64 = ctx.r24.u64 + ctx.r11.u64;
	// lwzx r11,r24,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r15.s32, ctx.xer);
	// bne cr6,0x825ce768
	if (!ctx.cr6.eq) goto loc_825CE768;
	// lwz r10,72(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 72);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// ble cr6,0x825ce6d8
	if (!ctx.cr6.gt) goto loc_825CE6D8;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,6388
	ctx.r8.s64 = ctx.r11.s64 + 6388;
	// b 0x825ce6dc
	goto loc_825CE6DC;
loc_825CE6D8:
	// addi r8,r11,6368
	ctx.r8.s64 = ctx.r11.s64 + 6368;
loc_825CE6DC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r7,48(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825ce7f0
	ctx.lr = 0x825CE6F4;
	sub_825CE7F0(ctx, base);
	// lwz r11,504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r7,496(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x82665f50
	ctx.lr = 0x825CE718;
	sub_82665F50(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82665f50
	ctx.lr = 0x825CE734;
	sub_82665F50(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826660f8
	ctx.lr = 0x825CE740;
	sub_826660F8(ctx, base);
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,484(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 484);
	// li r4,4
	ctx.r4.s64 = 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r7,r9,3
	ctx.r7.s64 = ctx.r9.s64 * 3;
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// bl 0x82674cb8
	ctx.lr = 0x825CE768;
	sub_82674CB8(ctx, base);
loc_825CE768:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r24,r24,512
	ctx.r24.s64 = ctx.r24.s64 + 512;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825ce6a4
	if (ctx.cr6.lt) goto loc_825CE6A4;
loc_825CE77C:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// addi r23,r23,52
	ctx.r23.s64 = ctx.r23.s64 + 52;
	// lwz r10,2584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2584);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825ce670
	if (ctx.cr6.lt) goto loc_825CE670;
loc_825CE79C:
	// stw r18,12292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12292, ctx.r18.u32);
	// lwz r10,12816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12816);
	// lwz r9,10460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10460);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r18
	ctx.r11.u64 = ctx.r10.u64 & ctx.r18.u64;
	// rlwimi r11,r9,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// stw r11,10460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 | ctx.r20.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x825ce7e4
	if (!ctx.cr6.eq) goto loc_825CE7E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82663b10
	ctx.lr = 0x825CE7E0;
	sub_82663B10(ctx, base);
	// bl 0x82663ea0
	ctx.lr = 0x825CE7E4;
	sub_82663EA0(ctx, base);
loc_825CE7E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CE7F0"))) PPC_WEAK_FUNC(sub_825CE7F0);
PPC_FUNC_IMPL(__imp__sub_825CE7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x825CE7F8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lwz r24,0(r6)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// addi r31,r6,12
	ctx.r31.s64 = ctx.r6.s64 + 12;
	// li r20,20
	ctx.r20.s64 = 20;
	// addi r22,r11,-6048
	ctx.r22.s64 = ctx.r11.s64 + -6048;
	// addi r19,r10,-6272
	ctx.r19.s64 = ctx.r10.s64 + -6272;
	// addi r21,r9,-6192
	ctx.r21.s64 = ctx.r9.s64 + -6192;
loc_825CE838:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825ce894
	if (ctx.cr6.eq) goto loc_825CE894;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825ce870
	if (ctx.cr6.eq) goto loc_825CE870;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825ce9c0
	if (!ctx.cr6.eq) goto loc_825CE9C0;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbzx r4,r11,r19
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// bl 0x825850f0
	ctx.lr = 0x825CE86C;
	sub_825850F0(ctx, base);
	// b 0x825ce9c0
	goto loc_825CE9C0;
loc_825CE870:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mulli r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 * 5;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbzx r4,r11,r21
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r21.u32);
	// bl 0x82585060
	ctx.lr = 0x825CE890;
	sub_82585060(ctx, base);
	// b 0x825ce9c0
	goto loc_825CE9C0;
loc_825CE894:
	// lhz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mulli r10,r7,44
	ctx.r10.s64 = ctx.r7.s64 * 44;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// beq cr6,0x825ce8f0
	if (ctx.cr6.eq) goto loc_825CE8F0;
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// beq cr6,0x825ce8e8
	if (ctx.cr6.eq) goto loc_825CE8E8;
	// cmpwi cr6,r6,9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 9, ctx.xer);
	// beq cr6,0x825ce8e0
	if (ctx.cr6.eq) goto loc_825CE8E0;
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// beq cr6,0x825ce8d8
	if (ctx.cr6.eq) goto loc_825CE8D8;
	// cmpwi cr6,r6,12
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 12, ctx.xer);
	// bne cr6,0x825ce8f4
	if (!ctx.cr6.eq) goto loc_825CE8F4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x825ce8f4
	goto loc_825CE8F4;
loc_825CE8D8:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// b 0x825ce8f4
	goto loc_825CE8F4;
loc_825CE8E0:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// b 0x825ce8f4
	goto loc_825CE8F4;
loc_825CE8E8:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// b 0x825ce8f4
	goto loc_825CE8F4;
loc_825CE8F0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_825CE8F4:
	// lwz r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mulli r8,r27,18
	ctx.r8.s64 = ctx.r27.s64 * 18;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// subfc r5,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r5.s64 = ctx.r11.s64 - ctx.r5.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subfe r7,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r5,r11,8448
	ctx.r5.s64 = ctx.r11.s64 + 8448;
	// bne cr6,0x825ce93c
	if (!ctx.cr6.eq) goto loc_825CE93C;
	// mulli r11,r6,5
	ctx.r11.s64 = ctx.r6.s64 * 5;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbzx r10,r11,r22
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
loc_825CE93C:
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// rldicr r11,r11,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srd r18,r11,r10
	ctx.r18.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826631f0
	ctx.lr = 0x825CE964;
	sub_826631F0(ctx, base);
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwimi r9,r10,10,20,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// rlwinm r10,r9,0,22,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// rlwinm r10,r10,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
	// ld r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// or r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 | ctx.r18.u64;
	// std r10,24(r29)
	PPC_STORE_U64(ctx.r29.u32 + 24, ctx.r10.u64);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// rlwimi r10,r9,13,17,17
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 13) & 0x4000) | (ctx.r10.u64 & 0xFFFFFFFFFFFFBFFF);
	// rlwinm r10,r10,0,19,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
	// ld r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// or r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 | ctx.r18.u64;
	// std r11,24(r29)
	PPC_STORE_U64(ctx.r29.u32 + 24, ctx.r11.u64);
loc_825CE9C0:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bne 0x825ce838
	if (!ctx.cr0.eq) goto loc_825CE838;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CE9D4"))) PPC_WEAK_FUNC(sub_825CE9D4);
PPC_FUNC_IMPL(__imp__sub_825CE9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CE9D8"))) PPC_WEAK_FUNC(sub_825CE9D8);
PPC_FUNC_IMPL(__imp__sub_825CE9D8) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,43684
	ctx.r11.u64 = ctx.r11.u64 | 43684;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825cea1c
	if (!ctx.cr6.eq) goto loc_825CEA1C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,-21088
	ctx.r11.s64 = ctx.r11.s64 + -21088;
	// addi r7,r11,304
	ctx.r7.s64 = ctx.r11.s64 + 304;
	// addi r6,r11,272
	ctx.r6.s64 = ctx.r11.s64 + 272;
	// addi r5,r11,240
	ctx.r5.s64 = ctx.r11.s64 + 240;
	// addi r4,r11,208
	ctx.r4.s64 = ctx.r11.s64 + 208;
	// b 0x825cea3c
	goto loc_825CEA3C;
loc_825CEA1C:
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// addi r7,r7,-21664
	ctx.r7.s64 = ctx.r7.s64 + -21664;
	// addi r6,r6,-21696
	ctx.r6.s64 = ctx.r6.s64 + -21696;
	// addi r5,r5,-21728
	ctx.r5.s64 = ctx.r5.s64 + -21728;
	// addi r4,r4,-21760
	ctx.r4.s64 = ctx.r4.s64 + -21760;
loc_825CEA3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825eb0a8
	ctx.lr = 0x825CEA44;
	sub_825EB0A8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,-2340
	ctx.r11.s64 = ctx.r11.s64 + -2340;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// addi r9,r9,9312
	ctx.r9.s64 = ctx.r9.s64 + 9312;
	// li r8,1584
	ctx.r8.s64 = 1584;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r4,198
	ctx.r4.s64 = 198;
	// lvlx v11,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vrlimi128 v12,v11,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v12,v13,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x825850f0
	ctx.lr = 0x825CEA98;
	sub_825850F0(ctx, base);
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

__attribute__((alias("__imp__sub_825CEAAC"))) PPC_WEAK_FUNC(sub_825CEAAC);
PPC_FUNC_IMPL(__imp__sub_825CEAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CEAB0"))) PPC_WEAK_FUNC(sub_825CEAB0);
PPC_FUNC_IMPL(__imp__sub_825CEAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x825CEAB8;
	__savegprlr_18(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addis r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 65536;
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r7,r7,-22400
	ctx.r7.s64 = ctx.r7.s64 + -22400;
	// lvx128 v12,r5,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lvx128 v11,r5,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lwz r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// vupkd3d128 v13,v13,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v13 = vTemp;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lvx128 v10,r7,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lvx128 v7,r7,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lvx128 v9,r0,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r27,r1,240
	ctx.r27.s64 = ctx.r1.s64 + 240;
	// lvx128 v8,r7,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lwz r7,10568(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10568);
	// vmrghw v6,v9,v10
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// lfs f13,-24756(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -24756);
	ctx.f13.f64 = double(temp.f32);
	// vmrghw v5,v7,v8
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// lfs f0,-2340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// vmrglw v10,v9,v10
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// lvx128 v9,r5,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrglw v8,v7,v8
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// lwz r11,12280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12280);
	// lwz r9,1152(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1152);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// vmrghw v7,v6,v5
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// lwz r5,12284(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12284);
	// vmrglw v6,v6,v5
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// lwz r4,10548(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// vmrghw v4,v10,v8
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// addi r29,r1,304
	ctx.r29.s64 = ctx.r1.s64 + 304;
	// vmrglw v10,v10,v8
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// lwz r28,12308(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12308);
	// vmsum4fp128 v8,v0,v7
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// addi r26,r1,320
	ctx.r26.s64 = ctx.r1.s64 + 320;
	// vmsum4fp128 v3,v0,v6
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// rlwinm r25,r9,22,29,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x7;
	// vmsum4fp128 v5,v0,v4
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v4.f32), 0xFF));
	// rlwinm r24,r9,19,29,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7;
	// vmsum4fp128 v0,v0,v10
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// clrlwi r23,r7,29
	ctx.r23.u64 = ctx.r7.u32 & 0x7;
	// vmsum4fp128 v2,v12,v10
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// rlwinm r22,r5,1,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// vmsum4fp128 v1,v12,v6
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// rlwinm r21,r11,24,27,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// vmsum4fp128 v30,v9,v10
	_mm_store_ps(ctx.v30.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// rlwinm r20,r11,27,29,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7;
	// vmsum4fp128 v31,v12,v4
	_mm_store_ps(ctx.v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v4.f32), 0xFF));
	// clrlwi r19,r11,27
	ctx.r19.u64 = ctx.r11.u32 & 0x1F;
	// vmsum4fp128 v29,v9,v6
	_mm_store_ps(ctx.v29.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// rlwinm r18,r4,30,31,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x1;
	// vmsum4fp128 v28,v9,v4
	_mm_store_ps(ctx.v28.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v4.f32), 0xFF));
	// vmsum4fp128 v12,v12,v7
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v9,v9,v7
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v10,v11,v10
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v6,v11,v6
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v4,v11,v4
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v4.f32), 0xFF));
	// vmsum4fp128 v11,v11,v7
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmrghw v8,v8,v5
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrghw v0,v3,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vmrghw v7,v1,v2
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), _mm_load_si128((__m128i*)ctx.v1.u32)));
	// vmrghw v0,v8,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrghw v8,v29,v30
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), _mm_load_si128((__m128i*)ctx.v29.u32)));
	// vmrghw v12,v12,v31
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v9,v9,v28
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v28.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v10,v6,v10
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v12,v12,v7
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v0,v11,v4
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// stfs f13,224(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// vmrghw v11,v9,v8
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v0,v0,v10
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vpermwi128 v12,v13,234
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x15));
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// vpermwi128 v10,v13,186
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x45));
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// vpermwi128 v9,v13,174
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x51));
	// addis r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 65536;
	// vpermwi128 v13,v13,171
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x54));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r4,-22272
	ctx.r4.s64 = ctx.r4.s64 + -22272;
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f13,264(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stvx128 v11,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa77c0
	ctx.lr = 0x825CEC58;
	sub_82FA77C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82fa77c0
	ctx.lr = 0x825CEC68;
	sub_82FA77C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82fa77c0
	ctx.lr = 0x825CEC78;
	sub_82FA77C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// ld r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// ld r6,232(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// ld r7,240(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// ld r8,248(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// ld r9,256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// ld r10,264(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// bl 0x82ae1c80
	ctx.lr = 0x825CEC9C;
	sub_82AE1C80(ctx, base);
	// lwz r11,1152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1152);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// rlwimi r11,r25,10,19,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 10) & 0x1C00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r11,1152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1152, ctx.r11.u32);
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r11.u64);
	// lwz r11,1152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1152);
	// rlwimi r11,r24,13,16,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 13) & 0xE000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r11,1152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1152, ctx.r11.u32);
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r11.u64);
	// bl 0x82663c30
	ctx.lr = 0x825CECD8;
	sub_82663C30(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82663cc0
	ctx.lr = 0x825CECE0;
	sub_82663CC0(ctx, base);
	// lwz r11,10568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10568);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// rlwimi r23,r11,0,0,28
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF8) | (ctx.r23.u64 & 0xFFFFFFFF00000007);
	// stw r23,10568(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10568, ctx.r23.u32);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
	// bl 0x82663b10
	ctx.lr = 0x825CED00;
	sub_82663B10(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82663cc0
	ctx.lr = 0x825CED08;
	sub_82663CC0(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82663ba0
	ctx.lr = 0x825CED10;
	sub_82663BA0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82663c30
	ctx.lr = 0x825CED18;
	sub_82663C30(ctx, base);
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// rlwimi r11,r18,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r18.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
	// stw r28,12308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12308, ctx.r28.u32);
	// lwz r10,12832(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12832);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 & ctx.r28.u64;
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,10548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CED68"))) PPC_WEAK_FUNC(sub_825CED68);
PPC_FUNC_IMPL(__imp__sub_825CED68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lfs f1,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CED74"))) PPC_WEAK_FUNC(sub_825CED74);
PPC_FUNC_IMPL(__imp__sub_825CED74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CED78"))) PPC_WEAK_FUNC(sub_825CED78);
PPC_FUNC_IMPL(__imp__sub_825CED78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r11,r11,-2340
	ctx.r11.s64 = ctx.r11.s64 + -2340;
	// addi r10,r10,-24756
	ctx.r10.s64 = ctx.r10.s64 + -24756;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vrlimi128 v13,v12,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v0,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v13,v11,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CEDAC"))) PPC_WEAK_FUNC(sub_825CEDAC);
PPC_FUNC_IMPL(__imp__sub_825CEDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CEDB0"))) PPC_WEAK_FUNC(sub_825CEDB0);
PPC_FUNC_IMPL(__imp__sub_825CEDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f1,31396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31396);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CEDBC"))) PPC_WEAK_FUNC(sub_825CEDBC);
PPC_FUNC_IMPL(__imp__sub_825CEDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CEDC0"))) PPC_WEAK_FUNC(sub_825CEDC0);
PPC_FUNC_IMPL(__imp__sub_825CEDC0) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v77,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CEDC8"))) PPC_WEAK_FUNC(sub_825CEDC8);
PPC_FUNC_IMPL(__imp__sub_825CEDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,-2340
	ctx.r11.s64 = ctx.r11.s64 + -2340;
	// addi r10,r10,8072
	ctx.r10.s64 = ctx.r10.s64 + 8072;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vor v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CEDF4"))) PPC_WEAK_FUNC(sub_825CEDF4);
PPC_FUNC_IMPL(__imp__sub_825CEDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CEDF8"))) PPC_WEAK_FUNC(sub_825CEDF8);
PPC_FUNC_IMPL(__imp__sub_825CEDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,-24756
	ctx.r11.s64 = ctx.r11.s64 + -24756;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r10,31396
	ctx.r10.s64 = ctx.r10.s64 + 31396;
	// addi r9,r9,-2340
	ctx.r9.s64 = ctx.r9.s64 + -2340;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v11,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v13,v12,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v13,v0,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 3));
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CEE34"))) PPC_WEAK_FUNC(sub_825CEE34);
PPC_FUNC_IMPL(__imp__sub_825CEE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CEE38"))) PPC_WEAK_FUNC(sub_825CEE38);
PPC_FUNC_IMPL(__imp__sub_825CEE38) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,2480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cee60
	if (ctx.cr6.eq) goto loc_825CEE60;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,23196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23196);
	// b 0x825cee68
	goto loc_825CEE68;
loc_825CEE60:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,23200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23200);
loc_825CEE68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cee84
	if (ctx.cr6.eq) goto loc_825CEE84;
	// lwz r3,424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CEE84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825CEE84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CEE94"))) PPC_WEAK_FUNC(sub_825CEE94);
PPC_FUNC_IMPL(__imp__sub_825CEE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CEE98"))) PPC_WEAK_FUNC(sub_825CEE98);
PPC_FUNC_IMPL(__imp__sub_825CEE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825CEEA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x825cf278
	ctx.lr = 0x825CEEB4;
	sub_825CF278(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r30,r11,152
	ctx.xer.ca = ctx.r11.u32 > 4294967143;
	ctx.r30.s64 = ctx.r11.s64 + 152;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x825cef08
	if (ctx.cr0.eq) goto loc_825CEF08;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825cef08
	if (!ctx.cr6.gt) goto loc_825CEF08;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_825CEED4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825ceefc
	if (!ctx.cr6.eq) goto loc_825CEEFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,284
	ctx.r3.s64 = ctx.r11.s64 + 284;
	// bl 0x825cee98
	ctx.lr = 0x825CEEFC;
	sub_825CEE98(ctx, base);
loc_825CEEFC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,416
	ctx.r31.s64 = ctx.r31.s64 + 416;
	// bne 0x825ceed4
	if (!ctx.cr0.eq) goto loc_825CEED4;
loc_825CEF08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CEF10"))) PPC_WEAK_FUNC(sub_825CEF10);
PPC_FUNC_IMPL(__imp__sub_825CEF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825CEF18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cef68
	if (ctx.cr6.eq) goto loc_825CEF68;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// ble cr6,0x825cef64
	if (!ctx.cr6.gt) goto loc_825CEF64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_825CEF40:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,424(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 424);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x825bcc18
	ctx.lr = 0x825CEF50;
	sub_825BCC18(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825cef40
	if (ctx.cr6.lt) goto loc_825CEF40;
loc_825CEF64:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_825CEF68:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825cef7c
	if (ctx.cr6.eq) goto loc_825CEF7C;
	// bl 0x82547d80
	ctx.lr = 0x825CEF78;
	sub_82547D80(ctx, base);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_825CEF7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r29,r11,152
	ctx.xer.ca = ctx.r11.u32 > 4294967143;
	ctx.r29.s64 = ctx.r11.s64 + 152;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825cefcc
	if (ctx.cr0.eq) goto loc_825CEFCC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825cefcc
	if (!ctx.cr6.gt) goto loc_825CEFCC;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_825CEF9C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825cefc0
	if (!ctx.cr6.eq) goto loc_825CEFC0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,284
	ctx.r3.s64 = ctx.r11.s64 + 284;
	// bl 0x825cef10
	ctx.lr = 0x825CEFC0;
	sub_825CEF10(ctx, base);
loc_825CEFC0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,416
	ctx.r31.s64 = ctx.r31.s64 + 416;
	// bne 0x825cef9c
	if (!ctx.cr0.eq) goto loc_825CEF9C;
loc_825CEFCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CEFD4"))) PPC_WEAK_FUNC(sub_825CEFD4);
PPC_FUNC_IMPL(__imp__sub_825CEFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CEFD8"))) PPC_WEAK_FUNC(sub_825CEFD8);
PPC_FUNC_IMPL(__imp__sub_825CEFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x825CEFE0;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82fac134
	ctx.lr = 0x825CEFE8;
	__savevmx_120(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,432(r1)
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.r5.u64);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// std r7,448(r1)
	PPC_STORE_U64(ctx.r1.u32 + 448, ctx.r7.u64);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// std r6,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.r6.u64);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// std r8,456(r1)
	PPC_STORE_U64(ctx.r1.u32 + 456, ctx.r8.u64);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// std r9,464(r1)
	PPC_STORE_U64(ctx.r1.u32 + 464, ctx.r9.u64);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// std r10,472(r1)
	PPC_STORE_U64(ctx.r1.u32 + 472, ctx.r10.u64);
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825cf08c
	if (!ctx.cr6.gt) goto loc_825CF08C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_825CF038:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x825CF050;
	sub_82FA77C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825bccb0
	ctx.lr = 0x825CF078;
	sub_825BCCB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825cf038
	if (ctx.cr6.lt) goto loc_825CF038;
loc_825CF08C:
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cf264
	if (ctx.cr6.eq) goto loc_825CF264;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r23,r11,152
	ctx.xer.ca = ctx.r11.u32 > 4294967143;
	ctx.r23.s64 = ctx.r11.s64 + 152;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x825cf264
	if (ctx.cr0.eq) goto loc_825CF264;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825cf264
	if (!ctx.cr6.gt) goto loc_825CF264;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// addi r11,r1,480
	ctx.r11.s64 = ctx.r1.s64 + 480;
	// addi r10,r1,464
	ctx.r10.s64 = ctx.r1.s64 + 464;
	// addi r9,r1,448
	ctx.r9.s64 = ctx.r1.s64 + 448;
	// addi r8,r1,432
	ctx.r8.s64 = ctx.r1.s64 + 432;
	// li r25,0
	ctx.r25.s64 = 0;
	// lvx128 v123,r0,r11
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v122,r0,r10
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v121,r0,r9
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v120,r0,r8
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
loc_825CF0D8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// add r28,r11,r25
	ctx.r28.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825cf258
	if (!ctx.cr6.eq) goto loc_825CF258;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x825cf258
	if (ctx.cr6.eq) goto loc_825CF258;
	// addi r29,r27,284
	ctx.r29.s64 = ctx.r27.s64 + 284;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825cf258
	if (!ctx.cr6.gt) goto loc_825CF258;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_825CF120:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825cf250
	if (!ctx.cr6.gt) goto loc_825CF250;
	// vmrghw128 v0,v120,v122
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v122.u32), _mm_load_si128((__m128i*)ctx.v120.u32)));
	// li r31,0
	ctx.r31.s64 = 0;
	// vmrghw128 v13,v121,v123
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v123.u32), _mm_load_si128((__m128i*)ctx.v121.u32)));
	// vmrglw128 v12,v120,v122
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v122.u32), _mm_load_si128((__m128i*)ctx.v120.u32)));
	// vmrglw128 v11,v121,v123
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v123.u32), _mm_load_si128((__m128i*)ctx.v121.u32)));
	// vmrghw128 v127,v0,v13
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrglw128 v126,v0,v13
	_mm_store_si128((__m128i*)ctx.v126.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrghw128 v125,v12,v11
	_mm_store_si128((__m128i*)ctx.v125.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrglw128 v124,v12,v11
	_mm_store_si128((__m128i*)ctx.v124.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
loc_825CF150:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// vmsum4fp128 v11,v0,v126
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v126.f32), 0xFF));
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v13,v0,v124
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v124.f32), 0xFF));
	// lvx128 v10,r11,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v9,v0,v125
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v125.f32), 0xFF));
	// lvx128 v8,r11,r8
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v0,v0,v127
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v127.f32), 0xFF));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vmsum4fp128 v7,v12,v124
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v124.f32), 0xFF));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vmsum4fp128 v6,v12,v126
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v126.f32), 0xFF));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// vmsum4fp128 v5,v12,v125
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v125.f32), 0xFF));
	// li r5,16
	ctx.r5.s64 = 16;
	// vmsum4fp128 v12,v12,v127
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v127.f32), 0xFF));
	// vmsum4fp128 v4,v10,v124
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v124.f32), 0xFF));
	// vmsum4fp128 v3,v10,v126
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v126.f32), 0xFF));
	// vmsum4fp128 v2,v10,v125
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v125.f32), 0xFF));
	// vmsum4fp128 v1,v8,v124
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v124.f32), 0xFF));
	// vmsum4fp128 v31,v8,v126
	_mm_store_ps(ctx.v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v126.f32), 0xFF));
	// vmsum4fp128 v30,v8,v125
	_mm_store_ps(ctx.v30.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v125.f32), 0xFF));
	// vmsum4fp128 v10,v10,v127
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v127.f32), 0xFF));
	// vmsum4fp128 v8,v8,v127
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v127.f32), 0xFF));
	// vmrghw v13,v11,v13
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw v0,v0,v9
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrghw v11,v6,v7
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmrghw v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrghw v13,v12,v5
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v12,v3,v4
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vmrghw v13,v13,v11
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrghw v11,v31,v1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v31.u32)));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v10,v10,v2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v0,v8,v30
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrghw v12,v10,v12
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v0,v0,v11
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa77c0
	ctx.lr = 0x825CF214;
	sub_82FA77C0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// ld r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// bl 0x825bccb0
	ctx.lr = 0x825CF23C;
	sub_825BCCB0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825cf150
	if (ctx.cr6.lt) goto loc_825CF150;
loc_825CF250:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x825cf120
	if (!ctx.cr0.eq) goto loc_825CF120;
loc_825CF258:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,416
	ctx.r25.s64 = ctx.r25.s64 + 416;
	// bne 0x825cf0d8
	if (!ctx.cr0.eq) goto loc_825CF0D8;
loc_825CF264:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82fac3cc
	ctx.lr = 0x825CF270;
	__restvmx_120(ctx, base);
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CF274"))) PPC_WEAK_FUNC(sub_825CF274);
PPC_FUNC_IMPL(__imp__sub_825CF274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CF278"))) PPC_WEAK_FUNC(sub_825CF278);
PPC_FUNC_IMPL(__imp__sub_825CF278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x825CF280;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// li r12,-144
	ctx.r12.s64 = -144;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CF2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825cf55c
	if (ctx.cr0.eq) goto loc_825CF55C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,424(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// beq cr6,0x825cf568
	if (ctx.cr6.eq) goto loc_825CF568;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82547c40
	ctx.lr = 0x825CF2D8;
	sub_82547C40(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r3,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r3.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r21,r28
	ctx.r21.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825cf568
	if (!ctx.cr6.gt) goto loc_825CF568;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// li r24,12
	ctx.r24.s64 = 12;
	// li r27,1
	ctx.r27.s64 = 1;
	// lfs f30,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f30.f64 = double(temp.f32);
	// lis r25,-31958
	ctx.r25.s64 = -2094399488;
	// lfs f31,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
loc_825CF310:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// vor128 v12,v67,v67
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// vor128 v0,v77,v77
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lvrx v13,r24,r10
	temp.u32 = ctx.r24.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi v13,v13,v13,4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v13.u8), 12));
	// vor v13,v11,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsel v1,v13,v0,v12
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// beq cr6,0x825cf348
	if (ctx.cr6.eq) goto loc_825CF348;
	// lvx128 v2,r0,r20
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// b 0x825cf374
	goto loc_825CF374;
loc_825CF348:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,36
	ctx.r8.s64 = 36;
	// li r7,32
	ctx.r7.s64 = 32;
	// lvlx v0,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v2,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v2,v0,4,3
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v0,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v2,v13,3,2
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
loc_825CF374:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,88(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lfs f2,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825bcaa8
	ctx.lr = 0x825CF388;
	sub_825BCAA8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x825cf538
	if (ctx.cr6.eq) goto loc_825CF538;
	// addi r10,r3,4424
	ctx.r10.s64 = ctx.r3.s64 + 4424;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mulli r11,r10,208
	ctx.r11.s64 = ctx.r10.s64 * 208;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,1212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1212, ctx.r9.u32);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 * 208;
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lfs f1,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x825cf44c
	if (!ctx.cr6.gt) goto loc_825CF44C;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// vor128 v12,v67,v67
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// vor128 v0,v77,v77
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// lvrx v13,r24,r11
	temp.u32 = ctx.r24.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v11,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi v13,v13,v13,4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v13.u8), 12));
	// vor v13,v11,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsel v12,v13,v0,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vor128 v127,v12,v12
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// bl 0x8283c088
	ctx.lr = 0x825CF404;
	sub_8283C088(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// li r10,1088
	ctx.r10.s64 = 1088;
	// li r9,1120
	ctx.r9.s64 = 1120;
	// mulli r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 * 208;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f1,1208(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1208, temp.u32);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mulli r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 * 208;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stvx128 v127,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mulli r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 * 208;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stvx128 v127,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 * 208;
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
loc_825CF44C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x825cf528
	if (ctx.cr6.eq) goto loc_825CF528;
	// lis r9,25
	ctx.r9.s64 = 1638400;
	// lwz r10,21292(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 21292);
	// li r5,76
	ctx.r5.s64 = 76;
	// ori r9,r9,26125
	ctx.r9.u64 = ctx.r9.u64 | 26125;
	// li r3,72
	ctx.r3.s64 = 72;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addis r10,r10,15471
	ctx.r10.s64 = ctx.r10.s64 + 1013907456;
	// li r7,84
	ctx.r7.s64 = 84;
	// addi r10,r10,-3233
	ctx.r10.s64 = ctx.r10.s64 + -3233;
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r10,21292(r25)
	PPC_STORE_U32(ctx.r25.u32 + 21292, ctx.r10.u32);
	// clrlwi r4,r10,9
	ctx.r4.u64 = ctx.r10.u32 & 0x7FFFFF;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r19,1152
	ctx.r19.s64 = 1152;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mulli r10,r10,208
	ctx.r10.s64 = ctx.r10.s64 * 208;
	// add r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 + ctx.r9.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// oris r4,r4,16256
	ctx.r4.u64 = ctx.r4.u64 | 1065353216;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,68(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stw r8,1216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1216, ctx.r8.u32);
	// lvlx v12,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lvlx v0,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fsubs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// lvlx v13,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v12,v11,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// mulli r11,r10,208
	ctx.r11.s64 = ctx.r10.s64 * 208;
	// vrlimi128 v12,v13,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stvx128 v12,r11,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bgt cr6,0x825cf4f8
	if (ctx.cr6.gt) goto loc_825CF4F8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_825CF4F8:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mulli r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 * 208;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,1220(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1220, temp.u32);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mulli r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 * 208;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f13,1244(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1244, temp.u32);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 * 208;
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
loc_825CF528:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// stwx r26,r22,r11
	PPC_STORE_U32(ctx.r22.u32 + ctx.r11.u32, ctx.r26.u32);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// b 0x825cf544
	goto loc_825CF544;
loc_825CF538:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
loc_825CF544:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r28,r28,92
	ctx.r28.s64 = ctx.r28.s64 + 92;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825cf310
	if (ctx.cr6.lt) goto loc_825CF310;
	// b 0x825cf568
	goto loc_825CF568;
loc_825CF55C:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r28.u32);
	// stw r28,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r28.u32);
loc_825CF568:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// li r0,-144
	ctx.r0.s64 = -144;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CF580"))) PPC_WEAK_FUNC(sub_825CF580);
PPC_FUNC_IMPL(__imp__sub_825CF580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825CF588;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,-13048
	ctx.r11.s64 = ctx.r11.s64 + -13048;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f30,2088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2088);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x82a75988
	ctx.lr = 0x825CF5C4;
	sub_82A75988(ctx, base);
	// lis r11,4078
	ctx.r11.s64 = 267255808;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// ori r11,r11,45536
	ctx.r11.u64 = ctx.r11.u64 | 45536;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,0
	ctx.r5.s64 = 0;
	// stvx128 v72,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v72.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r9,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r9.u8);
	// addi r3,r11,-13088
	ctx.r3.s64 = ctx.r11.s64 + -13088;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x82547f38
	ctx.lr = 0x825CF5F4;
	sub_82547F38(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-13068
	ctx.r3.s64 = ctx.r11.s64 + -13068;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82547f38
	ctx.lr = 0x825CF608;
	sub_82547F38(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r28,r27,12
	ctx.r28.s64 = ctx.r27.s64 + 12;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,8072(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8072);
	ctx.f31.f64 = double(temp.f32);
loc_825CF61C:
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82560dc0
	ctx.lr = 0x825CF648;
	sub_82560DC0(ctx, base);
	// stw r3,-4(r28)
	PPC_STORE_U32(ctx.r28.u32 + -4, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82560dc0
	ctx.lr = 0x825CF678;
	sub_82560DC0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// bne 0x825cf61c
	if (!ctx.cr0.eq) goto loc_825CF61C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CF698"))) PPC_WEAK_FUNC(sub_825CF698);
PPC_FUNC_IMPL(__imp__sub_825CF698) {
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
	// bl 0x825cf6e8
	ctx.lr = 0x825CF6B8;
	sub_825CF6E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825cf6c8
	if (ctx.cr0.eq) goto loc_825CF6C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825CF6C8;
	sub_82691540(ctx, base);
loc_825CF6C8:
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

__attribute__((alias("__imp__sub_825CF6E4"))) PPC_WEAK_FUNC(sub_825CF6E4);
PPC_FUNC_IMPL(__imp__sub_825CF6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CF6E8"))) PPC_WEAK_FUNC(sub_825CF6E8);
PPC_FUNC_IMPL(__imp__sub_825CF6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825CF6F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-13048
	ctx.r11.s64 = ctx.r11.s64 + -13048;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
loc_825CF710:
	// lwz r4,-8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825cf728
	if (ctx.cr6.eq) goto loc_825CF728;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82560c08
	ctx.lr = 0x825CF724;
	sub_82560C08(ctx, base);
	// stw r29,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r29.u32);
loc_825CF728:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825cf740
	if (ctx.cr6.eq) goto loc_825CF740;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82560c08
	ctx.lr = 0x825CF73C;
	sub_82560C08(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825CF740:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x825cf710
	if (!ctx.cr0.eq) goto loc_825CF710;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-25696
	ctx.r11.s64 = ctx.r11.s64 + -25696;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CF760"))) PPC_WEAK_FUNC(sub_825CF760);
PPC_FUNC_IMPL(__imp__sub_825CF760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x825CF768;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x8257eac8
	ctx.lr = 0x825CF780;
	sub_8257EAC8(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r11,r11,26816
	ctx.r11.s64 = ctx.r11.s64 + 26816;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r28,r11,64
	ctx.r28.s64 = ctx.r11.s64 + 64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lfs f31,7088(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7088);
	ctx.f31.f64 = double(temp.f32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r30,160
	ctx.r30.s64 = 160;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r29,r11,-2340
	ctx.r29.s64 = ctx.r11.s64 + -2340;
	// addi r24,r10,27568
	ctx.r24.s64 = ctx.r10.s64 + 27568;
loc_825CF7C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r26,r21
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x825cf904
	if (!ctx.cr6.lt) goto loc_825CF904;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cf920
	if (ctx.cr6.eq) goto loc_825CF920;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cf920
	if (ctx.cr6.eq) goto loc_825CF920;
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x825cf7f4
	if (!ctx.cr6.eq) goto loc_825CF7F4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_825CF7F4:
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f12,f8,f9,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmadds f13,f7,f13,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f6,f9,f10
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fnmadds f12,f5,f0,f12
	ctx.f12.f64 = double(float(-(ctx.f5.f64 * ctx.f0.f64 + ctx.f12.f64)));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fnmadds f13,f4,f9,f13
	ctx.f13.f64 = double(float(-(ctx.f4.f64 * ctx.f9.f64 + ctx.f13.f64)));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fnmadds f0,f3,f0,f11
	ctx.f0.f64 = double(float(-(ctx.f3.f64 * ctx.f0.f64 + ctx.f11.f64)));
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvlx v0,0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v13,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v11,r7,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,2244(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r11,160
	ctx.r4.s64 = ctx.r11.s64 + 160;
	// beq cr6,0x825cf8f4
	if (ctx.cr6.eq) goto loc_825CF8F4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x825b4610
	ctx.lr = 0x825CF8A4;
	sub_825B4610(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825cf8f4
	if (ctx.cr0.eq) goto loc_825CF8F4;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x825cf8d0
	if (!ctx.cr6.lt) goto loc_825CF8D0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stfs f0,164(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
loc_825CF8D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lvx128 v0,r11,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r10,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r23,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r23.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r23,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r23.u32);
	// b 0x825cf920
	goto loc_825CF920;
loc_825CF8F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r22,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r22.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x825cf91c
	goto loc_825CF91C;
loc_825CF904:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cf910
	if (ctx.cr6.eq) goto loc_825CF910;
	// stw r22,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r22.u32);
loc_825CF910:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cf920
	if (ctx.cr6.eq) goto loc_825CF920;
loc_825CF91C:
	// stw r22,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r22.u32);
loc_825CF920:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r28,r28,176
	ctx.r28.s64 = ctx.r28.s64 + 176;
	// bne 0x825cf7c0
	if (!ctx.cr0.eq) goto loc_825CF7C0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CF940"))) PPC_WEAK_FUNC(sub_825CF940);
PPC_FUNC_IMPL(__imp__sub_825CF940) {
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
	// bl 0x825cf990
	ctx.lr = 0x825CF960;
	sub_825CF990(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825cf970
	if (ctx.cr0.eq) goto loc_825CF970;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825CF970;
	sub_82691540(ctx, base);
loc_825CF970:
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

__attribute__((alias("__imp__sub_825CF98C"))) PPC_WEAK_FUNC(sub_825CF98C);
PPC_FUNC_IMPL(__imp__sub_825CF98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CF990"))) PPC_WEAK_FUNC(sub_825CF990);
PPC_FUNC_IMPL(__imp__sub_825CF990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825CF998;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r10,-13008
	ctx.r10.s64 = ctx.r10.s64 + -13008;
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x825cf9c4
	if (ctx.cr0.eq) goto loc_825CF9C4;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
loc_825CF9C4:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x825cf9fc
	goto loc_825CF9FC;
loc_825CF9CC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825cf9f0
	if (ctx.cr6.eq) goto loc_825CF9F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825CF9EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825CF9F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82547d80
	ctx.lr = 0x825CF9FC;
	sub_82547D80(ctx, base);
loc_825CF9FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825cf9cc
	if (!ctx.cr6.eq) goto loc_825CF9CC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r11,r11,-25696
	ctx.r11.s64 = ctx.r11.s64 + -25696;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CFA1C"))) PPC_WEAK_FUNC(sub_825CFA1C);
PPC_FUNC_IMPL(__imp__sub_825CFA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CFA20"))) PPC_WEAK_FUNC(sub_825CFA20);
PPC_FUNC_IMPL(__imp__sub_825CFA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825CFA28;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r11,r5,3
	ctx.r11.s64 = ctx.r5.s64 + 3;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825cfa88
	if (!ctx.cr6.eq) goto loc_825CFA88;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cfad0
	if (ctx.cr6.eq) goto loc_825CFAD0;
	// addi r3,r11,2960
	ctx.r3.s64 = ctx.r11.s64 + 2960;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x825cfe18
	ctx.lr = 0x825CFA78;
	sub_825CFE18(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
loc_825CFA88:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82547c40
	ctx.lr = 0x825CFA90;
	sub_82547C40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82691500
	ctx.lr = 0x825CFA9C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825cfad8
	if (ctx.cr0.eq) goto loc_825CFAD8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8262cf70
	ctx.lr = 0x825CFACC;
	sub_8262CF70(ctx, base);
	// b 0x825cfadc
	goto loc_825CFADC;
loc_825CFAD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825cfaf0
	goto loc_825CFAF0;
loc_825CFAD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825CFADC:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_825CFAF0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CFAFC"))) PPC_WEAK_FUNC(sub_825CFAFC);
PPC_FUNC_IMPL(__imp__sub_825CFAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CFB00"))) PPC_WEAK_FUNC(sub_825CFB00);
PPC_FUNC_IMPL(__imp__sub_825CFB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825CFB08;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r8,r3,12
	ctx.r8.s64 = ctx.r3.s64 + 12;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r29,1
	ctx.r29.s64 = 1;
loc_825CFB2C:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cfb9c
	if (ctx.cr6.eq) goto loc_825CFB9C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825cfb9c
	if (ctx.cr6.eq) goto loc_825CFB9C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x825cfb5c
	if (ctx.cr6.gt) goto loc_825CFB5C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825CFB5C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825cfb74
	if (ctx.cr0.eq) goto loc_825CFB74;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x825cfb78
	if (ctx.cr6.eq) goto loc_825CFB78;
loc_825CFB74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825CFB78:
	// li r10,2
	ctx.r10.s64 = 2;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825CFB88:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825cfb88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CFB88;
loc_825CFB9C:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x825cfb2c
	if (!ctx.cr0.eq) goto loc_825CFB2C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825cfcc4
	if (ctx.cr6.eq) goto loc_825CFCC4;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfs f30,2232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2232);
	ctx.f30.f64 = double(temp.f32);
loc_825CFBBC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,420(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 420);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825cfc6c
	if (!ctx.cr0.eq) goto loc_825CFC6C;
	// lbz r10,421(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 421);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825cfc6c
	if (!ctx.cr0.eq) goto loc_825CFC6C;
	// lbz r11,422(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 422);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825cfc6c
	if (ctx.cr0.eq) goto loc_825CFC6C;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x825cfc10
	if (ctx.cr6.gt) goto loc_825CFC10;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825CFC10:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825cfc54
	if (ctx.cr0.eq) goto loc_825CFC54;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825cfc54
	if (!ctx.cr6.eq) goto loc_825CFC54;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825CFC30:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,140(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stbx r29,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825cfc30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CFC30;
loc_825CFC54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82560c08
	ctx.lr = 0x825CFC68;
	sub_82560C08(ctx, base);
	// b 0x825cfcbc
	goto loc_825CFCBC;
loc_825CFC6C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8262d2b8
	ctx.lr = 0x825CFC74;
	sub_8262D2B8(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,132
	ctx.r9.s64 = 132;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825CFC84:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x825cfcac
	if (!ctx.cr6.lt) goto loc_825CFCAC;
	// lwz r10,140(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stbx r29,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u8);
loc_825CFCAC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x825cfc84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CFC84;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_825CFCBC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825cfbbc
	if (!ctx.cr6.eq) goto loc_825CFBBC;
loc_825CFCC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CFCD4"))) PPC_WEAK_FUNC(sub_825CFCD4);
PPC_FUNC_IMPL(__imp__sub_825CFCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CFCD8"))) PPC_WEAK_FUNC(sub_825CFCD8);
PPC_FUNC_IMPL(__imp__sub_825CFCD8) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,2960(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2960);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// b 0x825cfd28
	goto loc_825CFD28;
loc_825CFD08:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x825cfd24
	if (ctx.cr6.gt) goto loc_825CFD24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8262ac30
	ctx.lr = 0x825CFD24;
	sub_8262AC30(ctx, base);
loc_825CFD24:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_825CFD28:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825cfd08
	if (!ctx.cr6.eq) goto loc_825CFD08;
	// lwz r31,2964(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2964);
	// b 0x825cfd4c
	goto loc_825CFD4C;
loc_825CFD38:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8262eeb0
	ctx.lr = 0x825CFD48;
	sub_8262EEB0(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_825CFD4C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825cfd38
	if (!ctx.cr6.eq) goto loc_825CFD38;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CFD74"))) PPC_WEAK_FUNC(sub_825CFD74);
PPC_FUNC_IMPL(__imp__sub_825CFD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CFD78"))) PPC_WEAK_FUNC(sub_825CFD78);
PPC_FUNC_IMPL(__imp__sub_825CFD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825CFD80;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cfe08
	if (ctx.cr6.eq) goto loc_825CFE08;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r28,3
	ctx.r28.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
loc_825CFDA8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825cfdfc
	if (ctx.cr6.eq) goto loc_825CFDFC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cfdec
	if (ctx.cr6.eq) goto loc_825CFDEC;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x825cfdd8
	if (ctx.cr6.gt) goto loc_825CFDD8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_825CFDD8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825cfdfc
	if (!ctx.cr0.eq) goto loc_825CFDFC;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825cfdfc
	if (!ctx.cr6.eq) goto loc_825CFDFC;
loc_825CFDEC:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r3,r11,2960
	ctx.r3.s64 = ctx.r11.s64 + 2960;
	// bl 0x825cff60
	ctx.lr = 0x825CFDF8;
	sub_825CFF60(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825CFDFC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x825cfda8
	if (!ctx.cr0.eq) goto loc_825CFDA8;
loc_825CFE08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CFE14"))) PPC_WEAK_FUNC(sub_825CFE14);
PPC_FUNC_IMPL(__imp__sub_825CFE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CFE18"))) PPC_WEAK_FUNC(sub_825CFE18);
PPC_FUNC_IMPL(__imp__sub_825CFE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825CFE20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x825cff54
	if (ctx.cr6.lt) goto loc_825CFF54;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bge cr6,0x825cff54
	if (!ctx.cr6.lt) goto loc_825CFF54;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x825cfe64
	goto loc_825CFE64;
loc_825CFE50:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825cfe70
	if (ctx.cr6.eq) goto loc_825CFE70;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_825CFE64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825cfe50
	if (!ctx.cr6.eq) goto loc_825CFE50;
	// b 0x825cfe7c
	goto loc_825CFE7C;
loc_825CFE70:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825cfedc
	if (!ctx.cr6.eq) goto loc_825CFEDC;
loc_825CFE7C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x825cfe8c
	if (!ctx.cr6.eq) goto loc_825CFE8C;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x825cfe9c
	goto loc_825CFE9C;
loc_825CFE8C:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,5108
	ctx.r11.s64 = ctx.r11.s64 + 5108;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_825CFE9C:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82629cf8
	ctx.lr = 0x825CFEA4;
	sub_82629CF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r3,12
	ctx.r3.s64 = 12;
	// beq cr6,0x825cfec4
	if (ctx.cr6.eq) goto loc_825CFEC4;
	// bl 0x82547c40
	ctx.lr = 0x825CFEB8;
	sub_82547C40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// b 0x825cfed0
	goto loc_825CFED0;
loc_825CFEC4:
	// bl 0x82547c40
	ctx.lr = 0x825CFEC8;
	sub_82547C40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_825CFED0:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_825CFEDC:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82547c40
	ctx.lr = 0x825CFEE4;
	sub_82547C40(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cff34
	if (ctx.cr6.eq) goto loc_825CFF34;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825cff20
	if (ctx.cr6.eq) goto loc_825CFF20;
loc_825CFF0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825cff0c
	if (!ctx.cr6.eq) goto loc_825CFF0C;
loc_825CFF20:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82547c40
	ctx.lr = 0x825CFF28;
	sub_82547C40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x825cff44
	goto loc_825CFF44;
loc_825CFF34:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82547c40
	ctx.lr = 0x825CFF3C;
	sub_82547C40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
loc_825CFF44:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// b 0x825cff58
	goto loc_825CFF58;
loc_825CFF54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825CFF58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CFF60"))) PPC_WEAK_FUNC(sub_825CFF60);
PPC_FUNC_IMPL(__imp__sub_825CFF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825CFF68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cffdc
	if (ctx.cr6.eq) goto loc_825CFFDC;
	// b 0x825cffa4
	goto loc_825CFFA4;
loc_825CFF90:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825cffb0
	if (ctx.cr6.eq) goto loc_825CFFB0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_825CFFA4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825cff90
	if (!ctx.cr6.eq) goto loc_825CFF90;
	// b 0x825cffdc
	goto loc_825CFFDC;
loc_825CFFB0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825cffc4
	if (ctx.cr6.eq) goto loc_825CFFC4;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x825cffc8
	goto loc_825CFFC8;
loc_825CFFC4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_825CFFC8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8262a230
	ctx.lr = 0x825CFFD0;
	sub_8262A230(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547d80
	ctx.lr = 0x825CFFDC;
	sub_82547D80(ctx, base);
loc_825CFFDC:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x825cfffc
	goto loc_825CFFFC;
loc_825CFFE8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825d0008
	if (ctx.cr6.eq) goto loc_825D0008;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_825CFFFC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825cffe8
	if (!ctx.cr6.eq) goto loc_825CFFE8;
	// b 0x825d0060
	goto loc_825D0060;
loc_825D0008:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d001c
	if (ctx.cr6.eq) goto loc_825D001C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x825d0024
	goto loc_825D0024;
loc_825D001C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_825D0024:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d0048
	if (ctx.cr6.eq) goto loc_825D0048;
loc_825D0034:
	// lwz r29,60(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// bl 0x82547d80
	ctx.lr = 0x825D003C;
	sub_82547D80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x825d0034
	if (!ctx.cr6.eq) goto loc_825D0034;
loc_825D0048:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82547d80
	ctx.lr = 0x825D0054;
	sub_82547D80(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547d80
	ctx.lr = 0x825D0060;
	sub_82547D80(ctx, base);
loc_825D0060:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D0068"))) PPC_WEAK_FUNC(sub_825D0068);
PPC_FUNC_IMPL(__imp__sub_825D0068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825D0070;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,2960(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2960);
	// lfs f31,2088(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2088);
	ctx.f31.f64 = double(temp.f32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x825d0114
	if (ctx.cr0.eq) goto loc_825D0114;
loc_825D0090:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825d00a8
	if (ctx.cr6.eq) goto loc_825D00A8;
	// lbzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825d00b4
	if (!ctx.cr0.eq) goto loc_825D00B4;
loc_825D00A8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d0090
	if (!ctx.cr6.eq) goto loc_825D0090;
loc_825D00B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d0114
	if (ctx.cr6.eq) goto loc_825D0114;
	// lis r30,-31964
	ctx.r30.s64 = -2094792704;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-13544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13544);
	// bl 0x82668e90
	ctx.lr = 0x825D00D4;
	sub_82668E90(ctx, base);
	// b 0x825d00f8
	goto loc_825D00F8;
loc_825D00D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x825d00f4
	if (ctx.cr6.gt) goto loc_825D00F4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8262a350
	ctx.lr = 0x825D00F4;
	sub_8262A350(ctx, base);
loc_825D00F4:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_825D00F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d00d8
	if (!ctx.cr6.eq) goto loc_825D00D8;
	// li r6,96
	ctx.r6.s64 = 96;
	// lwz r3,-13544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13544);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82668e90
	ctx.lr = 0x825D0114;
	sub_82668E90(ctx, base);
loc_825D0114:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D0120"))) PPC_WEAK_FUNC(sub_825D0120);
PPC_FUNC_IMPL(__imp__sub_825D0120) {
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
	// bl 0x825d0170
	ctx.lr = 0x825D0140;
	sub_825D0170(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d0150
	if (ctx.cr0.eq) goto loc_825D0150;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825D0150;
	sub_82691540(ctx, base);
loc_825D0150:
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

__attribute__((alias("__imp__sub_825D016C"))) PPC_WEAK_FUNC(sub_825D016C);
PPC_FUNC_IMPL(__imp__sub_825D016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D0170"))) PPC_WEAK_FUNC(sub_825D0170);
PPC_FUNC_IMPL(__imp__sub_825D0170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825D0178;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-12968
	ctx.r11.s64 = ctx.r11.s64 + -12968;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825d01c8
	goto loc_825D01C8;
loc_825D0198:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d01bc
	if (ctx.cr6.eq) goto loc_825D01BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D01B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825D01BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82547d80
	ctx.lr = 0x825D01C8;
	sub_82547D80(ctx, base);
loc_825D01C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d0198
	if (!ctx.cr6.eq) goto loc_825D0198;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r11,r11,-25696
	ctx.r11.s64 = ctx.r11.s64 + -25696;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D01E8"))) PPC_WEAK_FUNC(sub_825D01E8);
PPC_FUNC_IMPL(__imp__sub_825D01E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825D01F0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x82547c40
	ctx.lr = 0x825D0214;
	sub_82547C40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82691500
	ctx.lr = 0x825D0220;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d0240
	if (ctx.cr0.eq) goto loc_825D0240;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8262fc58
	ctx.lr = 0x825D023C;
	sub_8262FC58(ctx, base);
	// b 0x825d0244
	goto loc_825D0244;
loc_825D0240:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D0244:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D0264"))) PPC_WEAK_FUNC(sub_825D0264);
PPC_FUNC_IMPL(__imp__sub_825D0264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D0268"))) PPC_WEAK_FUNC(sub_825D0268);
PPC_FUNC_IMPL(__imp__sub_825D0268) {
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
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825d02b0
	if (ctx.cr6.eq) goto loc_825D02B0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_825D028C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825d02c8
	if (ctx.cr6.eq) goto loc_825D02C8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d028c
	if (!ctx.cr6.eq) goto loc_825D028C;
loc_825D02B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D02B4:
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
loc_825D02C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d02dc
	if (ctx.cr6.eq) goto loc_825D02DC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x825d02e4
	goto loc_825D02E4;
loc_825D02DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_825D02E4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d0304
	if (ctx.cr6.eq) goto loc_825D0304;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D0304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D0304:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547d80
	ctx.lr = 0x825D030C;
	sub_82547D80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d02b4
	goto loc_825D02B4;
}

__attribute__((alias("__imp__sub_825D0314"))) PPC_WEAK_FUNC(sub_825D0314);
PPC_FUNC_IMPL(__imp__sub_825D0314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D0318"))) PPC_WEAK_FUNC(sub_825D0318);
PPC_FUNC_IMPL(__imp__sub_825D0318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x825d0348
	goto loc_825D0348;
loc_825D0338:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826300e8
	ctx.lr = 0x825D0344;
	sub_826300E8(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_825D0348:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d0338
	if (!ctx.cr6.eq) goto loc_825D0338;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0368"))) PPC_WEAK_FUNC(sub_825D0368);
PPC_FUNC_IMPL(__imp__sub_825D0368) {
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
	// bl 0x825d03b8
	ctx.lr = 0x825D0388;
	sub_825D03B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d0398
	if (ctx.cr0.eq) goto loc_825D0398;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825D0398;
	sub_82691540(ctx, base);
loc_825D0398:
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

__attribute__((alias("__imp__sub_825D03B4"))) PPC_WEAK_FUNC(sub_825D03B4);
PPC_FUNC_IMPL(__imp__sub_825D03B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D03B8"))) PPC_WEAK_FUNC(sub_825D03B8);
PPC_FUNC_IMPL(__imp__sub_825D03B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825D03C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-12928
	ctx.r11.s64 = ctx.r11.s64 + -12928;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825d0410
	goto loc_825D0410;
loc_825D03E0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d0404
	if (ctx.cr6.eq) goto loc_825D0404;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D0400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825D0404:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82547d80
	ctx.lr = 0x825D0410;
	sub_82547D80(ctx, base);
loc_825D0410:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d03e0
	if (!ctx.cr6.eq) goto loc_825D03E0;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// b 0x825d0444
	goto loc_825D0444;
loc_825D0424:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d0438
	if (ctx.cr6.eq) goto loc_825D0438;
	// bl 0x826025f0
	ctx.lr = 0x825D0434;
	sub_826025F0(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825D0438:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82547d80
	ctx.lr = 0x825D0444;
	sub_82547D80(ctx, base);
loc_825D0444:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d0424
	if (!ctx.cr6.eq) goto loc_825D0424;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r11,r11,-25696
	ctx.r11.s64 = ctx.r11.s64 + -25696;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D0464"))) PPC_WEAK_FUNC(sub_825D0464);
PPC_FUNC_IMPL(__imp__sub_825D0464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D0468"))) PPC_WEAK_FUNC(sub_825D0468);
PPC_FUNC_IMPL(__imp__sub_825D0468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x825D0470;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825d04a4
	if (!ctx.cr6.gt) goto loc_825D04A4;
loc_825D049C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d05b8
	goto loc_825D05B8;
loc_825D04A4:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825d0500
	if (!ctx.cr6.eq) goto loc_825D0500;
	// b 0x825d04e0
	goto loc_825D04E0;
loc_825D04B8:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d04dc
	if (ctx.cr6.eq) goto loc_825D04DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825d0960
	ctx.lr = 0x825D04D4;
	sub_825D0960(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825d04ec
	if (!ctx.cr0.eq) goto loc_825D04EC;
loc_825D04DC:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_825D04E0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825d04b8
	if (!ctx.cr6.eq) goto loc_825D04B8;
	// b 0x825d0500
	goto loc_825D0500;
loc_825D04EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bne 0x825d0548
	if (!ctx.cr0.eq) goto loc_825D0548;
loc_825D0500:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82602138
	ctx.lr = 0x825D0508;
	sub_82602138(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825d049c
	if (ctx.cr0.eq) goto loc_825D049C;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82547c40
	ctx.lr = 0x825D0518;
	sub_82547C40(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mulli r11,r11,288
	ctx.r11.s64 = ctx.r11.s64 * 288;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_825D0548:
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82691500
	ctx.lr = 0x825D0550;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d057c
	if (ctx.cr0.eq) goto loc_825D057C;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x826310f0
	ctx.lr = 0x825D0574;
	sub_826310F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x825d0580
	goto loc_825D0580;
loc_825D057C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825D0580:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82547c40
	ctx.lr = 0x825D0588;
	sub_82547C40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lfs f0,172(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r10,216(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825D05B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D05C4"))) PPC_WEAK_FUNC(sub_825D05C4);
PPC_FUNC_IMPL(__imp__sub_825D05C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D05C8"))) PPC_WEAK_FUNC(sub_825D05C8);
PPC_FUNC_IMPL(__imp__sub_825D05C8) {
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
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825d0610
	if (ctx.cr6.eq) goto loc_825D0610;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_825D05EC:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825d0628
	if (ctx.cr6.eq) goto loc_825D0628;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d05ec
	if (!ctx.cr6.eq) goto loc_825D05EC;
loc_825D0610:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D0614:
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
loc_825D0628:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d063c
	if (ctx.cr6.eq) goto loc_825D063C;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x825d0644
	goto loc_825D0644;
loc_825D063C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_825D0644:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d0664
	if (ctx.cr6.eq) goto loc_825D0664;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D0664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D0664:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d0684
	if (ctx.cr6.eq) goto loc_825D0684;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_825D0684:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547d80
	ctx.lr = 0x825D068C;
	sub_82547D80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d0614
	goto loc_825D0614;
}

__attribute__((alias("__imp__sub_825D0694"))) PPC_WEAK_FUNC(sub_825D0694);
PPC_FUNC_IMPL(__imp__sub_825D0694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D0698"))) PPC_WEAK_FUNC(sub_825D0698);
PPC_FUNC_IMPL(__imp__sub_825D0698) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825d073c
	if (ctx.cr6.eq) goto loc_825D073C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f30,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f30.f64 = double(temp.f32);
loc_825D06D0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r11,420(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 420);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825d0728
	if (!ctx.cr0.eq) goto loc_825D0728;
	// lbz r11,421(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 421);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825d0728
	if (!ctx.cr0.eq) goto loc_825D0728;
	// lbz r11,422(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 422);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825d0718
	if (!ctx.cr0.eq) goto loc_825D0718;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x825d0728
	if (!ctx.cr6.gt) goto loc_825D0728;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x825d0728
	if (!ctx.cr6.lt) goto loc_825D0728;
loc_825D0718:
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82560c08
	ctx.lr = 0x825D0724;
	sub_82560C08(ctx, base);
	// b 0x825d0734
	goto loc_825D0734;
loc_825D0728:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82631670
	ctx.lr = 0x825D0730;
	sub_82631670(ctx, base);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_825D0734:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d06d0
	if (!ctx.cr6.eq) goto loc_825D06D0;
loc_825D073C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825d0764
	if (!ctx.cr6.gt) goto loc_825D0764;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D0764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D0764:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0784"))) PPC_WEAK_FUNC(sub_825D0784);
PPC_FUNC_IMPL(__imp__sub_825D0784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D0788"))) PPC_WEAK_FUNC(sub_825D0788);
PPC_FUNC_IMPL(__imp__sub_825D0788) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// b 0x825d07b8
	goto loc_825D07B8;
loc_825D07A8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r9.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_825D07B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d07a8
	if (!ctx.cr6.eq) goto loc_825D07A8;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x825d07e0
	goto loc_825D07E0;
loc_825D07C8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d07dc
	if (ctx.cr6.eq) goto loc_825D07DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82632188
	ctx.lr = 0x825D07DC;
	sub_82632188(ctx, base);
loc_825D07DC:
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_825D07E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d07c8
	if (!ctx.cr6.eq) goto loc_825D07C8;
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

__attribute__((alias("__imp__sub_825D0800"))) PPC_WEAK_FUNC(sub_825D0800);
PPC_FUNC_IMPL(__imp__sub_825D0800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825D0808;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31964
	ctx.r30.s64 = -2094792704;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-13544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,10548(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r8,r10,5,25,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x70) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF8F);
	// rlwinm r28,r7,28,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x7;
	// stw r8,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r8.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x825d086c
	goto loc_825D086C;
loc_825D0858:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82603fe0
	ctx.lr = 0x825D0868;
	sub_82603FE0(ctx, base);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_825D086C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d0858
	if (!ctx.cr6.eq) goto loc_825D0858;
	// lwz r11,-13544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10548(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwimi r9,r28,4,25,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r28.u32, 4) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r9,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D08A8"))) PPC_WEAK_FUNC(sub_825D08A8);
PPC_FUNC_IMPL(__imp__sub_825D08A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825D08B0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825d0950
	if (ctx.cr6.eq) goto loc_825D0950;
loc_825D08D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x825d0940
	if (ctx.cr6.gt) goto loc_825D0940;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d091c
	if (ctx.cr6.eq) goto loc_825D091C;
	// lfs f0,124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x825d0940
	if (!ctx.cr6.gt) goto loc_825D0940;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mulli r11,r11,288
	ctx.r11.s64 = ctx.r11.s64 * 288;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x826025f0
	ctx.lr = 0x825D0914;
	sub_826025F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_825D091C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825d0930
	if (!ctx.cr6.eq) goto loc_825D0930;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// b 0x825d0934
	goto loc_825D0934;
loc_825D0930:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
loc_825D0934:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547d80
	ctx.lr = 0x825D093C;
	sub_82547D80(ctx, base);
	// b 0x825d0944
	goto loc_825D0944;
loc_825D0940:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_825D0944:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x825d08d0
	if (!ctx.cr6.eq) goto loc_825D08D0;
loc_825D0950:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D095C"))) PPC_WEAK_FUNC(sub_825D095C);
PPC_FUNC_IMPL(__imp__sub_825D095C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D0960"))) PPC_WEAK_FUNC(sub_825D0960);
PPC_FUNC_IMPL(__imp__sub_825D0960) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// addi r3,r6,8
	ctx.r3.s64 = ctx.r6.s64 + 8;
	// bl 0x82544c50
	ctx.lr = 0x825D0980;
	sub_82544C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d0a5c
	if (ctx.cr0.eq) goto loc_825D0A5C;
	// addi r4,r7,24
	ctx.r4.s64 = ctx.r7.s64 + 24;
	// addi r3,r6,12
	ctx.r3.s64 = ctx.r6.s64 + 12;
	// bl 0x82544c50
	ctx.lr = 0x825D0994;
	sub_82544C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d0a5c
	if (ctx.cr0.eq) goto loc_825D0A5C;
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r10,56(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825d0a5c
	if (!ctx.cr6.eq) goto loc_825D0A5C;
	// lfs f0,52(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,60(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x825d0a5c
	if (!ctx.cr6.eq) goto loc_825D0A5C;
	// lfs f0,148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x825d0a5c
	if (!ctx.cr6.eq) goto loc_825D0A5C;
	// lfs f0,100(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x825d0a5c
	if (!ctx.cr6.eq) goto loc_825D0A5C;
	// lfs f0,112(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x825d0a5c
	if (!ctx.cr6.eq) goto loc_825D0A5C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f13,88(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,108(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 108);
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfs f0,416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825d0a5c
	if (!ctx.cr6.eq) goto loc_825D0A5C;
	// lfs f0,132(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x825d0a5c
	if (!ctx.cr6.eq) goto loc_825D0A5C;
	// lwz r11,248(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 248);
	// lwz r10,128(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 128);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825d0a5c
	if (!ctx.cr6.eq) goto loc_825D0A5C;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,2000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2000, ctx.xer);
	// ble cr6,0x825d0a48
	if (!ctx.cr6.gt) goto loc_825D0A48;
	// li r11,2000
	ctx.r11.s64 = 2000;
loc_825D0A48:
	// lwz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfze r3,r9
	temp.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r3.u64 = temp.u64;
	// b 0x825d0a60
	goto loc_825D0A60;
loc_825D0A5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D0A60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0A70"))) PPC_WEAK_FUNC(sub_825D0A70);
PPC_FUNC_IMPL(__imp__sub_825D0A70) {
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
	// bl 0x825d0ac0
	ctx.lr = 0x825D0A90;
	sub_825D0AC0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d0aa0
	if (ctx.cr0.eq) goto loc_825D0AA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825D0AA0;
	sub_82691540(ctx, base);
loc_825D0AA0:
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

__attribute__((alias("__imp__sub_825D0ABC"))) PPC_WEAK_FUNC(sub_825D0ABC);
PPC_FUNC_IMPL(__imp__sub_825D0ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D0AC0"))) PPC_WEAK_FUNC(sub_825D0AC0);
PPC_FUNC_IMPL(__imp__sub_825D0AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825D0AC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-12888
	ctx.r11.s64 = ctx.r11.s64 + -12888;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825d0b18
	goto loc_825D0B18;
loc_825D0AE8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d0b0c
	if (ctx.cr6.eq) goto loc_825D0B0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D0B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825D0B0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82547d80
	ctx.lr = 0x825D0B18;
	sub_82547D80(ctx, base);
loc_825D0B18:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d0ae8
	if (!ctx.cr6.eq) goto loc_825D0AE8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r11,r11,-25696
	ctx.r11.s64 = ctx.r11.s64 + -25696;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D0B38"))) PPC_WEAK_FUNC(sub_825D0B38);
PPC_FUNC_IMPL(__imp__sub_825D0B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825D0B40;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82547c40
	ctx.lr = 0x825D0B64;
	sub_82547C40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82691500
	ctx.lr = 0x825D0B70;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d0b94
	if (ctx.cr0.eq) goto loc_825D0B94;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82632688
	ctx.lr = 0x825D0B90;
	sub_82632688(ctx, base);
	// b 0x825d0b98
	goto loc_825D0B98;
loc_825D0B94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D0B98:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D0BB8"))) PPC_WEAK_FUNC(sub_825D0BB8);
PPC_FUNC_IMPL(__imp__sub_825D0BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825D0BC0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x825d0c28
	goto loc_825D0C28;
loc_825D0BD8:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// dcbt r0,r30
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r11,420(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 420);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825d0c1c
	if (!ctx.cr0.eq) goto loc_825D0C1C;
	// lbz r11,421(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 421);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825d0c1c
	if (!ctx.cr0.eq) goto loc_825D0C1C;
	// lbz r11,422(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 422);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d0c1c
	if (ctx.cr0.eq) goto loc_825D0C1C;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82560c08
	ctx.lr = 0x825D0C14;
	sub_82560C08(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x825d0c28
	goto loc_825D0C28;
loc_825D0C1C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82632878
	ctx.lr = 0x825D0C24;
	sub_82632878(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_825D0C28:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d0bd8
	if (!ctx.cr6.eq) goto loc_825D0BD8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D0C3C"))) PPC_WEAK_FUNC(sub_825D0C3C);
PPC_FUNC_IMPL(__imp__sub_825D0C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D0C40"))) PPC_WEAK_FUNC(sub_825D0C40);
PPC_FUNC_IMPL(__imp__sub_825D0C40) {
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
	// bl 0x825d0c90
	ctx.lr = 0x825D0C60;
	sub_825D0C90(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d0c70
	if (ctx.cr0.eq) goto loc_825D0C70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825D0C70;
	sub_82691540(ctx, base);
loc_825D0C70:
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

__attribute__((alias("__imp__sub_825D0C8C"))) PPC_WEAK_FUNC(sub_825D0C8C);
PPC_FUNC_IMPL(__imp__sub_825D0C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D0C90"))) PPC_WEAK_FUNC(sub_825D0C90);
PPC_FUNC_IMPL(__imp__sub_825D0C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825D0C98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-12848
	ctx.r11.s64 = ctx.r11.s64 + -12848;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825d0ce8
	goto loc_825D0CE8;
loc_825D0CB8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d0cdc
	if (ctx.cr6.eq) goto loc_825D0CDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D0CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825D0CDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82547d80
	ctx.lr = 0x825D0CE8;
	sub_82547D80(ctx, base);
loc_825D0CE8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d0cb8
	if (!ctx.cr6.eq) goto loc_825D0CB8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r11,r11,-25696
	ctx.r11.s64 = ctx.r11.s64 + -25696;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D0D08"))) PPC_WEAK_FUNC(sub_825D0D08);
PPC_FUNC_IMPL(__imp__sub_825D0D08) {
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
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x825d0d34
	goto loc_825D0D34;
loc_825D0D20:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d0d30
	if (ctx.cr6.eq) goto loc_825D0D30;
	// bl 0x82632c70
	ctx.lr = 0x825D0D30;
	sub_82632C70(ctx, base);
loc_825D0D30:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_825D0D34:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d0d20
	if (!ctx.cr6.eq) goto loc_825D0D20;
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

__attribute__((alias("__imp__sub_825D0D50"))) PPC_WEAK_FUNC(sub_825D0D50);
PPC_FUNC_IMPL(__imp__sub_825D0D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825D0D58;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-12632
	ctx.r11.s64 = ctx.r11.s64 + -12632;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r10,-12808
	ctx.r3.s64 = ctx.r10.s64 + -12808;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x825D0D8C;
	sub_82547F38(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12780
	ctx.r3.s64 = ctx.r11.s64 + -12780;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82547f38
	ctx.lr = 0x825D0DA0;
	sub_82547F38(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12752
	ctx.r3.s64 = ctx.r11.s64 + -12752;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82547f38
	ctx.lr = 0x825D0DB4;
	sub_82547F38(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12720
	ctx.r3.s64 = ctx.r11.s64 + -12720;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82547f38
	ctx.lr = 0x825D0DC8;
	sub_82547F38(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12692
	ctx.r3.s64 = ctx.r11.s64 + -12692;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82547f38
	ctx.lr = 0x825D0DDC;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x825D0DEC;
	sub_82546708(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82668a48
	ctx.lr = 0x825D0DF4;
	sub_82668A48(ctx, base);
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825469e0
	ctx.lr = 0x825D0E00;
	sub_825469E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82546708
	ctx.lr = 0x825D0E10;
	sub_82546708(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82668a48
	ctx.lr = 0x825D0E18;
	sub_82668A48(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825469e0
	ctx.lr = 0x825D0E24;
	sub_825469E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82546708
	ctx.lr = 0x825D0E34;
	sub_82546708(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826686a0
	ctx.lr = 0x825D0E3C;
	sub_826686A0(ctx, base);
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825469e0
	ctx.lr = 0x825D0E48;
	sub_825469E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82546708
	ctx.lr = 0x825D0E58;
	sub_82546708(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82668a48
	ctx.lr = 0x825D0E60;
	sub_82668A48(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825469e0
	ctx.lr = 0x825D0E6C;
	sub_825469E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82546708
	ctx.lr = 0x825D0E7C;
	sub_82546708(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826686a0
	ctx.lr = 0x825D0E84;
	sub_826686A0(ctx, base);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825469e0
	ctx.lr = 0x825D0E90;
	sub_825469E0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r31,r11,5060
	ctx.r31.s64 = ctx.r11.s64 + 5060;
	// addi r3,r31,-84
	ctx.r3.s64 = ctx.r31.s64 + -84;
	// bl 0x82668e10
	ctx.lr = 0x825D0EA0;
	sub_82668E10(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826720f8
	ctx.lr = 0x825D0EC4;
	sub_826720F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8266eed8
	ctx.lr = 0x825D0ECC;
	sub_8266EED8(ctx, base);
	// addi r3,r31,-36
	ctx.r3.s64 = ctx.r31.s64 + -36;
	// bl 0x82668e10
	ctx.lr = 0x825D0ED4;
	sub_82668E10(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826720f8
	ctx.lr = 0x825D0EF8;
	sub_826720F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8266eed8
	ctx.lr = 0x825D0F00;
	sub_8266EED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82668e10
	ctx.lr = 0x825D0F08;
	sub_82668E10(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826720f8
	ctx.lr = 0x825D0F2C;
	sub_826720F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266eed8
	ctx.lr = 0x825D0F34;
	sub_8266EED8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r10,80
	ctx.r10.s64 = 80;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r11,r11,-22432
	ctx.r11.s64 = ctx.r11.s64 + -22432;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// li r9,5120
	ctx.r9.s64 = 5120;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// ori r5,r5,390
	ctx.r5.u64 = ctx.r5.u64 | 390;
	// lwz r4,196(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// addi r11,r3,79
	ctx.r11.s64 = ctx.r3.s64 + 79;
	// addi r8,r4,15
	ctx.r8.s64 = ctx.r4.s64 + 15;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// rlwinm r10,r8,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// mulli r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 * 80;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// subfic r11,r11,2048
	ctx.xer.ca = ctx.r11.u32 <= 2048;
	ctx.r11.s64 = 2048 - ctx.r11.s64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82662f50
	ctx.lr = 0x825D0F94;
	sub_82662F50(ctx, base);
	// stw r3,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12664
	ctx.r3.s64 = ctx.r11.s64 + -12664;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82547f38
	ctx.lr = 0x825D0FAC;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82546708
	ctx.lr = 0x825D0FBC;
	sub_82546708(ctx, base);
	// stw r3,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8286de68
	ctx.lr = 0x825D0FD0;
	sub_8286DE68(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,44(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 44, temp.u32);
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D0FF0"))) PPC_WEAK_FUNC(sub_825D0FF0);
PPC_FUNC_IMPL(__imp__sub_825D0FF0) {
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
	// bl 0x825d1040
	ctx.lr = 0x825D1010;
	sub_825D1040(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d1020
	if (ctx.cr0.eq) goto loc_825D1020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825D1020;
	sub_82691540(ctx, base);
loc_825D1020:
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

__attribute__((alias("__imp__sub_825D103C"))) PPC_WEAK_FUNC(sub_825D103C);
PPC_FUNC_IMPL(__imp__sub_825D103C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D1040"))) PPC_WEAK_FUNC(sub_825D1040);
PPC_FUNC_IMPL(__imp__sub_825D1040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825D1048;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-12632
	ctx.r11.s64 = ctx.r11.s64 + -12632;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825d1098
	goto loc_825D1098;
loc_825D1068:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d108c
	if (ctx.cr6.eq) goto loc_825D108C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D1088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_825D108C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82547d80
	ctx.lr = 0x825D1098;
	sub_82547D80(ctx, base);
loc_825D1098:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825d1068
	if (!ctx.cr6.eq) goto loc_825D1068;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d10bc
	if (ctx.cr6.eq) goto loc_825D10BC;
	// bl 0x825469e0
	ctx.lr = 0x825D10B4;
	sub_825469E0(ctx, base);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
loc_825D10BC:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d10d0
	if (ctx.cr6.eq) goto loc_825D10D0;
	// bl 0x8266eed8
	ctx.lr = 0x825D10CC;
	sub_8266EED8(ctx, base);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
loc_825D10D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d10e4
	if (ctx.cr6.eq) goto loc_825D10E4;
	// bl 0x82586c68
	ctx.lr = 0x825D10E4;
	sub_82586C68(ctx, base);
loc_825D10E4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d10f8
	if (ctx.cr6.eq) goto loc_825D10F8;
	// bl 0x82586c68
	ctx.lr = 0x825D10F8;
	sub_82586C68(ctx, base);
loc_825D10F8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d110c
	if (ctx.cr6.eq) goto loc_825D110C;
	// bl 0x82586cc8
	ctx.lr = 0x825D110C;
	sub_82586CC8(ctx, base);
loc_825D110C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d1120
	if (ctx.cr6.eq) goto loc_825D1120;
	// bl 0x82586c68
	ctx.lr = 0x825D1120;
	sub_82586C68(ctx, base);
loc_825D1120:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d1134
	if (ctx.cr6.eq) goto loc_825D1134;
	// bl 0x82586cc8
	ctx.lr = 0x825D1134;
	sub_82586CC8(ctx, base);
loc_825D1134:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-25696
	ctx.r11.s64 = ctx.r11.s64 + -25696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D1148"))) PPC_WEAK_FUNC(sub_825D1148);
PPC_FUNC_IMPL(__imp__sub_825D1148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825D1150;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82691500
	ctx.lr = 0x825D116C;
	sub_82691500(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d11e0
	if (ctx.cr0.eq) goto loc_825D11E0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lfs f13,18708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18708);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r5,-3536
	ctx.r11.s64 = ctx.r5.s64 + -3536;
	// lfs f12,31396(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31396);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-2340(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// lfs f11,-24756(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -24756);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f11,44(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// b 0x825d11e4
	goto loc_825D11E4;
loc_825D11E0:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_825D11E4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d1208
	if (!ctx.cr6.eq) goto loc_825D1208;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82547c40
	ctx.lr = 0x825D11F8;
	sub_82547C40(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x825d1240
	goto loc_825D1240;
loc_825D1208:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825d122c
	if (ctx.cr6.eq) goto loc_825D122C;
loc_825D1218:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d1218
	if (!ctx.cr6.eq) goto loc_825D1218;
loc_825D122C:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82547c40
	ctx.lr = 0x825D1234;
	sub_82547C40(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825D1240:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stfs f31,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D1258"))) PPC_WEAK_FUNC(sub_825D1258);
PPC_FUNC_IMPL(__imp__sub_825D1258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1260"))) PPC_WEAK_FUNC(sub_825D1260);
PPC_FUNC_IMPL(__imp__sub_825D1260) {
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
	// beq cr6,0x825d1288
	if (ctx.cr6.eq) goto loc_825D1288;
	// bl 0x825d18e8
	ctx.lr = 0x825D127C;
	sub_825D18E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x825d128c
	if (!ctx.cr0.eq) goto loc_825D128C;
loc_825D1288:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D128C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D129C"))) PPC_WEAK_FUNC(sub_825D129C);
PPC_FUNC_IMPL(__imp__sub_825D129C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D12A0"))) PPC_WEAK_FUNC(sub_825D12A0);
PPC_FUNC_IMPL(__imp__sub_825D12A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x825D12A8;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r5,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d18dc
	if (ctx.cr6.eq) goto loc_825D18DC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x825d18e8
	ctx.lr = 0x825D12D0;
	sub_825D18E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d18dc
	if (ctx.cr0.eq) goto loc_825D18DC;
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lfs f0,13024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,13036(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13036);
	ctx.f12.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f13,13032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13032);
	ctx.f13.f64 = double(temp.f32);
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// lfs f0,13028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13028);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f12.u64);
	// lwz r28,132(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r29,124(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lfs f0,13040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13040);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,13044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13044);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// bl 0x8258a3f8
	ctx.lr = 0x825D1348;
	sub_8258A3F8(ctx, base);
	// lis r6,6184
	ctx.r6.s64 = 405274624;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,390
	ctx.r6.u64 = ctx.r6.u64 | 390;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8258a738
	ctx.lr = 0x825D136C;
	sub_8258A738(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lwz r3,12816(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12816);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// beq cr6,0x825d1388
	if (ctx.cr6.eq) goto loc_825D1388;
	// bl 0x8266ee60
	ctx.lr = 0x825D1384;
	sub_8266EE60(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
loc_825D1388:
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r24,r10,-22432
	ctx.r24.s64 = ctx.r10.s64 + -22432;
	// li r10,112
	ctx.r10.s64 = 112;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lwz r10,192(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 192);
	// lwz r9,196(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 196);
	// stw r29,12240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12240, ctx.r29.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r11.u64);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// bl 0x82668790
	ctx.lr = 0x825D13D0;
	sub_82668790(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82666190
	ctx.lr = 0x825D13E0;
	sub_82666190(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82665e80
	ctx.lr = 0x825D13EC;
	sub_82665E80(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f31,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82667c80
	ctx.lr = 0x825D1418;
	sub_82667C80(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// lwz r8,12280(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12280);
	// rlwinm r9,r9,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r7,1152(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwinm r23,r8,11,29,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x7;
	// lwz r6,1200(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	// rlwinm r22,r8,16,27,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x1F;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwinm r21,r8,8,27,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0x1F;
	// lwz r5,10568(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// rlwinm r19,r3,30,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x1;
	// clrlwi r20,r5,29
	ctx.r20.u64 = ctx.r5.u32 & 0x7;
	// rlwinm r17,r7,22,29,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 22) & 0x7;
	// rlwinm r16,r7,19,29,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 19) & 0x7;
	// rlwinm r15,r6,22,29,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 22) & 0x7;
	// rlwinm r14,r6,19,29,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x7;
	// lwz r8,12284(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12284);
	// lwz r26,12308(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12308);
	// lwz r25,12292(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12292);
	// rlwinm r18,r8,1,31,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10548(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r9,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663b10
	ctx.lr = 0x825D14AC;
	sub_82663B10(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663d50
	ctx.lr = 0x825D14B8;
	sub_82663D50(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663dc0
	ctx.lr = 0x825D14C4;
	sub_82663DC0(ctx, base);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663e30
	ctx.lr = 0x825D14CC;
	sub_82663E30(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rldicr r28,r8,37,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r10,12292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12292, ctx.r10.u32);
	// lwz r11,12816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12816);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r8,10460(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10460);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwimi r8,r11,0,28,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xF) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r8,10460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10460, ctx.r8.u32);
	// ld r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// addi r4,r3,13052
	ctx.r4.s64 = ctx.r3.s64 + 13052;
	// stw r27,12288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12288, ctx.r27.u32);
	// bl 0x82665d88
	ctx.lr = 0x825D1520;
	sub_82665D88(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82665d88
	ctx.lr = 0x825D152C;
	sub_82665D88(ctx, base);
	// lwz r4,452(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lfs f1,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d19a8
	ctx.lr = 0x825D1538;
	sub_825D19A8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// beq cr6,0x825d156c
	if (ctx.cr6.eq) goto loc_825D156C;
	// b 0x825d1550
	goto loc_825D1550;
loc_825D154C:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_825D1550:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82633190
	ctx.lr = 0x825D1558;
	sub_82633190(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bne cr6,0x825d154c
	if (!ctx.cr6.eq) goto loc_825D154C;
loc_825D156C:
	// lwz r11,196(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 196);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmpwi cr6,r11,480
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 480, ctx.xer);
	// bne cr6,0x825d1584
	if (!ctx.cr6.eq) goto loc_825D1584;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// b 0x825d158c
	goto loc_825D158C;
loc_825D1584:
	// li r11,112
	ctx.r11.s64 = 112;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_825D158C:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82673d58
	ctx.lr = 0x825D15BC;
	sub_82673D58(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x826631f0
	ctx.lr = 0x825D15D4;
	sub_826631F0(ctx, base);
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826631f0
	ctx.lr = 0x825D15E8;
	sub_826631F0(ctx, base);
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x826631f0
	ctx.lr = 0x825D15FC;
	sub_826631F0(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,1152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwimi r9,r27,11,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r27.u32, 11) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r9,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r9.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,1152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwimi r10,r27,14,16,18
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r27.u32, 14) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r10,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r10.u32);
	// addi r10,r11,1152
	ctx.r10.s64 = ctx.r11.s64 + 1152;
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,1200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	// rlwimi r9,r27,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r27.u32, 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r9,1200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1200, ctx.r9.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,1200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	// rlwimi r10,r27,13,16,18
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r27.u32, 13) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r10,1200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1200, ctx.r10.u32);
	// addi r10,r11,1200
	ctx.r10.s64 = ctx.r11.s64 + 1200;
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82668b38
	ctx.lr = 0x825D1690;
	sub_82668B38(ctx, base);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82668790
	ctx.lr = 0x825D169C;
	sub_82668790(ctx, base);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82666190
	ctx.lr = 0x825D16B0;
	sub_82666190(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82665e80
	ctx.lr = 0x825D16BC;
	sub_82665E80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8266eed8
	ctx.lr = 0x825D16C4;
	sub_8266EED8(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663b10
	ctx.lr = 0x825D16D0;
	sub_82663B10(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663d50
	ctx.lr = 0x825D16DC;
	sub_82663D50(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663dc0
	ctx.lr = 0x825D16E8;
	sub_82663DC0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663e30
	ctx.lr = 0x825D16F4;
	sub_82663E30(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// ori r30,r10,2048
	ctx.r30.u64 = ctx.r10.u64 | 2048;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r29,12308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12308, ctx.r29.u32);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,10548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r10,12292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12292, ctx.r10.u32);
	// lwz r11,10460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10460);
	// lwz r8,12816(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12816);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// rlwimi r10,r11,0,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// stw r10,10460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10460, ctx.r10.u32);
	// ld r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82665d88
	ctx.lr = 0x825D1764;
	sub_82665D88(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// addi r6,r11,5084
	ctx.r6.s64 = ctx.r11.s64 + 5084;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82674278
	ctx.lr = 0x825D1780;
	sub_82674278(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// addi r10,r11,1152
	ctx.r10.s64 = ctx.r11.s64 + 1152;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,1152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwimi r10,r17,10,19,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r17.u32, 10) & 0x1C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r10,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r10.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,1152(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwimi r8,r16,13,16,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r16.u32, 13) & 0xE000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r8,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r8.u32);
	// addi r10,r11,1152
	ctx.r10.s64 = ctx.r11.s64 + 1152;
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,1200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	// rlwimi r10,r15,10,19,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r15.u32, 10) & 0x1C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r10,1200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1200, ctx.r10.u32);
	// addi r10,r11,1200
	ctx.r10.s64 = ctx.r11.s64 + 1200;
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,1200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	// rlwimi r10,r14,13,16,18
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r14.u32, 13) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r10,1200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1200, ctx.r10.u32);
	// addi r10,r11,1200
	ctx.r10.s64 = ctx.r11.s64 + 1200;
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// stw r29,12288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12288, ctx.r29.u32);
	// addi r4,r3,13052
	ctx.r4.s64 = ctx.r3.s64 + 13052;
	// bl 0x82665d88
	ctx.lr = 0x825D1820;
	sub_82665D88(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r25,12292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12292, ctx.r25.u32);
	// lwz r9,12816(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12816);
	// lwz r11,10460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10460);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 & ctx.r25.u64;
	// rlwimi r9,r11,0,0,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF0) | (ctx.r9.u64 & 0xFFFFFFFF0000000F);
	// stw r9,10460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10460, ctx.r9.u32);
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10548(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwimi r9,r19,2,29,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r19.u32, 2) & 0x4) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r9,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r26,12308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12308, ctx.r26.u32);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r9,12832(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12832);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 & ctx.r26.u64;
	// rlwimi r11,r9,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,10548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// rlwimi r9,r20,0,29,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r20.u32, 0) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x826631f0
	ctx.lr = 0x825D18DC;
	sub_826631F0(ctx, base);
loc_825D18DC:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D18E8"))) PPC_WEAK_FUNC(sub_825D18E8);
PPC_FUNC_IMPL(__imp__sub_825D18E8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8257eac8
	ctx.lr = 0x825D190C;
	sub_8257EAC8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x825d191c
	if (!ctx.cr6.gt) goto loc_825D191C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d1990
	goto loc_825D1990;
loc_825D191C:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// mulli r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 * 176;
	// addi r11,r11,26816
	ctx.r11.s64 = ctx.r11.s64 + 26816;
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// addi r8,r11,160
	ctx.r8.s64 = ctx.r11.s64 + 160;
	// addi r7,r9,27568
	ctx.r7.s64 = ctx.r9.s64 + 27568;
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825d194c
	if (ctx.cr6.eq) goto loc_825D194C;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x825d1950
	goto loc_825D1950;
loc_825D194C:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_825D1950:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x825d1960
	if (!ctx.cr6.eq) goto loc_825D1960;
	// addi r5,r7,64
	ctx.r5.s64 = ctx.r7.s64 + 64;
loc_825D1960:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x825d1984
	goto loc_825D1984;
loc_825D196C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82633660
	ctx.lr = 0x825D1974;
	sub_82633660(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d1980
	if (ctx.cr0.eq) goto loc_825D1980;
	// li r30,1
	ctx.r30.s64 = 1;
loc_825D1980:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_825D1984:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d196c
	if (!ctx.cr6.eq) goto loc_825D196C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_825D1990:
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

__attribute__((alias("__imp__sub_825D19A8"))) PPC_WEAK_FUNC(sub_825D19A8);
PPC_FUNC_IMPL(__imp__sub_825D19A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825D19B0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mulli r30,r4,176
	ctx.r30.s64 = ctx.r4.s64 * 176;
	// addi r31,r11,26816
	ctx.r31.s64 = ctx.r11.s64 + 26816;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r31,160
	ctx.r10.s64 = ctx.r31.s64 + 160;
	// addi r28,r11,27568
	ctx.r28.s64 = ctx.r11.s64 + 27568;
	// lwzx r29,r30,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x825d19ec
	if (ctx.cr6.eq) goto loc_825D19EC;
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// b 0x825d19f0
	goto loc_825D19F0;
loc_825D19EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_825D19F0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82fa77c0
	ctx.lr = 0x825D19FC;
	sub_82FA77C0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// bne cr6,0x825d1a0c
	if (!ctx.cr6.eq) goto loc_825D1A0C;
	// addi r4,r28,64
	ctx.r4.s64 = ctx.r28.s64 + 64;
loc_825D1A0C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82fa77c0
	ctx.lr = 0x825D1A18;
	sub_82FA77C0(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292a630
	ctx.lr = 0x825D1A28;
	sub_8292A630(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292a7a8
	ctx.lr = 0x825D1A34;
	sub_8292A7A8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292a7a8
	ctx.lr = 0x825D1A40;
	sub_8292A7A8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292a7a8
	ctx.lr = 0x825D1A4C;
	sub_8292A7A8(ctx, base);
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// lis r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,192
	ctx.r4.s64 = 192;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x826682f8
	ctx.lr = 0x825D1A6C;
	sub_826682F8(ctx, base);
	// li r7,16384
	ctx.r7.s64 = 16384;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,196
	ctx.r4.s64 = 196;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x826682f8
	ctx.lr = 0x825D1A84;
	sub_826682F8(ctx, base);
	// li r7,8192
	ctx.r7.s64 = 8192;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,200
	ctx.r4.s64 = 200;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x826682f8
	ctx.lr = 0x825D1A9C;
	sub_826682F8(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,11804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f0,9088(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 9088, temp.u32);
	// stfs f13,9092(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 9092, temp.u32);
	// stfs f12,9096(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 9096, temp.u32);
	// stfs f11,9100(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 9100, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D1AE0"))) PPC_WEAK_FUNC(sub_825D1AE0);
PPC_FUNC_IMPL(__imp__sub_825D1AE0) {
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
	// bl 0x825d1b30
	ctx.lr = 0x825D1B00;
	sub_825D1B30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d1b10
	if (ctx.cr0.eq) goto loc_825D1B10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825D1B10;
	sub_82691540(ctx, base);
loc_825D1B10:
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

__attribute__((alias("__imp__sub_825D1B2C"))) PPC_WEAK_FUNC(sub_825D1B2C);
PPC_FUNC_IMPL(__imp__sub_825D1B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D1B30"))) PPC_WEAK_FUNC(sub_825D1B30);
PPC_FUNC_IMPL(__imp__sub_825D1B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825D1B38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-12592
	ctx.r11.s64 = ctx.r11.s64 + -12592;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825d1b88
	goto loc_825D1B88;
loc_825D1B58:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d1b7c
	if (ctx.cr6.eq) goto loc_825D1B7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D1B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825D1B7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82547d80
	ctx.lr = 0x825D1B88;
	sub_82547D80(ctx, base);
loc_825D1B88:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d1b58
	if (!ctx.cr6.eq) goto loc_825D1B58;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r11,r11,-25696
	ctx.r11.s64 = ctx.r11.s64 + -25696;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D1BA8"))) PPC_WEAK_FUNC(sub_825D1BA8);
PPC_FUNC_IMPL(__imp__sub_825D1BA8) {
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
	// li r3,4064
	ctx.r3.s64 = 4064;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82691500
	ctx.lr = 0x825D1BCC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d1c20
	if (ctx.cr0.eq) goto loc_825D1C20;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-3520
	ctx.r9.s64 = ctx.r9.s64 + -3520;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4020(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4020, ctx.r11.u32);
	// lfs f0,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,4044(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4044, temp.u32);
	// stw r11,4024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4024, ctx.r11.u32);
	// stw r11,4028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4028, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,4032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4032, ctx.r11.u32);
	// stw r11,4040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4040, ctx.r11.u32);
	// stw r8,4048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4048, ctx.r8.u32);
	// stw r11,4052(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4052, ctx.r11.u32);
	// stw r11,4056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4056, ctx.r11.u32);
	// b 0x825d1c24
	goto loc_825D1C24;
loc_825D1C20:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825D1C24:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82547c40
	ctx.lr = 0x825D1C2C;
	sub_82547C40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825D1C5C"))) PPC_WEAK_FUNC(sub_825D1C5C);
PPC_FUNC_IMPL(__imp__sub_825D1C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D1C60"))) PPC_WEAK_FUNC(sub_825D1C60);
PPC_FUNC_IMPL(__imp__sub_825D1C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825D1C68;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// b 0x825d1cb8
	goto loc_825D1CB8;
loc_825D1C8C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d1cb4
	if (ctx.cr6.eq) goto loc_825D1CB4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82633a18
	ctx.lr = 0x825D1CAC;
	sub_82633A18(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
loc_825D1CB4:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_825D1CB8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825d1c8c
	if (!ctx.cr6.eq) goto loc_825D1C8C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D1CCC"))) PPC_WEAK_FUNC(sub_825D1CCC);
PPC_FUNC_IMPL(__imp__sub_825D1CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D1CD0"))) PPC_WEAK_FUNC(sub_825D1CD0);
PPC_FUNC_IMPL(__imp__sub_825D1CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x825D1CD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d1f1c
	if (ctx.cr6.eq) goto loc_825D1F1C;
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d1f1c
	if (ctx.cr0.eq) goto loc_825D1F1C;
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r9,r9,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// clrlwi r29,r8,29
	ctx.r29.u64 = ctx.r8.u32 & 0x7;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663b10
	ctx.lr = 0x825D1D34;
	sub_82663B10(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663c30
	ctx.lr = 0x825D1D40;
	sub_82663C30(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663cc0
	ctx.lr = 0x825D1D4C;
	sub_82663CC0(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,10556(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10556);
	// rlwinm r8,r8,0,29,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r8,10556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10556, ctx.r8.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,10548(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwinm r8,r8,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r8,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r8.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r10,12312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12312, ctx.r10.u32);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,10548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82585ef0
	ctx.lr = 0x825D1DC8;
	sub_82585EF0(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,26816
	ctx.r11.s64 = ctx.r11.s64 + 26816;
	// mulli r10,r30,176
	ctx.r10.s64 = ctx.r30.s64 * 176;
	// addi r9,r11,160
	ctx.r9.s64 = ctx.r11.s64 + 160;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825d1df0
	if (ctx.cr6.eq) goto loc_825D1DF0;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825d1df8
	goto loc_825D1DF8;
loc_825D1DF0:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,27568
	ctx.r11.s64 = ctx.r11.s64 + 27568;
loc_825D1DF8:
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r9,48
	ctx.r9.s64 = 48;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// addi r26,r1,96
	ctx.r26.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r11,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v12,r11,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvx128 v11,r11,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmrghw v10,v0,v13
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrglw v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// li r7,1
	ctx.r7.s64 = 1;
	// vmrghw v13,v11,v12
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// li r6,3
	ctx.r6.s64 = 3;
	// vmrglw v12,v11,v12
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// rldicr r7,r7,62,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 62) & 0xFFFFFFFFFFFFFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// vmrghw v11,v10,v13
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrglw v13,v10,v13
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v10,v0,v12
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrglw v0,v0,v12
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// stvx128 v11,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x826682f8
	ctx.lr = 0x825D1E70;
	sub_826682F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8258a3f8
	ctx.lr = 0x825D1E78;
	sub_8258A3F8(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826631f0
	ctx.lr = 0x825D1E94;
	sub_826631F0(ctx, base);
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// b 0x825d1ea8
	goto loc_825D1EA8;
loc_825D1E9C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82633d60
	ctx.lr = 0x825D1EA4;
	sub_82633D60(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_825D1EA8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825d1e9c
	if (!ctx.cr6.eq) goto loc_825D1E9C;
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r12,1
	ctx.r12.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,10568(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// rlwimi r29,r8,0,0,28
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFF8) | (ctx.r29.u64 & 0xFFFFFFFF00000007);
	// stw r29,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r29.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r10,12292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12292, ctx.r10.u32);
	// lwz r11,10460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10460);
	// lwz r8,12816(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12816);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// rlwimi r10,r11,0,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// stw r10,10460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10460, ctx.r10.u32);
	// ld r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663ea0
	ctx.lr = 0x825D1F1C;
	sub_82663EA0(ctx, base);
loc_825D1F1C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D1F24"))) PPC_WEAK_FUNC(sub_825D1F24);
PPC_FUNC_IMPL(__imp__sub_825D1F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D1F28"))) PPC_WEAK_FUNC(sub_825D1F28);
PPC_FUNC_IMPL(__imp__sub_825D1F28) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-12456
	ctx.r11.s64 = ctx.r11.s64 + -12456;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r10,-12552
	ctx.r3.s64 = ctx.r10.s64 + -12552;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82547f38
	ctx.lr = 0x825D1F70;
	sub_82547F38(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12528
	ctx.r3.s64 = ctx.r11.s64 + -12528;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82547f38
	ctx.lr = 0x825D1F84;
	sub_82547F38(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12504
	ctx.r3.s64 = ctx.r11.s64 + -12504;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82547f38
	ctx.lr = 0x825D1F98;
	sub_82547F38(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12480
	ctx.r3.s64 = ctx.r11.s64 + -12480;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x825D1FAC;
	sub_82547F38(ctx, base);
	// lwz r31,2356(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2356);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825d1fc8
	goto loc_825D1FC8;
loc_825D1FB8:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// beq cr6,0x825d1fd0
	if (ctx.cr6.eq) goto loc_825D1FD0;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_825D1FC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d1fb8
	if (!ctx.cr6.eq) goto loc_825D1FB8;
loc_825D1FD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bne cr6,0x825d203c
	if (!ctx.cr6.eq) goto loc_825D203C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8263e060
	ctx.lr = 0x825D1FF8;
	sub_8263E060(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825d2008
	if (!ctx.cr0.eq) goto loc_825D2008;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825d2038
	goto loc_825D2038;
loc_825D2008:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d2020
	if (!ctx.cr6.eq) goto loc_825D2020;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x825d2034
	goto loc_825D2034;
loc_825D201C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825D2020:
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825d201c
	if (!ctx.cr6.eq) goto loc_825D201C;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_825D2034:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825D2038:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_825D203C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_825D2058"))) PPC_WEAK_FUNC(sub_825D2058);
PPC_FUNC_IMPL(__imp__sub_825D2058) {
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
	// bl 0x825d20a8
	ctx.lr = 0x825D2078;
	sub_825D20A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d2088
	if (ctx.cr0.eq) goto loc_825D2088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825D2088;
	sub_82691540(ctx, base);
loc_825D2088:
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

__attribute__((alias("__imp__sub_825D20A4"))) PPC_WEAK_FUNC(sub_825D20A4);
PPC_FUNC_IMPL(__imp__sub_825D20A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D20A8"))) PPC_WEAK_FUNC(sub_825D20A8);
PPC_FUNC_IMPL(__imp__sub_825D20A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825D20B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-12456
	ctx.r11.s64 = ctx.r11.s64 + -12456;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825d2100
	goto loc_825D2100;
loc_825D20D0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d20f4
	if (ctx.cr6.eq) goto loc_825D20F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D20F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825D20F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82547d80
	ctx.lr = 0x825D2100;
	sub_82547D80(ctx, base);
loc_825D2100:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d20d0
	if (!ctx.cr6.eq) goto loc_825D20D0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r11,r11,-25696
	ctx.r11.s64 = ctx.r11.s64 + -25696;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2124"))) PPC_WEAK_FUNC(sub_825D2124);
PPC_FUNC_IMPL(__imp__sub_825D2124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D2128"))) PPC_WEAK_FUNC(sub_825D2128);
PPC_FUNC_IMPL(__imp__sub_825D2128) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82691500
	ctx.lr = 0x825D214C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d217c
	if (ctx.cr0.eq) goto loc_825D217C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r10,r10,-3504
	ctx.r10.s64 = ctx.r10.s64 + -3504;
	// stb r9,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r9.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x825d2180
	goto loc_825D2180;
loc_825D217C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_825D2180:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82547c40
	ctx.lr = 0x825D2188;
	sub_82547C40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825D21B8"))) PPC_WEAK_FUNC(sub_825D21B8);
PPC_FUNC_IMPL(__imp__sub_825D21B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x825d21c4
	goto loc_825D21C4;
loc_825D21C0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_825D21C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d21c0
	if (!ctx.cr6.eq) goto loc_825D21C0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D21D0"))) PPC_WEAK_FUNC(sub_825D21D0);
PPC_FUNC_IMPL(__imp__sub_825D21D0) {
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
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// b 0x825d2200
	goto loc_825D2200;
loc_825D21F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x826347c8
	ctx.lr = 0x825D21FC;
	sub_826347C8(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_825D2200:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d21f0
	if (!ctx.cr6.eq) goto loc_825D21F0;
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

__attribute__((alias("__imp__sub_825D2220"))) PPC_WEAK_FUNC(sub_825D2220);
PPC_FUNC_IMPL(__imp__sub_825D2220) {
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
	// bl 0x825d2270
	ctx.lr = 0x825D2240;
	sub_825D2270(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d2250
	if (ctx.cr0.eq) goto loc_825D2250;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825D2250;
	sub_82691540(ctx, base);
loc_825D2250:
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

__attribute__((alias("__imp__sub_825D226C"))) PPC_WEAK_FUNC(sub_825D226C);
PPC_FUNC_IMPL(__imp__sub_825D226C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D2270"))) PPC_WEAK_FUNC(sub_825D2270);
PPC_FUNC_IMPL(__imp__sub_825D2270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825D2278;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-12396
	ctx.r11.s64 = ctx.r11.s64 + -12396;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825d22c8
	goto loc_825D22C8;
loc_825D2298:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d22bc
	if (ctx.cr6.eq) goto loc_825D22BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D22B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_825D22BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82547d80
	ctx.lr = 0x825D22C8;
	sub_82547D80(ctx, base);
loc_825D22C8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825d2298
	if (!ctx.cr6.eq) goto loc_825D2298;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d22e8
	if (ctx.cr6.eq) goto loc_825D22E8;
	// bl 0x825469e0
	ctx.lr = 0x825D22E4;
	sub_825469E0(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_825D22E8:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d22fc
	if (ctx.cr6.eq) goto loc_825D22FC;
	// bl 0x825469e0
	ctx.lr = 0x825D22F8;
	sub_825469E0(ctx, base);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_825D22FC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-25696
	ctx.r11.s64 = ctx.r11.s64 + -25696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2310"))) PPC_WEAK_FUNC(sub_825D2310);
PPC_FUNC_IMPL(__imp__sub_825D2310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x825D2318;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,136
	ctx.r3.s64 = 136;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82691500
	ctx.lr = 0x825D233C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x825d23fc
	if (ctx.cr0.eq) goto loc_825D23FC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r7,r10,-3488
	ctx.r7.s64 = ctx.r10.s64 + -3488;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r6,25
	ctx.r6.s64 = 1638400;
	// lfs f0,-2340(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// ori r9,r6,26125
	ctx.r9.u64 = ctx.r6.u64 | 26125;
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// stw r30,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r30.u32);
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lfs f13,-24756(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24756);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,21292(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21292);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// lfs f12,31396(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 31396);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// clrlwi r9,r11,9
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21292, ctx.r11.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r5,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r5.u8);
	// oris r9,r9,16256
	ctx.r9.u64 = ctx.r9.u64 | 1065353216;
	// addi r11,r3,124
	ctx.r11.s64 = ctx.r3.s64 + 124;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r30,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r30.u32);
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// stw r30,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r30.u32);
	// b 0x825d2400
	goto loc_825D2400;
loc_825D23FC:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_825D2400:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// bl 0x82547c40
	ctx.lr = 0x825D2418;
	sub_82547C40(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x825d2440
	goto loc_825D2440;
loc_825D2420:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x825d243c
	if (!ctx.cr6.eq) goto loc_825D243C;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x825d244c
	if (ctx.cr6.eq) goto loc_825D244C;
loc_825D243C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_825D2440:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d2420
	if (!ctx.cr6.eq) goto loc_825D2420;
	// b 0x825d2450
	goto loc_825D2450;
loc_825D244C:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_825D2450:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// beq cr6,0x825d246c
	if (ctx.cr6.eq) goto loc_825D246C;
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
loc_825D246C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2478"))) PPC_WEAK_FUNC(sub_825D2478);
PPC_FUNC_IMPL(__imp__sub_825D2478) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x825d24e0
	if (ctx.cr6.eq) goto loc_825D24E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fsubs f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// b 0x825d24d8
	goto loc_825D24D8;
loc_825D24B8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82634a90
	ctx.lr = 0x825D24C4;
	sub_82634A90(ctx, base);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_825D24D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825d24b8
	if (!ctx.cr6.eq) goto loc_825D24B8;
loc_825D24E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D24FC"))) PPC_WEAK_FUNC(sub_825D24FC);
PPC_FUNC_IMPL(__imp__sub_825D24FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D2500"))) PPC_WEAK_FUNC(sub_825D2500);
PPC_FUNC_IMPL(__imp__sub_825D2500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825D2508;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d2720
	if (ctx.cr6.eq) goto loc_825D2720;
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d2720
	if (ctx.cr0.eq) goto loc_825D2720;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d2720
	if (ctx.cr6.eq) goto loc_825D2720;
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r9,r9,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// clrlwi r28,r8,29
	ctx.r28.u64 = ctx.r8.u32 & 0x7;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663b10
	ctx.lr = 0x825D2570;
	sub_82663B10(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r7,12308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12308, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r8,12832(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12832);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 & ctx.r7.u64;
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,10548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10548(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r9,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663ba0
	ctx.lr = 0x825D25D8;
	sub_82663BA0(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663c30
	ctx.lr = 0x825D25E4;
	sub_82663C30(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663cc0
	ctx.lr = 0x825D25F0;
	sub_82663CC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663ea0
	ctx.lr = 0x825D25FC;
	sub_82663EA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663d50
	ctx.lr = 0x825D2608;
	sub_82663D50(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663dc0
	ctx.lr = 0x825D2614;
	sub_82663DC0(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663e30
	ctx.lr = 0x825D2620;
	sub_82663E30(ctx, base);
	// lis r4,20735
	ctx.r4.s64 = 1358888960;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663fd0
	ctx.lr = 0x825D2630;
	sub_82663FD0(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lis r27,-31956
	ctx.r27.s64 = -2094268416;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,1152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwinm r9,r9,0,22,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE3FF;
	// stw r9,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r9.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// addi r10,r27,-3808
	ctx.r10.s64 = ctx.r27.s64 + -3808;
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,1176(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1176);
	// rlwimi r8,r7,11,19,21
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 11) & 0x1C00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r8,1176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1176, ctx.r8.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// std r11,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// lwz r4,176(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82668790
	ctx.lr = 0x825D2684;
	sub_82668790(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// addi r10,r10,8072
	ctx.r10.s64 = ctx.r10.s64 + 8072;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,140(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// stw r10,12240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12240, ctx.r10.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lwz r4,-3808(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3808);
	// bl 0x82668b38
	ctx.lr = 0x825D26B4;
	sub_82668B38(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82585ef0
	ctx.lr = 0x825D26C4;
	sub_82585EF0(ctx, base);
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x825d26ec
	goto loc_825D26EC;
loc_825D26CC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d26e8
	if (ctx.cr0.eq) goto loc_825D26E8;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82634da0
	ctx.lr = 0x825D26E8;
	sub_82634DA0(ctx, base);
loc_825D26E8:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_825D26EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825d26cc
	if (!ctx.cr6.eq) goto loc_825D26CC;
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// rlwimi r9,r28,0,29,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663ea0
	ctx.lr = 0x825D2720;
	sub_82663EA0(ctx, base);
loc_825D2720:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2728"))) PPC_WEAK_FUNC(sub_825D2728);
PPC_FUNC_IMPL(__imp__sub_825D2728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x825D2730;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// bl 0x82a75988
	ctx.lr = 0x825D2758;
	sub_82A75988(ctx, base);
	// lwz r8,8(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// ble cr6,0x825d27c0
	if (!ctx.cr6.gt) goto loc_825D27C0;
loc_825D2770:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x825d27ac
	if (!ctx.cr6.lt) goto loc_825D27AC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
loc_825D2780:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x825d279c
	if (!ctx.cr6.eq) goto loc_825D279C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x825d2780
	if (ctx.cr6.lt) goto loc_825D2780;
loc_825D279C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x825d27ac
	if (!ctx.cr6.lt) goto loc_825D27AC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r24
	PPC_STORE_U32(ctx.r8.u32 + ctx.r24.u32, ctx.r9.u32);
loc_825D27AC:
	// lwz r8,8(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x825d2770
	if (ctx.cr6.lt) goto loc_825D2770;
loc_825D27C0:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r31,r11,5260
	ctx.r31.s64 = ctx.r11.s64 + 5260;
	// lis r8,11552
	ctx.r8.s64 = 757071872;
	// lwz r11,5260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5260);
	// ori r25,r8,406
	ctx.r25.u64 = ctx.r8.u64 | 406;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// bne cr6,0x825d285c
	if (!ctx.cr6.eq) goto loc_825D285C;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825d2814
	if (ctx.cr6.eq) goto loc_825D2814;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825d280c
	if (ctx.cr6.eq) goto loc_825D280C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x825d2818
	goto loc_825D2818;
loc_825D280C:
	// li r4,512
	ctx.r4.s64 = 512;
	// b 0x825d2818
	goto loc_825D2818;
loc_825D2814:
	// li r4,768
	ctx.r4.s64 = 768;
loc_825D2818:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825d2838
	if (ctx.cr6.eq) goto loc_825D2838;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825d2830
	if (ctx.cr6.eq) goto loc_825D2830;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x825d283c
	goto loc_825D283C;
loc_825D2830:
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x825d283c
	goto loc_825D283C;
loc_825D2838:
	// li r3,768
	ctx.r3.s64 = 768;
loc_825D283C:
	// li r10,19
	ctx.r10.s64 = 19;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82662e30
	ctx.lr = 0x825D2858;
	sub_82662E30(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_825D285C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d28dc
	if (!ctx.cr6.eq) goto loc_825D28DC;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x825d28dc
	if (!ctx.cr6.gt) goto loc_825D28DC;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825d2894
	if (ctx.cr6.eq) goto loc_825D2894;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825d288c
	if (ctx.cr6.eq) goto loc_825D288C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x825d2898
	goto loc_825D2898;
loc_825D288C:
	// li r4,512
	ctx.r4.s64 = 512;
	// b 0x825d2898
	goto loc_825D2898;
loc_825D2894:
	// li r4,768
	ctx.r4.s64 = 768;
loc_825D2898:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825d28b8
	if (ctx.cr6.eq) goto loc_825D28B8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825d28b0
	if (ctx.cr6.eq) goto loc_825D28B0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x825d28bc
	goto loc_825D28BC;
loc_825D28B0:
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x825d28bc
	goto loc_825D28BC;
loc_825D28B8:
	// li r3,768
	ctx.r3.s64 = 768;
loc_825D28BC:
	// li r10,19
	ctx.r10.s64 = 19;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82662e30
	ctx.lr = 0x825D28D8;
	sub_82662E30(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_825D28DC:
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// lwz r11,5268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d291c
	if (!ctx.cr6.eq) goto loc_825D291C;
	// lis r8,11552
	ctx.r8.s64 = 757071872;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,409
	ctx.r8.u64 = ctx.r8.u64 | 409;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82662e30
	ctx.lr = 0x825D2914;
	sub_82662E30(ctx, base);
	// stw r3,5268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5268, ctx.r3.u32);
	// bl 0x825d2d80
	ctx.lr = 0x825D291C;
	sub_825D2D80(ctx, base);
loc_825D291C:
	// lis r30,-31956
	ctx.r30.s64 = -2094268416;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// addi r31,r11,-22432
	ctx.r31.s64 = ctx.r11.s64 + -22432;
	// ori r26,r10,390
	ctx.r26.u64 = ctx.r10.u64 | 390;
	// lwz r11,5272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d2960
	if (!ctx.cr6.eq) goto loc_825D2960;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x825d2960
	if (ctx.cr6.eq) goto loc_825D2960;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82662f50
	ctx.lr = 0x825D295C;
	sub_82662F50(ctx, base);
	// stw r3,5272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5272, ctx.r3.u32);
loc_825D2960:
	// lis r27,-31956
	ctx.r27.s64 = -2094268416;
	// lwz r11,5276(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d2a00
	if (!ctx.cr6.eq) goto loc_825D2A00;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x825d2a00
	if (ctx.cr6.eq) goto loc_825D2A00;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// li r28,80
	ctx.r28.s64 = 80;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r29,5120
	ctx.r29.s64 = 5120;
	// addi r11,r3,79
	ctx.r11.s64 = ctx.r3.s64 + 79;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r4,15
	ctx.r9.s64 = ctx.r4.s64 + 15;
	// divwu r11,r11,r28
	ctx.r11.u32 = ctx.r11.u32 / ctx.r28.u32;
	// rlwinm r9,r9,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// mulli r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 * 80;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,6690
	ctx.r5.s64 = 438435840;
	// divwu r11,r11,r29
	ctx.r11.u32 = ctx.r11.u32 / ctx.r29.u32;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// ori r5,r5,407
	ctx.r5.u64 = ctx.r5.u64 | 407;
	// bl 0x82662f50
	ctx.lr = 0x825D29C8;
	sub_82662F50(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r10,r11,79
	ctx.r10.s64 = ctx.r11.s64 + 79;
	// stw r3,5276(r27)
	PPC_STORE_U32(ctx.r27.u32 + 5276, ctx.r3.u32);
	// addi r9,r4,15
	ctx.r9.s64 = ctx.r4.s64 + 15;
	// divwu r10,r10,r28
	ctx.r10.u32 = ctx.r10.u32 / ctx.r28.u32;
	// rlwinm r9,r9,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// mulli r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 * 80;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r10,r10,r29
	ctx.r10.u32 = ctx.r10.u32 / ctx.r29.u32;
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x825d2a08
	goto loc_825D2A08;
loc_825D2A00:
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
loc_825D2A08:
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// lwz r10,5280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5280);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825d2a44
	if (!ctx.cr6.eq) goto loc_825D2A44;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x825d2a44
	if (ctx.cr6.eq) goto loc_825D2A44;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82662e30
	ctx.lr = 0x825D2A40;
	sub_82662E30(ctx, base);
	// stw r3,5280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5280, ctx.r3.u32);
loc_825D2A44:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825d2a68
	if (ctx.cr6.eq) goto loc_825D2A68;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825d2a60
	if (ctx.cr6.eq) goto loc_825D2A60;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x825d2a6c
	goto loc_825D2A6C;
loc_825D2A60:
	// li r4,512
	ctx.r4.s64 = 512;
	// b 0x825d2a6c
	goto loc_825D2A6C;
loc_825D2A68:
	// li r4,768
	ctx.r4.s64 = 768;
loc_825D2A6C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825d2a8c
	if (ctx.cr6.eq) goto loc_825D2A8C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825d2a84
	if (ctx.cr6.eq) goto loc_825D2A84;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x825d2a90
	goto loc_825D2A90;
loc_825D2A84:
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x825d2a90
	goto loc_825D2A90;
loc_825D2A8C:
	// li r3,768
	ctx.r3.s64 = 768;
loc_825D2A90:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82662f50
	ctx.lr = 0x825D2AA0;
	sub_82662F50(ctx, base);
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// stw r3,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r3.u32);
	// lwz r11,5284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d2ad8
	if (!ctx.cr6.eq) goto loc_825D2AD8;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x825d2ad8
	if (ctx.cr6.eq) goto loc_825D2AD8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,480
	ctx.r4.s64 = 480;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x82662f50
	ctx.lr = 0x825D2AD4;
	sub_82662F50(ctx, base);
	// stw r3,5284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5284, ctx.r3.u32);
loc_825D2AD8:
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// lwz r11,5288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d2b1c
	if (!ctx.cr6.eq) goto loc_825D2B1C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x825d2b1c
	if (ctx.cr6.eq) goto loc_825D2B1C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r5,6690
	ctx.r5.s64 = 438435840;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r5,r5,407
	ctx.r5.u64 = ctx.r5.u64 | 407;
	// li r4,480
	ctx.r4.s64 = 480;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x82662f50
	ctx.lr = 0x825D2B18;
	sub_82662F50(ctx, base);
	// stw r3,5288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5288, ctx.r3.u32);
loc_825D2B1C:
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// lwz r11,5292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d2b5c
	if (!ctx.cr6.eq) goto loc_825D2B5C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x825d2b5c
	if (ctx.cr6.eq) goto loc_825D2B5C;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,480
	ctx.r4.s64 = 480;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x82662e30
	ctx.lr = 0x825D2B58;
	sub_82662E30(ctx, base);
	// stw r3,5292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5292, ctx.r3.u32);
loc_825D2B5C:
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,5296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5296);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5296, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2B78"))) PPC_WEAK_FUNC(sub_825D2B78);
PPC_FUNC_IMPL(__imp__sub_825D2B78) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d2ba4
	if (ctx.cr6.eq) goto loc_825D2BA4;
	// bl 0x8266eed8
	ctx.lr = 0x825D2B9C;
	sub_8266EED8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_825D2BA4:
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lwz r11,5296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5296);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,5296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5296, ctx.r11.u32);
	// bne 0x825d2cac
	if (!ctx.cr0.eq) goto loc_825D2CAC;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,5260
	ctx.r31.s64 = ctx.r11.s64 + 5260;
	// lwz r3,5260(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d2bd8
	if (ctx.cr6.eq) goto loc_825D2BD8;
	// bl 0x8266eed8
	ctx.lr = 0x825D2BD0;
	sub_8266EED8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_825D2BD8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d2bf0
	if (ctx.cr6.eq) goto loc_825D2BF0;
	// bl 0x8266eed8
	ctx.lr = 0x825D2BE8;
	sub_8266EED8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_825D2BF0:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,5268
	ctx.r3.s64 = ctx.r11.s64 + 5268;
	// lwz r11,5268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d2c08
	if (ctx.cr6.eq) goto loc_825D2C08;
	// bl 0x82586c10
	ctx.lr = 0x825D2C08;
	sub_82586C10(ctx, base);
loc_825D2C08:
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// lwz r3,5272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d2c24
	if (ctx.cr6.eq) goto loc_825D2C24;
	// bl 0x8266eed8
	ctx.lr = 0x825D2C1C;
	sub_8266EED8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5272, ctx.r11.u32);
loc_825D2C24:
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// lwz r3,5276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d2c40
	if (ctx.cr6.eq) goto loc_825D2C40;
	// bl 0x8266eed8
	ctx.lr = 0x825D2C38;
	sub_8266EED8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5276, ctx.r11.u32);
loc_825D2C40:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,5280
	ctx.r3.s64 = ctx.r11.s64 + 5280;
	// lwz r11,5280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d2c58
	if (ctx.cr6.eq) goto loc_825D2C58;
	// bl 0x82586c10
	ctx.lr = 0x825D2C58;
	sub_82586C10(ctx, base);
loc_825D2C58:
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// lwz r3,5284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d2c74
	if (ctx.cr6.eq) goto loc_825D2C74;
	// bl 0x8266eed8
	ctx.lr = 0x825D2C6C;
	sub_8266EED8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5284, ctx.r11.u32);
loc_825D2C74:
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// lwz r3,5288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d2c90
	if (ctx.cr6.eq) goto loc_825D2C90;
	// bl 0x8266eed8
	ctx.lr = 0x825D2C88;
	sub_8266EED8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5288, ctx.r11.u32);
loc_825D2C90:
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// lwz r3,5292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5292);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d2cac
	if (ctx.cr6.eq) goto loc_825D2CAC;
	// bl 0x8266eed8
	ctx.lr = 0x825D2CA4;
	sub_8266EED8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5292, ctx.r11.u32);
loc_825D2CAC:
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

__attribute__((alias("__imp__sub_825D2CC0"))) PPC_WEAK_FUNC(sub_825D2CC0);
PPC_FUNC_IMPL(__imp__sub_825D2CC0) {
	PPC_FUNC_PROLOGUE();
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x825d2cf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_825D2CF4;
	// bdzf 4*cr6+eq,0x825d2ce4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_825D2CE4;
	// bdzf 4*cr6+eq,0x825d2cf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_825D2CF4;
	// bdzf 4*cr6+eq,0x825d2d04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_825D2D04;
	// bdzf 4*cr6+eq,0x825d2d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_825D2D10;
	// bdzf 4*cr6+eq,0x825d2d1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_825D2D1C;
	// bne cr6,0x825d2d28
	if (!ctx.cr6.eq) goto loc_825D2D28;
loc_825D2CE4:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,-22432
	ctx.r11.s64 = ctx.r11.s64 + -22432;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
loc_825D2CF4:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,-22432
	ctx.r11.s64 = ctx.r11.s64 + -22432;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// blr 
	return;
loc_825D2D04:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lwz r3,5272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5272);
	// blr 
	return;
loc_825D2D10:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lwz r3,5276(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5276);
	// blr 
	return;
loc_825D2D1C:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lwz r3,5284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5284);
	// blr 
	return;
loc_825D2D28:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lwz r3,5288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5288);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2D34"))) PPC_WEAK_FUNC(sub_825D2D34);
PPC_FUNC_IMPL(__imp__sub_825D2D34) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2D3C"))) PPC_WEAK_FUNC(sub_825D2D3C);
PPC_FUNC_IMPL(__imp__sub_825D2D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D2D40"))) PPC_WEAK_FUNC(sub_825D2D40);
PPC_FUNC_IMPL(__imp__sub_825D2D40) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x825d2d74
	if (ctx.cr6.lt) goto loc_825D2D74;
	// beq cr6,0x825d2d68
	if (ctx.cr6.eq) goto loc_825D2D68;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x825d2d5c
	if (ctx.cr6.lt) goto loc_825D2D5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825D2D5C:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lwz r3,5292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5292);
	// blr 
	return;
loc_825D2D68:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lwz r3,5268(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5268);
	// blr 
	return;
loc_825D2D74:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lwz r3,5280(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5280);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2D80"))) PPC_WEAK_FUNC(sub_825D2D80);
PPC_FUNC_IMPL(__imp__sub_825D2D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825D2D88;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82fa8d20
	ctx.lr = 0x825D2D90;
	__savefpr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82547c40
	ctx.lr = 0x825D2D9C;
	sub_82547C40(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r9,r11,21836
	ctx.r9.s64 = ctx.r11.s64 + 21836;
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lfs f27,21836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21836);
	ctx.f27.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f28,-36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -36);
	ctx.f28.f64 = double(temp.f32);
	// li r30,1024
	ctx.r30.s64 = 1024;
	// lfs f29,456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 456);
	ctx.f29.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,31512(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 31512);
	ctx.f30.f64 = double(temp.f32);
	// lis r29,-31958
	ctx.r29.s64 = -2094399488;
	// lfs f31,-24756(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24756);
	ctx.f31.f64 = double(temp.f32);
loc_825D2DD8:
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// lwz r11,21292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21292);
	// ori r10,r10,26125
	ctx.r10.u64 = ctx.r10.u64 | 26125;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// clrlwi r10,r11,9
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21292, ctx.r11.u32);
	// oris r11,r10,16256
	ctx.r11.u64 = ctx.r10.u64 | 1065353216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fmsubs f26,f0,f28,f27
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 - ctx.f27.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82fa28d0
	ctx.lr = 0x825D2E14;
	sub_82FA28D0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fmuls f26,f0,f30
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x82fa29b0
	ctx.lr = 0x825D2E28;
	sub_82FA29B0(ctx, base);
	// fmuls f0,f26,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f29.f64));
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lhz r11,102(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// fadds f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lhz r10,102(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// sthu r11,2(r31)
	ea = 2 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r31.u32 = ea;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bne 0x825d2dd8
	if (!ctx.cr0.eq) goto loc_825D2DD8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r3,5268(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5268);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82af2cc8
	ctx.lr = 0x825D2E98;
	sub_82AF2CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82662418
	ctx.lr = 0x825D2EBC;
	sub_82662418(ctx, base);
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r8,128
	ctx.r8.s64 = 128;
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// divwu r4,r11,r10
	ctx.r4.u32 = ctx.r11.u32 / ctx.r10.u32;
	// bl 0x82af5080
	ctx.lr = 0x825D2EE4;
	sub_82AF5080(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x8266ebe8
	ctx.lr = 0x825D2EFC;
	sub_8266EBE8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82547d80
	ctx.lr = 0x825D2F04;
	sub_82547D80(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82fa8d6c
	ctx.lr = 0x825D2F10;
	__restfpr_26(ctx, base);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2F14"))) PPC_WEAK_FUNC(sub_825D2F14);
PPC_FUNC_IMPL(__imp__sub_825D2F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D2F18"))) PPC_WEAK_FUNC(sub_825D2F18);
PPC_FUNC_IMPL(__imp__sub_825D2F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x825D2F20;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82fa8cf0
	ctx.lr = 0x825D2F28;
	__savefpr_14(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,2356(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2356);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x825d3a24
	if (ctx.cr6.eq) goto loc_825D3A24;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d3a24
	if (ctx.cr6.eq) goto loc_825D3A24;
	// addi r11,r4,253
	ctx.r11.s64 = ctx.r4.s64 + 253;
	// lwz r10,424(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825d3a24
	if (!ctx.cr6.eq) goto loc_825D3A24;
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82668e90
	ctx.lr = 0x825D2F7C;
	sub_82668E90(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// mulli r9,r29,176
	ctx.r9.s64 = ctx.r29.s64 * 176;
	// addi r11,r11,26816
	ctx.r11.s64 = ctx.r11.s64 + 26816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r8,r11,160
	ctx.r8.s64 = ctx.r11.s64 + 160;
	// addi r7,r10,27568
	ctx.r7.s64 = ctx.r10.s64 + 27568;
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x825d2fac
	if (ctx.cr6.eq) goto loc_825D2FAC;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x825d2fb0
	goto loc_825D2FB0;
loc_825D2FAC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_825D2FB0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bne cr6,0x825d2fc0
	if (!ctx.cr6.eq) goto loc_825D2FC0;
	// addi r11,r7,64
	ctx.r11.s64 = ctx.r7.s64 + 64;
loc_825D2FC0:
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f11,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f6,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f5,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f28,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f1,f13,f6
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f31,f13,f11
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f2,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f29,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f30,f4,f2
	ctx.f30.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// lfs f27,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f9,f4,f28,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f28.f64 + ctx.f9.f64));
	// lfs f23,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f23.f64 = double(temp.f32);
	// fmadds f10,f28,f3,f10
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f3.f64 + ctx.f10.f64));
	// lfs f24,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f7,f27,f3,f7
	ctx.f7.f64 = double(float(ctx.f27.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f25,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f8,f29,f3,f8
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f3.f64 + ctx.f8.f64));
	// lfs f26,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f0,f2,f3,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64));
	// lfs f3,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f1,f4,f29,f1
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f1.f64));
	// lfs f22,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f19,f3,f12
	ctx.f19.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f20,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f14,f3,f5
	ctx.f14.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f18,f20,f26
	ctx.f18.f64 = double(float(ctx.f20.f64 * ctx.f26.f64));
	// stfs f2,148(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f22,128(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f16,f3,f11
	ctx.f16.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmadds f9,f24,f23,f9
	ctx.f9.f64 = double(float(ctx.f24.f64 * ctx.f23.f64 + ctx.f9.f64));
	// lfs f15,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f15.f64 = double(temp.f32);
	// fmadds f10,f23,f25,f10
	ctx.f10.f64 = double(float(ctx.f23.f64 * ctx.f25.f64 + ctx.f10.f64));
	// lfs f2,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f7,f22,f25,f7
	ctx.f7.f64 = double(float(ctx.f22.f64 * ctx.f25.f64 + ctx.f7.f64));
	// lfs f22,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f8,f26,f25,f8
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f25.f64 + ctx.f8.f64));
	// stfs f5,132(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f0,f21,f25,f0
	ctx.f0.f64 = double(float(ctx.f21.f64 * ctx.f25.f64 + ctx.f0.f64));
	// stfs f23,152(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f1,f24,f26,f1
	ctx.f1.f64 = double(float(ctx.f24.f64 * ctx.f26.f64 + ctx.f1.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f14,124(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f4,f4,f27,f31
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f27.f64 + ctx.f31.f64));
	// lfs f17,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f17.f64 = double(temp.f32);
	// fmadds f19,f22,f28,f19
	ctx.f19.f64 = double(float(ctx.f22.f64 * ctx.f28.f64 + ctx.f19.f64));
	// lfs f5,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f3,f3,f6,f18
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f18.f64));
	// lfs f1,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f30,f15,f5,f30
	ctx.f30.f64 = double(float(ctx.f15.f64 * ctx.f5.f64 + ctx.f30.f64));
	// lfs f23,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f23.f64 = double(temp.f32);
	// lfs f14,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f14.f64 = double(temp.f32);
	// fmadds f10,f2,f17,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f17.f64 + ctx.f10.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f13,f15,f2,f9
	ctx.f13.f64 = double(float(ctx.f15.f64 * ctx.f2.f64 + ctx.f9.f64));
	// stfs f21,108(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f9,f23,f17,f8
	ctx.f9.f64 = double(float(ctx.f23.f64 * ctx.f17.f64 + ctx.f8.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f0,f5,f17,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f17.f64 + ctx.f0.f64));
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f12,f14,f17,f7
	ctx.f12.f64 = double(float(ctx.f14.f64 * ctx.f17.f64 + ctx.f7.f64));
	// lfs f25,2088(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2088);
	ctx.f25.f64 = double(temp.f32);
	// lfs f21,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f21.f64 = double(temp.f32);
	// lfs f31,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f28,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f20,112(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f26,116(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stfs f25,96(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f8,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f11,f22,f27,f16
	ctx.f11.f64 = double(float(ctx.f22.f64 * ctx.f27.f64 + ctx.f16.f64));
	// addi r9,r11,11804
	ctx.r9.s64 = ctx.r11.s64 + 11804;
	// stfs f9,196(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f21,124(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f9,f20
	ctx.f9.f64 = ctx.f20.f64;
	// lfs f21,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f21.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f29,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f7,f1,f21
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f21.f64));
	// lfs f26,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f30,f29,f21,f30
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f21.f64 + ctx.f30.f64));
	// lfs f25,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f8,f22,f26,f8
	ctx.f8.f64 = double(float(ctx.f22.f64 * ctx.f26.f64 + ctx.f8.f64));
	// lfs f18,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f18.f64 = double(temp.f32);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lfs f29,-2568(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2568);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f4,f24,f18,f4
	ctx.f4.f64 = double(float(ctx.f24.f64 * ctx.f18.f64 + ctx.f4.f64));
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmuls f0,f31,f25
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f25.f64));
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmuls f12,f1,f6
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// stfs f29,128(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f19,f9,f25,f19
	ctx.f19.f64 = double(float(ctx.f9.f64 * ctx.f25.f64 + ctx.f19.f64));
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stfs f10,192(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmuls f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmadds f3,f29,f23,f3
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f23.f64 + ctx.f3.f64));
	// lfs f17,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f17.f64 = double(temp.f32);
	// stfs f17,104(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f17,f9,f18,f11
	ctx.f17.f64 = double(float(ctx.f9.f64 * ctx.f18.f64 + ctx.f11.f64));
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lfs f20,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f9,f9,f11,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f8.f64));
	// lfs f16,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f16.f64 = double(temp.f32);
	// addi r30,r10,27984
	ctx.r30.s64 = ctx.r10.s64 + 27984;
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f1,f1,f20,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f20.f64 + ctx.f0.f64));
	// fmadds f11,f24,f11,f30
	ctx.f11.f64 = double(float(ctx.f24.f64 * ctx.f11.f64 + ctx.f30.f64));
	// lfs f24,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f0,f28,f16,f12
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f16.f64 + ctx.f12.f64));
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stfs f27,112(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f4,f15,f14,f4
	ctx.f4.f64 = double(float(ctx.f15.f64 * ctx.f14.f64 + ctx.f4.f64));
	// fmadds f12,f28,f27,f10
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f27.f64 + ctx.f10.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f27,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f10,f28,f26,f7
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f26.f64 + ctx.f7.f64));
	// fmadds f9,f22,f16,f3
	ctx.f9.f64 = double(float(ctx.f22.f64 * ctx.f16.f64 + ctx.f3.f64));
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f27,f15,f23,f27
	ctx.f27.f64 = double(float(ctx.f15.f64 * ctx.f23.f64 + ctx.f27.f64));
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f22,f21,f20
	ctx.f22.f64 = double(float(ctx.f21.f64 * ctx.f20.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f10,f29,f2,f19
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f2.f64 + ctx.f19.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f8,f29,f14,f17
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f14.f64 + ctx.f17.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f7,f29,f5,f3
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f5.f64 + ctx.f3.f64));
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f26,132(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f27,212(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmuls f27,f21,f6
	ctx.f27.f64 = double(float(ctx.f21.f64 * ctx.f6.f64));
	// lfs f31,-24756(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24756);
	ctx.f31.f64 = double(temp.f32);
	// lfs f26,460(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	ctx.f26.f64 = double(temp.f32);
	// lfs f15,472(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	ctx.f15.f64 = double(temp.f32);
	// lfs f12,3360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3360);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,31512(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,7408(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7408);
	ctx.f29.f64 = double(temp.f32);
	// stfs f4,216(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lfs f17,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f21,f21,f13
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f13.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// ori r7,r7,49152
	ctx.r7.u64 = ctx.r7.u64 | 49152;
	// fmadds f6,f3,f2,f1
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f1.f64));
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// li r6,6
	ctx.r6.s64 = 6;
	// lfs f1,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stfs f26,96(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f1,f4,f2,f1
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f1.f64));
	// lfs f26,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f26.f64 = double(temp.f32);
	// li r4,192
	ctx.r4.s64 = 192;
	// lfs f20,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f26,f4,f18,f26
	ctx.f26.f64 = double(float(ctx.f4.f64 * ctx.f18.f64 + ctx.f26.f64));
	// lfs f19,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f19,f4,f20,f19
	ctx.f19.f64 = double(float(ctx.f4.f64 * ctx.f20.f64 + ctx.f19.f64));
	// stfs f12,320(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4716(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4716);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f6,f28,f17,f6
	ctx.f6.f64 = double(float(ctx.f28.f64 * ctx.f17.f64 + ctx.f6.f64));
	// stfs f18,280(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// lfs f30,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// stfs f25,272(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fmadds f5,f3,f23,f1
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f23.f64 + ctx.f1.f64));
	// stfs f2,276(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f20,284(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// fmadds f4,f3,f14,f26
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f14.f64 + ctx.f26.f64));
	// lfs f26,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f26.f64 = double(temp.f32);
	// stfs f13,304(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f13,308(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f3,f3,f1,f19
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f19.f64));
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f28,f1,f17,f22
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f17.f64 + ctx.f22.f64));
	// stfs f13,312(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// fmadds f27,f1,f16,f27
	ctx.f27.f64 = double(float(ctx.f1.f64 * ctx.f16.f64 + ctx.f27.f64));
	// stfs f12,356(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// fmadds f1,f1,f26,f21
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f26.f64 + ctx.f21.f64));
	// lfs f13,372(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-27104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27104);
	ctx.f12.f64 = double(temp.f32);
	// fmr f17,f15
	ctx.f17.f64 = ctx.f15.f64;
	// lfs f26,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f26.f64 = double(temp.f32);
	// lfs f23,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f21.f64 = double(temp.f32);
	// lfs f19,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f19.f64 = double(temp.f32);
	// stfs f11,220(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fnmadds f28,f20,f25,f28
	ctx.f28.f64 = double(float(-(ctx.f20.f64 * ctx.f25.f64 + ctx.f28.f64)));
	// lfs f25,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f25.f64 = double(temp.f32);
	// fnmadds f27,f20,f2,f27
	ctx.f27.f64 = double(float(-(ctx.f20.f64 * ctx.f2.f64 + ctx.f27.f64)));
	// lfs f2,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f2.f64 = double(temp.f32);
	// fnmadds f1,f20,f18,f1
	ctx.f1.f64 = double(float(-(ctx.f20.f64 * ctx.f18.f64 + ctx.f1.f64)));
	// lfs f18,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f18.f64 = double(temp.f32);
	// lfs f20,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f20.f64 = double(temp.f32);
	// stfs f10,224(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f9,228(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f15,88(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,232(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f24,256(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f7,236(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f30,288(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f31,292(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f30,296(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f30,300(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f6,240(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f5,244(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f4,248(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f3,252(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f31,316(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stfs f29,324(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f18,328(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f31,332(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f0,340(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f0,344(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f31,348(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stfs f15,352(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f2,360(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stfs f31,364(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stfs f0,368(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f0,372(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f0,376(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stfs f31,380(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// stfs f13,384(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stfs f12,388(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stfs f13,392(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stfs f12,396(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// stfs f28,400(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stfs f27,404(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f1,408(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stfs f24,412(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// stfs f26,416(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f23,420(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stfs f22,424(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f25,428(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stfs f21,432(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f20,436(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f19,440(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stfs f11,444(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// stfs f10,448(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stfs f9,452(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// stfs f8,456(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// stfs f7,460(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// stfs f6,464(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// stfs f5,468(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// stfs f4,472(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stfs f3,476(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// bl 0x826682f8
	ctx.lr = 0x825D3408;
	sub_826682F8(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// ori r7,r7,57344
	ctx.r7.u64 = ctx.r7.u64 | 57344;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// li r4,192
	ctx.r4.s64 = 192;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x826683d0
	ctx.lr = 0x825D3424;
	sub_826683D0(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,7
	ctx.r10.s64 = 7;
	// rldicr r28,r9,37,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,10548(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r5,12284(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12284);
	// rlwinm r25,r6,30,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x1;
	// rlwinm r24,r5,1,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// lwz r9,10548(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r7,12280(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12280);
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lwz r3,10568(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// lwz r27,12292(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12292);
	// clrlwi r26,r7,27
	ctx.r26.u64 = ctx.r7.u32 & 0x1F;
	// stw r9,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r9.u32);
	// clrlwi r22,r3,29
	ctx.r22.u64 = ctx.r3.u32 & 0x7;
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r11.u64);
	// rlwinm r23,r7,24,27,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0x1F;
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r10,12292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12292, ctx.r10.u32);
	// lwz r11,10460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10460);
	// lwz r8,12816(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12816);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// rlwimi r10,r11,0,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// stw r10,10460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10460, ctx.r10.u32);
	// ld r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663b10
	ctx.lr = 0x825D34B8;
	sub_82663B10(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lfs f0,1868(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1868);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,10568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r9,r9,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82664678
	ctx.lr = 0x825D34EC;
	sub_82664678(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r9,-22432
	ctx.r29.s64 = ctx.r9.s64 + -22432;
	// lwz r9,1224(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r9,r30,11,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 11) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// stw r9,1224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1224, ctx.r9.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// addi r5,r29,328
	ctx.r5.s64 = ctx.r29.s64 + 328;
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,1224(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
	// rlwimi r9,r30,14,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 14) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r9,1224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1224, ctx.r9.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,1248(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1248);
	// rlwimi r9,r30,11,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 11) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r9,1248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1248, ctx.r9.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,1248(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1248);
	// rlwimi r9,r30,14,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 14) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r9,1248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1248, ctx.r9.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,1272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1272);
	// rlwimi r9,r30,11,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 11) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r9,1272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1272, ctx.r9.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,1272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1272);
	// rlwimi r9,r30,14,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 14) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r9,1272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1272, ctx.r9.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x826631f0
	ctx.lr = 0x825D35CC;
	sub_826631F0(ctx, base);
	// addi r11,r29,328
	ctx.r11.s64 = ctx.r29.s64 + 328;
	// lis r6,2048
	ctx.r6.s64 = 134217728;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r11,104
	ctx.r5.s64 = ctx.r11.s64 + 104;
	// bl 0x826631f0
	ctx.lr = 0x825D35E4;
	sub_826631F0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r6,1024
	ctx.r6.s64 = 67108864;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// addi r5,r11,-3720
	ctx.r5.s64 = ctx.r11.s64 + -3720;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x826631f0
	ctx.lr = 0x825D35FC;
	sub_826631F0(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r10,12240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12240, ctx.r10.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82665f00
	ctx.lr = 0x825D3624;
	sub_82665F00(ctx, base);
	// lwa r11,196(r29)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r29.u32 + 196));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r9,172(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwa r11,192(r29)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r29.u32 + 192));
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f13,9312(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 9312, temp.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// frsp f10,f9
	ctx.f10.f64 = double(float(ctx.f9.f64));
	// fdivs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// stfs f11,9316(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 9316, temp.u32);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f13,9320(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 9320, temp.u32);
	// fdivs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// stfs f0,9324(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 9324, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ori r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 4096;
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r29,0(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// stw r30,12308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12308, ctx.r30.u32);
	// lwz r8,10548(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10548);
	// lwz r11,12832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12832);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// rlwimi r8,r11,1,30,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r8,10548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10548, ctx.r8.u32);
	// ld r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// b 0x825d3918
	goto loc_825D3918;
loc_825D3718:
	// lbz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825d3914
	if (!ctx.cr0.eq) goto loc_825D3914;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82668b38
	ctx.lr = 0x825D3730;
	sub_82668B38(ctx, base);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82668790
	ctx.lr = 0x825D373C;
	sub_82668790(ctx, base);
	// lfs f0,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// lfs f13,60(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f11,64(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f31,f13
	ctx.f10.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// fdivs f11,f31,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// stfs f29,172(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f30,176(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stfs f30,188(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r4,204
	ctx.r4.s64 = 204;
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x826683d0
	ctx.lr = 0x825D378C;
	sub_826683D0(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d37f0
	if (ctx.cr6.eq) goto loc_825D37F0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// bl 0x826631f0
	ctx.lr = 0x825D37B0;
	sub_826631F0(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,1152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwinm r9,r9,0,22,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE3FF;
	// stw r9,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r9.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,1152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwinm r9,r9,0,19,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF1FFF;
	// stw r9,1152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1152, ctx.r9.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
loc_825D37F0:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d3850
	if (ctx.cr6.eq) goto loc_825D3850;
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r4,1
	ctx.r4.s64 = 1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x826631f0
	ctx.lr = 0x825D3810;
	sub_826631F0(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,1176(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1176);
	// rlwinm r9,r9,0,22,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE3FF;
	// stw r9,1176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1176, ctx.r9.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,1176(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1176);
	// rlwinm r9,r9,0,19,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF1FFF;
	// stw r9,1176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1176, ctx.r9.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
loc_825D3850:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d38b0
	if (ctx.cr6.eq) goto loc_825D38B0;
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r4,2
	ctx.r4.s64 = 2;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x826631f0
	ctx.lr = 0x825D3870;
	sub_826631F0(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,1200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	// rlwimi r9,r30,11,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 11) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r9,1200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1200, ctx.r9.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,1200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	// rlwinm r9,r9,0,19,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF1FFF;
	// stw r9,1200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1200, ctx.r9.u32);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
loc_825D38B0:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r7,32
	ctx.r7.s64 = 32;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82665f50
	ctx.lr = 0x825D38CC;
	sub_82665F50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663ba0
	ctx.lr = 0x825D38D8;
	sub_82663BA0(ctx, base);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x825d38fc
	if (!ctx.cr6.lt) goto loc_825D38FC;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663c30
	ctx.lr = 0x825D38F0;
	sub_82663C30(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663cc0
	ctx.lr = 0x825D38FC;
	sub_82663CC0(ctx, base);
loc_825D38FC:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826748a0
	ctx.lr = 0x825D3914;
	sub_826748A0(ctx, base);
loc_825D3914:
	// lwz r29,76(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
loc_825D3918:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x825d3718
	if (!ctx.cr6.eq) goto loc_825D3718;
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826631f0
	ctx.lr = 0x825D3934;
	sub_826631F0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663cc0
	ctx.lr = 0x825D3940;
	sub_82663CC0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663c30
	ctx.lr = 0x825D394C;
	sub_82663C30(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663b10
	ctx.lr = 0x825D3958;
	sub_82663B10(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r27,12292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12292, ctx.r27.u32);
	// lwz r9,12816(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12816);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,10460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10460);
	// and r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 & ctx.r27.u64;
	// rlwimi r11,r9,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,10460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10548(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwimi r9,r25,2,29,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r25.u32, 2) & 0x4) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r9,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// rlwimi r9,r22,0,29,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r22.u32, 0) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82664678
	ctx.lr = 0x825D39D8;
	sub_82664678(ctx, base);
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82668e90
	ctx.lr = 0x825D39E8;
	sub_82668E90(ctx, base);
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x826631f0
	ctx.lr = 0x825D39FC;
	sub_826631F0(ctx, base);
	// lis r6,2048
	ctx.r6.s64 = 134217728;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x826631f0
	ctx.lr = 0x825D3A10;
	sub_826631F0(ctx, base);
	// lis r6,1024
	ctx.r6.s64 = 67108864;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x826631f0
	ctx.lr = 0x825D3A24;
	sub_826631F0(ctx, base);
loc_825D3A24:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82fa8d3c
	ctx.lr = 0x825D3A30;
	__restfpr_14(ctx, base);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D3A34"))) PPC_WEAK_FUNC(sub_825D3A34);
PPC_FUNC_IMPL(__imp__sub_825D3A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D3A38"))) PPC_WEAK_FUNC(sub_825D3A38);
PPC_FUNC_IMPL(__imp__sub_825D3A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x825D3A40;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// addi r29,r3,2968
	ctx.r29.s64 = ctx.r3.s64 + 2968;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r31,-13544(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13544);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825d3dec
	if (ctx.cr6.eq) goto loc_825D3DEC;
	// addi r10,r4,5
	ctx.r10.s64 = ctx.r4.s64 + 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825d3dec
	if (!ctx.cr6.eq) goto loc_825D3DEC;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// stwx r30,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r30.u32);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stwx r26,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r26.u32);
	// lfs f0,13024(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,13028(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 13028);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r10,-22432
	ctx.r28.s64 = ctx.r10.s64 + -22432;
	// lfs f11,13036(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 13036);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lfs f12,13032(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 13032);
	ctx.f12.f64 = double(temp.f32);
	// li r4,192
	ctx.r4.s64 = 192;
	// lfs f10,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,2088(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2088);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,196(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctidz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fctidz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// fctidz f0,f12
	ctx.f0.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f11,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f6,104(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f7,96(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// fcfid f4,f13
	ctx.f4.f64 = double(ctx.f13.s64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// fcfid f5,f0
	ctx.f5.f64 = double(ctx.f0.s64);
	// addi r11,r9,12012
	ctx.r11.s64 = ctx.r9.s64 + 12012;
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// fcfid f3,f12
	ctx.f3.f64 = double(ctx.f12.s64);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfs f12,12012(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12012);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f13,-5004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5004);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f4
	ctx.f13.f64 = double(float(ctx.f4.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// frsp f0,f5
	ctx.f0.f64 = double(float(ctx.f5.f64));
	// li r6,2
	ctx.r6.s64 = 2;
	// frsp f12,f6
	ctx.f12.f64 = double(float(ctx.f6.f64));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// frsp f10,f9
	ctx.f10.f64 = double(float(ctx.f9.f64));
	// fdivs f9,f7,f13
	ctx.f9.f64 = double(float(ctx.f7.f64 / ctx.f13.f64));
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fdivs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fdivs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x826683d0
	ctx.lr = 0x825D3BBC;
	sub_826683D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8258a3f8
	ctx.lr = 0x825D3BC4;
	sub_8258A3F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826631f0
	ctx.lr = 0x825D3BDC;
	sub_826631F0(ctx, base);
	// bl 0x8258a548
	ctx.lr = 0x825D3BE0;
	sub_8258A548(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826631f0
	ctx.lr = 0x825D3BF4;
	sub_826631F0(ctx, base);
	// addi r5,r28,16188
	ctx.r5.s64 = ctx.r28.s64 + 16188;
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826631f0
	ctx.lr = 0x825D3C08;
	sub_826631F0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8286de68
	ctx.lr = 0x825D3C1C;
	sub_8286DE68(ctx, base);
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826631f0
	ctx.lr = 0x825D3C30;
	sub_826631F0(ctx, base);
	// lwz r9,1152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// rlwimi r9,r30,11,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 11) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// ori r27,r10,2048
	ctx.r27.u64 = ctx.r10.u64 | 2048;
	// stw r9,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,7
	ctx.r11.s64 = 7;
	// rldicr r28,r10,37,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// lwz r9,1152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// rlwimi r9,r30,14,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 14) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r9,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r9.u32);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// lwz r9,1176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwimi r9,r30,11,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 11) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r9,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r9.u32);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// oris r9,r9,16384
	ctx.r9.u64 = ctx.r9.u64 | 1073741824;
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// lwz r9,1176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// rlwimi r9,r30,14,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 14) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r9,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r9.u32);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// oris r9,r9,16384
	ctx.r9.u64 = ctx.r9.u64 | 1073741824;
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// lwz r9,1200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// rlwimi r9,r30,11,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 11) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r9,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r9.u32);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// oris r9,r9,8192
	ctx.r9.u64 = ctx.r9.u64 | 536870912;
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// lwz r9,1200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// rlwimi r9,r30,14,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 14) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r9,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r9.u32);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// oris r9,r9,8192
	ctx.r9.u64 = ctx.r9.u64 | 536870912;
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// lwz r9,1224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1224);
	// rlwinm r9,r9,0,22,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE3FF;
	// stw r9,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r9.u32);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// oris r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 268435456;
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// lwz r9,1224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1224);
	// rlwinm r9,r9,0,19,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF1FFF;
	// stw r9,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r9.u32);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// oris r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 268435456;
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// stw r26,12308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12308, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,10548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r10.u32);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 | ctx.r27.u64;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// stw r11,12292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12292, ctx.r11.u32);
	// lwz r9,12816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12816);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,10460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10460);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// rlwimi r10,r11,0,28,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r10,10460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10460, ctx.r10.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// stw r26,12240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12240, ctx.r26.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82668b38
	ctx.lr = 0x825D3D68;
	sub_82668B38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82668790
	ctx.lr = 0x825D3D74;
	sub_82668790(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,4952
	ctx.r6.s64 = ctx.r11.s64 + 4952;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82674278
	ctx.lr = 0x825D3D90;
	sub_82674278(ctx, base);
	// stw r30,12308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12308, ctx.r30.u32);
	// lwz r9,10548(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r8,12832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12832);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 & ctx.r30.u64;
	// rlwimi r9,r11,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r9,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r9.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// stw r10,12292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12292, ctx.r10.u32);
	// lwz r11,10460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10460);
	// lwz r9,12816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12816);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwimi r11,r10,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,10460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_825D3DEC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D3DF4"))) PPC_WEAK_FUNC(sub_825D3DF4);
PPC_FUNC_IMPL(__imp__sub_825D3DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D3DF8"))) PPC_WEAK_FUNC(sub_825D3DF8);
PPC_FUNC_IMPL(__imp__sub_825D3DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825D3E00;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12356
	ctx.r3.s64 = ctx.r11.s64 + -12356;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82547f38
	ctx.lr = 0x825D3E1C;
	sub_82547F38(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12332
	ctx.r3.s64 = ctx.r11.s64 + -12332;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// bl 0x82547f38
	ctx.lr = 0x825D3E30;
	sub_82547F38(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-12308
	ctx.r3.s64 = ctx.r11.s64 + -12308;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82547f38
	ctx.lr = 0x825D3E44;
	sub_82547F38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82546708
	ctx.lr = 0x825D3E54;
	sub_82546708(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82668a48
	ctx.lr = 0x825D3E5C;
	sub_82668A48(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825469e0
	ctx.lr = 0x825D3E68;
	sub_825469E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82546708
	ctx.lr = 0x825D3E78;
	sub_82546708(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826686a0
	ctx.lr = 0x825D3E80;
	sub_826686A0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825469e0
	ctx.lr = 0x825D3E8C;
	sub_825469E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82546708
	ctx.lr = 0x825D3E9C;
	sub_82546708(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r3,r11,4928
	ctx.r3.s64 = ctx.r11.s64 + 4928;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x82668e10
	ctx.lr = 0x825D3EB4;
	sub_82668E10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826720f8
	ctx.lr = 0x825D3ED0;
	sub_826720F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8266eed8
	ctx.lr = 0x825D3ED8;
	sub_8266EED8(ctx, base);
	// bl 0x8258a548
	ctx.lr = 0x825D3EDC;
	sub_8258A548(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82661d98
	ctx.lr = 0x825D3EEC;
	sub_82661D98(ctx, base);
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,6184
	ctx.r7.s64 = 405274624;
	// addi r28,r11,-6244
	ctx.r28.s64 = ctx.r11.s64 + -6244;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// ori r7,r7,390
	ctx.r7.u64 = ctx.r7.u64 | 390;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r29,r11,0,0,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x82af4170
	ctx.lr = 0x825D3F3C;
	sub_82AF4170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82af4460
	ctx.lr = 0x825D3F4C;
	sub_82AF4460(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825D3F58:
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x825d3f58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825D3F58;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D3F7C"))) PPC_WEAK_FUNC(sub_825D3F7C);
PPC_FUNC_IMPL(__imp__sub_825D3F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D3F80"))) PPC_WEAK_FUNC(sub_825D3F80);
PPC_FUNC_IMPL(__imp__sub_825D3F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r7,r11,27984
	ctx.r7.s64 = ctx.r11.s64 + 27984;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lfd f0,448(r7)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + 448);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfs f31,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f31.f64 = double(temp.f32);
	// fdivs f2,f31,f1
	ctx.f2.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x8259b718
	ctx.lr = 0x825D3FCC;
	sub_8259B718(ctx, base);
	// fsubs f12,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f0,456(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfd f13,112(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + 112);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadd f0,f1,f11,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f11.f64 + ctx.f0.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x825d3ff8
	if (ctx.cr6.lt) goto loc_825D3FF8;
	// lfd f13,464(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + 464);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x825d3ffc
	if (!ctx.cr6.gt) goto loc_825D3FFC;
loc_825D3FF8:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_825D3FFC:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D4020"))) PPC_WEAK_FUNC(sub_825D4020);
PPC_FUNC_IMPL(__imp__sub_825D4020) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,-5656
	ctx.r6.s64 = ctx.r11.s64 + -5656;
	// addi r5,r6,536
	ctx.r5.s64 = ctx.r6.s64 + 536;
loc_825D403C:
	// lfs f0,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f2,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x825d3f80
	ctx.lr = 0x825D4058;
	sub_825D3F80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// sth r11,-512(r5)
	PPC_STORE_U16(ctx.r5.u32 + -512, ctx.r11.u16);
	// lfs f2,16(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x825d3f80
	ctx.lr = 0x825D407C;
	sub_825D3F80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// lfs f2,16(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x825d3f80
	ctx.lr = 0x825D40A0;
	sub_825D3F80(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r6,1048
	ctx.r10.s64 = ctx.r6.s64 + 1048;
	// sth r11,512(r5)
	PPC_STORE_U16(ctx.r5.u32 + 512, ctx.r11.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825d403c
	if (ctx.cr6.lt) goto loc_825D403C;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r4,r6,24
	ctx.r4.s64 = ctx.r6.s64 + 24;
	// lwz r3,-13544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13544);
	// bl 0x826668e0
	ctx.lr = 0x825D40CC;
	sub_826668E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D40DC"))) PPC_WEAK_FUNC(sub_825D40DC);
PPC_FUNC_IMPL(__imp__sub_825D40DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D40E0"))) PPC_WEAK_FUNC(sub_825D40E0);
PPC_FUNC_IMPL(__imp__sub_825D40E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825D40E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// ble cr6,0x825d41b0
	if (!ctx.cr6.gt) goto loc_825D41B0;
	// lis r30,-31957
	ctx.r30.s64 = -2094333952;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r28,r11,-16
	ctx.r28.s64 = ctx.r11.s64 + -16;
	// lwz r31,23064(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23064);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d4128
	if (!ctx.cr6.eq) goto loc_825D4128;
	// bl 0x825476e8
	ctx.lr = 0x825D4114;
	sub_825476E8(ctx, base);
	// lwz r31,23064(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23064);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d4128
	if (!ctx.cr6.eq) goto loc_825D4128;
	// bl 0x825476e8
	ctx.lr = 0x825D4124;
	sub_825476E8(ctx, base);
	// lwz r31,23064(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23064);
loc_825D4128:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825d4138
	if (!ctx.cr6.eq) goto loc_825D4138;
	// bl 0x825476e8
	ctx.lr = 0x825D4138;
	sub_825476E8(ctx, base);
loc_825D4138:
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// bl 0x82a74720
	ctx.lr = 0x825D4140;
	sub_82A74720(ctx, base);
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825c63d8
	ctx.lr = 0x825D4150;
	sub_825C63D8(ctx, base);
	// bl 0x82a74720
	ctx.lr = 0x825D4154;
	sub_82A74720(ctx, base);
	// bl 0x825c5fe0
	ctx.lr = 0x825D4158;
	sub_825C5FE0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-19992
	ctx.r11.s64 = ctx.r11.s64 + -19992;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x825c6258
	ctx.lr = 0x825D416C;
	sub_825C6258(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r30,40(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82547b60
	ctx.lr = 0x825D4184;
	sub_82547B60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// ble cr6,0x825d4198
	if (!ctx.cr6.gt) goto loc_825D4198;
	// li r11,16
	ctx.r11.s64 = 16;
loc_825D4198:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82a74720
	ctx.lr = 0x825D41A0;
	sub_82A74720(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825c6538
	ctx.lr = 0x825D41A8;
	sub_825C6538(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x825d41b8
	goto loc_825D41B8;
loc_825D41B0:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82547d08
	ctx.lr = 0x825D41B8;
	sub_82547D08(ctx, base);
loc_825D41B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D41C0"))) PPC_WEAK_FUNC(sub_825D41C0);
PPC_FUNC_IMPL(__imp__sub_825D41C0) {
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
	// bl 0x82a74720
	ctx.lr = 0x825D41D0;
	sub_82A74720(ctx, base);
	// bl 0x825c5fe0
	ctx.lr = 0x825D41D4;
	sub_825C5FE0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D41F4"))) PPC_WEAK_FUNC(sub_825D41F4);
PPC_FUNC_IMPL(__imp__sub_825D41F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D41F8"))) PPC_WEAK_FUNC(sub_825D41F8);
PPC_FUNC_IMPL(__imp__sub_825D41F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825D4200;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,23064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23064);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d4224
	if (!ctx.cr6.eq) goto loc_825D4224;
	// bl 0x825476e8
	ctx.lr = 0x825D4220;
	sub_825476E8(ctx, base);
	// lwz r3,23064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23064);
loc_825D4224:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82547a30
	ctx.lr = 0x825D4230;
	sub_82547A30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D4238"))) PPC_WEAK_FUNC(sub_825D4238);
PPC_FUNC_IMPL(__imp__sub_825D4238) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82a782c0
	sub_82A782C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D4240"))) PPC_WEAK_FUNC(sub_825D4240);
PPC_FUNC_IMPL(__imp__sub_825D4240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825D4248;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d4330
	if (ctx.cr6.eq) goto loc_825D4330;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825d4330
	if (ctx.cr6.eq) goto loc_825D4330;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d4330
	if (ctx.cr6.eq) goto loc_825D4330;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,28512
	ctx.r31.s64 = ctx.r11.s64 + 28512;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// bl 0x825b6c10
	ctx.lr = 0x825D428C;
	sub_825B6C10(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d42a8
	if (!ctx.cr6.eq) goto loc_825D42A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lis r3,32
	ctx.r3.s64 = 2097152;
	// bl 0x825c3a68
	ctx.lr = 0x825D42A4;
	sub_825C3A68(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825D42A8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r27,r10,r11
	ctx.r27.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// bl 0x82a74720
	ctx.lr = 0x825D42BC;
	sub_82A74720(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825c6538
	ctx.lr = 0x825D42C4;
	sub_825C6538(ctx, base);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x825d4330
	if (ctx.cr6.gt) goto loc_825D4330;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d42e4
	if (ctx.cr6.eq) goto loc_825D42E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x825d4328
	goto loc_825D4328;
loc_825D42E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// bl 0x825b6c10
	ctx.lr = 0x825D42F0;
	sub_825B6C10(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d430c
	if (!ctx.cr6.eq) goto loc_825D430C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lis r3,32
	ctx.r3.s64 = 2097152;
	// bl 0x825c3a68
	ctx.lr = 0x825D4308;
	sub_825C3A68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825D430C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82626a78
	ctx.lr = 0x825D4314;
	sub_82626A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a74720
	ctx.lr = 0x825D431C;
	sub_82A74720(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825c6538
	ctx.lr = 0x825D4324;
	sub_825C6538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825D4328:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d4344
	if (!ctx.cr6.eq) goto loc_825D4344;
loc_825D4330:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825c3ba0
	ctx.lr = 0x825D4344;
	sub_825C3BA0(ctx, base);
loc_825D4344:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D434C"))) PPC_WEAK_FUNC(sub_825D434C);
PPC_FUNC_IMPL(__imp__sub_825D434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D4350"))) PPC_WEAK_FUNC(sub_825D4350);
PPC_FUNC_IMPL(__imp__sub_825D4350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825D4358;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,28512
	ctx.r31.s64 = ctx.r11.s64 + 28512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// bl 0x825b6c10
	ctx.lr = 0x825D4374;
	sub_825B6C10(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d4390
	if (!ctx.cr6.eq) goto loc_825D4390;
	// li r4,1
	ctx.r4.s64 = 1;
	// lis r3,32
	ctx.r3.s64 = 2097152;
	// bl 0x825c3a68
	ctx.lr = 0x825D438C;
	sub_825C3A68(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825D4390:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825d43b4
	if (ctx.cr6.lt) goto loc_825D43B4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d43b8
	if (ctx.cr6.lt) goto loc_825D43B8;
loc_825D43B4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825D43B8:
	// bl 0x82a74720
	ctx.lr = 0x825D43BC;
	sub_82A74720(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825c6538
	ctx.lr = 0x825D43C4;
	sub_825C6538(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d4418
	if (ctx.cr0.eq) goto loc_825D4418;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// bl 0x825b6c10
	ctx.lr = 0x825D43D8;
	sub_825B6C10(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d43f4
	if (!ctx.cr6.eq) goto loc_825D43F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lis r3,32
	ctx.r3.s64 = 2097152;
	// bl 0x825c3a68
	ctx.lr = 0x825D43F0;
	sub_825C3A68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825D43F4:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// bl 0x82626bc8
	ctx.lr = 0x825D4408;
	sub_82626BC8(ctx, base);
	// bl 0x82a74720
	ctx.lr = 0x825D440C;
	sub_82A74720(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825c6538
	ctx.lr = 0x825D4414;
	sub_825C6538(ctx, base);
	// b 0x825d4420
	goto loc_825D4420;
loc_825D4418:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a782c0
	ctx.lr = 0x825D4420;
	sub_82A782C0(ctx, base);
loc_825D4420:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D4428"))) PPC_WEAK_FUNC(sub_825D4428);
PPC_FUNC_IMPL(__imp__sub_825D4428) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// b 0x825c3ba0
	sub_825C3BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D443C"))) PPC_WEAK_FUNC(sub_825D443C);
PPC_FUNC_IMPL(__imp__sub_825D443C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D4440"))) PPC_WEAK_FUNC(sub_825D4440);
PPC_FUNC_IMPL(__imp__sub_825D4440) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825faa90
	sub_825FAA90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D4448"))) PPC_WEAK_FUNC(sub_825D4448);
PPC_FUNC_IMPL(__imp__sub_825D4448) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d446c
	if (ctx.cr6.eq) goto loc_825D446C;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82a75198
	ctx.lr = 0x825D446C;
	sub_82A75198(ctx, base);
loc_825D446C:
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

__attribute__((alias("__imp__sub_825D4480"))) PPC_WEAK_FUNC(sub_825D4480);
PPC_FUNC_IMPL(__imp__sub_825D4480) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r6,r11,16888
	ctx.r6.s64 = ctx.r11.s64 + 16888;
	// addi r3,r8,-12260
	ctx.r3.s64 = ctx.r8.s64 + -12260;
	// addi r5,r10,30344
	ctx.r5.s64 = ctx.r10.s64 + 30344;
	// addi r4,r9,16608
	ctx.r4.s64 = ctx.r9.s64 + 16608;
	// bl 0x828464e0
	ctx.lr = 0x825D44B0;
	sub_828464E0(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r6,r11,16832
	ctx.r6.s64 = ctx.r11.s64 + 16832;
	// addi r3,r8,-12252
	ctx.r3.s64 = ctx.r8.s64 + -12252;
	// addi r5,r10,9280
	ctx.r5.s64 = ctx.r10.s64 + 9280;
	// addi r4,r9,16832
	ctx.r4.s64 = ctx.r9.s64 + 16832;
	// bl 0x828464e0
	ctx.lr = 0x825D44D4;
	sub_828464E0(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-12244
	ctx.r3.s64 = ctx.r9.s64 + -12244;
	// addi r5,r11,16952
	ctx.r5.s64 = ctx.r11.s64 + 16952;
	// addi r4,r10,17448
	ctx.r4.s64 = ctx.r10.s64 + 17448;
	// bl 0x828464e0
	ctx.lr = 0x825D44F4;
	sub_828464E0(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-12236
	ctx.r3.s64 = ctx.r9.s64 + -12236;
	// addi r5,r11,17232
	ctx.r5.s64 = ctx.r11.s64 + 17232;
	// addi r4,r10,16960
	ctx.r4.s64 = ctx.r10.s64 + 16960;
	// bl 0x828464e0
	ctx.lr = 0x825D4514;
	sub_828464E0(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-12224
	ctx.r3.s64 = ctx.r9.s64 + -12224;
	// addi r5,r11,30344
	ctx.r5.s64 = ctx.r11.s64 + 30344;
	// addi r4,r10,16608
	ctx.r4.s64 = ctx.r10.s64 + 16608;
	// bl 0x828464e0
	ctx.lr = 0x825D4534;
	sub_828464E0(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r9,-12216
	ctx.r3.s64 = ctx.r9.s64 + -12216;
	// addi r5,r11,16952
	ctx.r5.s64 = ctx.r11.s64 + 16952;
	// addi r4,r10,17448
	ctx.r4.s64 = ctx.r10.s64 + 17448;
	// bl 0x828464e0
	ctx.lr = 0x825D4554;
	sub_828464E0(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r6,r11,16888
	ctx.r6.s64 = ctx.r11.s64 + 16888;
	// addi r3,r8,-12204
	ctx.r3.s64 = ctx.r8.s64 + -12204;
	// addi r5,r10,30344
	ctx.r5.s64 = ctx.r10.s64 + 30344;
	// addi r4,r9,16608
	ctx.r4.s64 = ctx.r9.s64 + 16608;
	// bl 0x828464e0
	ctx.lr = 0x825D4578;
	sub_828464E0(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r6,r11,16888
	ctx.r6.s64 = ctx.r11.s64 + 16888;
	// addi r3,r8,-12192
	ctx.r3.s64 = ctx.r8.s64 + -12192;
	// addi r5,r10,30344
	ctx.r5.s64 = ctx.r10.s64 + 30344;
	// addi r4,r9,16608
	ctx.r4.s64 = ctx.r9.s64 + 16608;
	// bl 0x828464e0
	ctx.lr = 0x825D459C;
	sub_828464E0(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,28464
	ctx.r6.s64 = ctx.r11.s64 + 28464;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,17480
	ctx.r4.s64 = ctx.r10.s64 + 17480;
	// addi r3,r9,17472
	ctx.r3.s64 = ctx.r9.s64 + 17472;
	// bl 0x82847338
	ctx.lr = 0x825D45C0;
	sub_82847338(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D45D0"))) PPC_WEAK_FUNC(sub_825D45D0);
PPC_FUNC_IMPL(__imp__sub_825D45D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x825D45D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// bl 0x82848f58
	ctx.lr = 0x825D45FC;
	sub_82848F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d46bc
	if (ctx.cr0.eq) goto loc_825D46BC;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r30.u32);
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// bl 0x82544d00
	ctx.lr = 0x825D461C;
	sub_82544D00(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d4628
	if (!ctx.cr6.eq) goto loc_825D4628;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_825D4628:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r10,-12184
	ctx.r3.s64 = ctx.r10.s64 + -12184;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,9280
	ctx.r4.s64 = ctx.r11.s64 + 9280;
	// bl 0x82848718
	ctx.lr = 0x825D464C;
	sub_82848718(ctx, base);
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d465c
	if (ctx.cr0.eq) goto loc_825D465C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82547d80
	ctx.lr = 0x825D465C;
	sub_82547D80(ctx, base);
loc_825D465C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828490b0
	ctx.lr = 0x825D4670;
	sub_828490B0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-12260
	ctx.r4.s64 = ctx.r11.s64 + -12260;
	// bl 0x828492b8
	ctx.lr = 0x825D4680;
	sub_828492B8(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-12244
	ctx.r4.s64 = ctx.r11.s64 + -12244;
	// bl 0x828492b8
	ctx.lr = 0x825D4694;
	sub_828492B8(ctx, base);
	// lwz r11,400(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// beq cr6,0x825d46b4
	if (ctx.cr6.eq) goto loc_825D46B4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82241d18
	ctx.lr = 0x825D46B4;
	sub_82241D18(ctx, base);
loc_825D46B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x825d46c8
	goto loc_825D46C8;
loc_825D46BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_825D46C8:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D46D0"))) PPC_WEAK_FUNC(sub_825D46D0);
PPC_FUNC_IMPL(__imp__sub_825D46D0) {
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
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// addi r6,r11,21592
	ctx.r6.s64 = ctx.r11.s64 + 21592;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,21512
	ctx.r4.s64 = ctx.r10.s64 + 21512;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x825e3e18
	ctx.lr = 0x825D4700;
	sub_825E3E18(ctx, base);
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r6,r11,9280
	ctx.r6.s64 = ctx.r11.s64 + 9280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-12248
	ctx.r4.s64 = ctx.r10.s64 + -12248;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x825e3e18
	ctx.lr = 0x825D471C;
	sub_825E3E18(ctx, base);
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// addi r6,r11,9280
	ctx.r6.s64 = ctx.r11.s64 + 9280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-29736
	ctx.r4.s64 = ctx.r10.s64 + -29736;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x825e3e18
	ctx.lr = 0x825D4738;
	sub_825E3E18(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r6,r11,-15576
	ctx.r6.s64 = ctx.r11.s64 + -15576;
	// addi r5,r10,-15696
	ctx.r5.s64 = ctx.r10.s64 + -15696;
	// addi r4,r9,-15808
	ctx.r4.s64 = ctx.r9.s64 + -15808;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825e3e18
	ctx.lr = 0x825D4758;
	sub_825E3E18(ctx, base);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// addi r6,r11,24352
	ctx.r6.s64 = ctx.r11.s64 + 24352;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,24200
	ctx.r4.s64 = ctx.r10.s64 + 24200;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x825e3e18
	ctx.lr = 0x825D4774;
	sub_825E3E18(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r6,r11,19776
	ctx.r6.s64 = ctx.r11.s64 + 19776;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,19656
	ctx.r4.s64 = ctx.r10.s64 + 19656;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x825e3e18
	ctx.lr = 0x825D4790;
	sub_825E3E18(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r6,r11,19776
	ctx.r6.s64 = ctx.r11.s64 + 19776;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,19656
	ctx.r4.s64 = ctx.r10.s64 + 19656;
	// li r3,115
	ctx.r3.s64 = 115;
	// bl 0x825e3e18
	ctx.lr = 0x825D47AC;
	sub_825E3E18(ctx, base);
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// addi r6,r11,9280
	ctx.r6.s64 = ctx.r11.s64 + 9280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-20392
	ctx.r4.s64 = ctx.r10.s64 + -20392;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x825e3e18
	ctx.lr = 0x825D47C8;
	sub_825E3E18(ctx, base);
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// addi r6,r11,9280
	ctx.r6.s64 = ctx.r11.s64 + 9280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,21600
	ctx.r4.s64 = ctx.r10.s64 + 21600;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x825e3e18
	ctx.lr = 0x825D47E4;
	sub_825E3E18(ctx, base);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r9,-32157
	ctx.r9.s64 = -2107441152;
	// addi r6,r11,22048
	ctx.r6.s64 = ctx.r11.s64 + 22048;
	// addi r5,r10,22368
	ctx.r5.s64 = ctx.r10.s64 + 22368;
	// addi r4,r9,21888
	ctx.r4.s64 = ctx.r9.s64 + 21888;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x825e3e18
	ctx.lr = 0x825D4804;
	sub_825E3E18(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,97
	ctx.r3.s64 = 97;
	// bl 0x825e3e18
	ctx.lr = 0x825D4818;
	sub_825E3E18(ctx, base);
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,9280
	ctx.r6.s64 = ctx.r11.s64 + 9280;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r4,r11,22368
	ctx.r4.s64 = ctx.r11.s64 + 22368;
	// li r3,65
	ctx.r3.s64 = 65;
	// bl 0x825e3e18
	ctx.lr = 0x825D4834;
	sub_825E3E18(ctx, base);
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// addi r6,r11,9280
	ctx.r6.s64 = ctx.r11.s64 + 9280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,22368
	ctx.r4.s64 = ctx.r10.s64 + 22368;
	// li r3,66
	ctx.r3.s64 = 66;
	// bl 0x825e3e18
	ctx.lr = 0x825D4850;
	sub_825E3E18(ctx, base);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r9,-32157
	ctx.r9.s64 = -2107441152;
	// addi r6,r11,22392
	ctx.r6.s64 = ctx.r11.s64 + 22392;
	// addi r5,r10,22368
	ctx.r5.s64 = ctx.r10.s64 + 22368;
	// addi r4,r9,22152
	ctx.r4.s64 = ctx.r9.s64 + 22152;
	// li r3,110
	ctx.r3.s64 = 110;
	// bl 0x825e3e18
	ctx.lr = 0x825D4870;
	sub_825E3E18(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,106
	ctx.r3.s64 = 106;
	// bl 0x825e3e18
	ctx.lr = 0x825D4884;
	sub_825E3E18(ctx, base);
	// bl 0x825b6c60
	ctx.lr = 0x825D4888;
	sub_825B6C60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// bl 0x826232e8
	ctx.lr = 0x825D48AC;
	sub_826232E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825b6c60
	ctx.lr = 0x825D48B4;
	sub_825B6C60(ctx, base);
	// stw r31,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r31.u32);
	// bl 0x825b6c60
	ctx.lr = 0x825D48BC;
	sub_825B6C60(ctx, base);
	// addi r31,r3,60
	ctx.r31.s64 = ctx.r3.s64 + 60;
	// bl 0x825b6c60
	ctx.lr = 0x825D48C4;
	sub_825B6C60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x825b6c60
	ctx.lr = 0x825D48D4;
	sub_825B6C60(ctx, base);
	// stb r30,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r30.u8);
	// li r3,8208
	ctx.r3.s64 = 8208;
	// bl 0x82547c40
	ctx.lr = 0x825D48E0;
	sub_82547C40(ctx, base);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// sth r30,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r30.u16);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r8,r11,8192
	ctx.r8.s64 = ctx.r11.s64 + 8192;
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// bl 0x825b6c60
	ctx.lr = 0x825D4910;
	sub_825B6C60(ctx, base);
	// stw r31,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r31.u32);
	// bl 0x825b6c60
	ctx.lr = 0x825D4918;
	sub_825B6C60(ctx, base);
	// stb r30,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r30.u8);
	// bl 0x825b6c60
	ctx.lr = 0x825D4920;
	sub_825B6C60(ctx, base);
	// stw r30,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_825D493C"))) PPC_WEAK_FUNC(sub_825D493C);
PPC_FUNC_IMPL(__imp__sub_825D493C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D4940"))) PPC_WEAK_FUNC(sub_825D4940);
PPC_FUNC_IMPL(__imp__sub_825D4940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825D4948;
	__savegprlr_27(ctx, base);
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stw r7,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r7.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825d4978
	if (ctx.cr6.lt) goto loc_825D4978;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x825d497c
	goto loc_825D497C;
loc_825D4978:
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_825D497C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825d4990
	if (ctx.cr6.lt) goto loc_825D4990;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x825d4994
	goto loc_825D4994;
loc_825D4990:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_825D4994:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r11,-12172
	ctx.r5.s64 = ctx.r11.s64 + -12172;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82557418
	ctx.lr = 0x825D49A8;
	sub_82557418(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r7,r11,-12164
	ctx.r7.s64 = ctx.r11.s64 + -12164;
	// addi r5,r10,19420
	ctx.r5.s64 = ctx.r10.s64 + 19420;
	// addi r6,r1,592
	ctx.r6.s64 = ctx.r1.s64 + 592;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82557418
	ctx.lr = 0x825D49C8;
	sub_82557418(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82a78410
	ctx.lr = 0x825D49D0;
	sub_82A78410(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x825d49e0
	if (!ctx.cr6.eq) goto loc_825D49E0;
	// bl 0x82a78478
	ctx.lr = 0x825D49DC;
	sub_82A78478(ctx, base);
	// b 0x825d49f4
	goto loc_825D49F4;
loc_825D49E0:
	// rlwinm r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	// li r10,267
	ctx.r10.s64 = 267;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_825D49F4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825d4bb0
	if (!ctx.cr6.eq) goto loc_825D4BB0;
	// lis r28,-31976
	ctx.r28.s64 = -2095579136;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r11,28424(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28424);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8283b938
	ctx.lr = 0x825D4A14;
	sub_8283B938(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,104
	ctx.r4.s64 = 104;
	// lwz r3,28424(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D4A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x825d4a84
	if (ctx.cr0.eq) goto loc_825D4A84;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// bl 0x82547090
	ctx.lr = 0x825D4A58;
	sub_82547090(ctx, base);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x8280fb08
	ctx.lr = 0x825D4A7C;
	sub_8280FB08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825d4a88
	goto loc_825D4A88;
loc_825D4A84:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_825D4A88:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d4aa0
	if (ctx.cr0.eq) goto loc_825D4AA0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82547158
	ctx.lr = 0x825D4AA0;
	sub_82547158(ctx, base);
loc_825D4AA0:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-20544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20544);
	// bl 0x8280e220
	ctx.lr = 0x825D4AB0;
	sub_8280E220(ctx, base);
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// lwz r11,21048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21048);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r28,708(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	// bl 0x82547090
	ctx.lr = 0x825D4AE0;
	sub_82547090(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,140
	ctx.r7.s64 = ctx.r1.s64 + 140;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r10,r1,964
	ctx.r10.s64 = ctx.r1.s64 + 964;
	// bl 0x825d5168
	ctx.lr = 0x825D4B04;
	sub_825D5168(ctx, base);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d4b24
	if (ctx.cr6.eq) goto loc_825D4B24;
	// bl 0x82241d18
	ctx.lr = 0x825D4B24;
	sub_82241D18(ctx, base);
loc_825D4B24:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82547158
	ctx.lr = 0x825D4B34;
	sub_82547158(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// beq cr6,0x825d4b7c
	if (ctx.cr6.eq) goto loc_825D4B7C;
	// bl 0x822c2418
	ctx.lr = 0x825D4B58;
	sub_822C2418(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,21048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21048);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82807b58
	ctx.lr = 0x825D4B74;
	sub_82807B58(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// b 0x825d4b9c
	goto loc_825D4B9C;
loc_825D4B7C:
	// bl 0x822c2418
	ctx.lr = 0x825D4B80;
	sub_822C2418(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,21048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21048);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82807b58
	ctx.lr = 0x825D4B9C;
	sub_82807B58(ctx, base);
loc_825D4B9C:
	// bl 0x825c5c80
	ctx.lr = 0x825D4BA0;
	sub_825C5C80(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825d4bb0
	if (ctx.cr6.eq) goto loc_825D4BB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x825D4BB0;
	sub_82241D18(ctx, base);
loc_825D4BB0:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D4BB8"))) PPC_WEAK_FUNC(sub_825D4BB8);
PPC_FUNC_IMPL(__imp__sub_825D4BB8) {
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
	// lwz r3,24(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// bl 0x82a776a8
	ctx.lr = 0x825D4BD4;
	sub_82A776A8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d4be4
	if (ctx.cr6.eq) goto loc_825D4BE4;
	// bl 0x82241d18
	ctx.lr = 0x825D4BE4;
	sub_82241D18(ctx, base);
loc_825D4BE4:
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

__attribute__((alias("__imp__sub_825D4BF8"))) PPC_WEAK_FUNC(sub_825D4BF8);
PPC_FUNC_IMPL(__imp__sub_825D4BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x825D4C00;
	__savegprlr_17(ctx, base);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825d4c20
	if (ctx.cr6.lt) goto loc_825D4C20;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x825d4c24
	goto loc_825D4C24;
loc_825D4C20:
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
loc_825D4C24:
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x825d4c38
	if (ctx.cr6.lt) goto loc_825D4C38;
	// lwz r6,0(r20)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// b 0x825d4c3c
	goto loc_825D4C3C;
loc_825D4C38:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
loc_825D4C3C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r8,r11,-12128
	ctx.r8.s64 = ctx.r11.s64 + -12128;
	// addi r5,r10,-12112
	ctx.r5.s64 = ctx.r10.s64 + -12112;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82557418
	ctx.lr = 0x825D4C58;
	sub_82557418(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82a78410
	ctx.lr = 0x825D4C60;
	sub_82A78410(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x825d4c70
	if (!ctx.cr6.eq) goto loc_825D4C70;
	// bl 0x82a78478
	ctx.lr = 0x825D4C6C;
	sub_82A78478(ctx, base);
	// b 0x825d4c84
	goto loc_825D4C84;
loc_825D4C70:
	// rlwinm r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	// li r10,267
	ctx.r10.s64 = 267;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_825D4C84:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825d4ff8
	if (!ctx.cr6.eq) goto loc_825D4FF8;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r31.u32);
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// bl 0x82544d00
	ctx.lr = 0x825D4CA8;
	sub_82544D00(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x825D4CBC;
	sub_82A77608(ctx, base);
	// stw r3,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r3.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// addi r7,r11,19384
	ctx.r7.s64 = ctx.r11.s64 + 19384;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8258f550
	ctx.lr = 0x825D4CE4;
	sub_8258F550(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,264(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x82a77600
	ctx.lr = 0x825D4CF0;
	sub_82A77600(ctx, base);
	// lwz r3,264(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x82a756a0
	ctx.lr = 0x825D4CF8;
	sub_82A756A0(ctx, base);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825d4fe8
	if (ctx.cr6.eq) goto loc_825D4FE8;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r17,r31
	ctx.r17.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x825d4fd8
	if (!ctx.cr0.gt) goto loc_825D4FD8;
	// addi r30,r4,2
	ctx.r30.s64 = ctx.r4.s64 + 2;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r4,-31956
	ctx.r4.s64 = -2094268416;
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// lis r31,-32227
	ctx.r31.s64 = -2112028672;
	// addi r28,r11,-11940
	ctx.r28.s64 = ctx.r11.s64 + -11940;
	// addi r27,r10,-26876
	ctx.r27.s64 = ctx.r10.s64 + -26876;
	// addi r26,r9,-12000
	ctx.r26.s64 = ctx.r9.s64 + -12000;
	// addi r25,r8,-12012
	ctx.r25.s64 = ctx.r8.s64 + -12012;
	// addi r24,r7,-26844
	ctx.r24.s64 = ctx.r7.s64 + -26844;
	// addi r23,r6,-12072
	ctx.r23.s64 = ctx.r6.s64 + -12072;
	// addi r29,r5,-12084
	ctx.r29.s64 = ctx.r5.s64 + -12084;
	// addi r22,r4,-3840
	ctx.r22.s64 = ctx.r4.s64 + -3840;
	// addi r21,r3,-12096
	ctx.r21.s64 = ctx.r3.s64 + -12096;
	// addi r31,r31,-12104
	ctx.r31.s64 = ctx.r31.s64 + -12104;
loc_825D4D6C:
	// lbz r11,-2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d4d98
	if (ctx.cr0.eq) goto loc_825D4D98;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x825d4d98
	if (ctx.cr6.eq) goto loc_825D4D98;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825d4fc8
	if (!ctx.cr6.eq) goto loc_825D4FC8;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x825d4fc8
	if (!ctx.cr6.eq) goto loc_825D4FC8;
	// li r17,1
	ctx.r17.s64 = 1;
	// b 0x825d4fc8
	goto loc_825D4FC8;
loc_825D4D98:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825D4DA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x825d4dc4
	if (ctx.cr0.eq) goto loc_825D4DC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825d4da0
	if (ctx.cr6.eq) goto loc_825D4DA0;
loc_825D4DC4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d4de8
	if (!ctx.cr0.eq) goto loc_825D4DE8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_825D4DDC:
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x825d4940
	ctx.lr = 0x825D4DE4;
	sub_825D4940(ctx, base);
	// b 0x825d4fc8
	goto loc_825D4FC8;
loc_825D4DE8:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825D4DF0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x825d4e14
	if (ctx.cr0.eq) goto loc_825D4E14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825d4df0
	if (ctx.cr6.eq) goto loc_825D4DF0;
loc_825D4E14:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bne 0x825d4e30
	if (!ctx.cr0.eq) goto loc_825D4E30;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// b 0x825d4ddc
	goto loc_825D4DDC;
loc_825D4E30:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825d4940
	ctx.lr = 0x825D4E3C;
	sub_825D4940(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825D4E44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x825d4e68
	if (ctx.cr0.eq) goto loc_825D4E68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825d4e44
	if (ctx.cr6.eq) goto loc_825D4E44;
loc_825D4E68:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d4eac
	if (!ctx.cr0.eq) goto loc_825D4EAC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826909a0
	ctx.lr = 0x825D4E7C;
	sub_826909A0(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822400d8
	ctx.lr = 0x825D4E8C;
	sub_822400D8(ctx, base);
	// bl 0x825adac8
	ctx.lr = 0x825D4E90;
	sub_825ADAC8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// bl 0x825ae570
	ctx.lr = 0x825D4EA4;
	sub_825AE570(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x825d4fbc
	goto loc_825D4FBC;
loc_825D4EAC:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825D4EB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x825d4ed8
	if (ctx.cr0.eq) goto loc_825D4ED8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825d4eb4
	if (ctx.cr6.eq) goto loc_825D4EB4;
loc_825D4ED8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825d4f84
	if (ctx.cr0.eq) goto loc_825D4F84;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825D4EE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x825d4f0c
	if (ctx.cr0.eq) goto loc_825D4F0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825d4ee8
	if (ctx.cr6.eq) goto loc_825D4EE8;
loc_825D4F0C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825d4f84
	if (ctx.cr0.eq) goto loc_825D4F84;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825D4F1C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x825d4f40
	if (ctx.cr0.eq) goto loc_825D4F40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825d4f1c
	if (ctx.cr6.eq) goto loc_825D4F1C;
loc_825D4F40:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d4fc8
	if (!ctx.cr0.eq) goto loc_825D4FC8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826909a0
	ctx.lr = 0x825D4F54;
	sub_826909A0(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822400d8
	ctx.lr = 0x825D4F64;
	sub_822400D8(ctx, base);
	// bl 0x825adac8
	ctx.lr = 0x825D4F68;
	sub_825ADAC8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// bl 0x825ae570
	ctx.lr = 0x825D4F7C;
	sub_825AE570(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// b 0x825d4fbc
	goto loc_825D4FBC;
loc_825D4F84:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826909a0
	ctx.lr = 0x825D4F90;
	sub_826909A0(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822400d8
	ctx.lr = 0x825D4FA0;
	sub_822400D8(ctx, base);
	// bl 0x825adac8
	ctx.lr = 0x825D4FA4;
	sub_825ADAC8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// bl 0x825ae570
	ctx.lr = 0x825D4FB8;
	sub_825AE570(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
loc_825D4FBC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x825D4FC8;
	sub_822402C8(ctx, base);
loc_825D4FC8:
	// addic. r18,r18,-1
	ctx.xer.ca = ctx.r18.u32 > 0;
	ctx.r18.s64 = ctx.r18.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x825d4d6c
	if (!ctx.cr0.eq) goto loc_825D4D6C;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_825D4FD8:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-20544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20544);
	// bl 0x8280c138
	ctx.lr = 0x825D4FE8;
	sub_8280C138(ctx, base);
loc_825D4FE8:
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d4ff8
	if (ctx.cr6.eq) goto loc_825D4FF8;
	// bl 0x82241d18
	ctx.lr = 0x825D4FF8;
	sub_82241D18(ctx, base);
loc_825D4FF8:
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D5000"))) PPC_WEAK_FUNC(sub_825D5000);
PPC_FUNC_IMPL(__imp__sub_825D5000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825D5008;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-11884
	ctx.r4.s64 = ctx.r11.s64 + -11884;
	// bl 0x822400d8
	ctx.lr = 0x825D501C;
	sub_822400D8(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,9528
	ctx.r4.s64 = ctx.r11.s64 + 9528;
	// bl 0x822400d8
	ctx.lr = 0x825D502C;
	sub_822400D8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825d4bf8
	ctx.lr = 0x825D5038;
	sub_825D4BF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822402c8
	ctx.lr = 0x825D5048;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822402c8
	ctx.lr = 0x825D5058;
	sub_822402C8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r29,-31958
	ctx.r29.s64 = -2094399488;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,21048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21048);
	// lwz r4,708(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	// bl 0x82635830
	ctx.lr = 0x825D5084;
	sub_82635830(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d50a8
	if (ctx.cr6.eq) goto loc_825D50A8;
	// bl 0x82241d18
	ctx.lr = 0x825D50A8;
	sub_82241D18(ctx, base);
loc_825D50A8:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822c2418
	ctx.lr = 0x825D50C4;
	sub_822C2418(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,21048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21048);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82807b58
	ctx.lr = 0x825D50E0;
	sub_82807B58(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// stw r3,-3844(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3844, ctx.r3.u32);
	// bl 0x825c5c80
	ctx.lr = 0x825D50EC;
	sub_825C5C80(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825d50fc
	if (ctx.cr6.eq) goto loc_825D50FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x825D50FC;
	sub_82241D18(ctx, base);
loc_825D50FC:
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82691500
	ctx.lr = 0x825D5104;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d5110
	if (ctx.cr0.eq) goto loc_825D5110;
	// bl 0x82279fb8
	ctx.lr = 0x825D5110;
	sub_82279FB8(ctx, base);
loc_825D5110:
	// bl 0x8227e2f8
	ctx.lr = 0x825D5114;
	sub_8227E2F8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-7272
	ctx.r6.s64 = ctx.r11.s64 + -7272;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x825646b8
	ctx.lr = 0x825D5134;
	sub_825646B8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r5,512
	ctx.r5.s64 = 33554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-7272
	ctx.r6.s64 = ctx.r11.s64 + -7272;
	// ori r5,r5,7
	ctx.r5.u64 = ctx.r5.u64 | 7;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x825646b8
	ctx.lr = 0x825D5154;
	sub_825646B8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82635978
	ctx.lr = 0x825D5160;
	sub_82635978(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D5168"))) PPC_WEAK_FUNC(sub_825D5168);
PPC_FUNC_IMPL(__imp__sub_825D5168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x825D5170;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r3,464
	ctx.r3.s64 = 464;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r22,-20544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20544);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r21,21048(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21048);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x82691500
	ctx.lr = 0x825D51AC;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x825d5290
	if (ctx.cr0.eq) goto loc_825D5290;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,26652
	ctx.r10.s64 = ctx.r10.s64 + 26652;
	// addic. r31,r30,12
	ctx.xer.ca = ctx.r30.u32 > 4294967283;
	ctx.r31.s64 = ctx.r30.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r20,r30,8
	ctx.r20.s64 = ctx.r30.s64 + 8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq 0x825d5208
	if (ctx.cr0.eq) goto loc_825D5208;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82635ae0
	ctx.lr = 0x825D5208;
	sub_82635AE0(ctx, base);
loc_825D5208:
	// stw r30,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r30.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r31.u32);
	// beq 0x825d5284
	if (ctx.cr0.eq) goto loc_825D5284;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_825D521C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r20
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r20.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r20
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r20.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825d521c
	if (!ctx.cr0.eq) goto loc_825D521C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d527c
	if (ctx.cr6.eq) goto loc_825D527C;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
loc_825D5248:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825d5248
	if (!ctx.cr0.eq) goto loc_825D5248;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825d527c
	if (!ctx.cr6.eq) goto loc_825D527C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D527C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D527C:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_825D5284:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
loc_825D5290:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x825D52AC;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_825D52AC"))) PPC_WEAK_FUNC(sub_825D52AC);
PPC_FUNC_IMPL(__imp__sub_825D52AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D52B0"))) PPC_WEAK_FUNC(sub_825D52B0);
PPC_FUNC_IMPL(__imp__sub_825D52B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x825D52B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82884750
	ctx.lr = 0x825D52D4;
	sub_82884750(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825d5414
	if (!ctx.cr6.gt) goto loc_825D5414;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_825D52F0:
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825d53f4
	if (!ctx.cr6.eq) goto loc_825D53F4;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826909a0
	ctx.lr = 0x825D530C;
	sub_826909A0(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x825d533c
	if (!ctx.cr6.eq) goto loc_825D533C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x825D5328;
	sub_82546708(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x825d5368
	goto loc_825D5368;
loc_825D533C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// li r5,3
	ctx.r5.s64 = 3;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82546418
	ctx.lr = 0x825D5368;
	sub_82546418(ctx, base);
loc_825D5368:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d53fc
	if (ctx.cr6.eq) goto loc_825D53FC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d53fc
	if (ctx.cr0.eq) goto loc_825D53FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826909a0
	ctx.lr = 0x825D5394;
	sub_826909A0(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x825d53c4
	if (!ctx.cr6.eq) goto loc_825D53C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x825D53B0;
	sub_82546708(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// b 0x825d53fc
	goto loc_825D53FC;
loc_825D53C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// li r5,3
	ctx.r5.s64 = 3;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82546418
	ctx.lr = 0x825D53F0;
	sub_82546418(ctx, base);
	// b 0x825d53fc
	goto loc_825D53FC;
loc_825D53F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8286f268
	ctx.lr = 0x825D53FC;
	sub_8286F268(ctx, base);
loc_825D53FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825d52f0
	if (ctx.cr6.lt) goto loc_825D52F0;
loc_825D5414:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d5530
	if (ctx.cr6.eq) goto loc_825D5530;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82547ca0
	ctx.lr = 0x825D5428;
	sub_82547CA0(ctx, base);
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825d5534
	if (!ctx.cr6.gt) goto loc_825D5534;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// addi r26,r9,-11880
	ctx.r26.s64 = ctx.r9.s64 + -11880;
	// addi r27,r10,-11864
	ctx.r27.s64 = ctx.r10.s64 + -11864;
loc_825D5458:
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825d5478
	if (ctx.cr6.eq) goto loc_825D5478;
	// li r3,0
	ctx.r3.s64 = 0;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8286dc70
	ctx.lr = 0x825D5474;
	sub_8286DC70(ctx, base);
	// b 0x825d5510
	goto loc_825D5510;
loc_825D5478:
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82557418
	ctx.lr = 0x825D5490;
	sub_82557418(ctx, base);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82884930
	ctx.lr = 0x825D54A4;
	sub_82884930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d54b8
	if (ctx.cr0.eq) goto loc_825D54B8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82884a28
	ctx.lr = 0x825D54B8;
	sub_82884A28(ctx, base);
loc_825D54B8:
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825d5500
	if (ctx.cr6.eq) goto loc_825D5500;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x825571a8
	ctx.lr = 0x825D54D0;
	sub_825571A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d5510
	if (ctx.cr0.eq) goto loc_825D5510;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x826909a0
	ctx.lr = 0x825D54E4;
	sub_826909A0(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x825b6d80
	ctx.lr = 0x825D54FC;
	sub_825B6D80(ctx, base);
	// b 0x825d5510
	goto loc_825D5510;
loc_825D5500:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_825D5510:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825d5458
	if (ctx.cr6.lt) goto loc_825D5458;
	// b 0x825d5534
	goto loc_825D5534;
loc_825D5530:
	// stw r23,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r23.u32);
loc_825D5534:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D553C"))) PPC_WEAK_FUNC(sub_825D553C);
PPC_FUNC_IMPL(__imp__sub_825D553C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D5540"))) PPC_WEAK_FUNC(sub_825D5540);
PPC_FUNC_IMPL(__imp__sub_825D5540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x825D5548;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r24,1
	ctx.r24.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825d5684
	if (!ctx.cr6.gt) goto loc_825D5684;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r4,20
	ctx.r29.s64 = ctx.r4.s64 + 20;
	// addi r28,r9,5336
	ctx.r28.s64 = ctx.r9.s64 + 5336;
	// addi r25,r10,-11880
	ctx.r25.s64 = ctx.r10.s64 + -11880;
	// addi r27,r11,-11864
	ctx.r27.s64 = ctx.r11.s64 + -11864;
loc_825D5588:
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d5668
	if (!ctx.cr6.eq) goto loc_825D5668;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d55d8
	if (ctx.cr6.eq) goto loc_825D55D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82884048
	ctx.lr = 0x825D55AC;
	sub_82884048(ctx, base);
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// bl 0x825b6e40
	ctx.lr = 0x825D55B4;
	sub_825B6E40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r24,r10,r24
	ctx.r24.u64 = ctx.r10.u64 & ctx.r24.u64;
	// beq cr6,0x825d5668
	if (ctx.cr6.eq) goto loc_825D5668;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x825d565c
	goto loc_825D565C;
loc_825D55D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82557418
	ctx.lr = 0x825D55F4;
	sub_82557418(ctx, base);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82884930
	ctx.lr = 0x825D5608;
	sub_82884930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d561c
	if (ctx.cr0.eq) goto loc_825D561C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82884a28
	ctx.lr = 0x825D561C;
	sub_82884A28(ctx, base);
loc_825D561C:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d5668
	if (ctx.cr6.eq) goto loc_825D5668;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x825571a8
	ctx.lr = 0x825D5630;
	sub_825571A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d5668
	if (!ctx.cr0.eq) goto loc_825D5668;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// bne cr6,0x825d5654
	if (!ctx.cr6.eq) goto loc_825D5654;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_825D5654:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_825D565C:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
loc_825D5668:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d5588
	if (ctx.cr6.lt) goto loc_825D5588;
loc_825D5684:
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825d5730
	if (!ctx.cr6.gt) goto loc_825D5730;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r25,r11,32570
	ctx.r25.s64 = ctx.r11.s64 + 32570;
loc_825D56A0:
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825d5718
	if (ctx.cr6.eq) goto loc_825D5718;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8286f268
	ctx.lr = 0x825D56BC;
	sub_8286F268(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d5718
	if (ctx.cr6.eq) goto loc_825D5718;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825d5718
	if (!ctx.cr6.gt) goto loc_825D5718;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825D56EC:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825d5704
	if (ctx.cr6.eq) goto loc_825D5704;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8286dc70
	ctx.lr = 0x825D5704;
	sub_8286DC70(ctx, base);
loc_825D5704:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d56ec
	if (ctx.cr6.lt) goto loc_825D56EC;
loc_825D5718:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d56a0
	if (ctx.cr6.lt) goto loc_825D56A0;
loc_825D5730:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D573C"))) PPC_WEAK_FUNC(sub_825D573C);
PPC_FUNC_IMPL(__imp__sub_825D573C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D5740"))) PPC_WEAK_FUNC(sub_825D5740);
PPC_FUNC_IMPL(__imp__sub_825D5740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825D5748;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825d578c
	if (!ctx.cr6.gt) goto loc_825D578C;
loc_825D5768:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d5820
	ctx.lr = 0x825D5778;
	sub_825D5820(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d5768
	if (ctx.cr6.lt) goto loc_825D5768;
loc_825D578C:
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825d5810
	if (!ctx.cr6.gt) goto loc_825D5810;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r28,-31958
	ctx.r28.s64 = -2094399488;
loc_825D57A4:
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825d57dc
	if (ctx.cr6.eq) goto loc_825D57DC;
	// lwz r3,21048(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21048);
	// bl 0x828078a0
	ctx.lr = 0x825D57C0;
	sub_828078A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d57dc
	if (ctx.cr0.eq) goto loc_825D57DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x825469e0
	ctx.lr = 0x825D57DC;
	sub_825469E0(ctx, base);
loc_825D57DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d57f8
	if (ctx.cr6.eq) goto loc_825D57F8;
	// bl 0x825469e0
	ctx.lr = 0x825D57F8;
	sub_825469E0(ctx, base);
loc_825D57F8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d57a4
	if (ctx.cr6.lt) goto loc_825D57A4;
loc_825D5810:
	// bl 0x828847b8
	ctx.lr = 0x825D5814;
	sub_828847B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D581C"))) PPC_WEAK_FUNC(sub_825D581C);
PPC_FUNC_IMPL(__imp__sub_825D581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D5820"))) PPC_WEAK_FUNC(sub_825D5820);
PPC_FUNC_IMPL(__imp__sub_825D5820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825D5828;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r29,r5,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d5948
	if (ctx.cr6.eq) goto loc_825D5948;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,-11864
	ctx.r5.s64 = ctx.r11.s64 + -11864;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82557418
	ctx.lr = 0x825D5870;
	sub_82557418(ctx, base);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82884930
	ctx.lr = 0x825D5884;
	sub_82884930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d5898
	if (ctx.cr0.eq) goto loc_825D5898;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82884a28
	ctx.lr = 0x825D5898;
	sub_82884A28(ctx, base);
loc_825D5898:
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825d58fc
	if (ctx.cr6.eq) goto loc_825D58FC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r4,r11,-11880
	ctx.r4.s64 = ctx.r11.s64 + -11880;
	// bl 0x825571a8
	ctx.lr = 0x825D58B4;
	sub_825571A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d58d4
	if (!ctx.cr0.eq) goto loc_825D58D4;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,5336
	ctx.r10.s64 = ctx.r11.s64 + 5336;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x825d593c
	goto loc_825D593C;
loc_825D58D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x826909a0
	ctx.lr = 0x825D58E0;
	sub_826909A0(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825b78d8
	ctx.lr = 0x825D58F8;
	sub_825B78D8(ctx, base);
	// b 0x825d593c
	goto loc_825D593C;
loc_825D58FC:
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// beq cr6,0x825d5924
	if (ctx.cr6.eq) goto loc_825D5924;
	// bl 0x825469e0
	ctx.lr = 0x825D5920;
	sub_825469E0(ctx, base);
	// b 0x825d593c
	goto loc_825D593C;
loc_825D5924:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x8286e888
	ctx.lr = 0x825D592C;
	sub_8286E888(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x8286de58
	ctx.lr = 0x825D593C;
	sub_8286DE58(ctx, base);
loc_825D593C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// stwx r27,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r27.u32);
loc_825D5948:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D5950"))) PPC_WEAK_FUNC(sub_825D5950);
PPC_FUNC_IMPL(__imp__sub_825D5950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x825D5958;
	__savegprlr_16(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r30,r11,-1992
	ctx.r30.s64 = ctx.r11.s64 + -1992;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,7732(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7732);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8283b938
	ctx.lr = 0x825D5978;
	sub_8283B938(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D5990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d59ac
	if (ctx.cr0.eq) goto loc_825D59AC;
	// bl 0x82846348
	ctx.lr = 0x825D59A0;
	sub_82846348(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// stw r3,5244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5244, ctx.r3.u32);
	// b 0x825d59b8
	goto loc_825D59B8;
loc_825D59AC:
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,5244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5244, ctx.r27.u32);
loc_825D59B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8255b148
	ctx.lr = 0x825D59C4;
	sub_8255B148(ctx, base);
	// bl 0x8286dbf8
	ctx.lr = 0x825D59C8;
	sub_8286DBF8(ctx, base);
	// bl 0x8286dc60
	ctx.lr = 0x825D59CC;
	sub_8286DC60(ctx, base);
	// lis r8,10280
	ctx.r8.s64 = 673710080;
	// li r10,18
	ctx.r10.s64 = 18;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,390
	ctx.r8.u64 = ctx.r8.u64 | 390;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82662e30
	ctx.lr = 0x825D59F4;
	sub_82662E30(ctx, base);
	// stw r3,7328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7328, ctx.r3.u32);
	// bl 0x82588ac8
	ctx.lr = 0x825D59FC;
	sub_82588AC8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r8,r30,7328
	ctx.r8.s64 = ctx.r30.s64 + 7328;
	// stw r27,7340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7340, ctx.r27.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r3,7332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7332, ctx.r3.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r27,7368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7368, ctx.r27.u32);
	// addi r10,r8,12
	ctx.r10.s64 = ctx.r8.s64 + 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_825D5A24:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825d5a24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825D5A24;
	// addi r31,r30,-1924
	ctx.r31.s64 = ctx.r30.s64 + -1924;
	// lis r28,-31964
	ctx.r28.s64 = -2094792704;
loc_825D5A34:
	// lwz r3,-13544(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13544);
	// bl 0x825817f8
	ctx.lr = 0x825D5A3C;
	sub_825817F8(ctx, base);
	// addi r11,r30,-1924
	ctx.r11.s64 = ctx.r30.s64 + -1924;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d5a34
	if (ctx.cr6.lt) goto loc_825D5A34;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,23144
	ctx.r29.s64 = ctx.r11.s64 + 23144;
	// addi r11,r29,-8228
	ctx.r11.s64 = ctx.r29.s64 + -8228;
	// stw r27,-8204(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8204, ctx.r27.u32);
	// stw r27,-8200(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8200, ctx.r27.u32);
	// stw r27,-8196(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8196, ctx.r27.u32);
	// stw r27,-8192(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8192, ctx.r27.u32);
	// bl 0x82a758f8
	ctx.lr = 0x825D5A78;
	sub_82A758F8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r11,21292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21292, ctx.r11.u32);
	// bl 0x82636e80
	ctx.lr = 0x825D5A88;
	sub_82636E80(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// std r27,-24(r29)
	PPC_STORE_U64(ctx.r29.u32 + -24, ctx.r27.u64);
	// addi r31,r10,-22504
	ctx.r31.s64 = ctx.r10.s64 + -22504;
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r11,18836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d5ab8
	if (ctx.cr6.eq) goto loc_825D5AB8;
	// lwz r11,18840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq cr6,0x825d5abc
	if (ctx.cr6.eq) goto loc_825D5ABC;
loc_825D5AB8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_825D5ABC:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r9,27984
	ctx.r9.s64 = ctx.r9.s64 + 27984;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lfs f0,-24756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1024
	ctx.r3.s64 = 1024;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,-12(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + -12, temp.u32);
	// stfs f0,-16(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + -16, temp.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stw r11,-8(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8, ctx.r11.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,-4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + -4, temp.u32);
	// bl 0x82547c40
	ctx.lr = 0x825D5B3C;
	sub_82547C40(ctx, base);
	// stb r27,7416(r30)
	PPC_STORE_U8(ctx.r30.u32 + 7416, ctx.r27.u8);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// stw r3,-7672(r29)
	PPC_STORE_U32(ctx.r29.u32 + -7672, ctx.r3.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r3,-7664(r29)
	PPC_STORE_U32(ctx.r29.u32 + -7664, ctx.r3.u32);
	// addi r6,r10,27568
	ctx.r6.s64 = ctx.r10.s64 + 27568;
	// stw r27,-7660(r29)
	PPC_STORE_U32(ctx.r29.u32 + -7660, ctx.r27.u32);
	// addi r10,r3,896
	ctx.r10.s64 = ctx.r3.s64 + 896;
	// addi r4,r9,-15836
	ctx.r4.s64 = ctx.r9.s64 + -15836;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,-7668(r29)
	PPC_STORE_U32(ctx.r29.u32 + -7668, ctx.r10.u32);
	// addi r3,r6,208
	ctx.r3.s64 = ctx.r6.s64 + 208;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bl 0x8257cbb8
	ctx.lr = 0x825D5B74;
	sub_8257CBB8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825d5b90
	if (!ctx.cr6.eq) goto loc_825D5B90;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,316(r6)
	PPC_STORE_U32(ctx.r6.u32 + 316, ctx.r27.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r24,416(r6)
	PPC_STORE_U32(ctx.r6.u32 + 416, ctx.r24.u32);
loc_825D5B90:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,800(r6)
	PPC_STORE_U32(ctx.r6.u32 + 800, ctx.r24.u32);
	// bl 0x825afd20
	ctx.lr = 0x825D5B9C;
	sub_825AFD20(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r11,r30,-2288
	ctx.r11.s64 = ctx.r30.s64 + -2288;
	// addi r7,r30,-2288
	ctx.r7.s64 = ctx.r30.s64 + -2288;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_825D5BB8:
	// addi r8,r30,-2288
	ctx.r8.s64 = ctx.r30.s64 + -2288;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stwu r27,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// addi r8,r8,360
	ctx.r8.s64 = ctx.r8.s64 + 360;
	// stwu r27,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r9.u32 = ea;
	// stbx r24,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r24.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x825d5bb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825D5BB8;
	// stw r27,16596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16596, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,16600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16600, ctx.r27.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11848
	ctx.r3.s64 = ctx.r11.s64 + -11848;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bl 0x82547f38
	ctx.lr = 0x825D5BFC;
	sub_82547F38(ctx, base);
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d5c20
	if (ctx.cr6.eq) goto loc_825D5C20;
	// lwz r3,-13544(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13544);
	// bl 0x82586318
	ctx.lr = 0x825D5C10;
	sub_82586318(ctx, base);
	// lwz r3,-32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// bl 0x825469e0
	ctx.lr = 0x825D5C18;
	sub_825469E0(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,-32(r30)
	PPC_STORE_U32(ctx.r30.u32 + -32, ctx.r27.u32);
loc_825D5C20:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x825D5C30;
	sub_82546708(ctx, base);
	// lwz r11,2168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2168);
	// addi r9,r31,2176
	ctx.r9.s64 = ctx.r31.s64 + 2176;
	// lwz r10,-3840(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3840);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,-32(r30)
	PPC_STORE_U32(ctx.r30.u32 + -32, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r7,-32157
	ctx.r7.s64 = -2107441152;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r31,2176
	ctx.r5.s64 = ctx.r31.s64 + 2176;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r28,-32155
	ctx.r28.s64 = -2107310080;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,28984
	ctx.r7.s64 = ctx.r7.s64 + 28984;
	// rlwinm r23,r11,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// addi r28,r28,27104
	ctx.r28.s64 = ctx.r28.s64 + 27104;
	// addi r25,r31,2176
	ctx.r25.s64 = ctx.r31.s64 + 2176;
	// lis r22,-32155
	ctx.r22.s64 = -2107310080;
	// stwx r28,r6,r5
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r28.u32);
	// addi r20,r31,2176
	ctx.r20.s64 = ctx.r31.s64 + 2176;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// rlwinm r21,r11,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r22,27368
	ctx.r6.s64 = ctx.r22.s64 + 27368;
	// addi r9,r9,27464
	ctx.r9.s64 = ctx.r9.s64 + 27464;
	// addi r7,r31,2176
	ctx.r7.s64 = ctx.r31.s64 + 2176;
	// stwx r6,r4,r25
	PPC_STORE_U32(ctx.r4.u32 + ctx.r25.u32, ctx.r6.u32);
	// lis r17,-32155
	ctx.r17.s64 = -2107310080;
	// stwx r9,r26,r20
	PPC_STORE_U32(ctx.r26.u32 + ctx.r20.u32, ctx.r9.u32);
	// rlwinm r19,r11,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r26,r17,28360
	ctx.r26.s64 = ctx.r17.s64 + 28360;
	// lis r5,-32155
	ctx.r5.s64 = -2107310080;
	// addi r16,r31,2176
	ctx.r16.s64 = ctx.r31.s64 + 2176;
	// stwx r26,r23,r7
	PPC_STORE_U32(ctx.r23.u32 + ctx.r7.u32, ctx.r26.u32);
	// rlwinm r18,r11,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r5,28400
	ctx.r7.s64 = ctx.r5.s64 + 28400;
	// addi r6,r31,2176
	ctx.r6.s64 = ctx.r31.s64 + 2176;
	// lis r4,-32155
	ctx.r4.s64 = -2107310080;
	// stwx r7,r21,r16
	PPC_STORE_U32(ctx.r21.u32 + ctx.r16.u32, ctx.r7.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r4,28616
	ctx.r7.s64 = ctx.r4.s64 + 28616;
	// addi r9,r31,2176
	ctx.r9.s64 = ctx.r31.s64 + 2176;
	// lis r25,-32155
	ctx.r25.s64 = -2107310080;
	// stwx r7,r19,r6
	PPC_STORE_U32(ctx.r19.u32 + ctx.r6.u32, ctx.r7.u32);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r25,29984
	ctx.r6.s64 = ctx.r25.s64 + 29984;
	// addi r22,r31,2176
	ctx.r22.s64 = ctx.r31.s64 + 2176;
	// lis r5,-32155
	ctx.r5.s64 = -2107310080;
	// stwx r6,r18,r9
	PPC_STORE_U32(ctx.r18.u32 + ctx.r9.u32, ctx.r6.u32);
	// addi r26,r31,2176
	ctx.r26.s64 = ctx.r31.s64 + 2176;
	// lis r4,-32165
	ctx.r4.s64 = -2107965440;
	// rlwinm r23,r11,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r31,2176
	ctx.r7.s64 = ctx.r31.s64 + 2176;
	// lis r25,-32155
	ctx.r25.s64 = -2107310080;
	// addi r5,r5,30448
	ctx.r5.s64 = ctx.r5.s64 + 30448;
	// addi r9,r4,-15544
	ctx.r9.s64 = ctx.r4.s64 + -15544;
	// addi r6,r25,31304
	ctx.r6.s64 = ctx.r25.s64 + 31304;
	// stwx r5,r8,r22
	PPC_STORE_U32(ctx.r8.u32 + ctx.r22.u32, ctx.r5.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r28,r26
	PPC_STORE_U32(ctx.r28.u32 + ctx.r26.u32, ctx.r9.u32);
	// stwx r6,r23,r7
	PPC_STORE_U32(ctx.r23.u32 + ctx.r7.u32, ctx.r6.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r11.u32);
	// beq cr6,0x825d5d5c
	if (ctx.cr6.eq) goto loc_825D5D5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8255b148
	ctx.lr = 0x825D5D5C;
	sub_8255B148(ctx, base);
loc_825D5D5C:
	// lwz r11,-3512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d5d78
	if (ctx.cr6.eq) goto loc_825D5D78;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,82
	ctx.r3.s64 = 82;
	// bl 0x8255b148
	ctx.lr = 0x825D5D74;
	sub_8255B148(ctx, base);
	// b 0x825d5dbc
	goto loc_825D5DBC;
loc_825D5D78:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r31,-21760
	ctx.r4.s64 = ctx.r31.s64 + -21760;
	// addi r3,r11,-12136
	ctx.r3.s64 = ctx.r11.s64 + -12136;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82547f38
	ctx.lr = 0x825D5D8C;
	sub_82547F38(ctx, base);
	// addi r11,r31,-21760
	ctx.r11.s64 = ctx.r31.s64 + -21760;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r10,27296
	ctx.r3.s64 = ctx.r10.s64 + 27296;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82547f38
	ctx.lr = 0x825D5DA4;
	sub_82547F38(ctx, base);
	// addi r11,r31,-21760
	ctx.r11.s64 = ctx.r31.s64 + -21760;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r10,27320
	ctx.r3.s64 = ctx.r10.s64 + 27320;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82547f38
	ctx.lr = 0x825D5DBC;
	sub_82547F38(ctx, base);
loc_825D5DBC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x8255b148
	ctx.lr = 0x825D5DC8;
	sub_8255B148(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d5de0
	if (ctx.cr6.eq) goto loc_825D5DE0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D5DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D5DE0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// addi r25,r11,308
	ctx.r25.s64 = ctx.r11.s64 + 308;
loc_825D5E08:
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x82547ca0
	ctx.lr = 0x825D5E10;
	sub_82547CA0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// lfs f0,-2460(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -2460);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825D5E28:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// bdnz 0x825d5e28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825D5E28;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// bl 0x82642f88
	ctx.lr = 0x825D5E48;
	sub_82642F88(ctx, base);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d5e08
	if (ctx.cr6.lt) goto loc_825D5E08;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_825D5E74:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a77468
	ctx.lr = 0x825D5E80;
	sub_82A77468(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825d5e98
	if (!ctx.cr0.eq) goto loc_825D5E98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_825D5E98:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r11,r25,16
	ctx.r11.s64 = ctx.r25.s64 + 16;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d5e74
	if (ctx.cr6.lt) goto loc_825D5E74;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r27,7400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7400, ctx.r27.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r27,7404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7404, ctx.r27.u32);
	// stw r27,-26636(r29)
	PPC_STORE_U32(ctx.r29.u32 + -26636, ctx.r27.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r11,-8180(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8180, ctx.r11.u32);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,31396(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 31396);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r10,-22536
	ctx.r3.s64 = ctx.r10.s64 + -22536;
	// stfs f0,-8184(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + -8184, temp.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bl 0x82555270
	ctx.lr = 0x825D5EEC;
	sub_82555270(ctx, base);
	// bl 0x82608230
	ctx.lr = 0x825D5EF0;
	sub_82608230(ctx, base);
	// bl 0x82589d20
	ctx.lr = 0x825D5EF4;
	sub_82589D20(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x825e3e80
	ctx.lr = 0x825D5F00;
	sub_825E3E80(ctx, base);
	// lwz r31,-1856(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1856);
	// stw r3,-8176(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8176, ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825d5f38
	if (ctx.cr6.eq) goto loc_825D5F38;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d5f28
	if (ctx.cr0.eq) goto loc_825D5F28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258af40
	ctx.lr = 0x825D5F24;
	sub_8258AF40(ctx, base);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
loc_825D5F28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825D5F30;
	sub_82691540(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,-1856(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1856, ctx.r27.u32);
loc_825D5F38:
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x82691500
	ctx.lr = 0x825D5F40;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d5f60
	if (ctx.cr0.eq) goto loc_825D5F60;
	// stb r27,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r27.u8);
	// stb r27,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r27.u8);
	// stw r27,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r27.u32);
	// bl 0x8258ab30
	ctx.lr = 0x825D5F58;
	sub_8258AB30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x825d5f64
	goto loc_825D5F64;
loc_825D5F60:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_825D5F64:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stw r31,-1856(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1856, ctx.r31.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825d5fb4
	if (!ctx.cr0.eq) goto loc_825D5FB4;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825d5fb0
	if (!ctx.cr0.eq) goto loc_825D5FB0;
	// stb r24,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r24.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258abc8
	ctx.lr = 0x825D5F90;
	sub_8258ABC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825d5f9c
	if (!ctx.cr0.eq) goto loc_825D5F9C;
	// stb r27,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r27.u8);
loc_825D5F9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258ae20
	ctx.lr = 0x825D5FA4;
	sub_8258AE20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825d5fb0
	if (!ctx.cr0.eq) goto loc_825D5FB0;
	// stb r27,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r27.u8);
loc_825D5FB0:
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
loc_825D5FB4:
	// bl 0x82557f50
	ctx.lr = 0x825D5FB8;
	sub_82557F50(ctx, base);
	// bl 0x82548e38
	ctx.lr = 0x825D5FBC;
	sub_82548E38(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r28,r30,2560
	ctx.r28.s64 = ctx.r30.s64 + 2560;
loc_825D5FC4:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82fa7cf0
	ctx.lr = 0x825D5FD4;
	sub_82FA7CF0(ctx, base);
	// li r5,600
	ctx.r5.s64 = 600;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x825D5FE4;
	sub_82FA7CF0(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r27.u32);
	// addi r3,r28,60
	ctx.r3.s64 = ctx.r28.s64 + 60;
	// bl 0x82fa7cf0
	ctx.lr = 0x825D5FF8;
	sub_82FA7CF0(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x825D6008;
	sub_82FA7CF0(ctx, base);
	// addi r31,r31,640
	ctx.r31.s64 = ctx.r31.s64 + 640;
	// addi r11,r30,2560
	ctx.r11.s64 = ctx.r30.s64 + 2560;
	// stw r27,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r27.u32);
	// addi r28,r28,100
	ctx.r28.s64 = ctx.r28.s64 + 100;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d5fc4
	if (ctx.cr6.lt) goto loc_825D5FC4;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r30,r11,25280
	ctx.r30.s64 = ctx.r11.s64 + 25280;
	// addi r31,r30,36
	ctx.r31.s64 = ctx.r30.s64 + 36;
loc_825D602C:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// bl 0x82fa7cf0
	ctx.lr = 0x825D603C;
	sub_82FA7CF0(ctx, base);
	// li r5,300
	ctx.r5.s64 = 300;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x825D604C;
	sub_82FA7CF0(ctx, base);
	// stw r27,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r27.u32);
	// stw r27,-36(r31)
	PPC_STORE_U32(ctx.r31.u32 + -36, ctx.r27.u32);
	// addi r11,r30,1508
	ctx.r11.s64 = ctx.r30.s64 + 1508;
	// addi r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 + 368;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d602c
	if (ctx.cr6.lt) goto loc_825D602C;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// bl 0x82fa7270
	ctx.lr = 0x825D6070;
	sub_82FA7270(ctx, base);
	// lis r4,768
	ctx.r4.s64 = 50331648;
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// bl 0x82fa7270
	ctx.lr = 0x825D607C;
	sub_82FA7270(ctx, base);
	// lwz r11,-80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d608c
	if (!ctx.cr6.eq) goto loc_825D608C;
	// bl 0x825476e8
	ctx.lr = 0x825D608C;
	sub_825476E8(ctx, base);
loc_825D608C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6094"))) PPC_WEAK_FUNC(sub_825D6094);
PPC_FUNC_IMPL(__imp__sub_825D6094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D6098"))) PPC_WEAK_FUNC(sub_825D6098);
PPC_FUNC_IMPL(__imp__sub_825D6098) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825d60d0
	if (ctx.cr6.lt) goto loc_825D60D0;
	// beq cr6,0x825d6130
	if (ctx.cr6.eq) goto loc_825D6130;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825d6100
	if (ctx.cr6.lt) goto loc_825D6100;
	// beq cr6,0x825d60f4
	if (ctx.cr6.eq) goto loc_825D60F4;
	// lwsync 
loc_825D60D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x825D60D8;
	sub_82691540(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_825D60DC:
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
loc_825D60F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825D60F8:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x825d60d0
	goto loc_825D60D0;
loc_825D6100:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825d6118
	if (!ctx.cr0.eq) goto loc_825D6118;
	// lwsync 
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
loc_825D6118:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x825469e0
	ctx.lr = 0x825D6120;
	sub_825469E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x825d60f8
	goto loc_825D60F8;
loc_825D6130:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r31,r11,29024
	ctx.r31.s64 = ctx.r11.s64 + 29024;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x825d6164
	goto loc_825D6164;
loc_825D6148:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x825d615c
	if (!ctx.cr6.lt) goto loc_825D615C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825d6164
	goto loc_825D6164;
loc_825D615C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825D6164:
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x825d6148
	if (ctx.cr0.eq) goto loc_825D6148;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825d6190
	if (ctx.cr6.eq) goto loc_825D6190;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d6190
	if (ctx.cr6.lt) goto loc_825D6190;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x825d6198
	goto loc_825D6198;
loc_825D6190:
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_825D6198:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825d61ec
	if (!ctx.cr6.eq) goto loc_825D61EC;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82691500
	ctx.lr = 0x825D61AC;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x825d61f4
	if (ctx.cr0.eq) goto loc_825D61F4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r10,r4,12
	ctx.xer.ca = ctx.r4.u32 > 4294967283;
	ctx.r10.s64 = ctx.r4.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,16(r4)
	PPC_STORE_U8(ctx.r4.u32 + 16, ctx.r11.u8);
	// stb r11,17(r4)
	PPC_STORE_U8(ctx.r4.u32 + 17, ctx.r11.u8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// beq 0x825d61e4
	if (ctx.cr0.eq) goto loc_825D61E4;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
loc_825D61E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d6760
	ctx.lr = 0x825D61EC;
	sub_825D6760(ctx, base);
loc_825D61EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d60dc
	goto loc_825D60DC;
loc_825D61F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x825D6210;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_825D6210"))) PPC_WEAK_FUNC(sub_825D6210);
PPC_FUNC_IMPL(__imp__sub_825D6210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825D6218;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r30,r11,29024
	ctx.r30.s64 = ctx.r11.s64 + 29024;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r11.u32, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x825d6294
	if (!ctx.cr6.eq) goto loc_825D6294;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,17(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825d6274
	if (!ctx.cr0.eq) goto loc_825D6274;
loc_825D624C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8232b190
	ctx.lr = 0x825D6258;
	sub_8232B190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82691540
	ctx.lr = 0x825D6264;
	sub_82691540(ctx, base);
	// lbz r11,17(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d624c
	if (ctx.cr0.eq) goto loc_825D624C;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_825D6274:
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// b 0x825d62c0
	goto loc_825D62C0;
loc_825D6294:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825d62c4
	if (ctx.cr6.eq) goto loc_825D62C4;
loc_825D629C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bl 0x8232a708
	ctx.lr = 0x825D62A8;
	sub_8232A708(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825d62d8
	ctx.lr = 0x825D62B4;
	sub_825D62D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d629c
	if (!ctx.cr6.eq) goto loc_825D629C;
loc_825D62C0:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_825D62C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825D62CC;
	sub_82691540(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D62D4"))) PPC_WEAK_FUNC(sub_825D62D4);
PPC_FUNC_IMPL(__imp__sub_825D62D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D62D8"))) PPC_WEAK_FUNC(sub_825D62D8);
PPC_FUNC_IMPL(__imp__sub_825D62D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x825D62E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,17(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d6304
	if (ctx.cr0.eq) goto loc_825D6304;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,32172
	ctx.r3.s64 = ctx.r11.s64 + 32172;
	// bl 0x82fa0680
	ctx.lr = 0x825D6304;
	sub_82FA0680(ctx, base);
loc_825D6304:
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8232a708
	ctx.lr = 0x825D6310;
	sub_8232A708(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,188(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// beq 0x825d632c
	if (ctx.cr0.eq) goto loc_825D632C;
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// b 0x825d6350
	goto loc_825D6350;
loc_825D632C:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lbz r10,17(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825d6344
	if (ctx.cr0.eq) goto loc_825D6344;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x825d6350
	goto loc_825D6350;
loc_825D6344:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825d6434
	if (!ctx.cr6.eq) goto loc_825D6434;
loc_825D6350:
	// lbz r11,17(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// lwz r31,4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825d6364
	if (!ctx.cr0.eq) goto loc_825D6364;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_825D6364:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r26,r11,29024
	ctx.r26.s64 = ctx.r11.s64 + 29024;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825d6384
	if (!ctx.cr6.eq) goto loc_825D6384;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x825d639c
	goto loc_825D639C;
loc_825D6384:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825d6398
	if (!ctx.cr6.eq) goto loc_825D6398;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x825d639c
	goto loc_825D639C;
loc_825D6398:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_825D639C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825d63e8
	if (!ctx.cr6.eq) goto loc_825D63E8;
	// lbz r11,17(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d63c0
	if (ctx.cr0.eq) goto loc_825D63C0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x825d63e0
	goto loc_825D63E0;
loc_825D63C0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x825d63d4
	goto loc_825D63D4;
loc_825D63CC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825D63D4:
	// lbz r9,17(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825d63cc
	if (ctx.cr0.eq) goto loc_825D63CC;
loc_825D63E0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_825D63E8:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825d64d0
	if (!ctx.cr6.eq) goto loc_825D64D0;
	// lbz r11,17(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d640c
	if (ctx.cr0.eq) goto loc_825D640C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x825d642c
	goto loc_825D642C;
loc_825D640C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x825d6420
	goto loc_825D6420;
loc_825D6418:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_825D6420:
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x825d6418
	if (ctx.cr0.eq) goto loc_825D6418;
loc_825D642C:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x825d64d0
	goto loc_825D64D0;
loc_825D6434:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825d6454
	if (!ctx.cr6.eq) goto loc_825D6454;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x825d647c
	goto loc_825D647C;
loc_825D6454:
	// lbz r11,17(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825d6468
	if (!ctx.cr0.eq) goto loc_825D6468;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_825D6468:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
loc_825D647C:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r26,r11,29024
	ctx.r26.s64 = ctx.r11.s64 + 29024;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825d649c
	if (!ctx.cr6.eq) goto loc_825D649C;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x825d64b8
	goto loc_825D64B8;
loc_825D649C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825d64b4
	if (!ctx.cr6.eq) goto loc_825D64B4;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x825d64b8
	goto loc_825D64B8;
loc_825D64B4:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_825D64B8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 16);
	// lbz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 16);
	// stb r11,16(r25)
	PPC_STORE_U8(ctx.r25.u32 + 16, ctx.r11.u8);
	// stb r10,16(r27)
	PPC_STORE_U8(ctx.r27.u32 + 16, ctx.r10.u8);
loc_825D64D0:
	// lbz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825d6650
	if (!ctx.cr6.eq) goto loc_825D6650;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825d664c
	if (ctx.cr6.eq) goto loc_825D664C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825D64F4:
	// lbz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825d664c
	if (!ctx.cr6.eq) goto loc_825D664C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825d65a0
	if (!ctx.cr6.eq) goto loc_825D65A0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825d6530
	if (!ctx.cr0.eq) goto loc_825D6530;
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// bl 0x825d6680
	ctx.lr = 0x825D652C;
	sub_825D6680(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_825D6530:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825d65f0
	if (!ctx.cr0.eq) goto loc_825D65F0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x825d655c
	if (!ctx.cr6.eq) goto loc_825D655C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x825d65ec
	if (ctx.cr6.eq) goto loc_825D65EC;
loc_825D655C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x825d6580
	if (!ctx.cr6.eq) goto loc_825D6580;
	// stb r29,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r29.u8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// bl 0x825d66f0
	ctx.lr = 0x825D657C;
	sub_825D66F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_825D6580:
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// bl 0x825d6680
	ctx.lr = 0x825D659C;
	sub_825D6680(ctx, base);
	// b 0x825d664c
	goto loc_825D664C;
loc_825D65A0:
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825d65c0
	if (!ctx.cr0.eq) goto loc_825D65C0;
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// bl 0x825d66f0
	ctx.lr = 0x825D65BC;
	sub_825D66F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825D65C0:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825d65f0
	if (!ctx.cr0.eq) goto loc_825D65F0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x825d660c
	if (!ctx.cr6.eq) goto loc_825D660C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x825d660c
	if (!ctx.cr6.eq) goto loc_825D660C;
loc_825D65EC:
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
loc_825D65F0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825d64f4
	if (!ctx.cr6.eq) goto loc_825D64F4;
	// b 0x825d664c
	goto loc_825D664C;
loc_825D660C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x825d6630
	if (!ctx.cr6.eq) goto loc_825D6630;
	// stb r29,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r29.u8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// bl 0x825d6680
	ctx.lr = 0x825D662C;
	sub_825D6680(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825D6630:
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// bl 0x825d66f0
	ctx.lr = 0x825D664C;
	sub_825D66F0(ctx, base);
loc_825D664C:
	// stb r29,16(r28)
	PPC_STORE_U8(ctx.r28.u32 + 16, ctx.r29.u8);
loc_825D6650:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82691540
	ctx.lr = 0x825D6658;
	sub_82691540(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d666c
	if (ctx.cr6.eq) goto loc_825D666C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
loc_825D666C:
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

__attribute__((alias("__imp__sub_825D667C"))) PPC_WEAK_FUNC(sub_825D667C);
PPC_FUNC_IMPL(__imp__sub_825D667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D6680"))) PPC_WEAK_FUNC(sub_825D6680);
PPC_FUNC_IMPL(__imp__sub_825D6680) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,17(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x825d66a0
	if (!ctx.cr0.eq) goto loc_825D66A0;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_825D66A0:
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,29024
	ctx.r10.s64 = ctx.r10.s64 + 29024;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825d66c8
	if (!ctx.cr6.eq) goto loc_825D66C8;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x825d66e4
	goto loc_825D66E4;
loc_825D66C8:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825d66e0
	if (!ctx.cr6.eq) goto loc_825D66E0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x825d66e4
	goto loc_825D66E4;
loc_825D66E0:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_825D66E4:
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D66F0"))) PPC_WEAK_FUNC(sub_825D66F0);
PPC_FUNC_IMPL(__imp__sub_825D66F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,17(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x825d6710
	if (!ctx.cr0.eq) goto loc_825D6710;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_825D6710:
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,29024
	ctx.r10.s64 = ctx.r10.s64 + 29024;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825d6738
	if (!ctx.cr6.eq) goto loc_825D6738;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x825d6754
	goto loc_825D6754;
loc_825D6738:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825d6750
	if (!ctx.cr6.eq) goto loc_825D6750;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x825d6754
	goto loc_825D6754;
loc_825D6750:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_825D6754:
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6760"))) PPC_WEAK_FUNC(sub_825D6760);
PPC_FUNC_IMPL(__imp__sub_825D6760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825D6768;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,29024
	ctx.r11.s64 = ctx.r11.s64 + 29024;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,17(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x825d67d0
	if (!ctx.cr0.eq) goto loc_825D67D0;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_825D67A0:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// subfc r8,r8,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825d67c0
	if (ctx.cr0.eq) goto loc_825D67C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825d67c4
	goto loc_825D67C4;
loc_825D67C0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_825D67C4:
	// lbz r7,17(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x825d67a0
	if (ctx.cr0.eq) goto loc_825D67A0;
loc_825D67D0:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// beq 0x825d6888
	if (ctx.cr0.eq) goto loc_825D6888;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825d6808
	if (!ctx.cr6.eq) goto loc_825D6808;
	// li r4,1
	ctx.r4.s64 = 1;
loc_825D67EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d68c0
	ctx.lr = 0x825D67F4;
	sub_825D68C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x825d68b4
	goto loc_825D68B4;
loc_825D6808:
	// lbz r11,17(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d681c
	if (ctx.cr0.eq) goto loc_825D681C;
	// lwz r31,8(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// b 0x825d6888
	goto loc_825D6888;
loc_825D681C:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lbz r11,17(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825d6850
	if (!ctx.cr0.eq) goto loc_825D6850;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x825d683c
	goto loc_825D683C;
loc_825D6834:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_825D683C:
	// lbz r9,17(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825d6834
	if (ctx.cr0.eq) goto loc_825D6834;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x825d6888
	goto loc_825D6888;
loc_825D6850:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// b 0x825d686c
	goto loc_825D686C;
loc_825D6858:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825d6878
	if (!ctx.cr6.eq) goto loc_825D6878;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_825D686C:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825d6858
	if (ctx.cr0.eq) goto loc_825D6858;
loc_825D6878:
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825d6888
	if (!ctx.cr0.eq) goto loc_825D6888;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_825D6888:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825d68a0
	if (!ctx.cr6.lt) goto loc_825D68A0;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// b 0x825d67ec
	goto loc_825D67EC;
loc_825D68A0:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82691540
	ctx.lr = 0x825D68A8;
	sub_82691540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
loc_825D68B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D68C0"))) PPC_WEAK_FUNC(sub_825D68C0);
PPC_FUNC_IMPL(__imp__sub_825D68C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x825D68C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r29,r11,29024
	ctx.r29.s64 = ctx.r11.s64 + 29024;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825d6904
	if (ctx.cr6.lt) goto loc_825D6904;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82691540
	ctx.lr = 0x825D68F8;
	sub_82691540(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-26596
	ctx.r3.s64 = ctx.r11.s64 + -26596;
	// bl 0x82fa0648
	ctx.lr = 0x825D6904;
	sub_82FA0648(ctx, base);
loc_825D6904:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825d6930
	if (!ctx.cr6.eq) goto loc_825D6930;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x825d696c
	goto loc_825D696C;
loc_825D6930:
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d6958
	if (ctx.cr0.eq) goto loc_825D6958;
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825d6970
	if (!ctx.cr6.eq) goto loc_825D6970;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// b 0x825d6970
	goto loc_825D6970;
loc_825D6958:
	// stw r30,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825d6970
	if (!ctx.cr6.eq) goto loc_825D6970;
loc_825D696C:
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_825D6970:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825d6a60
	if (!ctx.cr0.eq) goto loc_825D6A60;
	// li r27,0
	ctx.r27.s64 = 0;
loc_825D698C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825d69e8
	if (!ctx.cr6.eq) goto loc_825D69E8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825d69f8
	if (ctx.cr0.eq) goto loc_825D69F8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825d69c4
	if (!ctx.cr6.eq) goto loc_825D69C4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d6680
	ctx.lr = 0x825D69C4;
	sub_825D6680(ctx, base);
loc_825D69C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r28,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x825d66f0
	ctx.lr = 0x825D69E4;
	sub_825D66F0(ctx, base);
	// b 0x825d6a50
	goto loc_825D6A50;
loc_825D69E8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825d6a1c
	if (!ctx.cr0.eq) goto loc_825D6A1C;
loc_825D69F8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r28,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r28.u8);
	// stb r28,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825d6a50
	goto loc_825D6A50;
loc_825D6A1C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825d6a30
	if (!ctx.cr6.eq) goto loc_825D6A30;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d66f0
	ctx.lr = 0x825D6A30;
	sub_825D66F0(ctx, base);
loc_825D6A30:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r28,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x825d6680
	ctx.lr = 0x825D6A50;
	sub_825D6680(ctx, base);
loc_825D6A50:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d698c
	if (ctx.cr0.eq) goto loc_825D698C;
loc_825D6A60:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r28,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6A7C"))) PPC_WEAK_FUNC(sub_825D6A7C);
PPC_FUNC_IMPL(__imp__sub_825D6A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D6A80"))) PPC_WEAK_FUNC(sub_825D6A80);
PPC_FUNC_IMPL(__imp__sub_825D6A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r11,-3840
	ctx.r31.s64 = ctx.r11.s64 + -3840;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r30,r11,24448
	ctx.r30.s64 = ctx.r11.s64 + 24448;
	// lfs f31,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d6c98
	if (ctx.cr6.eq) goto loc_825D6C98;
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,236(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x825d6b50
	if (!ctx.cr6.lt) goto loc_825D6B50;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r1,83
	ctx.r9.s64 = ctx.r1.s64 + 83;
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lvsl v0,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r6,3008
	ctx.r9.s64 = ctx.r6.s64 + 3008;
	// vsldoi v7,v0,v0,4
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// lvx128 v11,r0,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r7,r5,2992
	ctx.r7.s64 = ctx.r5.s64 + 2992;
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// li r11,255
	ctx.r11.s64 = 255;
	// vperm v12,v11,v12,v7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vupkd3d128 v12,v12,0
	vTemp.u32[0] = ctx.v12.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v12.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v12.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v12.u8[2] | 0x3F800000;
	ctx.v12 = vTemp;
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,31412(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31412);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// vpermwi128 v0,v0,198
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x39));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x825d6c9c
	goto loc_825D6C9C;
loc_825D6B50:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825d6b60
	if (ctx.cr6.eq) goto loc_825D6B60;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x825d6b64
	goto loc_825D6B64;
loc_825D6B60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825D6B64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d6bdc
	if (ctx.cr6.eq) goto loc_825D6BDC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825d6b7c
	if (ctx.cr6.eq) goto loc_825D6B7C;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x825d6b80
	goto loc_825D6B80;
loc_825D6B7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825D6B80:
	// addi r3,r11,2076
	ctx.r3.s64 = ctx.r11.s64 + 2076;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// bl 0x82574e28
	ctx.lr = 0x825D6B8C;
	sub_82574E28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d6bd8
	if (ctx.cr0.eq) goto loc_825D6BD8;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,15312
	ctx.r7.s64 = ctx.r7.s64 + 15312;
	// lwz r11,31412(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31412);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x825d6c9c
	goto loc_825D6C9C;
loc_825D6BD8:
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
loc_825D6BDC:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f2,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f5,21836(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21836);
	ctx.f5.f64 = double(temp.f32);
	// bl 0x8255b868
	ctx.lr = 0x825D6BF4;
	sub_8255B868(ctx, base);
	// bl 0x8283c170
	ctx.lr = 0x825D6BF8;
	sub_8283C170(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,31512(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31512);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x825d6c3c
	if (!ctx.cr6.lt) goto loc_825D6C3C;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82581528
	ctx.lr = 0x825D6C20;
	sub_82581528(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,83
	ctx.r10.s64 = ctx.r1.s64 + 83;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lvsl v0,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsldoi v7,v0,v0,4
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// b 0x825d6c5c
	goto loc_825D6C5C;
loc_825D6C3C:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82581528
	ctx.lr = 0x825D6C44;
	sub_82581528(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,83
	ctx.r11.s64 = ctx.r1.s64 + 83;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lvsl v13,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsldoi v7,v13,v13,4
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v13.u8), 12));
loc_825D6C5C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r10,r7,2992
	ctx.r10.s64 = ctx.r7.s64 + 2992;
	// addi r11,r8,3008
	ctx.r11.s64 = ctx.r8.s64 + 3008;
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vperm v12,v11,v12,v7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r11,1
	ctx.r11.s64 = 1;
	// vupkd3d128 v12,v12,0
	vTemp.u32[0] = ctx.v12.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v12.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v12.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v12.u8[2] | 0x3F800000;
	ctx.v12 = vTemp;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v0,v0,198
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x39));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_825D6C98:
	// lwz r8,236(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
loc_825D6C9C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d6db4
	if (ctx.cr6.eq) goto loc_825D6DB4;
	// lfs f11,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x825d6cf8
	if (!ctx.cr6.lt) goto loc_825D6CF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// b 0x825d6db4
	goto loc_825D6DB4;
loc_825D6CF8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825d6d7c
	if (ctx.cr6.eq) goto loc_825D6D7C;
	// fcmpu cr6,f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// beq cr6,0x825d6d38
	if (ctx.cr6.eq) goto loc_825D6D38;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825d6d1c
	if (ctx.cr6.eq) goto loc_825D6D1C;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x825d6d20
	goto loc_825D6D20;
loc_825D6D1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825D6D20:
	// addi r3,r11,2076
	ctx.r3.s64 = ctx.r11.s64 + 2076;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// bl 0x82574e28
	ctx.lr = 0x825D6D2C;
	sub_82574E28(ctx, base);
	// lfs f11,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d6d7c
	if (ctx.cr0.eq) goto loc_825D6D7C;
loc_825D6D38:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825d6d7c
	if (!ctx.cr6.eq) goto loc_825D6D7C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// b 0x825d6db4
	goto loc_825D6DB4;
loc_825D6D7C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f5,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f2,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// bl 0x8255b868
	ctx.lr = 0x825D6D9C;
	sub_8255B868(ctx, base);
	// stfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// lfs f5,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x8255b868
	ctx.lr = 0x825D6DB0;
	sub_8255B868(ctx, base);
	// stfs f1,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
loc_825D6DB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6DD0"))) PPC_WEAK_FUNC(sub_825D6DD0);
PPC_FUNC_IMPL(__imp__sub_825D6DD0) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82fa8d24
	ctx.lr = 0x825D6DE8;
	__savefpr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,24448
	ctx.r11.s64 = ctx.r11.s64 + 24448;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d6e0c
	if (ctx.cr6.eq) goto loc_825D6E0C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825d6e10
	goto loc_825D6E10;
loc_825D6E0C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_825D6E10:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825d7008
	if (ctx.cr6.eq) goto loc_825D7008;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d6e28
	if (ctx.cr6.eq) goto loc_825D6E28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825d6e2c
	goto loc_825D6E2C;
loc_825D6E28:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825D6E2C:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f0,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r10,r10,23112
	ctx.r10.s64 = ctx.r10.s64 + 23112;
	// lfs f31,-2340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x825d6e50
	if (!ctx.cr6.gt) goto loc_825D6E50;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x825d6e5c
	goto loc_825D6E5C;
loc_825D6E50:
	// lfs f13,2080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2080);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_825D6E5C:
	// lwz r3,-29016(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d7008
	if (ctx.cr6.eq) goto loc_825D7008;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lfs f28,8072(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8072);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,-24756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f29.f64 = double(temp.f32);
loc_825D6E80:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 132);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825d6fd8
	if (ctx.cr6.eq) goto loc_825D6FD8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x825d6fb8
	if (ctx.cr6.eq) goto loc_825D6FB8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x825d6ef8
	if (ctx.cr6.eq) goto loc_825D6EF8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x825d6ffc
	if (!ctx.cr6.eq) goto loc_825D6FFC;
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x825d6f84
	if (!ctx.cr6.lt) goto loc_825D6F84;
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// lwz r5,128(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f13,f12,f13,f0
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x82637168
	ctx.lr = 0x825D6EDC;
	sub_82637168(ctx, base);
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// b 0x825d6ffc
	goto loc_825D6FFC;
loc_825D6EF8:
	// lbz r10,135(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 135);
	// lfs f0,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825d6f3c
	if (ctx.cr6.eq) goto loc_825D6F3C;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f1,f13,f31,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// stfs f1,60(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// beq 0x825d6f54
	if (ctx.cr0.eq) goto loc_825D6F54;
	// lfs f5,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f4,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8255b868
	ctx.lr = 0x825D6F34;
	sub_8255B868(ctx, base);
	// stfs f1,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// b 0x825d6f54
	goto loc_825D6F54;
loc_825D6F3C:
	// beq 0x825d6f54
	if (ctx.cr0.eq) goto loc_825D6F54;
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
loc_825D6F54:
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// stb r11,135(r3)
	PPC_STORE_U8(ctx.r3.u32 + 135, ctx.r11.u8);
	// beq cr6,0x825d6ffc
	if (ctx.cr6.eq) goto loc_825D6FFC;
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x825d6ffc
	if (!ctx.cr6.lt) goto loc_825D6FFC;
loc_825D6F84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d6f94
	if (ctx.cr6.eq) goto loc_825D6F94;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_825D6F94:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d6fa8
	if (ctx.cr6.eq) goto loc_825D6FA8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_825D6FA8:
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// bl 0x82547d80
	ctx.lr = 0x825D6FB4;
	sub_82547D80(ctx, base);
	// b 0x825d6ffc
	goto loc_825D6FFC;
loc_825D6FB8:
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x825d6fcc
	if (ctx.cr6.lt) goto loc_825D6FCC;
	// stfs f29,56(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// b 0x825d6fd0
	goto loc_825D6FD0;
loc_825D6FCC:
	// stfs f28,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
loc_825D6FD0:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x825d6ff4
	goto loc_825D6FF4;
loc_825D6FD8:
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x825d6fec
	if (ctx.cr6.lt) goto loc_825D6FEC;
	// stfs f29,56(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// b 0x825d6ff0
	goto loc_825D6FF0;
loc_825D6FEC:
	// stfs f28,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
loc_825D6FF0:
	// li r11,3
	ctx.r11.s64 = 3;
loc_825D6FF4:
	// stb r11,132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 132, ctx.r11.u8);
	// stb r30,135(r3)
	PPC_STORE_U8(ctx.r3.u32 + 135, ctx.r30.u8);
loc_825D6FFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d6e80
	if (!ctx.cr6.eq) goto loc_825D6E80;
loc_825D7008:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82fa8d70
	ctx.lr = 0x825D7014;
	__restfpr_27(ctx, base);
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

__attribute__((alias("__imp__sub_825D7028"))) PPC_WEAK_FUNC(sub_825D7028);
PPC_FUNC_IMPL(__imp__sub_825D7028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825D7030;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-5908
	ctx.r11.s64 = ctx.r11.s64 + -5908;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825d7154
	if (!ctx.cr6.eq) goto loc_825D7154;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lvx128 v127,r0,r3
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825d7154
	if (ctx.cr6.eq) goto loc_825D7154;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lfs f30,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-24756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f31.f64 = double(temp.f32);
loc_825D7080:
	// lbz r11,134(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 134);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d7100
	if (ctx.cr0.eq) goto loc_825D7100;
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltisw v0,1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x1)));
	// vspltisw v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f3,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// vcfsx v10,v0,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v0.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v0,r31,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v0,v127,v0
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v8,v0,v0
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vrsqrtefp v0,v8
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v8.f32))));
	// vcmpeqfp v9,v8,v11
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v8,v10
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v12,v11,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v0,v8,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8255b868
	ctx.lr = 0x825D70E8;
	sub_8255B868(ctx, base);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsel f0,f13,f1,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x825d7148
	if (ctx.cr6.eq) goto loc_825D7148;
	// b 0x825d7104
	goto loc_825D7104;
loc_825D7100:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_825D7104:
	// lbz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d7148
	if (ctx.cr0.eq) goto loc_825D7148;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x825d7130
	if (!ctx.cr6.gt) goto loc_825D7130;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x825d7148
	if (ctx.cr6.gt) goto loc_825D7148;
	// lfs f13,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// b 0x825d7134
	goto loc_825D7134;
loc_825D7130:
	// lfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
loc_825D7134:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r3,133(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 133);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmuls f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x825d72f8
	ctx.lr = 0x825D7148;
	sub_825D72F8(ctx, base);
loc_825D7148:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d7080
	if (!ctx.cr6.eq) goto loc_825D7080;
loc_825D7154:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D716C"))) PPC_WEAK_FUNC(sub_825D716C);
PPC_FUNC_IMPL(__imp__sub_825D716C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7170"))) PPC_WEAK_FUNC(sub_825D7170);
PPC_FUNC_IMPL(__imp__sub_825D7170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825D7178;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d71a0
	if (ctx.cr6.eq) goto loc_825D71A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825d71a8
	if (!ctx.cr0.eq) goto loc_825D71A8;
loc_825D71A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d7244
	goto loc_825D7244;
loc_825D71A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x825D71B4;
	sub_82546708(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d71a0
	if (ctx.cr0.eq) goto loc_825D71A0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825d721c
	if (ctx.cr6.eq) goto loc_825D721C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x825d721c
	if (!ctx.cr6.gt) goto loc_825D721C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f31,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x825d7258
	ctx.lr = 0x825D71E8;
	sub_825D7258(ctx, base);
	// stfs f30,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f31,40(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// stb r10,134(r3)
	PPC_STORE_U8(ctx.r3.u32 + 134, ctx.r10.u8);
	// stvx128 v0,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x825d7238
	goto loc_825D7238;
loc_825D721C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x825d7258
	ctx.lr = 0x825D722C;
	sub_825D7258(ctx, base);
	// stfs f30,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stfs f31,40(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
loc_825D7238:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825469e0
	ctx.lr = 0x825D7240;
	sub_825469E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_825D7244:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D7254"))) PPC_WEAK_FUNC(sub_825D7254);
PPC_FUNC_IMPL(__imp__sub_825D7254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7258"))) PPC_WEAK_FUNC(sub_825D7258);
PPC_FUNC_IMPL(__imp__sub_825D7258) {
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
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82547c40
	ctx.lr = 0x825D7278;
	sub_82547C40(ctx, base);
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a75988
	ctx.lr = 0x825D7288;
	sub_82A75988(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r11,r10,-5908
	ctx.r11.s64 = ctx.r10.s64 + -5908;
	// lwz r10,-5908(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5908);
	// b 0x825d72a0
	goto loc_825D72A0;
loc_825D7298:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825D72A0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825d7298
	if (!ctx.cr6.eq) goto loc_825D7298;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x825d72c4
	if (ctx.cr6.eq) goto loc_825D72C4;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
loc_825D72C4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r30.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,135(r31)
	PPC_STORE_U8(ctx.r31.u32 + 135, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_825D72F4"))) PPC_WEAK_FUNC(sub_825D72F4);
PPC_FUNC_IMPL(__imp__sub_825D72F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D72F8"))) PPC_WEAK_FUNC(sub_825D72F8);
PPC_FUNC_IMPL(__imp__sub_825D72F8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825d7398
	if (ctx.cr6.lt) goto loc_825D7398;
	// beq cr6,0x825d736c
	if (ctx.cr6.eq) goto loc_825D736C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825d7340
	if (ctx.cr6.lt) goto loc_825D7340;
	// bne cr6,0x825d73d4
	if (!ctx.cr6.eq) goto loc_825D73D4;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// b 0x825d73d4
	goto loc_825D73D4;
loc_825D7340:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// addi r11,r11,-2340
	ctx.r11.s64 = ctx.r11.s64 + -2340;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v12,v13,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vor v1,v12,v12
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vrlimi128 v1,v0,3,2
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 3));
	// b 0x825d73c4
	goto loc_825D73C4;
loc_825D736C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// addi r11,r11,-2340
	ctx.r11.s64 = ctx.r11.s64 + -2340;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v12,v13,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vor v1,v0,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vrlimi128 v1,v12,3,2
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// b 0x825d73c4
	goto loc_825D73C4;
loc_825D7398:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// addi r11,r11,-2340
	ctx.r11.s64 = ctx.r11.s64 + -2340;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vor v11,v13,v13
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrlimi128 v12,v0,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v11,v13,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vor v1,v12,v12
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vrlimi128 v1,v11,3,2
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
loc_825D73C4:
	// bl 0x8255c920
	ctx.lr = 0x825D73C8;
	sub_8255C920(ctx, base);
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vaddfp v0,v0,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v1.f32)));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_825D73D4:
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

__attribute__((alias("__imp__sub_825D73E8"))) PPC_WEAK_FUNC(sub_825D73E8);
PPC_FUNC_IMPL(__imp__sub_825D73E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825D73F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d741c
	if (ctx.cr6.eq) goto loc_825D741C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,48(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x825c3ba0
	ctx.lr = 0x825D7414;
	sub_825C3BA0(ctx, base);
	// stw r3,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r3.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_825D741C:
	// lwz r3,28(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d7440
	if (ctx.cr6.eq) goto loc_825D7440;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,52(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// li r5,1028
	ctx.r5.s64 = 1028;
	// bl 0x825c3ba0
	ctx.lr = 0x825D7438;
	sub_825C3BA0(ctx, base);
	// stw r3,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r3.u32);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
loc_825D7440:
	// lwz r29,32(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825d750c
	if (ctx.cr6.eq) goto loc_825D750C;
	// lis r30,-31957
	ctx.r30.s64 = -2094333952;
	// lwz r31,23064(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23064);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d7474
	if (!ctx.cr6.eq) goto loc_825D7474;
	// bl 0x825476e8
	ctx.lr = 0x825D7460;
	sub_825476E8(ctx, base);
	// lwz r31,23064(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23064);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825d7474
	if (!ctx.cr6.eq) goto loc_825D7474;
	// bl 0x825476e8
	ctx.lr = 0x825D7470;
	sub_825476E8(ctx, base);
	// lwz r31,23064(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23064);
loc_825D7474:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825d7484
	if (!ctx.cr6.eq) goto loc_825D7484;
	// bl 0x825476e8
	ctx.lr = 0x825D7484;
	sub_825476E8(ctx, base);
loc_825D7484:
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// bl 0x82a74720
	ctx.lr = 0x825D748C;
	sub_82A74720(ctx, base);
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825c63d8
	ctx.lr = 0x825D749C;
	sub_825C63D8(ctx, base);
	// bl 0x82a74720
	ctx.lr = 0x825D74A0;
	sub_82A74720(ctx, base);
	// bl 0x825c5fe0
	ctx.lr = 0x825D74A4;
	sub_825C5FE0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-19992
	ctx.r11.s64 = ctx.r11.s64 + -19992;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x825c6258
	ctx.lr = 0x825D74B8;
	sub_825C6258(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r30,40(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82547b60
	ctx.lr = 0x825D74D0;
	sub_82547B60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// ble cr6,0x825d74e4
	if (!ctx.cr6.gt) goto loc_825D74E4;
	// li r11,16
	ctx.r11.s64 = 16;
loc_825D74E4:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82a74720
	ctx.lr = 0x825D74EC;
	sub_82A74720(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825c6538
	ctx.lr = 0x825D74F4;
	sub_825C6538(ctx, base);
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// stw r29,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,32(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// bl 0x82a75988
	ctx.lr = 0x825D750C;
	sub_82A75988(ctx, base);
loc_825D750C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D7514"))) PPC_WEAK_FUNC(sub_825D7514);
PPC_FUNC_IMPL(__imp__sub_825D7514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7518"))) PPC_WEAK_FUNC(sub_825D7518);
PPC_FUNC_IMPL(__imp__sub_825D7518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vspltisw v12,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x1)));
	// addi r11,r11,31512
	ctx.r11.s64 = ctx.r11.s64 + 31512;
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// li r10,80
	ctx.r10.s64 = 80;
	// lfs f13,164(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lfs f0,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// vcfsx v10,v12,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v12.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// vspltisw v9,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_set1_epi32(int(0x0)));
	// lvlx v12,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v11,r3,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lfs f10,2236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2236);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,688(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 688);
	ctx.f9.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// vmaddfp v13,v13,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// fsel f0,f12,f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp v13,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// fsel f0,f13,f11,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// vmsum3fp128 v8,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v0,v13,v13
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// fmuls f0,f0,f10
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrsqrtefp v0,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v8.f32))));
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// vmulfp128 v13,v8,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp v9,v8,v9
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v13,v12,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v8,v9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D75D8"))) PPC_WEAK_FUNC(sub_825D75D8);
PPC_FUNC_IMPL(__imp__sub_825D75D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vspltisw v12,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x1)));
	// addi r11,r11,31512
	ctx.r11.s64 = ctx.r11.s64 + 31512;
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// li r10,80
	ctx.r10.s64 = 80;
	// lfs f13,164(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lfs f0,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// vcfsx v10,v12,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v12.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// vspltisw v9,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_set1_epi32(int(0x0)));
	// lfs f11,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lvlx v12,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v11,r3,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lfs f10,2236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2236);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,688(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 688);
	ctx.f9.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// vmaddfp v13,v13,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// fsel f0,f12,f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp v13,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// fsel f0,f13,f11,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// vmsum3fp128 v8,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v0,v13,v13
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// fmuls f0,f0,f10
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrsqrtefp v0,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v8.f32))));
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// vmulfp128 v13,v8,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp v9,v8,v9
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v13,v12,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v8,v9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// fmadds f0,f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D769C"))) PPC_WEAK_FUNC(sub_825D769C);
PPC_FUNC_IMPL(__imp__sub_825D769C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D76A0"))) PPC_WEAK_FUNC(sub_825D76A0);
PPC_FUNC_IMPL(__imp__sub_825D76A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x825D76A8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x825e3fe0
	ctx.lr = 0x825D76CC;
	sub_825E3FE0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x825d76dc
	if (!ctx.cr0.eq) goto loc_825D76DC;
loc_825D76D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d7770
	goto loc_825D7770;
loc_825D76DC:
	// lwz r11,2220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// and. r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825d76d4
	if (ctx.cr0.eq) goto loc_825D76D4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d75d8
	ctx.lr = 0x825D76FC;
	sub_825D75D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d76d4
	if (!ctx.cr0.eq) goto loc_825D76D4;
	// lwz r11,2240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r5,r31,304
	ctx.r5.s64 = ctx.r31.s64 + 304;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r11,324
	ctx.r9.s64 = ctx.r11.s64 + 324;
	// bne cr6,0x825d7720
	if (!ctx.cr6.eq) goto loc_825D7720;
	// li r9,0
	ctx.r9.s64 = 0;
loc_825D7720:
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825d7734
	if (!ctx.cr6.eq) goto loc_825D7734;
loc_825D772C:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x825d7750
	goto loc_825D7750;
loc_825D7734:
	// lwz r11,2240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d772c
	if (ctx.cr6.eq) goto loc_825D772C;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_825D7750:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8261c8b0
	ctx.lr = 0x825D7770;
	sub_8261C8B0(ctx, base);
loc_825D7770:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D777C"))) PPC_WEAK_FUNC(sub_825D777C);
PPC_FUNC_IMPL(__imp__sub_825D777C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7780"))) PPC_WEAK_FUNC(sub_825D7780);
PPC_FUNC_IMPL(__imp__sub_825D7780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x825D7788;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x825e3fe0
	ctx.lr = 0x825D77AC;
	sub_825E3FE0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x825d77bc
	if (!ctx.cr0.eq) goto loc_825D77BC;
loc_825D77B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d7850
	goto loc_825D7850;
loc_825D77BC:
	// lwz r11,2220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// and. r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825d77b4
	if (ctx.cr0.eq) goto loc_825D77B4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d75d8
	ctx.lr = 0x825D77DC;
	sub_825D75D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d77b4
	if (!ctx.cr0.eq) goto loc_825D77B4;
	// lwz r11,2240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r5,r31,304
	ctx.r5.s64 = ctx.r31.s64 + 304;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r11,324
	ctx.r9.s64 = ctx.r11.s64 + 324;
	// bne cr6,0x825d7800
	if (!ctx.cr6.eq) goto loc_825D7800;
	// li r9,0
	ctx.r9.s64 = 0;
loc_825D7800:
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825d7814
	if (!ctx.cr6.eq) goto loc_825D7814;
loc_825D780C:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x825d7830
	goto loc_825D7830;
loc_825D7814:
	// lwz r11,2240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d780c
	if (ctx.cr6.eq) goto loc_825D780C;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_825D7830:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8261ca28
	ctx.lr = 0x825D7850;
	sub_8261CA28(ctx, base);
loc_825D7850:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D785C"))) PPC_WEAK_FUNC(sub_825D785C);
PPC_FUNC_IMPL(__imp__sub_825D785C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7860"))) PPC_WEAK_FUNC(sub_825D7860);
PPC_FUNC_IMPL(__imp__sub_825D7860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x825D7868;
	__savegprlr_26(ctx, base);
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x825e3fe0
	ctx.lr = 0x825D7884;
	sub_825E3FE0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x825d7894
	if (!ctx.cr0.eq) goto loc_825D7894;
loc_825D788C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d791c
	goto loc_825D791C;
loc_825D7894:
	// lwz r11,2220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// and. r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825d788c
	if (ctx.cr0.eq) goto loc_825D788C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d7518
	ctx.lr = 0x825D78B0;
	sub_825D7518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d788c
	if (!ctx.cr0.eq) goto loc_825D788C;
	// lwz r11,2240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r5,r31,304
	ctx.r5.s64 = ctx.r31.s64 + 304;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,324
	ctx.r10.s64 = ctx.r11.s64 + 324;
	// bne cr6,0x825d78d4
	if (!ctx.cr6.eq) goto loc_825D78D4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825D78D4:
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825d78e8
	if (!ctx.cr6.eq) goto loc_825D78E8;
loc_825D78E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x825d7904
	goto loc_825D7904;
loc_825D78E8:
	// lwz r11,2240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d78e0
	if (ctx.cr6.eq) goto loc_825D78E0;
	// lwz r9,68(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_825D7904:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8261c628
	ctx.lr = 0x825D791C;
	sub_8261C628(ctx, base);
loc_825D791C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

