#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A0E3E8"))) PPC_WEAK_FUNC(sub_82A0E3E8);
PPC_FUNC_IMPL(__imp__sub_82A0E3E8) {
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
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r10,r3,2704
	ctx.r10.s64 = ctx.r3.s64 + 2704;
	// ori r7,r9,7968
	ctx.r7.u64 = ctx.r9.u64 | 7968;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r3,224
	ctx.r8.s64 = ctx.r3.s64 + 224;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// ori r6,r9,8112
	ctx.r6.u64 = ctx.r9.u64 | 8112;
loc_82A0E420:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82a0e444
	if (!ctx.cr6.eq) goto loc_82A0E444;
	// mulli r9,r4,352
	ctx.r9.s64 = ctx.r4.s64 * 352;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,324(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 324);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a0e4a4
	if (ctx.cr6.eq) goto loc_82A0E4A4;
loc_82A0E444:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x82a0e420
	if (ctx.cr6.lt) goto loc_82A0E420;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A0E45C:
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// lwzx r5,r3,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// add r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 + ctx.r7.u64;
	// addi r11,r11,7972
	ctx.r11.s64 = ctx.r11.s64 + 7972;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r9,r9,352
	ctx.r9.s64 = ctx.r9.s64 * 352;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r30,324(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 324);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82a0e4bc
	if (!ctx.cr6.eq) goto loc_82A0E4BC;
	// lwz r9,328(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 328);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82a0e4bc
	if (!ctx.cr6.eq) goto loc_82A0E4BC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x82a0e45c
	if (ctx.cr6.lt) goto loc_82A0E45C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A0E4A4:
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
loc_82A0E4BC:
	// mulli r9,r4,352
	ctx.r9.s64 = ctx.r4.s64 * 352;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,324(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 324);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bl 0x82a0cf68
	ctx.lr = 0x82A0E4D4;
	sub_82A0CF68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a0e4a4
	goto loc_82A0E4A4;
}

__attribute__((alias("__imp__sub_82A0E4DC"))) PPC_WEAK_FUNC(sub_82A0E4DC);
PPC_FUNC_IMPL(__imp__sub_82A0E4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E4E0"))) PPC_WEAK_FUNC(sub_82A0E4E0);
PPC_FUNC_IMPL(__imp__sub_82A0E4E0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r31,1
	ctx.r31.s64 = 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
loc_82A0E4F4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// slw r10,r31,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r30.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0e5b0
	if (ctx.cr0.eq) goto loc_82A0E5B0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// subfic r9,r9,48
	ctx.xer.ca = ctx.r9.u32 <= 48;
	ctx.r9.s64 = 48 - ctx.r9.s64;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwzx r7,r9,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// beq 0x82a0e56c
	if (ctx.cr0.eq) goto loc_82A0E56C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0e550
	if (ctx.cr6.eq) goto loc_82A0E550;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A0E538:
	// slw r11,r31,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r8.u8 & 0x3F));
	// and. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0e548
	if (ctx.cr0.eq) goto loc_82A0E548;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82A0E548:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82a0e538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0E538;
loc_82A0E550:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a0e5b0
	if (ctx.cr6.lt) goto loc_82A0E5B0;
	// stwx r5,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// b 0x82a0e5ac
	goto loc_82A0E5AC;
loc_82A0E56C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0e594
	if (ctx.cr6.eq) goto loc_82A0E594;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A0E57C:
	// slw r11,r31,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r8.u8 & 0x3F));
	// and. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0e58c
	if (ctx.cr0.eq) goto loc_82A0E58C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82A0E58C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82a0e57c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0E57C;
loc_82A0E594:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a0e5b0
	if (ctx.cr6.lt) goto loc_82A0E5B0;
	// stwx r5,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82A0E5AC:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82A0E5B0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x82a0e4f4
	if (ctx.cr6.lt) goto loc_82A0E4F4;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E5C8"))) PPC_WEAK_FUNC(sub_82A0E5C8);
PPC_FUNC_IMPL(__imp__sub_82A0E5C8) {
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
	// li r11,122
	ctx.r11.s64 = 122;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82a166b0
	ctx.lr = 0x82A0E5F0;
	sub_82A166B0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82a18f08
	ctx.lr = 0x82A0E5FC;
	sub_82A18F08(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,6144
	ctx.r9.s64 = 6144;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
loc_82A0E624:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// or r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 | ctx.r5.u64;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// or r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 | ctx.r4.u64;
	// bdnz 0x82a0e624
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0E624;
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0cee0
	ctx.lr = 0x82A0E648;
	sub_82A0CEE0(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// addis r30,r11,9
	ctx.r30.s64 = ctx.r11.s64 + 589824;
	// addi r30,r30,-3500
	ctx.r30.s64 = ctx.r30.s64 + -3500;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0e4e0
	ctx.lr = 0x82A0E664;
	sub_82A0E4E0(ctx, base);
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x82a0e4e0
	ctx.lr = 0x82A0E66C;
	sub_82A0E4E0(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x82a0e4e0
	ctx.lr = 0x82A0E674;
	sub_82A0E4E0(ctx, base);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x82a0e4e0
	ctx.lr = 0x82A0E67C;
	sub_82A0E4E0(ctx, base);
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

__attribute__((alias("__imp__sub_82A0E694"))) PPC_WEAK_FUNC(sub_82A0E694);
PPC_FUNC_IMPL(__imp__sub_82A0E694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E698"))) PPC_WEAK_FUNC(sub_82A0E698);
PPC_FUNC_IMPL(__imp__sub_82A0E698) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A0E6A0;
	__savegprlr_29(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bge cr6,0x82a0e6c0
	if (!ctx.cr6.lt) goto loc_82A0E6C0;
	// mulli r10,r6,28
	ctx.r10.s64 = ctx.r6.s64 * 28;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a0e6c0
	if (ctx.cr6.eq) goto loc_82A0E6C0;
	// li r6,-2
	ctx.r6.s64 = -2;
loc_82A0E6C0:
	// mulli r10,r5,352
	ctx.r10.s64 = ctx.r5.s64 * 352;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm. r10,r8,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r5,r31,224
	ctx.r5.s64 = ctx.r31.s64 + 224;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r10,320(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 320);
	// beq 0x82a0e7d8
	if (ctx.cr0.eq) goto loc_82A0E7D8;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stw r10,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r10.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r9,r9,19101
	ctx.r9.u64 = ctx.r9.u64 | 19101;
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// bge cr6,0x82a0e71c
	if (!ctx.cr6.lt) goto loc_82A0E71C;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82a0e71c
	if (ctx.cr6.eq) goto loc_82A0E71C;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bge cr6,0x82a0e71c
	if (!ctx.cr6.lt) goto loc_82A0E71C;
	// mulli r10,r6,28
	ctx.r10.s64 = ctx.r6.s64 * 28;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// stbx r30,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u8);
loc_82A0E71C:
	// lwz r10,320(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 320);
	// li r6,-1
	ctx.r6.s64 = -1;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x82a0e778
	if (!ctx.cr6.lt) goto loc_82A0E778;
	// rlwinm. r8,r8,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82a0e768
	if (!ctx.cr0.eq) goto loc_82A0E768;
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// bge cr6,0x82a0e768
	if (!ctx.cr6.lt) goto loc_82A0E768;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a0e768
	if (ctx.cr6.eq) goto loc_82A0E768;
	// mulli r8,r7,28
	ctx.r8.s64 = ctx.r7.s64 * 28;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82a0e768
	if (ctx.cr6.eq) goto loc_82A0E768;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// stbx r30,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u8);
loc_82A0E768:
	// lwz r10,544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// stw r6,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r6.u32);
loc_82A0E778:
	// cmpwi cr6,r7,-2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -2, ctx.xer);
	// beq cr6,0x82a0e7fc
	if (ctx.cr6.eq) goto loc_82A0E7FC;
	// mulli r10,r7,28
	ctx.r10.s64 = ctx.r7.s64 * 28;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a0e7fc
	if (!ctx.cr6.eq) goto loc_82A0E7FC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r9,r11,544
	ctx.r9.s64 = ctx.r11.s64 + 544;
loc_82A0E798:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82a0e7b8
	if (ctx.cr6.eq) goto loc_82A0E7B8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,352
	ctx.r9.s64 = ctx.r9.s64 + 352;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x82a0e798
	if (ctx.cr6.lt) goto loc_82A0E798;
	// b 0x82a0e7fc
	goto loc_82A0E7FC;
loc_82A0E7B8:
	// mulli r10,r10,352
	ctx.r10.s64 = ctx.r10.s64 * 352;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,544
	ctx.r9.s64 = ctx.r10.s64 + 544;
	// lwz r9,544(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 544);
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u32);
	// stw r6,544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 544, ctx.r6.u32);
	// b 0x82a0e7fc
	goto loc_82A0E7FC;
loc_82A0E7D8:
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x82a0e7fc
	if (!ctx.cr6.lt) goto loc_82A0E7FC;
	// lwz r9,544(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r7,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r7.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82A0E7FC:
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82a0e830
	if (!ctx.cr6.eq) goto loc_82A0E830;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82A0E80C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82a0e82c
	if (ctx.cr6.eq) goto loc_82A0E82C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x82a0e80c
	if (ctx.cr6.lt) goto loc_82A0E80C;
	// b 0x82a0e854
	goto loc_82A0E854;
loc_82A0E82C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82A0E830:
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bge cr6,0x82a0e854
	if (!ctx.cr6.lt) goto loc_82A0E854;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
loc_82A0E854:
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0E858"))) PPC_WEAK_FUNC(sub_82A0E858);
PPC_FUNC_IMPL(__imp__sub_82A0E858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A0E860;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82a0d680
	ctx.lr = 0x82A0E878;
	sub_82A0D680(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82a0e88c
	if (!ctx.cr0.eq) goto loc_82A0E88C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,170
	ctx.r3.u64 = ctx.r3.u64 | 170;
	// b 0x82a0e90c
	goto loc_82A0E90C;
loc_82A0E88C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,-2
	ctx.r30.s64 = -2;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a0e8c4
	if (!ctx.cr6.lt) goto loc_82A0E8C4;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a0e8b4
	if (!ctx.cr6.eq) goto loc_82A0E8B4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A0E8B4:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_82A0E8C4:
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A0E8D4;
	sub_82A75220(ctx, base);
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0E8E8;
	sub_82FA7CF0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,254
	ctx.r10.s64 = 254;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82A0E90C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0E914"))) PPC_WEAK_FUNC(sub_82A0E914);
PPC_FUNC_IMPL(__imp__sub_82A0E914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E918"))) PPC_WEAK_FUNC(sub_82A0E918);
PPC_FUNC_IMPL(__imp__sub_82A0E918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A0E920;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r3,2336
	ctx.r31.s64 = ctx.r3.s64 + 2336;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82A0E93C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0e984
	if (ctx.cr6.eq) goto loc_82A0E984;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0e968
	if (ctx.cr0.eq) goto loc_82A0E968;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82a0e968
	if (!ctx.cr6.eq) goto loc_82A0E968;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,170
	ctx.r27.u64 = ctx.r27.u64 | 170;
	// b 0x82a0e984
	goto loc_82A0E984;
loc_82A0E968:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0e858
	ctx.lr = 0x82A0E978;
	sub_82A0E858(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a0e984
	if (!ctx.cr0.lt) goto loc_82A0E984;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82A0E984:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// bne 0x82a0e93c
	if (!ctx.cr0.eq) goto loc_82A0E93C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0E99C"))) PPC_WEAK_FUNC(sub_82A0E99C);
PPC_FUNC_IMPL(__imp__sub_82A0E99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E9A0"))) PPC_WEAK_FUNC(sub_82A0E9A0);
PPC_FUNC_IMPL(__imp__sub_82A0E9A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r8,60(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r8,240(r5)
	PPC_STORE_U32(ctx.r5.u32 + 240, ctx.r8.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r8.u32);
	// stw r7,220(r5)
	PPC_STORE_U32(ctx.r5.u32 + 220, ctx.r7.u32);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r8,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r8.u32);
	// std r10,232(r5)
	PPC_STORE_U64(ctx.r5.u32 + 232, ctx.r10.u64);
	// ld r8,64(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 64);
	// std r8,256(r5)
	PPC_STORE_U64(ctx.r5.u32 + 256, ctx.r8.u64);
	// lwz r8,72(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r8,248(r5)
	PPC_STORE_U32(ctx.r5.u32 + 248, ctx.r8.u32);
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r8,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r8.u32);
	// lwz r8,36(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r8,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// stw r10,224(r5)
	PPC_STORE_U32(ctx.r5.u32 + 224, ctx.r10.u32);
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r8,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r8.u32);
	// lwz r8,84(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r8,244(r5)
	PPC_STORE_U32(ctx.r5.u32 + 244, ctx.r8.u32);
	// stw r10,52(r5)
	PPC_STORE_U32(ctx.r5.u32 + 52, ctx.r10.u32);
	// lwz r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r8,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r8.u32);
	// lwz r8,48(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82a0ea3c
	if (ctx.cr6.eq) goto loc_82A0EA3C;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,68(r5)
	PPC_STORE_U32(ctx.r5.u32 + 68, ctx.r8.u32);
loc_82A0EA3C:
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// ori r8,r8,8112
	ctx.r8.u64 = ctx.r8.u64 | 8112;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addis r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 65536;
	// addi r4,r4,10684
	ctx.r4.s64 = ctx.r4.s64 + 10684;
	// b 0x82a75220
	sub_82A75220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0EA74"))) PPC_WEAK_FUNC(sub_82A0EA74);
PPC_FUNC_IMPL(__imp__sub_82A0EA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0EA78"))) PPC_WEAK_FUNC(sub_82A0EA78);
PPC_FUNC_IMPL(__imp__sub_82A0EA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82A0EA80;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r23,0
	ctx.r23.s64 = 0;
	// ori r11,r11,19108
	ctx.r11.u64 = ctx.r11.u64 | 19108;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwzx r11,r4,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// mr r17,r23
	ctx.r17.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// li r27,-2
	ctx.r27.s64 = -2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0eae4
	if (ctx.cr6.eq) goto loc_82A0EAE4;
loc_82A0EAC8:
	// lis r17,-32761
	ctx.r17.s64 = -2147024896;
	// ori r17,r17,170
	ctx.r17.u64 = ctx.r17.u64 | 170;
loc_82A0EAD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0d838
	ctx.lr = 0x82A0EAD8;
	sub_82A0D838(ctx, base);
loc_82A0EAD8:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
loc_82A0EAE4:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0d760
	ctx.lr = 0x82A0EAF0;
	sub_82A0D760(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a0eac8
	if (ctx.cr0.eq) goto loc_82A0EAC8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19102
	ctx.r11.u64 = ctx.r11.u64 | 19102;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a0eac8
	if (!ctx.cr0.eq) goto loc_82A0EAC8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0e3e8
	ctx.lr = 0x82A0EB18;
	sub_82A0E3E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// ori r11,r11,8112
	ctx.r11.u64 = ctx.r11.u64 | 8112;
	// li r5,132
	ctx.r5.s64 = 132;
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r11,2704
	ctx.r28.s64 = ctx.r11.s64 + 2704;
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// addi r3,r3,7980
	ctx.r3.s64 = ctx.r3.s64 + 7980;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0EB44;
	sub_82FA7CF0(ctx, base);
	// li r21,1
	ctx.r21.s64 = 1;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x82a0ebc0
	if (ctx.cr6.eq) goto loc_82A0EBC0;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x82a0eb64
	if (ctx.cr6.eq) goto loc_82A0EB64;
	// lis r17,-32768
	ctx.r17.s64 = -2147483648;
	// ori r17,r17,65535
	ctx.r17.u64 = ctx.r17.u64 | 65535;
	// b 0x82a0ead0
	goto loc_82A0EAD0;
loc_82A0EB64:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// ori r11,r11,7976
	ctx.r11.u64 = ctx.r11.u64 | 7976;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r28,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82a0e698
	ctx.lr = 0x82A0EB88;
	sub_82A0E698(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82a0eba0
	if (!ctx.cr6.eq) goto loc_82A0EBA0;
	// lis r17,-31999
	ctx.r17.s64 = -2097086464;
	// ori r17,r17,6
	ctx.r17.u64 = ctx.r17.u64 | 6;
	// b 0x82a0ead0
	goto loc_82A0EAD0;
loc_82A0EBA0:
	// clrlwi. r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0ead0
	if (ctx.cr0.eq) goto loc_82A0EAD0;
	// lwz r11,320(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 320);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a0ebf4
	if (!ctx.cr6.lt) goto loc_82A0EBF4;
	// rlwinm. r11,r25,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0ead0
	if (ctx.cr0.eq) goto loc_82A0EAD0;
	// b 0x82a0ebf4
	goto loc_82A0EBF4;
loc_82A0EBC0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a16660
	ctx.lr = 0x82A0EBC8;
	sub_82A16660(ctx, base);
	// lwz r11,320(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 320);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a0ebf4
	if (!ctx.cr6.lt) goto loc_82A0EBF4;
	// mulli r11,r29,352
	ctx.r11.s64 = ctx.r29.s64 * 352;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r11,544
	ctx.r10.s64 = ctx.r11.s64 + 544;
	// lwz r10,544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// stwx r21,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r21.u32);
	// stw r9,544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 544, ctx.r9.u32);
loc_82A0EBF4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// ori r11,r11,19096
	ctx.r11.u64 = ctx.r11.u64 | 19096;
	// stw r22,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r22.u32);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// lis r17,-32768
	ctx.r17.s64 = -2147483648;
	// stw r21,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r21.u32);
	// ori r9,r9,63164
	ctx.r9.u64 = ctx.r9.u64 | 63164;
	// stw r18,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r18.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r20,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r20.u32);
	// ori r17,r17,10
	ctx.r17.u64 = ctx.r17.u64 | 10;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r23,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r23.u32);
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r11,r11,28,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x2;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r23,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r23.u32);
	// stw r23,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r23.u32);
	// stw r24,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// bl 0x82a0d9a0
	ctx.lr = 0x82A0EC6C;
	sub_82A0D9A0(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// bl 0x831792b4
	ctx.lr = 0x82A0EC88;
	__imp__KeSetEvent(ctx, base);
	// b 0x82a0ead8
	goto loc_82A0EAD8;
}

__attribute__((alias("__imp__sub_82A0EC8C"))) PPC_WEAK_FUNC(sub_82A0EC8C);
PPC_FUNC_IMPL(__imp__sub_82A0EC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0EC90"))) PPC_WEAK_FUNC(sub_82A0EC90);
PPC_FUNC_IMPL(__imp__sub_82A0EC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82A0EC98;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0ECC4;
	sub_82A0C9B8(ctx, base);
	// lis r20,-31963
	ctx.r20.s64 = -2094727168;
	// lwz r30,24028(r20)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0ECD0;
	sub_82A74720(ctx, base);
	// lis r17,-31963
	ctx.r17.s64 = -2094727168;
	// lwz r11,24036(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a0ed28
	if (!ctx.cr6.eq) goto loc_82A0ED28;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A0ECF8:
	// stw r19,24036(r17)
	PPC_STORE_U32(ctx.r17.u32 + 24036, ctx.r19.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0ED1C;
	__imp__KeReleaseMutant(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
loc_82A0ED28:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a0c960
	ctx.lr = 0x82A0ED3C;
	sub_82A0C960(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0ed5c
	if (!ctx.cr0.eq) goto loc_82A0ED5C;
	// lis r18,-31999
	ctx.r18.s64 = -2097086464;
	// ori r18,r18,8
	ctx.r18.u64 = ctx.r18.u64 | 8;
loc_82A0ED4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0d838
	ctx.lr = 0x82A0ED54;
	sub_82A0D838(ctx, base);
loc_82A0ED54:
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// b 0x82a0ecf8
	goto loc_82A0ECF8;
loc_82A0ED5C:
	// addi r29,r30,2336
	ctx.r29.s64 = ctx.r30.s64 + 2336;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82A0ED64:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0ed98
	if (ctx.cr6.eq) goto loc_82A0ED98;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0ed98
	if (!ctx.cr0.eq) goto loc_82A0ED98;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0e858
	ctx.lr = 0x82A0ED8C;
	sub_82A0E858(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a0ed98
	if (!ctx.cr0.lt) goto loc_82A0ED98;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
loc_82A0ED98:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// bne 0x82a0ed64
	if (!ctx.cr0.eq) goto loc_82A0ED64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// blt cr6,0x82a0ed4c
	if (ctx.cr6.lt) goto loc_82A0ED4C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19102
	ctx.r11.u64 = ctx.r11.u64 | 19102;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a0edc8
	if (ctx.cr0.eq) goto loc_82A0EDC8;
	// lis r18,-32761
	ctx.r18.s64 = -2147024896;
	// ori r18,r18,170
	ctx.r18.u64 = ctx.r18.u64 | 170;
loc_82A0EDC8:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// blt cr6,0x82a0ed4c
	if (ctx.cr6.lt) goto loc_82A0ED4C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0d760
	ctx.lr = 0x82A0EDDC;
	sub_82A0D760(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a0edec
	if (!ctx.cr0.eq) goto loc_82A0EDEC;
	// lis r18,-32761
	ctx.r18.s64 = -2147024896;
	// ori r18,r18,170
	ctx.r18.u64 = ctx.r18.u64 | 170;
loc_82A0EDEC:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// blt cr6,0x82a0ed4c
	if (ctx.cr6.lt) goto loc_82A0ED4C;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a0e3e8
	ctx.lr = 0x82A0EE04;
	sub_82A0E3E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r26,r11,8112
	ctx.r26.u64 = ctx.r11.u64 | 8112;
	// li r5,132
	ctx.r5.s64 = 132;
	// mullw r11,r3,r26
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r26.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r11,2704
	ctx.r29.s64 = ctx.r11.s64 + 2704;
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r3,r3,7980
	ctx.r3.s64 = ctx.r3.s64 + 7980;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0EE30;
	sub_82FA7CF0(ctx, base);
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// bne cr6,0x82a0ee70
	if (!ctx.cr6.eq) goto loc_82A0EE70;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// ori r11,r11,7976
	ctx.r11.u64 = ctx.r11.u64 | 7976;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82a0e698
	ctx.lr = 0x82A0EE5C;
	sub_82A0E698(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82a0ee70
	if (!ctx.cr6.eq) goto loc_82A0EE70;
	// lis r18,-31999
	ctx.r18.s64 = -2097086464;
	// ori r18,r18,6
	ctx.r18.u64 = ctx.r18.u64 | 6;
loc_82A0EE70:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// blt cr6,0x82a0ed4c
	if (ctx.cr6.lt) goto loc_82A0ED4C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// ori r11,r11,19096
	ctx.r11.u64 = ctx.r11.u64 | 19096;
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// ori r10,r10,63164
	ctx.r10.u64 = ctx.r10.u64 | 63164;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r19,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r19.u32);
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,28,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x2;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r19,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r19.u32);
	// stw r19,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r19.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// bne cr6,0x82a0eee8
	if (!ctx.cr6.eq) goto loc_82A0EEE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0d9a0
	ctx.lr = 0x82A0EEE0;
	sub_82A0D9A0(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// b 0x82a0eeec
	goto loc_82A0EEEC;
loc_82A0EEE8:
	// stw r21,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r21.u32);
loc_82A0EEEC:
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x82a0ef10
	if (ctx.cr6.eq) goto loc_82A0EF10;
	// li r11,-2
	ctx.r11.s64 = -2;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mullw r11,r10,r26
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,2704
	ctx.r3.s64 = ctx.r11.s64 + 2704;
	// bl 0x82a16660
	ctx.lr = 0x82A0EF10;
	sub_82A16660(ctx, base);
loc_82A0EF10:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x82a0ef20
	if (ctx.cr6.eq) goto loc_82A0EF20;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// bne cr6,0x82a0ef48
	if (!ctx.cr6.eq) goto loc_82A0EF48;
loc_82A0EF20:
	// mulli r11,r27,352
	ctx.r11.s64 = ctx.r27.s64 * 352;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x82a0ef48
	if (!ctx.cr6.lt) goto loc_82A0EF48;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// stwx r29,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r29.u32);
	// stw r9,544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 544, ctx.r9.u32);
loc_82A0EF48:
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// bl 0x831792b4
	ctx.lr = 0x82A0EF60;
	__imp__KeSetEvent(ctx, base);
	// b 0x82a0ed54
	goto loc_82A0ED54;
}

__attribute__((alias("__imp__sub_82A0EF64"))) PPC_WEAK_FUNC(sub_82A0EF64);
PPC_FUNC_IMPL(__imp__sub_82A0EF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0EF68"))) PPC_WEAK_FUNC(sub_82A0EF68);
PPC_FUNC_IMPL(__imp__sub_82A0EF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A0EF70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0EF80;
	sub_82A0C9B8(ctx, base);
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r31,24028(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0EF8C;
	sub_82A74720(ctx, base);
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// lwz r11,24036(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82a0efe0
	if (!ctx.cr6.eq) goto loc_82A0EFE0;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A0EFB4:
	// lwz r10,24028(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
loc_82A0EFC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0EFD8;
	__imp__KeReleaseMutant(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a0f0ac
	goto loc_82A0F0AC;
loc_82A0EFE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a0c960
	ctx.lr = 0x82A0EFF8;
	sub_82A0C960(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0f00c
	if (!ctx.cr0.eq) goto loc_82A0F00C;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,8
	ctx.r31.u64 = ctx.r31.u64 | 8;
	// b 0x82a0efb4
	goto loc_82A0EFB4;
loc_82A0F00C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r7,2348
	ctx.r10.s64 = ctx.r7.s64 + 2348;
loc_82A0F014:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82a0f070
	if (ctx.cr6.eq) goto loc_82A0F070;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a0f014
	if (ctx.cr6.lt) goto loc_82A0F014;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A0F034:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a0f080
	if (ctx.cr6.eq) goto loc_82A0F080;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0f080
	if (ctx.cr0.eq) goto loc_82A0F080;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82a0e858
	ctx.lr = 0x82A0F054;
	sub_82A0E858(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a0d0c0
	ctx.lr = 0x82A0F05C;
	sub_82A0D0C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r11.u32);
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// b 0x82a0efc4
	goto loc_82A0EFC4;
loc_82A0F070:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r4,r11,2336
	ctx.r4.s64 = ctx.r11.s64 + 2336;
	// b 0x82a0f034
	goto loc_82A0F034;
loc_82A0F080:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0F0A4;
	__imp__KeReleaseMutant(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82A0F0AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0F0B4"))) PPC_WEAK_FUNC(sub_82A0F0B4);
PPC_FUNC_IMPL(__imp__sub_82A0F0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0F0B8"))) PPC_WEAK_FUNC(sub_82A0F0B8);
PPC_FUNC_IMPL(__imp__sub_82A0F0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A0F0C0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0F0D0;
	sub_82A0C9B8(ctx, base);
	// lis r23,-31963
	ctx.r23.s64 = -2094727168;
	// lwz r30,24028(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0F0DC;
	sub_82A74720(ctx, base);
	// lis r21,-31963
	ctx.r21.s64 = -2094727168;
	// lwz r11,24036(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a0f280
	if (ctx.cr6.eq) goto loc_82A0F280;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r29,2524
	ctx.r11.s64 = ctx.r29.s64 + 2524;
loc_82A0F108:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a0f1d4
	if (ctx.cr6.eq) goto loc_82A0F1D4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a0f108
	if (ctx.cr6.lt) goto loc_82A0F108;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A0F12C:
	// lwz r10,24028(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24028);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0f284
	if (!ctx.cr0.eq) goto loc_82A0F284;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r7,240(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// ori r11,r11,8112
	ctx.r11.u64 = ctx.r11.u64 | 8112;
	// ori r8,r8,54480
	ctx.r8.u64 = ctx.r8.u64 | 54480;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r30,r11,2704
	ctx.r30.s64 = ctx.r11.s64 + 2704;
	// mulli r11,r7,28
	ctx.r11.s64 = ctx.r7.s64 * 28;
	// addis r26,r10,2
	ctx.r26.s64 = ctx.r10.s64 + 131072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r26,r26,19168
	ctx.r26.s64 = ctx.r26.s64 + 19168;
	// bl 0x82a16418
	ctx.lr = 0x82A0F17C;
	sub_82A16418(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a16378
	ctx.lr = 0x82A0F188;
	sub_82A16378(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a0f1a4
	if (!ctx.cr6.lt) goto loc_82A0F1A4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a0f280
	if (ctx.cr6.eq) goto loc_82A0F280;
loc_82A0F1A4:
	// lis r24,-31963
	ctx.r24.s64 = -2094727168;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,24032(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0f1dc
	if (ctx.cr6.eq) goto loc_82A0F1DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r31,220
	ctx.r6.s64 = ctx.r31.s64 + 220;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A0F1D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82a0f1e0
	goto loc_82A0F1E0;
loc_82A0F1D4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x82a0f12c
	goto loc_82A0F12C;
loc_82A0F1DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A0F1E0:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0f280
	if (!ctx.cr0.eq) goto loc_82A0F280;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82a0f224
	if (!ctx.cr6.eq) goto loc_82A0F224;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0f20c
	if (!ctx.cr6.eq) goto loc_82A0F20C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne 0x82a0f210
	if (!ctx.cr0.eq) goto loc_82A0F210;
loc_82A0F20C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A0F210:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0f224
	if (!ctx.cr0.eq) goto loc_82A0F224;
	// li r11,-5
	ctx.r11.s64 = -5;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// b 0x82a0f250
	goto loc_82A0F250;
loc_82A0F224:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// beq cr6,0x82a0f250
	if (ctx.cr6.eq) goto loc_82A0F250;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a16558
	ctx.lr = 0x82A0F240;
	sub_82A16558(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stw r22,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r22.u32);
	// ori r11,r11,19101
	ctx.r11.u64 = ctx.r11.u64 | 19101;
	// stbx r22,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r22.u8);
loc_82A0F250:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,24032(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0f280
	if (ctx.cr6.eq) goto loc_82A0F280;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A0F280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0F280:
	// lwz r10,24028(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24028);
loc_82A0F284:
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// stw r11,24036(r21)
	PPC_STORE_U32(ctx.r21.u32 + 24036, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0F2A4;
	__imp__KeReleaseMutant(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0F2AC"))) PPC_WEAK_FUNC(sub_82A0F2AC);
PPC_FUNC_IMPL(__imp__sub_82A0F2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0F2B0"))) PPC_WEAK_FUNC(sub_82A0F2B0);
PPC_FUNC_IMPL(__imp__sub_82A0F2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A0F2B8;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0F2CC;
	sub_82A0C9B8(ctx, base);
	// lis r14,-31963
	ctx.r14.s64 = -2094727168;
	// lwz r31,24028(r14)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0F2D8;
	sub_82A74720(ctx, base);
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r11,24036(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r19,r11,r31
	ctx.r19.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82a0f7dc
	if (ctx.cr6.eq) goto loc_82A0F7DC;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r19,2524
	ctx.r11.s64 = ctx.r19.s64 + 2524;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82A0F30C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a0f340
	if (ctx.cr6.eq) goto loc_82A0F340;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a0f30c
	if (ctx.cr6.lt) goto loc_82A0F30C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A0F32C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x82a0f348
	if (ctx.cr0.eq) goto loc_82A0F348;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82a0f7e4
	goto loc_82A0F7E4;
loc_82A0F340:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a0f32c
	goto loc_82A0F32C;
loc_82A0F348:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r31,24028(r14)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24028);
	// ori r11,r11,8112
	ctx.r11.u64 = ctx.r11.u64 | 8112;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// std r28,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r28.u64);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// ori r15,r8,19168
	ctx.r15.u64 = ctx.r8.u64 | 19168;
	// li r5,296
	ctx.r5.s64 = 296;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r17,r11,2704
	ctx.r17.s64 = ctx.r11.s64 + 2704;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// add r24,r31,r15
	ctx.r24.u64 = ctx.r31.u64 + ctx.r15.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0F388;
	sub_82FA7CF0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addis r31,r31,9
	ctx.r31.s64 = ctx.r31.s64 + 589824;
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0f3a0
	if (ctx.cr0.eq) goto loc_82A0F3A0;
	// addi r31,r31,-3420
	ctx.r31.s64 = ctx.r31.s64 + -3420;
	// b 0x82a0f3a4
	goto loc_82A0F3A4;
loc_82A0F3A0:
	// addi r31,r31,-3056
	ctx.r31.s64 = ctx.r31.s64 + -3056;
loc_82A0F3A4:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a16418
	ctx.lr = 0x82A0F3AC;
	sub_82A16418(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// ori r11,r11,19096
	ctx.r11.u64 = ctx.r11.u64 | 19096;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mullw r7,r7,r5
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// lwzx r11,r19,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r21,r9,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// subfc r11,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r10,r7,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r7.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r7.s64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfze r20,r6
	temp.u64 = ~ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r20.u64 = temp.u64;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// beq 0x82a0f410
	if (ctx.cr0.eq) goto loc_82A0F410;
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0f410
	if (ctx.cr0.eq) goto loc_82A0F410;
	// clrlwi. r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0f420
	if (!ctx.cr0.eq) goto loc_82A0F420;
loc_82A0F410:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq 0x82a0f424
	if (ctx.cr0.eq) goto loc_82A0F424;
loc_82A0F420:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A0F424:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r22,-31963
	ctx.r22.s64 = -2094727168;
	// clrlwi r16,r11,24
	ctx.r16.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82a0f4a8
	if (!ctx.cr6.eq) goto loc_82A0F4A8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0f4a8
	if (ctx.cr0.eq) goto loc_82A0F4A8;
	// li r11,-2
	ctx.r11.s64 = -2;
	// clrlwi. r10,r16,24
	ctx.r10.u64 = ctx.r16.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r6,r30,220
	ctx.r6.s64 = ctx.r30.s64 + 220;
	// stw r11,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r11.u32);
	// beq 0x82a0f4a0
	if (ctx.cr0.eq) goto loc_82A0F4A0;
	// lwz r11,24032(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0f488
	if (ctx.cr6.eq) goto loc_82A0F488;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A0F480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24032(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
	// b 0x82a0f48c
	goto loc_82A0F48C;
loc_82A0F488:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82A0F48C:
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a0f6e8
	if (!ctx.cr0.eq) goto loc_82A0F6E8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82A0F4A0:
	// lwz r11,24032(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
	// b 0x82a0f6e8
	goto loc_82A0F6E8;
loc_82A0F4A8:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a164b8
	ctx.lr = 0x82A0F4B0;
	sub_82A164B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a0f4a0
	if (ctx.cr0.eq) goto loc_82A0F4A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r27,r1,376
	ctx.r27.s64 = ctx.r1.s64 + 376;
	// addi r31,r1,240
	ctx.r31.s64 = ctx.r1.s64 + 240;
	// li r25,4
	ctx.r25.s64 = 4;
	// lfs f31,5180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f31.f64 = double(temp.f32);
	// ori r23,r10,54480
	ctx.r23.u64 = ctx.r10.u64 | 54480;
loc_82A0F4D4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a0f4e8
	if (ctx.cr6.eq) goto loc_82A0F4E8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0f668
	if (!ctx.cr6.eq) goto loc_82A0F668;
loc_82A0F4E8:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0f668
	if (ctx.cr6.eq) goto loc_82A0F668;
	// lwz r3,24032(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0f518
	if (ctx.cr6.eq) goto loc_82A0F518;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A0F518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0F518:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r5,r31,-128
	ctx.r5.s64 = ctx.r31.s64 + -128;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a16078
	ctx.lr = 0x82A0F538;
	sub_82A16078(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0f558
	if (!ctx.cr6.eq) goto loc_82A0F558;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82A0F558:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82A0F55C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,28
	ctx.r26.s64 = ctx.r26.s64 + 28;
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// blt cr6,0x82a0f4d4
	if (ctx.cr6.lt) goto loc_82A0F4D4;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// clrlwi r9,r21,24
	ctx.r9.u64 = ctx.r21.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// li r8,2
	ctx.r8.s64 = 2;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// stw r10,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// subfe r10,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r18,0
	ctx.xer.ca = ctx.r18.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r18.s64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// and r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 & ctx.r25.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r11,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r11.u32);
	// ori r5,r5,4424
	ctx.r5.u64 = ctx.r5.u64 | 4424;
	// li r4,296
	ctx.r4.s64 = 296;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a84340
	ctx.lr = 0x82A0F5D8;
	sub_82A84340(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a0f4a0
	if (ctx.cr0.lt) goto loc_82A0F4A0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r29,-2
	ctx.r29.s64 = -2;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a0f614
	if (!ctx.cr6.lt) goto loc_82A0F614;
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// lwzx r10,r10,r19
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a0f614
	if (!ctx.cr6.eq) goto loc_82A0F614;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// ori r10,r10,7976
	ctx.r10.u64 = ctx.r10.u64 | 7976;
	// stwx r11,r17,r10
	PPC_STORE_U32(ctx.r17.u32 + ctx.r10.u32, ctx.r11.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82A0F614:
	// addi r31,r30,220
	ctx.r31.s64 = ctx.r30.s64 + 220;
	// stw r11,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r11.u32);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82a0f734
	if (ctx.cr6.eq) goto loc_82A0F734;
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// beq cr6,0x82a0f734
	if (ctx.cr6.eq) goto loc_82A0F734;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a0f7b4
	if (!ctx.cr6.lt) goto loc_82A0F7B4;
	// lwz r11,24032(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0f68c
	if (ctx.cr6.eq) goto loc_82A0F68C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A0F660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24032(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
	// b 0x82a0f690
	goto loc_82A0F690;
loc_82A0F668:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,-128
	ctx.r9.s64 = -128;
loc_82A0F678:
	// stwx r25,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r25.u32);
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a0f678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0F678;
	// b 0x82a0f55c
	goto loc_82A0F55C;
loc_82A0F68C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A0F690:
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a0f6e4
	if (!ctx.cr0.eq) goto loc_82A0F6E4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a0f6d4
	if (ctx.cr0.eq) goto loc_82A0F6D4;
	// lwz r11,24028(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24028);
	// mullw r10,r10,r23
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// bl 0x82a165f0
	ctx.lr = 0x82A0F6C4;
	sub_82A165F0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,19101
	ctx.r11.u64 = ctx.r11.u64 | 19101;
	// stbx r10,r19,r11
	PPC_STORE_U8(ctx.r19.u32 + ctx.r11.u32, ctx.r10.u8);
loc_82A0F6D4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,24032(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
loc_82A0F6E4:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82A0F6E8:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a0f7dc
	if (!ctx.cr0.eq) goto loc_82A0F7DC;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a0f7dc
	if (ctx.cr6.lt) goto loc_82A0F7DC;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x82a0f7bc
	if (ctx.cr6.eq) goto loc_82A0F7BC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r6,r30,220
	ctx.r6.s64 = ctx.r30.s64 + 220;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A0F730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82a0f7c0
	goto loc_82A0F7C0;
loc_82A0F734:
	// clrlwi. r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0f7b4
	if (ctx.cr0.eq) goto loc_82A0F7B4;
	// lwz r11,24032(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0f770
	if (ctx.cr6.eq) goto loc_82A0F770;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A0F768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24032(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
	// b 0x82a0f774
	goto loc_82A0F774;
loc_82A0F770:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A0F774:
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a0f6e4
	if (!ctx.cr0.eq) goto loc_82A0F6E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// bne cr6,0x82a0f78c
	if (!ctx.cr6.eq) goto loc_82A0F78C;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82A0F78C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r11,24036(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24036, ctx.r11.u32);
	// lwz r11,24028(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// b 0x82a0f7f0
	goto loc_82A0F7F0;
loc_82A0F7B4:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82a0f4a0
	goto loc_82A0F4A0;
loc_82A0F7BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A0F7C0:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0f7dc
	if (!ctx.cr0.eq) goto loc_82A0F7DC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,-5
	ctx.r10.s64 = -5;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82A0F7DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A0F7E4:
	// lwz r10,24028(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24028);
	// stw r11,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
loc_82A0F7F0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0F800;
	__imp__KeReleaseMutant(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0F80C"))) PPC_WEAK_FUNC(sub_82A0F80C);
PPC_FUNC_IMPL(__imp__sub_82A0F80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0F810"))) PPC_WEAK_FUNC(sub_82A0F810);
PPC_FUNC_IMPL(__imp__sub_82A0F810) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// beq 0x82a0f830
	if (ctx.cr0.eq) goto loc_82A0F830;
	// addi r11,r11,-3420
	ctx.r11.s64 = ctx.r11.s64 + -3420;
	// b 0x82a0f834
	goto loc_82A0F834;
loc_82A0F830:
	// addi r11,r11,-3056
	ctx.r11.s64 = ctx.r11.s64 + -3056;
loc_82A0F834:
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a0f854
	if (!ctx.cr6.lt) goto loc_82A0F854;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82A0F854:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0F864"))) PPC_WEAK_FUNC(sub_82A0F864);
PPC_FUNC_IMPL(__imp__sub_82A0F864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0F868"))) PPC_WEAK_FUNC(sub_82A0F868);
PPC_FUNC_IMPL(__imp__sub_82A0F868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A0F870;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0F880;
	sub_82A0C9B8(ctx, base);
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// lwz r30,24028(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0F88C;
	sub_82A74720(ctx, base);
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwz r11,24036(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a0f8b4
	if (!ctx.cr6.eq) goto loc_82A0F8B4;
loc_82A0F8AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a0fabc
	goto loc_82A0FABC;
loc_82A0F8B4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a0f8cc
	if (ctx.cr6.eq) goto loc_82A0F8CC;
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// b 0x82a0f90c
	goto loc_82A0F90C;
loc_82A0F8CC:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a0da80
	ctx.lr = 0x82A0F8D8;
	sub_82A0DA80(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// divwu r8,r11,r9
	ctx.r8.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82a0f8ac
	if (ctx.cr6.eq) goto loc_82A0F8AC;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82A0F90C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mulli r10,r10,352
	ctx.r10.s64 = ctx.r10.s64 * 352;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// blt cr6,0x82a0f99c
	if (ctx.cr6.lt) goto loc_82A0F99C;
	// beq cr6,0x82a0f960
	if (ctx.cr6.eq) goto loc_82A0F960;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bge cr6,0x82a0fac8
	if (!ctx.cr6.lt) goto loc_82A0FAC8;
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// lwz r11,24028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// stw r27,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r27.u32);
	// b 0x82a0fad4
	goto loc_82A0FAD4;
loc_82A0F960:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r9,32
	ctx.r9.s64 = 32;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r8,r8,23560
	ctx.r8.s64 = ctx.r8.s64 + 23560;
	// lvx128 v62,r10,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r10,r9
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v62,v61,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v62.f32)));
	// lvlx128 v61,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vaddfp128 v63,v62,v63
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v1,v63,v61
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	// stvx128 v1,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82a0f9ac
	goto loc_82A0F9AC;
loc_82A0F99C:
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lvx128 v1,r10,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v1,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A0F9AC:
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r10,61792
	ctx.r10.u64 = ctx.r10.u64 | 61792;
	// lfsx f13,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a0f9d8
	if (!ctx.cr6.lt) goto loc_82A0F9D8;
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// b 0x82a0fab8
	goto loc_82A0FAB8;
loc_82A0F9D8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8227b978
	ctx.lr = 0x82A0F9E8;
	sub_8227B978(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,6400
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6400, ctx.xer);
	// blt cr6,0x82a0fa04
	if (ctx.cr6.lt) goto loc_82A0FA04;
	// cmpwi cr6,r11,32007
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32007, ctx.xer);
	// bge cr6,0x82a0fa0c
	if (!ctx.cr6.lt) goto loc_82A0FA0C;
	// cmplwi cr6,r11,6400
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6400, ctx.xer);
	// bge cr6,0x82a0fa10
	if (!ctx.cr6.lt) goto loc_82A0FA10;
loc_82A0FA04:
	// li r11,6400
	ctx.r11.s64 = 6400;
	// b 0x82a0fa10
	goto loc_82A0FA10;
loc_82A0FA0C:
	// li r11,32007
	ctx.r11.s64 = 32007;
loc_82A0FA10:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a09988
	ctx.lr = 0x82A0FA30;
	sub_82A09988(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r10,r10,-240
	ctx.r10.s64 = ctx.r10.s64 + -240;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,-320
	ctx.r11.s64 = ctx.r11.s64 + -320;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,-320
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -320, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bgt cr6,0x82a0fa68
	if (ctx.cr6.gt) goto loc_82A0FA68;
	// li r9,-320
	ctx.r9.s64 = -320;
loc_82A0FA68:
	// cmpwi cr6,r9,320
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 320, ctx.xer);
	// bge cr6,0x82a0fa80
	if (!ctx.cr6.lt) goto loc_82A0FA80;
	// cmpwi cr6,r11,-320
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -320, ctx.xer);
	// bgt cr6,0x82a0fa84
	if (ctx.cr6.gt) goto loc_82A0FA84;
	// li r11,-320
	ctx.r11.s64 = -320;
	// b 0x82a0fa84
	goto loc_82A0FA84;
loc_82A0FA80:
	// li r11,320
	ctx.r11.s64 = 320;
loc_82A0FA84:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r10,-240
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -240, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bgt cr6,0x82a0fa98
	if (ctx.cr6.gt) goto loc_82A0FA98;
	// li r11,-240
	ctx.r11.s64 = -240;
loc_82A0FA98:
	// cmpwi cr6,r11,240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 240, ctx.xer);
	// bge cr6,0x82a0fab0
	if (!ctx.cr6.lt) goto loc_82A0FAB0;
	// cmpwi cr6,r10,-240
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -240, ctx.xer);
	// bgt cr6,0x82a0fab4
	if (ctx.cr6.gt) goto loc_82A0FAB4;
	// li r10,-240
	ctx.r10.s64 = -240;
	// b 0x82a0fab4
	goto loc_82A0FAB4;
loc_82A0FAB0:
	// li r10,240
	ctx.r10.s64 = 240;
loc_82A0FAB4:
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
loc_82A0FAB8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82A0FABC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A0FAC8:
	// lwz r10,24028(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// stw r11,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
loc_82A0FAD4:
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0FADC;
	__imp__KeReleaseMutant(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0FAE4"))) PPC_WEAK_FUNC(sub_82A0FAE4);
PPC_FUNC_IMPL(__imp__sub_82A0FAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0FAE8"))) PPC_WEAK_FUNC(sub_82A0FAE8);
PPC_FUNC_IMPL(__imp__sub_82A0FAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82A0FAF0;
	__savegprlr_18(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r20,-31963
	ctx.r20.s64 = -2094727168;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r11,r11,-2676
	ctx.r11.s64 = ctx.r11.s64 + -2676;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bl 0x82a78340
	ctx.lr = 0x82A0FB20;
	sub_82A78340(ctx, base);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bl 0x82af2cc8
	ctx.lr = 0x82A0FB80;
	sub_82AF2CC8(ctx, base);
	// addi r22,r28,32
	ctx.r22.s64 = ctx.r28.s64 + 32;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a16d50
	ctx.lr = 0x82A0FBA0;
	sub_82A16D50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a0fbbc
	if (!ctx.cr0.lt) goto loc_82A0FBBC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a0d160
	ctx.lr = 0x82A0FBB0;
	sub_82A0D160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A0FBB4:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
loc_82A0FBBC:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subf r27,r10,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// subf r26,r8,r9
	ctx.r26.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addis r30,r11,9
	ctx.r30.s64 = ctx.r11.s64 + 589824;
	// mullw r4,r26,r27
	ctx.r4.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r27.s32);
	// addi r30,r30,-3744
	ctx.r30.s64 = ctx.r30.s64 + -3744;
	// bl 0x82a0d110
	ctx.lr = 0x82A0FBEC;
	sub_82A0D110(ctx, base);
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82a0fc08
	if (!ctx.cr6.eq) goto loc_82A0FC08;
loc_82A0FBF8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a0d160
	ctx.lr = 0x82A0FC00;
	sub_82A0D160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a0fbb4
	goto loc_82A0FBB4;
loc_82A0FC08:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r6,216(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a08ed8
	ctx.lr = 0x82A0FC28;
	sub_82A08ED8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a0fde4
	if (ctx.cr0.lt) goto loc_82A0FDE4;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a1d230
	ctx.lr = 0x82A0FC50;
	sub_82A1D230(ctx, base);
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0fde4
	if (!ctx.cr6.eq) goto loc_82A0FDE4;
	// li r21,4
	ctx.r21.s64 = 4;
	// clrlwi. r23,r3,24
	ctx.r23.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// bne 0x82a0fd00
	if (!ctx.cr0.eq) goto loc_82A0FD00;
	// clrldi r10,r26,32
	ctx.r10.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// lfs f13,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// clrldi r9,r27,32
	ctx.r9.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// lfs f12,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfs f0,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lfs f0,11556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r7,r11,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r11.s64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r9,r10,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r10.s64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// b 0x82a0fd04
	goto loc_82A0FD04;
loc_82A0FD00:
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
loc_82A0FD04:
	// addi r10,r28,60
	ctx.r10.s64 = ctx.r28.s64 + 60;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r24,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r24.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a08fa8
	ctx.lr = 0x82A0FD28;
	sub_82A08FA8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a0fde4
	if (ctx.cr0.lt) goto loc_82A0FDE4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f2,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f1,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a08f48
	ctx.lr = 0x82A0FD44;
	sub_82A08F48(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a0fde4
	if (ctx.cr0.lt) goto loc_82A0FDE4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0fda0
	if (ctx.cr6.eq) goto loc_82A0FDA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a09100
	ctx.lr = 0x82A0FD60;
	sub_82A09100(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0fd74
	if (ctx.cr0.eq) goto loc_82A0FD74;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
loc_82A0FD74:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a090d8
	ctx.lr = 0x82A0FD7C;
	sub_82A090D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0fd90
	if (ctx.cr0.eq) goto loc_82A0FD90;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
loc_82A0FD90:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a08f78
	ctx.lr = 0x82A0FD98;
	sub_82A08F78(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A0FDA0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82a0fde4
	if (ctx.cr6.lt) goto loc_82A0FDE4;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82a0fde0
	if (ctx.cr6.eq) goto loc_82A0FDE0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82a0fdd4
	if (ctx.cr6.lt) goto loc_82A0FDD4;
	// beq cr6,0x82a0fdcc
	if (ctx.cr6.eq) goto loc_82A0FDCC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82a0fde4
	if (!ctx.cr6.eq) goto loc_82A0FDE4;
	// stw r21,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r21.u32);
	// b 0x82a0fde4
	goto loc_82A0FDE4;
loc_82A0FDCC:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82a0fdd8
	goto loc_82A0FDD8;
loc_82A0FDD4:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82A0FDD8:
	// stw r11,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r11.u32);
	// b 0x82a0fde4
	goto loc_82A0FDE4;
loc_82A0FDE0:
	// stw r31,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r31.u32);
loc_82A0FDE4:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0fdf4
	if (ctx.cr6.eq) goto loc_82A0FDF4;
	// bl 0x82a1d2e0
	ctx.lr = 0x82A0FDF4;
	sub_82A1D2E0(ctx, base);
loc_82A0FDF4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82a0fe34
	if (ctx.cr6.lt) goto loc_82A0FE34;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0fe34
	if (ctx.cr0.eq) goto loc_82A0FE34;
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0fe34
	if (!ctx.cr6.eq) goto loc_82A0FE34;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a1e598
	ctx.lr = 0x82A0FE28;
	sub_82A1E598(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a0fe34
	if (ctx.cr0.lt) goto loc_82A0FE34;
	// li r18,1
	ctx.r18.s64 = 1;
loc_82A0FE34:
	// clrlwi r5,r18,24
	ctx.r5.u64 = ctx.r18.u32 & 0xFF;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// subfic r10,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r5.s64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,31372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31372);
	// and r30,r10,r19
	ctx.r30.u64 = ctx.r10.u64 & ctx.r19.u64;
	// beq cr6,0x82a0fe5c
	if (ctx.cr6.eq) goto loc_82A0FE5C;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// b 0x82a0fe60
	goto loc_82A0FE60;
loc_82A0FE5C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82A0FE60:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ld r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ld r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// ld r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x82a0d258
	ctx.lr = 0x82A0FE80;
	sub_82A0D258(ctx, base);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// stw r11,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r11.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A0FEA4;
	sub_82A81D88(ctx, base);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// b 0x82a0fbf8
	goto loc_82A0FBF8;
}

__attribute__((alias("__imp__sub_82A0FEAC"))) PPC_WEAK_FUNC(sub_82A0FEAC);
PPC_FUNC_IMPL(__imp__sub_82A0FEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0FEB0"))) PPC_WEAK_FUNC(sub_82A0FEB0);
PPC_FUNC_IMPL(__imp__sub_82A0FEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A0FEB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x82a0fed4
	if (ctx.cr6.lt) goto loc_82A0FED4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a10040
	goto loc_82A10040;
loc_82A0FED4:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a10038
	if (ctx.cr6.eq) goto loc_82A10038;
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a10038
	if (ctx.cr6.eq) goto loc_82A10038;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0FF00;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0FF08;
	sub_82A74720(ctx, base);
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// lwz r11,24036(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a0ff5c
	if (!ctx.cr6.eq) goto loc_82A0FF5C;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A0FF30:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0FF54;
	__imp__KeReleaseMutant(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a10040
	goto loc_82A10040;
loc_82A0FF5C:
	// mulli r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 * 28;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,254
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 254, ctx.xer);
	// bne cr6,0x82a1002c
	if (!ctx.cr6.eq) goto loc_82A1002C;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a1002c
	if (!ctx.cr6.eq) goto loc_82A1002C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a0ffc8
	if (!ctx.cr6.eq) goto loc_82A0FFC8;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r10,r9,224
	ctx.r10.s64 = ctx.r9.s64 + 224;
loc_82A0FF94:
	// lwz r7,320(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82a0ffb4
	if (ctx.cr6.eq) goto loc_82A0FFB4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,352
	ctx.r10.s64 = ctx.r10.s64 + 352;
	// cmplwi cr6,r8,6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 6, ctx.xer);
	// blt cr6,0x82a0ff94
	if (ctx.cr6.lt) goto loc_82A0FF94;
	// b 0x82a0ffbc
	goto loc_82A0FFBC;
loc_82A0FFB4:
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r8,320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 320, ctx.r8.u32);
loc_82A0FFBC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82a0ffd0
	if (ctx.cr6.eq) goto loc_82A0FFD0;
loc_82A0FFC8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82a10000
	if (!ctx.cr6.eq) goto loc_82A10000;
loc_82A0FFD0:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r11,r10,19101
	ctx.r11.u64 = ctx.r10.u64 | 19101;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// bl 0x831792b4
	ctx.lr = 0x82A10000;
	__imp__KeSetEvent(ctx, base);
loc_82A10000:
	// stw r31,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A10024;
	__imp__KeReleaseMutant(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a10040
	goto loc_82A10040;
loc_82A1002C:
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,10
	ctx.r31.u64 = ctx.r31.u64 | 10;
	// b 0x82a0ff30
	goto loc_82A0FF30;
loc_82A10038:
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
loc_82A10040:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A10048"))) PPC_WEAK_FUNC(sub_82A10048);
PPC_FUNC_IMPL(__imp__sub_82A10048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A10050;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,10632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a101b8
	if (ctx.cr6.eq) goto loc_82A101B8;
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a101b8
	if (ctx.cr6.eq) goto loc_82A101B8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A10088;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A10090;
	sub_82A74720(ctx, base);
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r11,24036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82a100e4
	if (!ctx.cr6.eq) goto loc_82A100E4;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A100B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A100DC;
	__imp__KeReleaseMutant(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a101c0
	goto loc_82A101C0;
loc_82A100E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a0c960
	ctx.lr = 0x82A100F4;
	sub_82A0C960(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a10108
	if (!ctx.cr0.eq) goto loc_82A10108;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,8
	ctx.r31.u64 = ctx.r31.u64 | 8;
	// b 0x82a100b8
	goto loc_82A100B8;
loc_82A10108:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r7,2348
	ctx.r10.s64 = ctx.r7.s64 + 2348;
loc_82A10110:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82a10144
	if (ctx.cr6.eq) goto loc_82A10144;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a10110
	if (ctx.cr6.lt) goto loc_82A10110;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A10130:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a10154
	if (!ctx.cr6.eq) goto loc_82A10154;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82a100b8
	goto loc_82A100B8;
loc_82A10144:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r31,r11,2336
	ctx.r31.s64 = ctx.r11.s64 + 2336;
	// b 0x82a10130
	goto loc_82A10130;
loc_82A10154:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1016c
	if (!ctx.cr0.eq) goto loc_82A1016C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,170
	ctx.r31.u64 = ctx.r31.u64 | 170;
	// b 0x82a100b8
	goto loc_82A100B8;
loc_82A1016C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82a10188
	if (!ctx.cr6.eq) goto loc_82A10188;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82a0d9a0
	ctx.lr = 0x82A10180;
	sub_82A0D9A0(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// b 0x82a1018c
	goto loc_82A1018C;
loc_82A10188:
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
loc_82A1018C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A101B0;
	__imp__KeReleaseMutant(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a101c0
	goto loc_82A101C0;
loc_82A101B8:
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
loc_82A101C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A101C8"))) PPC_WEAK_FUNC(sub_82A101C8);
PPC_FUNC_IMPL(__imp__sub_82A101C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A101D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A101DC;
	sub_82A0C9B8(ctx, base);
	// lis r24,-31963
	ctx.r24.s64 = -2094727168;
	// lwz r31,24028(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A101E8;
	sub_82A74720(ctx, base);
	// lis r23,-31963
	ctx.r23.s64 = -2094727168;
	// lwz r11,24036(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a10210
	if (!ctx.cr6.eq) goto loc_82A10210;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a10304
	goto loc_82A10304;
loc_82A10210:
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// li r25,254
	ctx.r25.s64 = 254;
	// ori r29,r11,19101
	ctx.r29.u64 = ctx.r11.u64 | 19101;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82A1022C:
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83178da4
	ctx.lr = 0x82A1023C;
	__imp__XamUserNuiGetUserIndex(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a10274
	if (ctx.cr0.lt) goto loc_82A10274;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a102cc
	if (ctx.cr6.eq) goto loc_82A102CC;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stbx r28,r30,r29
	PPC_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r28.u8);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a102cc
	if (!ctx.cr6.eq) goto loc_82A102CC;
	// stw r28,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r28.u32);
	// stw r27,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r27.u32);
	// b 0x82a102cc
	goto loc_82A102CC;
loc_82A10274:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// beq cr6,0x82a102cc
	if (ctx.cr6.eq) goto loc_82A102CC;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r27,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r27.u32);
	// stbx r28,r30,r29
	PPC_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r28.u8);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a102c8
	if (!ctx.cr6.eq) goto loc_82A102C8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r11,r30,224
	ctx.r11.s64 = ctx.r30.s64 + 224;
loc_82A102A0:
	// lwz r9,320(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82a102c0
	if (ctx.cr6.eq) goto loc_82A102C0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,352
	ctx.r11.s64 = ctx.r11.s64 + 352;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x82a102a0
	if (ctx.cr6.lt) goto loc_82A102A0;
	// b 0x82a102c8
	goto loc_82A102C8;
loc_82A102C0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r10.u32);
loc_82A102C8:
	// stw r27,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r27.u32);
loc_82A102CC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplwi cr6,r26,8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 8, ctx.xer);
	// blt cr6,0x82a1022c
	if (ctx.cr6.lt) goto loc_82A1022C;
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a10300
	if (ctx.cr0.eq) goto loc_82A10300;
	// lwz r11,24028(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// bl 0x831792b4
	ctx.lr = 0x82A10300;
	__imp__KeSetEvent(ctx, base);
loc_82A10300:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82A10304:
	// stw r11,24036(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24036, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A10324;
	__imp__KeReleaseMutant(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1032C"))) PPC_WEAK_FUNC(sub_82A1032C);
PPC_FUNC_IMPL(__imp__sub_82A1032C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A10330"))) PPC_WEAK_FUNC(sub_82A10330);
PPC_FUNC_IMPL(__imp__sub_82A10330) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r10,r11,29312
	ctx.r10.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10632(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a10368
	if (!ctx.cr6.eq) goto loc_82A10368;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82a10604
	goto loc_82A10604;
loc_82A10368:
	// addis r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -196608;
	// addi r11,r11,16382
	ctx.r11.s64 = ctx.r11.s64 + 16382;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgt cr6,0x82a105fc
	if (ctx.cr6.gt) goto loc_82A105FC;
	// lis r12,-32250
	ctx.r12.s64 = -2113536000;
	// addi r12,r12,-24800
	ctx.r12.s64 = ctx.r12.s64 + -24800;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32095
	ctx.r12.s64 = -2103377920;
	// nop 
	// addi r12,r12,928
	ctx.r12.s64 = ctx.r12.s64 + 928;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A103A0;
	case 1:
		goto loc_82A105FC;
	case 2:
		goto loc_82A105FC;
	case 3:
		goto loc_82A105FC;
	case 4:
		goto loc_82A103B0;
	case 5:
		goto loc_82A103EC;
	case 6:
		goto loc_82A10414;
	case 7:
		goto loc_82A105FC;
	case 8:
		goto loc_82A1052C;
	case 9:
		goto loc_82A104E8;
	case 10:
		goto loc_82A105FC;
	case 11:
		goto loc_82A105FC;
	case 12:
		goto loc_82A10520;
	case 13:
		goto loc_82A103A8;
	case 14:
		goto loc_82A105FC;
	case 15:
		goto loc_82A1041C;
	case 16:
		goto loc_82A10484;
	case 17:
		goto loc_82A104A8;
	case 18:
		goto loc_82A10548;
	case 19:
		goto loc_82A1056C;
	case 20:
		goto loc_82A105A4;
	case 21:
		goto loc_82A105D0;
	default:
		__builtin_unreachable();
	}
loc_82A103A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a10604
	goto loc_82A10604;
loc_82A103A8:
	// bl 0x82a101c8
	ctx.lr = 0x82A103AC;
	sub_82A101C8(ctx, base);
	// b 0x82a103a0
	goto loc_82A103A0;
loc_82A103B0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a103c0
	if (!ctx.cr0.eq) goto loc_82A103C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_82A103C0:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// oris r6,r11,32768
	ctx.r6.u64 = ctx.r11.u64 | 2147483648;
	// ori r9,r9,62120
	ctx.r9.u64 = ctx.r9.u64 | 62120;
	// lwz r11,24028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24028);
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_82A103E0:
	// li r3,2
	ctx.r3.s64 = 2;
loc_82A103E4:
	// bl 0x82a0ec90
	ctx.lr = 0x82A103E8;
	sub_82A0EC90(ctx, base);
	// b 0x82a10604
	goto loc_82A10604;
loc_82A103EC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A103F0:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r10,r10,62116
	ctx.r10.u64 = ctx.r10.u64 | 62116;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82a103e4
	goto loc_82A103E4;
loc_82A10414:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82a103f0
	goto loc_82A103F0;
loc_82A1041C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// blt cr6,0x82a10478
	if (ctx.cr6.lt) goto loc_82A10478;
	// lwz r30,10676(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10676);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82a10478
	if (ctx.cr0.eq) goto loc_82A10478;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82af2cc8
	ctx.lr = 0x82A1044C;
	sub_82AF2CC8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82A10478:
	// li r11,24
	ctx.r11.s64 = 24;
loc_82A1047C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82a10604
	goto loc_82A10604;
loc_82A10484:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82a104a0
	if (ctx.cr6.lt) goto loc_82A104A0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a0feb0
	ctx.lr = 0x82A104A0;
	sub_82A0FEB0(ctx, base);
loc_82A104A0:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82a1047c
	goto loc_82A1047C;
loc_82A104A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82a104e0
	if (ctx.cr6.lt) goto loc_82A104E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a141d0
	ctx.lr = 0x82A104C8;
	sub_82A141D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a104e0
	if (ctx.cr0.lt) goto loc_82A104E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A104E0:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82a1047c
	goto loc_82A1047C;
loc_82A104E8:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,63204
	ctx.r8.u64 = ctx.r11.u64 | 63204;
	// lwz r11,24028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24028);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// sync 
	// lwz r11,24028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// bl 0x831792b4
	ctx.lr = 0x82A1051C;
	__imp__KeSetEvent(ctx, base);
	// b 0x82a103a0
	goto loc_82A103A0;
loc_82A10520:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a0ef68
	ctx.lr = 0x82A10528;
	sub_82A0EF68(ctx, base);
	// b 0x82a10604
	goto loc_82A10604;
loc_82A1052C:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r10,61816
	ctx.r10.u64 = ctx.r10.u64 | 61816;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82a1047c
	goto loc_82A1047C;
loc_82A10548:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// blt cr6,0x82a10604
	if (ctx.cr6.lt) goto loc_82A10604;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a10048
	ctx.lr = 0x82A10568;
	sub_82A10048(ctx, base);
	// b 0x82a10604
	goto loc_82A10604;
loc_82A1056C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x82a10604
	if (ctx.cr6.lt) goto loc_82A10604;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a10590
	if (!ctx.cr0.eq) goto loc_82A10590;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_82A10590:
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// oris r6,r11,32768
	ctx.r6.u64 = ctx.r11.u64 | 2147483648;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82a103e0
	goto loc_82A103E0;
loc_82A105A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// blt cr6,0x82a10604
	if (ctx.cr6.lt) goto loc_82A10604;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a103e4
	goto loc_82A103E4;
loc_82A105D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// blt cr6,0x82a10604
	if (ctx.cr6.lt) goto loc_82A10604;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82a103e4
	goto loc_82A103E4;
loc_82A105FC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_82A10604:
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

__attribute__((alias("__imp__sub_82A1061C"))) PPC_WEAK_FUNC(sub_82A1061C);
PPC_FUNC_IMPL(__imp__sub_82A1061C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A10620"))) PPC_WEAK_FUNC(sub_82A10620);
PPC_FUNC_IMPL(__imp__sub_82A10620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A10628;
	__savegprlr_22(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A10638;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r31,r27,40
	ctx.r31.s64 = ctx.r27.s64 + 40;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1064C;
	sub_82FA7CF0(ctx, base);
	// li r11,256
	ctx.r11.s64 = 256;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r11,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r25,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r25.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83178dd4
	ctx.lr = 0x82A10668;
	__imp__XamProfileCreateEnumerator(ctx, base);
	// lis r22,-32761
	ctx.r22.s64 = -2147024896;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82a1067c
	if (ctx.cr0.gt) goto loc_82A1067C;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82a10684
	goto loc_82A10684;
loc_82A1067C:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r30,r11,r22
	ctx.r30.u64 = ctx.r11.u64 | ctx.r22.u64;
loc_82A10684:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82a107f4
	if (ctx.cr6.lt) goto loc_82A107F4;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// addi r24,r31,-8
	ctx.r24.s64 = ctx.r31.s64 + -8;
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
loc_82A1069C:
	// cmpwi cr6,r26,256
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 256, ctx.xer);
	// bge cr6,0x82a107d4
	if (!ctx.cr6.lt) goto loc_82A107D4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83178dc4
	ctx.lr = 0x82A106B8;
	__imp__XamProfileEnumerate(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82a106c8
	if (ctx.cr0.gt) goto loc_82A106C8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82a106d0
	goto loc_82A106D0;
loc_82A106C8:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r30,r11,r22
	ctx.r30.u64 = ctx.r11.u64 | ctx.r22.u64;
loc_82A106D0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82a106ec
	if (ctx.cr6.lt) goto loc_82A106EC;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82a106ec
	if (ctx.cr6.eq) goto loc_82A106EC;
	// stdu r11,8(r24)
	ea = 8 + ctx.r24.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r24.u32 = ea;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82A106EC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// std r25,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r25.u64);
	// beq cr6,0x82a107cc
	if (ctx.cr6.eq) goto loc_82A107CC;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83179414
	ctx.lr = 0x82A10710;
	__imp__KeWaitForSingleObject(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a107cc
	if (!ctx.cr0.eq) goto loc_82A107CC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A10720;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A10728;
	sub_82A74720(ctx, base);
	// lwz r11,24036(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a10758
	if (ctx.cr6.eq) goto loc_82A10758;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,19108
	ctx.r10.u64 = ctx.r10.u64 | 19108;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a10764
	if (!ctx.cr6.eq) goto loc_82A10764;
loc_82A10758:
	// lis r30,-31999
	ctx.r30.s64 = -2097086464;
	// ori r30,r30,5
	ctx.r30.u64 = ctx.r30.u64 | 5;
	// b 0x82a107a8
	goto loc_82A107A8;
loc_82A10764:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r11,2336
	ctx.r11.s64 = ctx.r11.s64 + 2336;
loc_82A1076C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a10784
	if (ctx.cr6.eq) goto loc_82A10784;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a10808
	if (!ctx.cr0.eq) goto loc_82A10808;
loc_82A10784:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a1076c
	if (ctx.cr6.lt) goto loc_82A1076C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82A10798:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a107a8
	if (!ctx.cr0.eq) goto loc_82A107A8;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16388
	ctx.r30.u64 = ctx.r30.u64 | 16388;
loc_82A107A8:
	// stw r25,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A107CC;
	__imp__KeReleaseMutant(ctx, base);
loc_82A107CC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82a1069c
	if (!ctx.cr6.lt) goto loc_82A1069C;
loc_82A107D4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a756a0
	ctx.lr = 0x82A107DC;
	sub_82A756A0(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,18
	ctx.r11.u64 = ctx.r11.u64 | 18;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 & ctx.r30.u64;
loc_82A107F4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A107FC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82A10808:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a10798
	goto loc_82A10798;
}

__attribute__((alias("__imp__sub_82A10810"))) PPC_WEAK_FUNC(sub_82A10810);
PPC_FUNC_IMPL(__imp__sub_82A10810) {
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
	// bl 0x831791a4
	ctx.lr = 0x82A10828;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A10838;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82A1084C"))) PPC_WEAK_FUNC(sub_82A1084C);
PPC_FUNC_IMPL(__imp__sub_82A1084C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A10850"))) PPC_WEAK_FUNC(sub_82A10850);
PPC_FUNC_IMPL(__imp__sub_82A10850) {
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
	// bl 0x831791a4
	ctx.lr = 0x82A1086C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// blt cr6,0x82a108a0
	if (ctx.cr6.lt) goto loc_82A108A0;
loc_82A10878:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A1087C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A10884;
	__imp__RtlLeaveCriticalSection(ctx, base);
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
loc_82A108A0:
	// addi r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 5;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82a108c4
	if (ctx.cr6.eq) goto loc_82A108C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// b 0x82a1087c
	goto loc_82A1087C;
loc_82A108C4:
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x82a10878
	goto loc_82A10878;
}

__attribute__((alias("__imp__sub_82A108D0"))) PPC_WEAK_FUNC(sub_82A108D0);
PPC_FUNC_IMPL(__imp__sub_82A108D0) {
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
	// sth r4,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r4.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,126
	ctx.r4.s64 = ctx.r1.s64 + 126;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A10900;
	sub_82A75220(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A10920"))) PPC_WEAK_FUNC(sub_82A10920);
PPC_FUNC_IMPL(__imp__sub_82A10920) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A10950;
	sub_82A75220(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A10970"))) PPC_WEAK_FUNC(sub_82A10970);
PPC_FUNC_IMPL(__imp__sub_82A10970) {
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
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A109A0;
	sub_82A75220(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A109C0"))) PPC_WEAK_FUNC(sub_82A109C0);
PPC_FUNC_IMPL(__imp__sub_82A109C0) {
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
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,127
	ctx.r4.s64 = ctx.r1.s64 + 127;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A109F0;
	sub_82A75220(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A10A10"))) PPC_WEAK_FUNC(sub_82A10A10);
PPC_FUNC_IMPL(__imp__sub_82A10A10) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A10A40;
	sub_82A75220(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A10A60"))) PPC_WEAK_FUNC(sub_82A10A60);
PPC_FUNC_IMPL(__imp__sub_82A10A60) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r5,r11,40080
	ctx.r5.u64 = ctx.r11.u64 | 40080;
	// ori r11,r10,40084
	ctx.r11.u64 = ctx.r10.u64 | 40084;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwx r31,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r31.u32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stwx r31,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r31.u32);
	// bl 0x82a75988
	ctx.lr = 0x82A10AA0;
	sub_82A75988(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,40088
	ctx.r11.u64 = ctx.r11.u64 | 40088;
	// stwx r31,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82A10AC4"))) PPC_WEAK_FUNC(sub_82A10AC4);
PPC_FUNC_IMPL(__imp__sub_82A10AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A10AC8"))) PPC_WEAK_FUNC(sub_82A10AC8);
PPC_FUNC_IMPL(__imp__sub_82A10AC8) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r5,r11,40080
	ctx.r5.u64 = ctx.r11.u64 | 40080;
	// ori r10,r10,40084
	ctx.r10.u64 = ctx.r10.u64 | 40084;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stwx r11,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r11,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x82a75988
	ctx.lr = 0x82A10B00;
	sub_82A75988(ctx, base);
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

__attribute__((alias("__imp__sub_82A10B18"))) PPC_WEAK_FUNC(sub_82A10B18);
PPC_FUNC_IMPL(__imp__sub_82A10B18) {
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
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a10b50
	if (ctx.cr6.eq) goto loc_82A10B50;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,63164
	ctx.r10.u64 = ctx.r10.u64 | 63164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a10b50
	if (!ctx.cr0.eq) goto loc_82A10B50;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a842b8
	ctx.lr = 0x82A10B50;
	sub_82A842B8(ctx, base);
loc_82A10B50:
	// bl 0x82a0de00
	ctx.lr = 0x82A10B54;
	sub_82A0DE00(ctx, base);
	// bl 0x82a0dfa8
	ctx.lr = 0x82A10B58;
	sub_82A0DFA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A10B68"))) PPC_WEAK_FUNC(sub_82A10B68);
PPC_FUNC_IMPL(__imp__sub_82A10B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A10B70;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a10b90
	if (!ctx.cr6.eq) goto loc_82A10B90;
loc_82A10B84:
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82a10c78
	goto loc_82A10C78;
loc_82A10B90:
	// lis r10,8
	ctx.r10.s64 = 524288;
	// rlwinm. r9,r3,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ori r28,r10,63164
	ctx.r28.u64 = ctx.r10.u64 | 63164;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// ori r27,r11,128
	ctx.r27.u64 = ctx.r11.u64 | 128;
	// bne 0x82a10bb0
	if (!ctx.cr0.eq) goto loc_82A10BB0;
	// rlwinm r27,r11,0,25,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
loc_82A10BB0:
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a10c74
	if (ctx.cr6.eq) goto loc_82A10C74;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A10BC0;
	sub_82A0C9B8(ctx, base);
	// lwz r29,24028(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A10BC8;
	sub_82A74720(ctx, base);
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r11,24036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a10c10
	if (!ctx.cr6.eq) goto loc_82A10C10;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A10C0C;
	__imp__KeReleaseMutant(ctx, base);
	// b 0x82a10b84
	goto loc_82A10B84;
loc_82A10C10:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,19104
	ctx.r9.u64 = ctx.r11.u64 | 19104;
	// ori r10,r10,19108
	ctx.r10.u64 = ctx.r10.u64 | 19108;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// stbx r11,r3,r9
	PPC_STORE_U8(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u8);
	// stwx r11,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x82a0e918
	ctx.lr = 0x82A10C38;
	sub_82A0E918(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24036, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A10C60;
	__imp__KeReleaseMutant(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a10c74
	if (ctx.cr6.lt) goto loc_82A10C74;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// stwx r27,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r27.u32);
	// bl 0x82a0d0c0
	ctx.lr = 0x82A10C74;
	sub_82A0D0C0(ctx, base);
loc_82A10C74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A10C78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A10C80"))) PPC_WEAK_FUNC(sub_82A10C80);
PPC_FUNC_IMPL(__imp__sub_82A10C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A10C88;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r31,r4,48
	ctx.r31.s64 = ctx.r4.s64 + 48;
	// addi r30,r3,544
	ctx.r30.s64 = ctx.r3.s64 + 544;
	// li r26,6
	ctx.r26.s64 = 6;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r22,-4
	ctx.r22.s64 = -4;
	// lis r23,-31963
	ctx.r23.s64 = -2094727168;
loc_82A10CAC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r30,-320
	ctx.r29.s64 = ctx.r30.s64 + -320;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a10cc8
	if (!ctx.cr6.lt) goto loc_82A10CC8;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82A10CC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a10ce4
	if (!ctx.cr6.eq) goto loc_82A10CE4;
	// li r5,320
	ctx.r5.s64 = 320;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A10CE4;
	sub_82A75220(ctx, base);
loc_82A10CE4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a10da0
	if (!ctx.cr6.eq) goto loc_82A10DA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a10d0c
	if (!ctx.cr6.eq) goto loc_82A10D0C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a10da0
	if (ctx.cr6.eq) goto loc_82A10DA0;
loc_82A10D0C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a10d24
	if (ctx.cr6.eq) goto loc_82A10D24;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
loc_82A10D24:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r28,2348
	ctx.r10.s64 = ctx.r28.s64 + 2348;
loc_82A10D30:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a10dbc
	if (ctx.cr6.eq) goto loc_82A10DBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a10d30
	if (ctx.cr6.lt) goto loc_82A10D30;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82A10D50:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a10d90
	if (ctx.cr6.eq) goto loc_82A10D90;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a0e858
	ctx.lr = 0x82A10D64;
	sub_82A0E858(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19103
	ctx.r11.u64 = ctx.r11.u64 | 19103;
	// lbzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a10d90
	if (ctx.cr0.eq) goto loc_82A10D90;
	// lwz r11,24028(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// bl 0x831792b4
	ctx.lr = 0x82A10D90;
	__imp__KeSetEvent(ctx, base);
loc_82A10D90:
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r25,336(r29)
	PPC_STORE_U64(ctx.r29.u32 + 336, ctx.r25.u64);
	// stw r25,344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 344, ctx.r25.u32);
	// stw r11,320(r29)
	PPC_STORE_U32(ctx.r29.u32 + 320, ctx.r11.u32);
loc_82A10DA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a0c1c8
	ctx.lr = 0x82A10DAC;
	sub_82A0C1C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a10dcc
	if (ctx.cr0.eq) goto loc_82A10DCC;
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// b 0x82a10dd4
	goto loc_82A10DD4;
loc_82A10DBC:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r11,2336
	ctx.r4.s64 = ctx.r11.s64 + 2336;
	// b 0x82a10d50
	goto loc_82A10D50;
loc_82A10DCC:
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82A10DD4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a10de4
	if (ctx.cr6.eq) goto loc_82A10DE4;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// b 0x82a10de8
	goto loc_82A10DE8;
loc_82A10DE4:
	// li r11,254
	ctx.r11.s64 = 254;
loc_82A10DE8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r30,r30,352
	ctx.r30.s64 = ctx.r30.s64 + 352;
	// stw r10,328(r29)
	PPC_STORE_U32(ctx.r29.u32 + 328, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r31,r31,448
	ctx.r31.s64 = ctx.r31.s64 + 448;
	// stw r11,324(r29)
	PPC_STORE_U32(ctx.r29.u32 + 324, ctx.r11.u32);
	// bne 0x82a10cac
	if (!ctx.cr0.eq) goto loc_82A10CAC;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// ori r11,r11,19096
	ctx.r11.u64 = ctx.r11.u64 | 19096;
	// addi r29,r24,56
	ctx.r29.s64 = ctx.r24.s64 + 56;
	// addi r31,r28,568
	ctx.r31.s64 = ctx.r28.s64 + 568;
	// li r26,-2
	ctx.r26.s64 = -2;
	// stwx r10,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82A10E2C:
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a10f90
	if (!ctx.cr6.eq) goto loc_82A10F90;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a0e3e8
	ctx.lr = 0x82A10E44;
	sub_82A0E3E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,-24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// ori r11,r11,8112
	ctx.r11.u64 = ctx.r11.u64 | 8112;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r27,r11,2704
	ctx.r27.s64 = ctx.r11.s64 + 2704;
	// bne cr6,0x82a10e94
	if (!ctx.cr6.eq) goto loc_82A10E94;
	// lwz r11,24028(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24028);
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r11,r11,-2684
	ctx.r11.s64 = ctx.r11.s64 + -2684;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82a78340
	ctx.lr = 0x82A10E78;
	sub_82A78340(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a160f0
	ctx.lr = 0x82A10E8C;
	sub_82A160F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0d160
	ctx.lr = 0x82A10E94;
	sub_82A0D160(ctx, base);
loc_82A10E94:
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24028);
	// ori r10,r10,63164
	ctx.r10.u64 = ctx.r10.u64 | 63164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a10f90
	if (ctx.cr0.eq) goto loc_82A10F90;
	// bl 0x83178de4
	ctx.lr = 0x82A10EB0;
	__imp__XamIsUIActive(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a10f90
	if (!ctx.cr0.eq) goto loc_82A10F90;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82a10ef0
	if (!ctx.cr6.eq) goto loc_82A10EF0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,-4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,-344
	ctx.r5.s64 = ctx.r31.s64 + -344;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a0ea78
	ctx.lr = 0x82A10EEC;
	sub_82A0EA78(ctx, base);
	// b 0x82a10f7c
	goto loc_82A10F7C;
loc_82A10EF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82a10f90
	if (ctx.cr0.eq) goto loc_82A10F90;
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// bne cr6,0x82a10f3c
	if (!ctx.cr6.eq) goto loc_82A10F3C;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x82a10f3c
	if (ctx.cr6.eq) goto loc_82A10F3C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,-4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,-344
	ctx.r5.s64 = ctx.r31.s64 + -344;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a0ea78
	ctx.lr = 0x82A10F38;
	sub_82A0EA78(ctx, base);
	// b 0x82a10f7c
	goto loc_82A10F7C;
loc_82A10F3C:
	// cmpwi cr6,r10,-5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -5, ctx.xer);
	// bne cr6,0x82a10f90
	if (!ctx.cr6.eq) goto loc_82A10F90;
	// rlwinm. r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a10f90
	if (!ctx.cr0.eq) goto loc_82A10F90;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,-344
	ctx.r5.s64 = ctx.r31.s64 + -344;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r7,-4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x82a0ea78
	ctx.lr = 0x82A10F7C;
	sub_82A0EA78(ctx, base);
loc_82A10F7C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,10
	ctx.r11.u64 = ctx.r11.u64 | 10;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a10f90
	if (!ctx.cr6.eq) goto loc_82A10F90;
	// stw r22,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r22.u32);
loc_82A10F90:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,448
	ctx.r29.s64 = ctx.r29.s64 + 448;
	// addi r31,r31,352
	ctx.r31.s64 = ctx.r31.s64 + 352;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// blt cr6,0x82a10e2c
	if (ctx.cr6.lt) goto loc_82A10E2C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A10FAC"))) PPC_WEAK_FUNC(sub_82A10FAC);
PPC_FUNC_IMPL(__imp__sub_82A10FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A10FB0"))) PPC_WEAK_FUNC(sub_82A10FB0);
PPC_FUNC_IMPL(__imp__sub_82A10FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A10FB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82a0cfc0
	ctx.lr = 0x82A10FC8;
	sub_82A0CFC0(ctx, base);
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A10FD8;
	sub_82FA7CF0(ctx, base);
	// lis r10,17
	ctx.r10.s64 = 1114112;
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// ori r30,r10,32768
	ctx.r30.u64 = ctx.r10.u64 | 32768;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r11,r11,-16080
	ctx.r11.s64 = ctx.r11.s64 + -16080;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r4,8349
	ctx.r4.s64 = 547160064;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82691410
	ctx.lr = 0x82A11008;
	sub_82691410(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ori r11,r11,63160
	ctx.r11.u64 = ctx.r11.u64 | 63160;
	// stwx r4,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u32);
	// beq 0x82a11048
	if (ctx.cr0.eq) goto loc_82A11048;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82a80ec0
	ctx.lr = 0x82A11034;
	sub_82A80EC0(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r11,r11,63156
	ctx.r11.u64 = ctx.r11.u64 | 63156;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// bne 0x82a11054
	if (!ctx.cr0.eq) goto loc_82A11054;
loc_82A11048:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82a1106c
	goto loc_82A1106C;
loc_82A11054:
	// addis r3,r31,9
	ctx.r3.s64 = ctx.r31.s64 + 589824;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,-3744
	ctx.r3.s64 = ctx.r3.s64 + -3744;
	// bl 0x82a0dce0
	ctx.lr = 0x82A11064;
	sub_82A0DCE0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82a11078
	if (!ctx.cr0.lt) goto loc_82A11078;
loc_82A1106C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0df38
	ctx.lr = 0x82A11074;
	sub_82A0DF38(ctx, base);
	// b 0x82a11128
	goto loc_82A11128;
loc_82A11078:
	// addis r3,r31,9
	ctx.r3.s64 = ctx.r31.s64 + 589824;
	// addi r3,r3,-2360
	ctx.r3.s64 = ctx.r3.s64 + -2360;
	// bl 0x82a0ca60
	ctx.lr = 0x82A11084;
	sub_82A0CA60(ctx, base);
	// addis r3,r31,9
	ctx.r3.s64 = ctx.r31.s64 + 589824;
	// addi r3,r3,-272
	ctx.r3.s64 = ctx.r3.s64 + -272;
	// bl 0x82a1aef8
	ctx.lr = 0x82A11090;
	sub_82A1AEF8(ctx, base);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// addis r10,r31,9
	ctx.r10.s64 = ctx.r31.s64 + 589824;
	// addi r11,r11,-2428
	ctx.r11.s64 = ctx.r11.s64 + -2428;
	// addis r9,r31,9
	ctx.r9.s64 = ctx.r31.s64 + 589824;
	// addi r10,r10,-2412
	ctx.r10.s64 = ctx.r10.s64 + -2412;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r9,-2396
	ctx.r9.s64 = ctx.r9.s64 + -2396;
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// stb r5,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// bl 0x83179704
	ctx.lr = 0x82A110FC;
	__imp__KeInitializeMutant(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r11,r11,63164
	ctx.r11.u64 = ctx.r11.u64 | 63164;
	// stwx r29,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u32);
	// bl 0x83178db4
	ctx.lr = 0x82A1110C;
	__imp__XamNuiIdentityGetSessionId(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19160
	ctx.r11.u64 = ctx.r11.u64 | 19160;
	// stdx r3,r31,r11
	PPC_STORE_U64(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u64);
	// bl 0x83178d64
	ctx.lr = 0x82A1111C;
	__imp__XamGetCurrentTitleId(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19156
	ctx.r11.u64 = ctx.r11.u64 | 19156;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
loc_82A11128:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A11134"))) PPC_WEAK_FUNC(sub_82A11134);
PPC_FUNC_IMPL(__imp__sub_82A11134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A11138"))) PPC_WEAK_FUNC(sub_82A11138);
PPC_FUNC_IMPL(__imp__sub_82A11138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A11140;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r3.u32);
	// addi r3,r1,305
	ctx.r3.s64 = ctx.r1.s64 + 305;
	// stw r4,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r4.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r5,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r5.u32);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A11168;
	sub_82A0C9B8(ctx, base);
	// lis r20,-31963
	ctx.r20.s64 = -2094727168;
	// stw r20,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r20.u32);
	// lwz r31,24028(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A11178;
	sub_82A74720(ctx, base);
	// lis r19,-31963
	ctx.r19.s64 = -2094727168;
	// stw r19,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r19.u32);
	// lwz r11,24036(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 & ctx.r31.u64;
	// stw r29,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82a111a8
	if (!ctx.cr6.eq) goto loc_82A111A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a11d8c
	goto loc_82A11D8C;
loc_82A111A8:
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a11214
	if (ctx.cr6.eq) goto loc_82A11214;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// lwz r8,20(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r9,r29,2348
	ctx.r9.s64 = ctx.r29.s64 + 2348;
	// mulli r10,r10,352
	ctx.r10.s64 = ctx.r10.s64 * 352;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r27,r10,224
	ctx.r27.s64 = ctx.r10.s64 + 224;
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
loc_82A111D4:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82a11204
	if (ctx.cr6.eq) goto loc_82A11204;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a111d4
	if (ctx.cr6.lt) goto loc_82A111D4;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82A111F4:
	// stw r30,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a11228
	if (!ctx.cr6.eq) goto loc_82A11228;
	// b 0x82a11d88
	goto loc_82A11D88;
loc_82A11204:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r30,r11,2336
	ctx.r30.s64 = ctx.r11.s64 + 2336;
	// b 0x82a111f4
	goto loc_82A111F4;
loc_82A11214:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mulli r11,r11,352
	ctx.r11.s64 = ctx.r11.s64 * 352;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r27,r11,224
	ctx.r27.s64 = ctx.r11.s64 + 224;
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
loc_82A11228:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// ori r11,r11,8112
	ctx.r11.u64 = ctx.r11.u64 | 8112;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,2704
	ctx.r31.s64 = ctx.r11.s64 + 2704;
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// beq cr6,0x82a11254
	if (ctx.cr6.eq) goto loc_82A11254;
	// ld r25,232(r26)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r26.u32 + 232);
	// b 0x82a11258
	goto loc_82A11258;
loc_82A11254:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_82A11258:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r23,2
	ctx.r23.s64 = 2;
	// std r25,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r25.u64);
	// li r21,-1
	ctx.r21.s64 = -1;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r24,-2
	ctx.r24.s64 = -2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a11280
	if (ctx.cr6.eq) goto loc_82A11280;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a11370
	if (!ctx.cr6.eq) goto loc_82A11370;
loc_82A11280:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// blt cr6,0x82a11314
	if (ctx.cr6.lt) goto loc_82A11314;
	// lwz r11,220(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 220);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a11300
	if (!ctx.cr6.lt) goto loc_82A11300;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a11300
	if (!ctx.cr6.eq) goto loc_82A11300;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,19101
	ctx.r10.u64 = ctx.r10.u64 | 19101;
	// stbx r28,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r28.u8);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r10,220(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 220);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a11300
	if (ctx.cr6.eq) goto loc_82A11300;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a11300
	if (!ctx.cr6.lt) goto loc_82A11300;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a112f4
	if (!ctx.cr6.eq) goto loc_82A112F4;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// b 0x82a112f8
	goto loc_82A112F8;
loc_82A112F4:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A112F8:
	// stw r22,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r22.u32);
	// stw r24,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r24.u32);
loc_82A11300:
	// lwz r11,220(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 220);
	// stw r11,320(r27)
	PPC_STORE_U32(ctx.r27.u32 + 320, ctx.r11.u32);
	// ld r11,232(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 232);
	// std r11,336(r27)
	PPC_STORE_U64(ctx.r27.u32 + 336, ctx.r11.u64);
	// b 0x82a11370
	goto loc_82A11370;
loc_82A11314:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a11350
	if (!ctx.cr6.eq) goto loc_82A11350;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a11350
	if (!ctx.cr6.lt) goto loc_82A11350;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a11344
	if (!ctx.cr6.eq) goto loc_82A11344;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// b 0x82a11348
	goto loc_82A11348;
loc_82A11344:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A11348:
	// stw r22,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r22.u32);
	// stw r24,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r24.u32);
loc_82A11350:
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a11368
	if (!ctx.cr6.eq) goto loc_82A11368;
	// stw r21,320(r27)
	PPC_STORE_U32(ctx.r27.u32 + 320, ctx.r21.u32);
	// b 0x82a11370
	goto loc_82A11370;
loc_82A11368:
	// li r11,-5
	ctx.r11.s64 = -5;
	// stw r11,320(r27)
	PPC_STORE_U32(ctx.r27.u32 + 320, ctx.r11.u32);
loc_82A11370:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a11870
	if (ctx.cr6.eq) goto loc_82A11870;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a1139c
	if (ctx.cr6.eq) goto loc_82A1139C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82a11c24
	if (!ctx.cr6.eq) goto loc_82A11C24;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// blt cr6,0x82a11c24
	if (ctx.cr6.lt) goto loc_82A11C24;
	// bl 0x82a0dc80
	ctx.lr = 0x82A11398;
	sub_82A0DC80(ctx, base);
	// b 0x82a11c24
	goto loc_82A11C24;
loc_82A1139C:
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r22,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r22.u8);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stb r22,305(r1)
	PPC_STORE_U8(ctx.r1.u32 + 305, ctx.r22.u8);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A113B4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a113c8
	if (ctx.cr6.eq) goto loc_82A113C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a113ec
	if (!ctx.cr6.eq) goto loc_82A113EC;
loc_82A113C8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// bge cr6,0x82a113ec
	if (!ctx.cr6.lt) goto loc_82A113EC;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
loc_82A113EC:
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bdnz 0x82a113b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A113B4;
	// addi r11,r1,392
	ctx.r11.s64 = ctx.r1.s64 + 392;
	// std r22,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r22.u64);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stb r9,305(r1)
	PPC_STORE_U8(ctx.r1.u32 + 305, ctx.r9.u8);
	// stb r10,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r10.u8);
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// bl 0x83178d74
	ctx.lr = 0x82A11410;
	__imp__XamGetActiveDashAppInfo(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r10,255
	ctx.r10.s64 = 255;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// blt cr6,0x82a11428
	if (ctx.cr6.lt) goto loc_82A11428;
	// stw r10,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
loc_82A11428:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// blt cr6,0x82a1143c
	if (ctx.cr6.lt) goto loc_82A1143C;
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
loc_82A1143C:
	// li r10,4096
	ctx.r10.s64 = 4096;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// li r9,2048
	ctx.r9.s64 = 2048;
	// lwz r29,320(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 320);
	// li r8,1024
	ctx.r8.s64 = 1024;
	// lwz r27,84(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r26,80(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r7,512
	ctx.r7.s64 = 512;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subfic r10,r10,18411
	ctx.xer.ca = ctx.r10.u32 <= 18411;
	ctx.r10.s64 = 18411 - ctx.r10.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subfic r9,r9,18411
	ctx.xer.ca = ctx.r9.u32 <= 18411;
	ctx.r9.s64 = 18411 - ctx.r9.s64;
	// subfic r8,r8,18411
	ctx.xer.ca = ctx.r8.u32 <= 18411;
	ctx.r8.s64 = 18411 - ctx.r8.s64;
	// li r6,256
	ctx.r6.s64 = 256;
	// subfic r7,r7,18411
	ctx.xer.ca = ctx.r7.u32 <= 18411;
	ctx.r7.s64 = 18411 - ctx.r7.s64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,64
	ctx.r4.s64 = 64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,32
	ctx.r3.s64 = 32;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// li r25,16
	ctx.r25.s64 = 16;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// li r24,8
	ctx.r24.s64 = 8;
	// subfic r6,r6,18411
	ctx.xer.ca = ctx.r6.u32 <= 18411;
	ctx.r6.s64 = 18411 - ctx.r6.s64;
	// lwzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwzx r7,r7,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// li r22,4
	ctx.r22.s64 = 4;
	// stw r10,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// subfic r5,r5,18411
	ctx.xer.ca = ctx.r5.u32 <= 18411;
	ctx.r5.s64 = 18411 - ctx.r5.s64;
	// stw r9,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r9.u32);
	// cntlzw r25,r25
	ctx.r25.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// subfic r4,r4,18411
	ctx.xer.ca = ctx.r4.u32 <= 18411;
	ctx.r4.s64 = 18411 - ctx.r4.s64;
	// stw r8,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r8.u32);
	// cntlzw r24,r24
	ctx.r24.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// stw r7,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r7.u32);
	// subfic r3,r3,18411
	ctx.xer.ca = ctx.r3.u32 <= 18411;
	ctx.r3.s64 = 18411 - ctx.r3.s64;
	// cntlzw r22,r22
	ctx.r22.u64 = ctx.r22.u32 == 0 ? 32 : __builtin_clz(ctx.r22.u32);
	// subfic r25,r25,18411
	ctx.xer.ca = ctx.r25.u32 <= 18411;
	ctx.r25.s64 = 18411 - ctx.r25.s64;
	// cntlzw r23,r23
	ctx.r23.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// subfic r24,r24,18411
	ctx.xer.ca = ctx.r24.u32 <= 18411;
	ctx.r24.s64 = 18411 - ctx.r24.s64;
	// cntlzw r28,r28
	ctx.r28.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r22,r22,18411
	ctx.xer.ca = ctx.r22.u32 <= 18411;
	ctx.r22.s64 = 18411 - ctx.r22.s64;
	// subfic r23,r23,18411
	ctx.xer.ca = ctx.r23.u32 <= 18411;
	ctx.r23.s64 = 18411 - ctx.r23.s64;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// subfic r28,r28,18411
	ctx.xer.ca = ctx.r28.u32 <= 18411;
	ctx.r28.s64 = 18411 - ctx.r28.s64;
	// lwzx r5,r5,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lis r21,8
	ctx.r21.s64 = 524288;
	// lwzx r4,r4,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r5.u32);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r25,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// ori r7,r21,62876
	ctx.r7.u64 = ctx.r21.u64 | 62876;
	// lwzx r23,r10,r31
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lis r25,8
	ctx.r25.s64 = 524288;
	// lwzx r21,r9,r31
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addis r22,r11,9
	ctx.r22.s64 = ctx.r11.s64 + 589824;
	// lwzx r3,r3,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// lwzx r24,r24,r31
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// ori r10,r25,62877
	ctx.r10.u64 = ctx.r25.u64 | 62877;
	// lwzx r31,r8,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// addi r22,r22,-3744
	ctx.r22.s64 = ctx.r22.s64 + -3744;
	// lbzx r20,r11,r7
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// stw r4,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r4.u32);
	// stw r3,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbzx r19,r11,r10
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lfs f31,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f31.f64 = double(temp.f32);
	// lwz r17,392(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// ld r16,384(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// bl 0x82a0dae8
	ctx.lr = 0x82A1159C;
	sub_82A0DAE8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82a0dae8
	ctx.lr = 0x82A115A8;
	sub_82A0DAE8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a0dae8
	ctx.lr = 0x82A115B4;
	sub_82A0DAE8(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a0dae8
	ctx.lr = 0x82A115C0;
	sub_82A0DAE8(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r22,24(r22)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// bl 0x83178db4
	ctx.lr = 0x82A115D0;
	__imp__XamNuiIdentityGetSessionId(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r8,320(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r9,336(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r26,340(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// stb r18,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r18.u8);
	// clrlwi r6,r22,16
	ctx.r6.u64 = ctx.r22.u32 & 0xFFFF;
	// stb r25,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r25.u8);
	// addi r3,r11,10536
	ctx.r3.s64 = ctx.r11.s64 + 10536;
	// stb r8,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r8.u8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stb r10,271(r1)
	PPC_STORE_U8(ctx.r1.u32 + 271, ctx.r10.u8);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// stw r26,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r26.u32);
	// lwz r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r30,348(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r26,352(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lwz r24,360(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r23,364(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r22,368(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// lbz r28,304(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 304);
	// ld r25,376(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// lbz r29,305(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 305);
	// lwz r18,628(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// stb r15,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r15.u8);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// stw r24,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r24.u32);
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// stw r22,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r22.u32);
	// stb r28,231(r1)
	PPC_STORE_U8(ctx.r1.u32 + 231, ctx.r28.u8);
	// std r25,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r25.u64);
	// stb r29,247(r1)
	PPC_STORE_U8(ctx.r1.u32 + 247, ctx.r29.u8);
	// stb r19,255(r1)
	PPC_STORE_U8(ctx.r1.u32 + 255, ctx.r19.u8);
	// stb r20,263(r1)
	PPC_STORE_U8(ctx.r1.u32 + 263, ctx.r20.u8);
	// stb r27,279(r1)
	PPC_STORE_U8(ctx.r1.u32 + 279, ctx.r27.u8);
	// stb r31,287(r1)
	PPC_STORE_U8(ctx.r1.u32 + 287, ctx.r31.u8);
	// std r16,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r16.u64);
	// stw r17,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r17.u32);
	// bl 0x82a0cc38
	ctx.lr = 0x82A116AC;
	sub_82A0CC38(ctx, base);
	// lwz r20,328(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r27,332(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// addis r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 65536;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// addi r4,r4,-32128
	ctx.r4.s64 = ctx.r4.s64 + -32128;
	// addis r31,r11,9
	ctx.r31.s64 = ctx.r11.s64 + 589824;
	// addi r31,r31,-272
	ctx.r31.s64 = ctx.r31.s64 + -272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b088
	ctx.lr = 0x82A116D0;
	sub_82A1B088(ctx, base);
	// lwz r30,612(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a11c04
	if (ctx.cr0.lt) goto loc_82A11C04;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a109c0
	ctx.lr = 0x82A116EC;
	sub_82A109C0(ctx, base);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r10,61816
	ctx.r10.u64 = ctx.r10.u64 | 61816;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82a108d0
	ctx.lr = 0x82A11708;
	sub_82A108D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a10920
	ctx.lr = 0x82A11714;
	sub_82A10920(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// blt cr6,0x82a11724
	if (ctx.cr6.lt) goto loc_82A11724;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82A11724:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11730;
	sub_82A109C0(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a10920
	ctx.lr = 0x82A1173C;
	sub_82A10920(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a0dae8
	ctx.lr = 0x82A11744;
	sub_82A0DAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11750;
	sub_82A109C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a0dae8
	ctx.lr = 0x82A11758;
	sub_82A0DAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11764;
	sub_82A109C0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82a0dae8
	ctx.lr = 0x82A1176C;
	sub_82A0DAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11778;
	sub_82A109C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0dae8
	ctx.lr = 0x82A11780;
	sub_82A0DAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A1178C;
	sub_82A109C0(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// blt cr6,0x82a1179c
	if (ctx.cr6.lt) goto loc_82A1179C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82A1179C:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A117A8;
	sub_82A109C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a10970
	ctx.lr = 0x82A117B4;
	sub_82A10970(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addis r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 65536;
	// li r5,132
	ctx.r5.s64 = 132;
	// addi r4,r4,7980
	ctx.r4.s64 = ctx.r4.s64 + 7980;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A117D0;
	sub_82A75220(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a109c0
	ctx.lr = 0x82A117E8;
	sub_82A109C0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a10a10
	ctx.lr = 0x82A117F4;
	sub_82A10A10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11800;
	sub_82A109C0(ctx, base);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r10,62877
	ctx.r10.u64 = ctx.r10.u64 | 62877;
	// lbzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a109c0
	ctx.lr = 0x82A11818;
	sub_82A109C0(ctx, base);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r10,62876
	ctx.r10.u64 = ctx.r10.u64 | 62876;
	// lbzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a109c0
	ctx.lr = 0x82A11830;
	sub_82A109C0(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a109c0
	ctx.lr = 0x82A11840;
	sub_82A109C0(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a109c0
	ctx.lr = 0x82A11850;
	sub_82A109C0(ctx, base);
	// lwz r27,308(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,320(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 320);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a109c0
	ctx.lr = 0x82A11864;
	sub_82A109C0(ctx, base);
loc_82A11864:
	// li r28,1
	ctx.r28.s64 = 1;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// b 0x82a11c0c
	goto loc_82A11C0C;
loc_82A11870:
	// addi r11,r1,392
	ctx.r11.s64 = ctx.r1.s64 + 392;
	// std r22,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r22.u64);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// bl 0x83178d74
	ctx.lr = 0x82A11884;
	__imp__XamGetActiveDashAppInfo(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r10,255
	ctx.r10.s64 = 255;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// blt cr6,0x82a1189c
	if (ctx.cr6.lt) goto loc_82A1189C;
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
loc_82A1189C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// blt cr6,0x82a118b0
	if (ctx.cr6.lt) goto loc_82A118B0;
	// stw r10,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
loc_82A118B0:
	// lwz r9,392(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// ld r7,384(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// li r8,2048
	ctx.r8.s64 = 2048;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// lwz r29,320(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 320);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lfs f31,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r9.u32);
	// li r5,512
	ctx.r5.s64 = 512;
	// std r7,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r7.u64);
	// cntlzw r7,r6
	ctx.r7.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// subfic r10,r10,18411
	ctx.xer.ca = ctx.r10.u32 <= 18411;
	ctx.r10.s64 = 18411 - ctx.r10.s64;
	// li r6,128
	ctx.r6.s64 = 128;
	// subfic r8,r8,18411
	ctx.xer.ca = ctx.r8.u32 <= 18411;
	ctx.r8.s64 = 18411 - ctx.r8.s64;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// subfic r7,r7,18411
	ctx.xer.ca = ctx.r7.u32 <= 18411;
	ctx.r7.s64 = 18411 - ctx.r7.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// li r27,16
	ctx.r27.s64 = 16;
	// subfic r5,r5,18411
	ctx.xer.ca = ctx.r5.u32 <= 18411;
	ctx.r5.s64 = 18411 - ctx.r5.s64;
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// subfic r9,r9,18411
	ctx.xer.ca = ctx.r9.u32 <= 18411;
	ctx.r9.s64 = 18411 - ctx.r9.s64;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,8
	ctx.r26.s64 = 8;
	// subfic r6,r6,18411
	ctx.xer.ca = ctx.r6.u32 <= 18411;
	ctx.r6.s64 = 18411 - ctx.r6.s64;
	// cntlzw r27,r27
	ctx.r27.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// subfic r4,r4,18411
	ctx.xer.ca = ctx.r4.u32 <= 18411;
	ctx.r4.s64 = 18411 - ctx.r4.s64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r25,4
	ctx.r25.s64 = 4;
	// subfic r3,r3,18411
	ctx.xer.ca = ctx.r3.u32 <= 18411;
	ctx.r3.s64 = 18411 - ctx.r3.s64;
	// cntlzw r26,r26
	ctx.r26.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// subfic r27,r27,18411
	ctx.xer.ca = ctx.r27.u32 <= 18411;
	ctx.r27.s64 = 18411 - ctx.r27.s64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cntlzw r25,r25
	ctx.r25.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// cntlzw r24,r23
	ctx.r24.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// lwzx r23,r7,r31
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// subfic r26,r26,18411
	ctx.xer.ca = ctx.r26.u32 <= 18411;
	ctx.r26.s64 = 18411 - ctx.r26.s64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r27,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r5,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// subfic r25,r25,18411
	ctx.xer.ca = ctx.r25.u32 <= 18411;
	ctx.r25.s64 = 18411 - ctx.r25.s64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cntlzw r28,r28
	ctx.r28.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r9,r31
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r7,r31
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// subfic r24,r24,18411
	ctx.xer.ca = ctx.r24.u32 <= 18411;
	ctx.r24.s64 = 18411 - ctx.r24.s64;
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r6,r31
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// subfic r28,r28,18411
	ctx.xer.ca = ctx.r28.u32 <= 18411;
	ctx.r28.s64 = 18411 - ctx.r28.s64;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r21,r5,r31
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r6,r24,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r4,r31
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// lwzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r7,r11,9
	ctx.r7.s64 = ctx.r11.s64 + 589824;
	// lwzx r20,r9,r31
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r10,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
	// lwzx r28,r3,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r19,r6,r31
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r7,r7,-3744
	ctx.r7.s64 = ctx.r7.s64 + -3744;
	// lwzx r31,r4,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// stw r8,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// bl 0x82a0dae8
	ctx.lr = 0x82A119E0;
	sub_82A0DAE8(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82a0dae8
	ctx.lr = 0x82A119EC;
	sub_82A0DAE8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a0dae8
	ctx.lr = 0x82A119F8;
	sub_82A0DAE8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a0dae8
	ctx.lr = 0x82A11A04;
	sub_82A0DAE8(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r15,24(r7)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// bl 0x83178db4
	ctx.lr = 0x82A11A14;
	__imp__XamNuiIdentityGetSessionId(ctx, base);
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r7,364(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// lwz r10,368(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r9,29312
	ctx.r11.s64 = ctx.r9.s64 + 29312;
	// stb r18,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r18.u8);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// stb r8,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r8.u8);
	// addi r3,r11,10536
	ctx.r3.s64 = ctx.r11.s64 + 10536;
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r9,231(r1)
	PPC_STORE_U8(ctx.r1.u32 + 231, ctx.r9.u8);
	// clrlwi r6,r15,16
	ctx.r6.u64 = ctx.r15.u32 & 0xFFFF;
	// lwz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// ld r29,352(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// lwz r8,320(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r18,628(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stb r16,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r16.u8);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// stb r17,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r17.u8);
	// std r29,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r29.u64);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r19,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// stw r22,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r22.u32);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r26,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r26.u32);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stw r23,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r23.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// bl 0x82a0caf8
	ctx.lr = 0x82A11AB4;
	sub_82A0CAF8(ctx, base);
	// lwz r20,328(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r29,332(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// addis r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 65536;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// addi r4,r4,-32128
	ctx.r4.s64 = ctx.r4.s64 + -32128;
	// addis r31,r11,9
	ctx.r31.s64 = ctx.r11.s64 + 589824;
	// addi r31,r31,-272
	ctx.r31.s64 = ctx.r31.s64 + -272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b088
	ctx.lr = 0x82A11AD8;
	sub_82A1B088(ctx, base);
	// lwz r30,612(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a11c00
	if (ctx.cr0.lt) goto loc_82A11C00;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a109c0
	ctx.lr = 0x82A11AF4;
	sub_82A109C0(ctx, base);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r10,61816
	ctx.r10.u64 = ctx.r10.u64 | 61816;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82a108d0
	ctx.lr = 0x82A11B10;
	sub_82A108D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a10920
	ctx.lr = 0x82A11B1C;
	sub_82A10920(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// blt cr6,0x82a11b2c
	if (ctx.cr6.lt) goto loc_82A11B2C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82A11B2C:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11B38;
	sub_82A109C0(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a10920
	ctx.lr = 0x82A11B44;
	sub_82A10920(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a0dae8
	ctx.lr = 0x82A11B4C;
	sub_82A0DAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11B58;
	sub_82A109C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a0dae8
	ctx.lr = 0x82A11B60;
	sub_82A0DAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11B6C;
	sub_82A109C0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82a0dae8
	ctx.lr = 0x82A11B74;
	sub_82A0DAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11B80;
	sub_82A109C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0dae8
	ctx.lr = 0x82A11B88;
	sub_82A0DAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11B94;
	sub_82A109C0(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// blt cr6,0x82a11ba4
	if (ctx.cr6.lt) goto loc_82A11BA4;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82A11BA4:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11BB0;
	sub_82A109C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a10970
	ctx.lr = 0x82A11BBC;
	sub_82A10970(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addis r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 65536;
	// li r5,132
	ctx.r5.s64 = 132;
	// addi r4,r4,7980
	ctx.r4.s64 = ctx.r4.s64 + 7980;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A11BD8;
	sub_82A75220(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r27,308(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,320(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 320);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a109c0
	ctx.lr = 0x82A11BF8;
	sub_82A109C0(ctx, base);
	// ld r25,376(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// b 0x82a11864
	goto loc_82A11864;
loc_82A11C00:
	// ld r25,376(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
loc_82A11C04:
	// lwz r27,308(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r28,1
	ctx.r28.s64 = 1;
loc_82A11C0C:
	// lwz r29,316(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r26,620(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// li r24,-2
	ctx.r24.s64 = -2;
	// lwz r19,312(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// li r21,-1
	ctx.r21.s64 = -1;
loc_82A11C24:
	// addi r11,r1,400
	ctx.r11.s64 = ctx.r1.s64 + 400;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmpldi cr6,r25,0
	ctx.cr6.compare<uint64_t>(ctx.r25.u64, 0, ctx.xer);
	// ori r10,r10,19096
	ctx.r10.u64 = ctx.r10.u64 | 19096;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// std r22,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r22.u64);
	// std r22,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r22.u64);
	// stw r22,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r22.u32);
	// stw r28,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r28.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r11.u32);
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// stw r11,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// stw r18,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r18.u32);
	// lwz r11,320(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 320);
	// stw r11,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r11.u32);
	// stw r28,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r28.u32);
	// bne cr6,0x82a11c78
	if (!ctx.cr6.eq) goto loc_82A11C78;
	// stw r22,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r22.u32);
loc_82A11C78:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a11c98
	if (ctx.cr6.eq) goto loc_82A11C98;
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82a0c248
	ctx.lr = 0x82A11C90;
	sub_82A0C248(ctx, base);
	// stw r22,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r22.u32);
	// stw r22,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r22.u32);
loc_82A11C98:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19112
	ctx.r11.u64 = ctx.r11.u64 | 19112;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a11cc0
	if (!ctx.cr6.eq) goto loc_82A11CC0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1bbc8
	ctx.lr = 0x82A11CC0;
	sub_82A1BBC8(ctx, base);
loc_82A11CC0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a11d34
	if (ctx.cr0.eq) goto loc_82A11D34;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a11cdc
	if (ctx.cr6.eq) goto loc_82A11CDC;
	// lwz r6,88(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// b 0x82a11ce0
	goto loc_82A11CE0;
loc_82A11CDC:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
loc_82A11CE0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,320(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 320);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a11d24
	if (ctx.cr6.eq) goto loc_82A11D24;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a11d14
	if (ctx.cr6.eq) goto loc_82A11D14;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82a11d4c
	if (!ctx.cr6.eq) goto loc_82A11D4C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a84278
	ctx.lr = 0x82A11D10;
	sub_82A84278(ctx, base);
	// b 0x82a11d4c
	goto loc_82A11D4C;
loc_82A11D14:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a841e8
	ctx.lr = 0x82A11D20;
	sub_82A841E8(ctx, base);
	// b 0x82a11d4c
	goto loc_82A11D4C;
loc_82A11D24:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a84230
	ctx.lr = 0x82A11D30;
	sub_82A84230(ctx, base);
	// b 0x82a11d4c
	goto loc_82A11D4C;
loc_82A11D34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a0d898
	ctx.lr = 0x82A11D40;
	sub_82A0D898(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// bl 0x82a75220
	ctx.lr = 0x82A11D4C;
	sub_82A75220(ctx, base);
loc_82A11D4C:
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A11D5C;
	sub_82FA7CF0(ctx, base);
	// li r11,254
	ctx.r11.s64 = 254;
	// stw r24,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r24.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// stw r24,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r24.u32);
	// stw r24,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r24.u32);
	// stw r21,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r21.u32);
	// stw r21,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r21.u32);
	// beq cr6,0x82a11d88
	if (ctx.cr6.eq) goto loc_82A11D88;
	// stw r22,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r22.u32);
	// stw r22,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r22.u32);
loc_82A11D88:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A11D8C:
	// stw r11,24036(r19)
	PPC_STORE_U32(ctx.r19.u32 + 24036, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A11DAC;
	__imp__KeReleaseMutant(ctx, base);
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A11DB8"))) PPC_WEAK_FUNC(sub_82A11DB8);
PPC_FUNC_IMPL(__imp__sub_82A11DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82A11DC0;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A11DD0;
	sub_82A0C9B8(ctx, base);
	// lis r21,-31963
	ctx.r21.s64 = -2094727168;
	// lwz r31,24028(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A11DDC;
	sub_82A74720(ctx, base);
	// lis r20,-31963
	ctx.r20.s64 = -2094727168;
	// lwz r11,24036(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a11e04
	if (!ctx.cr6.eq) goto loc_82A11E04;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a121bc
	goto loc_82A121BC;
loc_82A11E04:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19100
	ctx.r11.u64 = ctx.r11.u64 | 19100;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a11e34
	if (ctx.cr0.eq) goto loc_82A11E34;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A11E20:
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// stw r11,24036(r20)
	PPC_STORE_U32(ctx.r20.u32 + 24036, ctx.r11.u32);
	// lwz r11,24028(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// b 0x82a121c8
	goto loc_82A121C8;
loc_82A11E34:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r31,r30,2512
	ctx.r31.s64 = ctx.r30.s64 + 2512;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r24,0
	ctx.r24.s64 = 0;
	// ori r29,r11,170
	ctx.r29.u64 = ctx.r11.u64 | 170;
	// ori r22,r10,19096
	ctx.r22.u64 = ctx.r10.u64 | 19096;
	// ori r25,r9,19112
	ctx.r25.u64 = ctx.r9.u64 | 19112;
	// li r28,-2
	ctx.r28.s64 = -2;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82A11E60:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82a11fb8
	if (ctx.cr6.eq) goto loc_82A11FB8;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a11eac
	if (ctx.cr6.eq) goto loc_82A11EAC;
	// ble cr6,0x82a11f88
	if (!ctx.cr6.gt) goto loc_82A11F88;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x82a11e94
	if (!ctx.cr6.gt) goto loc_82A11E94;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82a11ea0
	if (ctx.cr6.eq) goto loc_82A11EA0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82a11f88
	if (!ctx.cr6.eq) goto loc_82A11F88;
loc_82A11E94:
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// ori r5,r5,16388
	ctx.r5.u64 = ctx.r5.u64 | 16388;
	// b 0x82a11ee4
	goto loc_82A11EE4;
loc_82A11EA0:
	// lis r5,-31999
	ctx.r5.s64 = -2097086464;
	// ori r5,r5,8
	ctx.r5.u64 = ctx.r5.u64 | 8;
	// b 0x82a11ee4
	goto loc_82A11EE4;
loc_82A11EAC:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r10,r30,2348
	ctx.r10.s64 = ctx.r30.s64 + 2348;
loc_82A11EB8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a11ef4
	if (ctx.cr6.eq) goto loc_82A11EF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a11eb8
	if (ctx.cr6.lt) goto loc_82A11EB8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82A11ED8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a11f04
	if (!ctx.cr6.eq) goto loc_82A11F04;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82A11EE4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a11138
	ctx.lr = 0x82A11EF0;
	sub_82A11138(ctx, base);
	// b 0x82a11f88
	goto loc_82A11F88;
loc_82A11EF4:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,2336
	ctx.r11.s64 = ctx.r11.s64 + 2336;
	// b 0x82a11ed8
	goto loc_82A11ED8;
loc_82A11F04:
	// lwzx r11,r30,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r22.u32);
	// li r10,-5
	ctx.r10.s64 = -5;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// beq cr6,0x82a11f44
	if (ctx.cr6.eq) goto loc_82A11F44;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82a0c248
	ctx.lr = 0x82A11F44;
	sub_82A0C248(ctx, base);
loc_82A11F44:
	// lwzx r11,r30,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a11f64
	if (!ctx.cr6.eq) goto loc_82A11F64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1bbc8
	ctx.lr = 0x82A11F64;
	sub_82A1BBC8(ctx, base);
loc_82A11F64:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a11f88
	if (!ctx.cr0.eq) goto loc_82A11F88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a0d898
	ctx.lr = 0x82A11F7C;
	sub_82A0D898(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a75220
	ctx.lr = 0x82A11F88;
	sub_82A75220(ctx, base);
loc_82A11F88:
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A11F98;
	sub_82FA7CF0(ctx, base);
	// li r11,254
	ctx.r11.s64 = 254;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r24,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r24.u32);
loc_82A11FB8:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// bne 0x82a11e60
	if (!ctx.cr0.eq) goto loc_82A11E60;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19104
	ctx.r11.u64 = ctx.r11.u64 | 19104;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a11fe8
	if (ctx.cr0.eq) goto loc_82A11FE8;
	// li r10,10
	ctx.r10.s64 = 10;
loc_82A11FDC:
	// stw r24,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r24.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82a11e20
	goto loc_82A11E20;
loc_82A11FE8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19102
	ctx.r11.u64 = ctx.r11.u64 | 19102;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a12004
	if (ctx.cr0.eq) goto loc_82A12004;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x82a11fdc
	goto loc_82A11FDC;
loc_82A12004:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lwz r7,24028(r21)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24028);
	// ori r11,r11,63204
	ctx.r11.u64 = ctx.r11.u64 | 63204;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a12024
	if (ctx.cr6.eq) goto loc_82A12024;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82a11fdc
	goto loc_82A11FDC;
loc_82A12024:
	// lwzx r11,r30,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a12038
	if (!ctx.cr6.eq) goto loc_82A12038;
	// li r10,9
	ctx.r10.s64 = 9;
	// b 0x82a11fdc
	goto loc_82A11FDC;
loc_82A12038:
	// lwz r9,20(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// ori r5,r11,19103
	ctx.r5.u64 = ctx.r11.u64 | 19103;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a120f0
	if (ctx.cr6.eq) goto loc_82A120F0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r10,r30,2348
	ctx.r10.s64 = ctx.r30.s64 + 2348;
loc_82A12060:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a120b8
	if (ctx.cr6.eq) goto loc_82A120B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a12060
	if (ctx.cr6.lt) goto loc_82A12060;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_82A12080:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a120f0
	if (ctx.cr6.eq) goto loc_82A120F0;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a120a4
	if (!ctx.cr0.eq) goto loc_82A120A4;
	// lbzx r11,r30,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bne 0x82a120a8
	if (!ctx.cr0.eq) goto loc_82A120A8;
loc_82A120A4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A120A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a120c8
	if (!ctx.cr0.eq) goto loc_82A120C8;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// b 0x82a120f0
	goto loc_82A120F0;
loc_82A120B8:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r11,2336
	ctx.r8.s64 = ctx.r11.s64 + 2336;
	// b 0x82a12080
	goto loc_82A12080;
loc_82A120C8:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lwz r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// lwzx r9,r30,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r22.u32);
	// ori r11,r11,61812
	ctx.r11.u64 = ctx.r11.u64 | 61812;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a120f0
	if (!ctx.cr6.lt) goto loc_82A120F0;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82A120F0:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a12160
	if (!ctx.cr0.eq) goto loc_82A12160;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// addi r11,r30,2336
	ctx.r11.s64 = ctx.r30.s64 + 2336;
loc_82A12100:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a12140
	if (ctx.cr6.eq) goto loc_82A12140;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a1212c
	if (!ctx.cr0.eq) goto loc_82A1212C;
	// lbzx r10,r30,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// bne 0x82a12130
	if (!ctx.cr0.eq) goto loc_82A12130;
loc_82A1212C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A12130:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a12140
	if (ctx.cr0.eq) goto loc_82A12140;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82a12154
	if (!ctx.cr6.eq) goto loc_82A12154;
loc_82A12140:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82a12100
	if (ctx.cr6.lt) goto loc_82A12100;
	// b 0x82a12160
	goto loc_82A12160;
loc_82A12154:
	// lwzx r11,r30,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r22.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r11.u32);
loc_82A12160:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a12178
	if (!ctx.cr0.eq) goto loc_82A12178;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a12178
	if (ctx.cr6.eq) goto loc_82A12178;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82A12178:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a12190
	if (ctx.cr0.eq) goto loc_82A12190;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0e9a0
	ctx.lr = 0x82A1218C;
	sub_82A0E9A0(ctx, base);
	// b 0x82a121b8
	goto loc_82A121B8;
loc_82A12190:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19101
	ctx.r11.u64 = ctx.r11.u64 | 19101;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// stw r24,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r24.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a121b4
	if (ctx.cr0.eq) goto loc_82A121B4;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x82a121b8
	goto loc_82A121B8;
loc_82A121B4:
	// stw r24,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r24.u32);
loc_82A121B8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82A121BC:
	// lwz r10,24028(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24028);
	// stw r11,24036(r20)
	PPC_STORE_U32(ctx.r20.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
loc_82A121C8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A121DC;
	__imp__KeReleaseMutant(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A121E4"))) PPC_WEAK_FUNC(sub_82A121E4);
PPC_FUNC_IMPL(__imp__sub_82A121E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A121E8"))) PPC_WEAK_FUNC(sub_82A121E8);
PPC_FUNC_IMPL(__imp__sub_82A121E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A121F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A12200;
	sub_82A0C9B8(ctx, base);
	// lis r25,-31963
	ctx.r25.s64 = -2094727168;
	// lwz r31,24028(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A1220C;
	sub_82A74720(ctx, base);
	// lis r24,-31963
	ctx.r24.s64 = -2094727168;
	// lwz r11,24036(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82a1225c
	if (!ctx.cr6.eq) goto loc_82A1225C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A12250;
	__imp__KeReleaseMutant(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A12254:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A1225C:
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r29,2524
	ctx.r11.s64 = ctx.r29.s64 + 2524;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82A1226C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a122c4
	if (ctx.cr6.eq) goto loc_82A122C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a1226c
	if (ctx.cr6.lt) goto loc_82A1226C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A1228C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a122cc
	if (ctx.cr0.eq) goto loc_82A122CC;
loc_82A12294:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82A12298:
	// stw r26,24036(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24036, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A122BC;
	__imp__KeReleaseMutant(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a12254
	goto loc_82A12254;
loc_82A122C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a1228c
	goto loc_82A1228C;
loc_82A122CC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// ori r27,r10,19112
	ctx.r27.u64 = ctx.r10.u64 | 19112;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a124bc
	if (!ctx.cr0.eq) goto loc_82A124BC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r29,2348
	ctx.r10.s64 = ctx.r29.s64 + 2348;
loc_82A122EC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a12394
	if (ctx.cr6.eq) goto loc_82A12394;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a122ec
	if (ctx.cr6.lt) goto loc_82A122EC;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82A1230C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,19096
	ctx.r11.u64 = ctx.r11.u64 | 19096;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// std r26,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r26.u64);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// std r26,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r26.u64);
	// std r26,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r26.u64);
	// stw r26,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r26.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bne cr6,0x82a123a4
	if (!ctx.cr6.eq) goto loc_82A123A4;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r10,24028(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24028);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r9,36
	ctx.r9.s64 = 2359296;
	// ori r11,r11,63168
	ctx.r11.u64 = ctx.r11.u64 | 63168;
	// ori r9,r9,45536
	ctx.r9.u64 = ctx.r9.u64 | 45536;
	// li r8,200
	ctx.r8.s64 = 200;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// divwu r11,r11,r8
	ctx.r11.u32 = ctx.r11.u32 / ctx.r8.u32;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// blt cr6,0x82a12384
	if (ctx.cr6.lt) goto loc_82A12384;
	// li r11,100
	ctx.r11.s64 = 100;
loc_82A12384:
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// b 0x82a123b0
	goto loc_82A123B0;
loc_82A12394:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,2336
	ctx.r31.s64 = ctx.r11.s64 + 2336;
	// b 0x82a1230c
	goto loc_82A1230C;
loc_82A123A4:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82A123B0:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r28,r30,88
	ctx.r28.s64 = ctx.r30.s64 + 88;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a123cc
	if (ctx.cr6.eq) goto loc_82A123CC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82a0c248
	ctx.lr = 0x82A123CC;
	sub_82A0C248(ctx, base);
loc_82A123CC:
	// lwzx r11,r29,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a123ec
	if (!ctx.cr6.eq) goto loc_82A123EC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1bbc8
	ctx.lr = 0x82A123EC;
	sub_82A1BBC8(ctx, base);
loc_82A123EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a12410
	if (!ctx.cr0.eq) goto loc_82A12410;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82a0d898
	ctx.lr = 0x82A12404;
	sub_82A0D898(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a75220
	ctx.lr = 0x82A12410;
	sub_82A75220(ctx, base);
loc_82A12410:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a124f0
	if (ctx.cr6.eq) goto loc_82A124F0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// beq cr6,0x82a12478
	if (ctx.cr6.eq) goto loc_82A12478;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a12474
	if (!ctx.cr6.gt) goto loc_82A12474;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x82a12478
	goto loc_82A12478;
loc_82A12474:
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
loc_82A12478:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a12490
	if (ctx.cr6.eq) goto loc_82A12490;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82A12490:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,132
	ctx.r5.s64 = 132;
	// ori r11,r11,8112
	ctx.r11.u64 = ctx.r11.u64 | 8112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,10684
	ctx.r3.s64 = ctx.r3.s64 + 10684;
	// bl 0x82a75220
	ctx.lr = 0x82A124B8;
	sub_82A75220(ctx, base);
	// b 0x82a124f0
	goto loc_82A124F0;
loc_82A124BC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a124f0
	if (ctx.cr6.eq) goto loc_82A124F0;
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,-5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5, ctx.xer);
	// bne cr6,0x82a124e8
	if (!ctx.cr6.eq) goto loc_82A124E8;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// ori r5,r5,16388
	ctx.r5.u64 = ctx.r5.u64 | 16388;
	// b 0x82a124ec
	goto loc_82A124EC;
loc_82A124E8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82A124EC:
	// bl 0x82a11138
	ctx.lr = 0x82A124F0;
	sub_82A11138(ctx, base);
loc_82A124F0:
	// lwzx r10,r29,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r8,r29,2336
	ctx.r8.s64 = ctx.r29.s64 + 2336;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_82A12510:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a12530
	if (!ctx.cr6.eq) goto loc_82A12530;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,88
	ctx.r8.s64 = ctx.r8.s64 + 88;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82a12510
	if (ctx.cr6.lt) goto loc_82A12510;
	// b 0x82a12534
	goto loc_82A12534;
loc_82A12530:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82A12534:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82a12298
	if (!ctx.cr6.eq) goto loc_82A12298;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r29,2512
	ctx.r10.s64 = ctx.r29.s64 + 2512;
loc_82A12544:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82a12294
	if (!ctx.cr6.eq) goto loc_82A12294;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a12544
	if (ctx.cr6.lt) goto loc_82A12544;
	// b 0x82a12298
	goto loc_82A12298;
}

__attribute__((alias("__imp__sub_82A12564"))) PPC_WEAK_FUNC(sub_82A12564);
PPC_FUNC_IMPL(__imp__sub_82A12564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A12568"))) PPC_WEAK_FUNC(sub_82A12568);
PPC_FUNC_IMPL(__imp__sub_82A12568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A12570;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r24,r11,62880
	ctx.r24.u64 = ctx.r11.u64 | 62880;
	// ori r21,r10,63168
	ctx.r21.u64 = ctx.r10.u64 | 63168;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// ori r27,r9,19120
	ctx.r27.u64 = ctx.r9.u64 | 19120;
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82a126d4
	if (!ctx.cr6.gt) goto loc_82A126D4;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_82A125B4:
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r11,r11,-2652
	ctx.r11.s64 = ctx.r11.s64 + -2652;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A125DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a126bc
	if (!ctx.cr0.eq) goto loc_82A126BC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82a12638
	if (ctx.cr6.eq) goto loc_82A12638;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82a126bc
	if (!ctx.cr6.eq) goto loc_82A126BC;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r10,r10,18960
	ctx.r10.u64 = ctx.r10.u64 | 18960;
	// lwzx r4,r11,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// lwzx r11,r4,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 200, ctx.xer);
	// blt cr6,0x82a12638
	if (ctx.cr6.lt) goto loc_82A12638;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a20170
	ctx.lr = 0x82A12618;
	sub_82A20170(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a11138
	ctx.lr = 0x82A12634;
	sub_82A11138(ctx, base);
	// b 0x82a126bc
	goto loc_82A126BC;
loc_82A12638:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A12640;
	sub_82A0C9B8(ctx, base);
	// lwz r30,24028(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A12648;
	sub_82A74720(ctx, base);
	// lwz r11,24036(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 & ctx.r30.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a12704
	if (ctx.cr6.eq) goto loc_82A12704;
	// addi r10,r3,2348
	ctx.r10.s64 = ctx.r3.s64 + 2348;
loc_82A1266C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82a12724
	if (ctx.cr6.eq) goto loc_82A12724;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a1266c
	if (ctx.cr6.lt) goto loc_82A1266C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82A1268C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a1269c
	if (ctx.cr6.eq) goto loc_82A1269C;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82a0e858
	ctx.lr = 0x82A1269C;
	sub_82A0E858(ctx, base);
loc_82A1269C:
	// stw r22,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r22.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + ctx.r27.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bl 0x831796f4
	ctx.lr = 0x82A126BC;
	__imp__KeReleaseMutant(ctx, base);
loc_82A126BC:
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,36
	ctx.r26.s64 = ctx.r26.s64 + 36;
	// lwzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a125b4
	if (ctx.cr6.lt) goto loc_82A125B4;
loc_82A126D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A126DC;
	sub_82A0C9B8(ctx, base);
	// lwz r30,24028(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A126E4;
	sub_82A74720(ctx, base);
	// lwz r11,24036(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a12734
	if (!ctx.cr6.eq) goto loc_82A12734;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A12704:
	// stw r11,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + ctx.r27.u64;
	// bl 0x831796f4
	ctx.lr = 0x82A12720;
	__imp__KeReleaseMutant(ctx, base);
	// b 0x82a127dc
	goto loc_82A127DC;
loc_82A12724:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r11,2336
	ctx.r4.s64 = ctx.r11.s64 + 2336;
	// b 0x82a1268c
	goto loc_82A1268C;
loc_82A12734:
	// addis r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 131072;
	// addi r30,r30,19108
	ctx.r30.s64 = ctx.r30.s64 + 19108;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a127b4
	if (ctx.cr6.eq) goto loc_82A127B4;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// addi r11,r11,2564
	ctx.r11.s64 = ctx.r11.s64 + 2564;
loc_82A12750:
	// lwz r9,-52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a12768
	if (ctx.cr6.eq) goto loc_82A12768;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a127b4
	if (!ctx.cr6.eq) goto loc_82A127B4;
loc_82A12768:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a12750
	if (ctx.cr6.lt) goto loc_82A12750;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a12798
	if (ctx.cr6.eq) goto loc_82A12798;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82a174d0
	ctx.lr = 0x82A12798;
	sub_82A174D0(ctx, base);
loc_82A12798:
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,-2396
	ctx.r3.s64 = ctx.r3.s64 + -2396;
	// bl 0x831792b4
	ctx.lr = 0x82A127B4;
	__imp__KeSetEvent(ctx, base);
loc_82A127B4:
	// stw r22,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r22.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + ctx.r27.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bl 0x831796f4
	ctx.lr = 0x82A127D4;
	__imp__KeReleaseMutant(ctx, base);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// stwx r22,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r22.u32);
loc_82A127DC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A127E4"))) PPC_WEAK_FUNC(sub_82A127E4);
PPC_FUNC_IMPL(__imp__sub_82A127E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A127E8"))) PPC_WEAK_FUNC(sub_82A127E8);
PPC_FUNC_IMPL(__imp__sub_82A127E8) {
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
	// li r5,28480
	ctx.r5.s64 = 28480;
	// stw r31,28496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28496, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,28480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28480, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a75988
	ctx.lr = 0x82A12818;
	sub_82A75988(ctx, base);
	// stw r31,28496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28496, ctx.r31.u32);
	// stw r31,28480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28480, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,28480
	ctx.r5.s64 = 28480;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x82A12830;
	sub_82A75988(ctx, base);
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

__attribute__((alias("__imp__sub_82A1284C"))) PPC_WEAK_FUNC(sub_82A1284C);
PPC_FUNC_IMPL(__imp__sub_82A1284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A12850"))) PPC_WEAK_FUNC(sub_82A12850);
PPC_FUNC_IMPL(__imp__sub_82A12850) {
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
	// bl 0x82a18d50
	ctx.lr = 0x82A1286C;
	sub_82A18D50(ctx, base);
	// addi r3,r31,4896
	ctx.r3.s64 = ctx.r31.s64 + 4896;
	// bl 0x82a127e8
	ctx.lr = 0x82A12874;
	sub_82A127E8(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-32128
	ctx.r30.s64 = ctx.r30.s64 + -32128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a10ac8
	ctx.lr = 0x82A12884;
	sub_82A10AC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a10a60
	ctx.lr = 0x82A1288C;
	sub_82A10A60(ctx, base);
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

__attribute__((alias("__imp__sub_82A128A8"))) PPC_WEAK_FUNC(sub_82A128A8);
PPC_FUNC_IMPL(__imp__sub_82A128A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A128B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// ori r11,r11,40080
	ctx.r11.u64 = ctx.r11.u64 | 40080;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82a203d0
	ctx.lr = 0x82A128E4;
	sub_82A203D0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0d420
	ctx.lr = 0x82A128F8;
	sub_82A0D420(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,40084
	ctx.r11.u64 = ctx.r11.u64 | 40084;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A12910"))) PPC_WEAK_FUNC(sub_82A12910);
PPC_FUNC_IMPL(__imp__sub_82A12910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A12918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a129a0
	if (ctx.cr6.eq) goto loc_82A129A0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A12938;
	sub_82A0C9B8(ctx, base);
	// lwz r29,24028(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A12940;
	sub_82A74720(ctx, base);
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r11,24036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1297c
	if (ctx.cr6.eq) goto loc_82A1297C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19116
	ctx.r11.u64 = ctx.r11.u64 | 19116;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1297c
	if (!ctx.cr0.eq) goto loc_82A1297C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a10c80
	ctx.lr = 0x82A1297C;
	sub_82A10C80(ctx, base);
loc_82A1297C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A129A0;
	__imp__KeReleaseMutant(ctx, base);
loc_82A129A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A129A8"))) PPC_WEAK_FUNC(sub_82A129A8);
PPC_FUNC_IMPL(__imp__sub_82A129A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A129B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a12a38
	if (ctx.cr6.eq) goto loc_82A12A38;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A129D0;
	sub_82A0C9B8(ctx, base);
	// lwz r29,24028(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A129D8;
	sub_82A74720(ctx, base);
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r11,24036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a12a14
	if (ctx.cr6.eq) goto loc_82A12A14;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19116
	ctx.r11.u64 = ctx.r11.u64 | 19116;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a12a14
	if (ctx.cr0.eq) goto loc_82A12A14;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a10c80
	ctx.lr = 0x82A12A14;
	sub_82A10C80(ctx, base);
loc_82A12A14:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A12A38;
	__imp__KeReleaseMutant(ctx, base);
loc_82A12A38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A12A40"))) PPC_WEAK_FUNC(sub_82A12A40);
PPC_FUNC_IMPL(__imp__sub_82A12A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A12A48;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r29,-25456
	ctx.r29.s64 = ctx.r29.s64 + -25456;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bne cr6,0x82a12ab0
	if (!ctx.cr6.eq) goto loc_82A12AB0;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a12ab0
	if (ctx.cr0.eq) goto loc_82A12AB0;
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// li r6,1780
	ctx.r6.s64 = 1780;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stwu r11,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// stwu r11,-1872(r1)
	ea = -1872 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ce68
	ctx.lr = 0x82A12A9C;
	sub_82A0CE68(ctx, base);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a128a8
	ctx.lr = 0x82A12AB0;
	sub_82A128A8(ctx, base);
loc_82A12AB0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0d2c8
	ctx.lr = 0x82A12ABC;
	sub_82A0D2C8(ctx, base);
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,-25448
	ctx.r10.s64 = ctx.r10.s64 + -25448;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a12ae0
	if (ctx.cr6.lt) goto loc_82A12AE0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82A12AE0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A12AEC"))) PPC_WEAK_FUNC(sub_82A12AEC);
PPC_FUNC_IMPL(__imp__sub_82A12AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A12AF0"))) PPC_WEAK_FUNC(sub_82A12AF0);
PPC_FUNC_IMPL(__imp__sub_82A12AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A12AF8;
	__savegprlr_23(ctx, base);
	// stwu r1,-3776(r1)
	ea = -3776 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x82a78340
	ctx.lr = 0x82A12B24;
	sub_82A78340(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0f868
	ctx.lr = 0x82A12B30;
	sub_82A0F868(ctx, base);
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r3,24032(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a12b54
	if (ctx.cr6.eq) goto loc_82A12B54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A12B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A12B54:
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r9,r31,76
	ctx.r9.s64 = ctx.r31.s64 + 76;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r11,24028(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24028);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2412
	ctx.r3.s64 = ctx.r3.s64 + -2412;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// bl 0x82a03500
	ctx.lr = 0x82A12B84;
	sub_82A03500(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt 0x82a12e68
	if (ctx.cr0.lt) goto loc_82A12E68;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82a1b6e0
	ctx.lr = 0x82A12B98;
	sub_82A1B6E0(ctx, base);
	// lwz r11,24032(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a12bb0
	if (!ctx.cr6.eq) goto loc_82A12BB0;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a12c38
	if (ctx.cr0.eq) goto loc_82A12C38;
loc_82A12BB0:
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A12BC4;
	sub_82FA7CF0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82a1b558
	ctx.lr = 0x82A12BD8;
	sub_82A1B558(ctx, base);
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// std r29,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r29.u64);
	// lis r10,7664
	ctx.r10.s64 = 502267904;
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// li r5,104
	ctx.r5.s64 = 104;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// bl 0x82a1b648
	ctx.lr = 0x82A12C18;
	sub_82A1B648(ctx, base);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82a0d1f0
	ctx.lr = 0x82A12C38;
	sub_82A0D1F0(ctx, base);
loc_82A12C38:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mulli r10,r10,448
	ctx.r10.s64 = ctx.r10.s64 * 448;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a12c60
	if (ctx.cr6.eq) goto loc_82A12C60;
	// lis r25,-31999
	ctx.r25.s64 = -2097086464;
	// ori r25,r25,8
	ctx.r25.u64 = ctx.r25.u64 | 8;
loc_82A12C60:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a12e68
	if (ctx.cr6.lt) goto loc_82A12E68;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a17e30
	ctx.lr = 0x82A12C7C;
	sub_82A17E30(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a12c94
	if (ctx.cr0.eq) goto loc_82A12C94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82a12cb0
	if (!ctx.cr6.eq) goto loc_82A12CB0;
loc_82A12C94:
	// addi r7,r1,1680
	ctx.r7.s64 = ctx.r1.s64 + 1680;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0fae8
	ctx.lr = 0x82A12CAC;
	sub_82A0FAE8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82A12CB0:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a12d08
	if (!ctx.cr0.eq) goto loc_82A12D08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0d5f0
	ctx.lr = 0x82A12CC4;
	sub_82A0D5F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a12d08
	if (ctx.cr0.eq) goto loc_82A12D08;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a12d08
	if (!ctx.cr6.eq) goto loc_82A12D08;
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// lfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a1ad70
	ctx.lr = 0x82A12CFC;
	sub_82A1AD70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a12d08
	if (ctx.cr0.lt) goto loc_82A12D08;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82A12D08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a12e68
	if (!ctx.cr6.gt) goto loc_82A12E68;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82a12d48
	if (!ctx.cr6.gt) goto loc_82A12D48;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82a12e68
	if (!ctx.cr6.eq) goto loc_82A12E68;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a12e68
	if (ctx.cr0.eq) goto loc_82A12E68;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24028);
	// addi r4,r1,1680
	ctx.r4.s64 = ctx.r1.s64 + 1680;
	// ori r10,r10,63168
	ctx.r10.u64 = ctx.r10.u64 | 63168;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a17b38
	ctx.lr = 0x82A12D44;
	sub_82A17B38(ctx, base);
	// b 0x82a12e68
	goto loc_82A12E68;
loc_82A12D48:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A12D50;
	sub_82A0C9B8(ctx, base);
	// lwz r30,24028(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A12D58;
	sub_82A74720(ctx, base);
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwz r11,24036(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a12da8
	if (!ctx.cr6.eq) goto loc_82A12DA8;
	// stw r29,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A12D9C;
	__imp__KeReleaseMutant(ctx, base);
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82a12eb0
	goto loc_82A12EB0;
loc_82A12DA8:
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r10,r11,2524
	ctx.r10.s64 = ctx.r11.s64 + 2524;
loc_82A12DB4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82a12de8
	if (ctx.cr6.eq) goto loc_82A12DE8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82a12db4
	if (ctx.cr6.lt) goto loc_82A12DB4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82A12DD4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a12df0
	if (ctx.cr0.eq) goto loc_82A12DF0;
	// lis r25,-31999
	ctx.r25.s64 = -2097086464;
	// ori r25,r25,8
	ctx.r25.u64 = ctx.r25.u64 | 8;
	// b 0x82a12e44
	goto loc_82A12E44;
loc_82A12DE8:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82a12dd4
	goto loc_82A12DD4;
loc_82A12DF0:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi. r8,r26,24
	ctx.r8.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ori r10,r10,8112
	ctx.r10.u64 = ctx.r10.u64 | 8112;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,2704
	ctx.r30.s64 = ctx.r11.s64 + 2704;
	// beq 0x82a12e30
	if (ctx.cr0.eq) goto loc_82A12E30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r4,r1,1680
	ctx.r4.s64 = ctx.r1.s64 + 1680;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r3,-32128
	ctx.r3.s64 = ctx.r3.s64 + -32128;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82a12a40
	ctx.lr = 0x82A12E30;
	sub_82A12A40(ctx, base);
loc_82A12E30:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a12e44
	if (ctx.cr0.eq) goto loc_82A12E44;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r30,4896
	ctx.r3.s64 = ctx.r30.s64 + 4896;
	// bl 0x82a0d380
	ctx.lr = 0x82A12E44;
	sub_82A0D380(ctx, base);
loc_82A12E44:
	// stw r29,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A12E68;
	__imp__KeReleaseMutant(ctx, base);
loc_82A12E68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0e5c8
	ctx.lr = 0x82A12E70;
	sub_82A0E5C8(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x82a12e98
	if (!ctx.cr6.lt) goto loc_82A12E98;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16388
	ctx.r11.u64 = ctx.r11.u64 | 16388;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a12e98
	if (ctx.cr6.eq) goto loc_82A12E98;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a11138
	ctx.lr = 0x82A12E98;
	sub_82A11138(ctx, base);
loc_82A12E98:
	// bl 0x82a78340
	ctx.lr = 0x82A12E9C;
	sub_82A78340(ctx, base);
	// subf. r11,r23,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r23.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a12ea8
	if (!ctx.cr0.eq) goto loc_82A12EA8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A12EA8:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82A12EB0:
	// addi r1,r1,3776
	ctx.r1.s64 = ctx.r1.s64 + 3776;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A12EB8"))) PPC_WEAK_FUNC(sub_82A12EB8);
PPC_FUNC_IMPL(__imp__sub_82A12EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A12EC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r5,264
	ctx.r5.s64 = 264;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A12EDC;
	sub_82FA7CF0(ctx, base);
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r28,r11,63176
	ctx.r28.u64 = ctx.r11.u64 | 63176;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82a10620
	ctx.lr = 0x82A12EF8;
	sub_82A10620(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a12f0c
	if (ctx.cr0.lt) goto loc_82A12F0C;
	// bl 0x82a1fa08
	ctx.lr = 0x82A12F04;
	sub_82A1FA08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a1fb00
	ctx.lr = 0x82A12F0C;
	sub_82A1FB00(ctx, base);
loc_82A12F0C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// ori r11,r11,19152
	ctx.r11.u64 = ctx.r11.u64 | 19152;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a12f28
	if (!ctx.cr6.eq) goto loc_82A12F28;
	// bl 0x82a20940
	ctx.lr = 0x82A12F28;
	sub_82A20940(ctx, base);
loc_82A12F28:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r29,r11,63124
	ctx.r29.u64 = ctx.r11.u64 | 63124;
loc_82A12F30:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a12fb0
	if (ctx.cr6.eq) goto loc_82A12FB0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82a12f4c
	if (!ctx.cr6.eq) goto loc_82A12F4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fdfd0
	ctx.lr = 0x82A12F4C;
	sub_829FDFD0(ctx, base);
loc_82A12F4C:
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r10,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r11,r11,-2428
	ctx.r11.s64 = ctx.r11.s64 + -2428;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82A12F80;
	sub_82FA7CF0(ctx, base);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// mulli r11,r11,-10000
	ctx.r11.s64 = ctx.r11.s64 * -10000;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x831795f4
	ctx.lr = 0x82A12FB0;
	__imp__KeWaitForMultipleObjects(ctx, base);
loc_82A12FB0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a11db8
	ctx.lr = 0x82A12FB8;
	sub_82A11DB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a12568
	ctx.lr = 0x82A12FC0;
	sub_82A12568(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82a1317c
	if (ctx.cr6.eq) goto loc_82A1317C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a12fe0
	if (!ctx.cr6.eq) goto loc_82A12FE0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82a12f30
	goto loc_82A12F30;
loc_82A12FE0:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82a12ff0
	if (!ctx.cr6.eq) goto loc_82A12FF0;
	// bl 0x82a0e238
	ctx.lr = 0x82A12FEC;
	sub_82A0E238(ctx, base);
	// b 0x82a12f30
	goto loc_82A12F30;
loc_82A12FF0:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82a1301c
	if (!ctx.cr6.eq) goto loc_82A1301C;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// ori r10,r10,63164
	ctx.r10.u64 = ctx.r10.u64 | 63164;
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-3744
	ctx.r3.s64 = ctx.r3.s64 + -3744;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a0dce0
	ctx.lr = 0x82A13014;
	sub_82A0DCE0(ctx, base);
	// bl 0x82a0dbd8
	ctx.lr = 0x82A13018;
	sub_82A0DBD8(ctx, base);
	// b 0x82a12f30
	goto loc_82A12F30;
loc_82A1301C:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82a13054
	if (!ctx.cr6.eq) goto loc_82A13054;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fdfd0
	ctx.lr = 0x82A13030;
	sub_829FDFD0(ctx, base);
	// li r6,101
	ctx.r6.s64 = 101;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fe378
	ctx.lr = 0x82A13044;
	sub_829FE378(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a08ea8
	ctx.lr = 0x82A1304C;
	sub_82A08EA8(ctx, base);
	// bl 0x82a0db30
	ctx.lr = 0x82A13050;
	sub_82A0DB30(ctx, base);
	// b 0x82a12f30
	goto loc_82A12F30;
loc_82A13054:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82a130b4
	if (!ctx.cr6.eq) goto loc_82A130B4;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82a10620
	ctx.lr = 0x82A1306C;
	sub_82A10620(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1307c
	if (ctx.cr0.lt) goto loc_82A1307C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a1fb00
	ctx.lr = 0x82A1307C;
	sub_82A1FB00(ctx, base);
loc_82A1307C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16388
	ctx.r11.u64 = ctx.r11.u64 | 16388;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a12f30
	if (!ctx.cr6.eq) goto loc_82A12F30;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,63204
	ctx.r10.u64 = ctx.r10.u64 | 63204;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// sync 
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fdfd0
	ctx.lr = 0x82A130B0;
	sub_829FDFD0(ctx, base);
	// b 0x82a12f30
	goto loc_82A12F30;
loc_82A130B4:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82a130c8
	if (!ctx.cr6.eq) goto loc_82A130C8;
	// bl 0x82a1bf10
	ctx.lr = 0x82A130C4;
	sub_82A1BF10(ctx, base);
	// b 0x82a130cc
	goto loc_82A130CC;
loc_82A130C8:
	// bl 0x82a12af0
	ctx.lr = 0x82A130CC;
	sub_82A12AF0(ctx, base);
loc_82A130CC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a12f30
	if (ctx.cr6.lt) goto loc_82A12F30;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82a130ec
	if (!ctx.cr6.gt) goto loc_82A130EC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a130f0
	if (!ctx.cr6.gt) goto loc_82A130F0;
loc_82A130EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A130F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a13154
	if (ctx.cr0.eq) goto loc_82A13154;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82a13128
	if (ctx.cr6.eq) goto loc_82A13128;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82a1311c
	if (ctx.cr6.eq) goto loc_82A1311C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82a13148
	if (!ctx.cr6.eq) goto loc_82A13148;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0f810
	ctx.lr = 0x82A13118;
	sub_82A0F810(ctx, base);
	// b 0x82a13148
	goto loc_82A13148;
loc_82A1311C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0f0b8
	ctx.lr = 0x82A13124;
	sub_82A0F0B8(ctx, base);
	// b 0x82a13130
	goto loc_82A13130;
loc_82A13128:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0f2b0
	ctx.lr = 0x82A13130;
	sub_82A0F2B0(ctx, base);
loc_82A13130:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a13148
	if (ctx.cr0.eq) goto loc_82A13148;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a1f8d8
	ctx.lr = 0x82A13148;
	sub_82A1F8D8(ctx, base);
loc_82A13148:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a121e8
	ctx.lr = 0x82A13150;
	sub_82A121E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A13154:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a12568
	ctx.lr = 0x82A1315C;
	sub_82A12568(ctx, base);
	// bl 0x82a0e238
	ctx.lr = 0x82A13160;
	sub_82A0E238(ctx, base);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-272
	ctx.r3.s64 = ctx.r3.s64 + -272;
	// bl 0x82a1b170
	ctx.lr = 0x82A13170;
	sub_82A1B170(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a1fce8
	ctx.lr = 0x82A13178;
	sub_82A1FCE8(ctx, base);
	// b 0x82a12f30
	goto loc_82A12F30;
loc_82A1317C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A13188"))) PPC_WEAK_FUNC(sub_82A13188);
PPC_FUNC_IMPL(__imp__sub_82A13188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A13190;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lis r10,-32095
	ctx.r10.s64 = -2103377920;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,11960
	ctx.r5.s64 = ctx.r10.s64 + 11960;
	// addis r8,r11,9
	ctx.r8.s64 = ctx.r11.s64 + 589824;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r8,-2432
	ctx.r8.s64 = ctx.r8.s64 + -2432;
	// bl 0x82a77830
	ctx.lr = 0x82A131C8;
	sub_82A77830(ctx, base);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// ori r31,r10,63100
	ctx.r31.u64 = ctx.r10.u64 | 63100;
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a131f8
	if (!ctx.cr6.eq) goto loc_82A131F8;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82a13228
	goto loc_82A13228;
loc_82A131F8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a77a10
	ctx.lr = 0x82A13204;
	sub_82A77A10(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82a13234
	if (!ctx.cr6.eq) goto loc_82A13234;
	// bl 0x82a78478
	ctx.lr = 0x82A13210;
	sub_82A78478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82a13220
	if (ctx.cr0.gt) goto loc_82A13220;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a13228
	goto loc_82A13228;
loc_82A13220:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r31,r11,32775
	ctx.r31.u64 = ctx.r11.u64 | 2147942400;
loc_82A13228:
	// bl 0x82a0de00
	ctx.lr = 0x82A1322C;
	sub_82A0DE00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a13244
	goto loc_82A13244;
loc_82A13234:
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a777b8
	ctx.lr = 0x82A13240;
	sub_82A777B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A13244:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1324C"))) PPC_WEAK_FUNC(sub_82A1324C);
PPC_FUNC_IMPL(__imp__sub_82A1324C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13250"))) PPC_WEAK_FUNC(sub_82A13250);
PPC_FUNC_IMPL(__imp__sub_82A13250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A13258;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,2704
	ctx.r29.s64 = ctx.r3.s64 + 2704;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A13268:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a12850
	ctx.lr = 0x82A13270;
	sub_82A12850(ctx, base);
	// addis r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 65536;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8112
	ctx.r29.s64 = ctx.r29.s64 + 8112;
	// bge 0x82a13268
	if (!ctx.cr0.lt) goto loc_82A13268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0cfc0
	ctx.lr = 0x82A13288;
	sub_82A0CFC0(ctx, base);
	// lis r5,6
	ctx.r5.s64 = 393216;
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,42640
	ctx.r5.u64 = ctx.r5.u64 | 42640;
	// addi r3,r3,19152
	ctx.r3.s64 = ctx.r3.s64 + 19152;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A132A0;
	sub_82FA7CF0(ctx, base);
	// addis r3,r31,9
	ctx.r3.s64 = ctx.r31.s64 + 589824;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-2692
	ctx.r3.s64 = ctx.r3.s64 + -2692;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A132B4;
	sub_82FA7CF0(ctx, base);
	// addis r3,r31,9
	ctx.r3.s64 = ctx.r31.s64 + 589824;
	// li r5,1052
	ctx.r5.s64 = 1052;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-3744
	ctx.r3.s64 = ctx.r3.s64 + -3744;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A132C8;
	sub_82FA7CF0(ctx, base);
	// addis r3,r31,9
	ctx.r3.s64 = ctx.r31.s64 + 589824;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-2652
	ctx.r3.s64 = ctx.r3.s64 + -2652;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A132DC;
	sub_82FA7CF0(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// ori r7,r11,63100
	ctx.r7.u64 = ctx.r11.u64 | 63100;
	// ori r10,r10,63164
	ctx.r10.u64 = ctx.r10.u64 | 63164;
	// ori r9,r9,62880
	ctx.r9.u64 = ctx.r9.u64 | 62880;
	// ori r8,r8,63168
	ctx.r8.u64 = ctx.r8.u64 | 63168;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1331C"))) PPC_WEAK_FUNC(sub_82A1331C);
PPC_FUNC_IMPL(__imp__sub_82A1331C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13320"))) PPC_WEAK_FUNC(sub_82A13320);
PPC_FUNC_IMPL(__imp__sub_82A13320) {
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
	// lis r3,8
	ctx.r3.s64 = 524288;
	// lis r4,8349
	ctx.r4.s64 = 547160064;
	// ori r3,r3,65328
	ctx.r3.u64 = ctx.r3.u64 | 65328;
	// bl 0x82691410
	ctx.lr = 0x82A13340;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a13350
	if (ctx.cr0.eq) goto loc_82A13350;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a13250
	ctx.lr = 0x82A13350;
	sub_82A13250(ctx, base);
loc_82A13350:
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

__attribute__((alias("__imp__sub_82A13368"))) PPC_WEAK_FUNC(sub_82A13368);
PPC_FUNC_IMPL(__imp__sub_82A13368) {
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
	// bl 0x82a13320
	ctx.lr = 0x82A13384;
	sub_82A13320(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24028, ctx.r3.u32);
	// bne 0x82a133a0
	if (!ctx.cr0.eq) goto loc_82A133A0;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82a133d4
	goto loc_82A133D4;
loc_82A133A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a10fb0
	ctx.lr = 0x82A133A8;
	sub_82A10FB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a133d4
	if (ctx.cr0.lt) goto loc_82A133D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a16068
	ctx.lr = 0x82A133B8;
	sub_82A16068(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a133d4
	if (ctx.cr0.lt) goto loc_82A133D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a08d40
	ctx.lr = 0x82A133CC;
	sub_82A08D40(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82a133dc
	if (!ctx.cr0.lt) goto loc_82A133DC;
loc_82A133D4:
	// bl 0x82a0dfa8
	ctx.lr = 0x82A133D8;
	sub_82A0DFA8(ctx, base);
	// b 0x82a133e0
	goto loc_82A133E0;
loc_82A133DC:
	// bl 0x82a1b910
	ctx.lr = 0x82A133E0;
	sub_82A1B910(ctx, base);
loc_82A133E0:
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

__attribute__((alias("__imp__sub_82A133FC"))) PPC_WEAK_FUNC(sub_82A133FC);
PPC_FUNC_IMPL(__imp__sub_82A133FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13400"))) PPC_WEAK_FUNC(sub_82A13400);
PPC_FUNC_IMPL(__imp__sub_82A13400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A13408;
	__savegprlr_29(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r11,23768
	ctx.r3.s64 = ctx.r11.s64 + 23768;
	// li r4,260
	ctx.r4.s64 = 260;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82fa5590
	ctx.lr = 0x82A13428;
	sub_82FA5590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a13498
	if (!ctx.cr0.eq) goto loc_82A13498;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82fa5590
	ctx.lr = 0x82A13440;
	sub_82FA5590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a13498
	if (!ctx.cr0.eq) goto loc_82A13498;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r11,-24744
	ctx.r5.s64 = ctx.r11.s64 + -24744;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82fa85a0
	ctx.lr = 0x82A1345C;
	sub_82FA85A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a13498
	if (!ctx.cr0.eq) goto loc_82A13498;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa5590
	ctx.lr = 0x82A13474;
	sub_82FA5590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a13498
	if (!ctx.cr0.eq) goto loc_82A13498;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r11,-24772
	ctx.r5.s64 = ctx.r11.s64 + -24772;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa85a0
	ctx.lr = 0x82A13490;
	sub_82FA85A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a134a4
	if (ctx.cr0.eq) goto loc_82A134A4;
loc_82A13498:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a134ec
	goto loc_82A134EC;
loc_82A134A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c2c8
	ctx.lr = 0x82A134AC;
	sub_82A0C2C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a134ec
	if (ctx.cr0.lt) goto loc_82A134EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a13368
	ctx.lr = 0x82A134BC;
	sub_82A13368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a134ec
	if (ctx.cr0.lt) goto loc_82A134EC;
	// bl 0x82a0e018
	ctx.lr = 0x82A134C8;
	sub_82A0E018(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a13188
	ctx.lr = 0x82A134D0;
	sub_82A13188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a134ec
	if (ctx.cr0.lt) goto loc_82A134EC;
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a134ec
	if (!ctx.cr0.eq) goto loc_82A134EC;
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// bl 0x82a842b8
	ctx.lr = 0x82A134EC;
	sub_82A842B8(ctx, base);
loc_82A134EC:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A134F4"))) PPC_WEAK_FUNC(sub_82A134F4);
PPC_FUNC_IMPL(__imp__sub_82A134F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A134F8"))) PPC_WEAK_FUNC(sub_82A134F8);
PPC_FUNC_IMPL(__imp__sub_82A134F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A13500;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-12340
	ctx.r29.s64 = ctx.r11.s64 + -12340;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A13518;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a1356c
	if (!ctx.cr6.eq) goto loc_82A1356C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82a13544
	if (!ctx.cr6.eq) goto loc_82A13544;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a1356c
	if (!ctx.cr6.eq) goto loc_82A1356C;
loc_82A13544:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,10932
	ctx.r3.s64 = ctx.r31.s64 + 10932;
	// bl 0x831792b4
	ctx.lr = 0x82A13554;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,10948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10948);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1356c
	if (ctx.cr6.eq) goto loc_82A1356C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A1356C;
	__imp__KeSetEvent(ctx, base);
loc_82A1356C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A13574;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1357C"))) PPC_WEAK_FUNC(sub_82A1357C);
PPC_FUNC_IMPL(__imp__sub_82A1357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13580"))) PPC_WEAK_FUNC(sub_82A13580);
PPC_FUNC_IMPL(__imp__sub_82A13580) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12340
	ctx.r30.s64 = ctx.r11.s64 + -12340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A135A4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a135e0
	if (!ctx.cr6.eq) goto loc_82A135E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,10932
	ctx.r3.s64 = ctx.r31.s64 + 10932;
	// bl 0x831792b4
	ctx.lr = 0x82A135C8;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,10948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10948);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a135e0
	if (ctx.cr6.eq) goto loc_82A135E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A135E0;
	__imp__KeSetEvent(ctx, base);
loc_82A135E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A135E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82A13600"))) PPC_WEAK_FUNC(sub_82A13600);
PPC_FUNC_IMPL(__imp__sub_82A13600) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12340
	ctx.r30.s64 = ctx.r11.s64 + -12340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A13624;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a13658
	if (!ctx.cr6.eq) goto loc_82A13658;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,10932
	ctx.r3.s64 = ctx.r31.s64 + 10932;
	// stw r11,10960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10960, ctx.r11.u32);
	// bl 0x831793b4
	ctx.lr = 0x82A13648;
	__imp__KeResetEvent(ctx, base);
	// lwz r3,10948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10948);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a13658
	if (ctx.cr6.eq) goto loc_82A13658;
	// bl 0x831793b4
	ctx.lr = 0x82A13658;
	__imp__KeResetEvent(ctx, base);
loc_82A13658:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A13660;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82A13678"))) PPC_WEAK_FUNC(sub_82A13678);
PPC_FUNC_IMPL(__imp__sub_82A13678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A13680;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a13794
	if (ctx.cr6.eq) goto loc_82A13794;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r29,r11,-12340
	ctx.r29.s64 = ctx.r11.s64 + -12340;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A136AC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a1378c
	if (ctx.cr6.eq) goto loc_82A1378C;
	// lwz r11,10928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a136f8
	if (!ctx.cr6.eq) goto loc_82A136F8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,59556
	ctx.r8.u64 = ctx.r11.u64 | 59556;
	// ori r7,r10,59548
	ctx.r7.u64 = ctx.r10.u64 | 59548;
	// ori r6,r9,59560
	ctx.r6.u64 = ctx.r9.u64 | 59560;
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r9,r31,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,10920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10920, ctx.r10.u32);
	// stw r11,10924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10924, ctx.r11.u32);
loc_82A136F8:
	// addi r3,r31,10920
	ctx.r3.s64 = ctx.r31.s64 + 10920;
	// bl 0x82a20e10
	ctx.lr = 0x82A13700;
	sub_82A20E10(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r6,10984(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10984);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r5,10980(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10980);
	// lwz r4,10956(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10956);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 & ctx.r30.u64;
	// bl 0x82a20e20
	ctx.lr = 0x82A13720;
	sub_82A20E20(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r10,r7,1
	ctx.r10.u64 = ctx.r7.u64 ^ 1;
	// stw r11,10976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10976, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// stw r10,10960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10960, ctx.r10.u32);
	// std r11,10968(r31)
	PPC_STORE_U64(ctx.r31.u32 + 10968, ctx.r11.u64);
	// bl 0x831791a4
	ctx.lr = 0x82A13750;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a13784
	if (!ctx.cr6.eq) goto loc_82A13784;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,10932
	ctx.r3.s64 = ctx.r31.s64 + 10932;
	// bl 0x831792b4
	ctx.lr = 0x82A1376C;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,10948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10948);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a13784
	if (ctx.cr6.eq) goto loc_82A13784;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A13784;
	__imp__KeSetEvent(ctx, base);
loc_82A13784:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A1378C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A1378C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A13794;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A13794:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1379C"))) PPC_WEAK_FUNC(sub_82A1379C);
PPC_FUNC_IMPL(__imp__sub_82A1379C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A137A0"))) PPC_WEAK_FUNC(sub_82A137A0);
PPC_FUNC_IMPL(__imp__sub_82A137A0) {
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
	// addi r10,r11,29312
	ctx.r10.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10912(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a137e0
	if (ctx.cr6.eq) goto loc_82A137E0;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r31,r11,-12340
	ctx.r31.s64 = ctx.r11.s64 + -12340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A137D4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x82a20e40
	ctx.lr = 0x82A137D8;
	sub_82A20E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A137E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A137E0:
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

__attribute__((alias("__imp__sub_82A137F4"))) PPC_WEAK_FUNC(sub_82A137F4);
PPC_FUNC_IMPL(__imp__sub_82A137F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A137F8"))) PPC_WEAK_FUNC(sub_82A137F8);
PPC_FUNC_IMPL(__imp__sub_82A137F8) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12340
	ctx.r30.s64 = ctx.r11.s64 + -12340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A1381C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a1389c
	if (!ctx.cr6.eq) goto loc_82A1389C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10912, ctx.r11.u32);
	// sync 
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,10932
	ctx.r3.s64 = ctx.r31.s64 + 10932;
	// bl 0x831792b4
	ctx.lr = 0x82A1384C;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,10948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10948);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a13874
	if (ctx.cr6.eq) goto loc_82A13874;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A13864;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,10948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10948);
	// bl 0x83179424
	ctx.lr = 0x82A1386C;
	__imp__ObDereferenceObject(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10948, ctx.r11.u32);
loc_82A13874:
	// bl 0x82a20e58
	ctx.lr = 0x82A13878;
	sub_82A20E58(ctx, base);
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// lwz r3,10980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10980);
	// bl 0x82691460
	ctx.lr = 0x82A13884;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,10980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10980, ctx.r11.u32);
	// stw r10,10984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10984, ctx.r10.u32);
	// stw r9,10956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10956, ctx.r9.u32);
loc_82A1389C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A138A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82A138BC"))) PPC_WEAK_FUNC(sub_82A138BC);
PPC_FUNC_IMPL(__imp__sub_82A138BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A138C0"))) PPC_WEAK_FUNC(sub_82A138C0);
PPC_FUNC_IMPL(__imp__sub_82A138C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A138C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r31,r11,24040
	ctx.r31.s64 = ctx.r11.s64 + 24040;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x831791a4
	ctx.lr = 0x82A138DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82A138F4:
	// li r3,2672
	ctx.r3.s64 = 2672;
	// bl 0x82a21198
	ctx.lr = 0x82A138FC;
	sub_82A21198(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a1390c
	if (ctx.cr0.eq) goto loc_82A1390C;
	// bl 0x82a210f8
	ctx.lr = 0x82A13908;
	sub_82A210F8(ctx, base);
	// b 0x82a13910
	goto loc_82A13910;
loc_82A1390C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A13910:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a13960
	if (ctx.cr6.eq) goto loc_82A13960;
	// addi r29,r29,44
	ctx.r29.s64 = ctx.r29.s64 + 44;
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// cmplwi cr6,r29,352
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 352, ctx.xer);
	// blt cr6,0x82a138f4
	if (ctx.cr6.lt) goto loc_82A138F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82a21248
	ctx.lr = 0x82A1393C;
	sub_82A21248(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x82a1397c
	if (ctx.cr0.lt) goto loc_82A1397C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// b 0x82a13988
	goto loc_82A13988;
loc_82A13960:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
loc_82A13968:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x831791b4
	ctx.lr = 0x82A13970;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A1397C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-24724
	ctx.r3.s64 = ctx.r11.s64 + -24724;
	// bl 0x83179504
	ctx.lr = 0x82A13988;
	__imp__DbgPrint(ctx, base);
loc_82A13988:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82a13968
	goto loc_82A13968;
}

__attribute__((alias("__imp__sub_82A13998"))) PPC_WEAK_FUNC(sub_82A13998);
PPC_FUNC_IMPL(__imp__sub_82A13998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A139A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r31,r11,24040
	ctx.r31.s64 = ctx.r11.s64 + 24040;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x831791a4
	ctx.lr = 0x82A139B4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,8
	ctx.r29.s64 = 8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
loc_82A139C8:
	// lwz r28,44(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stb r27,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r27.u8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a139e8
	if (ctx.cr6.eq) goto loc_82A139E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a20ea8
	ctx.lr = 0x82A139E0;
	sub_82A20EA8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a211a8
	ctx.lr = 0x82A139E8;
	sub_82A211A8(ctx, base);
loc_82A139E8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r27,44(r30)
	ea = 44 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r30.u32 = ea;
	// bne 0x82a139c8
	if (!ctx.cr0.eq) goto loc_82A139C8;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x831791b4
	ctx.lr = 0x82A139FC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x82a212d8
	ctx.lr = 0x82A13A00;
	sub_82A212D8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x82a13a1c
	if (ctx.cr0.lt) goto loc_82A13A1C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stb r27,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r27.u8);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stb r27,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r27.u8);
	// b 0x82a13a28
	goto loc_82A13A28;
loc_82A13A1C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-24696
	ctx.r3.s64 = ctx.r11.s64 + -24696;
	// bl 0x83179504
	ctx.lr = 0x82A13A28;
	__imp__DbgPrint(ctx, base);
loc_82A13A28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A13A30"))) PPC_WEAK_FUNC(sub_82A13A30);
PPC_FUNC_IMPL(__imp__sub_82A13A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A13A38;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// stb r30,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r30.u8);
	// stb r30,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r30.u8);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// bl 0x831791c4
	ctx.lr = 0x82A13A60;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r29,36
	ctx.r31.s64 = ctx.r29.s64 + 36;
	// li r28,7
	ctx.r28.s64 = 7;
	// lfs f31,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
loc_82A13A70:
	// li r11,254
	ctx.r11.s64 = 254;
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r30,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82A13AA8;
	sub_82FA7CF0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// bge 0x82a13a70
	if (!ctx.cr0.lt) goto loc_82A13A70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A13AC4"))) PPC_WEAK_FUNC(sub_82A13AC4);
PPC_FUNC_IMPL(__imp__sub_82A13AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13AC8"))) PPC_WEAK_FUNC(sub_82A13AC8);
PPC_FUNC_IMPL(__imp__sub_82A13AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A13AD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,24040
	ctx.r29.s64 = ctx.r11.s64 + 24040;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x831791a4
	ctx.lr = 0x82A13AE8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a13b10
	if (!ctx.cr0.eq) goto loc_82A13B10;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A13AFC:
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x831791b4
	ctx.lr = 0x82A13B04;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82A13B10:
	// li r28,8
	ctx.r28.s64 = 8;
	// addi r31,r29,44
	ctx.r31.s64 = ctx.r29.s64 + 44;
loc_82A13B18:
	// lbz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a13b94
	if (ctx.cr0.eq) goto loc_82A13B94;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a13b94
	if (!ctx.cr6.eq) goto loc_82A13B94;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a13b94
	if (ctx.cr6.eq) goto loc_82A13B94;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mulli r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 * 448;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a13b88
	if (ctx.cr6.eq) goto loc_82A13B88;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
loc_82A13B5C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a13b7c
	if (ctx.cr6.eq) goto loc_82A13B7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,448
	ctx.r10.s64 = ctx.r10.s64 + 448;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x82a13b5c
	if (ctx.cr6.lt) goto loc_82A13B5C;
	// b 0x82a13b94
	goto loc_82A13B94;
loc_82A13B7C:
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// mulli r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 * 448;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82A13B88:
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82a211b8
	ctx.lr = 0x82A13B94;
	sub_82A211B8(ctx, base);
loc_82A13B94:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// bne 0x82a13b18
	if (!ctx.cr0.eq) goto loc_82A13B18;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82a13afc
	goto loc_82A13AFC;
}

__attribute__((alias("__imp__sub_82A13BA8"))) PPC_WEAK_FUNC(sub_82A13BA8);
PPC_FUNC_IMPL(__imp__sub_82A13BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A13BB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,2784
	ctx.r5.s64 = 2784;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82a75988
	ctx.lr = 0x82A13BD4;
	sub_82A75988(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,21076
	ctx.r10.s64 = 21076;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r9,2736(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2736, ctx.r9.u64);
	// beq cr6,0x82a13c04
	if (ctx.cr6.eq) goto loc_82A13C04;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,2748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2748, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,2752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2752, ctx.r10.u32);
loc_82A13C04:
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r9,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r9.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r8,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r8.u32);
	// lvx128 v63,r30,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r30,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v62,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r7,2744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2744, ctx.r7.u32);
	// bl 0x83178df4
	ctx.lr = 0x82A13C38;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r6,54
	ctx.r6.s64 = 3538944;
	// rlwinm r5,r3,0,8,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF00;
	// ori r4,r6,45056
	ctx.r4.u64 = ctx.r6.u64 | 45056;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82a13c64
	if (ctx.cr6.gt) goto loc_82A13C64;
	// lwz r11,2744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2744);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a13c64
	if (ctx.cr6.eq) goto loc_82A13C64;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,2744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2744, ctx.r11.u32);
loc_82A13C64:
	// li r5,2688
	ctx.r5.s64 = 2688;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82a75220
	ctx.lr = 0x82A13C74;
	sub_82A75220(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A13C7C"))) PPC_WEAK_FUNC(sub_82A13C7C);
PPC_FUNC_IMPL(__imp__sub_82A13C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13C80"))) PPC_WEAK_FUNC(sub_82A13C80);
PPC_FUNC_IMPL(__imp__sub_82A13C80) {
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
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,21076
	ctx.r7.s64 = 21076;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82a775d0
	ctx.lr = 0x82A13CC0;
	sub_82A775D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13CD0"))) PPC_WEAK_FUNC(sub_82A13CD0);
PPC_FUNC_IMPL(__imp__sub_82A13CD0) {
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
	// stwu r1,-2912(r1)
	ea = -2912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a13dc0
	if (ctx.cr6.eq) goto loc_82A13DC0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a13dc0
	if (ctx.cr6.eq) goto loc_82A13DC0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a13dc0
	if (ctx.cr6.eq) goto loc_82A13DC0;
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r10,768
	ctx.r10.s64 = 768;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a13ba8
	ctx.lr = 0x82A13D24;
	sub_82A13BA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a775b8
	ctx.lr = 0x82A13D2C;
	sub_82A775B8(ctx, base);
	// lis r9,-31999
	ctx.r9.s64 = -2097086464;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// ori r8,r9,11
	ctx.r8.u64 = ctx.r9.u64 | 11;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82a13db4
	if (!ctx.cr6.eq) goto loc_82A13DB4;
	// addi r31,r10,29312
	ctx.r31.s64 = ctx.r10.s64 + 29312;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r30,r10,-12608
	ctx.r30.s64 = ctx.r10.s64 + -12608;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A13D5C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,2860(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2860);
	// ori r9,r10,59548
	ctx.r9.u64 = ctx.r10.u64 | 59548;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bne cr6,0x82a13d7c
	if (!ctx.cr6.eq) goto loc_82A13D7C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A13D7C:
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r9,2864(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2864);
	// ori r7,r8,59564
	ctx.r7.u64 = ctx.r8.u64 | 59564;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// bne cr6,0x82a13d9c
	if (!ctx.cr6.eq) goto loc_82A13D9C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A13D9C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r9,r10,59568
	ctx.r9.u64 = ctx.r10.u64 | 59568;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A13DB0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a13dc0
	goto loc_82A13DC0;
loc_82A13DB4:
	// addi r9,r10,29312
	ctx.r9.s64 = ctx.r10.s64 + 29312;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r9)
	PPC_STORE_U32(ctx.r9.u32 + 132, ctx.r11.u32);
loc_82A13DC0:
	// addi r1,r1,2912
	ctx.r1.s64 = ctx.r1.s64 + 2912;
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

__attribute__((alias("__imp__sub_82A13DD8"))) PPC_WEAK_FUNC(sub_82A13DD8);
PPC_FUNC_IMPL(__imp__sub_82A13DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A13DE0;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a13e00
	if (!ctx.cr6.eq) goto loc_82A13E00;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a13ed8
	goto loc_82A13ED8;
loc_82A13E00:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,31328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a13e1c
	if (!ctx.cr6.eq) goto loc_82A13E1C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a13ed8
	goto loc_82A13ED8;
loc_82A13E1C:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,24432
	ctx.r30.s64 = ctx.r11.s64 + 24432;
	// addi r4,r30,6528
	ctx.r4.s64 = ctx.r30.s64 + 6528;
	// bl 0x82a22158
	ctx.lr = 0x82A13E30;
	sub_82A22158(ctx, base);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r24,r11,-12312
	ctx.r24.s64 = ctx.r11.s64 + -12312;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A13E40;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r23,-31963
	ctx.r23.s64 = -2094727168;
	// ld r11,31336(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 31336);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x82a13ec4
	if (ctx.cr6.eq) goto loc_82A13EC4;
	// ld r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r25,r28,32
	ctx.r25.s64 = ctx.r28.s64 + 32;
	// li r26,0
	ctx.r26.s64 = 0;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r29,r30,6528
	ctx.r29.s64 = ctx.r30.s64 + 6528;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r27,r28,48
	ctx.r27.s64 = ctx.r28.s64 + 48;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
loc_82A13E78:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A13E7C:
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// lvx128 v1,r0,r25
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mulli r11,r11,544
	ctx.r11.s64 = ctx.r11.s64 * 544;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a21c38
	ctx.lr = 0x82A13EA0;
	sub_82A21C38(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82a13e7c
	if (ctx.cr6.lt) goto loc_82A13E7C;
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
	// addi r11,r30,6888
	ctx.r11.s64 = ctx.r30.s64 + 6888;
	// addi r27,r27,448
	ctx.r27.s64 = ctx.r27.s64 + 448;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a13e78
	if (ctx.cr6.lt) goto loc_82A13E78;
loc_82A13EC4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A13ECC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,31336(r23)
	PPC_STORE_U64(ctx.r23.u32 + 31336, ctx.r11.u64);
loc_82A13ED8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A13EE4"))) PPC_WEAK_FUNC(sub_82A13EE4);
PPC_FUNC_IMPL(__imp__sub_82A13EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13EE8"))) PPC_WEAK_FUNC(sub_82A13EE8);
PPC_FUNC_IMPL(__imp__sub_82A13EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A13EF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// rlwinm. r11,r11,0,27,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a13f20
	if (ctx.cr0.eq) goto loc_82A13F20;
loc_82A13F14:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a1409c
	goto loc_82A1409C;
loc_82A13F20:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a13f14
	if (ctx.cr0.eq) goto loc_82A13F14;
	// rlwinm. r27,r30,0,26,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82a13f40
	if (ctx.cr0.eq) goto loc_82A13F40;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x82a13f40
	if (ctx.cr6.lt) goto loc_82A13F40;
	// cmpwi cr6,r29,-2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -2, ctx.xer);
	// bne cr6,0x82a13f14
	if (!ctx.cr6.eq) goto loc_82A13F14;
loc_82A13F40:
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a13f50
	if (ctx.cr0.eq) goto loc_82A13F50;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a13f14
	if (ctx.cr6.eq) goto loc_82A13F14;
loc_82A13F50:
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a13f60
	if (ctx.cr0.eq) goto loc_82A13F60;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a13f14
	if (ctx.cr6.eq) goto loc_82A13F14;
loc_82A13F60:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// lwz r10,10632(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10632);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a14094
	if (ctx.cr6.eq) goto loc_82A14094;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a14094
	if (ctx.cr6.eq) goto loc_82A14094;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a13f9c
	if (!ctx.cr6.eq) goto loc_82A13F9C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1167
	ctx.r3.u64 = ctx.r3.u64 | 1167;
	// b 0x82a1409c
	goto loc_82A1409C;
loc_82A13F9C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A13FA4;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A13FAC;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a13fe4
	if (!ctx.cr6.eq) goto loc_82A13FE4;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A13FD4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0ca30
	ctx.lr = 0x82A13FDC;
	sub_82A0CA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a1409c
	goto loc_82A1409C;
loc_82A13FE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a0c960
	ctx.lr = 0x82A13FFC;
	sub_82A0C960(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a14010
	if (!ctx.cr0.eq) goto loc_82A14010;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,8
	ctx.r31.u64 = ctx.r31.u64 | 8;
	// b 0x82a13fd4
	goto loc_82A13FD4;
loc_82A14010:
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mulli r11,r6,352
	ctx.r11.s64 = ctx.r6.s64 * 352;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,224
	ctx.r5.s64 = ctx.r11.s64 + 224;
	// lwz r11,544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a14038
	if (!ctx.cr6.eq) goto loc_82A14038;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
	// b 0x82a13fd4
	goto loc_82A13FD4;
loc_82A14038:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a1406c
	if (ctx.cr6.eq) goto loc_82A1406C;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bgt cr6,0x82a1406c
	if (ctx.cr6.gt) goto loc_82A1406C;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a14060
	if (ctx.cr6.eq) goto loc_82A14060;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82a1406c
	if (!ctx.cr6.eq) goto loc_82A1406C;
loc_82A14060:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82a13fd4
	goto loc_82A13FD4;
loc_82A1406C:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a0ea78
	ctx.lr = 0x82A1408C;
	sub_82A0EA78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a13fd4
	goto loc_82A13FD4;
loc_82A14094:
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
loc_82A1409C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A140A4"))) PPC_WEAK_FUNC(sub_82A140A4);
PPC_FUNC_IMPL(__imp__sub_82A140A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A140A8"))) PPC_WEAK_FUNC(sub_82A140A8);
PPC_FUNC_IMPL(__imp__sub_82A140A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A140B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a140e4
	if (!ctx.cr6.eq) goto loc_82A140E4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1167
	ctx.r3.u64 = ctx.r3.u64 | 1167;
	// b 0x82a141c8
	goto loc_82A141C8;
loc_82A140E4:
	// lwz r11,10632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a141c0
	if (ctx.cr6.eq) goto loc_82A141C0;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a141c0
	if (ctx.cr6.eq) goto loc_82A141C0;
	// rlwinm. r11,r29,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a14114
	if (ctx.cr0.eq) goto loc_82A14114;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a141c8
	goto loc_82A141C8;
loc_82A14114:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A1411C;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A14124;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a1415c
	if (!ctx.cr6.eq) goto loc_82A1415C;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A1414C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0ca30
	ctx.lr = 0x82A14154;
	sub_82A0CA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a141c8
	goto loc_82A141C8;
loc_82A1415C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0c960
	ctx.lr = 0x82A14174;
	sub_82A0C960(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a14188
	if (!ctx.cr0.eq) goto loc_82A14188;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,8
	ctx.r31.u64 = ctx.r31.u64 | 8;
	// b 0x82a1414c
	goto loc_82A1414C;
loc_82A14188:
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mulli r11,r6,352
	ctx.r11.s64 = ctx.r6.s64 * 352;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,224
	ctx.r5.s64 = ctx.r11.s64 + 224;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a0ea78
	ctx.lr = 0x82A141B8;
	sub_82A0EA78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a1414c
	goto loc_82A1414C;
loc_82A141C0:
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
loc_82A141C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A141D0"))) PPC_WEAK_FUNC(sub_82A141D0);
PPC_FUNC_IMPL(__imp__sub_82A141D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A141D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x82a141f8
	if (ctx.cr6.lt) goto loc_82A141F8;
loc_82A141EC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a14264
	goto loc_82A14264;
loc_82A141F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a141ec
	if (ctx.cr6.eq) goto loc_82A141EC;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a1425c
	if (ctx.cr6.eq) goto loc_82A1425C;
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a1425c
	if (ctx.cr6.eq) goto loc_82A1425C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A1422C;
	sub_82A0C9B8(ctx, base);
	// lwz r30,24028(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A14234;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a1426c
	if (!ctx.cr6.eq) goto loc_82A1426C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A1425C;
	sub_82A0CA30(ctx, base);
loc_82A1425C:
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
loc_82A14264:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A1426C:
	// mulli r10,r29,28
	ctx.r10.s64 = ctx.r29.s64 * 28;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,254
	ctx.r9.s64 = 254;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a142c0
	if (ctx.cr6.eq) goto loc_82A142C0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82a142c0
	if (ctx.cr6.eq) goto loc_82A142C0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a142c0
	if (!ctx.cr6.eq) goto loc_82A142C0;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82A142C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A142C8;
	sub_82A0CA30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a14264
	goto loc_82A14264;
}

__attribute__((alias("__imp__sub_82A142D0"))) PPC_WEAK_FUNC(sub_82A142D0);
PPC_FUNC_IMPL(__imp__sub_82A142D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A142D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a143d4
	if (ctx.cr6.eq) goto loc_82A143D4;
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a143d4
	if (ctx.cr6.eq) goto loc_82A143D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A1430C;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A14314;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a1434c
	if (!ctx.cr6.eq) goto loc_82A1434C;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A1433C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A14344;
	sub_82A0CA30(ctx, base);
loc_82A14344:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a143dc
	goto loc_82A143DC;
loc_82A1434C:
	// addis r29,r30,2
	ctx.r29.s64 = ctx.r30.s64 + 131072;
	// addi r29,r29,19108
	ctx.r29.s64 = ctx.r29.s64 + 19108;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a1436c
	if (ctx.cr6.eq) goto loc_82A1436C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,170
	ctx.r31.u64 = ctx.r31.u64 | 170;
	// b 0x82a1433c
	goto loc_82A1433C;
loc_82A1436C:
	// clrlwi. r31,r27,24
	ctx.r31.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a14378
	if (!ctx.cr0.eq) goto loc_82A14378;
	// bl 0x82a74720
	ctx.lr = 0x82A14378;
	sub_82A74720(ctx, base);
loc_82A14378:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82a0e918
	ctx.lr = 0x82A1439C;
	sub_82A0E918(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a143a8
	if (ctx.cr0.lt) goto loc_82A143A8;
	// bl 0x82a0d0c0
	ctx.lr = 0x82A143A8;
	sub_82A0D0C0(ctx, base);
loc_82A143A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A143B0;
	sub_82A0CA30(ctx, base);
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// li r7,0
	ctx.r7.s64 = 0;
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,-2396
	ctx.r3.s64 = ctx.r3.s64 + -2396;
	// bl 0x83179414
	ctx.lr = 0x82A143D0;
	__imp__KeWaitForSingleObject(ctx, base);
	// b 0x82a14344
	goto loc_82A14344;
loc_82A143D4:
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
loc_82A143DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A143E4"))) PPC_WEAK_FUNC(sub_82A143E4);
PPC_FUNC_IMPL(__imp__sub_82A143E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A143E8"))) PPC_WEAK_FUNC(sub_82A143E8);
PPC_FUNC_IMPL(__imp__sub_82A143E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a142d0
	sub_82A142D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A143F0"))) PPC_WEAK_FUNC(sub_82A143F0);
PPC_FUNC_IMPL(__imp__sub_82A143F0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a14428
	if (ctx.cr6.eq) goto loc_82A14428;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,-24632(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24632);
	// bl 0x82691460
	ctx.lr = 0x82A1441C;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82A14428:
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

__attribute__((alias("__imp__sub_82A1443C"))) PPC_WEAK_FUNC(sub_82A1443C);
PPC_FUNC_IMPL(__imp__sub_82A1443C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A14440"))) PPC_WEAK_FUNC(sub_82A14440);
PPC_FUNC_IMPL(__imp__sub_82A14440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f29,f4
	ctx.f29.f64 = ctx.f4.f64;
	// bl 0x82a22330
	ctx.lr = 0x82A14474;
	sub_82A22330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a22340
	ctx.lr = 0x82A14480;
	sub_82A22340(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a22350
	ctx.lr = 0x82A1448C;
	sub_82A22350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a22360
	ctx.lr = 0x82A14498;
	sub_82A22360(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A144B8"))) PPC_WEAK_FUNC(sub_82A144B8);
PPC_FUNC_IMPL(__imp__sub_82A144B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A144C0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82a231a0
	ctx.lr = 0x82A144F0;
	sub_82A231A0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a22300
	ctx.lr = 0x82A144F8;
	sub_82A22300(ctx, base);
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82fa77c0
	ctx.lr = 0x82A14508;
	sub_82FA77C0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r5,359(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 359);
	// bl 0x82a23348
	ctx.lr = 0x82A14518;
	sub_82A23348(ctx, base);
	// lwz r5,340(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r10,348(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a24960
	ctx.lr = 0x82A14560;
	sub_82A24960(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828b2440
	ctx.lr = 0x82A1456C;
	sub_828B2440(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1457C"))) PPC_WEAK_FUNC(sub_82A1457C);
PPC_FUNC_IMPL(__imp__sub_82A1457C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A14580"))) PPC_WEAK_FUNC(sub_82A14580);
PPC_FUNC_IMPL(__imp__sub_82A14580) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// b 0x82a22d50
	sub_82A22D50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A14588"))) PPC_WEAK_FUNC(sub_82A14588);
PPC_FUNC_IMPL(__imp__sub_82A14588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A14590;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,68(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x829fd340
	ctx.lr = 0x82A145B8;
	sub_829FD340(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a1462c
	if (ctx.cr0.lt) goto loc_82A1462C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fdbe0
	ctx.lr = 0x82A145D4;
	sub_829FDBE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a1462c
	if (ctx.cr0.lt) goto loc_82A1462C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fdbe0
	ctx.lr = 0x82A145F0;
	sub_829FDBE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a1462c
	if (ctx.cr0.lt) goto loc_82A1462C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fdbe0
	ctx.lr = 0x82A1460C;
	sub_829FDBE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a1462c
	if (ctx.cr0.lt) goto loc_82A1462C;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fdbe0
	ctx.lr = 0x82A14628;
	sub_829FDBE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82A1462C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fde58
	ctx.lr = 0x82A14638;
	sub_829FDE58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A14644"))) PPC_WEAK_FUNC(sub_82A14644);
PPC_FUNC_IMPL(__imp__sub_82A14644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A14648"))) PPC_WEAK_FUNC(sub_82A14648);
PPC_FUNC_IMPL(__imp__sub_82A14648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A14650;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,68(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x829fd340
	ctx.lr = 0x82A14678;
	sub_829FD340(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a146ec
	if (ctx.cr0.lt) goto loc_82A146EC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fdbe0
	ctx.lr = 0x82A14694;
	sub_829FDBE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a146ec
	if (ctx.cr0.lt) goto loc_82A146EC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fdbe0
	ctx.lr = 0x82A146B0;
	sub_829FDBE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a146ec
	if (ctx.cr0.lt) goto loc_82A146EC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fdbe0
	ctx.lr = 0x82A146CC;
	sub_829FDBE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a146ec
	if (ctx.cr0.lt) goto loc_82A146EC;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fd8d8
	ctx.lr = 0x82A146E8;
	sub_829FD8D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82A146EC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fde58
	ctx.lr = 0x82A146F8;
	sub_829FDE58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A14704"))) PPC_WEAK_FUNC(sub_82A14704);
PPC_FUNC_IMPL(__imp__sub_82A14704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A14708"))) PPC_WEAK_FUNC(sub_82A14708);
PPC_FUNC_IMPL(__imp__sub_82A14708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// stb r9,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r9.u8);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// b 0x82a22828
	sub_82A22828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A14740"))) PPC_WEAK_FUNC(sub_82A14740);
PPC_FUNC_IMPL(__imp__sub_82A14740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r4,23656(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23656);
	// b 0x82a24f38
	sub_82A24F38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A14750"))) PPC_WEAK_FUNC(sub_82A14750);
PPC_FUNC_IMPL(__imp__sub_82A14750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f31,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f31.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82a14648
	ctx.lr = 0x82A14798;
	sub_82A14648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a148e8
	if (ctx.cr0.lt) goto loc_82A148E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82a147d4
	if (ctx.cr6.lt) goto loc_82A147D4;
	// beq cr6,0x82a147cc
	if (ctx.cr6.eq) goto loc_82A147CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82a147c4
	if (ctx.cr6.lt) goto loc_82A147C4;
	// bne cr6,0x82a147d8
	if (!ctx.cr6.eq) goto loc_82A147D8;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82a147d8
	goto loc_82A147D8;
loc_82A147C4:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82a147d8
	goto loc_82A147D8;
loc_82A147CC:
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82a147d8
	goto loc_82A147D8;
loc_82A147D4:
	// li r11,30
	ctx.r11.s64 = 30;
loc_82A147D8:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82a14838
	if (ctx.cr6.lt) goto loc_82A14838;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82a14824
	if (ctx.cr6.lt) goto loc_82A14824;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,-23728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23728);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,-27880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27880);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82a14878
	if (!ctx.cr6.lt) goto loc_82A14878;
	// b 0x82a1486c
	goto loc_82A1486C;
loc_82A14824:
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f11,-23728(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23728);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f13,-27880(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27880);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a14878
	goto loc_82A14878;
loc_82A14838:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a14858
	if (ctx.cr6.lt) goto loc_82A14858;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f13,-23728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23728);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,-27880(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27880);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// b 0x82a14878
	goto loc_82A14878;
loc_82A14858:
	// lfs f11,-23728(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23728);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// lfs f13,-27880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27880);
	ctx.f13.f64 = double(temp.f32);
	// bgt cr6,0x82a14874
	if (ctx.cr6.gt) goto loc_82A14874;
loc_82A1486C:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x82a14878
	goto loc_82A14878;
loc_82A14874:
	// fsubs f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
loc_82A14878:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// addi r11,r10,23656
	ctx.r11.s64 = ctx.r10.s64 + 23656;
	// mulli r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 * 48;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f10,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stfsx f12,r10,r9
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// fdivs f0,f31,f10
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f10.f64));
	// stfsx f11,r10,r7
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// stfsx f13,r10,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_82A148E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82A14900"))) PPC_WEAK_FUNC(sub_82A14900);
PPC_FUNC_IMPL(__imp__sub_82A14900) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82a22300
	ctx.lr = 0x82A14934;
	sub_82A22300(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82c0e990
	ctx.lr = 0x82A14940;
	sub_82C0E990(ctx, base);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x82a24d08
	ctx.lr = 0x82A14948;
	sub_82A24D08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a22368
	ctx.lr = 0x82A14950;
	sub_82A22368(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a22370
	ctx.lr = 0x82A1495C;
	sub_82A22370(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a149c8
	if (ctx.cr0.lt) goto loc_82A149C8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a22338
	ctx.lr = 0x82A1496C;
	sub_82A22338(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82a22358
	ctx.lr = 0x82A14978;
	sub_82A22358(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x82a22348
	ctx.lr = 0x82A14984;
	sub_82A22348(ctx, base);
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bgt cr6,0x82a1499c
	if (ctx.cr6.gt) goto loc_82A1499C;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
	// b 0x82a149c8
	goto loc_82A149C8;
loc_82A1499C:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// beq cr6,0x82a149b4
	if (ctx.cr6.eq) goto loc_82A149B4;
	// fmuls f0,f29,f30
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_82A149B4:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a14440
	ctx.lr = 0x82A149C8;
	sub_82A14440(ctx, base);
loc_82A149C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
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

__attribute__((alias("__imp__sub_82A149F0"))) PPC_WEAK_FUNC(sub_82A149F0);
PPC_FUNC_IMPL(__imp__sub_82A149F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A149F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,116
	ctx.r30.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x82a22328
	ctx.lr = 0x82A14A24;
	sub_82A22328(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22338
	ctx.lr = 0x82A14A30;
	sub_82A22338(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22358
	ctx.lr = 0x82A14A3C;
	sub_82A22358(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// stfs f1,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfsx f0,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// lfsx f0,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// lfs f0,5184(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a14ae0
	if (ctx.cr6.eq) goto loc_82A14AE0;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,-15356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-14268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14268);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f12,-1588(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1588);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a23ac8
	ctx.lr = 0x82A14AD8;
	sub_82A23AC8(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82A14AE0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A14AE8"))) PPC_WEAK_FUNC(sub_82A14AE8);
PPC_FUNC_IMPL(__imp__sub_82A14AE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// b 0x82a25440
	sub_82A25440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A14AF0"))) PPC_WEAK_FUNC(sub_82A14AF0);
PPC_FUNC_IMPL(__imp__sub_82A14AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r8,68(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,23656
	ctx.r10.s64 = ctx.r10.s64 + 23656;
	// mulli r7,r8,48
	ctx.r7.s64 = ctx.r8.s64 * 48;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r3,r7,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a14b90
	if (!ctx.cr6.eq) goto loc_82A14B90;
	// addi r10,r4,412
	ctx.r10.s64 = ctx.r4.s64 + 412;
loc_82A14B28:
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bge cr6,0x82a14c00
	if (!ctx.cr6.lt) goto loc_82A14C00;
	// lwz r7,-364(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -364);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82a14b7c
	if (!ctx.cr6.eq) goto loc_82A14B7C;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82a14b7c
	if (ctx.cr6.eq) goto loc_82A14B7C;
	// addi r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 + 6;
	// li r7,-284
	ctx.r7.s64 = -284;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// lvx128 v63,r10,r7
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stvx128 v63,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
loc_82A14B7C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,448
	ctx.r10.s64 = ctx.r10.s64 + 448;
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// blt cr6,0x82a14b28
	if (ctx.cr6.lt) goto loc_82A14B28;
	// b 0x82a14c00
	goto loc_82A14C00;
loc_82A14B90:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r9,r4,52
	ctx.r9.s64 = ctx.r4.s64 + 52;
loc_82A14B98:
	// lwz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82a14bbc
	if (!ctx.cr6.eq) goto loc_82A14BBC;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82a14bbc
	if (!ctx.cr6.eq) goto loc_82A14BBC;
	// lwz r7,360(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 360);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82a14bd0
	if (!ctx.cr6.eq) goto loc_82A14BD0;
loc_82A14BBC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,448
	ctx.r9.s64 = ctx.r9.s64 + 448;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x82a14b98
	if (ctx.cr6.lt) goto loc_82A14B98;
	// b 0x82a14c00
	goto loc_82A14C00;
loc_82A14BD0:
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// mulli r9,r10,448
	ctx.r9.s64 = ctx.r10.s64 * 448;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// li r8,128
	ctx.r8.s64 = 128;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v63,r9,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r10,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82A14C00:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A14C1C"))) PPC_WEAK_FUNC(sub_82A14C1C);
PPC_FUNC_IMPL(__imp__sub_82A14C1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A14C20"))) PPC_WEAK_FUNC(sub_82A14C20);
PPC_FUNC_IMPL(__imp__sub_82A14C20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// b 0x82920500
	sub_82920500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A14C28"))) PPC_WEAK_FUNC(sub_82A14C28);
PPC_FUNC_IMPL(__imp__sub_82A14C28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// b 0x82a24d30
	sub_82A24D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A14C30"))) PPC_WEAK_FUNC(sub_82A14C30);
PPC_FUNC_IMPL(__imp__sub_82A14C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A14C38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,112
	ctx.r29.s64 = ctx.r3.s64 + 112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// stw r4,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r4.u32);
	// stw r4,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r4.u32);
	// bl 0x82c0e990
	ctx.lr = 0x82A14C5C;
	sub_82C0E990(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r3,9244
	ctx.r3.s64 = 9244;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x82a25338
	ctx.lr = 0x82A14C80;
	sub_82A25338(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a14c90
	if (ctx.cr0.eq) goto loc_82A14C90;
	// bl 0x82a253d8
	ctx.lr = 0x82A14C8C;
	sub_82A253D8(ctx, base);
	// b 0x82a14c94
	goto loc_82A14C94;
loc_82A14C90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A14C94:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// beq cr6,0x82a14d14
	if (ctx.cr6.eq) goto loc_82A14D14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a25758
	ctx.lr = 0x82A14CA8;
	sub_82A25758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a14da0
	if (ctx.cr0.lt) goto loc_82A14DA0;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x82a25338
	ctx.lr = 0x82A14CB8;
	sub_82A25338(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a14cc8
	if (ctx.cr0.eq) goto loc_82A14CC8;
	// bl 0x82a23df8
	ctx.lr = 0x82A14CC4;
	sub_82A23DF8(ctx, base);
	// b 0x82a14ccc
	goto loc_82A14CCC;
loc_82A14CC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A14CCC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// beq cr6,0x82a14d14
	if (ctx.cr6.eq) goto loc_82A14D14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,140(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x82a24488
	ctx.lr = 0x82A14CE4;
	sub_82A24488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a14da0
	if (ctx.cr0.lt) goto loc_82A14DA0;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82a25338
	ctx.lr = 0x82A14CF4;
	sub_82A25338(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a14d04
	if (ctx.cr0.eq) goto loc_82A14D04;
	// bl 0x82a22718
	ctx.lr = 0x82A14D00;
	sub_82A22718(ctx, base);
	// b 0x82a14d08
	goto loc_82A14D08;
loc_82A14D04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A14D08:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// bne cr6,0x82a14d20
	if (!ctx.cr6.eq) goto loc_82A14D20;
loc_82A14D14:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a14da0
	goto loc_82A14DA0;
loc_82A14D20:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,144(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a22c60
	ctx.lr = 0x82A14D30;
	sub_82A22C60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a14da0
	if (ctx.cr0.lt) goto loc_82A14DA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfd f1,-24648(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -24648);
	// bl 0x82a22930
	ctx.lr = 0x82A14D54;
	sub_82A22930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a14da0
	if (ctx.cr0.lt) goto loc_82A14DA0;
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a24f40
	ctx.lr = 0x82A14D6C;
	sub_82A24F40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a14da0
	if (ctx.cr0.lt) goto loc_82A14DA0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82a22cd0
	ctx.lr = 0x82A14D80;
	sub_82A22CD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a14da0
	if (ctx.cr0.lt) goto loc_82A14DA0;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a14da0
	if (ctx.cr6.eq) goto loc_82A14DA0;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82a23540
	ctx.lr = 0x82A14DA0;
	sub_82A23540(ctx, base);
loc_82A14DA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A14DA8"))) PPC_WEAK_FUNC(sub_82A14DA8);
PPC_FUNC_IMPL(__imp__sub_82A14DA8) {
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
	// bl 0x82a143f0
	ctx.lr = 0x82A14DC8;
	sub_82A143F0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-24632(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24632);
	// bl 0x82691410
	ctx.lr = 0x82A14DDC;
	sub_82691410(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82A14DF8"))) PPC_WEAK_FUNC(sub_82A14DF8);
PPC_FUNC_IMPL(__imp__sub_82A14DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A14E00;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r27,r5,30,2,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r26,r6,30,2,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mullw r4,r26,r27
	ctx.r4.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r27.s32);
	// lwzx r23,r10,r11
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82a14e50
	if (!ctx.cr6.lt) goto loc_82A14E50;
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// bl 0x82a14da8
	ctx.lr = 0x82A14E50;
	sub_82A14DA8(ctx, base);
loc_82A14E50:
	// lwz r28,76(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82a14e68
	if (!ctx.cr6.eq) goto loc_82A14E68;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82a14ee4
	goto loc_82A14EE4;
loc_82A14E68:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82a25678
	ctx.lr = 0x82A14E88;
	sub_82A25678(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a14ee4
	if (ctx.cr0.lt) goto loc_82A14EE4;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r29,r31,88
	ctx.r29.s64 = ctx.r31.s64 + 88;
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a24498
	ctx.lr = 0x82A14EB8;
	sub_82A24498(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a14ee4
	if (ctx.cr0.lt) goto loc_82A14EE4;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82a14ee4
	if (ctx.cr6.eq) goto loc_82A14EE4;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lfs f2,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A14EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A14EE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A14EF0"))) PPC_WEAK_FUNC(sub_82A14EF0);
PPC_FUNC_IMPL(__imp__sub_82A14EF0) {
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
	// bl 0x82a14900
	ctx.lr = 0x82A14F08;
	sub_82A14900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a14f28
	if (ctx.cr0.lt) goto loc_82A14F28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a14750
	ctx.lr = 0x82A14F18;
	sub_82A14750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a14f28
	if (ctx.cr0.lt) goto loc_82A14F28;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
loc_82A14F28:
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

__attribute__((alias("__imp__sub_82A14F3C"))) PPC_WEAK_FUNC(sub_82A14F3C);
PPC_FUNC_IMPL(__imp__sub_82A14F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A14F40"))) PPC_WEAK_FUNC(sub_82A14F40);
PPC_FUNC_IMPL(__imp__sub_82A14F40) {
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
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82a229c0
	ctx.lr = 0x82A14F5C;
	sub_82A229C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a14f6c
	if (ctx.cr0.lt) goto loc_82A14F6C;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82a22f68
	ctx.lr = 0x82A14F6C;
	sub_82A22F68(ctx, base);
loc_82A14F6C:
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

__attribute__((alias("__imp__sub_82A14F80"))) PPC_WEAK_FUNC(sub_82A14F80);
PPC_FUNC_IMPL(__imp__sub_82A14F80) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f31,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// addi r9,r9,-24640
	ctx.r9.s64 = ctx.r9.s64 + -24640;
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// stfs f31,16(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stfs f31,84(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f31,88(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// bl 0x82a22300
	ctx.lr = 0x82A15004;
	sub_82A22300(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// addi r8,r11,15312
	ctx.r8.s64 = ctx.r11.s64 + 15312;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lvx128 v63,r0,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
loc_82A15034:
	// stfs f31,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stw r30,-72(r11)
	PPC_STORE_U32(ctx.r11.u32 + -72, ctx.r30.u32);
	// stfsu f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82a15034
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A15034;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1506C"))) PPC_WEAK_FUNC(sub_82A1506C);
PPC_FUNC_IMPL(__imp__sub_82A1506C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A15070"))) PPC_WEAK_FUNC(sub_82A15070);
PPC_FUNC_IMPL(__imp__sub_82A15070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A15078;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r30,148(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24640
	ctx.r11.s64 = ctx.r11.s64 + -24640;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82a150a8
	if (ctx.cr6.eq) goto loc_82A150A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22c18
	ctx.lr = 0x82A150A0;
	sub_82A22C18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22708
	ctx.lr = 0x82A150A8;
	sub_82A22708(ctx, base);
loc_82A150A8:
	// lwz r29,144(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a150cc
	if (ctx.cr6.eq) goto loc_82A150CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a239c0
	ctx.lr = 0x82A150C4;
	sub_82A239C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22708
	ctx.lr = 0x82A150CC;
	sub_82A22708(ctx, base);
loc_82A150CC:
	// lwz r29,140(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a150ec
	if (ctx.cr6.eq) goto loc_82A150EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828b2440
	ctx.lr = 0x82A150E4;
	sub_828B2440(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22708
	ctx.lr = 0x82A150EC;
	sub_82A22708(ctx, base);
loc_82A150EC:
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a15104
	if (ctx.cr6.eq) goto loc_82A15104;
	// bl 0x82a08ca0
	ctx.lr = 0x82A15100;
	sub_82A08CA0(ctx, base);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
loc_82A15104:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a15118
	if (ctx.cr6.eq) goto loc_82A15118;
	// bl 0x82a08ca0
	ctx.lr = 0x82A15114;
	sub_82A08CA0(ctx, base);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
loc_82A15118:
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82a143f0
	ctx.lr = 0x82A15120;
	sub_82A143F0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r11,r11,29064
	ctx.r11.s64 = ctx.r11.s64 + 29064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A15134"))) PPC_WEAK_FUNC(sub_82A15134);
PPC_FUNC_IMPL(__imp__sub_82A15134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A15138"))) PPC_WEAK_FUNC(sub_82A15138);
PPC_FUNC_IMPL(__imp__sub_82A15138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A15140;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r6,r29,2
	ctx.r6.s64 = ctx.r29.s64 + 2;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r11,r7,23656
	ctx.r11.s64 = ctx.r7.s64 + 23656;
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// mulli r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 * 48;
	// lwzx r21,r9,r10
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82a23260
	ctx.lr = 0x82A151B8;
	sub_82A23260(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a23378
	ctx.lr = 0x82A151CC;
	sub_82A23378(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a153b4
	if (ctx.cr0.lt) goto loc_82A153B4;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82a23270
	ctx.lr = 0x82A151DC;
	sub_82A23270(ctx, base);
	// bl 0x8234cc28
	ctx.lr = 0x82A151E0;
	sub_8234CC28(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r25,r9,r11
	ctx.r25.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r24,r7,r8
	ctx.r24.s64 = ctx.r8.s64 - ctx.r7.s64;
	// mullw r4,r24,r25
	ctx.r4.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r25.s32);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82a15234
	if (!ctx.cr6.lt) goto loc_82A15234;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82a14da8
	ctx.lr = 0x82A15234;
	sub_82A14DA8(ctx, base);
loc_82A15234:
	// lwz r28,76(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82a1524c
	if (!ctx.cr6.eq) goto loc_82A1524C;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82a153b4
	goto loc_82A153B4;
loc_82A1524C:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82a25440
	ctx.lr = 0x82A1526C;
	sub_82A25440(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a153b4
	if (ctx.cr0.lt) goto loc_82A153B4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82a23780
	ctx.lr = 0x82A15298;
	sub_82A23780(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a153b4
	if (ctx.cr0.lt) goto loc_82A153B4;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// bl 0x82a23278
	ctx.lr = 0x82A152B0;
	sub_82A23278(ctx, base);
	// bl 0x8234cc28
	ctx.lr = 0x82A152B4;
	sub_8234CC28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// bl 0x82a23258
	ctx.lr = 0x82A1530C;
	sub_82A23258(ctx, base);
	// lbz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// addi r11,r29,25
	ctx.r11.s64 = ctx.r29.s64 + 25;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r29,23
	ctx.r10.s64 = ctx.r29.s64 + 23;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r9,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r9.u8);
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r26,r10,r31
	ctx.r26.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a144b8
	ctx.lr = 0x82A15358;
	sub_82A144B8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a153b4
	if (ctx.cr0.lt) goto loc_82A153B4;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82a153b4
	if (ctx.cr6.eq) goto loc_82A153B4;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lbz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A15394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lfs f2,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A153B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A153B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A153C0"))) PPC_WEAK_FUNC(sub_82A153C0);
PPC_FUNC_IMPL(__imp__sub_82A153C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A153C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,68(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fe378
	ctx.lr = 0x82A153E4;
	sub_829FE378(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a154f0
	if (ctx.cr0.lt) goto loc_82A154F0;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,29312
	ctx.r29.s64 = ctx.r11.s64 + 29312;
loc_82A153F8:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82a77720
	ctx.lr = 0x82A15400;
	sub_82A77720(ctx, base);
	// lwz r11,10632(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10632);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a154fc
	if (ctx.cr6.eq) goto loc_82A154FC;
	// bl 0x829ff3a0
	ctx.lr = 0x82A15414;
	sub_829FF3A0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r31,2000
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2000, ctx.xer);
	// blt cr6,0x82a153f8
	if (ctx.cr6.lt) goto loc_82A153F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fd8d8
	ctx.lr = 0x82A15444;
	sub_829FD8D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a154f0
	if (ctx.cr0.lt) goto loc_82A154F0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82a15460
	if (!ctx.cr6.eq) goto loc_82A15460;
	// li r4,60
	ctx.r4.s64 = 60;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
loc_82A15460:
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82a24f38
	ctx.lr = 0x82A15468;
	sub_82A24F38(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fe378
	ctx.lr = 0x82A1547C;
	sub_829FE378(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a154f0
	if (ctx.cr0.lt) goto loc_82A154F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a14ef0
	ctx.lr = 0x82A1548C;
	sub_82A14EF0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a154f0
	if (ctx.cr0.lt) goto loc_82A154F0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 * 48;
	// lfs f13,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lfs f1,23392(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23392);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f0,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a154d0
	if (!ctx.cr6.gt) goto loc_82A154D0;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lfs f13,24436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_82A154D0:
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lfsx f2,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r7,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82a15c50
	ctx.lr = 0x82A154F0;
	sub_82A15C50(ctx, base);
loc_82A154F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A154F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A154FC:
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82a154f4
	goto loc_82A154F4;
}

__attribute__((alias("__imp__sub_82A15508"))) PPC_WEAK_FUNC(sub_82A15508);
PPC_FUNC_IMPL(__imp__sub_82A15508) {
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
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a15628
	if (ctx.cr0.eq) goto loc_82A15628;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// mulli r10,r10,192
	ctx.r10.s64 = ctx.r10.s64 * 192;
	// addi r9,r11,1772
	ctx.r9.s64 = ctx.r11.s64 + 1772;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82a15560
	if (!ctx.cr6.eq) goto loc_82A15560;
	// addi r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 + 1680;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a15564
	if (ctx.cr6.eq) goto loc_82A15564;
loc_82A15560:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A15564:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a155e8
	if (ctx.cr0.eq) goto loc_82A155E8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a155e8
	if (!ctx.cr6.eq) goto loc_82A155E8;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// addi r31,r11,23656
	ctx.r31.s64 = ctx.r11.s64 + 23656;
	// lwz r4,23656(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23656);
	// bl 0x82a24f38
	ctx.lr = 0x82A1558C;
	sub_82A24F38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a14ef0
	ctx.lr = 0x82A15594;
	sub_82A14EF0(ctx, base);
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// mulli r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 * 48;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,5184(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,23392(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23392);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a155c8
	if (!ctx.cr6.gt) goto loc_82A155C8;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lfs f13,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_82A155C8:
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfsx f2,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f2.f64 = double(temp.f32);
	// addic r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// subfe r7,r11,r10
	temp.u8 = (~ctx.r11.u32 + ctx.r10.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r11.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82a15c50
	ctx.lr = 0x82A155E8;
	sub_82A15C50(ctx, base);
loc_82A155E8:
	// bl 0x829ff3a0
	ctx.lr = 0x82A155EC;
	sub_829FF3A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a155fc
	if (ctx.cr0.eq) goto loc_82A155FC;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_82A155FC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a15620
	if (!ctx.cr6.eq) goto loc_82A15620;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fe378
	ctx.lr = 0x82A1561C;
	sub_829FE378(ctx, base);
	// b 0x82a15628
	goto loc_82A15628;
loc_82A15620:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_82A15628:
	// lbz r11,9(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82A1564C"))) PPC_WEAK_FUNC(sub_82A1564C);
PPC_FUNC_IMPL(__imp__sub_82A1564C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A15650"))) PPC_WEAK_FUNC(sub_82A15650);
PPC_FUNC_IMPL(__imp__sub_82A15650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A15658;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a1567c
	if (!ctx.cr6.eq) goto loc_82A1567C;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16387
	ctx.r30.u64 = ctx.r30.u64 | 16387;
	// b 0x82a156e0
	goto loc_82A156E0;
loc_82A1567C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,160
	ctx.r3.s64 = 160;
	// lwz r4,-24632(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24632);
	// bl 0x82691410
	ctx.lr = 0x82A1568C;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a156a0
	if (ctx.cr0.eq) goto loc_82A156A0;
	// bl 0x82a14f80
	ctx.lr = 0x82A15698;
	sub_82A14F80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a156a4
	goto loc_82A156A4;
loc_82A156A0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A156A4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a156b8
	if (!ctx.cr6.eq) goto loc_82A156B8;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82a156e0
	goto loc_82A156E0;
loc_82A156B8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a14c30
	ctx.lr = 0x82A156C8;
	sub_82A14C30(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a156d8
	if (ctx.cr0.lt) goto loc_82A156D8;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// b 0x82a156e0
	goto loc_82A156E0;
loc_82A156D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a08ca0
	ctx.lr = 0x82A156E0;
	sub_82A08CA0(ctx, base);
loc_82A156E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A156EC"))) PPC_WEAK_FUNC(sub_82A156EC);
PPC_FUNC_IMPL(__imp__sub_82A156EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A156F0"))) PPC_WEAK_FUNC(sub_82A156F0);
PPC_FUNC_IMPL(__imp__sub_82A156F0) {
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
	// bl 0x82a15070
	ctx.lr = 0x82A15710;
	sub_82A15070(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a15728
	if (ctx.cr0.eq) goto loc_82A15728;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-24632(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24632);
	// bl 0x82691460
	ctx.lr = 0x82A15728;
	sub_82691460(ctx, base);
loc_82A15728:
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

__attribute__((alias("__imp__sub_82A15744"))) PPC_WEAK_FUNC(sub_82A15744);
PPC_FUNC_IMPL(__imp__sub_82A15744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A15748"))) PPC_WEAK_FUNC(sub_82A15748);
PPC_FUNC_IMPL(__imp__sub_82A15748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A15750;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a15790
	if (ctx.cr6.eq) goto loc_82A15790;
loc_82A15788:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82a15ad0
	goto loc_82A15AD0;
loc_82A15790:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a157a8
	if (!ctx.cr6.eq) goto loc_82A157A8;
loc_82A1579C:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// b 0x82a15ad0
	goto loc_82A15AD0;
loc_82A157A8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a1579c
	if (ctx.cr6.eq) goto loc_82A1579C;
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a1579c
	if (ctx.cr6.eq) goto loc_82A1579C;
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r29,r11,23656
	ctx.r29.s64 = ctx.r11.s64 + 23656;
	// beq 0x82a157e8
	if (ctx.cr0.eq) goto loc_82A157E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a15508
	ctx.lr = 0x82A157DC;
	sub_82A15508(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a15804
	if (!ctx.cr0.eq) goto loc_82A15804;
	// b 0x82a15788
	goto loc_82A15788;
loc_82A157E8:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r29,40
	ctx.r11.s64 = ctx.r29.s64 + 40;
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82a15804
	if (!ctx.cr6.eq) goto loc_82A15804;
	// stwx r23,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r23.u32);
loc_82A15804:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a15834
	if (ctx.cr6.gt) goto loc_82A15834;
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r7,r29,28
	ctx.r7.s64 = ctx.r29.s64 + 28;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 * 48;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a1583c
	if (!ctx.cr6.gt) goto loc_82A1583C;
loc_82A15834:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82A1583C:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a15ad0
	if (!ctx.cr0.eq) goto loc_82A15AD0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82a15ad0
	if (!ctx.cr6.gt) goto loc_82A15AD0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,20(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82af2cc8
	ctx.lr = 0x82A15860;
	sub_82AF2CC8(ctx, base);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,20(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82662c60
	ctx.lr = 0x82A15878;
	sub_82662C60(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r29,24
	ctx.r11.s64 = ctx.r29.s64 + 24;
	// lis r27,-32250
	ctx.r27.s64 = -2113536000;
	// lis r25,-32250
	ctx.r25.s64 = -2113536000;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// lfs f0,-24636(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24636);
	ctx.f0.f64 = double(temp.f32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// lfsx f30,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x82a158ec
	if (!ctx.cr6.lt) goto loc_82A158EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82a14df8
	ctx.lr = 0x82A158C0;
	sub_82A14DF8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82a15ad0
	if (ctx.cr0.lt) goto loc_82A15AD0;
	// lfs f0,-23668(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -23668);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,-24656(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -24656);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a158ec
	if (!ctx.cr6.gt) goto loc_82A158EC;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_82A158EC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bne cr6,0x82a15938
	if (!ctx.cr6.eq) goto loc_82A15938;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r10,r29,36
	ctx.r10.s64 = ctx.r29.s64 + 36;
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r8,r24,28
	ctx.r8.s64 = ctx.r24.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a15138
	ctx.lr = 0x82A1592C;
	sub_82A15138(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82a15ad0
	if (ctx.cr0.lt) goto loc_82A15AD0;
	// b 0x82a159c0
	goto loc_82A159C0;
loc_82A15938:
	// addi r30,r24,28
	ctx.r30.s64 = ctx.r24.s64 + 28;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a15138
	ctx.lr = 0x82A1594C;
	sub_82A15138(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82a15ad0
	if (ctx.cr0.lt) goto loc_82A15AD0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82a15138
	ctx.lr = 0x82A15974;
	sub_82A15138(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82a15ad0
	if (ctx.cr0.lt) goto loc_82A15AD0;
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lfs f13,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r29,36
	ctx.r10.s64 = ctx.r29.s64 + 36;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// lfs f12,-24656(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -24656);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x82a159c0
	if (!ctx.cr6.gt) goto loc_82A159C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,11556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_82A159C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// li r22,0
	ctx.r22.s64 = 0;
	// bl 0x82662d30
	ctx.lr = 0x82A159D0;
	sub_82662D30(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// clrlwi. r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x82a159fc
	if (ctx.cr0.eq) goto loc_82A159FC;
	// lfs f0,-23668(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -23668);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// lfs f12,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_82A159FC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f1,-24656(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -24656);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lfs f2,-24660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24660);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82a22d50
	ctx.lr = 0x82A15A14;
	sub_82A22D50(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82a15ad0
	if (ctx.cr0.lt) goto loc_82A15AD0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a15a64
	if (ctx.cr6.eq) goto loc_82A15A64;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r29,40
	ctx.r11.s64 = ctx.r29.s64 + 40;
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82a15a44
	if (!ctx.cr6.eq) goto loc_82A15A44;
	// stwx r23,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r23.u32);
loc_82A15A44:
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82a229c0
	ctx.lr = 0x82A15A4C;
	sub_82A229C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a15a5c
	if (ctx.cr0.lt) goto loc_82A15A5C;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82a22f68
	ctx.lr = 0x82A15A5C;
	sub_82A22F68(ctx, base);
loc_82A15A5C:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82a15ad0
	goto loc_82A15AD0;
loc_82A15A64:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r10,r29,40
	ctx.r10.s64 = ctx.r29.s64 + 40;
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82a15ad0
	if (ctx.cr6.eq) goto loc_82A15AD0;
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r29,20
	ctx.r10.s64 = ctx.r29.s64 + 20;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mulli r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 * 48;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,5184(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f1,23392(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23392);
	ctx.f1.f64 = double(temp.f32);
	// ble cr6,0x82a15ab0
	if (!ctx.cr6.gt) goto loc_82A15AB0;
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
loc_82A15AB0:
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r29,12
	ctx.r9.s64 = ctx.r29.s64 + 12;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfsx f2,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f2.f64 = double(temp.f32);
	// addic r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// subfe r7,r11,r10
	temp.u8 = (~ctx.r11.u32 + ctx.r10.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r11.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82a15cb8
	ctx.lr = 0x82A15AD0;
	sub_82A15CB8(ctx, base);
loc_82A15AD0:
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a15ae4
	if (ctx.cr0.eq) goto loc_82A15AE4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// bl 0x82662d30
	ctx.lr = 0x82A15AE4;
	sub_82662D30(ctx, base);
loc_82A15AE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A15AF8"))) PPC_WEAK_FUNC(sub_82A15AF8);
PPC_FUNC_IMPL(__imp__sub_82A15AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A15B00;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// stfs f1,236(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f2,244(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82a15b84
	if (ctx.cr6.eq) goto loc_82A15B84;
	// bl 0x83178d64
	ctx.lr = 0x82A15B38;
	__imp__XamGetCurrentTitleId(ctx, base);
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// clrlwi r6,r26,24
	ctx.r6.u64 = ctx.r26.u32 & 0xFF;
	// lis r8,8274
	ctx.r8.s64 = 542244864;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// ori r8,r8,21504
	ctx.r8.u64 = ctx.r8.u64 | 21504;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,30
	ctx.r6.s64 = 30;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179614
	ctx.lr = 0x82A15B80;
	__imp__EtxProducerLog(ctx, base);
	// b 0x82a15b8c
	goto loc_82A15B8C;
loc_82A15B84:
	// lis r3,16389
	ctx.r3.s64 = 1074069504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_82A15B8C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A15B94"))) PPC_WEAK_FUNC(sub_82A15B94);
PPC_FUNC_IMPL(__imp__sub_82A15B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A15B98"))) PPC_WEAK_FUNC(sub_82A15B98);
PPC_FUNC_IMPL(__imp__sub_82A15B98) {
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
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r31,r11,31344
	ctx.r31.s64 = ctx.r11.s64 + 31344;
	// lwz r11,31348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31348);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a15bd8
	if (!ctx.cr0.eq) goto loc_82A15BD8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31348, ctx.r11.u32);
	// bl 0x82a78340
	ctx.lr = 0x82A15BCC;
	sub_82A78340(ctx, base);
	// bl 0x82fa40d8
	ctx.lr = 0x82A15BD0;
	sub_82FA40D8(ctx, base);
	// bl 0x82fa4108
	ctx.lr = 0x82A15BD4;
	sub_82FA4108(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82A15BD8:
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

__attribute__((alias("__imp__sub_82A15BF0"))) PPC_WEAK_FUNC(sub_82A15BF0);
PPC_FUNC_IMPL(__imp__sub_82A15BF0) {
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
	// bl 0x82a15b98
	ctx.lr = 0x82A15C08;
	sub_82A15B98(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lfs f2,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f2.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// addi r3,r11,10536
	ctx.r3.s64 = ctx.r11.s64 + 10536;
	// bl 0x82a15af8
	ctx.lr = 0x82A15C38;
	sub_82A15AF8(ctx, base);
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

__attribute__((alias("__imp__sub_82A15C4C"))) PPC_WEAK_FUNC(sub_82A15C4C);
PPC_FUNC_IMPL(__imp__sub_82A15C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A15C50"))) PPC_WEAK_FUNC(sub_82A15C50);
PPC_FUNC_IMPL(__imp__sub_82A15C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A15C58;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82a15b98
	ctx.lr = 0x82A15C7C;
	sub_82A15B98(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10536
	ctx.r3.s64 = ctx.r11.s64 + 10536;
	// bl 0x82a15af8
	ctx.lr = 0x82A15CA8;
	sub_82A15AF8(ctx, base);
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

__attribute__((alias("__imp__sub_82A15CB8"))) PPC_WEAK_FUNC(sub_82A15CB8);
PPC_FUNC_IMPL(__imp__sub_82A15CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A15CC0;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82a15b98
	ctx.lr = 0x82A15CE4;
	sub_82A15B98(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r11,10536
	ctx.r3.s64 = ctx.r11.s64 + 10536;
	// bl 0x82a15af8
	ctx.lr = 0x82A15D10;
	sub_82A15AF8(ctx, base);
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

__attribute__((alias("__imp__sub_82A15D20"))) PPC_WEAK_FUNC(sub_82A15D20);
PPC_FUNC_IMPL(__imp__sub_82A15D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A15D28;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82a15b98
	ctx.lr = 0x82A15D4C;
	sub_82A15B98(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r11,10536
	ctx.r3.s64 = ctx.r11.s64 + 10536;
	// bl 0x82a15af8
	ctx.lr = 0x82A15D78;
	sub_82A15AF8(ctx, base);
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

__attribute__((alias("__imp__sub_82A15D88"))) PPC_WEAK_FUNC(sub_82A15D88);
PPC_FUNC_IMPL(__imp__sub_82A15D88) {
	PPC_FUNC_PROLOGUE();
	// li r5,1280
	ctx.r5.s64 = 1280;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82fa7cf0
	sub_82FA7CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A15D94"))) PPC_WEAK_FUNC(sub_82A15D94);
PPC_FUNC_IMPL(__imp__sub_82A15D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A15D98"))) PPC_WEAK_FUNC(sub_82A15D98);
PPC_FUNC_IMPL(__imp__sub_82A15D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A15DA0;
	__savegprlr_29(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// addi r10,r9,32
	ctx.r10.s64 = ctx.r9.s64 + 32;
	// stfs f3,36(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// lfs f0,11704(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11704);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,352
	ctx.r11.s64 = ctx.r9.s64 + 352;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bge cr6,0x82a15dc8
	if (!ctx.cr6.lt) goto loc_82A15DC8;
	// fmr f4,f0
	ctx.f4.f64 = ctx.f0.f64;
loc_82A15DC8:
	// li r9,20
	ctx.r9.s64 = 20;
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x1)));
	// addi r6,r1,36
	ctx.r6.s64 = ctx.r1.s64 + 36;
	// vspltisw128 v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_set1_epi32(int(0x0)));
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r11,r8,48
	ctx.r11.s64 = ctx.r8.s64 + 48;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// vcsxwfp128 v8,v63,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lvlx128 v62,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vspltw128 v3,v62,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// li r5,-32
	ctx.r5.s64 = -32;
	// lfs f11,24436(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24436);
	ctx.f11.f64 = double(temp.f32);
	// li r6,-16
	ctx.r6.s64 = -16;
	// lfs f9,5184(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5184);
	ctx.f9.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f10,21500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 21500);
	ctx.f10.f64 = double(temp.f32);
	// li r8,-48
	ctx.r8.s64 = -48;
	// addi r4,r9,11556
	ctx.r4.s64 = ctx.r9.s64 + 11556;
loc_82A15E20:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// fmr f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f4.f64;
	// fmr f12,f5
	ctx.f12.f64 = ctx.f5.f64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82a15e3c
	if (!ctx.cr6.eq) goto loc_82A15E3C;
	// fmuls f0,f4,f10
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f12,f5,f10
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
loc_82A15E3C:
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// lvx128 v9,r0,r10
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r11,r5
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r11,r6
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v9,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bne cr6,0x82a15e7c
	if (!ctx.cr6.eq) goto loc_82A15E7C;
	// lfs f13,-76(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bne cr6,0x82a15e7c
	if (!ctx.cr6.eq) goto loc_82A15E7C;
	// lfs f13,-72(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bne cr6,0x82a15e7c
	if (!ctx.cr6.eq) goto loc_82A15E7C;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x82a15e88
	goto loc_82A15E88;
loc_82A15E7C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a15ea0
	if (!ctx.cr6.eq) goto loc_82A15EA0;
loc_82A15E88:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// vor v10,v9,v9
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor128 v6,v61,v61
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82a15fc8
	goto loc_82A15FC8;
loc_82A15EA0:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82a15ef4
	if (!ctx.cr6.eq) goto loc_82A15EF4;
	// lvx128 v60,r11,r8
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// vaddfp128 v59,v9,v60
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v60.f32)));
	// lvlx128 v58,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fsubs f0,f11,f2
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// vspltw128 v57,v58,0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// addi r30,r1,28
	ctx.r30.s64 = ctx.r1.s64 + 28;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lvlx128 v56,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v55,v56,0
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), 0xFF));
	// vmulfp128 v10,v59,v57
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v57.f32)));
	// lvlx128 v54,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v13,v62,v55
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v55.f32)));
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// vspltw128 v12,v54,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vsubfp128 v0,v10,v63
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v63.f32)));
	// vmaddfp v6,v0,v12,v13
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// b 0x82a15fc8
	goto loc_82A15FC8;
loc_82A15EF4:
	// vsubfp128 v53,v9,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v63.f32)));
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// vmsum3fp128 v52,v53,v53
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v53.f32), 0xEF));
	// vrsqrtefp128 v0,v52
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v52.f32))));
	// vor128 v11,v52,v52
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v52.u8));
	// vmulfp128 v13,v52,v8
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v8.f32)));
	// vcmpeqfp128 v10,v52,v61
	_mm_store_ps(ctx.v10.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v7,v13,v12,v8
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v8.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v52,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v11,v10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a15f6c
	if (ctx.cr6.gt) goto loc_82A15F6C;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// lvlx128 v51,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v0,v51,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v51.u32), 0xFF));
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f13,-96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// lvlx128 v50,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v49,v50,0
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v50.u32), 0xFF));
	// vmulfp128 v13,v63,v49
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v49.f32)));
	// vmaddfp v10,v9,v0,v13
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// b 0x82a15f70
	goto loc_82A15F70;
loc_82A15F6C:
	// vor v10,v9,v9
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
loc_82A15F70:
	// addi r30,r1,-92
	ctx.r30.s64 = ctx.r1.s64 + -92;
	// fsubs f13,f11,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// addi r9,r1,20
	ctx.r9.s64 = ctx.r1.s64 + 20;
	// vaddfp128 v48,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// fsubs f0,f11,f1
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// addi r29,r1,28
	ctx.r29.s64 = ctx.r1.s64 + 28;
	// lvlx128 v45,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v47,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v42,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v42,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), 0xFF));
	// vspltw128 v46,v47,0
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), 0xFF));
	// lvlx128 v43,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v44,v45,0
	_mm_store_si128((__m128i*)ctx.v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), 0xFF));
	// vspltw128 v0,v43,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), 0xFF));
	// vmulfp128 v11,v48,v46
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v46.f32)));
	// vmulfp128 v13,v62,v44
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v44.f32)));
	// vmaddfp v10,v10,v12,v11
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vsubfp128 v12,v10,v63
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v63.f32)));
	// vmaddfp v6,v12,v0,v13
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
loc_82A15FC8:
	// vmaddfp v7,v6,v3,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v10.f32)));
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// vsubfp128 v41,v7,v9
	_mm_store_ps(ctx.v41.f32, _mm_sub_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v9.f32)));
	// vmsum3fp128 v40,v41,v41
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v41.f32), _mm_load_ps(ctx.v41.f32), 0xEF));
	// vrsqrtefp128 v0,v40
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v40.f32))));
	// vor128 v13,v40,v40
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v40.u8));
	// vmulfp128 v11,v40,v8
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v8.f32)));
	// vcmpeqfp128 v5,v40,v61
	_mm_store_ps(ctx.v5.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v4,v11,v12,v8
	_mm_store_ps(ctx.v4.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v8.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v4,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v40,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v0,v13,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-48(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f0.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82a16040
	if (!ctx.cr6.gt) goto loc_82A16040;
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,-92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// addi r31,r1,-92
	ctx.r31.s64 = ctx.r1.s64 + -92;
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f13,-96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// lvlx128 v39,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v38,v39,0
	_mm_store_si128((__m128i*)ctx.v38.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v39.u32), 0xFF));
	// vmulfp128 v13,v9,v38
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v38.f32)));
	// lvlx128 v37,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v0,v37,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v37.u32), 0xFF));
	// vmaddfp v7,v7,v0,v13
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
loc_82A16040:
	// stvx128 v7,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stfs f11,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v9,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r11,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v6,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x82a15e20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A15E20;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A16068"))) PPC_WEAK_FUNC(sub_82A16068);
PPC_FUNC_IMPL(__imp__sub_82A16068) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a1e4c0
	sub_82A1E4C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1606C"))) PPC_WEAK_FUNC(sub_82A1606C);
PPC_FUNC_IMPL(__imp__sub_82A1606C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16070"))) PPC_WEAK_FUNC(sub_82A16070);
PPC_FUNC_IMPL(__imp__sub_82A16070) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a1e690
	sub_82A1E690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A16074"))) PPC_WEAK_FUNC(sub_82A16074);
PPC_FUNC_IMPL(__imp__sub_82A16074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16078"))) PPC_WEAK_FUNC(sub_82A16078);
PPC_FUNC_IMPL(__imp__sub_82A16078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A16080;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r3,14368
	ctx.r4.s64 = ctx.r3.s64 + 14368;
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// addi r3,r3,-32128
	ctx.r3.s64 = ctx.r3.s64 + -32128;
	// bl 0x82a170c0
	ctx.lr = 0x82A160B4;
	sub_82A170C0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a18aa0
	ctx.lr = 0x82A160C8;
	sub_82A18AA0(ctx, base);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// addi r4,r29,112
	ctx.r4.s64 = ctx.r29.s64 + 112;
	// addi r3,r28,4896
	ctx.r3.s64 = ctx.r28.s64 + 4896;
	// bl 0x82a197f8
	ctx.lr = 0x82A160E4;
	sub_82A197F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A160EC"))) PPC_WEAK_FUNC(sub_82A160EC);
PPC_FUNC_IMPL(__imp__sub_82A160EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A160F0"))) PPC_WEAK_FUNC(sub_82A160F0);
PPC_FUNC_IMPL(__imp__sub_82A160F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A160F8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fac134
	ctx.lr = 0x82A16100;
	__savevmx_120(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,448
	ctx.r11.s64 = ctx.r4.s64 * 448;
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x1)));
	// vspltisw128 v126,0
	_mm_store_si128((__m128i*)ctx.v126.u32, _mm_set1_epi32(int(0x0)));
	// vcsxwfp128 v127,v63,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v127.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r10,192
	ctx.r10.s64 = 192;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
	// li r11,208
	ctx.r11.s64 = 208;
	// li r9,272
	ctx.r9.s64 = 272;
	// li r8,256
	ctx.r8.s64 = 256;
	// li r7,32
	ctx.r7.s64 = 32;
	// lvx128 v61,r31,r10
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,288
	ctx.r10.s64 = 288;
	// lvx128 v62,r31,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r11,224
	ctx.r11.s64 = 224;
	// vsubfp128 v61,v62,v61
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v61.f32)));
	// lvx128 v60,r31,r9
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r31,r8
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vor128 v25,v127,v127
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// vsubfp128 v59,v60,v59
	_mm_store_ps(ctx.v59.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v59.f32)));
	// lvx128 v58,r31,r7
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// vsubfp128 v63,v63,v58
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v58.f32)));
	// lvx128 v58,r31,r10
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v57,r31,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v125,v58,v60
	_mm_store_ps(ctx.v125.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v60.f32)));
	// vsubfp128 v62,v57,v62
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v62.f32)));
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// vmsum3fp128 v60,v61,v61
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v61.f32), 0xEF));
	// vmsum3fp128 v58,v59,v59
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v59.f32), 0xEF));
	// vmsum3fp128 v57,v63,v63
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vmsum3fp128 v124,v125,v125
	_mm_store_ps(ctx.v124.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v125.f32), 0xEF));
	// vmsum3fp128 v56,v62,v62
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vrsqrtefp128 v0,v60
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v60.f32))));
	// vor128 v7,v60,v60
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v60.u8));
	// vmulfp128 v6,v60,v127
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v127.f32)));
	// vrsqrtefp128 v13,v58
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v58.f32))));
	// vor128 v8,v58,v58
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// vmulfp128 v4,v58,v127
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v127.f32)));
	// vrsqrtefp128 v12,v57
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v57.f32))));
	// vor128 v9,v57,v57
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v57.u8));
	// vmulfp128 v2,v57,v127
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v127.f32)));
	// vrsqrtefp128 v11,v56
	_mm_store_ps(ctx.v11.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v56.f32))));
	// vor128 v10,v56,v56
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v56.u8));
	// vmulfp128 v31,v56,v127
	_mm_store_ps(ctx.v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v127.f32)));
	// vcmpeqfp128 v120,v57,v126
	_mm_store_ps(ctx.v120.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v126.f32)));
	// vcmpeqfp128 v122,v60,v126
	_mm_store_ps(ctx.v122.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v126.f32)));
	// vcmpeqfp128 v29,v56,v126
	_mm_store_ps(ctx.v29.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v126.f32)));
	// vcmpeqfp128 v121,v58,v126
	_mm_store_ps(ctx.v121.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v126.f32)));
	// vmulfp128 v5,v0,v0
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vrsqrtefp128 v123,v124
	_mm_store_ps(ctx.v123.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v124.f32))));
	// vmulfp128 v3,v13,v13
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v1,v12,v12
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v30,v11,v11
	_mm_store_ps(ctx.v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vnmsubfp128 v25,v6,v5,v25
	_mm_store_ps(ctx.v25.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v25.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v6,v127,v127
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// vnmsubfp128 v6,v4,v3,v6
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v6.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v3,v127,v127
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// vor128 v4,v127,v127
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// vnmsubfp128 v3,v2,v1,v3
	_mm_store_ps(ctx.v3.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v3.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp128 v4,v31,v30,v4
	_mm_store_ps(ctx.v4.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v30.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v5,v0,v25,v0
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v25.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v6,v13,v6,v13
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v12,v3,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v11,v4,v11
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v11,v61,v5
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v12,v59,v6
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v13,v63,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v62,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel128 v122,v11,v7,v122
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vsel128 v121,v12,v8,v121
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vsel128 v120,v13,v9,v120
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vsel v13,v0,v10,v29
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vmsum3fp128 v63,v122,v13
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82a17da0
	ctx.lr = 0x82A1623C;
	sub_82A17DA0(ctx, base);
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a16354
	if (ctx.cr6.lt) goto loc_82A16354;
	// vmulfp128 v13,v123,v123
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v123.f32)));
	// vor128 v10,v127,v127
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// vmulfp128 v12,v124,v127
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v127.f32)));
	// vor128 v0,v124,v124
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v124.u8));
	// vcmpeqfp128 v11,v124,v126
	_mm_store_ps(ctx.v11.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v126.f32)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vnmsubfp128 v10,v12,v13,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v10,v10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vmaddcfp128 v13,v123,v13,v123
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v123.f32)));
	// vmulfp128 v13,v125,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v13,v0,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmsum3fp128 v63,v121,v12
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82a17da0
	ctx.lr = 0x82A16284;
	sub_82A17DA0(ctx, base);
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a16354
	if (ctx.cr6.lt) goto loc_82A16354;
	// vmsum3fp128 v63,v122,v120
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v120.f32), 0xEF));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82a17da0
	ctx.lr = 0x82A162A4;
	sub_82A17DA0(ctx, base);
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a16354
	if (ctx.cr6.lt) goto loc_82A16354;
	// vmsum3fp128 v63,v121,v120
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v120.f32), 0xEF));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82a17da0
	ctx.lr = 0x82A162C4;
	sub_82A17DA0(ctx, base);
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a16354
	if (ctx.cr6.lt) goto loc_82A16354;
	// vmsum3fp128 v63,v121,v122
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v122.f32), 0xEF));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82a17da0
	ctx.lr = 0x82A162E4;
	sub_82A17DA0(ctx, base);
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a16354
	if (ctx.cr6.lt) goto loc_82A16354;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lvx128 v1,r30,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v1,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,5184(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82a16334
	if (!ctx.cr6.eq) goto loc_82A16334;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82a16334
	if (!ctx.cr6.eq) goto loc_82A16334;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82a16338
	if (ctx.cr6.eq) goto loc_82A16338;
loc_82A16334:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A16338:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a16354
	if (!ctx.cr0.eq) goto loc_82A16354;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a188a0
	ctx.lr = 0x82A1634C;
	sub_82A188A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a1635c
	goto loc_82A1635C;
loc_82A16354:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82A1635C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fac3cc
	ctx.lr = 0x82A16368;
	__restvmx_120(ctx, base);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1636C"))) PPC_WEAK_FUNC(sub_82A1636C);
PPC_FUNC_IMPL(__imp__sub_82A1636C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16370"))) PPC_WEAK_FUNC(sub_82A16370);
PPC_FUNC_IMPL(__imp__sub_82A16370) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a18848
	sub_82A18848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A16374"))) PPC_WEAK_FUNC(sub_82A16374);
PPC_FUNC_IMPL(__imp__sub_82A16374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16378"))) PPC_WEAK_FUNC(sub_82A16378);
PPC_FUNC_IMPL(__imp__sub_82A16378) {
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
	// bl 0x82a16a88
	ctx.lr = 0x82A16390;
	sub_82A16A88(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// ori r11,r11,7952
	ctx.r11.u64 = ctx.r11.u64 | 7952;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a163fc
	if (ctx.cr6.lt) goto loc_82A163FC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,63164
	ctx.r10.u64 = ctx.r10.u64 | 63164;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a163f4
	if (!ctx.cr0.eq) goto loc_82A163F4;
	// bl 0x82a19078
	ctx.lr = 0x82A163C8;
	sub_82A19078(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// ori r11,r11,33376
	ctx.r11.u64 = ctx.r11.u64 | 33376;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a163fc
	if (ctx.cr6.lt) goto loc_82A163FC;
	// bl 0x82a18328
	ctx.lr = 0x82A163E4;
	sub_82A18328(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a163fc
	if (ctx.cr6.lt) goto loc_82A163FC;
loc_82A163F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a16400
	goto loc_82A16400;
loc_82A163FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A16400:
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

__attribute__((alias("__imp__sub_82A16414"))) PPC_WEAK_FUNC(sub_82A16414);
PPC_FUNC_IMPL(__imp__sub_82A16414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16418"))) PPC_WEAK_FUNC(sub_82A16418);
PPC_FUNC_IMPL(__imp__sub_82A16418) {
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
	// bl 0x82a16a88
	ctx.lr = 0x82A16430;
	sub_82A16A88(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// ori r11,r11,7952
	ctx.r11.u64 = ctx.r11.u64 | 7952;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a1649c
	if (ctx.cr6.lt) goto loc_82A1649C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,63164
	ctx.r10.u64 = ctx.r10.u64 | 63164;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a16494
	if (!ctx.cr0.eq) goto loc_82A16494;
	// bl 0x82a19078
	ctx.lr = 0x82A16468;
	sub_82A19078(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// ori r11,r11,33376
	ctx.r11.u64 = ctx.r11.u64 | 33376;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a1649c
	if (ctx.cr6.lt) goto loc_82A1649C;
	// bl 0x82a18328
	ctx.lr = 0x82A16484;
	sub_82A18328(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a1649c
	if (ctx.cr6.lt) goto loc_82A1649C;
loc_82A16494:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a164a0
	goto loc_82A164A0;
loc_82A1649C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A164A0:
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

__attribute__((alias("__imp__sub_82A164B4"))) PPC_WEAK_FUNC(sub_82A164B4);
PPC_FUNC_IMPL(__imp__sub_82A164B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A164B8"))) PPC_WEAK_FUNC(sub_82A164B8);
PPC_FUNC_IMPL(__imp__sub_82A164B8) {
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
	// bl 0x82a16a88
	ctx.lr = 0x82A164D0;
	sub_82A16A88(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ori r11,r11,7952
	ctx.r11.u64 = ctx.r11.u64 | 7952;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a1653c
	if (ctx.cr6.lt) goto loc_82A1653C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,63164
	ctx.r10.u64 = ctx.r10.u64 | 63164;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a16534
	if (!ctx.cr0.eq) goto loc_82A16534;
	// bl 0x82a19078
	ctx.lr = 0x82A16508;
	sub_82A19078(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// ori r11,r11,33376
	ctx.r11.u64 = ctx.r11.u64 | 33376;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a1653c
	if (ctx.cr6.lt) goto loc_82A1653C;
	// bl 0x82a18328
	ctx.lr = 0x82A16524;
	sub_82A18328(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a1653c
	if (ctx.cr6.lt) goto loc_82A1653C;
loc_82A16534:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a16540
	goto loc_82A16540;
loc_82A1653C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A16540:
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

__attribute__((alias("__imp__sub_82A16554"))) PPC_WEAK_FUNC(sub_82A16554);
PPC_FUNC_IMPL(__imp__sub_82A16554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16558"))) PPC_WEAK_FUNC(sub_82A16558);
PPC_FUNC_IMPL(__imp__sub_82A16558) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a165d0
	if (ctx.cr6.eq) goto loc_82A165D0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a165d0
	if (ctx.cr6.eq) goto loc_82A165D0;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,63164
	ctx.r10.u64 = ctx.r10.u64 | 63164;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a165b8
	if (!ctx.cr0.eq) goto loc_82A165B8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18978
	ctx.lr = 0x82A165AC;
	sub_82A18978(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r30,4896
	ctx.r3.s64 = ctx.r30.s64 + 4896;
	// bl 0x82a1a0d8
	ctx.lr = 0x82A165B8;
	sub_82A1A0D8(ctx, base);
loc_82A165B8:
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r4,r31,14368
	ctx.r4.s64 = ctx.r31.s64 + 14368;
	// addi r3,r3,-32128
	ctx.r3.s64 = ctx.r3.s64 + -32128;
	// bl 0x82a17648
	ctx.lr = 0x82A165C8;
	sub_82A17648(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a165d8
	goto loc_82A165D8;
loc_82A165D0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82A165D8:
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

__attribute__((alias("__imp__sub_82A165F0"))) PPC_WEAK_FUNC(sub_82A165F0);
PPC_FUNC_IMPL(__imp__sub_82A165F0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1663c
	if (ctx.cr6.eq) goto loc_82A1663C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a1663c
	if (ctx.cr6.eq) goto loc_82A1663C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a189d0
	ctx.lr = 0x82A16628;
	sub_82A189D0(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r30,4896
	ctx.r3.s64 = ctx.r30.s64 + 4896;
	// bl 0x82a1a1d8
	ctx.lr = 0x82A16634;
	sub_82A1A1D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a16644
	goto loc_82A16644;
loc_82A1663C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82A16644:
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

__attribute__((alias("__imp__sub_82A1665C"))) PPC_WEAK_FUNC(sub_82A1665C);
PPC_FUNC_IMPL(__imp__sub_82A1665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16660"))) PPC_WEAK_FUNC(sub_82A16660);
PPC_FUNC_IMPL(__imp__sub_82A16660) {
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
	// addi r3,r3,4896
	ctx.r3.s64 = ctx.r3.s64 + 4896;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,28480
	ctx.r5.s64 = 28480;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,28496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28496, ctx.r11.u32);
	// stw r11,28480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28480, ctx.r11.u32);
	// bl 0x82a75988
	ctx.lr = 0x82A16690;
	sub_82A75988(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-32128
	ctx.r3.s64 = ctx.r3.s64 + -32128;
	// bl 0x82a10a60
	ctx.lr = 0x82A1669C;
	sub_82A10A60(ctx, base);
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

__attribute__((alias("__imp__sub_82A166B0"))) PPC_WEAK_FUNC(sub_82A166B0);
PPC_FUNC_IMPL(__imp__sub_82A166B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82a166c4
	if (ctx.cr6.lt) goto loc_82A166C4;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A166C4:
	// li r3,897
	ctx.r3.s64 = 897;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A166CC"))) PPC_WEAK_FUNC(sub_82A166CC);
PPC_FUNC_IMPL(__imp__sub_82A166CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A166D0"))) PPC_WEAK_FUNC(sub_82A166D0);
PPC_FUNC_IMPL(__imp__sub_82A166D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,40080
	ctx.r11.u64 = ctx.r11.u64 | 40080;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// mulli r3,r11,2004
	ctx.r3.s64 = ctx.r11.s64 * 2004;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A166E4"))) PPC_WEAK_FUNC(sub_82A166E4);
PPC_FUNC_IMPL(__imp__sub_82A166E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A166E8"))) PPC_WEAK_FUNC(sub_82A166E8);
PPC_FUNC_IMPL(__imp__sub_82A166E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82A166F0;
	__savegprlr_19(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r11,120
	ctx.r11.s64 = 120;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A16728;
	sub_82FA7CF0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82A1672C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a1672c
	if (!ctx.cr6.eq) goto loc_82A1672C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A16764;
	sub_82A842F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// addi r30,r11,-24500
	ctx.r30.s64 = ctx.r11.s64 + -24500;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// addi r27,r31,36
	ctx.r27.s64 = ctx.r31.s64 + 36;
	// addi r26,r31,32
	ctx.r26.s64 = ctx.r31.s64 + 32;
	// addi r25,r31,28
	ctx.r25.s64 = ctx.r31.s64 + 28;
	// addi r24,r31,24
	ctx.r24.s64 = ctx.r31.s64 + 24;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa6b58
	ctx.lr = 0x82A167A8;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82a167d4
	if (ctx.cr6.eq) goto loc_82A167D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A167D4;
	sub_82FA6B58(ctx, base);
loc_82A167D4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82A167D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a167d8
	if (!ctx.cr6.eq) goto loc_82A167D8;
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A16810;
	sub_82A842F0(ctx, base);
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// addi r26,r31,8
	ctx.r26.s64 = ctx.r31.s64 + 8;
	// addi r25,r31,4
	ctx.r25.s64 = ctx.r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa6b58
	ctx.lr = 0x82A16848;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82a16874
	if (ctx.cr6.eq) goto loc_82A16874;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A16874;
	sub_82FA6B58(ctx, base);
loc_82A16874:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82A16878:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a16878
	if (!ctx.cr6.eq) goto loc_82A16878;
	// subf r11,r21,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r21.s64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A168B0;
	sub_82A842F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// addi r25,r11,-24516
	ctx.r25.s64 = ctx.r11.s64 + -24516;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// addi r28,r31,60
	ctx.r28.s64 = ctx.r31.s64 + 60;
	// addi r27,r31,56
	ctx.r27.s64 = ctx.r31.s64 + 56;
	// addi r26,r31,52
	ctx.r26.s64 = ctx.r31.s64 + 52;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa6b58
	ctx.lr = 0x82A168EC;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82a16914
	if (ctx.cr6.eq) goto loc_82A16914;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A16914;
	sub_82FA6B58(ctx, base);
loc_82A16914:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-24532
	ctx.r5.s64 = ctx.r11.s64 + -24532;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A16934;
	sub_82A842F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// addi r26,r11,-24544
	ctx.r26.s64 = ctx.r11.s64 + -24544;
	// addi r29,r31,76
	ctx.r29.s64 = ctx.r31.s64 + 76;
	// addi r28,r31,72
	ctx.r28.s64 = ctx.r31.s64 + 72;
	// addi r27,r31,68
	ctx.r27.s64 = ctx.r31.s64 + 68;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa6b58
	ctx.lr = 0x82A16968;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82a16990
	if (ctx.cr6.eq) goto loc_82A16990;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,-24560
	ctx.r3.s64 = ctx.r11.s64 + -24560;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A16990;
	sub_82FA6B58(ctx, base);
loc_82A16990:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-24580
	ctx.r5.s64 = ctx.r11.s64 + -24580;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,17
	ctx.r6.s64 = 17;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A169B0;
	sub_82A842F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// addi r29,r31,92
	ctx.r29.s64 = ctx.r31.s64 + 92;
	// addi r28,r31,88
	ctx.r28.s64 = ctx.r31.s64 + 88;
	// addi r27,r11,-24592
	ctx.r27.s64 = ctx.r11.s64 + -24592;
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa6b58
	ctx.lr = 0x82A169E4;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82a16a0c
	if (ctx.cr6.eq) goto loc_82A16A0C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,-24612
	ctx.r3.s64 = ctx.r11.s64 + -24612;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A16A0C;
	sub_82FA6B58(ctx, base);
loc_82A16A0C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A16A14"))) PPC_WEAK_FUNC(sub_82A16A14);
PPC_FUNC_IMPL(__imp__sub_82A16A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16A18"))) PPC_WEAK_FUNC(sub_82A16A18);
PPC_FUNC_IMPL(__imp__sub_82A16A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// addi r9,r11,-24352
	ctx.r9.s64 = ctx.r11.s64 + -24352;
	// addi r8,r10,-24368
	ctx.r8.s64 = ctx.r10.s64 + -24368;
	// addi r7,r7,-24408
	ctx.r7.s64 = ctx.r7.s64 + -24408;
	// addi r6,r6,-24424
	ctx.r6.s64 = ctx.r6.s64 + -24424;
	// addi r5,r5,-24464
	ctx.r5.s64 = ctx.r5.s64 + -24464;
	// addi r4,r4,-24480
	ctx.r4.s64 = ctx.r4.s64 + -24480;
	// b 0x82a166e8
	sub_82A166E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A16A4C"))) PPC_WEAK_FUNC(sub_82A16A4C);
PPC_FUNC_IMPL(__imp__sub_82A16A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16A50"))) PPC_WEAK_FUNC(sub_82A16A50);
PPC_FUNC_IMPL(__imp__sub_82A16A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// addi r9,r11,-24352
	ctx.r9.s64 = ctx.r11.s64 + -24352;
	// addi r8,r10,-24296
	ctx.r8.s64 = ctx.r10.s64 + -24296;
	// addi r7,r7,-24408
	ctx.r7.s64 = ctx.r7.s64 + -24408;
	// addi r6,r6,-24316
	ctx.r6.s64 = ctx.r6.s64 + -24316;
	// addi r5,r5,-24464
	ctx.r5.s64 = ctx.r5.s64 + -24464;
	// addi r4,r4,-24336
	ctx.r4.s64 = ctx.r4.s64 + -24336;
	// b 0x82a166e8
	sub_82A166E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A16A84"))) PPC_WEAK_FUNC(sub_82A16A84);
PPC_FUNC_IMPL(__imp__sub_82A16A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16A88"))) PPC_WEAK_FUNC(sub_82A16A88);
PPC_FUNC_IMPL(__imp__sub_82A16A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-3708
	ctx.r3.s64 = ctx.r3.s64 + -3708;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16A9C"))) PPC_WEAK_FUNC(sub_82A16A9C);
PPC_FUNC_IMPL(__imp__sub_82A16A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16AA0"))) PPC_WEAK_FUNC(sub_82A16AA0);
PPC_FUNC_IMPL(__imp__sub_82A16AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lis r31,8
	ctx.r31.s64 = 524288;
	// ori r9,r10,61880
	ctx.r9.u64 = ctx.r10.u64 | 61880;
	// lis r30,8
	ctx.r30.s64 = 524288;
	// lwz r10,24028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lis r3,8
	ctx.r3.s64 = 524288;
	// ble cr6,0x82a16af8
	if (!ctx.cr6.gt) goto loc_82A16AF8;
	// ori r9,r9,61852
	ctx.r9.u64 = ctx.r9.u64 | 61852;
	// ori r3,r3,61856
	ctx.r3.u64 = ctx.r3.u64 | 61856;
	// ori r31,r31,61860
	ctx.r31.u64 = ctx.r31.u64 | 61860;
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r30,61868
	ctx.r9.u64 = ctx.r30.u64 | 61868;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// ori r4,r4,61872
	ctx.r4.u64 = ctx.r4.u64 | 61872;
	// b 0x82a16b18
	goto loc_82A16B18;
loc_82A16AF8:
	// ori r9,r9,61828
	ctx.r9.u64 = ctx.r9.u64 | 61828;
	// ori r3,r3,61832
	ctx.r3.u64 = ctx.r3.u64 | 61832;
	// ori r31,r31,61836
	ctx.r31.u64 = ctx.r31.u64 | 61836;
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r30,61844
	ctx.r9.u64 = ctx.r30.u64 | 61844;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// ori r4,r4,61848
	ctx.r4.u64 = ctx.r4.u64 | 61848;
loc_82A16B18:
	// lwz r10,24028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lfsx f0,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfsx f0,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfsx f0,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfsx f0,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16B4C"))) PPC_WEAK_FUNC(sub_82A16B4C);
PPC_FUNC_IMPL(__imp__sub_82A16B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16B50"))) PPC_WEAK_FUNC(sub_82A16B50);
PPC_FUNC_IMPL(__imp__sub_82A16B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// cmplwi cr6,r3,80
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 80, ctx.xer);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// ble cr6,0x82a16b6c
	if (!ctx.cr6.gt) goto loc_82A16B6C;
	// ori r10,r10,61864
	ctx.r10.u64 = ctx.r10.u64 | 61864;
	// b 0x82a16b70
	goto loc_82A16B70;
loc_82A16B6C:
	// ori r10,r10,61840
	ctx.r10.u64 = ctx.r10.u64 | 61840;
loc_82A16B70:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A16B7C"))) PPC_WEAK_FUNC(sub_82A16B7C);
PPC_FUNC_IMPL(__imp__sub_82A16B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16B80"))) PPC_WEAK_FUNC(sub_82A16B80);
PPC_FUNC_IMPL(__imp__sub_82A16B80) {
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
	// addis r10,r3,15
	ctx.r10.s64 = ctx.r3.s64 + 983040;
	// li r5,2004
	ctx.r5.s64 = 2004;
	// addi r10,r10,18960
	ctx.r10.s64 = ctx.r10.s64 + 18960;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,500
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 500, ctx.xer);
	// bge cr6,0x82a16be8
	if (!ctx.cr6.lt) goto loc_82A16BE8;
	// lis r9,15
	ctx.r9.s64 = 983040;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r9,r9,18964
	ctx.r9.u64 = ctx.r9.u64 | 18964;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r8,500
	ctx.r8.s64 = 500;
	// lwzx r10,r3,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r10,r11,r8
	ctx.r10.u32 = ctx.r11.u32 / ctx.r8.u32;
	// mulli r10,r10,500
	ctx.r10.s64 = ctx.r10.s64 * 500;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A16BE0;
	sub_82FA77C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a16c20
	goto loc_82A16C20;
loc_82A16BE8:
	// addis r31,r3,15
	ctx.r31.s64 = ctx.r3.s64 + 983040;
	// addi r31,r31,18964
	ctx.r31.s64 = ctx.r31.s64 + 18964;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A16C00;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,500
	ctx.r10.s64 = 500;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,500
	ctx.r10.s64 = ctx.r10.s64 * 500;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A16C20:
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

__attribute__((alias("__imp__sub_82A16C34"))) PPC_WEAK_FUNC(sub_82A16C34);
PPC_FUNC_IMPL(__imp__sub_82A16C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16C38"))) PPC_WEAK_FUNC(sub_82A16C38);
PPC_FUNC_IMPL(__imp__sub_82A16C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A16C40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// ori r11,r11,18960
	ctx.r11.u64 = ctx.r11.u64 | 18960;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stwx r5,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r5.u32);
	// beq cr6,0x82a16c8c
	if (ctx.cr6.eq) goto loc_82A16C8C;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r6,-4
	ctx.r29.s64 = ctx.r6.s64 + -4;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_82A16C68:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r5,2004
	ctx.r5.s64 = 2004;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A16C80;
	sub_82FA77C0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,2004
	ctx.r30.s64 = ctx.r30.s64 + 2004;
	// bne 0x82a16c68
	if (!ctx.cr0.eq) goto loc_82A16C68;
loc_82A16C8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A16C94"))) PPC_WEAK_FUNC(sub_82A16C94);
PPC_FUNC_IMPL(__imp__sub_82A16C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16C98"))) PPC_WEAK_FUNC(sub_82A16C98);
PPC_FUNC_IMPL(__imp__sub_82A16C98) {
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
	// addis r10,r3,21
	ctx.r10.s64 = ctx.r3.s64 + 1376256;
	// li r5,2004
	ctx.r5.s64 = 2004;
	// addi r10,r10,26544
	ctx.r10.s64 = ctx.r10.s64 + 26544;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,700
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 700, ctx.xer);
	// bge cr6,0x82a16d00
	if (!ctx.cr6.lt) goto loc_82A16D00;
	// lis r9,21
	ctx.r9.s64 = 1376256;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r9,r9,26548
	ctx.r9.u64 = ctx.r9.u64 | 26548;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r8,700
	ctx.r8.s64 = 700;
	// lwzx r10,r3,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r10,r11,r8
	ctx.r10.u32 = ctx.r11.u32 / ctx.r8.u32;
	// mulli r10,r10,700
	ctx.r10.s64 = ctx.r10.s64 * 700;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A16CF8;
	sub_82FA77C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a16d38
	goto loc_82A16D38;
loc_82A16D00:
	// addis r31,r3,21
	ctx.r31.s64 = ctx.r3.s64 + 1376256;
	// addi r31,r31,26548
	ctx.r31.s64 = ctx.r31.s64 + 26548;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A16D18;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,700
	ctx.r10.s64 = 700;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,700
	ctx.r10.s64 = ctx.r10.s64 * 700;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A16D38:
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

__attribute__((alias("__imp__sub_82A16D4C"))) PPC_WEAK_FUNC(sub_82A16D4C);
PPC_FUNC_IMPL(__imp__sub_82A16D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A16D50"))) PPC_WEAK_FUNC(sub_82A16D50);
PPC_FUNC_IMPL(__imp__sub_82A16D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A16D58;
	__savegprlr_22(ctx, base);
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
	// addis r31,r11,9
	ctx.r31.s64 = ctx.r11.s64 + 589824;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// addi r31,r31,-3708
	ctx.r31.s64 = ctx.r31.s64 + -3708;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lfs f0,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f13,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r25,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r25.u32);
	// lfs f0,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v127,r10,r9
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lvx128 v63,r0,r7
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v1,v127,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32)));
	// bl 0x8227b978
	ctx.lr = 0x82A16DF8;
	sub_8227B978(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v1,v127,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32)));
	// bl 0x8227b978
	ctx.lr = 0x82A16E14;
	sub_8227B978(ctx, base);
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// lhz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a0c298
	ctx.lr = 0x82A16E38;
	sub_82A0C298(ctx, base);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// lhz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a0c298
	ctx.lr = 0x82A16E60;
	sub_82A0C298(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82a16fe8
	if (!ctx.cr6.lt) goto loc_82A16FE8;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82a16fe8
	if (!ctx.cr6.lt) goto loc_82A16FE8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f0,21500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21500);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r26
	PPC_STORE_U32(ctx.r26.u32, ctx.f0.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcfid f12,f11
	ctx.f12.f64 = double(ctx.f11.s64);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82a16fe8
	if (!ctx.cr6.gt) goto loc_82A16FE8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a16fe8
	if (!ctx.cr6.gt) goto loc_82A16FE8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82a16f34
	if (!ctx.cr6.lt) goto loc_82A16F34;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_82A16F34:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82a16f44
	if (!ctx.cr6.lt) goto loc_82A16F44;
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
loc_82A16F44:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82a16f68
	if (!ctx.cr6.gt) goto loc_82A16F68;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A16F68:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a16f7c
	if (ctx.cr6.lt) goto loc_82A16F7C;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82A16F7C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a16fe8
	if (ctx.cr6.lt) goto loc_82A16FE8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a16fe8
	if (ctx.cr6.lt) goto loc_82A16FE8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// ori r8,r7,16384
	ctx.r8.u64 = ctx.r7.u64 | 16384;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82a16fe8
	if (ctx.cr6.gt) goto loc_82A16FE8;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a16fe0
	if (!ctx.cr6.lt) goto loc_82A16FE0;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_82A16FE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a16ff0
	goto loc_82A16FF0;
loc_82A16FE8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82A16FF0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A17000"))) PPC_WEAK_FUNC(sub_82A17000);
PPC_FUNC_IMPL(__imp__sub_82A17000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A17008;
	__savegprlr_29(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f0,23856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23856);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// beq cr6,0x82a170bc
	if (ctx.cr6.eq) goto loc_82A170BC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r3,2000
	ctx.r3.s64 = ctx.r3.s64 + 2000;
	// subfic r29,r5,-2000
	ctx.xer.ca = ctx.r5.u32 <= 4294965296;
	ctx.r29.s64 = -2000 - ctx.r5.s64;
	// lfs f13,-25136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f12.f64 = double(temp.f32);
loc_82A17034:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a170b0
	if (ctx.cr6.eq) goto loc_82A170B0;
	// addi r11,r5,2000
	ctx.r11.s64 = ctx.r5.s64 + 2000;
	// add r31,r29,r3
	ctx.r31.u64 = ctx.r29.u64 + ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
loc_82A17048:
	// li r9,500
	ctx.r9.s64 = 500;
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// addi r10,r11,-2000
	ctx.r10.s64 = ctx.r11.s64 + -2000;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A17058:
	// lfsx f11,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// bdnz 0x82a17058
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A17058;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82a170a0
	if (!ctx.cr6.lt) goto loc_82A170A0;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a1709c
	if (ctx.cr6.lt) goto loc_82A1709C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82A1709C:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_82A170A0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,-2004
	ctx.r31.s64 = ctx.r31.s64 + -2004;
	// addi r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 + 2004;
	// bne 0x82a17048
	if (!ctx.cr0.eq) goto loc_82A17048;
loc_82A170B0:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r3,r3,2004
	ctx.r3.s64 = ctx.r3.s64 + 2004;
	// bne 0x82a17034
	if (!ctx.cr0.eq) goto loc_82A17034;
loc_82A170BC:
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A170C0"))) PPC_WEAK_FUNC(sub_82A170C0);
PPC_FUNC_IMPL(__imp__sub_82A170C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A170C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// ori r10,r10,40080
	ctx.r10.u64 = ctx.r10.u64 | 40080;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lfs f0,5180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f0.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stb r8,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r8.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a17210
	if (ctx.cr6.eq) goto loc_82A17210;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,20
	ctx.r9.s64 = 20;
	// ori r11,r11,40084
	ctx.r11.u64 = ctx.r11.u64 | 40084;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r10,r11,r9
	ctx.r10.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82a17000
	ctx.lr = 0x82A1715C;
	sub_82A17000(ctx, base);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a16aa0
	ctx.lr = 0x82A1717C;
	sub_82A16AA0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a17210
	if (ctx.cr6.lt) goto loc_82A17210;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a171a8
	if (ctx.cr0.eq) goto loc_82A171A8;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82A171A8:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a171c0
	if (!ctx.cr6.lt) goto loc_82A171C0;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_82A171C0:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a171d8
	if (!ctx.cr6.lt) goto loc_82A171D8;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82a1720c
	goto loc_82A1720C;
loc_82A171D8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a171e8
	if (!ctx.cr6.lt) goto loc_82A171E8;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82a1720c
	goto loc_82A1720C;
loc_82A171E8:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a171fc
	if (ctx.cr6.gt) goto loc_82A171FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a1720c
	goto loc_82A1720C;
loc_82A171FC:
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a1720c
	if (ctx.cr6.lt) goto loc_82A1720C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82A1720C:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82A17210:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r3,24032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1723c
	if (ctx.cr6.eq) goto loc_82A1723C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A1723C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A1723C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A17244"))) PPC_WEAK_FUNC(sub_82A17244);
PPC_FUNC_IMPL(__imp__sub_82A17244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A17248"))) PPC_WEAK_FUNC(sub_82A17248);
PPC_FUNC_IMPL(__imp__sub_82A17248) {
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
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r10,r10,40080
	ctx.r10.u64 = ctx.r10.u64 | 40080;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a17000
	ctx.lr = 0x82A1727C;
	sub_82A17000(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A17290"))) PPC_WEAK_FUNC(sub_82A17290);
PPC_FUNC_IMPL(__imp__sub_82A17290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A17298;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a17368
	if (ctx.cr6.eq) goto loc_82A17368;
	// addis r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 65536;
	// addi r26,r26,-25448
	ctx.r26.s64 = ctx.r26.s64 + -25448;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a172d0
	if (ctx.cr6.eq) goto loc_82A172D0;
	// mulli r10,r11,2004
	ctx.r10.s64 = ctx.r11.s64 * 2004;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a17368
	if (ctx.cr6.lt) goto loc_82A17368;
loc_82A172D0:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A172F0;
	sub_82A75220(ctx, base);
	// addis r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 65536;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r29,r29,-25456
	ctx.r29.s64 = ctx.r29.s64 + -25456;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a17358
	if (!ctx.cr6.lt) goto loc_82A17358;
	// addis r27,r28,1
	ctx.r27.s64 = ctx.r28.s64 + 65536;
	// addi r27,r27,-25452
	ctx.r27.s64 = ctx.r27.s64 + -25452;
loc_82A17318:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,2004
	ctx.r5.s64 = 2004;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A17344;
	sub_82A75220(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2004
	ctx.r30.s64 = ctx.r30.s64 + 2004;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a17318
	if (ctx.cr6.lt) goto loc_82A17318;
loc_82A17358:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x82a17370
	goto loc_82A17370;
loc_82A17368:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82A17370:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A17378"))) PPC_WEAK_FUNC(sub_82A17378);
PPC_FUNC_IMPL(__imp__sub_82A17378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A17380;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r28,-25456
	ctx.r28.s64 = ctx.r28.s64 + -25456;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mulli r10,r11,2004
	ctx.r10.s64 = ctx.r11.s64 * 2004;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a173b0
	if (!ctx.cr6.lt) goto loc_82A173B0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a17410
	goto loc_82A17410;
loc_82A173B0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a1740c
	if (ctx.cr6.eq) goto loc_82A1740C;
	// addis r27,r29,1
	ctx.r27.s64 = ctx.r29.s64 + 65536;
	// addi r27,r27,-25452
	ctx.r27.s64 = ctx.r27.s64 + -25452;
loc_82A173C4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,2000
	ctx.r5.s64 = 2000;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,2000(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2000);
	// stw r11,2000(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2000, ctx.r11.u32);
	// bl 0x82a75220
	ctx.lr = 0x82A173F8;
	sub_82A75220(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2004
	ctx.r30.s64 = ctx.r30.s64 + 2004;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a173c4
	if (ctx.cr6.lt) goto loc_82A173C4;
loc_82A1740C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A17410:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A17418"))) PPC_WEAK_FUNC(sub_82A17418);
PPC_FUNC_IMPL(__imp__sub_82A17418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A17420;
	__savegprlr_28(ctx, base);
	// stwu r1,-2128(r1)
	ea = -2128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,2004
	ctx.r28.s64 = 2004;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divwu r11,r5,r28
	ctx.r11.u32 = ctx.r5.u32 / ctx.r28.u32;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf. r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a17450
	if (ctx.cr0.eq) goto loc_82A17450;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a174c4
	goto loc_82A174C4;
loc_82A17450:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r5,r11,40080
	ctx.r5.u64 = ctx.r11.u64 | 40080;
	// ori r10,r10,40084
	ctx.r10.u64 = ctx.r10.u64 | 40084;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r11,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stwx r11,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x82a75988
	ctx.lr = 0x82A1747C;
	sub_82A75988(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a174c0
	if (ctx.cr6.eq) goto loc_82A174C0;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// divwu r11,r11,r28
	ctx.r11.u32 = ctx.r11.u32 / ctx.r28.u32;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_82A17490:
	// lwz r11,2000(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2000);
	// li r5,2000
	ctx.r5.s64 = 2000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,2080(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2080, ctx.r11.u32);
	// bl 0x82a75220
	ctx.lr = 0x82A174A8;
	sub_82A75220(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0d2c8
	ctx.lr = 0x82A174B4;
	sub_82A0D2C8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,2004
	ctx.r29.s64 = ctx.r29.s64 + 2004;
	// bne 0x82a17490
	if (!ctx.cr0.eq) goto loc_82A17490;
loc_82A174C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A174C4:
	// addi r1,r1,2128
	ctx.r1.s64 = ctx.r1.s64 + 2128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A174CC"))) PPC_WEAK_FUNC(sub_82A174CC);
PPC_FUNC_IMPL(__imp__sub_82A174CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A174D0"))) PPC_WEAK_FUNC(sub_82A174D0);
PPC_FUNC_IMPL(__imp__sub_82A174D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A174D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,37
	ctx.r28.s64 = ctx.r3.s64 + 2424832;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r28,-20016
	ctx.r28.s64 = ctx.r28.s64 + -20016;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x82a1755c
	if (ctx.cr6.eq) goto loc_82A1755C;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r5,r11,18960
	ctx.r5.u64 = ctx.r11.u64 | 18960;
	// ori r11,r10,18964
	ctx.r11.u64 = ctx.r10.u64 | 18964;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stwx r30,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r30.u32);
	// stwx r30,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r30.u32);
	// bl 0x82a75988
	ctx.lr = 0x82A17520;
	sub_82A75988(ctx, base);
	// lis r11,21
	ctx.r11.s64 = 1376256;
	// lis r10,21
	ctx.r10.s64 = 1376256;
	// addis r3,r31,15
	ctx.r3.s64 = ctx.r31.s64 + 983040;
	// ori r5,r11,26544
	ctx.r5.u64 = ctx.r11.u64 | 26544;
	// addi r3,r3,18968
	ctx.r3.s64 = ctx.r3.s64 + 18968;
	// ori r10,r10,26548
	ctx.r10.u64 = ctx.r10.u64 | 26548;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stwx r30,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r30.u32);
	// stwx r30,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x82a75988
	ctx.lr = 0x82A1754C;
	sub_82A75988(ctx, base);
	// lis r11,36
	ctx.r11.s64 = 2359296;
	// std r29,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r29.u64);
	// ori r11,r11,45536
	ctx.r11.u64 = ctx.r11.u64 | 45536;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
loc_82A1755C:
	// addis r30,r31,37
	ctx.r30.s64 = ctx.r31.s64 + 2424832;
	// addi r30,r30,-20008
	ctx.r30.s64 = ctx.r30.s64 + -20008;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a175a8
	if (!ctx.cr6.eq) goto loc_82A175A8;
	// lis r11,36
	ctx.r11.s64 = 2359296;
	// lis r10,30
	ctx.r10.s64 = 1966080;
	// ori r11,r11,45532
	ctx.r11.u64 = ctx.r11.u64 | 45532;
	// ori r3,r10,220
	ctx.r3.u64 = ctx.r10.u64 | 220;
	// lis r4,8349
	ctx.r4.s64 = 547160064;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// bl 0x82691410
	ctx.lr = 0x82A17590;
	sub_82691410(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a175a8
	if (!ctx.cr0.eq) goto loc_82A175A8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a175ac
	goto loc_82A175AC;
loc_82A175A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A175AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A175B4"))) PPC_WEAK_FUNC(sub_82A175B4);
PPC_FUNC_IMPL(__imp__sub_82A175B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A175B8"))) PPC_WEAK_FUNC(sub_82A175B8);
PPC_FUNC_IMPL(__imp__sub_82A175B8) {
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
	// addis r31,r3,37
	ctx.r31.s64 = ctx.r3.s64 + 2424832;
	// addi r31,r31,-20008
	ctx.r31.s64 = ctx.r31.s64 + -20008;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a175ec
	if (ctx.cr6.eq) goto loc_82A175EC;
	// lis r4,8349
	ctx.r4.s64 = 547160064;
	// bl 0x82691460
	ctx.lr = 0x82A175E4;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A175EC:
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

__attribute__((alias("__imp__sub_82A17600"))) PPC_WEAK_FUNC(sub_82A17600);
PPC_FUNC_IMPL(__imp__sub_82A17600) {
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
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// ori r10,r10,40084
	ctx.r10.u64 = ctx.r10.u64 | 40084;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a17000
	ctx.lr = 0x82A17630;
	sub_82A17000(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A17644"))) PPC_WEAK_FUNC(sub_82A17644);
PPC_FUNC_IMPL(__imp__sub_82A17644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A17648"))) PPC_WEAK_FUNC(sub_82A17648);
PPC_FUNC_IMPL(__imp__sub_82A17648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A17650;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r31,-25456
	ctx.r31.s64 = ctx.r31.s64 + -25456;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// ble cr6,0x82a176ec
	if (!ctx.cr6.gt) goto loc_82A176EC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// mullw r29,r10,r11
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a0d110
	ctx.lr = 0x82A17688;
	sub_82A0D110(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a1772c
	if (ctx.cr6.eq) goto loc_82A1772C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0ce68
	ctx.lr = 0x82A176A8;
	sub_82A0CE68(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a203d0
	ctx.lr = 0x82A176C4;
	sub_82A203D0(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,20
	ctx.r31.s64 = 20;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A176E8;
	sub_82A81D88(ctx, base);
	// b 0x82a17710
	goto loc_82A17710;
loc_82A176EC:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82a17710
	if (!ctx.cr0.gt) goto loc_82A17710;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82A17704:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82a17704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A17704;
loc_82A17710:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// bl 0x82a0d420
	ctx.lr = 0x82A17724;
	sub_82A0D420(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
loc_82A1772C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A17734"))) PPC_WEAK_FUNC(sub_82A17734);
PPC_FUNC_IMPL(__imp__sub_82A17734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A17738"))) PPC_WEAK_FUNC(sub_82A17738);
PPC_FUNC_IMPL(__imp__sub_82A17738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A17740;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A17770;
	sub_82FA7CF0(ctx, base);
	// addic. r24,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r24.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// ble 0x82a177ec
	if (!ctx.cr0.gt) goto loc_82A177EC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82A17780:
	// addi r26,r27,1
	ctx.r26.s64 = ctx.r27.s64 + 1;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r31
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82a177dc
	if (!ctx.cr6.lt) goto loc_82A177DC;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
loc_82A17794:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a1fdd0
	ctx.lr = 0x82A177A4;
	sub_82A1FDD0(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// ble cr6,0x82a177cc
	if (!ctx.cr6.gt) goto loc_82A177CC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82A177CC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r31
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82a17794
	if (ctx.cr6.lt) goto loc_82A17794;
loc_82A177DC:
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82a17780
	if (ctx.cr6.lt) goto loc_82A17780;
loc_82A177EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82a1782c
	if (!ctx.cr6.gt) goto loc_82A1782C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r10,r22,-4
	ctx.r10.s64 = ctx.r22.s64 + -4;
loc_82A17808:
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r8,r21
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r21.s32, ctx.xer);
	// ble cr6,0x82a17820
	if (!ctx.cr6.gt) goto loc_82A17820;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82A17820:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a17808
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A17808;
loc_82A1782C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A17838"))) PPC_WEAK_FUNC(sub_82A17838);
PPC_FUNC_IMPL(__imp__sub_82A17838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A17840;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,15
	ctx.r28.s64 = ctx.r3.s64 + 983040;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r28,18960
	ctx.r28.s64 = ctx.r28.s64 + 18960;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a0d110
	ctx.lr = 0x82A17870;
	sub_82A0D110(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a0d110
	ctx.lr = 0x82A17880;
	sub_82A0D110(ctx, base);
	// lwz r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lis r25,-31963
	ctx.r25.s64 = -2094727168;
	// ori r31,r11,63156
	ctx.r31.u64 = ctx.r11.u64 | 63156;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a17964
	if (ctx.cr6.eq) goto loc_82A17964;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a17980
	if (ctx.cr6.eq) goto loc_82A17980;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bl 0x82a17738
	ctx.lr = 0x82A178CC;
	sub_82A17738(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82a17908
	if (!ctx.cr6.lt) goto loc_82A17908;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82a17908
	if (!ctx.cr6.gt) goto loc_82A17908;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_82A178F0:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// divwu r9,r9,r29
	ctx.r9.u32 = ctx.r9.u32 / ctx.r29.u32;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a178f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A178F0;
loc_82A17908:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a16c38
	ctx.lr = 0x82A17918;
	sub_82A16C38(ctx, base);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,18964
	ctx.r11.u64 = ctx.r11.u64 | 18964;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// ori r31,r9,63156
	ctx.r31.u64 = ctx.r9.u64 | 63156;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A17948;
	sub_82A81D88(ctx, base);
	// lwz r11,24028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a81d88
	ctx.lr = 0x82A1795C;
	sub_82A81D88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a179a4
	goto loc_82A179A4;
loc_82A17964:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a17980
	if (ctx.cr6.eq) goto loc_82A17980;
	// lwz r11,24028(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24028);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A17980;
	sub_82A81D88(ctx, base);
loc_82A17980:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a1799c
	if (ctx.cr6.eq) goto loc_82A1799C;
	// lwz r11,24028(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24028);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A1799C;
	sub_82A81D88(ctx, base);
loc_82A1799C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82A179A4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A179B0"))) PPC_WEAK_FUNC(sub_82A179B0);
PPC_FUNC_IMPL(__imp__sub_82A179B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A179B8;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r11,r11,-3708
	ctx.r11.s64 = ctx.r11.s64 + -3708;
	// lwz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lfs f1,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a17838
	ctx.lr = 0x82A179E8;
	sub_82A17838(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// blt 0x82a17ac4
	if (ctx.cr0.lt) goto loc_82A17AC4;
	// addis r25,r31,37
	ctx.r25.s64 = ctx.r31.s64 + 2424832;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// addi r25,r25,-20024
	ctx.r25.s64 = ctx.r25.s64 + -20024;
	// ori r11,r11,18960
	ctx.r11.u64 = ctx.r11.u64 | 18960;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// subfic r27,r10,700
	ctx.xer.ca = ctx.r10.u32 <= 700;
	ctx.r27.s64 = 700 - ctx.r10.s64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82a17a18
	if (!ctx.cr6.lt) goto loc_82A17A18;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82A17A18:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r26,r11,18968
	ctx.r26.u64 = ctx.r11.u64 | 18968;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a17a6c
	if (ctx.cr6.eq) goto loc_82A17A6C;
	// addis r29,r31,15
	ctx.r29.s64 = ctx.r31.s64 + 983040;
	// add r28,r31,r26
	ctx.r28.u64 = ctx.r31.u64 + ctx.r26.u64;
	// addi r29,r29,18964
	ctx.r29.s64 = ctx.r29.s64 + 18964;
loc_82A17A38:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,500
	ctx.r10.s64 = 500;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,500
	ctx.r10.s64 = ctx.r10.s64 * 500;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82a16c98
	ctx.lr = 0x82A17A60;
	sub_82A16C98(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82a17a38
	if (ctx.cr6.lt) goto loc_82A17A38;
loc_82A17A6C:
	// lis r11,36
	ctx.r11.s64 = 2359296;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r10,36
	ctx.r10.s64 = 2359296;
	// ori r11,r11,45532
	ctx.r11.u64 = ctx.r11.u64 | 45532;
	// ori r10,r10,45528
	ctx.r10.u64 = ctx.r10.u64 | 45528;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r5,r31,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82a0ce68
	ctx.lr = 0x82A17A90;
	sub_82A0CE68(ctx, base);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82a17aa4
	if (!ctx.cr6.lt) goto loc_82A17AA4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82A17AA4:
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a203d0
	ctx.lr = 0x82A17AC0;
	sub_82A203D0(ctx, base);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
loc_82A17AC4:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A17AD0"))) PPC_WEAK_FUNC(sub_82A17AD0);
PPC_FUNC_IMPL(__imp__sub_82A17AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A17AD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// ori r11,r11,18960
	ctx.r11.u64 = ctx.r11.u64 | 18960;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82a203d0
	ctx.lr = 0x82A17B0C;
	sub_82A203D0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a16c38
	ctx.lr = 0x82A17B20;
	sub_82A16C38(ctx, base);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,18964
	ctx.r11.u64 = ctx.r11.u64 | 18964;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A17B38"))) PPC_WEAK_FUNC(sub_82A17B38);
PPC_FUNC_IMPL(__imp__sub_82A17B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A17B40;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-2160
	ctx.r31.s64 = ctx.r1.s64 + -2160;
	// stwu r1,-2160(r1)
	ea = -2160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,2000
	ctx.r5.s64 = 2000;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A17B5C;
	sub_82A75220(ctx, base);
	// lwz r11,2000(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2000);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r11.u32);
	// bl 0x82a16b80
	ctx.lr = 0x82A17B70;
	sub_82A16B80(ctx, base);
	// addis r10,r30,37
	ctx.r10.s64 = ctx.r30.s64 + 2424832;
	// addis r29,r30,15
	ctx.r29.s64 = ctx.r30.s64 + 983040;
	// addi r10,r10,-20000
	ctx.r10.s64 = ctx.r10.s64 + -20000;
	// addi r29,r29,18960
	ctx.r29.s64 = ctx.r29.s64 + 18960;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,500
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 500, ctx.xer);
	// bne cr6,0x82a17bc4
	if (!ctx.cr6.eq) goto loc_82A17BC4;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// ori r10,r10,61904
	ctx.r10.u64 = ctx.r10.u64 | 61904;
	// ori r9,r9,61896
	ctx.r9.u64 = ctx.r9.u64 | 61896;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// li r6,200
	ctx.r6.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfsx f1,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a17838
	ctx.lr = 0x82A17BC4;
	sub_82A17838(ctx, base);
loc_82A17BC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,500
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 500, ctx.xer);
	// bne cr6,0x82a17c14
	if (!ctx.cr6.eq) goto loc_82A17C14;
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lis r10,36
	ctx.r10.s64 = 2359296;
	// lis r9,36
	ctx.r9.s64 = 2359296;
	// ori r10,r10,45532
	ctx.r10.u64 = ctx.r10.u64 | 45532;
	// ori r9,r9,45528
	ctx.r9.u64 = ctx.r9.u64 | 45528;
	// li r4,500
	ctx.r4.s64 = 500;
	// stwu r11,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwzx r6,r30,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x82a0ce68
	ctx.lr = 0x82A17C00;
	sub_82A0CE68(ctx, base);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a17ad0
	ctx.lr = 0x82A17C14;
	sub_82A17AD0(ctx, base);
loc_82A17C14:
	// addi r1,r31,2160
	ctx.r1.s64 = ctx.r31.s64 + 2160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A17C1C"))) PPC_WEAK_FUNC(sub_82A17C1C);
PPC_FUNC_IMPL(__imp__sub_82A17C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A17C20"))) PPC_WEAK_FUNC(sub_82A17C20);
PPC_FUNC_IMPL(__imp__sub_82A17C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A17C28;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,120
	ctx.r11.s64 = 120;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A17C48;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-24188
	ctx.r5.s64 = ctx.r11.s64 + -24188;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A17C68;
	sub_82A842F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// addi r30,r11,-24592
	ctx.r30.s64 = ctx.r11.s64 + -24592;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa6b58
	ctx.lr = 0x82A17C98;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82a17cc0
	if (ctx.cr6.eq) goto loc_82A17CC0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-24204
	ctx.r3.s64 = ctx.r11.s64 + -24204;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A17CC0;
	sub_82FA6B58(ctx, base);
loc_82A17CC0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-24220
	ctx.r5.s64 = ctx.r11.s64 + -24220;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A17CE0;
	sub_82A842F0(ctx, base);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// addi r27,r31,20
	ctx.r27.s64 = ctx.r31.s64 + 20;
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa6b58
	ctx.lr = 0x82A17D0C;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82a17d34
	if (ctx.cr6.eq) goto loc_82A17D34;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-24244
	ctx.r3.s64 = ctx.r11.s64 + -24244;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A17D34;
	sub_82FA6B58(ctx, base);
loc_82A17D34:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-24260
	ctx.r5.s64 = ctx.r11.s64 + -24260;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A17D54;
	sub_82A842F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// addi r29,r11,-24268
	ctx.r29.s64 = ctx.r11.s64 + -24268;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa6b58
	ctx.lr = 0x82A17D78;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82a17d98
	if (ctx.cr6.eq) goto loc_82A17D98;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-24276
	ctx.r3.s64 = ctx.r11.s64 + -24276;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A17D98;
	sub_82FA6B58(ctx, base);
loc_82A17D98:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A17DA0"))) PPC_WEAK_FUNC(sub_82A17DA0);
PPC_FUNC_IMPL(__imp__sub_82A17DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-3540
	ctx.r3.s64 = ctx.r3.s64 + -3540;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A17DB4"))) PPC_WEAK_FUNC(sub_82A17DB4);
PPC_FUNC_IMPL(__imp__sub_82A17DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A17DB8"))) PPC_WEAK_FUNC(sub_82A17DB8);
PPC_FUNC_IMPL(__imp__sub_82A17DB8) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8227b978
	ctx.lr = 0x82A17DD4;
	sub_8227B978(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwa r9,88(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 88));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A17E2C"))) PPC_WEAK_FUNC(sub_82A17E2C);
PPC_FUNC_IMPL(__imp__sub_82A17E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A17E30"))) PPC_WEAK_FUNC(sub_82A17E30);
PPC_FUNC_IMPL(__imp__sub_82A17E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A17E38;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fac14c
	ctx.lr = 0x82A17E48;
	__savevmx_123(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// ori r10,r9,62008
	ctx.r10.u64 = ctx.r9.u64 | 62008;
	// lwz r31,24028(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lfs f0,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// lfsx f13,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a17e98
	if (!ctx.cr6.gt) goto loc_82A17E98;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r31,24028(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
loc_82A17E98:
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,62004
	ctx.r10.u64 = ctx.r10.u64 | 62004;
	// lfsx f13,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a17ebc
	if (!ctx.cr6.lt) goto loc_82A17EBC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r31,24028(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
loc_82A17EBC:
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,62000
	ctx.r10.u64 = ctx.r10.u64 | 62000;
	// lfsx f13,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a17ee4
	if (ctx.cr6.gt) goto loc_82A17EE4;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,61996
	ctx.r10.u64 = ctx.r10.u64 | 61996;
	// lfsx f13,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a17ef4
	if (!ctx.cr6.lt) goto loc_82A17EF4;
loc_82A17EE4:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwz r31,24028(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
loc_82A17EF4:
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x1)));
	// addi r28,r30,64
	ctx.r28.s64 = ctx.r30.s64 + 64;
	// addi r27,r30,128
	ctx.r27.s64 = ctx.r30.s64 + 128;
	// vspltisw128 v127,0
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_set1_epi32(int(0x0)));
	// li r10,192
	ctx.r10.s64 = 192;
	// vspltisw128 v62,-1
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// li r9,256
	ctx.r9.s64 = 256;
	// vcsxwfp128 v126,v63,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v126.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lis r8,8
	ctx.r8.s64 = 524288;
	// lvx128 v63,r0,r28
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v61,r0,r27
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// vslw128 v60,v62,v62
	ctx.v60.u32[0] = ctx.v62.u32[0] << (ctx.v62.u8[0] & 0x1F);
	ctx.v60.u32[1] = ctx.v62.u32[1] << (ctx.v62.u8[4] & 0x1F);
	ctx.v60.u32[2] = ctx.v62.u32[2] << (ctx.v62.u8[8] & 0x1F);
	ctx.v60.u32[3] = ctx.v62.u32[3] << (ctx.v62.u8[12] & 0x1F);
	// vsubfp128 v63,v61,v63
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// lvx128 v61,r30,r10
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r30,r9
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vslw128 v62,v62,v62
	ctx.v62.u32[0] = ctx.v62.u32[0] << (ctx.v62.u8[0] & 0x1F);
	ctx.v62.u32[1] = ctx.v62.u32[1] << (ctx.v62.u8[4] & 0x1F);
	ctx.v62.u32[2] = ctx.v62.u32[2] << (ctx.v62.u8[8] & 0x1F);
	ctx.v62.u32[3] = ctx.v62.u32[3] << (ctx.v62.u8[12] & 0x1F);
	// vsubfp128 v61,v59,v61
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v61.f32)));
	// ori r10,r8,62012
	ctx.r10.u64 = ctx.r8.u64 | 62012;
	// lfsx f13,r31,r10
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// vor128 v5,v126,v126
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// vmsum3fp128 v59,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vmsum3fp128 v58,v61,v61
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v61.f32), 0xEF));
	// vrsqrtefp128 v0,v59
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v59.f32))));
	// vor128 v7,v59,v59
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// vmulfp128 v11,v59,v126
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v126.f32)));
	// vrsqrtefp128 v13,v58
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v58.f32))));
	// vor128 v12,v58,v58
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// vmulfp128 v9,v58,v126
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v126.f32)));
	// vcmpeqfp128 v4,v59,v127
	_mm_store_ps(ctx.v4.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v127.f32)));
	// vcmpeqfp128 v6,v58,v127
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v127.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v8,v13,v13
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp128 v5,v11,v10,v5
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v5.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v11,v126,v126
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// vnmsubfp128 v11,v9,v8,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v5,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v13,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v63,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v61,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v13.f32)));
	// vsel v11,v0,v7,v4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vsel v0,v13,v12,v6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vandc128 v63,v11,v62
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vandc128 v62,v0,v60
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmaxfp128 v63,v63,v62
	_mm_store_ps(ctx.v63.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a17fec
	if (!ctx.cr6.gt) goto loc_82A17FEC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// ori r9,r9,62016
	ctx.r9.u64 = ctx.r9.u64 | 62016;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r31,24028(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lfsx f13,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a17fec
	if (!ctx.cr6.gt) goto loc_82A17FEC;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwz r31,24028(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
loc_82A17FEC:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r11,r11,63164
	ctx.r11.u64 = ctx.r11.u64 | 63164;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a181d4
	if (!ctx.cr0.eq) goto loc_82A181D4;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r8,11
	ctx.r8.s64 = 11;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// lvx128 v1,r30,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// bl 0x82a17db8
	ctx.lr = 0x82A1803C;
	sub_82A17DB8(ctx, base);
	// lvx128 v63,r0,r30
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// vor128 v124,v1,v1
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v63,v63
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// bl 0x82a17db8
	ctx.lr = 0x82A1804C;
	sub_82A17DB8(ctx, base);
	// vor128 v63,v1,v1
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lvx128 v1,r0,r27
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v125,v63,v124
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v125.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v124.f32)));
	// bl 0x82a17db8
	ctx.lr = 0x82A1805C;
	sub_82A17DB8(ctx, base);
	// lvx128 v63,r0,r28
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vor128 v123,v1,v1
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v63,v63
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// bl 0x82a17db8
	ctx.lr = 0x82A1806C;
	sub_82A17DB8(ctx, base);
	// vsubfp128 v63,v1,v123
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v123.f32)));
	// vor128 v9,v126,v126
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// lis r11,8
	ctx.r11.s64 = 524288;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,62024
	ctx.r11.u64 = ctx.r11.u64 | 62024;
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// li r27,6
	ctx.r27.s64 = 6;
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vsldoi128 v63,v127,v63,8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 8));
	// lfs f31,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// vmsum4fp128 v63,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vrsqrtefp128 v0,v63
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v63.f32))));
	// vor128 v13,v63,v63
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vmulfp128 v11,v63,v126
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v126.f32)));
	// vcmpeqfp128 v10,v63,v127
	_mm_store_ps(ctx.v10.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v127.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp128 v9,v11,v12,v9
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v9.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v0,v13,v10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82A180CC:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v1,r11,r30
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// bl 0x82a17db8
	ctx.lr = 0x82A180DC;
	sub_82A17DB8(ctx, base);
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a181c8
	if (!ctx.cr6.eq) goto loc_82A181C8;
	// vsldoi128 v62,v127,v125,8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)ctx.v125.u8), 8));
	// vsubfp128 v63,v1,v124
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v124.f32)));
	// vupkd3d128 v61,v127,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v61 = vTemp;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vmsum4fp128 v11,v62,v62
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vspltw128 v9,v61,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x0));
	// vsldoi128 v61,v127,v63,8
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 8));
	// vmsum4fp128 v62,v61,v62
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vrefp v0,v11
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v8,v11,v0,v9
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v9.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v9,v11,v0,v9
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v9.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vor128 v9,v126,v126
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// vsel v12,v13,v0,v10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v62,v62,v12
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v62,v125,v62
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v62.f32)));
	// vsubfp128 v62,v63,v62
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// vsldoi128 v62,v127,v62,8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 8));
	// vmsum4fp128 v62,v62,v62
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vrsqrtefp128 v0,v62
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v62.f32))));
	// vor128 v13,v62,v62
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vmulfp128 v11,v62,v126
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v126.f32)));
	// vcmpeqfp128 v10,v62,v127
	_mm_store_ps(ctx.v10.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v127.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp128 v9,v11,v12,v9
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v9.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v62,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v0,v13,v10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82a181c8
	if (!ctx.cr6.lt) goto loc_82A181C8;
	// vsldoi128 v63,v127,v63,8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 8));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vsldoi128 v62,v127,v125,8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)ctx.v125.u8), 8));
	// vmsum4fp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a181b4
	if (!ctx.cr6.lt) goto loc_82A181B4;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x82a181c4
	goto loc_82A181C4;
loc_82A181B4:
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82A181C4:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82A181C8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82a180cc
	if (!ctx.cr0.eq) goto loc_82A180CC;
loc_82A181D4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fac3e4
	ctx.lr = 0x82A181E0;
	__restvmx_123(ctx, base);
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A181EC"))) PPC_WEAK_FUNC(sub_82A181EC);
PPC_FUNC_IMPL(__imp__sub_82A181EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A181F0"))) PPC_WEAK_FUNC(sub_82A181F0);
PPC_FUNC_IMPL(__imp__sub_82A181F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A181F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,120
	ctx.r11.s64 = 120;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A18218;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-24096
	ctx.r5.s64 = ctx.r11.s64 + -24096;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A18238;
	sub_82A842F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// addi r26,r11,-24112
	ctx.r26.s64 = ctx.r11.s64 + -24112;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa6b58
	ctx.lr = 0x82A18270;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82a1829c
	if (ctx.cr6.eq) goto loc_82A1829C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,-24136
	ctx.r3.s64 = ctx.r11.s64 + -24136;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A1829C;
	sub_82FA6B58(ctx, base);
loc_82A1829C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-24152
	ctx.r5.s64 = ctx.r11.s64 + -24152;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A182BC;
	sub_82A842F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r28,r11,-24164
	ctx.r28.s64 = ctx.r11.s64 + -24164;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa6b58
	ctx.lr = 0x82A182E8;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82a1830c
	if (ctx.cr6.eq) goto loc_82A1830C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,-24172
	ctx.r3.s64 = ctx.r11.s64 + -24172;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A1830C;
	sub_82FA6B58(ctx, base);
loc_82A1830C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A18314"))) PPC_WEAK_FUNC(sub_82A18314);
PPC_FUNC_IMPL(__imp__sub_82A18314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18318"))) PPC_WEAK_FUNC(sub_82A18318);
PPC_FUNC_IMPL(__imp__sub_82A18318) {
	PPC_FUNC_PROLOGUE();
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82fa7cf0
	sub_82FA7CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A18324"))) PPC_WEAK_FUNC(sub_82A18324);
PPC_FUNC_IMPL(__imp__sub_82A18324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18328"))) PPC_WEAK_FUNC(sub_82A18328);
PPC_FUNC_IMPL(__imp__sub_82A18328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-3572
	ctx.r3.s64 = ctx.r3.s64 + -3572;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1833C"))) PPC_WEAK_FUNC(sub_82A1833C);
PPC_FUNC_IMPL(__imp__sub_82A1833C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18340"))) PPC_WEAK_FUNC(sub_82A18340);
PPC_FUNC_IMPL(__imp__sub_82A18340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lwz r11,31360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31360);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82a1836c
	if (!ctx.cr0.eq) goto loc_82A1836C;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31360, ctx.r11.u32);
	// lfs f12,25288(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 25288);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,31356(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 31356, temp.u32);
	// b 0x82a18370
	goto loc_82A18370;
loc_82A1836C:
	// lfs f12,31356(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31356);
	ctx.f12.f64 = double(temp.f32);
loc_82A18370:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,18772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18772);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82a18388
	if (ctx.cr6.gt) goto loc_82A18388;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A18388:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,-24084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24084);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x82a183a0
	if (ctx.cr6.lt) goto loc_82A183A0;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82A183A0:
	// fsubs f0,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A183B8"))) PPC_WEAK_FUNC(sub_82A183B8);
PPC_FUNC_IMPL(__imp__sub_82A183B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a183d0
	if (!ctx.cr6.lt) goto loc_82A183D0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82A183D0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A183E4"))) PPC_WEAK_FUNC(sub_82A183E4);
PPC_FUNC_IMPL(__imp__sub_82A183E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A183E8"))) PPC_WEAK_FUNC(sub_82A183E8);
PPC_FUNC_IMPL(__imp__sub_82A183E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A18408:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a18418
	if (ctx.cr6.eq) goto loc_82A18418;
	// addi r3,r3,624
	ctx.r3.s64 = ctx.r3.s64 + 624;
loc_82A18418:
	// addi r10,r10,608
	ctx.r10.s64 = ctx.r10.s64 + 608;
	// bdnz 0x82a18408
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A18408;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18424"))) PPC_WEAK_FUNC(sub_82A18424);
PPC_FUNC_IMPL(__imp__sub_82A18424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18428"))) PPC_WEAK_FUNC(sub_82A18428);
PPC_FUNC_IMPL(__imp__sub_82A18428) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// cmplwi cr6,r11,150
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 150, ctx.xer);
	// bge cr6,0x82a18488
	if (!ctx.cr6.lt) goto loc_82A18488;
	// lwz r10,604(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,150
	ctx.r9.s64 = 150;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// divwu r10,r11,r9
	ctx.r10.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mulli r10,r10,150
	ctx.r10.s64 = ctx.r10.s64 * 150;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A18480;
	sub_82A75220(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a184bc
	goto loc_82A184BC;
loc_82A18488:
	// lwz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A1849C;
	sub_82A75220(ctx, base);
	// lwz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// li r10,150
	ctx.r10.s64 = 150;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,150
	ctx.r10.s64 = ctx.r10.s64 * 150;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r11.u32);
loc_82A184BC:
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

__attribute__((alias("__imp__sub_82A184D0"))) PPC_WEAK_FUNC(sub_82A184D0);
PPC_FUNC_IMPL(__imp__sub_82A184D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82a18544
	if (ctx.cr6.eq) goto loc_82A18544;
	// lvx128 v62,r0,r4
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vspltisw128 v61,1
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_set1_epi32(int(0x1)));
	// vmsum3fp128 v60,v62,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// lfd f13,-32(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// vcsxwfp128 v10,v61,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// fcfid f13,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(ctx.f13.s64);
	// vrsqrtefp128 v0,v60
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v60.f32))));
	// frsp f13,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// vmulfp128 v12,v60,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v10.f32)));
	// vor128 v13,v60,v60
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v60.u8));
	// vcmpeqfp128 v9,v60,v63
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v63.f32)));
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// vmulfp128 v11,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v12,v11,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v62,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v0,v13,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,-4(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
loc_82A18544:
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18554"))) PPC_WEAK_FUNC(sub_82A18554);
PPC_FUNC_IMPL(__imp__sub_82A18554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18558"))) PPC_WEAK_FUNC(sub_82A18558);
PPC_FUNC_IMPL(__imp__sub_82A18558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// vmsum3fp128 v63,v1,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v2.f32), 0xEF));
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// ori r10,r10,61972
	ctx.r10.u64 = ctx.r10.u64 | 61972;
	// addi r8,r1,16
	ctx.r8.s64 = ctx.r1.s64 + 16;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// addi r7,r1,32
	ctx.r7.s64 = ctx.r1.s64 + 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// stvx128 v1,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v2,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lfs f0,44(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// ori r10,r10,61976
	ctx.r10.u64 = ctx.r10.u64 | 61976;
	// lfsx f13,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A185C4"))) PPC_WEAK_FUNC(sub_82A185C4);
PPC_FUNC_IMPL(__imp__sub_82A185C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A185C8"))) PPC_WEAK_FUNC(sub_82A185C8);
PPC_FUNC_IMPL(__imp__sub_82A185C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// vmsum3fp128 v63,v1,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v1.f32), 0xEF));
	// vspltisw128 v62,1
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x1)));
	// vspltisw128 v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r1,16
	ctx.r11.s64 = ctx.r1.s64 + 16;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vcsxwfp128 v10,v62,1
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// addi r8,r1,32
	ctx.r8.s64 = ctx.r1.s64 + 32;
	// lfd f0,24608(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24608);
	// stvx128 v2,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v63.f32))));
	// vor128 v11,v63,v63
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vmulfp128 v13,v63,v10
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp128 v63,v63,v61
	_mm_store_ps(ctx.v63.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v13,v12,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v1,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel128 v63,v0,v11,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v63,v63,v2
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v2.f32), 0xEF));
	// lfs f11,24(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f13,f11,f11
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f10,f13
	ctx.f10.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x82a18650
	if (!ctx.cr6.lt) goto loc_82A18650;
	// lfs f0,40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a186a0
	goto loc_82A186A0;
loc_82A18650:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f6,f0,f0,f13
	ctx.f6.f64 = double(float(-(ctx.f0.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fdivs f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsqrts f6,f6
	ctx.f6.f64 = double(float(sqrt(ctx.f6.f64)));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f10,f13,f9
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f9,f6,f8
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmsubs f13,f10,f11,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f9.f64));
	// fmadds f0,f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f13.f64));
loc_82A186A0:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A186A8"))) PPC_WEAK_FUNC(sub_82A186A8);
PPC_FUNC_IMPL(__imp__sub_82A186A8) {
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
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,596
	ctx.r5.s64 = 596;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82A186DC;
	sub_82FA7CF0(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a18724
	if (ctx.cr6.eq) goto loc_82A18724;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// lwz r9,604(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_82A186F8:
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r7,150
	ctx.r7.s64 = 150;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divwu r7,r8,r7
	ctx.r7.u32 = ctx.r8.u32 / ctx.r7.u32;
	// mulli r7,r7,150
	ctx.r7.s64 = ctx.r7.s64 * 150;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a186f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A186F8;
loc_82A18724:
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-31816
	ctx.r6.s64 = ctx.r11.s64 + -31816;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fada28
	ctx.lr = 0x82A18740;
	sub_82FADA28(ctx, base);
	// rlwinm r11,r30,1,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
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

__attribute__((alias("__imp__sub_82A18764"))) PPC_WEAK_FUNC(sub_82A18764);
PPC_FUNC_IMPL(__imp__sub_82A18764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18768"))) PPC_WEAK_FUNC(sub_82A18768);
PPC_FUNC_IMPL(__imp__sub_82A18768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82a187b8
	if (ctx.cr6.eq) goto loc_82A187B8;
	// lwz r8,604(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A18788:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// li r7,150
	ctx.r7.s64 = 150;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divwu r7,r9,r7
	ctx.r7.u32 = ctx.r9.u32 / ctx.r7.u32;
	// mulli r7,r7,150
	ctx.r7.s64 = ctx.r7.s64 * 150;
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x82a18788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A18788;
loc_82A187B8:
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A187D8"))) PPC_WEAK_FUNC(sub_82A187D8);
PPC_FUNC_IMPL(__imp__sub_82A187D8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82a18820
	if (!ctx.cr6.gt) goto loc_82A18820;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// bl 0x82a186a8
	ctx.lr = 0x82A1880C;
	sub_82A186A8(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18768
	ctx.lr = 0x82A18818;
	sub_82A18768(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x82a18830
	goto loc_82A18830;
loc_82A18820:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82A18830:
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

__attribute__((alias("__imp__sub_82A18848"))) PPC_WEAK_FUNC(sub_82A18848);
PPC_FUNC_IMPL(__imp__sub_82A18848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A18850;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// li r29,8
	ctx.r29.s64 = 8;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A18870:
	// stw r30,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r30.u32);
	// li r5,600
	ctx.r5.s64 = 600;
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a75988
	ctx.lr = 0x82A18888;
	sub_82A75988(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,608
	ctx.r31.s64 = ctx.r31.s64 + 608;
	// bne 0x82a18870
	if (!ctx.cr0.eq) goto loc_82A18870;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1889C"))) PPC_WEAK_FUNC(sub_82A1889C);
PPC_FUNC_IMPL(__imp__sub_82A1889C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A188A0"))) PPC_WEAK_FUNC(sub_82A188A0);
PPC_FUNC_IMPL(__imp__sub_82A188A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A188A8;
	__savegprlr_29(ctx, base);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,48
	ctx.r9.s64 = 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v2,r11,r9
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82a185c8
	ctx.lr = 0x82A188E4;
	sub_82A185C8(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a18340
	ctx.lr = 0x82A188EC;
	sub_82A18340(ctx, base);
	// mulli r11,r3,608
	ctx.r11.s64 = ctx.r3.s64 * 608;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,24
	ctx.r30.s64 = ctx.r11.s64 + 24;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18428
	ctx.lr = 0x82A18908;
	sub_82A18428(ctx, base);
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v63,v63,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v127.f32)));
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stvx128 v63,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82a18964
	if (!ctx.cr6.gt) goto loc_82A18964;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a186a8
	ctx.lr = 0x82A18938;
	sub_82A186A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18768
	ctx.lr = 0x82A18940;
	sub_82A18768(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,61980
	ctx.r10.u64 = ctx.r10.u64 | 61980;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82a18964
	if (!ctx.cr6.gt) goto loc_82A18964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a18848
	ctx.lr = 0x82A18964;
	sub_82A18848(ctx, base);
loc_82A18964:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A18974"))) PPC_WEAK_FUNC(sub_82A18974);
PPC_FUNC_IMPL(__imp__sub_82A18974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18978"))) PPC_WEAK_FUNC(sub_82A18978);
PPC_FUNC_IMPL(__imp__sub_82A18978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A18980;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a184d0
	ctx.lr = 0x82A18998;
	sub_82A184D0(ctx, base);
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// stvx128 v63,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// li r31,8
	ctx.r31.s64 = 8;
loc_82A189AC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a187d8
	ctx.lr = 0x82A189B8;
	sub_82A187D8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r29,r29,608
	ctx.r29.s64 = ctx.r29.s64 + 608;
	// bne 0x82a189ac
	if (!ctx.cr0.eq) goto loc_82A189AC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A189D0"))) PPC_WEAK_FUNC(sub_82A189D0);
PPC_FUNC_IMPL(__imp__sub_82A189D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A189D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82a18a20
	if (!ctx.cr6.eq) goto loc_82A18A20;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82a18a20
	if (!ctx.cr6.eq) goto loc_82A18A20;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82a18a24
	if (ctx.cr6.eq) goto loc_82A18A24;
loc_82A18A20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A18A24:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a18a40
	if (ctx.cr0.eq) goto loc_82A18A40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a184d0
	ctx.lr = 0x82A18A38;
	sub_82A184D0(ctx, base);
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A18A40:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a184d0
	ctx.lr = 0x82A18A4C;
	sub_82A184D0(ctx, base);
	// lvx128 v1,r0,r31
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r0,r3
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// bl 0x82a18558
	ctx.lr = 0x82A18A58;
	sub_82A18558(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a18a94
	if (ctx.cr0.eq) goto loc_82A18A94;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// li r29,8
	ctx.r29.s64 = 8;
loc_82A18A6C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a18a84
	if (!ctx.cr0.eq) goto loc_82A18A84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a187d8
	ctx.lr = 0x82A18A84;
	sub_82A187D8(ctx, base);
loc_82A18A84:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,608
	ctx.r30.s64 = ctx.r30.s64 + 608;
	// bne 0x82a18a6c
	if (!ctx.cr0.eq) goto loc_82A18A6C;
loc_82A18A94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A18A9C"))) PPC_WEAK_FUNC(sub_82A18A9C);
PPC_FUNC_IMPL(__imp__sub_82A18A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18AA0"))) PPC_WEAK_FUNC(sub_82A18AA0);
PPC_FUNC_IMPL(__imp__sub_82A18AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A18AA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lfs f0,5180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mulli r11,r10,608
	ctx.r11.s64 = ctx.r10.s64 * 608;
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r27,r11,24
	ctx.r27.s64 = ctx.r11.s64 + 24;
	// beq 0x82a18b74
	if (ctx.cr0.eq) goto loc_82A18B74;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82a18b74
	if (!ctx.cr6.gt) goto loc_82A18B74;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a184d0
	ctx.lr = 0x82A18B08;
	sub_82A184D0(ctx, base);
	// lvx128 v1,r0,r30
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r0,r3
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// bl 0x82a18558
	ctx.lr = 0x82A18B14;
	sub_82A18558(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a18b74
	if (ctx.cr0.eq) goto loc_82A18B74;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a186a8
	ctx.lr = 0x82A18B24;
	sub_82A186A8(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r11,r11,-3572
	ctx.r11.s64 = ctx.r11.s64 + -3572;
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a18b60
	if (!ctx.cr6.gt) goto loc_82A18B60;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A18B60:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a18b70
	if (!ctx.cr6.gt) goto loc_82A18B70;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82A18B70:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A18B74:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r3,24032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a18b9c
	if (ctx.cr6.eq) goto loc_82A18B9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A18B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A18B9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

